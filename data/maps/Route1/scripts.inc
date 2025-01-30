Route1_MapScripts::
# 5 "data//maps/Route1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data//maps/Route1/scripts.pory"
	compare VAR_GRANNY_STATE, 10
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data//maps/Route1/scripts.pory"
	call Route1_Script_SetupStorm
	return


Route1_EventScript_RockTest::
# 15 "data//maps/Route1/scripts.pory"
	lock
# 16 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_WarpToLeafHouse
# 17 "data//maps/Route1/scripts.pory"
	release
	end


Route1_Script_SetupStorm::
# 22 "data//maps/Route1/scripts.pory"
	setobjectxyperm 5, 0, 0
# 23 "data//maps/Route1/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 25 "data//maps/Route1/scripts.pory"
	setobjectxyperm 6, 0, 0
# 26 "data//maps/Route1/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 28 "data//maps/Route1/scripts.pory"
	setobjectxyperm 7, 0, 0
# 29 "data//maps/Route1/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 31 "data//maps/Route1/scripts.pory"
	setobjectxyperm 8, 0, 0
# 32 "data//maps/Route1/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 35 "data//maps/Route1/scripts.pory"
	setweather WEATHER_DOWNPOUR
	return


Route1_EventScript_RivalTrigger1::
# 42 "data//maps/Route1/scripts.pory"
	lock
# 43 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 44 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 45 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player1
# 46 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 47 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 48 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 49 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 50 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 51 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 52 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 53 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 54 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 55 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 56 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 57 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 58 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger2::
# 63 "data//maps/Route1/scripts.pory"
	lock
# 64 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 65 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 66 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player2
# 67 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 68 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 69 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 70 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 71 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 72 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 73 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 74 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 75 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 76 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 77 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 78 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 79 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger3::
# 84 "data//maps/Route1/scripts.pory"
	lock
# 85 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 86 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 87 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 88 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 89 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 90 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 91 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 93 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 94 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 95 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 96 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 97 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 98 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 99 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 100 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger4::
# 105 "data//maps/Route1/scripts.pory"
	lock
# 106 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 107 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 108 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 109 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 110 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 111 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk2
# 112 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 113 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 114 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 115 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 116 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep2
# 117 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 118 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 119 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 120 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 121 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 122 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger5::
# 127 "data//maps/Route1/scripts.pory"
	lock
# 128 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 129 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 130 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 131 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 132 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 133 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk3
# 134 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 135 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 136 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepUL
# 137 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep3
# 138 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 139 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3B
# 140 "data//maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 141 "data//maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_WarpToLeafHouse::
# 147 "data//maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 148 "data//maps/Route1/scripts.pory"
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
# 149 "data//maps/Route1/scripts.pory"
	waitstate
	return


Route1_EventScript_Rival1::
# 155 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 156 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival1
# 157 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 158 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 159 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1
# 160 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
# 161 "data//maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_FaceLeft
# 162 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 163 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 164 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival2
# 165 "data//maps/Route1/scripts.pory"
	closemessage
# 166 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 167 "data//maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 168 "data//maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_EventScript_Rival2::
# 173 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 174 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival3
# 175 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 176 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 177 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2
# 178 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
# 179 "data//maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_Rival3::
# 184 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 185 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 186 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 187 "data//maps/Route1/scripts.pory"
	closemessage
# 188 "data//maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 189 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 190 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 191 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 192 "data//maps/Route1/scripts.pory"
	closemessage
# 193 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 194 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 195 "data//maps/Route1/scripts.pory"
	removeobject 3
# 196 "data//maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 197 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 198 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 199 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 200 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 201 "data//maps/Route1/scripts.pory"
	closemessage
# 202 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
# 203 "data//maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 204 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 205 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 206 "data//maps/Route1/scripts.pory"
	closemessage
# 207 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
# 212 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 213 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 214 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 215 "data//maps/Route1/scripts.pory"
	closemessage
# 216 "data//maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 217 "data//maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 218 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 219 "data//maps/Route1/scripts.pory"
	destroy_field_pic 3
# 220 "data//maps/Route1/scripts.pory"
	closemessage
# 221 "data//maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 222 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 223 "data//maps/Route1/scripts.pory"
	removeobject 3
# 224 "data//maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 225 "data//maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 226 "data//maps/Route1/scripts.pory"
	waitmovement 0
# 227 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 228 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 229 "data//maps/Route1/scripts.pory"
	closemessage
# 230 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
# 231 "data//maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 232 "data//maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 233 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 234 "data//maps/Route1/scripts.pory"
	closemessage
# 235 "data//maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Boy::
# 240 "data//maps/Route1/scripts.pory"
	lockall
# 241 "data//maps/Route1/scripts.pory"
	faceplayer
# 242 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_Boy1
# 243 "data//maps/Route1/scripts.pory"
	closemessage
# 244 "data//maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_BugCatcher::
# 248 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
# 249 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_BugCatcherPost
# 250 "data//maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_Lass::
# 255 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
# 256 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_LassPost
# 257 "data//maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_LittleBoy::
# 262 "data//maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
# 263 "data//maps/Route1/scripts.pory"
	msgbox Route1_Text_LittleBoyPost
# 264 "data//maps/Route1/scripts.pory"
	closemessage
	end


# 268 "data//maps/Route1/scripts.pory"
Route1_Movement_FaceDown:
# 269 "data//maps/Route1/scripts.pory"
	face_down
	step_end

# 272 "data//maps/Route1/scripts.pory"
Route1_Movement_FaceLeft:
# 273 "data//maps/Route1/scripts.pory"
	face_left
	step_end

# 276 "data//maps/Route1/scripts.pory"
Route1_Movement_LeafWalk1:
# 277 "data//maps/Route1/scripts.pory"
	walk_left
# 277 "data//maps/Route1/scripts.pory"
	walk_left
# 278 "data//maps/Route1/scripts.pory"
	walk_up
	step_end

# 281 "data//maps/Route1/scripts.pory"
Route1_Movement_LeafWalk2:
# 282 "data//maps/Route1/scripts.pory"
	walk_left
# 282 "data//maps/Route1/scripts.pory"
	walk_left
# 283 "data//maps/Route1/scripts.pory"
	face_up
	step_end

# 286 "data//maps/Route1/scripts.pory"
Route1_Movement_LeafWalk3:
# 287 "data//maps/Route1/scripts.pory"
	walk_left
	step_end

# 291 "data//maps/Route1/scripts.pory"
Route1_Movement_LeafStepLU:
# 292 "data//maps/Route1/scripts.pory"
	walk_left
# 293 "data//maps/Route1/scripts.pory"
	walk_up
# 294 "data//maps/Route1/scripts.pory"
	face_down
	step_end

# 297 "data//maps/Route1/scripts.pory"
Route1_Movement_LeafStepUL:
# 298 "data//maps/Route1/scripts.pory"
	walk_up
# 299 "data//maps/Route1/scripts.pory"
	walk_left
# 300 "data//maps/Route1/scripts.pory"
	face_right
	step_end

# 303 "data//maps/Route1/scripts.pory"
Route1_Movement_RivalStep1:
# 304 "data//maps/Route1/scripts.pory"
	walk_left
# 304 "data//maps/Route1/scripts.pory"
	walk_left
# 305 "data//maps/Route1/scripts.pory"
	walk_up
# 305 "data//maps/Route1/scripts.pory"
	walk_up
# 306 "data//maps/Route1/scripts.pory"
	face_left
	step_end

# 309 "data//maps/Route1/scripts.pory"
Route1_Movement_RivalStep2:
# 310 "data//maps/Route1/scripts.pory"
	walk_left
# 310 "data//maps/Route1/scripts.pory"
	walk_left
# 311 "data//maps/Route1/scripts.pory"
	walk_up
# 312 "data//maps/Route1/scripts.pory"
	face_left
	step_end

# 315 "data//maps/Route1/scripts.pory"
Route1_Movement_RivalStep3:
# 316 "data//maps/Route1/scripts.pory"
	walk_left
# 316 "data//maps/Route1/scripts.pory"
	walk_left
	step_end

# 319 "data//maps/Route1/scripts.pory"
Route1_Movement_Player1:
# 320 "data//maps/Route1/scripts.pory"
	walk_down
# 320 "data//maps/Route1/scripts.pory"
	walk_down
	step_end

# 323 "data//maps/Route1/scripts.pory"
Route1_Movement_Player2:
# 324 "data//maps/Route1/scripts.pory"
	walk_down
	step_end

# 327 "data//maps/Route1/scripts.pory"
Route1_Movement_PlayerStep1:
# 328 "data//maps/Route1/scripts.pory"
	walk_down
	step_end

# 331 "data//maps/Route1/scripts.pory"
Route1_Movement_RivalExit:
# 332 "data//maps/Route1/scripts.pory"
	walk_right
# 332 "data//maps/Route1/scripts.pory"
	walk_right
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
# 333 "data//maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_Text_RockWarp::
# 336 "data//maps/Route1/scripts.pory"
	.string "Wanna warp - test?$"

Route1_Text_Rival1::
# 340 "data//maps/Route1/scripts.pory"
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
# 344 "data//maps/Route1/scripts.pory"
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
# 348 "data//maps/Route1/scripts.pory"
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
# 352 "data//maps/Route1/scripts.pory"
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us is\l"
	.string "the man.$"

Route1_Text_RivalLost::
# 356 "data//maps/Route1/scripts.pory"
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
# 360 "data//maps/Route1/scripts.pory"
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
# 364 "data//maps/Route1/scripts.pory"
	.string "Hold on! I thought you just wanted to\n"
	.string "smoke. I think that I should maybe head\l"
	.string "home soon.$"

Route1_Text_Leaf2::
# 368 "data//maps/Route1/scripts.pory"
	.string "Hey there stranger, think you could\n"
	.string "lend a hand? This creepy dude will not\l"
	.string "leave me alone and if you kick his ass\l"
	.string "we'll hella smoke$"

Route1_Text_Leaf3::
# 372 "data//maps/Route1/scripts.pory"
	.string "Hey look at you, you're like a real hero\n"
	.string "all big and strong, and chivalrous to\l"
	.string "boot. Do you smoke weed? Here take a\l"
	.string "puff on this.$"

Route1_Text_Leaf4::
# 376 "data//maps/Route1/scripts.pory"
	.string "You're pretty cool, c'mon back to my\n"
	.string "place.$"

Route1_Text_Boy1::
# 380 "data//maps/Route1/scripts.pory"
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
# 384 "data//maps/Route1/scripts.pory"
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
# 388 "data//maps/Route1/scripts.pory"
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
# 392 "data//maps/Route1/scripts.pory"
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
# 396 "data//maps/Route1/scripts.pory"
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
# 400 "data//maps/Route1/scripts.pory"
	.string "Heartbroken again.$"

Route1_Text_LassPost::
# 404 "data//maps/Route1/scripts.pory"
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
# 408 "data//maps/Route1/scripts.pory"
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
# 412 "data//maps/Route1/scripts.pory"
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
# 416 "data//maps/Route1/scripts.pory"
	.string "Maybe we can smoke sometime?$"
