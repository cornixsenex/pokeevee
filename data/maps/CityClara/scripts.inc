CityClara_MapScripts::
# 2 "data/maps/CityClara/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CityClara/scripts.pory"
	call CityClara_OnTransition
	return


CityClara_OnTransition::
# 8 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_OnTransition_2
CityClara_OnTransition_1:
	end

CityClara_OnTransition_2:
# 9 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 4, 39, 34
# 10 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_AROUND
# 11 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 5, 30, 32
# 12 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_WANDER_AROUND
# 13 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 6, 58, 12
# 14 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 15 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 8, 18, 40
# 16 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
# 17 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 9, 55, 25
# 18 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 19 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 12, 30, 38
# 20 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_WANDER_AROUND
# 21 "data/maps/CityClara/scripts.pory"
	setobjectxyperm 13, 39, 40
# 22 "data/maps/CityClara/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_WANDER_AROUND
	goto CityClara_OnTransition_1


CityClara_EventScript_ClubSign::
# 28 "data/maps/CityClara/scripts.pory"
	lock
# 29 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_ClubSign
# 30 "data/maps/CityClara/scripts.pory"
	closemessage
# 31 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_CannaWoman::
# 36 "data/maps/CityClara/scripts.pory"
	lockall
# 37 "data/maps/CityClara/scripts.pory"
	faceplayer
# 38 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_CannaWoman
# 39 "data/maps/CityClara/scripts.pory"
	closemessage
# 40 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_GreenSuit::
# 45 "data/maps/CityClara/scripts.pory"
	lock
# 46 "data/maps/CityClara/scripts.pory"
	faceplayer
# 47 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_GreenSuit_2
# 51 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_GreenSuit_1:
# 53 "data/maps/CityClara/scripts.pory"
	closemessage
# 54 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_GreenSuit_2:
# 48 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_GreenSuit_1


CityClara_EventScript_FatMan::
# 59 "data/maps/CityClara/scripts.pory"
	lock
# 60 "data/maps/CityClara/scripts.pory"
	faceplayer
# 61 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_FatMan_2
# 65 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
# 67 "data/maps/CityClara/scripts.pory"
	closemessage
# 68 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_FatMan_2:
# 62 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_WomanA::
# 73 "data/maps/CityClara/scripts.pory"
	lock
# 74 "data/maps/CityClara/scripts.pory"
	faceplayer
# 75 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_WomanA_2
# 79 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA
CityClara_EventScript_WomanA_1:
# 81 "data/maps/CityClara/scripts.pory"
	closemessage
# 82 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_WomanA_2:
# 76 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_WomanA_1


CityClara_EventScript_RedWoman::
# 87 "data/maps/CityClara/scripts.pory"
	lock
# 88 "data/maps/CityClara/scripts.pory"
	faceplayer
# 89 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_RedWoman_2
# 93 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_RedWoman_1:
# 95 "data/maps/CityClara/scripts.pory"
	closemessage
# 96 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_RedWoman_2:
# 90 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_RedWoman_1


CityClara_EventScript_OldMan::
# 101 "data/maps/CityClara/scripts.pory"
	lock
# 102 "data/maps/CityClara/scripts.pory"
	faceplayer
# 103 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldMan_2
# 107 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan
CityClara_EventScript_OldMan_1:
# 109 "data/maps/CityClara/scripts.pory"
	closemessage
# 110 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldMan_2:
# 104 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_OldMan_1


CityClara_EventScript_OldWoman::
# 115 "data/maps/CityClara/scripts.pory"
	lock
# 116 "data/maps/CityClara/scripts.pory"
	faceplayer
# 117 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldWoman_2
# 121 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
# 123 "data/maps/CityClara/scripts.pory"
	closemessage
# 124 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_OldWoman_2:
# 118 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
# 129 "data/maps/CityClara/scripts.pory"
	lock
# 130 "data/maps/CityClara/scripts.pory"
	faceplayer
# 131 "data/maps/CityClara/scripts.pory"
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_Lass_2
# 135 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
# 137 "data/maps/CityClara/scripts.pory"
	closemessage
# 138 "data/maps/CityClara/scripts.pory"
	release
	end

CityClara_EventScript_Lass_2:
# 132 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
# 143 "data/maps/CityClara/scripts.pory"
	lock
# 144 "data/maps/CityClara/scripts.pory"
	faceplayer
# 145 "data/maps/CityClara/scripts.pory"
	load_field_pic 4, 190, 98
# 146 "data/maps/CityClara/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 8
	goto_if_ne CityClara_EventScript_LeafBridge_2
# 149 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafBridge2
CityClara_EventScript_LeafBridge_1:
# 151 "data/maps/CityClara/scripts.pory"
	closemessage
# 152 "data/maps/CityClara/scripts.pory"
	destroy_field_pic 4
# 153 "data/maps/CityClara/scripts.pory"
	applymovement 22, Common_Movement_FaceDown
# 154 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 155 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_LeafBridge_2:
# 147 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_LeafBridge
	goto CityClara_EventScript_LeafBridge_1


CityClara_EventScript_TownSign::
# 160 "data/maps/CityClara/scripts.pory"
	lock
# 161 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_TownSign
# 162 "data/maps/CityClara/scripts.pory"
	closemessage
# 163 "data/maps/CityClara/scripts.pory"
	release
	end


CityClara_EventScript_Senex::
# 168 "data/maps/CityClara/scripts.pory"
	lockall
# 169 "data/maps/CityClara/scripts.pory"
	faceplayer
# 170 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
# 171 "data/maps/CityClara/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
# 175 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
# 177 "data/maps/CityClara/scripts.pory"
	closemessage
# 178 "data/maps/CityClara/scripts.pory"
	releaseall
	end

CityClara_EventScript_Senex_2:
# 172 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
# 183 "data/maps/CityClara/scripts.pory"
	lockall
# 184 "data/maps/CityClara/scripts.pory"
	faceplayer
# 185 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Jessie
# 186 "data/maps/CityClara/scripts.pory"
	closemessage
# 187 "data/maps/CityClara/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 188 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 189 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_James::
# 194 "data/maps/CityClara/scripts.pory"
	lockall
# 195 "data/maps/CityClara/scripts.pory"
	faceplayer
# 196 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_James
# 197 "data/maps/CityClara/scripts.pory"
	closemessage
# 198 "data/maps/CityClara/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 199 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 200 "data/maps/CityClara/scripts.pory"
	releaseall
	end


CityClara_EventScript_RocketBlockA::
# 205 "data/maps/CityClara/scripts.pory"
	lock
# 206 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 207 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 208 "data/maps/CityClara/scripts.pory"
	closemessage
# 209 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 210 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1A
# 211 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2A
# 212 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 213 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 214 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 215 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 216 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 217 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 218 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 219 "data/maps/CityClara/scripts.pory"
	closemessage
# 220 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1A
# 221 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2A
# 222 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 223 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 224 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_RocketBlockB::
# 228 "data/maps/CityClara/scripts.pory"
	lock
# 229 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 230 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock1
# 231 "data/maps/CityClara/scripts.pory"
	closemessage
# 232 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 233 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketBlock1B
# 234 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketBlock2B
# 235 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 236 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
# 237 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 238 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock2
# 239 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
# 240 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 241 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_RocketBlock3
# 242 "data/maps/CityClara/scripts.pory"
	closemessage
# 243 "data/maps/CityClara/scripts.pory"
	applymovement 1, CityClara_Movement_RocketReturn1B
# 244 "data/maps/CityClara/scripts.pory"
	applymovement 3, CityClara_Movement_RocketReturn2B
# 245 "data/maps/CityClara/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
# 246 "data/maps/CityClara/scripts.pory"
	waitmovement 0
# 247 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket1::
# 251 "data/maps/CityClara/scripts.pory"
	lock
# 252 "data/maps/CityClara/scripts.pory"
	faceplayer
# 253 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket1
# 254 "data/maps/CityClara/scripts.pory"
	closemessage
# 255 "data/maps/CityClara/scripts.pory"
	release
	return


CityClara_EventScript_Rocket2::
# 259 "data/maps/CityClara/scripts.pory"
	lock
# 260 "data/maps/CityClara/scripts.pory"
	faceplayer
# 261 "data/maps/CityClara/scripts.pory"
	msgbox CityClara_Text_Rocket2
# 262 "data/maps/CityClara/scripts.pory"
	closemessage
# 263 "data/maps/CityClara/scripts.pory"
	release
	return


# 266 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1A:
# 267 "data/maps/CityClara/scripts.pory"
	walk_down
# 268 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 271 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2A:
# 272 "data/maps/CityClara/scripts.pory"
	walk_down
# 273 "data/maps/CityClara/scripts.pory"
	walk_left
	step_end

# 276 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceLeft:
# 277 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 280 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerFaceRight:
# 281 "data/maps/CityClara/scripts.pory"
	face_right
	step_end

# 284 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1A:
# 285 "data/maps/CityClara/scripts.pory"
	walk_up
# 286 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 289 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2A:
# 290 "data/maps/CityClara/scripts.pory"
	walk_right
# 291 "data/maps/CityClara/scripts.pory"
	walk_up
# 292 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 295 "data/maps/CityClara/scripts.pory"
CityClara_Movement_PlayerReturn:
# 296 "data/maps/CityClara/scripts.pory"
	walk_down
# 296 "data/maps/CityClara/scripts.pory"
	walk_down
	step_end

# 299 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock1B:
# 300 "data/maps/CityClara/scripts.pory"
	walk_down
# 301 "data/maps/CityClara/scripts.pory"
	walk_right
	step_end

# 304 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketBlock2B:
# 305 "data/maps/CityClara/scripts.pory"
	walk_down
# 306 "data/maps/CityClara/scripts.pory"
	face_left
	step_end

# 309 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn1B:
# 310 "data/maps/CityClara/scripts.pory"
	walk_left
# 311 "data/maps/CityClara/scripts.pory"
	walk_up
# 312 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

# 315 "data/maps/CityClara/scripts.pory"
CityClara_Movement_RocketReturn2B:
# 316 "data/maps/CityClara/scripts.pory"
	walk_up
# 317 "data/maps/CityClara/scripts.pory"
	face_down
	step_end

CityClara_Text_ClubSign::
# 320 "data/maps/CityClara/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
# 324 "data/maps/CityClara/scripts.pory"
	.string "City Saeclara built upon the lake$"

CityClara_Text_CannaWoman::
# 328 "data/maps/CityClara/scripts.pory"
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
# 332 "data/maps/CityClara/scripts.pory"
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
# 336 "data/maps/CityClara/scripts.pory"
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

CityClara_Text_GreenSuit::
# 340 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
# 344 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
# 348 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
# 352 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
# 356 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
# 360 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
# 364 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
# 368 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
# 372 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
# 376 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
# 380 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
# 384 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
# 388 "data/maps/CityClara/scripts.pory"
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
# 392 "data/maps/CityClara/scripts.pory"
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Senex1::
# 396 "data/maps/CityClara/scripts.pory"
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I have\l"
	.string "grown. Tell me would you ask me to speak\l"
	.string "and tell to you the tale of this city?$"

CityClara_Text_Senex2::
# 400 "data/maps/CityClara/scripts.pory"
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
# 404 "data/maps/CityClara/scripts.pory"
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
# 408 "data/maps/CityClara/scripts.pory"
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
# 412 "data/maps/CityClara/scripts.pory"
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
# 416 "data/maps/CityClara/scripts.pory"
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
# 420 "data/maps/CityClara/scripts.pory"
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
# 424 "data/maps/CityClara/scripts.pory"
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the party's\l"
	.string "here for you.$"

CityClara_Text_Jessie::
# 428 "data/maps/CityClara/scripts.pory"
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
# 432 "data/maps/CityClara/scripts.pory"
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"
