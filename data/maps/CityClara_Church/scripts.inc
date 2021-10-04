CityClara_Church_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClara_Church_OnWarp_HideJesseAndJames
	map_script_2 VAR_CITYCLARA_STATE, 1, CityClara_Church_OnWarp_HideJesseAndJames
	map_script_2 VAR_CITYCLARA_STATE, 2, CityClara_Church_OnWarp_HideJesseAndJames
	map_script_2 VAR_CITYCLARA_STATE, 3, CityClara_Church_OnWarp_HideJesseAndJames
	map_script_2 VAR_CITYCLARA_STATE, 4, CityClara_Church_OnWarp_HideJesseAndJames
	.2byte 0


CityClara_Church_OnWarp_HideJesseAndJames::
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
	hideobjectat 8, MAP_CITY_CLARA_CHURCH
	hideobjectat 9, MAP_CITY_CLARA_CHURCH
	hideobjectat 10, MAP_CITY_CLARA_CHURCH
	end


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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
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
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_EventScript_JesseAndJamesDefeated, NO_MUSIC
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
	hideobjectat 8, MAP_CITY_CLARA_CHURCH
	hideobjectat 9, MAP_CITY_CLARA_CHURCH
	hideobjectat 10, MAP_CITY_CLARA_CHURCH
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
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
	setobjectxy 4, 18, 23
	removeobject 2
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
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
	showobjectat 4, MAP_CITY_CLARA_CHURCH
	showobjectat 5, MAP_CITY_CLARA_CHURCH
	fadescreen 0
	applymovement 3, CityClara_Church_Movement_BlaineChase4
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
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
	closemessage
	destroy_field_pic 7
	clearflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
	addobject 8
	addobject 9
	showobjectat 8, MAP_CITY_CLARA_CHURCH
	showobjectat 9, MAP_CITY_CLARA_CHURCH
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
	waitmovement 0
	msgbox CityClara_Church_Text_Meowth
	addobject 10
	showobjectat 10, MAP_CITY_CLARA_CHURCH
	applymovement 10, CityClara_Church_Movement_MeowthEnter
	waitmovement 0
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine8
	closemessage
	destroy_field_pic 7
	applymovement 3, CityClara_Church_Movement_BlaineExit
	applymovement 6, CityClara_Church_Movement_GruntLExit
	applymovement 7, CityClara_Church_Movement_GruntRExit
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_16
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_17
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_18
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_19
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_20
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_21
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_BlaineCutscene_15:
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab1
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab1
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_3:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab2
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab2
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_4:
	applymovement 3, CityClara_Church_Movement_FaceLeft
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab3
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab3
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_5:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab4
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab4
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab5
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab5
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_7:
	applymovement 3, CityClara_Church_Movement_FaceRight
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab6
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab6
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_16:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit1
	applymovement 5, CityClara_Church_Movement_Rocket2Exit1
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage1
	applymovement 9, CityClara_Church_Movement_JamesEngage1
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_17:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit2
	applymovement 5, CityClara_Church_Movement_Rocket2Exit2
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage1
	applymovement 9, CityClara_Church_Movement_JamesEngage1
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_18:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit3
	applymovement 5, CityClara_Church_Movement_Rocket2Exit3
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage3
	applymovement 9, CityClara_Church_Movement_JamesEngage3
	applymovement 10, CityClara_Church_Movement_JesseEngage3
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_19:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit4
	applymovement 5, CityClara_Church_Movement_Rocket2Exit4
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage4
	applymovement 9, CityClara_Church_Movement_JamesEngage4
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_20:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit5
	applymovement 5, CityClara_Church_Movement_Rocket2Exit5
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage4
	applymovement 9, CityClara_Church_Movement_JamesEngage4
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_21:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit6
	applymovement 5, CityClara_Church_Movement_Rocket2Exit6
	waitmovement 0
	applymovement 8, CityClara_Church_Movement_JesseEngage6
	applymovement 9, CityClara_Church_Movement_JamesEngage6
	applymovement 10, CityClara_Church_Movement_JamesEngage6
	goto CityClara_Church_EventScript_BlaineCutscene_15


CityClara_Church_EventScript_JesseAndJamesDefeated::
	msgbox CityClara_Church_Text_JesseAndJamesPost
	closemessage
	fadescreen 1
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_CLARACITY_AFTERMEW
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
	setvar VAR_CITYCLARA_STATE, 2
	fadescreen 0
	release
	end


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

CityClara_Church_Movement_Rocket1Enter:
	walk_up
	walk_up
	walk_diag_northeast
	face_up
	step_end

CityClara_Church_Movement_Rocket2Enter:
	walk_up
	walk_up
	walk_diag_northwest
	face_up
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

CityClara_Church_Movement_MeowthEnter:
	walk_up
	walk_diag_northeast
	walk_diag_northeast
	face_up
	step_end

CityClara_Church_Movement_BlaineExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_diag_southwest
	walk_diag_southwest
	face_down
	step_end

CityClara_Church_Movement_GruntLExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

CityClara_Church_Movement_GruntRExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

CityClara_Church_Movement_Rocket1Exit1:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket1Exit2:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	step_end

CityClara_Church_Movement_Rocket1Exit3:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	face_down
	step_end

CityClara_Church_Movement_Rocket1Exit4:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket1Exit5:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket1Exit6:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit1:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit2:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit3:
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit4:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_down
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit5:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_down
	step_end

CityClara_Church_Movement_Rocket2Exit6:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	face_down
	step_end

CityClara_Church_Movement_JesseEngage1:
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_JamesEngage1:
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_MeowthEngage1:
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	face_left
	step_end

CityClara_Church_Movement_JesseEngage3:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CityClara_Church_Movement_JamesEngage3:
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_left
	walk_left
	step_end

CityClara_Church_Movement_JesseEngage4:
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_JamesEngage4:
	walk_right
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_MeowthEngage4:
	walk_right
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	face_right
	step_end

CityClara_Church_Movement_JesseEngage6:
	walk_right
	walk_right
	walk_right
	walk_diag_northeast
	walk_right
	walk_right
	step_end

CityClara_Church_Movement_JamesEngage6:
	walk_right
	walk_right
	walk_right
	walk_right
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
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Rockets forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
	.string "Test 3$"

CityClara_Church_Text_ERROR::
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
