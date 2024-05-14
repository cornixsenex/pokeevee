Aldeon_Leaf_House_2F_MapScripts::
# 5 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	call Aldeon_Leaf_House_2F_OnTransition
	return

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 1, Aldeon_Leaf_House_2F_OnWarp
	.2byte 0

Aldeon_Leaf_House_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 1, Aldeon_Leaf_House_2F_OnFrame
	.2byte 0


Aldeon_Leaf_House_2F_OnTransition::
# 13 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	compare VAR_ROUTE1_STATE, 1
	goto_if_eq Aldeon_Leaf_House_2F_OnTransition_2
Aldeon_Leaf_House_2F_OnTransition_1:
	end

Aldeon_Leaf_House_2F_OnTransition_2:
# 14 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	addobject 1
# 15 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	setobjectxyperm 1, 6, 5
	goto Aldeon_Leaf_House_2F_OnTransition_1


Aldeon_Leaf_House_2F_OnWarp::
# 21 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	call Aldeon_Leaf_House_2F_OnTransition
	end


Aldeon_Leaf_House_2F_OnFrame::
# 27 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	setvar VAR_ROUTE1_STATE, 2
# 28 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	setflag FLAG_ROUTE1_RIVAL
# 29 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	lockall
# 30 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	setobjectxyperm 1, 6, 5
# 31 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_PlayerHump
# 32 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_WalkLeft
# 34 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	load_field_pic 4, 190, 98
# 36 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	msgbox Aldeon_Leaf_House_2F_Text_Leaf1, MSGBOX_YESNO
# 37 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	special NameRival
# 38 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitstate
# 39 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	msgbox Aldeon_Leaf_House_2F_Text_Leaf2
# 40 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_WalkLeft
# 41 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_2F_Movement_Leaf1
# 42 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	closemessage
# 44 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	destroy_field_pic 4
# 45 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_2F_Movement_Leaf2
# 46 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_2F_Movement_Player2
# 47 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	removeobject 1
# 49 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_2F_EventScript_Bed::
# 54 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	lockall
# 55 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	msgbox Aldeon_Leaf_House_2F_Text_Bed, MSGBOX_YESNO
# 56 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_2F_EventScript_Bed_2
Aldeon_Leaf_House_2F_EventScript_Bed_1:
# 67 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_2F_EventScript_Bed_2:
# 57 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	closemessage
# 58 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_2F_EventScript_Bed_4
# 61 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	playfanfare MUS_HEAL
# 62 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	fadescreen 1
# 63 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitfanfare
# 64 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	fadescreen 0
	goto Aldeon_Leaf_House_2F_EventScript_Bed_1

Aldeon_Leaf_House_2F_EventScript_Bed_4:
# 59 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_2F_EventScript_Bed_1


# 70 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_PlayerHump:
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 71 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_in_place_up
# 72 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	emote_exclamation_mark
	step_end

# 75 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_LeafDownStairs:
# 76 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 77 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 77 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 78 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 78 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 79 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 80 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 80 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_WalkLeft:
# 84 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 85 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	face_right
	step_end

# 88 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_Movement_Player2:
# 89 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 89 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 89 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 90 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 90 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_Movement_Leaf1:
# 94 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 95 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 96 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 97 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	face_down
	step_end

# 100 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
Aldeon_Leaf_House_2F_Movement_Leaf2:
# 101 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 101 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_up
# 102 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 102 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 102 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
# 102 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	walk_left
	step_end

Aldeon_Leaf_House_2F_Text_Leaf1::
# 105 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	.string "Oh {PLAYER} I just had such a lovey\n"
	.string "time. I'm so happy you kicked that\l"
	.string "looser's ass. I wonder who that guy was\l"
	.string "anyways?\p"
	.string "Do you know his name?$"

Aldeon_Leaf_House_2F_Text_Leaf2::
# 109 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	.string "So his name must be {RIVAL} that\n"
	.string "makes sense. C'mon downstairs and you\l"
	.string "can meet my dad.$"

Aldeon_Leaf_House_2F_Text_Bed::
# 113 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	.string "It's Leaf's bed!\p"
	.string "Would you like to take a rest?$"
