Route1_MapScripts::
# 9 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/Route1/scripts.pory"
	call Route1_Script_SetupStorm
	return


Route1_EventScript_RockTest::
# 18 "data/maps/Route1/scripts.pory"
	lock
# 19 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_WarpToLeafHouse
# 20 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Script_SetupStorm::
# 25 "data/maps/Route1/scripts.pory"
	setobjectxyperm 5, 0, 0
# 26 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 28 "data/maps/Route1/scripts.pory"
	setobjectxyperm 6, 0, 0
# 29 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 31 "data/maps/Route1/scripts.pory"
	setobjectxyperm 7, 0, 0
# 32 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 34 "data/maps/Route1/scripts.pory"
	setobjectxyperm 8, 0, 0
# 35 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 38 "data/maps/Route1/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 39 "data/maps/Route1/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


Route1_EventScript_RivalTrigger1::
# 46 "data/maps/Route1/scripts.pory"
	lock
# 47 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 1
# 48 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 50 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger2::
# 55 "data/maps/Route1/scripts.pory"
	lock
# 56 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 2
# 57 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 59 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger3::
# 64 "data/maps/Route1/scripts.pory"
	lock
# 65 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 3
# 66 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 68 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger4::
# 73 "data/maps/Route1/scripts.pory"
	lock
# 74 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 4
# 75 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 77 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger5::
# 82 "data/maps/Route1/scripts.pory"
	lock
# 83 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_A, 5
# 84 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_BlueScene
# 86 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_BlueScene::
# 92 "data/maps/Route1/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, TRUE
# 93 "data/maps/Route1/scripts.pory"
	switch VAR_TEMP_A
# 94 "data/maps/Route1/scripts.pory"
	case 0, Route1_EventScript_BlueScene_3
# 98 "data/maps/Route1/scripts.pory"
	case 1, Route1_EventScript_BlueScene_4
# 100 "data/maps/Route1/scripts.pory"
	case 2, Route1_EventScript_BlueScene_5
# 102 "data/maps/Route1/scripts.pory"
	case 3, Route1_EventScript_BlueScene_6
# 104 "data/maps/Route1/scripts.pory"
	case 4, Route1_EventScript_BlueScene_7
# 106 "data/maps/Route1/scripts.pory"
	case 5, Route1_EventScript_BlueScene_8
# 109 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_BlueScene_Text_1, MSGBOX_DEFAULT
# 110 "data/maps/Route1/scripts.pory"
	closemessage
# 111 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
Route1_EventScript_BlueScene_1:
# 113 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 116 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route1/scripts.pory"
	setobjectxyperm 3, 19, 7
# 119 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 120 "data/maps/Route1/scripts.pory"
	addobject 3
# 121 "data/maps/Route1/scripts.pory"
	showobjectat 3, MAP_ROUTE1
# 123 "data/maps/Route1/scripts.pory"
	setobjectxyperm 4, 19, 8
# 124 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 125 "data/maps/Route1/scripts.pory"
	addobject 4
# 126 "data/maps/Route1/scripts.pory"
	showobjectat 4, MAP_ROUTE1
# 128 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueLeafEnter
# 129 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_BlueLeafEnter
# 130 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 132 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue1, MSGBOX_DEFAULT
# 133 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 136 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 137 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 140 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1, MSGBOX_DEFAULT
# 141 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 143 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueLeafEnter
# 144 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_BlueLeafEnter
# 145 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 147 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue2, MSGBOX_DEFAULT
# 148 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 149 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route1/scripts.pory"
	closemessage
# 152 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 153 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafToPlayer
# 154 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 157 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 161 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2, MSGBOX_DEFAULT
# 162 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 163 "data/maps/Route1/scripts.pory"
	closemessage
# 165 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafBehindPlayer
# 167 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueToPlayer
# 168 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 170 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 173 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue3, MSGBOX_DEFAULT
# 174 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 175 "data/maps/Route1/scripts.pory"
	closemessage
# 177 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_BlueLost
# 179 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 180 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Blue4, MSGBOX_DEFAULT
# 181 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 182 "data/maps/Route1/scripts.pory"
	closemessage
# 184 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_BlueExit
# 185 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route1/scripts.pory"
	fadedefaultbgm
# 188 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 189 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 192 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3, MSGBOX_DEFAULT
# 193 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 194 "data/maps/Route1/scripts.pory"
	closemessage
# 196 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 198 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 199 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4, MSGBOX_DEFAULT
# 200 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 201 "data/maps/Route1/scripts.pory"
	closemessage
# 204 "data/maps/Route1/scripts.pory"
	release
	end

Route1_EventScript_BlueScene_3:
# 95 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_BlueScene_Text_0, MSGBOX_DEFAULT
# 96 "data/maps/Route1/scripts.pory"
	closemessage
# 97 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_4:
# 99 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player1
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_5:
# 101 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player2
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_6:
# 103 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player3
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_7:
# 105 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player4
	goto Route1_EventScript_BlueScene_1

Route1_EventScript_BlueScene_8:
# 107 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_BlueScene_Player5
	goto Route1_EventScript_BlueScene_1


Route1_EventScript_WarpToLeafHouse::
# 209 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 210 "data/maps/Route1/scripts.pory"
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
# 211 "data/maps/Route1/scripts.pory"
	waitstate
	return


Route1_EventScript_Rival1::
# 217 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 218 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival1
# 219 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 220 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 221 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1
# 222 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 223 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_FaceLeft
# 224 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 226 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival2
# 227 "data/maps/Route1/scripts.pory"
	closemessage
# 228 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 229 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 230 "data/maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_EventScript_Rival2::
# 235 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 236 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival3
# 237 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 238 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 239 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2
# 240 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 241 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_Rival3::
# 246 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 247 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 248 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 249 "data/maps/Route1/scripts.pory"
	closemessage
# 250 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 251 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 252 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 253 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 254 "data/maps/Route1/scripts.pory"
	closemessage
# 255 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 256 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route1/scripts.pory"
	removeobject 3
# 258 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 259 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 260 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 262 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 263 "data/maps/Route1/scripts.pory"
	closemessage
# 264 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 265 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 266 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 267 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 268 "data/maps/Route1/scripts.pory"
	closemessage
# 269 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
# 274 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 275 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 276 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 277 "data/maps/Route1/scripts.pory"
	closemessage
# 278 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 279 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 280 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 281 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 282 "data/maps/Route1/scripts.pory"
	closemessage
# 283 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 284 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route1/scripts.pory"
	removeobject 3
# 286 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 287 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 288 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 290 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 291 "data/maps/Route1/scripts.pory"
	closemessage
# 292 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 293 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 294 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 295 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 296 "data/maps/Route1/scripts.pory"
	closemessage
# 297 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Boy::
# 302 "data/maps/Route1/scripts.pory"
	lockall
# 303 "data/maps/Route1/scripts.pory"
	faceplayer
# 304 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Boy1
# 305 "data/maps/Route1/scripts.pory"
	closemessage
# 306 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_BugCatcher::
# 310 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
# 311 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_BugCatcherPost
# 312 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_Lass::
# 317 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
# 318 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LassPost
# 319 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_LittleBoy::
# 324 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
# 325 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LittleBoyPost
# 326 "data/maps/Route1/scripts.pory"
	closemessage
	end


# 330 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceDown:
# 331 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 334 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceLeft:
# 335 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 338 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk1:
# 339 "data/maps/Route1/scripts.pory"
	walk_left
# 339 "data/maps/Route1/scripts.pory"
	walk_left
# 340 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 343 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk2:
# 344 "data/maps/Route1/scripts.pory"
	walk_left
# 344 "data/maps/Route1/scripts.pory"
	walk_left
# 345 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 348 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk3:
# 349 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 353 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepLU:
# 354 "data/maps/Route1/scripts.pory"
	walk_left
# 355 "data/maps/Route1/scripts.pory"
	walk_up
# 356 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 359 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepUL:
# 360 "data/maps/Route1/scripts.pory"
	walk_up
# 361 "data/maps/Route1/scripts.pory"
	walk_left
# 362 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 365 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep1:
# 366 "data/maps/Route1/scripts.pory"
	walk_left
# 366 "data/maps/Route1/scripts.pory"
	walk_left
# 367 "data/maps/Route1/scripts.pory"
	walk_up
# 367 "data/maps/Route1/scripts.pory"
	walk_up
# 368 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 371 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep2:
# 372 "data/maps/Route1/scripts.pory"
	walk_left
# 372 "data/maps/Route1/scripts.pory"
	walk_left
# 373 "data/maps/Route1/scripts.pory"
	walk_up
# 374 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 377 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep3:
# 378 "data/maps/Route1/scripts.pory"
	walk_left
# 378 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 381 "data/maps/Route1/scripts.pory"
Route1_Movement_Player1:
# 382 "data/maps/Route1/scripts.pory"
	walk_down
# 382 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 385 "data/maps/Route1/scripts.pory"
Route1_Movement_Player2:
# 386 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 389 "data/maps/Route1/scripts.pory"
Route1_Movement_PlayerStep1:
# 390 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 393 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalExit:
# 394 "data/maps/Route1/scripts.pory"
	walk_right
# 394 "data/maps/Route1/scripts.pory"
	walk_right
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
# 395 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 398 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player1:
# 399 "data/maps/Route1/scripts.pory"
	walk_down
# 399 "data/maps/Route1/scripts.pory"
	walk_down
# 400 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 403 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player2:
# 404 "data/maps/Route1/scripts.pory"
	walk_down
# 405 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 408 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player3:
# 409 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 412 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player4:
# 413 "data/maps/Route1/scripts.pory"
	walk_up
# 414 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 417 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueScene_Player5:
# 418 "data/maps/Route1/scripts.pory"
	walk_up
# 418 "data/maps/Route1/scripts.pory"
	walk_up
# 419 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 422 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueLeafEnter:
# 423 "data/maps/Route1/scripts.pory"
	walk_down
# 423 "data/maps/Route1/scripts.pory"
	walk_down
# 423 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 426 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafToPlayer:
# 427 "data/maps/Route1/scripts.pory"
	walk_left
# 427 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 430 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafBehindPlayer:
# 431 "data/maps/Route1/scripts.pory"
	walk_down
# 432 "data/maps/Route1/scripts.pory"
	walk_left
# 433 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 436 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueToPlayer:
# 437 "data/maps/Route1/scripts.pory"
	walk_left
# 437 "data/maps/Route1/scripts.pory"
	walk_left
# 437 "data/maps/Route1/scripts.pory"
	walk_left
# 438 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 441 "data/maps/Route1/scripts.pory"
Route1_Movement_BlueExit:
# 442 "data/maps/Route1/scripts.pory"
	walk_right
# 442 "data/maps/Route1/scripts.pory"
	walk_right
# 443 "data/maps/Route1/scripts.pory"
	walk_up
# 443 "data/maps/Route1/scripts.pory"
	walk_up
# 443 "data/maps/Route1/scripts.pory"
	walk_up
# 443 "data/maps/Route1/scripts.pory"
	walk_up
# 443 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

Route1_EventScript_BlueScene_Text_0:
# 95 "data/maps/Route1/scripts.pory"
	.string "VAR_TEMP_A = 0$"

Route1_EventScript_BlueScene_Text_1:
# 109 "data/maps/Route1/scripts.pory"
	.string "VAR_TEMP_A OOB$"

Route1_Text_RockWarp::
# 447 "data/maps/Route1/scripts.pory"
	.string "Wanna warp - test?$"

Route1_Text_Rival1::
# 451 "data/maps/Route1/scripts.pory"
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
# 455 "data/maps/Route1/scripts.pory"
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
# 459 "data/maps/Route1/scripts.pory"
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
# 463 "data/maps/Route1/scripts.pory"
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us is\l"
	.string "the man.$"

Route1_Text_RivalLost::
# 467 "data/maps/Route1/scripts.pory"
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
# 471 "data/maps/Route1/scripts.pory"
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
# 475 "data/maps/Route1/scripts.pory"
	.string "The storm has passed! I want to go back\n"
	.string "home!$"

Route1_Text_Leaf2::
# 479 "data/maps/Route1/scripts.pory"
	.string "Oh {PLAYER}! Thank God you're here!\n"
	.string "Please help me out!$"

Route1_Text_Leaf3::
# 483 "data/maps/Route1/scripts.pory"
	.string "That monster kidnapped me and kept me\n"
	.string "locked away all night doing unspeakable\l"
	.string "things to me while the storm raged on\l"
	.string "outside. I broke free and escaped as\l"
	.string "the sun rose and thought that Mew was\l"
	.string "showing me the way but if you were not\l"
	.string "here he would have caught me and\l"
	.string "brought me back to his lair. Let me heal\l"
	.string "your Pokemon.$"

Route1_Text_Leaf4::
# 487 "data/maps/Route1/scripts.pory"
	.string "Thank you so much {PLAYER}! Now come\n"
	.string "with me, I want you to meet my father\l"
	.string "who must be worried sick 'bout me.$"

Route1_Text_Blue1::
# 491 "data/maps/Route1/scripts.pory"
	.string "Get back here this instant! Don't\n"
	.string "ignore me!$"

Route1_Text_Blue2::
# 495 "data/maps/Route1/scripts.pory"
	.string "You stop right there! We're doing things\n"
	.string "my way!$"

Route1_Text_Blue3::
# 499 "data/maps/Route1/scripts.pory"
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
# 503 "data/maps/Route1/scripts.pory"
	.string "Impossible! I've never lost before!$"

Route1_Text_Blue4::
# 507 "data/maps/Route1/scripts.pory"
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
# 511 "data/maps/Route1/scripts.pory"
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
# 515 "data/maps/Route1/scripts.pory"
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
# 519 "data/maps/Route1/scripts.pory"
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
# 523 "data/maps/Route1/scripts.pory"
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
# 527 "data/maps/Route1/scripts.pory"
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
# 531 "data/maps/Route1/scripts.pory"
	.string "Heartbroken again.$"

Route1_Text_LassPost::
# 535 "data/maps/Route1/scripts.pory"
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
# 539 "data/maps/Route1/scripts.pory"
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
# 543 "data/maps/Route1/scripts.pory"
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
# 547 "data/maps/Route1/scripts.pory"
	.string "Maybe we can smoke sometime?$"
