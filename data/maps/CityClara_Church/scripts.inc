CityClara_Church_MapScripts::
	.byte 0


CityClara_Church_EventScript_BlainTrigger1::
	lock
	setvar VAR_CITYCLARA_STATE, 1
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlainTrigger2::
	lock
	setvar VAR_CITYCLARA_STATE, 2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlainTrigger3::
	lock
	setvar VAR_CITYCLARA_STATE, 3
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlainTrigger4::
	lock
	setvar VAR_CITYCLARA_STATE, 4
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlainTrigger5::
	lock
	setvar VAR_CITYCLARA_STATE, 5
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlainTrigger6::
	lock
	setvar VAR_CITYCLARA_STATE, 6
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6A
	waitmovement 0
	special RemoveCameraObject
	call CityClara_Church_EventScript_BlaineCutscene
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6B
	waitmovement 0
	special RemoveCameraObject
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage1
	closemessage
	destroy_field_pic 6
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine1
	closemessage
	destroy_field_pic 7
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage2
	closemessage
	destroy_field_pic 6
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine2
	closemessage
	destroy_field_pic 7
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
	waitmovement 0
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage3
	closemessage
	destroy_field_pic 6
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
	applymovement 2, CityClara_Church_Movement_SageExit
	waitmovement 0
	removeobject 5
	removeobject 2
	removeobject 4
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine3
	closemessage
	destroy_field_pic 7
	applymovement 3, CityClara_Church_Movement_BlaineChase1
	waitmovement 0
	applymovement 1, CityClara_Church_Movement_MewChase1
	waitmovement 0
	applymovement 3, CityClara_Church_Movement_BlaineChase2
	waitmovement 0
	applymovement 1, CityClara_Church_Movement_MewChase2
	waitmovement 0
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine4
	closemessage
	destroy_field_pic 7
	applymovement 3, CityClara_Church_Movement_BlaineChase3
	waitmovement 0
	playmoncry SPECIES_MEW, 0
	fadescreen 1
	waitmoncry
	removeobject 1
	addobject 4
	addobject 5
	fadescreen 0
	applymovement 3, CityClara_Church_Movement_BlaineChase4
	waitmovement 0
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine5
	closemessage
	destroy_field_pic 7
	applymovement 3, CityClara_Church_Movement_Blaine5
	waitmovement 0
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_2
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_3
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_4
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_5
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_6
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_7
	applymovement 3, CityClara_Church_Movement_FaceRight
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_BlaineCutscene_1:
	waitmovement 0
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine6
	closemessage
	applymovement 3, CityClara_Church_Movement_FaceDown
	waitmovement 0
	msgbox CityClara_Church_Text_Blaine7
	destroy_field_pic 7
	setflag FLAG_CLARACITY_AFTERMEW
	setvar VAR_CITYCLARA_STATE, 2
	return

CityClara_Church_EventScript_BlaineCutscene_2:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab1
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab1
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_3:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab2
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab2
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_4:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab3
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab3
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_5:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab4
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab4
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab5
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab5
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_7:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab6
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab6
	goto CityClara_Church_EventScript_BlaineCutscene_1


CityClara_Church_EventScript_BlaineTest::
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
	msgbox CityClara_Church_Text_BlainePost
	closemessage
	return


CityClara_Church_Movement_PanCamera1A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera1B:
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera2A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera2B:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera3A:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera3B:
	walk_slow_left
	walk_slow_left
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera4A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_southwest
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera4B:
	walk_slow_right
	walk_slow_right
	walk_slow_diag_northeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera5A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera5B:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_PanCamera6A:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_left
	walk_slow_left
	step_end

CityClara_Church_Movement_PanCamera6B:
	walk_slow_right
	walk_slow_right
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

CityClara_Church_Movement_Rocket1SageGrab:
	walk_up
	walk_up
	walk_up
	face_right
	step_end

CityClara_Church_Movement_Rocket2SageGrab:
	walk_up
	walk_up
	walk_up
	face_left
	step_end

CityClara_Church_Movement_Rocket1SageExit:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket2SageExit:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_SageExit:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_BlaineChase1:
	walk_up
	walk_up
	walk_up
	step_end

CityClara_Church_Movement_MewChase1:
	walk_up
	face_left
	face_right
	face_left
	step_end

CityClara_Church_Movement_BlaineChase2:
	walk_left
	walk_up
	walk_up
	face_right
	step_end

CityClara_Church_Movement_MewChase2:
	walk_slow_right
	face_left
	step_end

CityClara_Church_Movement_BlaineChase3:
	walk_right
	step_end

CityClara_Church_Movement_BlaineChase4:
	walk_down
	step_end

CityClara_Church_Movement_Blaine5:
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_FaceLeft:
	face_left
	step_end

CityClara_Church_Movement_FaceRight:
	face_right
	step_end

CityClara_Church_Movement_FaceDown:
	face_down
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_diag_northwest
	walk_up
	face_right
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	face_right
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	face_right
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab4:
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab5:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_Rocket1PlayerGrab6:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab1:
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab4:
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	face_left
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab5:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	face_left
	step_end

CityClara_Church_Movement_Rocket2PlayerGrab6:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	face_left
	step_end

CityClara_Church_Text_Sage1::
	.string "I beg of you, please, stop what you're\n"
	.string "doing.$"

CityClara_Church_Text_Blaine1::
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
	.string "You must be stopped, you know not what\n"
	.string "you do.$"

CityClara_Church_Text_Blaine2::
	.string "I know exactly what I have achieved,\n"
	.string "with this new power we will not be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of our party\l"
	.string "you and your people will vaish to dust$"

CityClara_Church_Text_Sage3::
	.string "Unhand me I am Mew's true suppliant!\n"
	.string "The foundations of this city were built\l"
	.string "on solid rock of our worship of Mew. One\l"
	.string "thousand years we cultivated art,\l"
	.string "sharing discoveries with even you, we\l"
	.string "must thank Mew for all our modern\l"
	.string "world. Your foolish pride is\l"
	.string "threatening to end this thousand\l"
	.string "years of joy which Mew exclusively\l"
	.string "made possible for us!$"

CityClara_Church_Text_Blaine3::
	.string "You speak of foolish pride most\n"
	.string "narrowly your sad devotion to this\l"
	.string "religion has not helped you amass a\l"
	.string "massive worth nor given you the\l"
	.string "clairvoyance to see your fated\l"
	.string "destruction. Social progress has\l"
	.string "overcome your myth. No simple spoken\l"
	.string "prayer will stop the launch of Rocket\l"
	.string "Party's sailing in the stars.$"

CityClara_Church_Text_Blaine4::
	.string "No where to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. The party truly has suprassed\l"
	.string "the gods.$"

CityClara_Church_Text_Blaine5::
	.string "Today we defeated superstition and\n"
	.string "proudly declare this the age of man!\l"
	.string "Throwing a yoke on this defeated god\l"
	.string "shall empower us to design our fate.\l"
	.string "Under the leadership of us Rockets\l"
	.string "humanity will live to touch the stars,\l"
	.string "to take the place of Jove in Illion, and\l"
	.string "shake the universe as we see fit...\l"
	.string "Enough of this, we leave now for Gato.$"

CityClara_Church_Text_Blaine6::
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
	.string "Jessie and James!$"

CityClara_Church_Text_BlaineIntro::
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
	.string "Test 3$"

CityClara_Church_Text_ERROR::
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
