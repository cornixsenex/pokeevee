RocketTower_13F_MapScripts::
	.byte 0


RocketTower_13F_EventScript_CheckPC::
	lockall
	setvar VAR_0x8004, 3
	special DoPCTurnOnEffect
	playse SE_PC_ON
	goto EventScript_PCMainMenu
	waitstate
	releaseall
	end


RocketTower_13F_EventScript_GioTrigger1::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_GioCutscene
	applymovement 3, RocketTower_13F_Movement_Blaine1
	applymovement 5, RocketTower_13F_Movement_Porygon1
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1B
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_Blaine
	release
	end


RocketTower_13F_EventScript_GioTrigger2::
	lock
	setvar VAR_ROCKETTOWER_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_GioCutscene
	applymovement 3, RocketTower_13F_Movement_Blaine2
	applymovement 5, RocketTower_13F_Movement_Porygon2
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2B
	waitmovement 0
	special RemoveCameraObject
	call RocketTower_13F_EventScript_Blaine
	release
	end


RocketTower_13F_EventScript_GioCutscene::
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio1
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine1
	closemessage
	destroy_field_pic 7
	delay 5
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio2
	closemessage
	destroy_field_pic 10
	delay 5
	load_field_pic 11, 190, 98
	msgbox RocketTower_13F_Text_Mewtwo1
	closemessage
	destroy_field_pic 11
	delay 5
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio3
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	delay 25
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 25
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	delay 25
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine2
	closemessage
	destroy_field_pic 7
	delay 5
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio4
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 1, RocketTower_13F_Movement_Gio1
	applymovement 4, RocketTower_13F_Movement_Persian1
	applymovement 3, Common_Movement_FaceDown
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine3
	closemessage
	destroy_field_pic 7
	delay 5
	waitmovement 0
	load_field_pic 10, 190, 98
	msgbox RocketTower_13F_Text_Gio5
	closemessage
	destroy_field_pic 10
	delay 5
	applymovement 1, RocketTower_13F_Movement_Gio2
	applymovement 2, RocketTower_13F_Movement_Mewtwo
	applymovement 4, RocketTower_13F_Movement_Persian2
	waitmovement 0
	removeobject 1
	removeobject 4
	removeobject 2
	return


RocketTower_13F_EventScript_Blaine::
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_Blaine4
	closemessage
	destroy_field_pic 7
	delay 5
	trainerbattle_no_intro TRAINER_BLAINE, RocketTower_13F_Text_BlaineLost
	call RocketTower_13F_EventScript_BlaineDefeated
	return


RocketTower_13F_EventScript_BlaineDefeated::
	load_field_pic 7, 190, 98
	msgbox RocketTower_13F_Text_BlainePost
	closemessage
	destroy_field_pic 7
	delay 5
	fadescreen 1
	removeobject 3
	removeobject 5
	setflag FLAG_HIDE_ROCKETTOWER_13F_GIO
	fadescreen 0
	return


RocketTower_13F_Movement_PanCamera1:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	step_end

RocketTower_13F_Movement_PanCamera2:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

RocketTower_13F_Movement_PanCamera1B:
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RocketTower_13F_Movement_PanCamera2B:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RocketTower_13F_Movement_Blaine1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocketTower_13F_Movement_Blaine2:
	walk_left
	walk_left
	walk_diag_southwest
	walk_left
	step_end

RocketTower_13F_Movement_Porygon1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_left
	step_end

RocketTower_13F_Movement_Porygon2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RocketTower_13F_Movement_Gio1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

RocketTower_13F_Movement_Persian1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RocketTower_13F_Movement_Gio2:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RocketTower_13F_Movement_Persian2:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RocketTower_13F_Movement_Mewtwo:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RocketTower_13F_Text_Gio1::
	.string "We stand upon the brink of destruction\n"
	.string "all of our plans will fail if we don't act$"

RocketTower_13F_Text_Blaine1::
	.string "But sir Mewtwo has not proven himself\n"
	.string "in any battle$"

RocketTower_13F_Text_Gio2::
	.string "Blaine we have no choice. The city guard\n"
	.string "has already fallen, the capital itself\l"
	.string "is under siege, and this report\l"
	.string "suggests our own tower has been\l"
	.string "penetrated by rebel spies. I must be\l"
	.string "off! MEWTWO will you obey?$"

RocketTower_13F_Text_Mewtwo1::
	.string "My lord I must obey every command$"

RocketTower_13F_Text_Gio3::
	.string "The die is cast...$"

RocketTower_13F_Text_Blaine2::
	.string "My lord! The spy is here!$"

RocketTower_13F_Text_Gio4::
	.string "I must be off to reach the capital\n"
	.string "before the rebel horde destroys our\l"
	.string "plans and renders our great creation\l"
	.string "useless. Destroy this spy and join me\l"
	.string "right away to celebrate our new\l"
	.string "empire's birth.$"

RocketTower_13F_Text_Blaine3::
	.string "May God favor the bold!$"

RocketTower_13F_Text_Gio5::
	.string "Come now Mewtwo.$"

RocketTower_13F_Text_Blaine4::
	.string "My eyes would not decieve you're that\n"
	.string "same boy who wittnessed me take\l"
	.string "possesion of Mew. My servants may have\l"
	.string "failed but I shall not allow you to\l"
	.string "obstruct our grand design. To hinder\l"
	.string "our master is futile, his will be done all\l"
	.string "opposition crushed. You'll suffer now\l"
	.string "because you disobey.$"

RocketTower_13F_Text_BlaineLost::
	.string "Master! I've failed!$"

RocketTower_13F_Text_BlainePost::
	.string "I now must hide away. Exile in my case is\n"
	.string "preferable to the sheer pain my\l"
	.string "creation would make when my master\l"
	.string "learns of my great defeat.$"
