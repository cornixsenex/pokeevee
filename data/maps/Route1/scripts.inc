Route1_MapScripts::
	.byte 0


Route1_EventScript_RockTest::
	lock
	call Route1_EventScript_WarpToLeafHouse
	release
	end


Route1_EventScript_RivalTrigger1::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player1
	waitmovement 0
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk1
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepLU
	applymovement 3, Route1_Movement_RivalStep1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival3
	call Route1_EventScript_RockTest
	release
	end


Route1_EventScript_RivalTrigger2::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_Player2
	waitmovement 0
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk1
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepLU
	applymovement 3, Route1_Movement_RivalStep1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival3
	call Route1_EventScript_RockTest
	release
	end


Route1_EventScript_RivalTrigger3::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk1
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepLU
	applymovement 3, Route1_Movement_RivalStep1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival3
	call Route1_EventScript_RockTest
	release
	end


Route1_EventScript_RivalTrigger4::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepLU
	applymovement 3, Route1_Movement_RivalStep2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival3
	call Route1_EventScript_RockTest
	release
	end


Route1_EventScript_RivalTrigger5::
	lock
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk3
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepUL
	applymovement 3, Route1_Movement_RivalStep3
	waitmovement 0
	call Route1_EventScript_Rival3B
	call Route1_EventScript_RockTest
	release
	end


Route1_EventScript_WarpToLeafHouse::
	setvar VAR_ROUTE1_STATE, 1
	warp MAP_ALDEON_LEAF_HOUSE_2F, 255, 6, 5
	waitstate
	return


Route1_EventScript_Rival1::
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival1
	destroy_field_pic 3
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf1
	destroy_field_pic 4
	applymovement 4, Route1_Movement_FaceLeft
	waitmovement 0
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival2
	closemessage
	destroy_field_pic 3
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	return


Route1_EventScript_Rival2::
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival3
	destroy_field_pic 3
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf2
	destroy_field_pic 4
	closemessage
	return


Route1_EventScript_Rival3::
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival4
	destroy_field_pic 3
	closemessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_BLUE, Route1_Text_RivalLost
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival5
	destroy_field_pic 3
	closemessage
	applymovement 3, Route1_Movement_RivalExit
	waitmovement 0
	removeobject 3
	applymovement 4, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf3
	closemessage
	destroy_field_pic 4
	call Common_EventScript_OutOfCenterPartyHeal
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf4
	closemessage
	destroy_field_pic 4
	return


Route1_EventScript_Rival3B::
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival4
	destroy_field_pic 3
	closemessage
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_BLUE, Route1_Text_RivalLost
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival5
	destroy_field_pic 3
	closemessage
	applymovement 3, Route1_Movement_RivalExit
	waitmovement 0
	removeobject 3
	applymovement 4, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf3
	closemessage
	destroy_field_pic 4
	call Common_EventScript_OutOfCenterPartyHeal
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf4
	closemessage
	destroy_field_pic 4
	return


Route1_EventScript_Boy::
	lockall
	faceplayer
	msgbox Route1_Text_Boy1
	closemessage
	releaseall
	end


Route1_EventScript_BugCatcher::
	trainerbattle_single TRAINER_ETIENNE, Route1_Text_BugCatcherFight, Route1_Text_BugCatcherLost
	msgbox Route1_Text_BugCatcherPost
	closemessage
	end


Route1_EventScript_Lass::
	trainerbattle_single TRAINER_KIM, Route1_Text_LassFight, Route1_Text_LassLost
	msgbox Route1_Text_LassPost
	closemessage
	end


Route1_EventScript_LittleBoy::
	trainerbattle_single TRAINER_LOGAN, Route1_Text_LittleBoyFight, Route1_Text_LittleBoyLost
	msgbox Route1_Text_LittleBoyPost
	closemessage
	end


Route1_Movement_FaceDown:
	face_down
	step_end

Route1_Movement_FaceLeft:
	face_left
	step_end

Route1_Movement_LeafWalk1:
	walk_left
	walk_left
	walk_up
	step_end

Route1_Movement_LeafWalk2:
	walk_left
	walk_left
	face_up
	step_end

Route1_Movement_LeafWalk3:
	walk_left
	step_end

Route1_Movement_LeafStepLU:
	walk_left
	walk_up
	face_down
	step_end

Route1_Movement_LeafStepUL:
	walk_up
	walk_left
	face_right
	step_end

Route1_Movement_RivalStep1:
	walk_left
	walk_left
	walk_up
	walk_up
	face_left
	step_end

Route1_Movement_RivalStep2:
	walk_left
	walk_left
	walk_up
	face_left
	step_end

Route1_Movement_RivalStep3:
	walk_left
	walk_left
	step_end

Route1_Movement_Player1:
	walk_down
	walk_down
	step_end

Route1_Movement_Player2:
	walk_down
	step_end

Route1_Movement_PlayerStep1:
	walk_down
	step_end

Route1_Movement_RivalExit:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route1_Text_RockWarp::
	.string "Wanna warp?$"

Route1_Text_Rival1::
	.string "Come with me babe, today's your lucky\n"
	.string "day.$"

Route1_Text_Rival2::
	.string "You stop right there, we're doing things\n"
	.string "my way!$"

Route1_Text_Rival3::
	.string "Now where are you...\p"
	.string "and who are YOU?$"

Route1_Text_Rival4::
	.string "You think that you can steal my girl\n"
	.string "from me? I'll show you which one of us\l"
	.string "is the man.$"

Route1_Text_RivalLost::
	.string "Humpty?\p"
	.string "Humpty!??\p"
	.string "Noooo!$"

Route1_Text_Rival5::
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
	.string "Hold on! I thought you just wanted to\n"
	.string "smoke. I think that I should maybe\l"
	.string "head home soon.$"

Route1_Text_Leaf2::
	.string "Hey there stranger, think you could\n"
	.string "lend a hand? This creepy dude will not\l"
	.string "leave me alone and if you kick his ass\l"
	.string "we'll hella smoke$"

Route1_Text_Leaf3::
	.string "Hey look at you, you're like a real hero\n"
	.string "all big and strong, and chivalrous to\l"
	.string "boot. Do you smoke weed? Here take a\l"
	.string "puff on this.$"

Route1_Text_Leaf4::
	.string "You're pretty cool, c'mon back to my\n"
	.string "place.$"

Route1_Text_Boy1::
	.string "Be careful friend the roads are\n"
	.string "dangerous and filled with wild beasts\l"
	.string "and criminals.$"

Route1_Text_BugCatcherFight::
	.string "Hey, check out my bugs!$"

Route1_Text_BugCatcherLost::
	.string "Dude, what did you do to my bugs?$"

Route1_Text_BugCatcherPost::
	.string "I don't think we should talk anymore.$"

Route1_Text_LassFight::
	.string "Wow! {PLAYER} you came back for me.$"

Route1_Text_LassLost::
	.string "Heartbroken again.$"

Route1_Text_LassPost::
	.string "Get out of here! I'll never love again...$"

Route1_Text_LittleBoyFight::
	.string "Dude, weed!$"

Route1_Text_LittleBoyLost::
	.string "Dang, I got smoked.$"

Route1_Text_LittleBoyPost::
	.string "Maybe we can smoke sometime?$"
