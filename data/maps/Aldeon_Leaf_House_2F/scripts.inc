Aldeon_Leaf_House_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Aldeon_Leaf_House_2F_OnTransition
	return

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 1, Aldeon_Leaf_House_2F_OnWarp
	.2byte 0

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 1, Aldeon_Leaf_House_2F_OnFrame
	.2byte 0


Aldeon_Leaf_House_2F_OnTransition::
	compare VAR_ROUTE1_STATE, 1
	goto_if_eq Aldeon_Leaf_House_2F_OnTransition_2
Aldeon_Leaf_House_2F_OnTransition_1:
	end

Aldeon_Leaf_House_2F_OnTransition_2:
	addobject 1
	setobjectxyperm 1, 6, 5
	goto Aldeon_Leaf_House_2F_OnTransition_1


Aldeon_Leaf_House_2F_OnWarp::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	call Aldeon_Leaf_House_2F_OnTransition
	end


Aldeon_Leaf_House_2F_OnFrame::
	setvar VAR_ROUTE1_STATE, 2
	setflag FLAG_ROUTE1_RIVAL
	lockall
	setobjectxyperm 1, 6, 5
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_PlayerHump
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_WalkLeft
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Aldeon_Leaf_House_2F_Text_Leaf1, MSGBOX_YESNO
	special NameRival
	waitstate
	msgbox Aldeon_Leaf_House_2F_Text_Leaf2
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_WalkLeft
	applymovement 1, Aldeon_Leaf_House_2F_Movement_Leaf1
	waitmovement 0
	closemessage
	destroy_field_pic 4
	applymovement 1, Aldeon_Leaf_House_2F_Movement_Leaf2
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_Movement_Player2
	waitmovement 0
	removeobject 1
	releaseall
	end


Aldeon_Leaf_House_2F_EventScript_Bed::
	lockall
	msgbox Aldeon_Leaf_House_2F_Text_Bed, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_2F_EventScript_Bed_2
Aldeon_Leaf_House_2F_EventScript_Bed_1:
	releaseall
	end

Aldeon_Leaf_House_2F_EventScript_Bed_2:
	closemessage
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_2F_EventScript_Bed_4
	playfanfare MUS_HEAL
	fadescreen 1
	waitfanfare
	fadescreen 0
	goto Aldeon_Leaf_House_2F_EventScript_Bed_1

Aldeon_Leaf_House_2F_EventScript_Bed_4:
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_2F_EventScript_Bed_1


Aldeon_Leaf_House_2F_PlayerHump:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	emote_exclamation_mark
	step_end

Aldeon_Leaf_House_2F_LeafDownStairs:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

Aldeon_Leaf_House_2F_WalkLeft:
	walk_left
	face_right
	step_end

Aldeon_Leaf_House_2F_Movement_Player2:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

Aldeon_Leaf_House_2F_Movement_Leaf1:
	walk_left
	walk_up
	walk_left
	face_down
	step_end

Aldeon_Leaf_House_2F_Movement_Leaf2:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Aldeon_Leaf_House_2F_Text_Leaf1::
	.string "Oh {PLAYER} I just had such a lovey\n"
	.string "time. I'm so happy you kicked that\l"
	.string "looser's ass. I wonder who that guy was\l"
	.string "anyways?\p"
	.string "Do you know his name?$"

Aldeon_Leaf_House_2F_Text_Leaf2::
	.string "So his name must be {RIVAL} that\n"
	.string "makes sense. C'mon downstairs and you\l"
	.string "can meet my dad.$"

Aldeon_Leaf_House_2F_Text_Bed::
	.string "It's Leaf's bed!\p"
	.string "Would you like to take a rest?$"
