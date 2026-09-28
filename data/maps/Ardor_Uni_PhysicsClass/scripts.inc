Ardor_Uni_PhysicsClass_MapScripts::
	.byte 0


Ardor_Uni_PhysicsClass_EventScript_Teacher::
# 16 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	lock
# 17 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	faceplayer
# 18 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	checktrainerflag TRAINER_UNI_PHYSICS
	goto_if 1, Ardor_Uni_PhysicsClass_EventScript_Teacher_2
# 21 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	goto_if_set FLAG_PHYSICS_INTRO, Ardor_Uni_PhysicsClass_EventScript_Teacher_3
# 38 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	setflag FLAG_PHYSICS_INTRO
# 39 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_ClassIntro
# 40 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
# 41 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_BringMagnetType
# 42 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
Ardor_Uni_PhysicsClass_EventScript_Teacher_1:
# 44 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 45 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 46 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	release
	end

Ardor_Uni_PhysicsClass_EventScript_Teacher_2:
# 19 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_ClassFinished
# 20 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_3:
# 22 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	goto_if_unset FLAG_PHYSICS_MAGNETDONE, Ardor_Uni_PhysicsClass_EventScript_Teacher_7
# 32 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 33 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 34 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_WhereIsMyGem
# 35 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_7:
# 23 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	specialvar VAR_RESULT, IsMagnetTypeInParty
# 24 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Teacher_10
# 28 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_BringMagnetType
# 29 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1

Ardor_Uni_PhysicsClass_EventScript_Teacher_10:
# 25 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	setflag FLAG_PHYSICS_MAGNETDONE
# 26 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	call Ardor_Uni_PhysicsClass_EventScript_GemIntro
	goto Ardor_Uni_PhysicsClass_EventScript_Teacher_1


Ardor_Uni_PhysicsClass_EventScript_GemIntro::
# 56 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_GemIntro
# 57 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
# 58 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	clearflag FLAG_PHYSICS_HIDE_GEM
# 59 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 60 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_GemIntro_2
Ardor_Uni_PhysicsClass_EventScript_GemIntro_1:
# 63 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	addobject 10
# 64 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	showobjectat 10, MAP_ARDOR_UNI_PHYSICS_CLASS
# 66 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	playse SE_BALL_THROW
# 67 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitse
# 68 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 69 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 70 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_WhereIsMyGem
# 71 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
	return

Ardor_Uni_PhysicsClass_EventScript_GemIntro_2:
# 61 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	setobjectxyperm 10, 7, 3
	goto Ardor_Uni_PhysicsClass_EventScript_GemIntro_1


Ardor_Uni_PhysicsClass_EventScript_Gem::
# 86 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	lock
# 87 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	finditem ITEM_FIRE_GEM
# 88 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	setflag FLAG_PHYSICS_HIDE_GEM
# 89 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	removeobject 10
# 90 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 91 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 92 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 93 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Gem_2
# 95 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Ardor_Uni_PhysicsClass_EventScript_Gem_3
# 100 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft
Ardor_Uni_PhysicsClass_EventScript_Gem_1:
# 102 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 103 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_Thief
# 104 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
# 105 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	removeitem ITEM_FIRE_GEM
# 106 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	clearflag FLAG_OPEN_CLASS_PHYSICS
# 107 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_BattleIntro
# 108 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
# 109 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 110 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_PHYSICS, Ardor_Uni_PhysicsClass_Text_TeacherBattleLost
# 111 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	msgbox Ardor_Uni_PhysicsClass_Text_ClassFinished
# 112 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	closemessage
# 113 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	warpsilent MAP_ARDOR_UNI3F, 7, 10
# 114 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitstate
	return

Ardor_Uni_PhysicsClass_EventScript_Gem_2:
# 94 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
	goto Ardor_Uni_PhysicsClass_EventScript_Gem_1

Ardor_Uni_PhysicsClass_EventScript_Gem_3:
# 96 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 97 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	waitmovement 0
# 98 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
	goto Ardor_Uni_PhysicsClass_EventScript_Gem_1


Ardor_Uni_PhysicsClass_Text_BringMagnetType::
# 118 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Reveni cum monstro magnetis.$"

Ardor_Uni_PhysicsClass_Text_WhereIsMyGem::
# 122 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Quid? Ubi est gemma mea?$"

Ardor_Uni_PhysicsClass_Text_ClassIntro::
# 126 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Salve puer. Magister Clancius sum.\n"
	.string "Necesse est tibi docere scientiam\l"
	.string "physicae. Partes physicarum sum tres:\l"
	.string "electromagnetica, optica, et nuclearis.\l"
	.string "Primum electromagneticam tibi docere.$"

Ardor_Uni_PhysicsClass_Text_TeacherBattleLost::
# 130 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Malum fuit victor$"

Ardor_Uni_PhysicsClass_Text_ClassFinished::
# 134 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Discede numquamque reveni.$"

Ardor_Uni_PhysicsClass_Text_GemIntro::
# 138 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Iam revenisti cum monstro magnetis!\n"
	.string "Ergo iam est tempus tibi docere\l"
	.string "physicam opticorum. Physicam opticorum\l"
	.string "demonstrabo cum gemma mea rubra.$"

Ardor_Uni_PhysicsClass_Text_Thief::
# 142 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Praedo! Gemmam meam despoliavisti!\n"
	.string "Redde gemmam.$"

Ardor_Uni_PhysicsClass_Text_BattleIntro::
# 146 "data/maps/Ardor_Uni_PhysicsClass/scripts.pory"
	.string "Iam tibi docere multas poenas.$"
