CityClara_MapScripts::
# 13 "data/maps/CityClara/scripts.pory"
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


CityClara_Script_ActaEchonaTransition::
# 34 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 1
# 35 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SilvaProfundaTransition::
# 39 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_ViaFideliumTransition::
# 44 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 3
# 45 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_SinusClarusTransition::
# 49 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 4
# 50 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_CastaliaTransition::
# 54 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 5
# 55 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_Script_DeltaDraciTransition::
# 59 "data/maps/CityClara/scripts.pory"
	setvar VAR_TEMP_5, 6
# 60 "data/maps/CityClara/scripts.pory"
	special ShowMapNamePopup
	return


CityClara_EventScript_ClubSign::
# 65 "data/maps/CityClara/scripts.pory"
	lock
# 66 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 67 "data/maps/CityClara/scripts.pory"
	closemessage
# 68 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 73 "data/maps/CityClara/scripts.pory"
	lockall
# 74 "data/maps/CityClara/scripts.pory"
	faceplayer
# 75 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 76 "data/maps/CityClara/scripts.pory"
	closemessage
# 77 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_GreenSuit::
# 82 "data/maps/CityClara/scripts.pory"
	lock
# 83 "data/maps/CityClara/scripts.pory"
	faceplayer
# 84 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_GreenSuit_2
# 88 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_GreenSuit_1:
# 90 "data/maps/CityClara/scripts.pory"
	closemessage
# 91 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_GreenSuit_2:
# 85 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_GreenSuit_1


CityClara_EventScript_FatMan::
# 96 "data/maps/CityClara/scripts.pory"
	lock
# 97 "data/maps/CityClara/scripts.pory"
	faceplayer
# 98 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_FatMan_2
# 102 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 104 "data/maps/CityClara/scripts.pory"
	closemessage
# 105 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 99 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_WomanA::
# 110 "data/maps/CityClara/scripts.pory"
	lock
# 111 "data/maps/CityClara/scripts.pory"
	faceplayer
# 112 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_WomanA_2
# 116 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_WomanA_1:
# 118 "data/maps/CityClara/scripts.pory"
	closemessage
# 119 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_WomanA_2:
# 113 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_WomanA_1


CityClara_EventScript_RedWoman::
# 124 "data/maps/CityClara/scripts.pory"
	lock
# 125 "data/maps/CityClara/scripts.pory"
	faceplayer
# 126 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_RedWoman_2
# 130 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_RedWoman_1:
# 132 "data/maps/CityClara/scripts.pory"
	closemessage
# 133 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_RedWoman_2:
# 127 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_RedWoman_1


CityClara_EventScript_OldMan::
# 138 "data/maps/CityClara/scripts.pory"
	lock
# 139 "data/maps/CityClara/scripts.pory"
	faceplayer
# 140 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldMan_2
# 144 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_OldMan_1:
# 146 "data/maps/CityClara/scripts.pory"
	closemessage
# 147 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldMan_2:
# 141 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_OldMan_1


CityClara_EventScript_OldWoman::
# 152 "data/maps/CityClara/scripts.pory"
	lock
# 153 "data/maps/CityClara/scripts.pory"
	faceplayer
# 154 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldWoman_2
# 158 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 160 "data/maps/CityClara/scripts.pory"
	closemessage
# 161 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 155 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 166 "data/maps/CityClara/scripts.pory"
	lock
# 167 "data/maps/CityClara/scripts.pory"
	faceplayer
# 168 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_Lass_2
# 172 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 174 "data/maps/CityClara/scripts.pory"
	closemessage
# 175 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 169 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
# 180 "data/maps/CityClara/scripts.pory"
	lock
# 181 "data/maps/CityClara/scripts.pory"
	faceplayer
# 182 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 189 "data/maps/CityClara/scripts.pory"
	closemessage
# 190 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 191 "data/maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 192 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 193 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 198 "data/maps/CityClara/scripts.pory"
	lock
# 199 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 200 "data/maps/CityClara/scripts.pory"
	closemessage
# 201 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 206 "data/maps/CityClara/scripts.pory"
	lockall
# 207 "data/maps/CityClara/scripts.pory"
	faceplayer
# 208 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 209 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 213 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 215 "data/maps/CityClara/scripts.pory"
	closemessage
# 216 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 210 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 221 "data/maps/CityClara/scripts.pory"
	lockall
# 222 "data/maps/CityClara/scripts.pory"
	faceplayer
# 223 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 224 "data/maps/CityClara/scripts.pory"
	closemessage
# 225 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 226 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 227 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 232 "data/maps/CityClara/scripts.pory"
	lockall
# 233 "data/maps/CityClara/scripts.pory"
	faceplayer
# 234 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 235 "data/maps/CityClara/scripts.pory"
	closemessage
# 236 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 237 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 238 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 243 "data/maps/CityClara/scripts.pory"
	lock
# 244 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 245 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 246 "data/maps/CityClara/scripts.pory"
	closemessage
# 247 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 248 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 249 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 250 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 251 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 252 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 253 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 254 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 255 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 256 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 257 "data/maps/CityClara/scripts.pory"
	closemessage
# 258 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 259 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 260 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 261 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 262 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 266 "data/maps/CityClara/scripts.pory"
	lock
# 267 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 268 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 269 "data/maps/CityClara/scripts.pory"
	closemessage
# 270 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 271 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 272 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 273 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 274 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 275 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 276 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 277 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 278 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 279 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 280 "data/maps/CityClara/scripts.pory"
	closemessage
# 281 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 282 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 283 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 284 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 285 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 289 "data/maps/CityClara/scripts.pory"
	lock
# 290 "data/maps/CityClara/scripts.pory"
	faceplayer
# 291 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 292 "data/maps/CityClara/scripts.pory"
	closemessage
# 293 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 297 "data/maps/CityClara/scripts.pory"
	lock
# 298 "data/maps/CityClara/scripts.pory"
	faceplayer
# 299 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 300 "data/maps/CityClara/scripts.pory"
	closemessage
# 301 "data/maps/CityClara/scripts.pory"
	release
	return


# 304 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 305 "data/maps/CityClara/scripts.pory"
	walk_down
# 306 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 309 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 310 "data/maps/CityClara/scripts.pory"
	walk_down
# 311 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 314 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 315 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 318 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 319 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 322 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 323 "data/maps/CityClara/scripts.pory"
	walk_up
# 324 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 327 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 328 "data/maps/CityClara/scripts.pory"
	walk_right
# 329 "data/maps/CityClara/scripts.pory"
	walk_up
# 330 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 333 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 334 "data/maps/CityClara/scripts.pory"
	walk_down
# 334 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 337 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 338 "data/maps/CityClara/scripts.pory"
	walk_down
# 339 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 343 "data/maps/CityClara/scripts.pory"
	walk_down
# 344 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 347 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 348 "data/maps/CityClara/scripts.pory"
	walk_left
# 349 "data/maps/CityClara/scripts.pory"
	walk_up
# 350 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 353 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 354 "data/maps/CityClara/scripts.pory"
	walk_up
# 355 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

CityClara_Text_ClubSign::
# 358 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 362 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 366 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 370 "data/maps/CityClara/scripts.pory"
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
# 374 "data/maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 378 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 382 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 386 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 390 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 394 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 398 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 402 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 406 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 410 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 414 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 418 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
# 422 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
# 426 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
# 430 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 434 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 438 "data/maps/CityClara/scripts.pory"
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
# 442 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 446 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 450 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 454 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 458 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 462 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 466 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 470 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"
