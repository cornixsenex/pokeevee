MareS4_MapScripts::
# 27 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 71 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 29 "data/maps/MareS4/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS4_F
# 31 "data/maps/MareS4/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 35 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 39 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 43 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 47 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 51 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 12
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 55 "data/maps/MareS4/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 59 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 15
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 63 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 16
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_31:
# 67 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 18
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_36
	return

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 32 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ARGO, 0, 0
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 36 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_SetupRutuli
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 35 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 40 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_SetupRetRLostScene
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 44 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 48 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRFound
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 52 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowAeneasGone
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 56 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_HideScylla
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 55 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 17
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 60 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowUlysses
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 59 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 20
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_26

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 64 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ReverseWhirlpool
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 63 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 19
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_32
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_31

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_36:
# 68 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_HideWhirlpool
	return

MareS4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 72 "data/maps/MareS4/scripts.pory"
	map_script_2 VAR_AENEID_STATE, 9, MareS4_Script_RetRLostScene
	.2byte 0


MareS4_Script_Transition_MareTropicum::
# 77 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 78 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 79 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareTranquillum::
# 83 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 84 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 85 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareSubtropicum::
# 89 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 90 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 91 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHerbaBona::
# 95 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 4
# 96 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 97 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHesperia::
# 101 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 5
# 102 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 103 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_ScyllaCharybdis::
# 107 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 6
# 108 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 109 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_SetupRutuli::
# 116 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 8
	goto_if_lt MareS4_Script_SetupRutuli_2
MareS4_Script_SetupRutuli_1:
# 123 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN1, MareS4_Script_SetupRutuli_5
MareS4_Script_SetupRutuli_4:
# 129 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN2, MareS4_Script_SetupRutuli_8
MareS4_Script_SetupRutuli_7:
# 135 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN3, MareS4_Script_SetupRutuli_11
MareS4_Script_SetupRutuli_10:
# 141 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN4, MareS4_Script_SetupRutuli_14
MareS4_Script_SetupRutuli_13:
# 147 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_17
MareS4_Script_SetupRutuli_16:
# 152 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_20
MareS4_Script_SetupRutuli_19:
# 156 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_24
MareS4_Script_SetupRutuli_22:
# 159 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_29
MareS4_Script_SetupRutuli_27:
# 162 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_34
MareS4_Script_SetupRutuli_32:
	return

MareS4_Script_SetupRutuli_2:
# 117 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 67, 59
# 118 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 69, 59
# 119 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_FACE_DOWN
# 120 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_FACE_DOWN
	goto MareS4_Script_SetupRutuli_1

MareS4_Script_SetupRutuli_5:
# 124 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 1
# 125 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 47, 75
# 126 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS4_Script_SetupRutuli_4

MareS4_Script_SetupRutuli_8:
# 130 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 1
# 131 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 55, 76
# 132 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	goto MareS4_Script_SetupRutuli_7

MareS4_Script_SetupRutuli_11:
# 136 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 1
# 137 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 52, 71
# 138 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS4_Script_SetupRutuli_10

MareS4_Script_SetupRutuli_14:
# 142 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 1
# 143 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 67, 73
# 144 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS4_Script_SetupRutuli_13

MareS4_Script_SetupRutuli_17:
# 148 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 60, 64
# 149 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS4_Script_SetupRutuli_16

MareS4_Script_SetupRutuli_20:
# 153 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 70, 64
# 154 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_FACE_LEFT
	goto MareS4_Script_SetupRutuli_19

MareS4_Script_SetupRutuli_23:
# 157 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 3
	goto MareS4_Script_SetupRutuli_22

MareS4_Script_SetupRutuli_24:
# 156 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_23
	goto MareS4_Script_SetupRutuli_22

MareS4_Script_SetupRutuli_28:
# 160 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto MareS4_Script_SetupRutuli_27

MareS4_Script_SetupRutuli_29:
# 159 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_28
	goto MareS4_Script_SetupRutuli_27

MareS4_Script_SetupRutuli_33:
# 163 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
	goto MareS4_Script_SetupRutuli_32

MareS4_Script_SetupRutuli_34:
# 162 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_33
	goto MareS4_Script_SetupRutuli_32


MareS4_Script_SetupRetRLostScene::
# 169 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 170 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 67, 61
# 171 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 69, 65
# 172 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_UP
# 173 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 174 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_FACE_UP
	return


MareS4_Script_ShowRetRSearch::
# 179 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 180 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 53, 77
# 181 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 42, 72
# 182 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 184 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP
	return


MareS4_Script_ShowRetRFound::
# 189 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 190 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 65, 62
# 191 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 66, 64
# 192 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ROMULUS, 63, 64
# 193 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_REMUS, 67, 66
# 194 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_BEROE, 70, 64
# 195 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 196 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 197 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 198 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 199 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 200 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_BEROE, MOVEMENT_TYPE_FACE_RIGHT
	return


MareS4_Script_ShowAeneasGone::
# 205 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 65, 62
# 206 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 66, 64
# 207 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ROMULUS, 63, 64
# 208 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_REMUS, 67, 66
# 209 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_BEROE, 70, 64
# 210 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 211 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 212 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 213 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 214 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_BEROE, MOVEMENT_TYPE_FACE_RIGHT
	return


MareS4_Script_HideScylla::
# 219 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_SCYLLA, 0, 0
# 220 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_SCYLLA, MOVEMENT_TYPE_INVISIBLE
	return


MareS4_Script_ShowUlysses::
# 225 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ULYSSES, 73, 54
# 226 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ULYSSES, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
	return


MareS4_Script_ReverseWhirlpool::
# 231 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 47, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 233 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 234 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 235 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 237 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 49, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 238 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 49, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 239 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 49, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 240 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 49, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 241 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 49, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 243 "data/maps/MareS4/scripts.pory"
	setmetatile 72, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 244 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 245 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 246 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 247 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 248 "data/maps/MareS4/scripts.pory"
	setmetatile 78, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 250 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 51, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 251 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 51, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 252 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 51, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 253 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 51, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 254 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 51, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 256 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 257 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 258 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 260 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 53, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
	return


MareS4_Script_HideWhirlpool::
# 266 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 47, METATILE_General_CalmWater, FALSE
# 268 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 48, METATILE_General_CalmWater, FALSE
# 269 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 48, METATILE_General_CalmWater, FALSE
# 270 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 48, METATILE_General_CalmWater, FALSE
# 272 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 49, METATILE_General_CalmWater, FALSE
# 273 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 49, METATILE_General_CalmWater, FALSE
# 274 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 49, METATILE_General_CalmWater, FALSE
# 275 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 49, METATILE_General_CalmWater, FALSE
# 276 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 49, METATILE_General_CalmWater, FALSE
# 278 "data/maps/MareS4/scripts.pory"
	setmetatile 72, 50, METATILE_General_CalmWater, FALSE
# 279 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 50, METATILE_General_CalmWater, FALSE
# 280 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 50, METATILE_General_CalmWater, FALSE
# 281 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 50, METATILE_General_CalmWater, FALSE
# 282 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 50, METATILE_General_CalmWater, FALSE
# 283 "data/maps/MareS4/scripts.pory"
	setmetatile 78, 50, METATILE_General_CalmWater, FALSE
# 285 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 51, METATILE_General_CalmWater, FALSE
# 286 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 51, METATILE_General_CalmWater, FALSE
# 287 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 51, METATILE_General_CalmWater, FALSE
# 288 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 51, METATILE_General_CalmWater, FALSE
# 289 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 51, METATILE_General_CalmWater, FALSE
# 291 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 52, METATILE_General_CalmWater, FALSE
# 292 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 52, METATILE_General_CalmWater, FALSE
# 293 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 52, METATILE_General_CalmWater, FALSE
# 295 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 53, METATILE_General_CalmWater, FALSE
	return


MareS4_Script_Scylla::
	return


MareS4_Script_Ulysses::
	return


MareS4_Script_Rutulian1::
# 311 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_FaceDown
# 312 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 314 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 316 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 317 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 319 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 321 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 322 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 323 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 324 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 326 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 327 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 328 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 329 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 331 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 332 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
	end


MareS4_Script_Trigger_Rutulian1A::
# 338 "data/maps/MareS4/scripts.pory"
	lockall
# 339 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 341 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 343 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 344 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 346 "data/maps/MareS4/scripts.pory"
	delay 30
# 347 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 348 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 351 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 353 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkDown
# 354 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 355 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 356 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 357 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp7
# 358 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 360 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 361 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 362 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 363 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 365 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 366 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 368 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1B::
# 373 "data/maps/MareS4/scripts.pory"
	lockall
# 374 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 376 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 378 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 379 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 381 "data/maps/MareS4/scripts.pory"
	delay 30
# 382 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 383 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 385 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 386 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 388 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 390 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 391 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 392 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 393 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 394 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 395 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 397 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 398 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 399 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 400 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 402 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 403 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 405 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1C::
# 410 "data/maps/MareS4/scripts.pory"
	lockall
# 411 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 413 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 415 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 416 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 418 "data/maps/MareS4/scripts.pory"
	delay 30
# 419 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 420 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 422 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 423 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 425 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 427 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 428 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 429 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 430 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 431 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 432 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 434 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 435 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 436 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 437 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 439 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 440 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 442 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian2::
# 448 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_FaceRight
# 449 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 451 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 453 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 454 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 456 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 458 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 459 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 460 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkLeft5
# 461 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 462 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp7
# 463 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 465 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 466 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 467 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 468 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 470 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 471 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
	end


MareS4_Script_Trigger_Rutulian2A::
# 477 "data/maps/MareS4/scripts.pory"
	lockall
# 478 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 480 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 482 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 483 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 485 "data/maps/MareS4/scripts.pory"
	delay 30
# 486 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 487 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 490 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 492 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight3
# 493 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 494 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp
# 495 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 496 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight5
# 497 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 499 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 500 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 501 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 502 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 504 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 505 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 507 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian2B::
# 512 "data/maps/MareS4/scripts.pory"
	lockall
# 513 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 515 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 517 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 518 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 520 "data/maps/MareS4/scripts.pory"
	delay 30
# 521 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 522 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 524 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 525 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 527 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 529 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight
# 530 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 531 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp2
# 532 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 533 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight6
# 534 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 536 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 537 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 538 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 539 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 541 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 542 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 544 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian3::
# 550 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_FaceLeft
# 551 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 553 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 555 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 556 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 558 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 560 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp6
# 561 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 563 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 564 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 565 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 566 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 568 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 569 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
	end


MareS4_Script_Trigger_Rutulian3A::
# 575 "data/maps/MareS4/scripts.pory"
	lockall
# 576 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 578 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 580 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 581 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 583 "data/maps/MareS4/scripts.pory"
	delay 30
# 584 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 585 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 587 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp
# 588 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 590 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 592 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight
# 593 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 594 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp7
# 595 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 598 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 599 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 600 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 602 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 603 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 605 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian3B::
# 610 "data/maps/MareS4/scripts.pory"
	lockall
# 611 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 613 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 615 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 616 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 618 "data/maps/MareS4/scripts.pory"
	delay 30
# 619 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 620 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 623 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 625 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkLeft
# 626 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 627 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp2
# 628 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 629 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight2
# 630 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 631 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp5
# 632 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 634 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 635 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 636 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 637 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 639 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 640 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 642 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian4::
# 648 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_FaceUp
# 649 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 651 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 653 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 654 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 656 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft5
# 659 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 660 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp7
# 661 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 663 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 664 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 665 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 666 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 668 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 669 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
	end


MareS4_Script_Trigger_Rutulian4A::
# 675 "data/maps/MareS4/scripts.pory"
	lockall
# 676 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 678 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 680 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 681 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 683 "data/maps/MareS4/scripts.pory"
	delay 30
# 684 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 685 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 687 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft4
# 688 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 690 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 692 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 693 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 694 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 695 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 696 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 697 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 699 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 700 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 701 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 702 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 704 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 705 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 707 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4B::
# 712 "data/maps/MareS4/scripts.pory"
	lockall
# 713 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 715 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 717 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 718 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 720 "data/maps/MareS4/scripts.pory"
	delay 30
# 721 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 722 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft3
# 725 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 727 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 729 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 730 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 731 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 732 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 734 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 736 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 737 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 738 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 739 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 741 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 742 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 744 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4C::
# 749 "data/maps/MareS4/scripts.pory"
	lockall
# 750 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 752 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 754 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 755 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 757 "data/maps/MareS4/scripts.pory"
	delay 30
# 758 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 759 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 761 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 762 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 764 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 766 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 767 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 768 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 769 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 770 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 771 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 773 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 774 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 775 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 776 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 778 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 779 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 781 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4D::
# 786 "data/maps/MareS4/scripts.pory"
	lockall
# 787 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 789 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 791 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 792 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 794 "data/maps/MareS4/scripts.pory"
	delay 30
# 795 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 796 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 798 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 799 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 801 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 803 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 804 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 805 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 806 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 807 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 808 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 810 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 811 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 812 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 813 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 815 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 816 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 818 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4E::
# 823 "data/maps/MareS4/scripts.pory"
	lockall
# 824 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 826 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 828 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 829 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 831 "data/maps/MareS4/scripts.pory"
	delay 30
# 832 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 833 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 836 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 838 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp6
# 839 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 841 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 842 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 843 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 844 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 846 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 847 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 849 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian5::
# 855 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_FaceDown
# 856 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 858 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 860 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 861 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 863 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 865 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 866 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 868 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 869 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 870 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 871 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 873 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 875 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_Rutulian5_2
# 878 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
MareS4_Script_Rutulian5_1:
	end

MareS4_Script_Rutulian5_2:
# 876 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian5_1


MareS4_Script_Trigger_Rutulian5A::
# 884 "data/maps/MareS4/scripts.pory"
	lockall
# 885 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 887 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 889 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 890 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 892 "data/maps/MareS4/scripts.pory"
	delay 30
# 893 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 894 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 897 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 899 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 900 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 901 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 902 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 903 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 904 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 906 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 907 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 908 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 909 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 911 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 913 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 915 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5B::
# 920 "data/maps/MareS4/scripts.pory"
	lockall
# 921 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 923 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 925 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 926 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 928 "data/maps/MareS4/scripts.pory"
	delay 30
# 929 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 930 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 932 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 933 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 935 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 937 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 938 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 939 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 940 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 941 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 942 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 944 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 945 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 946 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 947 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 949 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 951 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 953 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5C::
# 958 "data/maps/MareS4/scripts.pory"
	lockall
# 959 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 961 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 963 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 964 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 966 "data/maps/MareS4/scripts.pory"
	delay 30
# 967 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 968 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 970 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 971 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 973 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 975 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 976 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 977 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 978 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 979 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 980 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 982 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 983 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 984 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 985 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 987 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 989 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 991 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5D::
# 996 "data/maps/MareS4/scripts.pory"
	lockall
# 997 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 999 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1001 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1002 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1004 "data/maps/MareS4/scripts.pory"
	delay 30
# 1005 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1006 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1008 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1009 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1011 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1013 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1014 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1015 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1016 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1017 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1018 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1020 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1021 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1022 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1023 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1025 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1027 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1029 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5E::
# 1034 "data/maps/MareS4/scripts.pory"
	lockall
# 1035 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1037 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1039 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1040 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1042 "data/maps/MareS4/scripts.pory"
	delay 30
# 1043 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1044 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1046 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1047 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1049 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1051 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1052 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1053 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1054 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1055 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1056 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1058 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1059 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1060 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1061 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1063 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1065 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1067 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5F::
# 1072 "data/maps/MareS4/scripts.pory"
	lockall
# 1073 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1075 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1077 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1078 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1080 "data/maps/MareS4/scripts.pory"
	delay 30
# 1081 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1082 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1084 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1085 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1087 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1089 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1090 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1091 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1092 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1093 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1094 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1096 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1097 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1098 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1099 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1101 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1103 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1105 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5G::
# 1110 "data/maps/MareS4/scripts.pory"
	lockall
# 1111 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1113 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1115 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1116 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1118 "data/maps/MareS4/scripts.pory"
	delay 30
# 1119 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1120 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1122 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1123 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1125 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1127 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1128 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1129 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1130 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1131 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1132 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1134 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1135 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1136 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1137 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1139 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1141 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1143 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5H::
# 1148 "data/maps/MareS4/scripts.pory"
	lockall
# 1149 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1151 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1153 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1154 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1156 "data/maps/MareS4/scripts.pory"
	delay 30
# 1157 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1158 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1160 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1161 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1163 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1165 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1166 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1167 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1168 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1169 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1170 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1172 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1173 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1174 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1175 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1177 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1179 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1181 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5I::
# 1186 "data/maps/MareS4/scripts.pory"
	lockall
# 1187 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1189 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1191 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1192 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1194 "data/maps/MareS4/scripts.pory"
	delay 30
# 1195 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1196 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1198 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1199 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1201 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1203 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp6
# 1204 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1206 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1207 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1208 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1209 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1211 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1213 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1215 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5J::
# 1220 "data/maps/MareS4/scripts.pory"
	lockall
# 1221 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1223 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1225 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1226 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1228 "data/maps/MareS4/scripts.pory"
	delay 30
# 1229 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1230 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1232 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight9
# 1233 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1235 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1237 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1238 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1239 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkLeft
# 1240 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1241 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1242 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1244 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1245 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1246 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1247 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1249 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1251 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1253 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian6::
# 1259 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceUp
# 1260 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1262 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1264 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1265 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1267 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1269 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
# 1270 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1272 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1273 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1274 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1275 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1277 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1279 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_Rutulian6_2
# 1282 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
MareS4_Script_Rutulian6_1:
	end

MareS4_Script_Rutulian6_2:
# 1280 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian6_1


MareS4_Script_Trigger_Rutulian6A::
# 1289 "data/maps/MareS4/scripts.pory"
	lockall
# 1290 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1291 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6B::
# 1295 "data/maps/MareS4/scripts.pory"
	lockall
# 1296 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1297 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6C::
# 1301 "data/maps/MareS4/scripts.pory"
	lockall
# 1302 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1303 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6D::
# 1307 "data/maps/MareS4/scripts.pory"
	lockall
# 1308 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1309 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6E::
# 1313 "data/maps/MareS4/scripts.pory"
	lockall
# 1314 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1315 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6F::
# 1319 "data/maps/MareS4/scripts.pory"
	lockall
# 1320 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1321 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6G::
# 1325 "data/maps/MareS4/scripts.pory"
	lockall
# 1326 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1327 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6H::
# 1331 "data/maps/MareS4/scripts.pory"
	lockall
# 1332 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1333 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6I::
# 1337 "data/maps/MareS4/scripts.pory"
	lockall
# 1338 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1339 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6J::
# 1343 "data/maps/MareS4/scripts.pory"
	lockall
# 1344 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 10
# 1345 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6_Template::
# 1350 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1352 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1354 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1355 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1357 "data/maps/MareS4/scripts.pory"
	delay 30
# 1358 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1359 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1361 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1362 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_3
# 1364 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_4
# 1366 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_5
# 1368 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_6
# 1370 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_7
# 1372 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_8
# 1374 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_9
# 1376 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_10
# 1378 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_11
# 1380 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_12
# 1383 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1384 "data/maps/MareS4/scripts.pory"
	closemessage
# 1385 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1386 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1387 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_1:
# 1390 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1392 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1394 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1395 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_16
# 1397 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_17
# 1401 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_18
# 1405 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_19
# 1409 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_20
# 1413 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_21
# 1417 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_22
# 1421 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_23
# 1423 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_24
# 1429 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_25
# 1436 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1437 "data/maps/MareS4/scripts.pory"
	closemessage
# 1438 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1439 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1440 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_3:
# 1363 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft9
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_4:
# 1365 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_5:
# 1367 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_6:
# 1369 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_7:
# 1371 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_8:
# 1373 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_9:
# 1375 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_10:
# 1377 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_11:
# 1379 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_12:
# 1381 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_14:
# 1443 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1445 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1446 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1447 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1448 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1450 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1452 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1453 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1455 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_16:
# 1396 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_17:
# 1398 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1399 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1400 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_18:
# 1402 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1403 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1404 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_19:
# 1406 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1407 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1408 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_20:
# 1410 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1411 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1412 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_21:
# 1414 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1415 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1416 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_22:
# 1418 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1419 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1420 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_23:
# 1422 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_24:
# 1424 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1425 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1426 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1427 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1428 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_25:
# 1430 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1431 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1432 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1433 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1434 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14


MareS4_Script_Trigger_RutuliDoubleA::
# 1461 "data/maps/MareS4/scripts.pory"
	lockall
# 1462 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1463 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleB::
# 1467 "data/maps/MareS4/scripts.pory"
	lockall
# 1468 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1469 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleC::
# 1473 "data/maps/MareS4/scripts.pory"
	lockall
# 1474 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1475 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleD::
# 1479 "data/maps/MareS4/scripts.pory"
	lockall
# 1480 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1481 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleE::
# 1485 "data/maps/MareS4/scripts.pory"
	lockall
# 1486 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1487 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleF::
# 1491 "data/maps/MareS4/scripts.pory"
	lockall
# 1492 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1493 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleG::
# 1497 "data/maps/MareS4/scripts.pory"
	lockall
# 1498 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1499 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleH::
# 1503 "data/maps/MareS4/scripts.pory"
	lockall
# 1504 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1505 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleI::
# 1509 "data/maps/MareS4/scripts.pory"
	lockall
# 1510 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1511 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_Rutuli56Double_Template::
# 1517 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1519 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1521 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1522 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1523 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1525 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1526 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_3
# 1528 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_4
# 1531 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_5
# 1534 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_6
# 1537 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_7
# 1540 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_8
# 1543 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_9
# 1546 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_10
# 1549 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_11
# 1552 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1553 "data/maps/MareS4/scripts.pory"
	closemessage
# 1554 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1555 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1556 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_1:
# 1559 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1561 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1562 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1564 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre1
# 1566 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1567 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1569 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre2
# 1570 "data/maps/MareS4/scripts.pory"
	closemessage
# 1572 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1573 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost1, TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost2
# 1575 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Post
# 1576 "data/maps/MareS4/scripts.pory"
	closemessage
# 1578 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1579 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1580 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1581 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1582 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_15
# 1594 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_16
# 1606 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_17
# 1618 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_18
# 1630 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_19
# 1642 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_20
# 1654 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_21
# 1663 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_22
# 1672 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_23
# 1682 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1683 "data/maps/MareS4/scripts.pory"
	closemessage
# 1684 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1685 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1686 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_3:
# 1527 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_4:
# 1529 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1530 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_5:
# 1532 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1533 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_6:
# 1535 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1536 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_7:
# 1538 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
# 1539 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_8:
# 1541 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
# 1542 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_9:
# 1544 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1545 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_10:
# 1547 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1548 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_11:
# 1550 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_13:
# 1690 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1691 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1692 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1693 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1694 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1695 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1696 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1697 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1699 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1700 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1702 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1703 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1705 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_15:
# 1583 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1584 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1585 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1586 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1587 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1588 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1589 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1590 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1591 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1592 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1593 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_16:
# 1595 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1596 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1597 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1598 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1599 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1600 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1601 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1602 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1603 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1604 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1605 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_17:
# 1607 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1608 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1609 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1610 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1611 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1612 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1613 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1614 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1615 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1616 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1617 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_18:
# 1619 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1620 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1621 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1622 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1623 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1624 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1625 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1626 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1627 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1628 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1629 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_19:
# 1631 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1632 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1633 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1634 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1635 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1636 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1637 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1638 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1639 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1640 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1641 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_20:
# 1643 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1644 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1645 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1646 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1647 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1648 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1649 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1650 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1651 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1652 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1653 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_21:
# 1655 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1656 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1657 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1659 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1660 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1661 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1662 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_22:
# 1664 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1665 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1666 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1667 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1668 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1669 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1670 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1671 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_23:
# 1673 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1674 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1675 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1676 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1677 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1678 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1679 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1680 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13


MareS4_Script_Rutulian7::
# 1712 "data/maps/MareS4/scripts.pory"
	lockall
# 1714 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1716 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1717 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1718 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1720 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceDown
# 1721 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown
# 1722 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1723 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1724 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1726 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1728 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1729 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1731 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1732 "data/maps/MareS4/scripts.pory"
	closemessage
# 1734 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1736 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1737 "data/maps/MareS4/scripts.pory"
	closemessage
# 1739 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1740 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1741 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1742 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1743 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1745 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1746 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1747 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1748 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1749 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1750 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1751 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1752 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1754 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1756 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian8::
# 1763 "data/maps/MareS4/scripts.pory"
	lockall
# 1765 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1767 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1768 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1769 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1771 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceDown
# 1772 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown
# 1773 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1774 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1775 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1777 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1779 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1780 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1782 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1783 "data/maps/MareS4/scripts.pory"
	closemessage
# 1785 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1787 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1788 "data/maps/MareS4/scripts.pory"
	closemessage
# 1790 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1791 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1792 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1793 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1794 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1796 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1797 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1798 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1799 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1800 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1801 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1802 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1803 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1805 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1807 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Doorguards::
# 1813 "data/maps/MareS4/scripts.pory"
	lockall
# 1815 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1817 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1818 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1819 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1821 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceRight
# 1822 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceLeft
# 1823 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1825 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1826 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1828 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1830 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1831 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1833 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1834 "data/maps/MareS4/scripts.pory"
	closemessage
# 1836 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1838 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1839 "data/maps/MareS4/scripts.pory"
	closemessage
# 1841 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown6
# 1842 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown6
# 1843 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1845 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1846 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1847 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1848 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1849 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1850 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1851 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1852 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1854 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1856 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_RetRLostScene::
# 1861 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 10
# 1863 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1864 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1866 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1867 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1869 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1870 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_GoodJob
# 1871 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1873 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1874 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_RetRLostScene_Text_0
# 1875 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1876 "data/maps/MareS4/scripts.pory"
	closemessage
# 1878 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1879 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1880 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1881 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1883 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1884 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_FaceDown
# 1885 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1887 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkUp3
# 1888 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1890 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1891 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Help
# 1892 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1894 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1895 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_WhatsWrong
# 1896 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1898 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1899 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_RetRGone
# 1900 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1902 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1903 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1904 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1905 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1907 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1908 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Terrible
# 1909 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1911 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 1912 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_RunOff
# 1913 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 1915 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1916 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_OrCaptured
# 1917 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1919 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1920 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_TakeAction
# 1921 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1922 "data/maps/MareS4/scripts.pory"
	closemessage
# 1924 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkDown6
# 1925 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_WalkDown6
# 1926 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1928 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceUp
# 1929 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1930 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1931 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 1932 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1933 "data/maps/MareS4/scripts.pory"
	closemessage
# 1934 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1935 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1937 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_FAUSTULUS
# 1938 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ASCANIUS
# 1939 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
# 1940 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_FAUSTULUS
# 1941 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ASCANIUS
	end


MareS4_Script_Aeneas::
# 1947 "data/maps/MareS4/scripts.pory"
	faceplayer
# 1949 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Aeneas_2
MareS4_Script_Aeneas_1:
# 1956 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Aeneas_5
MareS4_Script_Aeneas_4:
# 1998 "data/maps/MareS4/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS4_Script_Aeneas_2:
# 1950 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1951 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 1952 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1953 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_1

MareS4_Script_Aeneas_5:
# 1957 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1958 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Found
# 1960 "data/maps/MareS4/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AENEAS, 1
# 1961 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MareS4_Script_Aeneas_7
# 1966 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1967 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1969 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding1
# 1970 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1971 "data/maps/MareS4/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AENEAS
# 1973 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_GiveInvitation
# 1975 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1976 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding2
# 1977 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1978 "data/maps/MareS4/scripts.pory"
	closemessage
# 1980 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1981 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_Aeneas_11
MareS4_Script_Aeneas_10:
# 1985 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkDown6
# 1986 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1988 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_AENEAS
# 1989 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 0, 0
# 1990 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 1991 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_AENEAS
# 1993 "data/maps/MareS4/scripts.pory"
	addvar VAR_AENEID_STATE, 1
	end

MareS4_Script_Aeneas_7:
# 1962 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1963 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_4

MareS4_Script_Aeneas_11:
# 1982 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkLeft
# 1983 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Aeneas_10


MareS4_Script_Faustulus::
# 2003 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Faustulus_2
MareS4_Script_Faustulus_1:
# 2008 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Faustulus_4
	return

MareS4_Script_Faustulus_2:
# 2004 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2005 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Search, MSGBOX_NPC
# 2006 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	goto MareS4_Script_Faustulus_1

MareS4_Script_Faustulus_4:
# 2009 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2010 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Found, MSGBOX_NPC
# 2011 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	return


MareS4_Script_Ascanius::
# 2017 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Ascanius_2
MareS4_Script_Ascanius_1:
# 2022 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Ascanius_4
	return

MareS4_Script_Ascanius_2:
# 2018 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2019 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Search, MSGBOX_NPC
# 2020 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	goto MareS4_Script_Ascanius_1

MareS4_Script_Ascanius_4:
# 2023 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2024 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Found, MSGBOX_NPC
# 2025 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	return


MareS4_Script_Romulus::
# 2031 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Romulus_1
	return

MareS4_Script_Romulus_1:
# 2032 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Romulus_Found, MSGBOX_NPC
	return


MareS4_Script_Remus::
# 2038 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Remus_1
	return

MareS4_Script_Remus_1:
# 2039 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Remus_Found, MSGBOX_NPC
	return


MareS4_Script_Beroe::
# 2045 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Beroe_1
	return

MareS4_Script_Beroe_1:
# 2046 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Beroe_Found, MSGBOX_NPC
	return


MareS4_Script_Trigger_Rutulian6_Template_Text_0:
# 1383 "data/maps/MareS4/scripts.pory"
	.string "ERROR\pVAR_TEMP_9 OOB$"

MareS4_Script_RetRLostScene_Text_0:
# 1874 "data/maps/MareS4/scripts.pory"
	.string "HELP!$"

MareS4_Text_Rutuli56Pre1::
# 2053 "data/maps/MareS4/scripts.pory"
	.string "Warutuli wafight wastrongya.$"

MareS4_Text_Rutuli56Pre2::
# 2058 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus watrust tastop.$"

MareS4_Text_Rutuli56Lost1::
# 2063 "data/maps/MareS4/scripts.pory"
	.string "Wastrong bena!$"

MareS4_Text_Rutuli56Lost2::
# 2068 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus! Wafail!$"

MareS4_Text_Rutuli56Post::
# 2073 "data/maps/MareS4/scripts.pory"
	.string "Back fallya wamust! Wabeat beya!$"

MareS4_Text_DoorguardPre1::
# 2078 "data/maps/MareS4/scripts.pory"
	.string "KaTurnus best katrust men wabe.$"

MareS4_Text_DoorguardPre2::
# 2083 "data/maps/MareS4/scripts.pory"
	.string "Wapast aliveya gona!$"

MareS4_Text_DoorguardLost1::
# 2088 "data/maps/MareS4/scripts.pory"
	.string "What happen?$"

MareS4_Text_DoorguardLost2::
# 2093 "data/maps/MareS4/scripts.pory"
	.string "Sacanna bena!$"

MareS4_Text_DoorguardPost::
# 2098 "data/maps/MareS4/scripts.pory"
	.string "Wa-admit KaTurnus wadefeat wacanna.\p"
	.string "WaHesperia forever waleave wamust.\n"
	.string "Exhile wagoya.$"

MareS4_Text_Aeneas_GoodJob::
# 2102 "data/maps/MareS4/scripts.pory"
	.string "My lad! Good job, you've ran the savages\n"
	.string "off the island. I saw the last of them\l"
	.string "jump in the sea like they were being\l"
	.string "chased by swarms of hornets! Now we\l"
	.string "can begin...$"

MareS4_Text_Ascanius_Help::
# 2109 "data/maps/MareS4/scripts.pory"
	.string "Aeneas! Come quick! Something terrible\n"
	.string "has happened!$"

MareS4_Text_Aeneas_WhatsWrong::
# 2114 "data/maps/MareS4/scripts.pory"
	.string "Ascianus, what is is?$"

MareS4_Text_Ascanius_RetRGone::
# 2118 "data/maps/MareS4/scripts.pory"
	.string "My boys, Remus and Romulus, are gone!$"

MareS4_Text_Aeneas_Terrible::
# 2122 "data/maps/MareS4/scripts.pory"
	.string "They're gone? That's terrible! They\n"
	.string "must be found.$"

MareS4_Text_Faustulus_RunOff::
# 2127 "data/maps/MareS4/scripts.pory"
	.string "Sarun off likely saplay and salostya.$"

MareS4_Text_Ascanius_OrCaptured::
# 2131 "data/maps/MareS4/scripts.pory"
	.string "Or captured by the enemy! Or dead!$"

MareS4_Text_Aeneas_TakeAction::
# 2135 "data/maps/MareS4/scripts.pory"
	.string "This is time for action, not blind panic.\n"
	.string "Ascianus I know it must be hard but\l"
	.string "regain your composure and then search\l"
	.string "the beaches for any sign of the boys.\l"
	.string "Faustulus, you will search the northern\l"
	.string "half of the island. {PLAYER} search\l"
	.string "the southern half. I'll wait here in case\l"
	.string "they, or the natives, decide to return\l"
	.string "to the chieftain's hut.$"

MareS4_Text_Aeneas_Search::
# 2146 "data/maps/MareS4/scripts.pory"
	.string "Be off! Hurry! There is no time to lose!$"

MareS4_Text_Ascanius_Search::
# 2150 "data/maps/MareS4/scripts.pory"
	.string "Oh Remus! Romulus! Come back to me! We\n"
	.string "need to find my boys! I'm so worried!$"

MareS4_Text_Faustulus_Search::
# 2156 "data/maps/MareS4/scripts.pory"
	.string "Maheart know satwins ok beya. Around\n"
	.string "saplay sabeya. Many places beya sahide.\l"
	.string "Behind rock, up tree, in cave wafindya.$"

MareS4_Text_Aeneas_Found::
# 2160 "data/maps/MareS4/scripts.pory"
	.string "At last, I can relax. We found the boys,\n"
	.string "expelled the natives and fully control\l"
	.string "Isla Hesperia. All that remains is to\l"
	.string "build a mighty city upon the seven hills\l"
	.string "of this noble island.$"

MareS4_Text_Faustulus_Found::
# 2169 "data/maps/MareS4/scripts.pory"
	.string "Maheart sawarm masee saboys safeya\n"
	.string "again saplay.$"

MareS4_Text_Beroe_Found::
# 2173 "data/maps/MareS4/scripts.pory"
	.string "Even with the island all to ourselves I\n"
	.string "can't help but feel lost, and vulnerable\l"
	.string "in this exotic wilderness. I miss the\l"
	.string "fields of Ilium... the walls of Troy...$"

MareS4_Text_Ascanius_Found::
# 2180 "data/maps/MareS4/scripts.pory"
	.string "My boys are back! I was deathly afriad\n"
	.string "that I had lost them just like I lost\l"
	.string "their mother on our bitter journey here.$"

MareS4_Text_Romulus_Found::
# 2186 "data/maps/MareS4/scripts.pory"
	.string "When I get older I will build my house\n"
	.string "upon the hill where the she wolf nursed\l"
	.string "us.$"

MareS4_Text_Remus_Found::
# 2191 "data/maps/MareS4/scripts.pory"
	.string "I'm staying far away from that dark\n"
	.string "cave where that monster kept us from\l"
	.string "our father. The furthest southern hill\l"
	.string "is where I will build my house to avoid\l"
	.string "that cursed place.$"

MareS4_Text_Aeneas_Wedding1::
# 2198 "data/maps/MareS4/scripts.pory"
	.string "What's that? You have something to\n"
	.string "give to me?$"

MareS4_Text_GiveInvitation::
# 2202 "data/maps/MareS4/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Aeneas.$"

MareS4_Text_Aeneas_Wedding2::
# 2206 "data/maps/MareS4/scripts.pory"
	.string "My dear friend Paris is at the great\n"
	.string "house of Nestor as a guest and expects\l"
	.string "to take his daughter, Helen, to be his\l"
	.string "wife! Wonderful news! I must be off at\l"
	.string "once! Though I am loathe to leave my\l"
	.string "destiny to wait on this island I must\l"
	.string "attend this most consequential\l"
	.string "ceremony. With the primitives purged\l"
	.string "Hesperia will be kept safe by my\l"
	.string "Ascanius while I attend my good\l"
	.string "friend's wedding day. Therefore I take\l"
	.string "my leave. When I return we shall begin\l"
	.string "to build the great city!$"
