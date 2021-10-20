CityClara_Church_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClara_Church_OnWarp_HidePreChurchCutscene
	map_script_2 VAR_CITYCLARA_STATE, 1, CityClara_Church_OnWarp_HidePreChurchCutscene
	map_script_2 VAR_CITYCLARA_STATE, 2, CityClara_Church_OnWarp_HidePreChurchCutscene
	map_script_2 VAR_CITYCLARA_STATE, 3, CityClara_Church_OnWarp_HidePreChurchCutscene
	map_script_2 VAR_CITYCLARA_STATE, 4, CityClara_Church_OnWarp_HidePreChurchCutscene
	map_script_2 VAR_CITYCLARA_STATE, 10, CicyClara_Church_OnWarp_ShowAfterChurchCutscene
	.2byte 0


CityClara_Church_OnWarp_HidePreChurchCutscene::
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
	setflag FLAG_CLARACITY_CHURCH_HIDEDAD
	removeobject 8
	removeobject 9
	removeobject 10
	removeobject 11
	removeobject 12
	removeobject 13
	end


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
	removeobject 11
	removeobject 12
	setobjectxyperm 13, 20, 15
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	addobject 13
	showobjectat 12, MAP_CITY_CLARA_CHURCH
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
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
	msgbox CityClara_Church_Text_JesseAndJamesIntro
	closemessage
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
	call CityClara_Church_EventScript_JesseAndJamesDefeated
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage1
	destroy_field_pic 6
	closemessage
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine1
	destroy_field_pic 7
	closemessage
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage2
	destroy_field_pic 6
	closemessage
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine2
	destroy_field_pic 7
	closemessage
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
	waitmovement 0
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage3
	destroy_field_pic 6
	closemessage
	load_field_pic 7, 190, 98
	msgbox CityClara_Church_Text_Blaine3
	destroy_field_pic 7
	closemessage
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
	applymovement 2, CityClara_Church_Movement_SageExit
	waitmovement 0
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
	setobjectxy 4, 18, 23
	removeobject 2
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
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
	destroy_field_pic 7
	closemessage
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
	destroy_field_pic 7
	closemessage
	applymovement 3, CityClara_Church_Movement_Blaine5
	waitmovement 0
	applymovement 3, Common_Movement_ExclamationMark
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
	closemessage
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
	destroy_field_pic 7
	closemessage
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
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
CityClara_Church_EventScript_BlaineCutscene_15:
	waitmovement 0
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

CityClara_Church_EventScript_BlaineCutscene_16:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit1
	applymovement 5, CityClara_Church_Movement_Rocket2Exit1
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage1
	applymovement 9, CityClara_Church_Movement_JamesEngage1
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_17:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit2
	applymovement 5, CityClara_Church_Movement_Rocket2Exit2
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage1
	applymovement 9, CityClara_Church_Movement_JamesEngage1
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_18:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit3
	applymovement 5, CityClara_Church_Movement_Rocket2Exit3
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage3
	applymovement 9, CityClara_Church_Movement_JamesEngage3
	applymovement 10, CityClara_Church_Movement_JesseEngage3
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_19:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit4
	applymovement 5, CityClara_Church_Movement_Rocket2Exit4
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage4
	applymovement 9, CityClara_Church_Movement_JamesEngage4
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_20:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit5
	applymovement 5, CityClara_Church_Movement_Rocket2Exit5
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage4
	applymovement 9, CityClara_Church_Movement_JamesEngage4
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_21:
	applymovement 4, CityClara_Church_Movement_Rocket1Exit6
	applymovement 5, CityClara_Church_Movement_Rocket2Exit6
	waitmovement 0
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	applymovement 8, CityClara_Church_Movement_JesseEngage6
	applymovement 9, CityClara_Church_Movement_JamesEngage6
	applymovement 10, CityClara_Church_Movement_JamesEngage6
	goto CityClara_Church_EventScript_BlaineCutscene_15


CityClara_Church_EventScript_JesseAndJamesDefeated::
	msgbox CityClara_Church_Text_JesseAndJamesPost
	closemessage
	fadescreen 1
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_CLARACITY_AFTERMEW
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
	fadescreen 0
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	clearflag FLAG_CLARACITY_CHURCH_HIDELEAF
	addobject 11
	showobjectat 11, MAP_CITY_CLARA_CHURCH
	applymovement 11, CityClara_Church_Movement_LeafEnter
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
	waitmovement 0
	load_field_pic 4, 190, 98
	msgbox CityClara_Church_Text_Leaf1
	closemessage
	destroy_field_pic 4
	applymovement 11, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	applymovement 11, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	clearflag FLAG_CLARACITY_CHURCH_HIDEDAD
	addobject 12
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	addobject 13
	showobjectat 13, MAP_CITY_CLARA_CHURCH
	applymovement 12, CityClara_Church_Movement_DadEnter
	applymovement 13, CityClara_Church_Movement_DadEnter
	waitmovement 0
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad1
	closemessage
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox CityClara_Church_Text_Leaf2
	closemessage
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad2
	closemessage
	destroy_field_pic 5
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage4
	closemessage
	destroy_field_pic 6
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad3
	closemessage
	destroy_field_pic 5
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage5
	closemessage
	destroy_field_pic 6
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad4
	closemessage
	destroy_field_pic 5
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage6
	closemessage
	destroy_field_pic 6
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad5
	closemessage
	destroy_field_pic 5
	applymovement 12, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad6
	closemessage
	destroy_field_pic 5
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage7
	closemessage
	destroy_field_pic 6
	call CityClara_Church_EventScript_ChooseStone
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage8
	closemessage
	destroy_field_pic 6
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad7
	closemessage
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox CityClara_Church_Text_Leaf3
	closemessage
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox CityClara_Church_Text_Dad8
	closemessage
	destroy_field_pic 5
	applymovement 12, CityClara_Church_Movement_DadExit
	waitmovement 0
	removeobject 12
	load_field_pic 4, 190, 98
	msgbox CityClara_Church_Text_Leaf4
	closemessage
	destroy_field_pic 4
	applymovement 11, CityClara_Church_Movement_LeafExit
	waitmovement 0
	removeobject 11
	applymovement 13, CityClara_Church_Movement_SageCenter
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	load_field_pic 6, 190, 98
	msgbox CityClara_Church_Text_Sage9
	closemessage
	destroy_field_pic 6
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
	switch VAR_RESULT
	case 0, CityClara_Church_EventScript_ChooseStone_3
	case 1, CityClara_Church_EventScript_ChooseStone_4
	case 2, CityClara_Church_EventScript_ChooseStone_5
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
	giveitem ITEM_FIRE_STONE
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
	giveitem ITEM_WATER_STONE
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
	giveitem ITEM_THUNDER_STONE
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
	faceplayer
	msgbox CityClara_Church_Text_SageAfterMew
	closemessage
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
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
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
	face_left
	step_end

CityClara_Church_Movement_JamesEngage3:
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	walk_left
	walk_left
	face_left
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
	face_right
	step_end

CityClara_Church_Movement_JamesEngage6:
	walk_right
	walk_right
	walk_right
	walk_right
	face_right
	step_end

CityClara_Church_Movement_PlayerCenter1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	face_down
	step_end

CityClara_Church_Movement_PlayerCenter2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

CityClara_Church_Movement_PlayerCenter4:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	face_down
	step_end

CityClara_Church_Movement_PlayerCenter5:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

CityClara_Church_Movement_LeafEnter:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

CityClara_Church_Movement_DadEnter:
	walk_up
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	face_up
	step_end

CityClara_Church_Movement_DadExit:
	walk_down
	walk_down
	walk_diag_southwest
	walk_down
	step_end

CityClara_Church_Movement_LeafExit:
	walk_down
	walk_down
	walk_down
	walk_diag_southwest
	walk_down
	step_end

CityClara_Church_Movement_SageCenter:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	face_down
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
	.string "Party's sailing in the stars. Now\l"
	.string "faithful Rocket grunts, take her away!$"

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

CityClara_Church_Text_Leaf1::
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
	.string "My name is Lamina, I serve the church\n"
	.string "where for one thousand years we've\l"
	.string "worshipped Mew. Today that wicked man\l"
	.string "of pure evil has somehow found a way to\l"
	.string "enslave Mew. After the Rockets\l"
	.string "outlawed religion we feared every day\l"
	.string "would be our last but knew our faith in\l"
	.string "Mew would kept us safe. Until today\l"
	.string "they had left us alone and we truly\l"
	.string "believed Mew had appeared to prove\l"
	.string "once and for all our church was safe...$"

CityClara_Church_Text_Dad3::
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
	.string "I think I know someone who just might\n"
	.string "help. You should {PLAYER} travel\l"
	.string "north to the desert and there seek out\l"
	.string "the university. It stands in the\l"
	.string "ancient city, Ardor. There you will meet\l"
	.string "my old friend from the war, Indiana is\l"
	.string "in hiding disguised as an archaeology\l"
	.string "professor. If there still stands a man\l"
	.string "with will to fight it will be him. Tell him\l"
	.string "the time has come.$"

CityClara_Church_Text_Sage7::
	.string "This journey will be long, and ardous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and\l"
	.string "know you have our faith.$"

CityClara_Church_Text_Dad7::
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits,\l"
	.string "or to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
