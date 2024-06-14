Colchis_MapScripts::
# 13 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Colchis_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/Colchis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 14 "data/maps/Colchis/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Colchis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 15 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_IntroSetup
	return

Colchis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/Colchis/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 7, Colchis_Script_Intro
	.2byte 0


Colchis_Script_IntroSetup::
# 28 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 29 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 31 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 23, 10, 60
# 32 "data/maps/Colchis/scripts.pory"
	setobjectxyperm 24, 12, 60
# 34 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 23, MOVEMENT_TYPE_FACE_RIGHT
# 35 "data/maps/Colchis/scripts.pory"
	setobjectmovementtype 24, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/Colchis/scripts.pory"
	addobject 23
# 38 "data/maps/Colchis/scripts.pory"
	addobject 24
# 40 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 41 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
	end


Colchis_Script_Intro::
# 47 "data/maps/Colchis/scripts.pory"
	lockall
# 48 "data/maps/Colchis/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 49 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 51 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Colchis_Movement_IntroPlayer
# 52 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 55 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 56 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro1, MSGBOX_DEFAULT
# 57 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 60 "data/maps/Colchis/scripts.pory"
	load_field_pic 23, 190, 98
# 61 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro1, MSGBOX_DEFAULT
# 62 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 23
# 65 "data/maps/Colchis/scripts.pory"
	load_field_pic 22, 190, 98
# 66 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_GruntIntro2, MSGBOX_DEFAULT
# 67 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 22
# 69 "data/maps/Colchis/scripts.pory"
	closemessage
# 72 "data/maps/Colchis/scripts.pory"
	applymovement 54, Common_Movement_FaceDown
# 73 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 74 "data/maps/Colchis/scripts.pory"
	load_field_pic 21, 190, 98
# 75 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Text_JasonIntro2, MSGBOX_YESNO
# 76 "data/maps/Colchis/scripts.pory"
	destroy_field_pic 21
# 82 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_CheckForcedBattle::
# 90 "data/maps/Colchis/scripts.pory"
	lockall
# 91 "data/maps/Colchis/scripts.pory"
	call Colchis_Script_DoForcedBattle
# 93 "data/maps/Colchis/scripts.pory"
	releaseall
	end


Colchis_Script_DoForcedBattle::
# 101 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 102 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 103 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 105 "data/maps/Colchis/scripts.pory"
	addobject 23
# 106 "data/maps/Colchis/scripts.pory"
	addobject 24
# 108 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 109 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 113 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 116 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 117 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 118 "data/maps/Colchis/scripts.pory"
	waitmovement 0
	return


# 136 "data/maps/Colchis/scripts.pory"
Colchis_Movement_IntroPlayer:
# 137 "data/maps/Colchis/scripts.pory"
	walk_up
# 137 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

# 140 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 141 "data/maps/Colchis/scripts.pory"
	walk_down
# 141 "data/maps/Colchis/scripts.pory"
	walk_down
# 141 "data/maps/Colchis/scripts.pory"
	walk_down
# 141 "data/maps/Colchis/scripts.pory"
	walk_down
# 141 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 144 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 145 "data/maps/Colchis/scripts.pory"
	walk_up
# 145 "data/maps/Colchis/scripts.pory"
	walk_up
# 145 "data/maps/Colchis/scripts.pory"
	walk_up
# 145 "data/maps/Colchis/scripts.pory"
	walk_up
# 145 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end
