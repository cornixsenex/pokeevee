Ardor_Uni_ArtClass_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, Ardor_Uni_ArtClass_EventScript_FacePlayerLeft
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, Ardor_Uni_ArtClass_EventScript_FacePlayerRight
	.2byte 0

Ardor_Uni_ArtClass_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, Ardor_Uni_ArtClass_EventScript_Test
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, Ardor_Uni_ArtClass_EventScript_Test
	.2byte 0


Ardor_Uni_ArtClass_EventScript_FacePlayerLeft::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject 1, DIR_EAST
	end


Ardor_Uni_ArtClass_EventScript_FacePlayerRight::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 1, DIR_WEST
	end


Ardor_Uni_ArtClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_ART
	goto_if 1, Ardor_Uni_ArtClass_EventScript_Teacher_2
	msgbox Ardor_Uni_ArtClass_Text_BeginArt, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ArtClass_EventScript_Teacher_6
Ardor_Uni_ArtClass_EventScript_Teacher_5:
	msgbox Ardor_Uni_ArtClass_Text_ReturnSoon
	closemessage
Ardor_Uni_ArtClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_ArtClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_ArtClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_ArtClass_EventScript_Teacher_1

Ardor_Uni_ArtClass_EventScript_Teacher_6:
	call Ardor_Uni_ArtClass_EventScript_DoArt
	goto Ardor_Uni_ArtClass_EventScript_Teacher_5


Ardor_Uni_ArtClass_EventScript_DoArt::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Ardor_Uni_ArtClass_EventScript_DoArt_2
Ardor_Uni_ArtClass_EventScript_DoArt_1:
	warpsilent MAP_ART_CANVAS, 32, 32
	waitstate
	end

Ardor_Uni_ArtClass_EventScript_DoArt_2:
	setvar VAR_CANVAS_STEP_COUNTER, 100
	goto Ardor_Uni_ArtClass_EventScript_DoArt_1


Ardor_Uni_ArtClass_EventScript_Test::
	setvar VAR_CANVAS_STEP_COUNTER, 420
	msgbox Ardor_Uni_Text_TestIntro
	closemessage
	trainerbattle_no_intro TRAINER_UNI_ART, Ardor_Uni_ArtClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_Incrementvar
	msgbox Ardor_Uni_ArtClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_ArtClass_Text_BeginArt::
	.string "Salve puer. Magistra Gina sum. Necesse\n"
	.string "est pingere. Praestasne pingere?$"

Ardor_Uni_ArtClass_Text_ReturnSoon::
	.string "Reveni cum amore artis.$"

Ardor_Uni_ArtClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti artem.$"

Ardor_Uni_ArtClass_Text_TeacherBattleLost::
	.string "Pictor es.$"
