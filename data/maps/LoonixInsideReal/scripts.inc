LoonixInsideReal_MapScripts::
# 6 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 30 "data/maps/LoonixInsideReal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/LoonixInsideReal/scripts.pory"
	switch VAR_GRANNY_STATE
# 9 "data/maps/LoonixInsideReal/scripts.pory"
	case 0, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 10 "data/maps/LoonixInsideReal/scripts.pory"
	case 1, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/LoonixInsideReal/scripts.pory"
	case 2, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/LoonixInsideReal/scripts.pory"
	case 3, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/LoonixInsideReal/scripts.pory"
	case 4, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 14 "data/maps/LoonixInsideReal/scripts.pory"
	case 5, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/LoonixInsideReal/scripts.pory"
	case 6, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 18 "data/maps/LoonixInsideReal/scripts.pory"
	case 7, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 20 "data/maps/LoonixInsideReal/scripts.pory"
	case 8, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 22 "data/maps/LoonixInsideReal/scripts.pory"
	case 9, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 25 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_HideGranny
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyKitchen
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyDoorway
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTable
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyTV
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 23 "data/maps/LoonixInsideReal/scripts.pory"
	call LoonixInsideReal_Script_ShowGrannyBed
	return

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 0, LoonixInsideReal_Script_GrannyScene1
# 32 "data/maps/LoonixInsideReal/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 6, LoonixInsideReal_Script_GrannyScene2
	.2byte 0


LoonixInsideReal_Script_HideGranny::
# 38 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 12, 10
# 39 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
	end


LoonixInsideReal_Script_ShowGrannyKitchen::
# 46 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 1, 3
# 47 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyDoorway::
# 53 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 3, 6
# 54 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_ShowGrannyTable::
# 60 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 9, 7
# 61 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


LoonixInsideReal_Script_ShowGrannyTV::
# 67 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 8, 6
# 68 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	end


LoonixInsideReal_Script_ShowGrannyBed::
# 73 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectxyperm 1, 11, 3
# 74 "data/maps/LoonixInsideReal/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	end


LoonixInsideReal_Script_GrannyScene1::
# 80 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 82 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 1
# 83 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 84 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 87 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 88 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 89 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 90 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 92 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 93 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 95 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 96 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 98 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1A, MSGBOX_DEFAULT
# 99 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 101 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 102 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ApproachPlayer
# 103 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 105 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1B, MSGBOX_DEFAULT
# 106 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 108 "data/maps/LoonixInsideReal/scripts.pory"
	special NameLeaf
# 109 "data/maps/LoonixInsideReal/scripts.pory"
	waitstate
# 112 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_Granny1C, MSGBOX_DEFAULT
# 113 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 115 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_Granny1_ReturnToKitchen
# 116 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 118 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_GrannyScene2::
# 123 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 125 "data/maps/LoonixInsideReal/scripts.pory"
	setvar VAR_GRANNY_STATE, 7
# 127 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 128 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 129 "data/maps/LoonixInsideReal/scripts.pory"
	special SetUnlockedPokedexFlags
# 130 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 131 "data/maps/LoonixInsideReal/scripts.pory"
	special EnableNationalPokedex
# 175 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_TV::
# 180 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_TV_Text_0, MSGBOX_SIGN
# 182 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Statue::
# 187 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Statue_Text_0
# 189 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Junk::
# 194 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Junk_Text_0
# 196 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_Special::
# 201 "data/maps/LoonixInsideReal/scripts.pory"
	lock
# 202 "data/maps/LoonixInsideReal/scripts.pory"
	showmonpic SPECIES_KRABBY, 10, 3
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Special_Text_0
# 204 "data/maps/LoonixInsideReal/scripts.pory"
	hidemonpic
# 205 "data/maps/LoonixInsideReal/scripts.pory"
	release
	end


LoonixInsideReal_Script_GrandmaTV::
# 210 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 211 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
# 212 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 213 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 214 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
# 215 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_0
# 217 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 218 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_GrandmaTV_Text_1
# 220 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 221 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
# 222 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 223 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 224 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 225 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
# 226 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 227 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
# 228 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 229 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaMono
# 230 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 231 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
# 232 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 233 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaToBed
# 234 "data/maps/LoonixInsideReal/scripts.pory"
	closemessage
# 235 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
# 236 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
# 237 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 238 "data/maps/LoonixInsideReal/scripts.pory"
	addvar VAR_GRANNY_STATE, 1
# 239 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Text_GrandmaBed
# 240 "data/maps/LoonixInsideReal/scripts.pory"
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
# 241 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 242 "data/maps/LoonixInsideReal/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 243 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_PreventExit::
# 249 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_PreventExit_Text_0
# 251 "data/maps/LoonixInsideReal/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
# 252 "data/maps/LoonixInsideReal/scripts.pory"
	waitmovement 0
# 253 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end


LoonixInsideReal_Script_Grandma::
# 258 "data/maps/LoonixInsideReal/scripts.pory"
	lockall
# 259 "data/maps/LoonixInsideReal/scripts.pory"
	compare VAR_GRANNY_STATE, 1
	goto_if_eq LoonixInsideReal_Script_Grandma_2
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_1
LoonixInsideReal_Script_Grandma_1:
# 265 "data/maps/LoonixInsideReal/scripts.pory"
	releaseall
	end

LoonixInsideReal_Script_Grandma_2:
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	msgbox LoonixInsideReal_Script_Grandma_Text_0
	goto LoonixInsideReal_Script_Grandma_1


# 269 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PreventExit:
# 270 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 271 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 272 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 275 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaTV:
# 276 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 277 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 280 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaBed:
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 281 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 282 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 283 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 284 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 287 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerBed:
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 288 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 289 "data/maps/LoonixInsideReal/scripts.pory"
	walk_up
# 290 "data/maps/LoonixInsideReal/scripts.pory"
	face_right
	step_end

# 293 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaUp:
# 294 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

# 297 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaLeft:
# 298 "data/maps/LoonixInsideReal/scripts.pory"
	face_left
	step_end

# 301 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_GrandmaMono:
# 302 "data/maps/LoonixInsideReal/scripts.pory"
	face_down
	step_end

# 305 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_PlayerToGma:
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
# 306 "data/maps/LoonixInsideReal/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ApproachPlayer:
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
# 310 "data/maps/LoonixInsideReal/scripts.pory"
	walk_right
	step_end

# 313 "data/maps/LoonixInsideReal/scripts.pory"
LoonixInsideReal_Movement_Granny1_ReturnToKitchen:
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 314 "data/maps/LoonixInsideReal/scripts.pory"
	walk_left
# 315 "data/maps/LoonixInsideReal/scripts.pory"
	face_up
	step_end

LoonixInsideReal_Script_TV_Text_0:
# 181 "data/maps/LoonixInsideReal/scripts.pory"
	.string "MEW has returned!$"

LoonixInsideReal_Script_Statue_Text_0:
# 188 "data/maps/LoonixInsideReal/scripts.pory"
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_Script_Junk_Text_0:
# 195 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_Script_Special_Text_0:
# 203 "data/maps/LoonixInsideReal/scripts.pory"
	.string "What's for dinner?$"

LoonixInsideReal_Script_GrandmaTV_Text_0:
# 216 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Oh {PLAYER}!$"

LoonixInsideReal_Script_GrandmaTV_Text_1:
# 219 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Come here sweetie.$"

LoonixInsideReal_Script_PreventExit_Text_0:
# 250 "data/maps/LoonixInsideReal/scripts.pory"
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_Script_Grandma_Text_0:
# 260 "data/maps/LoonixInsideReal/scripts.pory"
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_Script_Grandma_Text_1:
# 263 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
# 318 "data/maps/LoonixInsideReal/scripts.pory"
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that I\l"
	.string "would ask.$"

LoonixInsideReal_Text_GrandmaMono::
# 322 "data/maps/LoonixInsideReal/scripts.pory"
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
# 326 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
# 330 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Thank you.$"

LoonixInsideReal_Text_Granny1A::
# 334 "data/maps/LoonixInsideReal/scripts.pory"
	.string "Good morning sleepyhead!$"

LoonixInsideReal_Text_Granny1B::
# 338 "data/maps/LoonixInsideReal/scripts.pory"
	.string "I'm still cooking breakfast but your\n"
	.string "friend came by earlier. What was her\l"
	.string "name again?$"

LoonixInsideReal_Text_Granny1C::
# 343 "data/maps/LoonixInsideReal/scripts.pory"
	.string "That's right, {LEAF}! She's such a sweet and\n"
	.string "beautiful young girl. I think she's still\l"
	.string "waiting outside for you. Go out, have\l"
	.string "fun, but keep your distance from the\l"
	.string "tall grass where wild pokemon roam.$"
