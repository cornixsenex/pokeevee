CavumCalypsus_MapScripts::
# 3 "data/maps/CavumCalypsus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/CavumCalypsus/scripts.pory"
	compare VAR_ULYSSES_STATE, 20
	goto_if_eq CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CavumCalypsus_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_ShowUlysses
	return


CavumCalypsus_Script_ShowUlysses::
# 12 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_CALYPSO, 11, 5
# 13 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_CALYPSO, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/CavumCalypsus/scripts.pory"
	setobjectxyperm LOCALID_CAVUMCALYPSUS_ULYSSES, 11, 5
# 15 "data/maps/CavumCalypsus/scripts.pory"
	setobjectmovementtype LOCALID_CAVUMCALYPSUS_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


Common_Script_Bed::
# 20 "data/maps/CavumCalypsus/scripts.pory"
	msgbox Common_Text_Bed, MSGBOX_YESNO
# 21 "data/maps/CavumCalypsus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_Script_Bed_2
Common_Script_Bed_1:
# 24 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
	end

Common_Script_Bed_2:
# 22 "data/maps/CavumCalypsus/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Common_Script_Bed_1


CavumCalypsus_Script_UlyssesSceneA::
# 29 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 30 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 31 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 32 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 33 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 34 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 35 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesSceneB::
# 39 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 40 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 41 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesSceneC::
# 45 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 47 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 48 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 49 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 50 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 51 "data/maps/CavumCalypsus/scripts.pory"
	call CavumCalypsus_Script_UlyssesScene
	return


CavumCalypsus_Script_UlyssesScene::
# 55 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 56 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 57 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 58 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 59 "data/maps/CavumCalypsus/scripts.pory"
	lock
# 60 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_ExclamationMark
# 61 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 62 "data/maps/CavumCalypsus/scripts.pory"
	delay 60
# 64 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkLeft2
# 65 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 66 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_WalkDown
# 67 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 68 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 69 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso1
# 70 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_ExclamationMark
# 71 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 72 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_FaceDown
# 73 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 74 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Script_UlyssesScene_Text_0
# 75 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 76 "data/maps/CavumCalypsus/scripts.pory"
	closemessage
# 77 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_CALYPSO, Common_Movement_WalkLeft
# 78 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 79 "data/maps/CavumCalypsus/scripts.pory"
	applymovement LOCALID_CAVUMCALYPSUS_ULYSSES, Common_Movement_FaceRight
# 80 "data/maps/CavumCalypsus/scripts.pory"
	waitmovement 0
# 82 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_CALYPSO, 190, 98
# 83 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Calypso2
# 84 "data/maps/CavumCalypsus/scripts.pory"
	destroy_field_pic FIELD_PIC_CALYPSO
# 86 "data/maps/CavumCalypsus/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 87 "data/maps/CavumCalypsus/scripts.pory"
	msgbox CavumCalypsus_Text_Ulysses1
	end


CavumCalypsus_Script_UlyssesScene_Text_0:
# 74 "data/maps/CavumCalypsus/scripts.pory"
	.string "Aaahh!$"

Common_Text_Bed::
# 93 "data/maps/CavumCalypsus/scripts.pory"
	.string "It's a comfortable looking bed! Would\n"
	.string "you like to take a rest?$"

CavumCalypsus_Text_Calypso1::
# 97 "data/maps/CavumCalypsus/scripts.pory"
	.string "Ulysses, darling, please come back to\n"
	.string "bed.$"

CavumCalypsus_Text_Calypso2::
# 101 "data/maps/CavumCalypsus/scripts.pory"
	.string "$"

CavumCalypsus_Text_Ulysses1::
# 105 "data/maps/CavumCalypsus/scripts.pory"
	.string "$"
