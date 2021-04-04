Route1_MapScripts::
	.byte 0


Route1_EventScript_RivalTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_FaceDown
	call Route1_EventScript_Rival1
	applymovement 4, Route1_Movement_LeafWalk1
	waitmovement 0
	call Route1_EventScript_Rival2
	applymovement 4, Route1_Movement_LeafStepLU
	applymovement 3, Route1_Movement_RivalStep1
	applymovement OBJ_EVENT_ID_PLAYER, Route1_Movement_PlayerStep1
	waitmovement 0
	call Route1_EventScript_Rival3
	warp MAP_LOONIX_INSIDE_REAL, 255, 4, 5
	waitstate
	releaseall
	end


Route1_EventScript_Rival1::
	load_field_pic 3, 190, 98
	msgbox Route1_Text_Rival1
	destroy_field_pic 3
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf1
	closemessage
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
	closemessage
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
	setflag FLAG_ROUTE1_RIVAL
	addvar VAR_ROUTE1_STATE, 1
	load_field_pic 4, 190, 98
	msgbox Route1_Text_Leaf3
	closemessage
	destroy_field_pic 4
	return


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
	walk_up
	walk_up
	step_end

Route1_Movement_LeafStepLU:
	walk_left
	walk_up
	face_down
	step_end

Route1_Movement_RivalStep1:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
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
	.string "Hey way to go let's head back to your\n"
	.string "place.$"
