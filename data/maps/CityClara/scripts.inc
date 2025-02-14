CityClara_MapScripts::
# 14 "data/maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/CityClara/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_CityClara
# 17 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 19 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 21 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
	return

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
	return


CityClara_Script_ActaEchonaTransition::
# 36 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 37 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaProfundaTransition::
# 41 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 42 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 46 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 47 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 51 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 52 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 56 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 57 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 61 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 62 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_EventScript_ClubSign::
# 67 "data/maps/CityClara/scripts.pory"
	lock
# 68 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 69 "data/maps/CityClara/scripts.pory"
	closemessage
# 70 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 75 "data/maps/CityClara/scripts.pory"
	lockall
# 76 "data/maps/CityClara/scripts.pory"
	faceplayer
# 77 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 78 "data/maps/CityClara/scripts.pory"
	closemessage
# 79 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_GreenSuit::
# 84 "data/maps/CityClara/scripts.pory"
	lock
# 85 "data/maps/CityClara/scripts.pory"
	faceplayer
# 86 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_GreenSuit_2
# 90 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_GreenSuit_1:
# 92 "data/maps/CityClara/scripts.pory"
	closemessage
# 93 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_GreenSuit_2:
# 87 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_GreenSuit_1


CityClara_EventScript_FatMan::
# 98 "data/maps/CityClara/scripts.pory"
	lock
# 99 "data/maps/CityClara/scripts.pory"
	faceplayer
# 100 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_FatMan_2
# 104 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 106 "data/maps/CityClara/scripts.pory"
	closemessage
# 107 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 101 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_WomanA::
# 112 "data/maps/CityClara/scripts.pory"
	lock
# 113 "data/maps/CityClara/scripts.pory"
	faceplayer
# 114 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_WomanA_2
# 118 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_WomanA_1:
# 120 "data/maps/CityClara/scripts.pory"
	closemessage
# 121 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_WomanA_2:
# 115 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_WomanA_1


CityClara_EventScript_RedWoman::
# 126 "data/maps/CityClara/scripts.pory"
	lock
# 127 "data/maps/CityClara/scripts.pory"
	faceplayer
# 128 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_RedWoman_2
# 132 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_RedWoman_1:
# 134 "data/maps/CityClara/scripts.pory"
	closemessage
# 135 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_RedWoman_2:
# 129 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_RedWoman_1


CityClara_EventScript_OldMan::
# 140 "data/maps/CityClara/scripts.pory"
	lock
# 141 "data/maps/CityClara/scripts.pory"
	faceplayer
# 142 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldMan_2
# 146 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_OldMan_1:
# 148 "data/maps/CityClara/scripts.pory"
	closemessage
# 149 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldMan_2:
# 143 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_OldMan_1


CityClara_EventScript_OldWoman::
# 154 "data/maps/CityClara/scripts.pory"
	lock
# 155 "data/maps/CityClara/scripts.pory"
	faceplayer
# 156 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldWoman_2
# 160 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 162 "data/maps/CityClara/scripts.pory"
	closemessage
# 163 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 157 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 168 "data/maps/CityClara/scripts.pory"
	lock
# 169 "data/maps/CityClara/scripts.pory"
	faceplayer
# 170 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_Lass_2
# 174 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 176 "data/maps/CityClara/scripts.pory"
	closemessage
# 177 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 171 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
# 182 "data/maps/CityClara/scripts.pory"
	lock
# 183 "data/maps/CityClara/scripts.pory"
	faceplayer
# 184 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 191 "data/maps/CityClara/scripts.pory"
	closemessage
# 192 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 193 "data/maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 194 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 195 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 200 "data/maps/CityClara/scripts.pory"
	lock
# 201 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 202 "data/maps/CityClara/scripts.pory"
	closemessage
# 203 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 208 "data/maps/CityClara/scripts.pory"
	lockall
# 209 "data/maps/CityClara/scripts.pory"
	faceplayer
# 210 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 211 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 215 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 217 "data/maps/CityClara/scripts.pory"
	closemessage
# 218 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 212 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 223 "data/maps/CityClara/scripts.pory"
	lockall
# 224 "data/maps/CityClara/scripts.pory"
	faceplayer
# 225 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 226 "data/maps/CityClara/scripts.pory"
	closemessage
# 227 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 228 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 229 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 234 "data/maps/CityClara/scripts.pory"
	lockall
# 235 "data/maps/CityClara/scripts.pory"
	faceplayer
# 236 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 237 "data/maps/CityClara/scripts.pory"
	closemessage
# 238 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 239 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 240 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 245 "data/maps/CityClara/scripts.pory"
	lock
# 246 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 247 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 248 "data/maps/CityClara/scripts.pory"
	closemessage
# 249 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 250 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 251 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 252 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 253 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 254 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 255 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 256 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 257 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 258 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 259 "data/maps/CityClara/scripts.pory"
	closemessage
# 260 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 261 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 262 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 263 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 264 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 268 "data/maps/CityClara/scripts.pory"
	lock
# 269 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 270 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 271 "data/maps/CityClara/scripts.pory"
	closemessage
# 272 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 273 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 274 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 275 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 276 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 277 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 278 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 279 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 280 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 281 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 282 "data/maps/CityClara/scripts.pory"
	closemessage
# 283 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 284 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 285 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 286 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 287 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 291 "data/maps/CityClara/scripts.pory"
	lock
# 292 "data/maps/CityClara/scripts.pory"
	faceplayer
# 293 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 294 "data/maps/CityClara/scripts.pory"
	closemessage
# 295 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 299 "data/maps/CityClara/scripts.pory"
	lock
# 300 "data/maps/CityClara/scripts.pory"
	faceplayer
# 301 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 302 "data/maps/CityClara/scripts.pory"
	closemessage
# 303 "data/maps/CityClara/scripts.pory"
	release
	return


# 306 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 307 "data/maps/CityClara/scripts.pory"
	walk_down
# 308 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 311 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 312 "data/maps/CityClara/scripts.pory"
	walk_down
# 313 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 316 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 317 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 320 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 321 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 324 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 325 "data/maps/CityClara/scripts.pory"
	walk_up
# 326 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 329 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 330 "data/maps/CityClara/scripts.pory"
	walk_right
# 331 "data/maps/CityClara/scripts.pory"
	walk_up
# 332 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 335 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 336 "data/maps/CityClara/scripts.pory"
	walk_down
# 336 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 340 "data/maps/CityClara/scripts.pory"
	walk_down
# 341 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 344 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 345 "data/maps/CityClara/scripts.pory"
	walk_down
# 346 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 349 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 350 "data/maps/CityClara/scripts.pory"
	walk_left
# 351 "data/maps/CityClara/scripts.pory"
	walk_up
# 352 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 355 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 356 "data/maps/CityClara/scripts.pory"
	walk_up
# 357 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

CityClara_Text_ClubSign::
# 360 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 364 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 368 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 372 "data/maps/CityClara/scripts.pory"
	.string "I can't believe how long this line\n"
	.string "appears! We'll wait all day and night to\l"
	.string "move halfway up to the top. Oh\l"
	.string "{PLAYER} I bet you could find another\l"
	.string "way we could sneak around. Maybe you\l"
	.string "could learn how to cut down trees and\l"
	.string "we could sneak in, go around the back! I\l"
	.string "bet they teach you how to cut down\l"
	.string "trees and things like that if you go to\l"
	.string "the school! I've never been myself but\l"
	.string "you should go! The school is that\l"
	.string "orange building over there on the\l"
	.string "corner of the south eastern street.$"

CityClara_Text_LeafBridge2::
# 376 "data/maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 380 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 384 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 388 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 392 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 396 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 400 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 404 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 408 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 412 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 416 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 420 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
# 424 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
# 428 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
# 432 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 436 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 440 "data/maps/CityClara/scripts.pory"
	.string "This place is ancient, older than I am.\n"
	.string "They say that people first lived on the\l"
	.string "lake thousands of years ago. Escpaing\l"
	.string "drought the elder race escaped across\l"
	.string "the sea and here observed a certain\l"
	.string "sign of fate. Upon the crystal clear\l"
	.string "basin surface a Charizard devoured it's\l"
	.string "own tail. The elders knew their fate: To\l"
	.string "build a town upon the lake in reverence\l"
	.string "of their god. And now thousands of\l"
	.string "years in the future is it coincedance\l"
	.string "that Mew is here?$"

CityClara_Text_Senex3::
# 444 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 448 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 452 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 456 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 460 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 464 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 468 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 472 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"
