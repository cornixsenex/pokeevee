Ardor_Uni_LogicClass_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_LOGIC_CLASS_STATE, 1, Ardor_Uni_LogicClass_EventScript_FacePlayerLeft
	map_script_2 VAR_LOGIC_CLASS_STATE, 2, Ardor_Uni_LogicClass_EventScript_FacePlayerRight
	.2byte 0

Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LOGIC_CLASS_STATE, 1, Ardor_Uni_LogicClass_EventScript_Test
	map_script_2 VAR_LOGIC_CLASS_STATE, 2, Ardor_Uni_LogicClass_EventScript_Test
	.2byte 0


Ardor_Uni_LogicClass_EventScript_FacePlayerLeft::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 1, DIR_EAST
	end


Ardor_Uni_LogicClass_EventScript_FacePlayerRight::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 1, DIR_WEST
	end


Ardor_Uni_LogicClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_LOGIC
	goto_if 1, Ardor_Uni_LogicClass_EventScript_Teacher_2
	msgbox Ardor_Uni_LogicClass_Text_BeginLogic, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_LogicClass_EventScript_Teacher_6
Ardor_Uni_LogicClass_EventScript_Teacher_5:
	msgbox Ardor_Uni_LogicClass_Text_ReturnSoon
	closemessage
Ardor_Uni_LogicClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_LogicClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_LogicClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_LogicClass_EventScript_Teacher_1

Ardor_Uni_LogicClass_EventScript_Teacher_6:
	call Ardor_Uni_LogicClass_EventScript_DoLogic
	goto Ardor_Uni_LogicClass_EventScript_Teacher_5


Ardor_Uni_LogicClass_EventScript_DoLogic::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_LogicClass_EventScript_DoLogic_2
Ardor_Uni_LogicClass_EventScript_DoLogic_1:
	warpsilent MAP_LOGIC_PUZZLE, 8, 12
	waitstate
	end

Ardor_Uni_LogicClass_EventScript_DoLogic_2:
	setflag FLAG_RETURN_LOGIC_PUZZLE_LEFT
	goto Ardor_Uni_LogicClass_EventScript_DoLogic_1


Ardor_Uni_LogicClass_EventScript_Test::
	setvar VAR_LOGIC_CLASS_STATE, 69
	msgbox Ardor_Uni_Text_TestIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_LOGIC, Ardor_Uni_LogicClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_LogicClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_LogicClass_Text_BeginLogic::
	.string "Salve puer. Magister Joannes sum.\n"
	.string "Necesse est exolvere enigma.\l"
	.string "Praestasne exolvere enigma?$"

Ardor_Uni_LogicClass_Text_ReturnSoon::
	.string "Reveni cum amore logici.$"

Ardor_Uni_LogicClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti logicum.$"

Ardor_Uni_LogicClass_Text_TeacherBattleLost::
	.string "Logicus es.$"
