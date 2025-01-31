Ardor_Uni_ArtClass_MapScripts::
# 6 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 11 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, Ardor_Uni_ArtClass_EventScript_FacePlayerLeft
# 8 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, Ardor_Uni_ArtClass_EventScript_FacePlayerRight
	.2byte 0

Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, Ardor_Uni_ArtClass_EventScript_Test
# 13 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, Ardor_Uni_ArtClass_EventScript_Test
	.2byte 0


Ardor_Uni_ArtClass_EventScript_FacePlayerLeft::
# 19 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 20 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	turnobject 1, DIR_EAST
	end


Ardor_Uni_ArtClass_EventScript_FacePlayerRight::
# 25 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 26 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	turnobject 1, DIR_WEST
	end


Ardor_Uni_ArtClass_EventScript_Teacher::
# 31 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	lock
# 32 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	faceplayer
# 33 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	checktrainerflag TRAINER_UNI_ART
	goto_if 1, Ardor_Uni_ArtClass_EventScript_Teacher_2
# 37 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	msgbox Ardor_Uni_ArtClass_Text_BeginArt, MSGBOX_YESNO
# 38 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ArtClass_EventScript_Teacher_6
Ardor_Uni_ArtClass_EventScript_Teacher_5:
# 41 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	msgbox Ardor_Uni_ArtClass_Text_ReturnSoon
# 42 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	closemessage
Ardor_Uni_ArtClass_EventScript_Teacher_1:
# 44 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 45 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	waitmovement 0
# 46 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	release
	end

Ardor_Uni_ArtClass_EventScript_Teacher_2:
# 34 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	msgbox Ardor_Uni_ArtClass_Text_ClassFinished
# 35 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArtClass_EventScript_Teacher_1

Ardor_Uni_ArtClass_EventScript_Teacher_6:
# 39 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	call Ardor_Uni_ArtClass_EventScript_DoArt
	goto Ardor_Uni_ArtClass_EventScript_Teacher_5


Ardor_Uni_ArtClass_EventScript_DoArt::
# 52 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 53 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_ArtClass_EventScript_DoArt_2
Ardor_Uni_ArtClass_EventScript_DoArt_1:
# 56 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	warpsilent MAP_ART_CANVAS, 32, 32
# 57 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	waitstate
	end

Ardor_Uni_ArtClass_EventScript_DoArt_2:
# 54 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	setvar VAR_CANVAS_STEP_COUNTER, 100
	goto Ardor_Uni_ArtClass_EventScript_DoArt_1


Ardor_Uni_ArtClass_EventScript_Test::
# 62 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	setvar VAR_CANVAS_STEP_COUNTER, 420
# 63 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 64 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	closemessage
# 65 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_ART, Ardor_Uni_ArtClass_Text_TeacherBattleLost
# 66 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 67 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	msgbox Ardor_Uni_ArtClass_Text_ClassFinished
# 68 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	closemessage
	return


Ardor_Uni_ArtClass_Text_BeginArt::
# 72 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	.string "Salve puer. Magistra Gina sum. Necesse\n"
	.string "est pingere. Praestasne pingere?$"

Ardor_Uni_ArtClass_Text_ReturnSoon::
# 76 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	.string "Reveni cum amore artis.$"

Ardor_Uni_ArtClass_Text_ClassFinished::
# 80 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	.string "Congratulatio! Iam studuisti artem.$"

Ardor_Uni_ArtClass_Text_TeacherBattleLost::
# 84 "data//maps/Ardor_Uni_ArtClass/scripts.pory"
	.string "Pictor es.$"
