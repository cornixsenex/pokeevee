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
	return


LoonixInsideReal_Script_TV::
# 59 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_TV_Text_0, MSGBOX_SIGN
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Statue::
# 66 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 75 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 81 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 82 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 83 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 89 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 91 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 93 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 94 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 95 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 97 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 99 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 100 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 104 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 105 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 106 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 107 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 110 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 111 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 114 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 117 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 119 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 120 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 121 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 122 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 132 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 137 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 138 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 1
	goto_if_eq LoonixInsideReal_Script_Grandma_2
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_1
LoonixInsideReal_Script_Grandma_1:
# 144 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0
	goto LoonixInsideReal_Script_Grandma_1


# 148 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 149 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 150 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 151 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 154 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 155 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 156 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 159 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 160 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 160 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 161 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 162 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 163 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 166 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 167 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 168 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 168 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 168 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 169 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 172 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 173 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 176 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 177 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 180 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 184 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 185 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 188 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

LoonixInsideReal_Script_TV_Text_0:
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	.string "MEW has returned!$"

LoonixInsideReal_Script_Statue_Text_0:
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 82 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 95 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 139 "data/maps/LoonixInsideReal/scripts.pory"
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_Script_Grandma_Text_1:
# 142 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 192 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 200 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 208 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 212 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"
