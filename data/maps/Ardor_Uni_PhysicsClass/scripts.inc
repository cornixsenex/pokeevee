Ardor_Uni_PhysicsClass_MapScripts::
	.byte 0


Ardor_Uni_PhysicsClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_PHYSICS
	goto_if 1, Ardor_Uni_PhysicsClass_EventScript_Teacher_2
	goto_if_set FLAG_PHYSICS_INTRO, Ardor_Uni_PhysicsClass_EventScript_Teacher_3
	setflag FLAG_PHYSICS_INTRO
	msgbox Ardor_Uni_PhysicsClass_Text_ClassIntro
	closemessage
	msgbox Ardor_Uni_PhysicsClass_Text_BringMagnetType
	closemessage
Ardor_Uni_PhysicsClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_PhysicsClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_PhysicsClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_3:
	goto_if_unset FLAG_PHYSICS_MAGNETDONE, Ardor_Uni_PhysicsClass_EventScript_Teacher_7
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Ardor_Uni_PhysicsClass_Text_WhereIsMyGem
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_7:
	specialvar VAR_RESULT, IsMagnetTypeInParty
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Teacher_10
	msgbox Ardor_Uni_PhysicsClass_Text_BringMagnetType
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_10:
	setflag FLAG_PHYSICS_MAGNETDONE
	call Ardor_Uni_PhysicsClass_EventScript_GemIntro
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1


Ardor_Uni_PhysicsClass_EventScript_GemIntro::
	msgbox Ardor_Uni_PhysicsClass_Text_GemIntro
	closemessage
	clearflag FLAG_PHYSICS_HIDE_GEM
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_GemIntro_2
Ardor_Uni_PhysicsClass_EventScript_GemIntro_1:
	addobject 10
	showobjectat 10, MAP_ARDOR_UNI_PHYSICS_CLASS
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Ardor_Uni_PhysicsClass_Text_WhereIsMyGem
	closemessage
	return

Ardor_Uni_PhysicsClass_EventScript_GemIntro_2:
	setobjectxyperm 10, 7, 3
	goto Ardor_Uni_PhysicsClass_EventScript_GemIntro_1


Ardor_Uni_PhysicsClass_EventScript_Gem::
	lock
	finditem ITEM_FIRE_GEM
	setflag FLAG_PHYSICS_HIDE_GEM
	removeobject 10
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Gem_2
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Gem_3
	applymovement 1, Common_Movement_WalkLeft
Ardor_Uni_PhysicsClass_EventScript_Gem_1:
	waitmovement 0
	msgbox Ardor_Uni_PhysicsClass_Text_Thief
	closemessage
	removeitem ITEM_FIRE_GEM
	clearflag FLAG_OPEN_CLASS_PHYSICS
	msgbox Ardor_Uni_PhysicsClass_Text_BattleIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_LOGIC, Ardor_Uni_LogicClass_Text_TeacherBattleLost
	msgbox Ardor_Uni_LogicClass_Text_ClassFinished
	closemessage
	return

Ardor_Uni_PhysicsClass_EventScript_Gem_2:
	applymovement 1, Common_Movement_WalkRight
	goto Ardor_Uni_PhysicsClass_EventScript_Gem_1

Ardor_Uni_PhysicsClass_EventScript_Gem_3:
	applymovement 1, Common_Movement_WalkRight
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	goto Ardor_Uni_PhysicsClass_EventScript_Gem_1


Ardor_Uni_PhysicsClass_Text_BringMagnetType::
	.string "Reveni cum monstro magnetis.$"

Ardor_Uni_PhysicsClass_Text_WhereIsMyGem::
	.string "Quid? Ubi est gemma mea?$"

Ardor_Uni_PhysicsClass_Text_ClassIntro::
	.string "Salve puer. Magister Clancius sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "physicae. Partes physicarum sum tres:\l"
	.string "electromagnetica, optica, et nuclearis.\l"
	.string "Primum electromagneticam tibi docere.$"

Ardor_Uni_PhysicsClass_Text_ClassFinished::
	.string "Discede numquamque reveni.$"

Ardor_Uni_PhysicsClass_Text_GemIntro::
	.string "Iam revenisti cum monstro magnetis!\n"
	.string "Ergo iam est tempus tibi docere\l"
	.string "physicam opticorum. Physicam\l"
	.string "opticorum demonstrabo cum gemma mea\l"
	.string "rubra.$"

Ardor_Uni_PhysicsClass_Text_Thief::
	.string "Praedo! Gemmam meam despoliavisti!\n"
	.string "Redde gemmam.$"

Ardor_Uni_PhysicsClass_Text_BattleIntro::
	.string "Iam tibi docere multas poenas.$"
