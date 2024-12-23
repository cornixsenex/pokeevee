LoonixInsideReal_MapScripts::
# 5 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


LoonixInsideReal_Script_TV::
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_TV_Text_0, MSGBOX_SIGN
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Statue::
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 26 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 27 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 34 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 35 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 36 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 41 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 42 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 43 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 44 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 48 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 49 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 50 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 51 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 52 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 55 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 56 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 57 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 58 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 59 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 62 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 64 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 65 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 66 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 69 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 72 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 81 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 82 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 83 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 89 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 1
	goto_if_eq LoonixInsideReal_Script_Grandma_2
# 94 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_1
LoonixInsideReal_Script_Grandma_1:
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0
	goto LoonixInsideReal_Script_Grandma_1


# 100 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 106 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 107 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 111 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 118 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
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
	face_right
	step_end

# 124 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 128 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 132 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 133 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 136 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

LoonixInsideReal_Script_TV_Text_0:
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	.string "MEW has returned!$"

LoonixInsideReal_Script_Statue_Text_0:
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 26 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 34 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 50 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 81 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_Script_Grandma_Text_1:
# 94 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 148 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"
