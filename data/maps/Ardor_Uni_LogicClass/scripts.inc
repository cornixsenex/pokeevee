Ardor_Uni_LogicClass_MapScripts::
# 6 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 1, Ardor_Uni_LogicClass_EventScript_FacePlayerLeft
# 8 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 2, Ardor_Uni_LogicClass_EventScript_FacePlayerRight
	.2byte 0

Ardor_Uni_LogicClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 1, Ardor_Uni_LogicClass_EventScript_Test
# 13 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 2, Ardor_Uni_LogicClass_EventScript_Test
	.2byte 0


Ardor_Uni_LogicClass_EventScript_FacePlayerLeft::
# 19 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 20 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	turnobject 1, DIR_EAST
	end


Ardor_Uni_LogicClass_EventScript_FacePlayerRight::
# 25 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 26 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	turnobject 1, DIR_WEST
	end


Ardor_Uni_LogicClass_EventScript_Teacher::
# 31 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	lock
# 32 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	faceplayer
# 33 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	checktrainerflag TRAINER_UNI_LOGIC
	goto_if 1, Ardor_Uni_LogicClass_EventScript_Teacher_2
# 37 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	msgbox Ardor_Uni_LogicClass_Text_BeginLogic, MSGBOX_YESNO
# 38 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_LogicClass_EventScript_Teacher_6
Ardor_Uni_LogicClass_EventScript_Teacher_5:
# 41 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	msgbox Ardor_Uni_LogicClass_Text_ReturnSoon
# 42 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	closemessage
Ardor_Uni_LogicClass_EventScript_Teacher_1:
# 44 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 45 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	waitmovement 0
# 46 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	release
	end

Ardor_Uni_LogicClass_EventScript_Teacher_2:
# 34 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	msgbox Ardor_Uni_LogicClass_Text_ClassFinished
# 35 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	closemessage
	goto Ardor_Uni_LogicClass_EventScript_Teacher_1

Ardor_Uni_LogicClass_EventScript_Teacher_6:
# 39 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	call Ardor_Uni_LogicClass_EventScript_DoLogic
	goto Ardor_Uni_LogicClass_EventScript_Teacher_5


Ardor_Uni_LogicClass_EventScript_DoLogic::
# 52 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 53 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_LogicClass_EventScript_DoLogic_2
Ardor_Uni_LogicClass_EventScript_DoLogic_1:
# 56 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	warpsilent MAP_LOGIC_PUZZLE, 8, 12
# 57 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	waitstate
	end

Ardor_Uni_LogicClass_EventScript_DoLogic_2:
# 54 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	setflag FLAG_RETURN_LOGIC_PUZZLE_LEFT
	goto Ardor_Uni_LogicClass_EventScript_DoLogic_1


Ardor_Uni_LogicClass_EventScript_Test::
# 62 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 69
# 63 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 64 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	closemessage
# 65 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_LOGIC, Ardor_Uni_LogicClass_Text_TeacherBattleLost
# 66 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 67 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	msgbox Ardor_Uni_LogicClass_Text_ClassFinished
# 68 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	closemessage
	return


Ardor_Uni_LogicClass_Text_BeginLogic::
# 72 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	.string "Salve puer. Magister Joannes sum.\n"
	.string "Necesse est exolvere enigma.\l"
	.string "Praestasne exolvere enigma?$"

Ardor_Uni_LogicClass_Text_ReturnSoon::
# 76 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	.string "Reveni cum amore logici.$"

Ardor_Uni_LogicClass_Text_ClassFinished::
# 80 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	.string "Congratulatio! Iam studuisti logicum.$"

Ardor_Uni_LogicClass_Text_TeacherBattleLost::
# 84 "data//maps/Ardor_Uni_LogicClass/scripts.pory"
	.string "Logicus es.$"
