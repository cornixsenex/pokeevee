Route1_MapScripts::
# 10 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Route1/scripts.pory"
	call Route1_Script_SetupStorm
	return


Route1_EventScript_RockTest::
# 19 "data/maps/Route1/scripts.pory"
	lock
# 20 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_WarpToLeafHouse
# 21 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Script_SetupStorm::
# 26 "data/maps/Route1/scripts.pory"
	setobjectxyperm 5, 0, 0
# 27 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 29 "data/maps/Route1/scripts.pory"
	setobjectxyperm 6, 0, 0
# 30 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 32 "data/maps/Route1/scripts.pory"
	setobjectxyperm 7, 0, 0
# 33 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 35 "data/maps/Route1/scripts.pory"
	setobjectxyperm 8, 0, 0
# 36 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 39 "data/maps/Route1/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 40 "data/maps/Route1/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


Route1_EventScript_RivalTrigger1::
# 47 "data/maps/Route1/scripts.pory"
	lock
# 48 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 1
# 49 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 51 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger2::
# 56 "data/maps/Route1/scripts.pory"
	lock
# 57 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 2
# 58 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 60 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger3::
# 65 "data/maps/Route1/scripts.pory"
	lock
# 66 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 3
# 67 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 69 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger4::
# 74 "data/maps/Route1/scripts.pory"
	lock
# 75 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 4
# 76 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 78 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger5::
# 83 "data/maps/Route1/scripts.pory"
	lock
# 84 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 5
# 85 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 87 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_BlueScene::
# 93 "data/maps/Route1/scripts.pory"
	setvar VAR_GRANNY_STATE, 15
# 94 "data/maps/Route1/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, TRUE
# 95 "data/maps/Route1/scripts.pory"
	switch VAR_TEMP_A
# 96 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_BlueScene_3
# 100 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_BlueScene_4
# 102 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_BlueScene_5
# 104 "data/maps/Route1/scripts.pory"
	case 3, Route1_EventScript_BlueScene_6
# 106 "data/maps/Route1/scripts.pory"
	case 4, Route1_EventScript_BlueScene_7
# 108 "data/maps/Route1/scripts.pory"
	case 5, Route1_EventScript_BlueScene_8
# 111 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_BlueScene_Text_1, MSGBOX_DEFAULT
# 112 "data/maps/Route1/scripts.pory"
	closemessage
# 113 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
Route1_EventScript_BlueScene_1:
# 115 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 118 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route1/scripts.pory"
	setobjectxyperm 3, 19, 7
# 121 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/Route1/scripts.pory"
	addobject 3
# 123 "data/maps/Route1/scripts.pory"
	showobjectat 3, MAP_ROUTE1
# 125 "data/maps/Route1/scripts.pory"
	setobjectxyperm 4, 19, 8
# 126 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 127 "data/maps/Route1/scripts.pory"
	addobject 4
# 128 "data/maps/Route1/scripts.pory"
	showobjectat 4, MAP_ROUTE1
# 130 "data/maps/Route1/scripts.pory"
	setobjectxyperm 10, 19, 6
# 131 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 132 "data/maps/Route1/scripts.pory"
	addobject 10
# 133 "data/maps/Route1/scripts.pory"
	showobjectat 10, MAP_ROUTE1
# 135 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueLeafEnter
# 136 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_BlueLeafEnter
# 137 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_BlueLeafEnter
# 138 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 140 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue1, MSGBOX_DEFAULT
# 141 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 144 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 145 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 148 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1, MSGBOX_DEFAULT
# 149 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 151 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueLeafEnter
# 152 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_BlueLeafEnter
# 153 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_BlueLeafEnter
# 154 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 156 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue2, MSGBOX_DEFAULT
# 157 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 158 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route1/scripts.pory"
	closemessage
# 161 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 162 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafToPlayer
# 163 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 166 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 170 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2, MSGBOX_DEFAULT
# 171 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 172 "data/maps/Route1/scripts.pory"
	closemessage
# 174 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafBehindPlayer
# 176 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueToPlayer
# 177 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_ZubatToPlayer
# 178 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 180 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 183 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue3, MSGBOX_DEFAULT
# 184 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 185 "data/maps/Route1/scripts.pory"
	closemessage
# 187 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_BlueLost
# 189 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 190 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue4, MSGBOX_DEFAULT
# 191 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 192 "data/maps/Route1/scripts.pory"
	closemessage
# 194 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueExit
# 195 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_BlueExit
# 196 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 199 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 200 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 203 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3, MSGBOX_DEFAULT
# 204 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 205 "data/maps/Route1/scripts.pory"
	closemessage
# 207 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 209 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 210 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4, MSGBOX_DEFAULT
# 211 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 212 "data/maps/Route1/scripts.pory"
	closemessage
# 214 "data/maps/Route1/scripts.pory"
	warpsilent MAP_ALDEON_LEAF_HOUSE, 8, 12
# 216 "data/maps/Route1/scripts.pory"
	release
	end

Route1_EventScript_BlueScene_3:
# 97 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_BlueScene_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/Route1/scripts.pory"
	closemessage
# 99 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_4:
# 101 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player1
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_5:
# 103 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player2
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_6:
# 105 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player3
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_7:
# 107 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player4
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_8:
# 109 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player5
	goto Route1_EventScript_BlueScene_1


Route1_EventScript_WarpToLeafHouse::
# 221 "data/maps/Route1/scripts.pory"
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
# 222 "data/maps/Route1/scripts.pory"
	waitstate
	return


Route1_EventScript_Rival1::
# 228 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 229 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival1
# 230 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 231 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 232 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1
# 233 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 234 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_FaceLeft
# 235 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 237 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival2
# 238 "data/maps/Route1/scripts.pory"
	closemessage
# 239 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 240 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 241 "data/maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_EventScript_Rival2::
# 246 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 247 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival3
# 248 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 249 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 250 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2
# 251 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 252 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_Rival3::
# 257 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 258 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 259 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 260 "data/maps/Route1/scripts.pory"
	closemessage
# 261 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 262 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 263 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 264 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 265 "data/maps/Route1/scripts.pory"
	closemessage
# 266 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 267 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route1/scripts.pory"
	removeobject 3
# 269 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 270 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 271 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 273 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 274 "data/maps/Route1/scripts.pory"
	closemessage
# 275 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 276 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 277 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 278 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 279 "data/maps/Route1/scripts.pory"
	closemessage
# 280 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
# 285 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 286 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 287 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 288 "data/maps/Route1/scripts.pory"
	closemessage
# 289 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 290 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 291 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 292 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 293 "data/maps/Route1/scripts.pory"
	closemessage
# 294 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 295 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route1/scripts.pory"
	removeobject 3
# 297 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 298 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 299 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 301 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 302 "data/maps/Route1/scripts.pory"
	closemessage
# 303 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 304 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 305 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 306 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 307 "data/maps/Route1/scripts.pory"
	closemessage
# 308 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Boy::
# 313 "data/maps/Route1/scripts.pory"
	lockall
# 314 "data/maps/Route1/scripts.pory"
	faceplayer
# 315 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Boy1
# 316 "data/maps/Route1/scripts.pory"
	closemessage
# 317 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_BugCatcher::
# 321 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
# 322 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_BugCatcherPost
# 323 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_Lass::
# 328 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
# 329 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LassPost
# 330 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_LittleBoy::
# 335 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
# 336 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LittleBoyPost
# 337 "data/maps/Route1/scripts.pory"
	closemessage
	end


# 341 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceDown:
# 342 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 345 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceLeft:
# 346 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 349 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk1:
# 350 "data/maps/Route1/scripts.pory"
	walk_left
# 350 "data/maps/Route1/scripts.pory"
	walk_left
# 351 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk2:
# 355 "data/maps/Route1/scripts.pory"
	walk_left
# 355 "data/maps/Route1/scripts.pory"
	walk_left
# 356 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 359 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk3:
# 360 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 364 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepLU:
# 365 "data/maps/Route1/scripts.pory"
	walk_left
# 366 "data/maps/Route1/scripts.pory"
	walk_up
# 367 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 370 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepUL:
# 371 "data/maps/Route1/scripts.pory"
	walk_up
# 372 "data/maps/Route1/scripts.pory"
	walk_left
# 373 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 376 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep1:
# 377 "data/maps/Route1/scripts.pory"
	walk_left
# 377 "data/maps/Route1/scripts.pory"
	walk_left
# 378 "data/maps/Route1/scripts.pory"
	walk_up
# 378 "data/maps/Route1/scripts.pory"
	walk_up
# 379 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 382 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep2:
# 383 "data/maps/Route1/scripts.pory"
	walk_left
# 383 "data/maps/Route1/scripts.pory"
	walk_left
# 384 "data/maps/Route1/scripts.pory"
	walk_up
# 385 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 388 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep3:
# 389 "data/maps/Route1/scripts.pory"
	walk_left
# 389 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 392 "data/maps/Route1/scripts.pory"
Route1_Movement_Player1:
# 393 "data/maps/Route1/scripts.pory"
	walk_down
# 393 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 396 "data/maps/Route1/scripts.pory"
Route1_Movement_Player2:
# 397 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 400 "data/maps/Route1/scripts.pory"
Route1_Movement_PlayerStep1:
# 401 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 404 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalExit:
# 405 "data/maps/Route1/scripts.pory"
	walk_right
# 405 "data/maps/Route1/scripts.pory"
	walk_right
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 409 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player1:
# 410 "data/maps/Route1/scripts.pory"
	walk_down
# 410 "data/maps/Route1/scripts.pory"
	walk_down
# 411 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 414 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player2:
# 415 "data/maps/Route1/scripts.pory"
	walk_down
# 416 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 419 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player3:
# 420 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 423 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player4:
# 424 "data/maps/Route1/scripts.pory"
	walk_up
# 425 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 428 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player5:
# 429 "data/maps/Route1/scripts.pory"
	walk_up
# 429 "data/maps/Route1/scripts.pory"
	walk_up
# 430 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 433 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueLeafEnter:
# 434 "data/maps/Route1/scripts.pory"
	walk_down
# 434 "data/maps/Route1/scripts.pory"
	walk_down
# 434 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 437 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafToPlayer:
# 438 "data/maps/Route1/scripts.pory"
	walk_left
# 438 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 441 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafBehindPlayer:
# 442 "data/maps/Route1/scripts.pory"
	walk_down
# 443 "data/maps/Route1/scripts.pory"
	walk_left
# 444 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 447 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueToPlayer:
# 448 "data/maps/Route1/scripts.pory"
	walk_left
# 448 "data/maps/Route1/scripts.pory"
	walk_left
# 448 "data/maps/Route1/scripts.pory"
	walk_left
# 449 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 452 "data/maps/Route1/scripts.pory"
Route1_Movement_ZubatToPlayer:
# 453 "data/maps/Route1/scripts.pory"
	walk_down
# 454 "data/maps/Route1/scripts.pory"
	walk_left
# 454 "data/maps/Route1/scripts.pory"
	walk_left
# 455 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 458 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueExit:
# 459 "data/maps/Route1/scripts.pory"
	walk_right
# 459 "data/maps/Route1/scripts.pory"
	walk_right
# 460 "data/maps/Route1/scripts.pory"
	walk_up
# 460 "data/maps/Route1/scripts.pory"
	walk_up
# 460 "data/maps/Route1/scripts.pory"
	walk_up
# 460 "data/maps/Route1/scripts.pory"
	walk_up
# 460 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

Route1_EventScript_BlueScene_Text_0:
# 97 "data/maps/Route1/scripts.pory"
	.string "VAR_TEMP_A = 0$"

Route1_EventScript_BlueScene_Text_1:
# 111 "data/maps/Route1/scripts.pory"
	.string "VAR_TEMP_A OOB$"

Route1_Text_RockWarp::
# 464 "data/maps/Route1/scripts.pory"
	.string "Wanna warp - test?$"

Route1_Text_Rival1::
# 468 "data/maps/Route1/scripts.pory"
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
# 472 "data/maps/Route1/scripts.pory"
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
# 476 "data/maps/Route1/scripts.pory"
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
# 480 "data/maps/Route1/scripts.pory"
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us is\l"
	.string "the man.$"

Route1_Text_RivalLost::
# 484 "data/maps/Route1/scripts.pory"
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
# 488 "data/maps/Route1/scripts.pory"
	.string "My God!\p"
	.string "Humpty it's Daddy can you hear my\n"
	.string "broken voice or feel my stinging tears?\l"
	.string "Oh Humpty!\p"
	.string "It's all your fault you monster\p"
	.string "Murderer!\p"
	.string "You will not get away, violence won't\n"
	.string "win, I'll make sure in the end that\l"
	.string "freedom wins.$"

Route1_Text_Leaf1::
# 492 "data/maps/Route1/scripts.pory"
	.string "The storm has passed! I want to go back\n"
	.string "home!$"

Route1_Text_Leaf2::
# 496 "data/maps/Route1/scripts.pory"
	.string "Oh {PLAYER}! Thank God you're here!\n"
	.string "Please help me out!$"

Route1_Text_Leaf3::
# 500 "data/maps/Route1/scripts.pory"
	.string "That monster kidnapped me and kept me\n"
	.string "locked away all night doing unspeakable\l"
	.string "things to me while the storm raged on\l"
	.string "outside. I broke free and escaped as\l"
	.string "the sun rose and thought that Mew was\l"
	.string "showing me the way but if you were not\l"
	.string "here he would have caught me and\l"
	.string "brought me back to his lair. Let me show\l"
	.string "my affection.$"

Route1_Text_Leaf4::
# 504 "data/maps/Route1/scripts.pory"
	.string "Thank you so much {PLAYER}! Now come\n"
	.string "with me, I want you to meet my father\l"
	.string "who must be worried sick 'bout me.$"

Route1_Text_Blue1::
# 508 "data/maps/Route1/scripts.pory"
	.string "Get back here this instant! Don't\n"
	.string "ignore me!$"

Route1_Text_Blue2::
# 512 "data/maps/Route1/scripts.pory"
	.string "You stop right there! We're doing things\n"
	.string "my way!$"

Route1_Text_Blue3::
# 516 "data/maps/Route1/scripts.pory"
	.string "I'll warn you, step aside or face the\n"
	.string "wrath of the great terror who lives in\l"
	.string "the trees. I walk under the shadow of\l"
	.string "power and my reign of glory began this\l"
	.string "night when mighty Mew herself appeared\l"
	.string "to me and promised I would rule this\l"
	.string "world.\p"
	.string "Be gone!\p"
	.string "That girl is mine!\p"
	.string "Surrender her!\p"
	.string "I see you have chosen destruction.\n"
	.string "So be it.$"

Route1_Text_BlueLost::
# 520 "data/maps/Route1/scripts.pory"
	.string "Impossible! I've never lost before!$"

Route1_Text_Blue4::
# 524 "data/maps/Route1/scripts.pory"
	.string "Though beaten, my destiny is assured...\n"
	.string "Enjoy this rotten rag you've won from\l"
	.string "me. I squeezed every ounce of worth\l"
	.string "from her exhausted corpse. She's\l"
	.string "useless to me now on my journey of\l"
	.string "conquest and revenge. Do not forget\l"
	.string "this face! It will be the last thing your\l"
	.string "wretched eyes see on this earth for I\l"
	.string "will hunt you on it ceaselessly and\l"
	.string "strike you down to revenge this defeat.$"

Route1_Text_Boy1::
# 528 "data/maps/Route1/scripts.pory"
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
# 532 "data/maps/Route1/scripts.pory"
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
# 536 "data/maps/Route1/scripts.pory"
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
# 540 "data/maps/Route1/scripts.pory"
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
# 544 "data/maps/Route1/scripts.pory"
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
# 548 "data/maps/Route1/scripts.pory"
	.string "Heartbroken again.$"

Route1_Text_LassPost::
# 552 "data/maps/Route1/scripts.pory"
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
# 556 "data/maps/Route1/scripts.pory"
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
# 560 "data/maps/Route1/scripts.pory"
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
# 564 "data/maps/Route1/scripts.pory"
	.string "Maybe we can smoke sometime?$"
