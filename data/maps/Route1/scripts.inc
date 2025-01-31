Route1_MapScripts::
# 5 "data/maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 6 "data/maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 11
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Route1/scripts.pory"
	call Route1_Script_SetupStorm
	return


Route1_EventScript_RockTest::
# 15 "data/maps/Route1/scripts.pory"
	lock
# 16 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_WarpToLeafHouse
# 17 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Script_SetupStorm::
# 22 "data/maps/Route1/scripts.pory"
	setobjectxyperm 5, 0, 0
# 23 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 25 "data/maps/Route1/scripts.pory"
	setobjectxyperm 6, 0, 0
# 26 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 28 "data/maps/Route1/scripts.pory"
	setobjectxyperm 7, 0, 0
# 29 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 31 "data/maps/Route1/scripts.pory"
	setobjectxyperm 8, 0, 0
# 32 "data/maps/Route1/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 35 "data/maps/Route1/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 36 "data/maps/Route1/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, TRUE
	return


Route1_EventScript_RivalTrigger1::
# 43 "data/maps/Route1/scripts.pory"
	lock
# 44 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 45 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player1
# 47 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 49 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 50 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 52 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 53 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 54 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 56 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 58 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 59 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger2::
# 64 "data/maps/Route1/scripts.pory"
	lock
# 65 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 66 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player2
# 68 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 70 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 71 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 73 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 74 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 75 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 77 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 79 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 80 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger3::
# 85 "data/maps/Route1/scripts.pory"
	lock
# 86 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 87 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 89 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 91 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 92 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 94 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 95 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 96 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 98 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 100 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 101 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger4::
# 106 "data/maps/Route1/scripts.pory"
	lock
# 107 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 108 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 110 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 112 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk2
# 113 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 114 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 116 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 117 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep2
# 118 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 120 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 122 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 123 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger5::
# 128 "data/maps/Route1/scripts.pory"
	lock
# 129 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 130 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 132 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 134 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk3
# 135 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 137 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepUL
# 138 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep3
# 139 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3B
# 141 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 142 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_WarpToLeafHouse::
# 148 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 149 "data/maps/Route1/scripts.pory"
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
# 150 "data/maps/Route1/scripts.pory"
	waitstate
	return


Route1_EventScript_Rival1::
# 156 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 157 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival1
# 158 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 159 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 160 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1
# 161 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 162 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_FaceLeft
# 163 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 165 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival2
# 166 "data/maps/Route1/scripts.pory"
	closemessage
# 167 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 168 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 169 "data/maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_EventScript_Rival2::
# 174 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 175 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival3
# 176 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 177 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 178 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2
# 179 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 180 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_Rival3::
# 185 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 186 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 187 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 188 "data/maps/Route1/scripts.pory"
	closemessage
# 189 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 190 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 191 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 192 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 193 "data/maps/Route1/scripts.pory"
	closemessage
# 194 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 195 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 196 "data/maps/Route1/scripts.pory"
	removeobject 3
# 197 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 198 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 199 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 201 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 202 "data/maps/Route1/scripts.pory"
	closemessage
# 203 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 204 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 205 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 206 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 207 "data/maps/Route1/scripts.pory"
	closemessage
# 208 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
# 213 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 214 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 215 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 216 "data/maps/Route1/scripts.pory"
	closemessage
# 217 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 218 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 219 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 220 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 221 "data/maps/Route1/scripts.pory"
	closemessage
# 222 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 223 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route1/scripts.pory"
	removeobject 3
# 225 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 226 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 227 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 229 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 230 "data/maps/Route1/scripts.pory"
	closemessage
# 231 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 232 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 233 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 234 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 235 "data/maps/Route1/scripts.pory"
	closemessage
# 236 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Boy::
# 241 "data/maps/Route1/scripts.pory"
	lockall
# 242 "data/maps/Route1/scripts.pory"
	faceplayer
# 243 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Boy1
# 244 "data/maps/Route1/scripts.pory"
	closemessage
# 245 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_BugCatcher::
# 249 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
# 250 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_BugCatcherPost
# 251 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_Lass::
# 256 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
# 257 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LassPost
# 258 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_LittleBoy::
# 263 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
# 264 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LittleBoyPost
# 265 "data/maps/Route1/scripts.pory"
	closemessage
	end


# 269 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceDown:
# 270 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 273 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceLeft:
# 274 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 277 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk1:
# 278 "data/maps/Route1/scripts.pory"
	walk_left
# 278 "data/maps/Route1/scripts.pory"
	walk_left
# 279 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk2:
# 283 "data/maps/Route1/scripts.pory"
	walk_left
# 283 "data/maps/Route1/scripts.pory"
	walk_left
# 284 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 287 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk3:
# 288 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 292 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepLU:
# 293 "data/maps/Route1/scripts.pory"
	walk_left
# 294 "data/maps/Route1/scripts.pory"
	walk_up
# 295 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 298 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepUL:
# 299 "data/maps/Route1/scripts.pory"
	walk_up
# 300 "data/maps/Route1/scripts.pory"
	walk_left
# 301 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 304 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep1:
# 305 "data/maps/Route1/scripts.pory"
	walk_left
# 305 "data/maps/Route1/scripts.pory"
	walk_left
# 306 "data/maps/Route1/scripts.pory"
	walk_up
# 306 "data/maps/Route1/scripts.pory"
	walk_up
# 307 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 310 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep2:
# 311 "data/maps/Route1/scripts.pory"
	walk_left
# 311 "data/maps/Route1/scripts.pory"
	walk_left
# 312 "data/maps/Route1/scripts.pory"
	walk_up
# 313 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 316 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep3:
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 320 "data/maps/Route1/scripts.pory"
Route1_Movement_Player1:
# 321 "data/maps/Route1/scripts.pory"
	walk_down
# 321 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 324 "data/maps/Route1/scripts.pory"
Route1_Movement_Player2:
# 325 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 328 "data/maps/Route1/scripts.pory"
Route1_Movement_PlayerStep1:
# 329 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalExit:
# 333 "data/maps/Route1/scripts.pory"
	walk_right
# 333 "data/maps/Route1/scripts.pory"
	walk_right
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
# 334 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_Text_RockWarp::
# 337 "data/maps/Route1/scripts.pory"
	.string "Wanna warp - test?$"

Route1_Text_Rival1::
# 341 "data/maps/Route1/scripts.pory"
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
# 345 "data/maps/Route1/scripts.pory"
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
# 349 "data/maps/Route1/scripts.pory"
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
# 353 "data/maps/Route1/scripts.pory"
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us is\l"
	.string "the man.$"

Route1_Text_RivalLost::
# 357 "data/maps/Route1/scripts.pory"
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
# 361 "data/maps/Route1/scripts.pory"
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
# 365 "data/maps/Route1/scripts.pory"
	.string "Hold on! I thought you just wanted to\n"
	.string "smoke. I think that I should maybe head\l"
	.string "home soon.$"

Route1_Text_Leaf2::
# 369 "data/maps/Route1/scripts.pory"
	.string "Hey there stranger, think you could\n"
	.string "lend a hand? This creepy dude will not\l"
	.string "leave me alone and if you kick his ass\l"
	.string "we'll hella smoke$"

Route1_Text_Leaf3::
# 373 "data/maps/Route1/scripts.pory"
	.string "Hey look at you, you're like a real hero\n"
	.string "all big and strong, and chivalrous to\l"
	.string "boot. Do you smoke weed? Here take a\l"
	.string "puff on this.$"

Route1_Text_Leaf4::
# 377 "data/maps/Route1/scripts.pory"
	.string "You're pretty cool, c'mon back to my\n"
	.string "place.$"

Route1_Text_Boy1::
# 381 "data/maps/Route1/scripts.pory"
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
# 385 "data/maps/Route1/scripts.pory"
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
# 389 "data/maps/Route1/scripts.pory"
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
# 393 "data/maps/Route1/scripts.pory"
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
# 397 "data/maps/Route1/scripts.pory"
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
# 401 "data/maps/Route1/scripts.pory"
	.string "Heartbroken again.$"

Route1_Text_LassPost::
# 405 "data/maps/Route1/scripts.pory"
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
# 409 "data/maps/Route1/scripts.pory"
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
# 413 "data/maps/Route1/scripts.pory"
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
# 417 "data/maps/Route1/scripts.pory"
	.string "Maybe we can smoke sometime?$"
