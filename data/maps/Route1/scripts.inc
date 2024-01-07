Route1_MapScripts::
	.byte 0


Route1_EventScript_RockTest::
# 5 "data/maps/Route1/scripts.pory"
	lock
# 6 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_WarpToLeafHouse
# 7 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger1::
# 13 "data/maps/Route1/scripts.pory"
	lock
# 14 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 15 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player1
# 17 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 19 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 20 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 22 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 23 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 24 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 26 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 28 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 29 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger2::
# 34 "data/maps/Route1/scripts.pory"
	lock
# 35 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 36 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player2
# 38 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 40 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 41 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 43 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 44 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 45 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 47 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 49 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 50 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger3::
# 55 "data/maps/Route1/scripts.pory"
	lock
# 56 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 57 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 59 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 61 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk1
# 62 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 64 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 65 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep1
# 66 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 68 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 70 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 71 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger4::
# 76 "data/maps/Route1/scripts.pory"
	lock
# 77 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 78 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 80 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 82 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk2
# 83 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 84 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 86 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepLU
# 87 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep2
# 88 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 90 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3
# 92 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 93 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_RivalTrigger5::
# 98 "data/maps/Route1/scripts.pory"
	lock
# 99 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 100 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 102 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival1
# 104 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafWalk3
# 105 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival2
# 107 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_LeafStepUL
# 108 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalStep3
# 109 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_Rival3B
# 111 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RockTest
# 112 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_WarpToLeafHouse::
# 118 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE1_STATE, 1
# 119 "data/maps/Route1/scripts.pory"
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
# 120 "data/maps/Route1/scripts.pory"
	waitstate
	return


Route1_EventScript_Rival1::
# 126 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 127 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival1
# 128 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 129 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 130 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf1
# 131 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 132 "data/maps/Route1/scripts.pory"
	applymovement 4, Route1_Movement_FaceLeft
# 133 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 135 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival2
# 136 "data/maps/Route1/scripts.pory"
	closemessage
# 137 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 138 "data/maps/Route1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 139 "data/maps/Route1/scripts.pory"
	waitmovement 0
	return


Route1_EventScript_Rival2::
# 144 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 145 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival3
# 146 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 147 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 148 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf2
# 149 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 150 "data/maps/Route1/scripts.pory"
	closemessage
	return


Route1_EventScript_Rival3::
# 155 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 156 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 157 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 158 "data/maps/Route1/scripts.pory"
	closemessage
# 159 "data/maps/Route1/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
# 160 "data/maps/Route1/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL1, Route1_Text_RivalLost
# 161 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 162 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival5
# 163 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 164 "data/maps/Route1/scripts.pory"
	closemessage
# 165 "data/maps/Route1/scripts.pory"
	applymovement 3, Route1_Movement_RivalExit
# 166 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route1/scripts.pory"
	removeobject 3
# 168 "data/maps/Route1/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 169 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 170 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 172 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf3
# 173 "data/maps/Route1/scripts.pory"
	closemessage
# 174 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
# 175 "data/maps/Route1/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 176 "data/maps/Route1/scripts.pory"
	load_field_pic 4, 190, 98
# 177 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Leaf4
# 178 "data/maps/Route1/scripts.pory"
	closemessage
# 179 "data/maps/Route1/scripts.pory"
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
# 184 "data/maps/Route1/scripts.pory"
	load_field_pic 3, 190, 98
# 185 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Rival4
# 186 "data/maps/Route1/scripts.pory"
	destroy_field_pic 3
# 187 "data/maps/Route1/scripts.pory"
	closemessage
# 188 "data/maps/Route1/scripts.pory"
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
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
	applymovement 4, Common_Movement_FaceDown
# 198 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
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


Route1_EventScript_Boy::
# 213 "data/maps/Route1/scripts.pory"
	lockall
# 214 "data/maps/Route1/scripts.pory"
	faceplayer
# 215 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Boy1
# 216 "data/maps/Route1/scripts.pory"
	closemessage
# 217 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_BugCatcher::
# 221 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
# 222 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_BugCatcherPost
# 223 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_Lass::
# 228 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
# 229 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LassPost
# 230 "data/maps/Route1/scripts.pory"
	closemessage
	end


Route1_EventScript_LittleBoy::
# 235 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
# 236 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_LittleBoyPost
# 237 "data/maps/Route1/scripts.pory"
	closemessage
	end


# 241 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceDown:
# 242 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 245 "data/maps/Route1/scripts.pory"
Route1_Movement_FaceLeft:
# 246 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 249 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk1:
# 250 "data/maps/Route1/scripts.pory"
	walk_left
# 250 "data/maps/Route1/scripts.pory"
	walk_left
# 251 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk2:
# 255 "data/maps/Route1/scripts.pory"
	walk_left
# 255 "data/maps/Route1/scripts.pory"
	walk_left
# 256 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 259 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafWalk3:
# 260 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 264 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepLU:
# 265 "data/maps/Route1/scripts.pory"
	walk_left
# 266 "data/maps/Route1/scripts.pory"
	walk_up
# 267 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 270 "data/maps/Route1/scripts.pory"
Route1_Movement_LeafStepUL:
# 271 "data/maps/Route1/scripts.pory"
	walk_up
# 272 "data/maps/Route1/scripts.pory"
	walk_left
# 273 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 276 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep1:
# 277 "data/maps/Route1/scripts.pory"
	walk_left
# 277 "data/maps/Route1/scripts.pory"
	walk_left
# 278 "data/maps/Route1/scripts.pory"
	walk_up
# 278 "data/maps/Route1/scripts.pory"
	walk_up
# 279 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 282 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep2:
# 283 "data/maps/Route1/scripts.pory"
	walk_left
# 283 "data/maps/Route1/scripts.pory"
	walk_left
# 284 "data/maps/Route1/scripts.pory"
	walk_up
# 285 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 288 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalStep3:
# 289 "data/maps/Route1/scripts.pory"
	walk_left
# 289 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 292 "data/maps/Route1/scripts.pory"
Route1_Movement_Player1:
# 293 "data/maps/Route1/scripts.pory"
	walk_down
# 293 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 296 "data/maps/Route1/scripts.pory"
Route1_Movement_Player2:
# 297 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 300 "data/maps/Route1/scripts.pory"
Route1_Movement_PlayerStep1:
# 301 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 304 "data/maps/Route1/scripts.pory"
Route1_Movement_RivalExit:
# 305 "data/maps/Route1/scripts.pory"
	walk_right
# 305 "data/maps/Route1/scripts.pory"
	walk_right
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
# 306 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_Text_RockWarp::
# 309 "data/maps/Route1/scripts.pory"
	.string "Wanna warp - test?$"

Route1_Text_Rival1::
# 313 "data/maps/Route1/scripts.pory"
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
# 317 "data/maps/Route1/scripts.pory"
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
# 321 "data/maps/Route1/scripts.pory"
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
# 325 "data/maps/Route1/scripts.pory"
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us is\l"
	.string "the man.$"

Route1_Text_RivalLost::
# 329 "data/maps/Route1/scripts.pory"
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
# 333 "data/maps/Route1/scripts.pory"
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
# 337 "data/maps/Route1/scripts.pory"
	.string "Hold on! I thought you just wanted to\n"
	.string "smoke. I think that I should maybe head\l"
	.string "home soon.$"

Route1_Text_Leaf2::
# 341 "data/maps/Route1/scripts.pory"
	.string "Hey there stranger, think you could\n"
	.string "lend a hand? This creepy dude will not\l"
	.string "leave me alone and if you kick his ass\l"
	.string "we'll hella smoke$"

Route1_Text_Leaf3::
# 345 "data/maps/Route1/scripts.pory"
	.string "Hey look at you, you're like a real hero\n"
	.string "all big and strong, and chivalrous to\l"
	.string "boot. Do you smoke weed? Here take a\l"
	.string "puff on this.$"

Route1_Text_Leaf4::
# 349 "data/maps/Route1/scripts.pory"
	.string "You're pretty cool, c'mon back to my\n"
	.string "place.$"

Route1_Text_Boy1::
# 353 "data/maps/Route1/scripts.pory"
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
# 357 "data/maps/Route1/scripts.pory"
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
# 361 "data/maps/Route1/scripts.pory"
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
# 365 "data/maps/Route1/scripts.pory"
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
# 369 "data/maps/Route1/scripts.pory"
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
# 373 "data/maps/Route1/scripts.pory"
	.string "Heartbroken again.$"

Route1_Text_LassPost::
# 377 "data/maps/Route1/scripts.pory"
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
# 381 "data/maps/Route1/scripts.pory"
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
# 385 "data/maps/Route1/scripts.pory"
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
# 389 "data/maps/Route1/scripts.pory"
	.string "Maybe we can smoke sometime?$"
