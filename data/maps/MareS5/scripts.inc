MareS5_MapScripts::
# 11 "data/maps/MareS5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/MareS5/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS5_F
# 15 "data/maps/MareS5/scripts.pory"
	compare VAR_ULYSSES_STATE, 15
	goto_if_lt MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/MareS5/scripts.pory"
	compare VAR_ULYSSES_STATE, 15
	goto_if_eq MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_ShowUlyssesLyingDown
	goto MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS5_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_ShowUlyssesAwake
	return


MareS5_Script_Transition_IslaPina::
# 25 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 3
# 26 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 27 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_Transition_MareTropicum::
# 31 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 32 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_Transition_ActaEchona::
# 37 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 2
# 38 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_Transition_SirenumScopuli::
# 43 "data/maps/MareS5/scripts.pory"
	setvar VAR_TEMP_5, 4
# 44 "data/maps/MareS5/scripts.pory"
	special TransitionMapMusic
# 45 "data/maps/MareS5/scripts.pory"
	special ShowMapNamePopup
	return


MareS5_Script_ShowUlyssesLyingDown::
# 49 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_ULYSSESLYINGDOWN, 44, 49
# 50 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_ULYSSESLYINGDOWN, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/MareS5/scripts.pory"
	goto_if_unset FLAG_MARES5_SIREN_MOLPE, MareS5_Script_ShowUlyssesLyingDown_2
MareS5_Script_ShowUlyssesLyingDown_1:
# 55 "data/maps/MareS5/scripts.pory"
	goto_if_unset FLAG_MARES5_SIREN_THELXIEPIA, MareS5_Script_ShowUlyssesLyingDown_5
MareS5_Script_ShowUlyssesLyingDown_4:
# 59 "data/maps/MareS5/scripts.pory"
	goto_if_unset FLAG_MARES5_SIREN_AGLAOPHEME, MareS5_Script_ShowUlyssesLyingDown_8
MareS5_Script_ShowUlyssesLyingDown_7:
	return

MareS5_Script_ShowUlyssesLyingDown_2:
# 52 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_MOLPE, 52, 23
# 53 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_MOLPE, MOVEMENT_TYPE_WANDER_AROUND
	goto MareS5_Script_ShowUlyssesLyingDown_1

MareS5_Script_ShowUlyssesLyingDown_5:
# 56 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_THELXIEPIA, 36, 39
# 57 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_THELXIEPIA, MOVEMENT_TYPE_WANDER_AROUND
	goto MareS5_Script_ShowUlyssesLyingDown_4

MareS5_Script_ShowUlyssesLyingDown_8:
# 60 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_AGLAOPHEME, 36, 65
# 61 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_AGLAOPHEME, MOVEMENT_TYPE_WANDER_AROUND
	goto MareS5_Script_ShowUlyssesLyingDown_7


MareS5_Script_ShowUlyssesAwake::
# 67 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_ULYSSES, 44, 49
# 68 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
	return


MareS5_Script_UlyssesLyingDown::
# 74 "data/maps/MareS5/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 75 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_UlyssesSleep
# 76 "data/maps/MareS5/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 77 "data/maps/MareS5/scripts.pory"
	closemessage
	return


MareS5_Script_Ulysses::
	return


MareS5_Script_SirenSetup::
# 85 "data/maps/MareS5/scripts.pory"
	faceplayer
# 86 "data/maps/MareS5/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_ENCOUNTER
# 87 "data/maps/MareS5/scripts.pory"
	waitmoncry
# 88 "data/maps/MareS5/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MareS5_Script_Molpe::
# 93 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 96 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_MOLPE
# 98 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_MOLPE, 38, 0
# 99 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_MOLPE, MOVEMENT_TYPE_INVISIBLE
# 100 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_MOLPE
# 101 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_MOLPE
	return


MareS5_Script_Thelxiepia::
# 105 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 108 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 109 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_THELXIEPIA
# 110 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_THELXIEPIA, 38, 0
# 111 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_THELXIEPIA, MOVEMENT_TYPE_INVISIBLE
# 112 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_THELXIEPIA
# 113 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_THELXIEPIA
	return


MareS5_Script_Aglaopheme::
# 118 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 121 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 122 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_AGLAOPHEME
# 123 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_AGLAOPHEME, 38, 0
# 124 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_AGLAOPHEME, MOVEMENT_TYPE_INVISIBLE
# 125 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_AGLAOPHEME
# 126 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_AGLAOPHEME
	return


MareS5_Text_UlyssesSleep::
# 131 "data/maps/MareS5/scripts.pory"
	.string "Zzz...$"
