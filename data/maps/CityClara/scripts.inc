CityClara_MapScripts::
# 12 "data/maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/CityClara/scripts.pory"
	call CityClara_OnTransition
	return


CityClara_OnTransition::
# 18 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_OnTransition_2
CityClara_OnTransition_1:
	end

CityClara_OnTransition_2:
# 19 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 4, 39, 34
# 20 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_AROUND
# 21 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 5, 30, 32
# 22 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WANDER_AROUND
# 23 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 6, 58, 12
# 24 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 25 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 8, 18, 40
# 26 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
# 27 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 9, 55, 25
# 28 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 29 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 12, 30, 38
# 30 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_WANDER_AROUND
# 31 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 13, 39, 40
# 32 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_WANDER_AROUND
	goto CityClara_OnTransition_1


CityClara_EventScript_ClubSign::
# 38 "data/maps/CityClara/scripts.pory"
	lock
# 39 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 40 "data/maps/CityClara/scripts.pory"
	closemessage
# 41 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 46 "data/maps/CityClara/scripts.pory"
	lockall
# 47 "data/maps/CityClara/scripts.pory"
	faceplayer
# 48 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 49 "data/maps/CityClara/scripts.pory"
	closemessage
# 50 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_GreenSuit::
# 55 "data/maps/CityClara/scripts.pory"
	lock
# 56 "data/maps/CityClara/scripts.pory"
	faceplayer
# 57 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_GreenSuit_2
# 61 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_GreenSuit_1:
# 63 "data/maps/CityClara/scripts.pory"
	closemessage
# 64 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_GreenSuit_2:
# 58 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_GreenSuit_1


CityClara_EventScript_FatMan::
# 69 "data/maps/CityClara/scripts.pory"
	lock
# 70 "data/maps/CityClara/scripts.pory"
	faceplayer
# 71 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_FatMan_2
# 75 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 77 "data/maps/CityClara/scripts.pory"
	closemessage
# 78 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 72 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_WomanA::
# 83 "data/maps/CityClara/scripts.pory"
	lock
# 84 "data/maps/CityClara/scripts.pory"
	faceplayer
# 85 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_WomanA_2
# 89 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_WomanA_1:
# 91 "data/maps/CityClara/scripts.pory"
	closemessage
# 92 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_WomanA_2:
# 86 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_WomanA_1


CityClara_EventScript_RedWoman::
# 97 "data/maps/CityClara/scripts.pory"
	lock
# 98 "data/maps/CityClara/scripts.pory"
	faceplayer
# 99 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_RedWoman_2
# 103 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_RedWoman_1:
# 105 "data/maps/CityClara/scripts.pory"
	closemessage
# 106 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_RedWoman_2:
# 100 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_RedWoman_1


CityClara_EventScript_OldMan::
# 111 "data/maps/CityClara/scripts.pory"
	lock
# 112 "data/maps/CityClara/scripts.pory"
	faceplayer
# 113 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldMan_2
# 117 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_OldMan_1:
# 119 "data/maps/CityClara/scripts.pory"
	closemessage
# 120 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldMan_2:
# 114 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_OldMan_1


CityClara_EventScript_OldWoman::
# 125 "data/maps/CityClara/scripts.pory"
	lock
# 126 "data/maps/CityClara/scripts.pory"
	faceplayer
# 127 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldWoman_2
# 131 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 133 "data/maps/CityClara/scripts.pory"
	closemessage
# 134 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 128 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 139 "data/maps/CityClara/scripts.pory"
	lock
# 140 "data/maps/CityClara/scripts.pory"
	faceplayer
# 141 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_Lass_2
# 145 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 147 "data/maps/CityClara/scripts.pory"
	closemessage
# 148 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 142 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
# 153 "data/maps/CityClara/scripts.pory"
	lock
# 154 "data/maps/CityClara/scripts.pory"
	faceplayer
# 155 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 162 "data/maps/CityClara/scripts.pory"
	closemessage
# 163 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 164 "data/maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 165 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 166 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_TownSign::
# 171 "data/maps/CityClara/scripts.pory"
	lock
# 172 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 173 "data/maps/CityClara/scripts.pory"
	closemessage
# 174 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 179 "data/maps/CityClara/scripts.pory"
	lockall
# 180 "data/maps/CityClara/scripts.pory"
	faceplayer
# 181 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 182 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 186 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 188 "data/maps/CityClara/scripts.pory"
	closemessage
# 189 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 183 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 194 "data/maps/CityClara/scripts.pory"
	lockall
# 195 "data/maps/CityClara/scripts.pory"
	faceplayer
# 196 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 197 "data/maps/CityClara/scripts.pory"
	closemessage
# 198 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 199 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 200 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 205 "data/maps/CityClara/scripts.pory"
	lockall
# 206 "data/maps/CityClara/scripts.pory"
	faceplayer
# 207 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 208 "data/maps/CityClara/scripts.pory"
	closemessage
# 209 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 210 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 211 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 216 "data/maps/CityClara/scripts.pory"
	lock
# 217 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 218 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 219 "data/maps/CityClara/scripts.pory"
	closemessage
# 220 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 221 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 222 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 223 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 224 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 225 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 226 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 227 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 228 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 229 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 230 "data/maps/CityClara/scripts.pory"
	closemessage
# 231 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 232 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 233 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 234 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 235 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 239 "data/maps/CityClara/scripts.pory"
	lock
# 240 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 241 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 242 "data/maps/CityClara/scripts.pory"
	closemessage
# 243 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 244 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 245 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 246 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 247 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 248 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 249 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 250 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 251 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 252 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 253 "data/maps/CityClara/scripts.pory"
	closemessage
# 254 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 255 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 256 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 257 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 258 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 262 "data/maps/CityClara/scripts.pory"
	lock
# 263 "data/maps/CityClara/scripts.pory"
	faceplayer
# 264 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 265 "data/maps/CityClara/scripts.pory"
	closemessage
# 266 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 270 "data/maps/CityClara/scripts.pory"
	lock
# 271 "data/maps/CityClara/scripts.pory"
	faceplayer
# 272 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 273 "data/maps/CityClara/scripts.pory"
	closemessage
# 274 "data/maps/CityClara/scripts.pory"
	release
	return


# 277 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 278 "data/maps/CityClara/scripts.pory"
	walk_down
# 279 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 282 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 283 "data/maps/CityClara/scripts.pory"
	walk_down
# 284 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 287 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 288 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 291 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 292 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 295 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 296 "data/maps/CityClara/scripts.pory"
	walk_up
# 297 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 300 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 301 "data/maps/CityClara/scripts.pory"
	walk_right
# 302 "data/maps/CityClara/scripts.pory"
	walk_up
# 303 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 306 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 307 "data/maps/CityClara/scripts.pory"
	walk_down
# 307 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 310 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 311 "data/maps/CityClara/scripts.pory"
	walk_down
# 312 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 315 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 316 "data/maps/CityClara/scripts.pory"
	walk_down
# 317 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 320 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 321 "data/maps/CityClara/scripts.pory"
	walk_left
# 322 "data/maps/CityClara/scripts.pory"
	walk_up
# 323 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 326 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 327 "data/maps/CityClara/scripts.pory"
	walk_up
# 328 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

CityClara_Text_ClubSign::
# 331 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 335 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 339 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 343 "data/maps/CityClara/scripts.pory"
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
# 347 "data/maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 351 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 355 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 359 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 363 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 367 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 371 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 375 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 379 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 383 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 387 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 391 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
# 395 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
# 399 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
# 403 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 407 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 411 "data/maps/CityClara/scripts.pory"
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
# 415 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 419 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 423 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 427 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 431 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 435 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 439 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 443 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"
