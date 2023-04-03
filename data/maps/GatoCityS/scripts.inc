GatoCityS_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_SALTYSPITOON_STATE
	case 1, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	case 25, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	case 26, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	case 27, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	case 35, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	case 36, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	case 37, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	case 44, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var4
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var44
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 25, GatoCityS_EventScript_FacePlayerRight
	map_script_2 VAR_SALTYSPITOON_STATE, 26, GatoCityS_EventScript_FacePlayerUp
	map_script_2 VAR_SALTYSPITOON_STATE, 27, GatoCityS_EventScript_FacePlayerLeft
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityS_EventScript_FacePlayerRight
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityS_EventScript_FacePlayerUp
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityS_EventScript_FacePlayerLeft
	.2byte 0

GatoCityS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SALTYSPITOON_STATE, 25, GatoCityS_EventScript_Return
	map_script_2 VAR_SALTYSPITOON_STATE, 26, GatoCityS_EventScript_Return
	map_script_2 VAR_SALTYSPITOON_STATE, 27, GatoCityS_EventScript_Return
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityS_EventScript_ShowSWHJ
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityS_EventScript_ShowSWHJ
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityS_EventScript_ShowSWHJ
	map_script_2 VAR_SALTYSPITOON_STATE, 44, GatoCityS_EventScript_ResetSS
	.2byte 0


GatoCityS_EventScript_ResetSS::
	setflag FLAG_TEMP_1
	setvar VAR_SALTYSPITOON_STATE, 4
	end


GatoCityS_EventScript_FacePlayerRight::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end


GatoCityS_EventScript_FacePlayerUp::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


GatoCityS_EventScript_FacePlayerLeft::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	end


GatoCityS_EventScript_Return::
	compare VAR_SWHJ_STATE, 4
	goto_if_eq GatoCityS_EventScript_Return_2
	setvar VAR_SALTYSPITOON_STATE, 3
GatoCityS_EventScript_Return_1:
	end

GatoCityS_EventScript_Return_2:
	call GatoCityS_EventScript_UnlockSaltySpitoon
	goto GatoCityS_EventScript_Return_1


GatoCityS_EventScript_ShowSWHJ::
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM_SWHJ
	closemessage
	destroy_field_pic 20
	delay 5
	warp MAP_GATO_CITY_E, 14, 20
	waitstate
	end


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1::
	removeobject 3
	setobjectxyperm 4, 38, 8
	setobjectxyperm 5, 39, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2::
	removeobject 3
	removeobject 4
	setobjectxyperm 5, 38, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var4::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var44::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectxyperm 2, 36, 8
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_WatchSeller::
	lock
	msgbox GatoCityS_Text_WatchSeller1
	waitmessage
	pokemart GatoCityS_Mart_WatchSeller
	msgbox GatoCityS_Text_WatchSeller2
	release
	end


	.align 2
GatoCityS_Mart_WatchSeller:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

GatoCityS_EventScript_SaltySpitoon_M3::
	compare VAR_SALTYSPITOON_STATE, 2
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_M3_2
GatoCityS_EventScript_SaltySpitoon_M3_1:
	lock
	switch VAR_SALTYSPITOON_STATE
	case 0, GatoCityS_EventScript_SaltySpitoon_M3_6
	case 1, GatoCityS_EventScript_SaltySpitoon_M3_7
	case 2, GatoCityS_EventScript_SaltySpitoon_M3_8
GatoCityS_EventScript_SaltySpitoon_M3_4:
	release
	return

GatoCityS_EventScript_SaltySpitoon_M3_2:
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	goto GatoCityS_EventScript_SaltySpitoon_M3_1

GatoCityS_EventScript_SaltySpitoon_M3_6:
	msgbox GatoCityS_Text_SaltySpitoon_M3A
	closemessage
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	delay 15
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 18, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_M1B
	closemessage
	destroy_field_pic 18
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
	closemessage
	destroy_field_pic 20
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 3, Common_Movement_WalkLeft
	applymovement 4, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 1
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_7:
	msgbox GatoCityS_Text_SaltySpitoon_M3B
	closemessage
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	delay 15
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 19, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_M2A
	closemessage
	destroy_field_pic 19
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 19, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
	closemessage
	destroy_field_pic 19
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
	closemessage
	destroy_field_pic 20
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 4, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 2
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_8:
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_M3_4


GatoCityS_EventScript_M3Exit::
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM2
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 17, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_M3C
	closemessage
	destroy_field_pic 17
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM3
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 17, 190, 98
	msgbox GatoCityS_EventScript_M3Exit_Text_0
	closemessage
	destroy_field_pic 17
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 5, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 3
	release
	return


GatoCityS_EventScript_SaltySpitoon_M2::
	compare VAR_SALTYSPITOON_STATE, 1
	goto_if_ne GatoCityS_EventScript_SaltySpitoon_M2_2
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
GatoCityS_EventScript_SaltySpitoon_M2_1:
	release
	end

GatoCityS_EventScript_SaltySpitoon_M2_2:
	faceplayer
	lock
	msgbox GatoCityS_Text_SaltySpitoon_M2
	closemessage
	applymovement 4, Common_Movement_FaceLeft
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_M2_1


GatoCityS_EventScript_SaltySpitoon_M2Exit::
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 19, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_M2A
	closemessage
	destroy_field_pic 19
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 19, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
	closemessage
	destroy_field_pic 19
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
	closemessage
	destroy_field_pic 20
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 4, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 2
	return


GatoCityS_EventScript_SaltySpitoon_M1::
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 18, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_M1B
	closemessage
	destroy_field_pic 18
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
	closemessage
	destroy_field_pic 20
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 3, Common_Movement_WalkLeft
	applymovement 4, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 1
	return


GatoCityS_EventScript_SaltySpitoon_DM::
	lock
	switch VAR_SALTYSPITOON_STATE
	case 0, GatoCityS_EventScript_SaltySpitoon_DM_3
	case 1, GatoCityS_EventScript_SaltySpitoon_DM_4
	case 2, GatoCityS_EventScript_SaltySpitoon_DM_5
	case 3, GatoCityS_EventScript_SaltySpitoon_DM_6
	case 4, GatoCityS_EventScript_SaltySpitoon_DM_7
GatoCityS_EventScript_SaltySpitoon_DM_1:
	release
	end

GatoCityS_EventScript_SaltySpitoon_DM_3:
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_8
	call GatoCityS_EventScript_SaltySpitoon_M1
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_4:
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_11
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_5:
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_14
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_6:
	faceplayer
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM_NoEntry
	closemessage
	destroy_field_pic 20
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_WEST, GatoCityS_EventScript_SaltySpitoon_DM_19
	case DIR_NORTH, GatoCityS_EventScript_SaltySpitoon_DM_20
	case DIR_EAST, GatoCityS_EventScript_SaltySpitoon_DM_21
GatoCityS_EventScript_SaltySpitoon_DM_17:
	call GatoCityS_EventScript_DM_WHJ
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_7:
	faceplayer
	call GatoCityS_EventScript_OpenSaltySpitoon
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_8:
	faceplayer
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
	closemessage
	destroy_field_pic 20
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_11:
	faceplayer
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
	closemessage
	destroy_field_pic 20
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_14:
	faceplayer
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
	closemessage
	destroy_field_pic 20
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_19:
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_22
	setvar VAR_SALTYSPITOON_STATE, 7
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_20:
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_25
	setvar VAR_SALTYSPITOON_STATE, 6
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_21:
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_28
	setvar VAR_SALTYSPITOON_STATE, 5
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_22:
	setvar VAR_SALTYSPITOON_STATE, 17
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_25:
	setvar VAR_SALTYSPITOON_STATE, 16
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_28:
	setvar VAR_SALTYSPITOON_STATE, 15
	goto GatoCityS_EventScript_SaltySpitoon_DM_17


GatoCityS_EventScript_DM_WHJ::
	warp MAP_GATO_CITY_DT, 52, 21
	waitstate
	end


GatoCityS_EventScript_UnlockSaltySpitoon::
	setvar VAR_SALTYSPITOON_STATE, 4
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySpitoon_DM_Pass
	closemessage
	destroy_field_pic 20
	delay 5
	call GatoCityS_EventScript_OpenSaltySpitoon
	return


GatoCityS_EventScript_OpenSaltySpitoon::
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_DM_Welcome
	closemessage
	destroy_field_pic 20
	delay 5
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_OpenSaltySpitoon_5
GatoCityS_EventScript_OpenSaltySpitoon_4:
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_3
GatoCityS_EventScript_OpenSaltySpitoon_1:
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

GatoCityS_EventScript_OpenSaltySpitoon_2:
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	setflag FLAG_TEMP_1
	setobjectxyperm 2, 38, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_3:
	applymovement 2, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	setflag FLAG_TEMP_1
	setobjectxyperm 2, 36, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_5:
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_2
	goto GatoCityS_EventScript_OpenSaltySpitoon_4


GatoCityS_Movement_Pacer:
	walk_left
	walk_left
	walk_left
	walk_right
	walk_right
	walk_right
	step_end

GatoCityS_EventScript_SaltySpitoon_M3_Text_0:
	.string "Alright, go right ahead.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_1:
	.string "Yeah, so?$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_2:
	.string "Without any milk.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_3:
	.string "Uhh, right this way.$"

GatoCityS_EventScript_M3Exit_Text_0:
	.string "Thanks, Reg.$"

GatoCityS_EventScript_SaltySpitoon_DM_Text_0:
	.string "What are you looking at?$"

GatoCityS_Text_DM_Welcome::
	.string "Welcome to the Salty Spitoon. Go on in.$"

GatoCityS_Text_WatchSeller1::
	.string "Hey kid, you wanna buy a watch? Come\n"
	.string "here.$"

GatoCityS_Text_WatchSeller2::
	.string "You don't know who I am! We never\n"
	.string "talked...$"

GatoCityS_Text_SaltySpitoon_M1B::
	.string "How tough am I? How tough am I!? Just\n"
	.string "look at my muscles! I've got muscles on\l"
	.string "my muscles! I've got muscles on my\l"
	.string "eyeballs! Aaarrrrggghhh!$"

GatoCityS_Text_SaltySpitoon_M3A::
	.string "Huh? What was that? Did someone throw\n"
	.string "a piece of paper at me?$"

GatoCityS_Text_SaltySpitoon_M3B::
	.string "Hey! Quit shovin and wait your turn in\n"
	.string "line!$"

GatoCityS_Text_SaltySpitoon_M3C::
	.string "Yeah, and check it out I can even make\n"
	.string "it dance. Uhh! Uhhh! Uhhhhh!$"

GatoCityS_Text_SaltySpitoon_DM1::
	.string "Welcome to the Salty Spitoon. How tough\n"
	.string "are ya?$"

GatoCityS_Text_SaltySpitoon_DM2::
	.string "Alright, now it's a party! Is that some\n"
	.string "new ink you got there?$"

GatoCityS_Text_SaltySpitoon_DM3::
	.string "Looks sweet, go on in buddy.$"

GatoCityS_Text_SaltySpitoon_M2A::
	.string "How tough am I? I had a bowl of nails\n"
	.string "for breakfast!$"

GatoCityS_Text_SaltySpitoon_M2::
	.string "This is the line to get into The Salty\n"
	.string "Spitoon, the roughest toughest\l"
	.string "gangster bar ever to be built in the\l"
	.string "city. Only the toughest of the tough\l"
	.string "can get in!$"

GatoCityS_Text_SaltySpitoon_DM_NoEntry::
	.string "Woah there little man where do you\n"
	.string "think you're going? This is The Salty\l"
	.string "Spitoon, it's way too rough for you. Why\l"
	.string "don't you go hang out over there?$"

GatoCityS_Text_SaltySpitoon_DM_Pass::
	.string "Whats that? You got kicked out of\n"
	.string "Weenie Hut Jr's for fighting? Yeah I\l"
	.string "guess that is pretty tough.$"

GatoCityS_Text_SaltySpitoon_DM_SWHJ::
	.string "Actually, I was pointing to the place\n"
	.string "down the street$"
