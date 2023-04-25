Ardor_Uni_ArchaeologyClass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Ardor_Uni_ArchaeologyClass_OnTransition
	return

Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_INDY_STATE, 0, Ardor_Uni_ArchaeologyClass_EventScript_FaceTA
	.2byte 0


Ardor_Uni_ArchaeologyClass_OnTransition::
	compare VAR_INDY_STATE, 0
	goto_if_eq Ardor_Uni_ArchaeologyClass_OnTransition_2
	compare VAR_INDY_STATE, 1
	goto_if_eq Ardor_Uni_ArchaeologyClass_OnTransition_3
	compare VAR_INDY_STATE, 2
	goto_if_eq Ardor_Uni_ArchaeologyClass_OnTransition_4
	compare VAR_INDY_STATE, 3
	goto_if_eq Ardor_Uni_ArchaeologyClass_OnTransition_5
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
Ardor_Uni_ArchaeologyClass_OnTransition_1:
	end

Ardor_Uni_ArchaeologyClass_OnTransition_2:
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
	call Ardor_Uni_ArchaeologyClass_EventScript_SetupTA
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_3:
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
	clearflag FLAG_CLASS_LEAF
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_4:
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_5:
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1


Ardor_Uni_ArchaeologyClass_EventScript_FaceTA::
	turnobject 6, DIR_SOUTH
	end


Ardor_Uni_ArchaeologyClass_EventScript_SetupTA::
	setobjectxyperm 6, 6, 3
	setflag FLAG_CLASS_LEAF
	setflag FLAG_CLASS_INDY
	return


Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents::
	setflag FLAG_ARCHAELOGY_CLASS_HIDESTUDENTS
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	return


Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels::
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
	removeobject 11
	removeobject 12
	return


Ardor_Uni_ArchaeologyClass_EventScript_AddRebels::
	setvar VAR_INDY_STATE, 3
	clearflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
	addobject 11
	showobjectat 11, MAP_ARDOR_UNI_ARCHAEOLOGY_CLASS
	addobject 12
	showobjectat 12, MAP_ARDOR_UNI_ARCHAEOLOGY_CLASS
	return


Ardor_Uni_ArchaeologyClass_EventScript_LeafTrigger::
	lockall
	call Ardor_Uni_ArchaeologyClass_EventScript_Cutscene
	releaseall
	end


Ardor_Uni_ArchaeologyClass_EventScript_Cutscene::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 8, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy1
	destroy_field_pic 8
	closemessage
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf1
	closemessage
	destroy_field_pic 4
	load_field_pic 8, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy2
	destroy_field_pic 8
	closemessage
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf2
	closemessage
	destroy_field_pic 4
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_StudentApproach1
	waitmovement 0
	msgbox Ardor_Uni_ArchaeologyClass_Text_Student1
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 4, Ardor_Uni_ArchaeologyClass_Movement_StudentApproach2
	waitmovement 0
	msgbox Ardor_Uni_ArchaeologyClass_Text_Student2
	load_field_pic 8, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy3
	destroy_field_pic 8
	closemessage
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_StudentReturn
	applymovement 4, Ardor_Uni_ArchaeologyClass_Movement_StudentReturn
	waitmovement 0
	load_field_pic 8, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy4
	destroy_field_pic 8
	closemessage
	call Ardor_Uni_ArchaeologyClass_EventScript_RebelReveal
	load_field_pic 9, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy5
	destroy_field_pic 9
	closemessage
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf3
	closemessage
	destroy_field_pic 4
	load_field_pic 9, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy6
	destroy_field_pic 9
	closemessage
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf4
	closemessage
	destroy_field_pic 4
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 9, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy7
	closemessage
	destroy_field_pic 9
	load_field_pic 4, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf5
	closemessage
	destroy_field_pic 4
	load_field_pic 9, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy8
	closemessage
	destroy_field_pic 9
	return


Ardor_Uni_ArchaeologyClass_EventScript_RebelReveal::
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_Spin
	applymovement 1, Ardor_Uni_ArchaeologyClass_Movement_Spin
	waitmovement 0
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
	call Ardor_Uni_ArchaeologyClass_EventScript_AddRebels
	applymovement 12, Ardor_Uni_ArchaeologyClass_Movement_Spin
	applymovement 11, Ardor_Uni_ArchaeologyClass_Movement_Spin
	waitmovement 0
	applymovement 12, Common_Movement_FaceDown
	return


Ardor_Uni_ArchaeologyClass_EventScript_Maxie::
	lock
	faceplayer
	load_field_pic 9, 190, 98
	goto_if_set FLAG_BADGE02_GET, Ardor_Uni_ArchaeologyClass_EventScript_Maxie_2
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieNeedFlash
	closemessage
	destroy_field_pic 9
Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1:
	release
	end

Ardor_Uni_ArchaeologyClass_EventScript_Maxie_2:
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieAsk, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_ArchaeologyClass_EventScript_Maxie_5
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieWait
	closemessage
	destroy_field_pic 9
	goto Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1

Ardor_Uni_ArchaeologyClass_EventScript_Maxie_5:
	call Ardor_Uni_ArchaeologyClass_EventScript_BeginAttack
	goto Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1


Ardor_Uni_ArchaeologyClass_EventScript_BeginAttack::
	setvar VAR_INDY_STATE, 4
	clearflag FLAG_PYRAMIDS_HIDEMAXIE
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieBeginAttack
	closemessage
	destroy_field_pic 9
	applymovement 11, Ardor_Uni_ArchaeologyClass_Movement_Rebel1Exit
	waitmovement 0
	removeobject 11
	load_field_pic 9, 190, 98
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieExit
	closemessage
	destroy_field_pic 9
	fadescreen 1
	removeobject 12
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
	fadescreen 0
	return


Ardor_Uni_ArchaeologyClass_Movement_Spin:
	face_left
	face_up
	face_right
	face_down
	face_left
	face_up
	face_down
	face_left
	face_up
	step_end

Ardor_Uni_ArchaeologyClass_Movement_StudentApproach1:
	walk_right
	walk_up
	walk_up
	face_right
	step_end

Ardor_Uni_ArchaeologyClass_Movement_StudentApproach2:
	walk_diag_northeast
	walk_up
	face_left
	step_end

Ardor_Uni_ArchaeologyClass_Movement_StudentReturn:
	walk_down
	walk_down
	walk_left
	face_up
	step_end

Ardor_Uni_ArchaeologyClass_Movement_Rebel1Exit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Ardor_Uni_ArchaeologyClass_Text_Indy1::
	.string "Now please sit down so our class may\n"
	.string "begin$"

Ardor_Uni_ArchaeologyClass_Text_Leaf1::
	.string "I've just told you, we're not here for\n"
	.string "the class. We need your help to...$"

Ardor_Uni_ArchaeologyClass_Text_Indy2::
	.string "Now is not the time! My patience is\n"
	.string "grown thin. This is a school! If you will\l"
	.string "not obey I'll get the dean.$"

Ardor_Uni_ArchaeologyClass_Text_Leaf2::
	.string "I'll not sit down, we need you general.\n"
	.string "Some years ago you fought with my\l"
	.string "father and now he begs your help to\l"
	.string "fight again. The Rockets have...$"

Ardor_Uni_ArchaeologyClass_Text_Student1::
	.string "She knows not what she says!$"

Ardor_Uni_ArchaeologyClass_Text_Student2::
	.string "Just say the word and we'll take care of\n"
	.string "her!$"

Ardor_Uni_ArchaeologyClass_Text_Indy3::
	.string "Be quiet and both of you go sit down.$"

Ardor_Uni_ArchaeologyClass_Text_Indy4::
	.string "Our time has come now we must show\n"
	.string "ourselves.$"

Ardor_Uni_ArchaeologyClass_Text_Indy5::
	.string "I hope you will forgive us our disguise\n"
	.string "and please allow us an introduction. My\l"
	.string "name truly is Magnus Maximus, I am the\l"
	.string "leader of this rebel band. When we were\l"
	.string "forced to hide from the Rockets I took\l"
	.string "up that disguise to lie in wait. As fate\l"
	.string "would have it I had asked for\l"
	.string "{PLAYER} to meet me here with the\l"
	.string "intention of recruiting him into our\l"
	.string "rebel band but he was here for me.$"

Ardor_Uni_ArchaeologyClass_Text_Leaf3::
	.string "So you'll do it!$"

Ardor_Uni_ArchaeologyClass_Text_Indy6::
	.string "It is our only purpose to destroy the\n"
	.string "Rocket Party and retake our land. Now\l"
	.string "tell me girl who is your father and what\l"
	.string "is our need of urgent action now?$"

Ardor_Uni_ArchaeologyClass_Text_Leaf4::
	.string "My father served with you in the great\n"
	.string "war and we have travelled far, from\l"
	.string "Clara's Church to bring you the most\l"
	.string "tragic horrid news. The Rockets have\l"
	.string "imprisoned Mew itself$"

Ardor_Uni_ArchaeologyClass_Text_Indy7::
	.string "Impossible!$"

Ardor_Uni_ArchaeologyClass_Text_Leaf5::
	.string "{PLAYER} saw it for himself$"

Ardor_Uni_ArchaeologyClass_Text_Indy8::
	.string "That certainly explains the urgency. We\n"
	.string "must make our attack quickly before\l"
	.string "they end the universe with this evil.\l"
	.string "But still attacking now would be\l"
	.string "foolish. We need many allies if we shall\l"
	.string "win. Many of our best men are being held\l"
	.string "in a Rocket prison deep underground.\l"
	.string "With your help {PLAYER} we'll need to\l"
	.string "free those men. The prison is inside\l"
	.string "the labyrinth which only heroes can\l"
	.string "exit alive. Many foul creatures and a\l"
	.string "wicked maze mean certain death to most\l"
	.string "who travel there. I knew one day I'd\l"
	.string "need to free those men and in my\l"
	.string "disguise as the professor I made many\l"
	.string "daring trips to the cave. I know the\l"
	.string "way to their filthy prison and I will\l"
	.string "guide you through the labyrinth.\l"
	.string "However once we commonece the attack\l"
	.string "there will be no chance for us to turn\l"
	.string "back. When you are ready {PLAYER} we\l"
	.string "shall depart.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieAsk::
	.string "Are you ready to start the battle\n"
	.string "{PLAYER}?$"

Ardor_Uni_ArchaeologyClass_Text_MaxieWait::
	.string "We'll wait for you to be fully prepared.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieNeedFlash::
	.string "I'm sorry {PLAYER} you're not ready to\n"
	.string "go. Before we travel to the depths of\l"
	.string "hell you must learn how to use the HM\l"
	.string "FLASH.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieBeginAttack::
	.string "The die is cast. ALEA IACTA EST. Arise\n"
	.string "arise rebels of the desert! Your time is\l"
	.string "now rise up and sieze the school!$"

Ardor_Uni_ArchaeologyClass_Text_MaxieExit::
	.string "Now hurry {PLAYER} and meet me at the\n"
	.string "cave entrance on the far south side of\l"
	.string "the sand.$"
