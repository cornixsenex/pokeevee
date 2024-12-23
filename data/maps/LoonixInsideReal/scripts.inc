LoonixInsideReal_MapScripts::
# 6 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 0
	goto_if_eq LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
	.2byte 0


LoonixInsideReal_Script_ShowGrannyKitchen::
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_GrannyScene1::
# 27 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 29 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 31 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 33 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 34 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 36 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 37 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 40 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 42 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 43 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 45 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 49 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 50 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 52 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 55 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
	return


LoonixInsideReal_Script_TV::
# 62 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_TV_Text_0, MSGBOX_SIGN
# 64 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Statue::
# 69 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 71 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 76 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 77 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 78 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 83 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 85 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 86 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 87 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 93 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 94 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 95 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 99 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 100 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 104 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 105 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 106 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 107 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 111 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 124 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 133 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 134 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 135 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 140 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 141 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 1
	goto_if_eq LoonixInsideReal_Script_Grandma_2
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_1
LoonixInsideReal_Script_Grandma_1:
# 147 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0
	goto LoonixInsideReal_Script_Grandma_1


# 151 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 152 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 153 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 154 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 157 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 158 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 159 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 163 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 163 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 164 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 164 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 164 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 165 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 166 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 169 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 170 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 171 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 172 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 175 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 176 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 179 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 180 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 183 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 184 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 187 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 191 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

LoonixInsideReal_Script_TV_Text_0:
# 63 "data/maps/LoonixInsideReal/scripts.pory"
	.string "MEW has returned!$"

LoonixInsideReal_Script_Statue_Text_0:
# 70 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 77 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 85 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_Script_Grandma_Text_1:
# 145 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 199 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 207 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 211 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right {LEAF}$"
