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
# 81 "data/maps/MareS5/scripts.pory"
	faceplayer
# 82 "data/maps/MareS5/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 83 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_UlyssesAwake
# 84 "data/maps/MareS5/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 85 "data/maps/MareS5/scripts.pory"
	closemessage
# 86 "data/maps/MareS5/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 87 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_ULYSSES
# 88 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_ULYSSES, 38, 0
# 89 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 90 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_ULYSSES
# 91 "data/maps/MareS5/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 92 "data/maps/MareS5/scripts.pory"
	setvar VAR_ULYSSES_STATE, 16
	end


MareS5_Script_SirenSetup::
# 97 "data/maps/MareS5/scripts.pory"
	faceplayer
# 98 "data/maps/MareS5/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_ENCOUNTER
# 99 "data/maps/MareS5/scripts.pory"
	waitmoncry
# 100 "data/maps/MareS5/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MareS5_Script_Molpe::
# 105 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 106 "data/maps/MareS5/scripts.pory"
	callnative DoMolpeBattle
# 107 "data/maps/MareS5/scripts.pory"
	waitstate
# 108 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 109 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_MOLPE
# 110 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_MOLPE, 38, 0
# 111 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_MOLPE, MOVEMENT_TYPE_INVISIBLE
# 112 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_MOLPE
# 113 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_MOLPE
# 114 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_CheckSirensCompleted
	return


MareS5_Script_Thelxiepia::
# 118 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 119 "data/maps/MareS5/scripts.pory"
	callnative DoThelxiepiaBattle
# 120 "data/maps/MareS5/scripts.pory"
	waitstate
# 121 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 122 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_THELXIEPIA
# 123 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_THELXIEPIA, 38, 0
# 124 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_THELXIEPIA, MOVEMENT_TYPE_INVISIBLE
# 125 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_THELXIEPIA
# 126 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_THELXIEPIA
# 127 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_CheckSirensCompleted
	return


MareS5_Script_Aglaopheme::
# 131 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_SirenSetup
# 132 "data/maps/MareS5/scripts.pory"
	callnative DoAglaophemeBattle
# 133 "data/maps/MareS5/scripts.pory"
	waitstate
# 134 "data/maps/MareS5/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 135 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_AGLAOPHEME
# 136 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_AGLAOPHEME, 38, 0
# 137 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_AGLAOPHEME, MOVEMENT_TYPE_INVISIBLE
# 138 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_AGLAOPHEME
# 139 "data/maps/MareS5/scripts.pory"
	setflag FLAG_MARES5_SIREN_AGLAOPHEME
# 140 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_CheckSirensCompleted
	return


MareS5_Script_CheckSirensCompleted::
# 144 "data/maps/MareS5/scripts.pory"
	goto_if_set FLAG_MARES5_SIREN_MOLPE, MareS5_Script_CheckSirensCompleted_4
MareS5_Script_CheckSirensCompleted_1:
	return

MareS5_Script_CheckSirensCompleted_2:
# 146 "data/maps/MareS5/scripts.pory"
	setvar VAR_ULYSSES_STATE, 15
# 148 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_ULYSSESLYINGDOWN
# 149 "data/maps/MareS5/scripts.pory"
	setobjectxyperm LOCALID_MARES5_ULYSSESLYINGDOWN, 38, 0
# 150 "data/maps/MareS5/scripts.pory"
	setobjectmovementtype LOCALID_MARES5_ULYSSESLYINGDOWN, MOVEMENT_TYPE_INVISIBLE
# 151 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_ULYSSESLYINGDOWN
# 153 "data/maps/MareS5/scripts.pory"
	removeobject LOCALID_MARES5_ULYSSES
# 154 "data/maps/MareS5/scripts.pory"
	call MareS5_Script_ShowUlyssesAwake
# 155 "data/maps/MareS5/scripts.pory"
	addobject LOCALID_MARES5_ULYSSES
	goto MareS5_Script_CheckSirensCompleted_1

MareS5_Script_CheckSirensCompleted_3:
# 144 "data/maps/MareS5/scripts.pory"
	goto_if_set FLAG_MARES5_SIREN_AGLAOPHEME, MareS5_Script_CheckSirensCompleted_2
	goto MareS5_Script_CheckSirensCompleted_1

MareS5_Script_CheckSirensCompleted_4:
# 144 "data/maps/MareS5/scripts.pory"
	goto_if_set FLAG_MARES5_SIREN_THELXIEPIA, MareS5_Script_CheckSirensCompleted_3
	goto MareS5_Script_CheckSirensCompleted_1


MareS5_Text_UlyssesSleep::
# 162 "data/maps/MareS5/scripts.pory"
	.string "Zzz...$"

MareS5_Text_UlyssesAwake::
# 166 "data/maps/MareS5/scripts.pory"
	.string "That song! I dreamt three beautiful\n"
	.string "voices sang in chorus the sweetest\l"
	.string "melody that ever in my days has graced\l"
	.string "my ears. I wish indeed you had not\l"
	.string "silenced them. This bitter, waking world\l"
	.string "appears hollow, like some pathetic\l"
	.string "mockery of that usullied light, radient\l"
	.string "perfection of those dreams that song\l"
	.string "had lulled me into. Being awake I will\l"
	.string "resign myself to re-attend my quest. I\l"
	.string "must be off for Nestor's house and my\l"
	.string "brother's wedding.$"
