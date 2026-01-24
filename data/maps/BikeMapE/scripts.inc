BikeMapE_MapScripts::
# 6 "data/maps/BikeMapE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 23
	goto_if_eq BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 8 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_SetupUlyssesSceneIntro
	return


BikeMapE_Script_SetupUlyssesSceneIntro::
# 16 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ULYSSES, 75, 36
# 17 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ULYSSES, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD1, 74, 35
# 20 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD1, MOVEMENT_TYPE_FACE_DOWN
# 22 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD2, 76, 35
# 23 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD2, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ARGUS, 0, 0
# 26 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ARGUS, MOVEMENT_TYPE_INVISIBLE
	return


BikeMapE_Script_UlyssesSceneIntroA::
# 32 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 1
# 33 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntroB::
# 37 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 2
# 38 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntroC::
# 42 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 3
# 43 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntro::
# 48 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 49 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesIntro1
# 50 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 51 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 53 "data/maps/BikeMapE/scripts.pory"
	switch VAR_TEMP_6
# 54 "data/maps/BikeMapE/scripts.pory"
	case 1, BikeMapE_Script_UlyssesSceneIntro_3
# 60 "data/maps/BikeMapE/scripts.pory"
	case 2, BikeMapE_Script_UlyssesSceneIntro_4
# 62 "data/maps/BikeMapE/scripts.pory"
	case 3, BikeMapE_Script_UlyssesSceneIntro_5
# 69 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Script_UlyssesSceneIntro_Text_0
# 70 "data/maps/BikeMapE/scripts.pory"
	closemessage
	end

BikeMapE_Script_UlyssesSceneIntro_1:
# 73 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 75 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_ExclamationMark
# 76 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 78 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_FaceDown
# 79 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 81 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 82 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesIntro2
# 83 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 84 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 86 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_FaceUp
# 87 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 89 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_ULYSSES_STATE, 24
	end

BikeMapE_Script_UlyssesSceneIntro_3:
# 55 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 56 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 57 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 58 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 59 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	goto BikeMapE_Script_UlyssesSceneIntro_1

BikeMapE_Script_UlyssesSceneIntro_4:
# 61 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto BikeMapE_Script_UlyssesSceneIntro_1

BikeMapE_Script_UlyssesSceneIntro_5:
# 63 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 64 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 65 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 66 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 67 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	goto BikeMapE_Script_UlyssesSceneIntro_1


BikeMapE_Script_SwineHerd1::
# 95 "data/maps/BikeMapE/scripts.pory"
	faceplayer
# 96 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE < 24, 0
	goto_if_ne BikeMapE_Script_SwineHerd1_2
# 98 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_Script_SwineHerd1_3
# 101 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_PostUlysses
BikeMapE_Script_SwineHerd1_1:
# 103 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 104 "data/maps/BikeMapE/scripts.pory"
	unfaceplayer
	end

BikeMapE_Script_SwineHerd1_2:
# 97 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_AnteUlysses
	goto BikeMapE_Script_SwineHerd1_1

BikeMapE_Script_SwineHerd1_3:
# 99 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_DuringUlysses
	goto BikeMapE_Script_SwineHerd1_1


BikeMapE_Script_SwineHerd2::
# 109 "data/maps/BikeMapE/scripts.pory"
	faceplayer
# 110 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE < 24, 0
	goto_if_ne BikeMapE_Script_SwineHerd2_2
# 112 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_Script_SwineHerd2_3
# 115 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_PostUlysses
BikeMapE_Script_SwineHerd2_1:
# 117 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 118 "data/maps/BikeMapE/scripts.pory"
	unfaceplayer
	end

BikeMapE_Script_SwineHerd2_2:
# 111 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_AnteUlysses
	goto BikeMapE_Script_SwineHerd2_1

BikeMapE_Script_SwineHerd2_3:
# 113 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_DuringUlysses
	goto BikeMapE_Script_SwineHerd2_1


BikeMapE_Script_UlyssesSceneIntro_Text_0:
# 69 "data/maps/BikeMapE/scripts.pory"
	.string "VAR_TEMP_6 OOB$"

BikeMapE_Text_SwineHerd1_AnteUlysses::
# 122 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd1_DuringUlysses::
# 126 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd1_PostUlysses::
# 130 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_AnteUlysses::
# 134 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_DuringUlysses::
# 138 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_PostUlysses::
# 142 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesIntro1::
# 146 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesIntro2::
# 150 "data/maps/BikeMapE/scripts.pory"
	.string "$"
