LoonixInsideReal_MapScripts::
# 2 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_OnWarp
	return


LoonixInsideReal_OnWarp::
# 8 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_ROUTE101_STATE, 1
	goto_if_lt LoonixInsideReal_OnWarp_2
LoonixInsideReal_OnWarp_1:
	end

LoonixInsideReal_OnWarp_2:
# 9 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 10 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
	goto LoonixInsideReal_OnWarp_1


Watch_TV::
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox Watch_TV_Text_0, MSGBOX_SIGN
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_EventScript_Statue::
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_Statue_Text_0
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_EventScript_Junk::
# 30 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 31 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_Junk_Text_0
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_EventScript_Special::
# 37 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 38 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_Special_Text_0
# 40 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 41 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_EventScript_GrandmaTV::
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 48 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 49 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 50 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 51 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 52 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_GrandmaTV_Text_0
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 55 "data/maps/LoonixInsideReal/scripts.pory"
	load_field_pic 2, 190, 98
# 56 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_GrandmaTV_Text_1
# 57 "data/maps/LoonixInsideReal/scripts.pory"
	destroy_field_pic 2
# 58 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 59 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 62 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 64 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 65 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 66 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 69 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 72 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 75 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 76 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_ROUTE101_STATE, 1
# 77 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 78 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 79 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 81 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_EventScript_PreventExit::
# 87 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 88 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_PreventExit_Text_0
# 89 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_EventScript_Grandma::
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_ROUTE101_STATE, 1
	goto_if_eq LoonixInsideReal_EventScript_Grandma_2
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_Grandma_Text_1
LoonixInsideReal_EventScript_Grandma_1:
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_EventScript_Grandma_2:
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_EventScript_Grandma_Text_0
	goto LoonixInsideReal_EventScript_Grandma_1


# 107 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 113 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 118 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 125 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 126 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 131 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 135 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 136 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 139 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 143 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

Watch_TV_Text_0:
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	.string "MEW has returned!$"

LoonixInsideReal_EventScript_Statue_Text_0:
# 24 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_EventScript_Junk_Text_0:
# 31 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_EventScript_Special_Text_0:
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_EventScript_GrandmaTV_Text_0:
# 52 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_EventScript_GrandmaTV_Text_1:
# 56 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_EventScript_PreventExit_Text_0:
# 88 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_EventScript_Grandma_Text_0:
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_EventScript_Grandma_Text_1:
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"
