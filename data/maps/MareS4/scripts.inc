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
# 301 "data/maps/MareS4/scripts.pory"
	faceplayer
# 302 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 303 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 304 "data/maps/MareS4/scripts.pory"
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_ENCOUNTER
# 305 "data/maps/MareS4/scripts.pory"
	waitmoncry
# 306 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 307 "data/maps/MareS4/scripts.pory"
	callnative DoScyllaBattle
# 308 "data/maps/MareS4/scripts.pory"
	waitstate
# 309 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 310 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_SCYLLA
# 311 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_SCYLLA, 0, 0
# 312 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_SCYLLA, MOVEMENT_TYPE_INVISIBLE
# 313 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_SCYLLA
# 314 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 17
	goto_if_eq MareS4_Script_Scylla_2
MareS4_Script_Scylla_1:
	end

MareS4_Script_Scylla_2:
# 315 "data/maps/MareS4/scripts.pory"
	setvar VAR_ULYSSES_STATE, 18
	goto MareS4_Script_Scylla_1


MareS4_Script_Ulysses::
# 321 "data/maps/MareS4/scripts.pory"
	faceplayer
# 322 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 323 "data/maps/MareS4/scripts.pory"
	switch VAR_ULYSSES_STATE
# 324 "data/maps/MareS4/scripts.pory"
	case 16, MareS4_Script_Ulysses_2
# 327 "data/maps/MareS4/scripts.pory"
	case 17, MareS4_Script_Ulysses_3
# 330 "data/maps/MareS4/scripts.pory"
	case 18, MareS4_Script_Ulysses_4
# 333 "data/maps/MareS4/scripts.pory"
	case 19, MareS4_Script_Ulysses_5
# 337 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Ulysses_Text_0
# 338 "data/maps/MareS4/scripts.pory"
	closemessage
# 339 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
	end

MareS4_Script_Ulysses_2:
# 326 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAnteScylla
	return

MareS4_Script_Ulysses_3:
# 329 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringScylla
	return

MareS4_Script_Ulysses_4:
# 332 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringCharybdis
	return

MareS4_Script_Ulysses_5:
# 335 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_UlyssesAfterCharybdis
	return


MareS4_Script_UlyssesAfterCharybdis::
# 346 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAfterCharybdis
# 347 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 348 "data/maps/MareS4/scripts.pory"
	closemessage
	end


MareS4_Script_Rutulian1::
# 360 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_FaceDown
# 361 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 363 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 365 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 366 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 368 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 370 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 371 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 372 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 373 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 375 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 376 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 377 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 378 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 380 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 381 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
	end


MareS4_Script_Trigger_Rutulian1A::
# 387 "data/maps/MareS4/scripts.pory"
	lockall
# 388 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 390 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 392 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 393 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 395 "data/maps/MareS4/scripts.pory"
	delay 30
# 396 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 397 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 400 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 402 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkDown
# 403 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 404 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 405 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 406 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp7
# 407 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 409 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 410 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 411 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 412 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 414 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 415 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 417 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1B::
# 422 "data/maps/MareS4/scripts.pory"
	lockall
# 423 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 425 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 427 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 428 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 430 "data/maps/MareS4/scripts.pory"
	delay 30
# 431 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 432 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 434 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 435 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 437 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 439 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 440 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 441 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 442 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 443 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 444 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 446 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 447 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 448 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 449 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 451 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 452 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 454 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1C::
# 459 "data/maps/MareS4/scripts.pory"
	lockall
# 460 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 462 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 464 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 465 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 467 "data/maps/MareS4/scripts.pory"
	delay 30
# 468 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 469 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 471 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 472 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 474 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 476 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 477 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 478 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 479 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 480 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 481 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 483 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 484 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 485 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 486 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 488 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 489 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 491 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian2::
# 497 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_FaceRight
# 498 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 500 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 502 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 503 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 505 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 507 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 508 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 509 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkLeft5
# 510 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 511 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp7
# 512 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 514 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 515 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 516 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 517 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 519 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 520 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
	end


MareS4_Script_Trigger_Rutulian2A::
# 526 "data/maps/MareS4/scripts.pory"
	lockall
# 527 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 529 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 531 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 532 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 534 "data/maps/MareS4/scripts.pory"
	delay 30
# 535 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 536 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 539 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 541 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight3
# 542 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 543 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp
# 544 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 545 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight5
# 546 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 548 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 549 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 550 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 551 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 553 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 554 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 556 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian2B::
# 561 "data/maps/MareS4/scripts.pory"
	lockall
# 562 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 564 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 566 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 567 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 569 "data/maps/MareS4/scripts.pory"
	delay 30
# 570 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 571 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 573 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 574 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 576 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 578 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight
# 579 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 580 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp2
# 581 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 582 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight6
# 583 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 585 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 586 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 587 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 588 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 590 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 591 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 593 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian3::
# 599 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_FaceLeft
# 600 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 602 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 604 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 605 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 607 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 609 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp6
# 610 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 612 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 613 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 614 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 615 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 617 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 618 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
	end


MareS4_Script_Trigger_Rutulian3A::
# 624 "data/maps/MareS4/scripts.pory"
	lockall
# 625 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 627 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 629 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 630 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 632 "data/maps/MareS4/scripts.pory"
	delay 30
# 633 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 634 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 636 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp
# 637 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 639 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 641 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight
# 642 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 643 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp7
# 644 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 646 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 647 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 648 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 649 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 651 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 652 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 654 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian3B::
# 659 "data/maps/MareS4/scripts.pory"
	lockall
# 660 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 662 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 664 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 665 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 667 "data/maps/MareS4/scripts.pory"
	delay 30
# 668 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 669 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 672 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 674 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkLeft
# 675 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 676 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp2
# 677 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 678 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight2
# 679 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 680 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp5
# 681 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 683 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 684 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 685 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 686 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 688 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 689 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 691 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian4::
# 697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_FaceUp
# 698 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 700 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 702 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 703 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 705 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 707 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft5
# 708 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 709 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp7
# 710 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 712 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 713 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 714 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 715 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 717 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 718 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
	end


MareS4_Script_Trigger_Rutulian4A::
# 724 "data/maps/MareS4/scripts.pory"
	lockall
# 725 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 727 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 729 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 730 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 732 "data/maps/MareS4/scripts.pory"
	delay 30
# 733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 734 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 736 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft4
# 737 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 739 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 741 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 742 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 743 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 744 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 745 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 746 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 748 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 749 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 750 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 751 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 753 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 754 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 756 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4B::
# 761 "data/maps/MareS4/scripts.pory"
	lockall
# 762 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 764 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 766 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 767 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 769 "data/maps/MareS4/scripts.pory"
	delay 30
# 770 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 771 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 773 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft3
# 774 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 776 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 778 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 779 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 780 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 781 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 782 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 783 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 785 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 786 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 787 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 788 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 790 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 791 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 793 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4C::
# 798 "data/maps/MareS4/scripts.pory"
	lockall
# 799 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 801 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 803 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 804 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 806 "data/maps/MareS4/scripts.pory"
	delay 30
# 807 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 808 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 810 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 811 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 813 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 815 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 816 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 817 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 818 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 819 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 820 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 822 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 823 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 824 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 825 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 827 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 828 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 830 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4D::
# 835 "data/maps/MareS4/scripts.pory"
	lockall
# 836 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 838 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 840 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 841 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 843 "data/maps/MareS4/scripts.pory"
	delay 30
# 844 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 845 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 847 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 848 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 850 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 852 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 853 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 854 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 855 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 856 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 857 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 859 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 860 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 861 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 862 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 864 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 865 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 867 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4E::
# 872 "data/maps/MareS4/scripts.pory"
	lockall
# 873 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 875 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 877 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 878 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 880 "data/maps/MareS4/scripts.pory"
	delay 30
# 881 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 882 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 885 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 887 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp6
# 888 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 890 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 891 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 892 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 893 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 895 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 896 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 898 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian5::
# 904 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_FaceDown
# 905 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 907 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 909 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 910 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 912 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 914 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 915 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 917 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 918 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 919 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 920 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 922 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 924 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_Rutulian5_2
# 927 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
MareS4_Script_Rutulian5_1:
	end

MareS4_Script_Rutulian5_2:
# 925 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian5_1


MareS4_Script_Trigger_Rutulian5A::
# 933 "data/maps/MareS4/scripts.pory"
	lockall
# 934 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 936 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 938 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 939 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 941 "data/maps/MareS4/scripts.pory"
	delay 30
# 942 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 943 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 946 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 948 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 949 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 950 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 951 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 952 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 953 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 955 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 956 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 957 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 958 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 960 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 962 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 964 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5B::
# 969 "data/maps/MareS4/scripts.pory"
	lockall
# 970 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 972 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 974 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 975 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 977 "data/maps/MareS4/scripts.pory"
	delay 30
# 978 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 979 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 981 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 982 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 984 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 986 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 987 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 988 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 989 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 990 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 991 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 993 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 994 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 995 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 996 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 998 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1000 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1002 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5C::
# 1007 "data/maps/MareS4/scripts.pory"
	lockall
# 1008 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1010 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1012 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1013 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1015 "data/maps/MareS4/scripts.pory"
	delay 30
# 1016 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1017 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1019 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1020 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1022 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1024 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1025 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1026 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1027 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1028 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1029 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1031 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1032 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1033 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1034 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1036 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1038 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1040 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5D::
# 1045 "data/maps/MareS4/scripts.pory"
	lockall
# 1046 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1048 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1050 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1051 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1053 "data/maps/MareS4/scripts.pory"
	delay 30
# 1054 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1055 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1057 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1058 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1060 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1062 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1063 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1064 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1065 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1066 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1067 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1069 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1070 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1071 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1072 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1074 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1076 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1078 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5E::
# 1083 "data/maps/MareS4/scripts.pory"
	lockall
# 1084 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1086 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1088 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1089 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1091 "data/maps/MareS4/scripts.pory"
	delay 30
# 1092 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1093 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1095 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1096 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1098 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1100 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1101 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1102 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1103 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1104 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1105 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1107 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1108 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1109 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1110 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1112 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1114 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1116 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5F::
# 1121 "data/maps/MareS4/scripts.pory"
	lockall
# 1122 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1124 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1126 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1127 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1129 "data/maps/MareS4/scripts.pory"
	delay 30
# 1130 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1131 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1133 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1134 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1136 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1138 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1139 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1140 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1141 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1142 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1143 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1145 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1146 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1147 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1148 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1150 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1152 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1154 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5G::
# 1159 "data/maps/MareS4/scripts.pory"
	lockall
# 1160 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1162 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1164 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1165 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1167 "data/maps/MareS4/scripts.pory"
	delay 30
# 1168 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1169 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1171 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1172 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1174 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1176 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1177 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1178 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1179 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1180 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1181 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1183 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1184 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1185 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1186 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1188 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1190 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1192 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5H::
# 1197 "data/maps/MareS4/scripts.pory"
	lockall
# 1198 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1200 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1202 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1203 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1205 "data/maps/MareS4/scripts.pory"
	delay 30
# 1206 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1207 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1209 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1210 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1212 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1214 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1215 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1216 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1217 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1218 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1219 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1221 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1222 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1223 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1224 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1226 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1228 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1230 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5I::
# 1235 "data/maps/MareS4/scripts.pory"
	lockall
# 1236 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1238 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1240 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1241 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1243 "data/maps/MareS4/scripts.pory"
	delay 30
# 1244 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1245 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1247 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1248 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1250 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1252 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp6
# 1253 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1255 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1256 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1257 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1258 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1260 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1262 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1264 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5J::
# 1269 "data/maps/MareS4/scripts.pory"
	lockall
# 1270 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1272 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1274 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1275 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1277 "data/maps/MareS4/scripts.pory"
	delay 30
# 1278 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1279 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1281 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight9
# 1282 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1284 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1286 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1287 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1288 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkLeft
# 1289 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1290 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1291 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1293 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1294 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1295 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1296 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1298 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1300 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1302 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian6::
# 1308 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceUp
# 1309 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1311 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1313 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1314 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1316 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1318 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
# 1319 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1321 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1322 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1323 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1324 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1326 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1328 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_Rutulian6_2
# 1331 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
MareS4_Script_Rutulian6_1:
	end

MareS4_Script_Rutulian6_2:
# 1329 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian6_1


MareS4_Script_Trigger_Rutulian6A::
# 1338 "data/maps/MareS4/scripts.pory"
	lockall
# 1339 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1340 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6B::
# 1344 "data/maps/MareS4/scripts.pory"
	lockall
# 1345 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1346 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6C::
# 1350 "data/maps/MareS4/scripts.pory"
	lockall
# 1351 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1352 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6D::
# 1356 "data/maps/MareS4/scripts.pory"
	lockall
# 1357 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1358 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6E::
# 1362 "data/maps/MareS4/scripts.pory"
	lockall
# 1363 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1364 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6F::
# 1368 "data/maps/MareS4/scripts.pory"
	lockall
# 1369 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1370 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6G::
# 1374 "data/maps/MareS4/scripts.pory"
	lockall
# 1375 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1376 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6H::
# 1380 "data/maps/MareS4/scripts.pory"
	lockall
# 1381 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1382 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6I::
# 1386 "data/maps/MareS4/scripts.pory"
	lockall
# 1387 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1388 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6J::
# 1392 "data/maps/MareS4/scripts.pory"
	lockall
# 1393 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 10
# 1394 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6_Template::
# 1399 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1401 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1403 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1404 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1406 "data/maps/MareS4/scripts.pory"
	delay 30
# 1407 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1408 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1410 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1411 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_3
# 1413 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_4
# 1415 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_5
# 1417 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_6
# 1419 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_7
# 1421 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_8
# 1423 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_9
# 1425 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_10
# 1427 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_11
# 1429 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_12
# 1432 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1433 "data/maps/MareS4/scripts.pory"
	closemessage
# 1434 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1435 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1436 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_1:
# 1439 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1441 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1443 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1444 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_16
# 1446 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_17
# 1450 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_18
# 1454 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_19
# 1458 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_20
# 1462 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_21
# 1466 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_22
# 1470 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_23
# 1472 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_24
# 1478 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_25
# 1485 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1486 "data/maps/MareS4/scripts.pory"
	closemessage
# 1487 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1488 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1489 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_3:
# 1412 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft9
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_4:
# 1414 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_5:
# 1416 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_6:
# 1418 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_7:
# 1420 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_8:
# 1422 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_9:
# 1424 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_10:
# 1426 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_11:
# 1428 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_12:
# 1430 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_14:
# 1492 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1494 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1495 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1496 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1497 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1499 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1501 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1502 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1504 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_16:
# 1445 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_17:
# 1447 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1448 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1449 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_18:
# 1451 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1452 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1453 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_19:
# 1455 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1456 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1457 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_20:
# 1459 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1460 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1461 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_21:
# 1463 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1464 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1465 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_22:
# 1467 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1468 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1469 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_23:
# 1471 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_24:
# 1473 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1474 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1475 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1476 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1477 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_25:
# 1479 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1480 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1481 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1482 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1483 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14


MareS4_Script_Trigger_RutuliDoubleA::
# 1510 "data/maps/MareS4/scripts.pory"
	lockall
# 1511 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1512 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleB::
# 1516 "data/maps/MareS4/scripts.pory"
	lockall
# 1517 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1518 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleC::
# 1522 "data/maps/MareS4/scripts.pory"
	lockall
# 1523 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1524 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleD::
# 1528 "data/maps/MareS4/scripts.pory"
	lockall
# 1529 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1530 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleE::
# 1534 "data/maps/MareS4/scripts.pory"
	lockall
# 1535 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1536 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleF::
# 1540 "data/maps/MareS4/scripts.pory"
	lockall
# 1541 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1542 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleG::
# 1546 "data/maps/MareS4/scripts.pory"
	lockall
# 1547 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1548 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleH::
# 1552 "data/maps/MareS4/scripts.pory"
	lockall
# 1553 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1554 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleI::
# 1558 "data/maps/MareS4/scripts.pory"
	lockall
# 1559 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1560 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_Rutuli56Double_Template::
# 1566 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1568 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1570 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1571 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1572 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1574 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1575 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_3
# 1577 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_4
# 1580 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_5
# 1583 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_6
# 1586 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_7
# 1589 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_8
# 1592 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_9
# 1595 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_10
# 1598 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_11
# 1601 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1602 "data/maps/MareS4/scripts.pory"
	closemessage
# 1603 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1604 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1605 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_1:
# 1608 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1610 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1611 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1613 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre1
# 1615 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1616 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1618 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre2
# 1619 "data/maps/MareS4/scripts.pory"
	closemessage
# 1621 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1622 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost1, TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost2
# 1624 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Post
# 1625 "data/maps/MareS4/scripts.pory"
	closemessage
# 1627 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1628 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1629 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1630 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1631 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_15
# 1643 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_16
# 1655 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_17
# 1667 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_18
# 1679 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_19
# 1691 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_20
# 1703 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_21
# 1712 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_22
# 1721 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_23
# 1731 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1732 "data/maps/MareS4/scripts.pory"
	closemessage
# 1733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1734 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1735 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_3:
# 1576 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_4:
# 1578 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1579 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_5:
# 1581 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1582 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_6:
# 1584 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1585 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_7:
# 1587 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
# 1588 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_8:
# 1590 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
# 1591 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_9:
# 1593 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1594 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_10:
# 1596 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1597 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_11:
# 1599 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_13:
# 1739 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1740 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1741 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1742 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1743 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1744 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1745 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1746 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1748 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1749 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1751 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1752 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1754 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_15:
# 1632 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1633 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1634 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1635 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1636 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1637 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1638 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1639 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1640 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1641 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1642 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_16:
# 1644 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1645 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1646 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1647 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1648 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1649 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1650 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1651 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1652 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1653 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1654 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_17:
# 1656 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1657 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1659 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1660 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1661 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1662 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1663 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1664 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1665 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1666 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_18:
# 1668 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1669 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1670 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1671 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1672 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1673 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1674 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1675 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1676 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1677 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1678 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_19:
# 1680 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1681 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1682 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1683 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1684 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1685 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1686 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1687 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1688 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1689 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1690 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_20:
# 1692 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1693 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1694 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1695 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1696 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1698 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1699 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1700 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1701 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1702 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_21:
# 1704 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1705 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1706 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1707 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1708 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1709 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1710 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1711 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_22:
# 1713 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1714 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1715 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1716 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1717 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1718 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1719 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1720 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_23:
# 1722 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1723 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1725 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1726 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1727 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1728 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1729 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13


MareS4_Script_Rutulian7::
# 1761 "data/maps/MareS4/scripts.pory"
	lockall
# 1763 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1765 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1766 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1767 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1769 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceDown
# 1770 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown
# 1771 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1772 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1773 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1775 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1777 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1778 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1780 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1781 "data/maps/MareS4/scripts.pory"
	closemessage
# 1783 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1785 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1786 "data/maps/MareS4/scripts.pory"
	closemessage
# 1788 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1789 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1790 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1791 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1792 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1794 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1795 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1796 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1797 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1798 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1799 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1800 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1801 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1803 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1805 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian8::
# 1812 "data/maps/MareS4/scripts.pory"
	lockall
# 1814 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1816 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1817 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1818 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1820 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceDown
# 1821 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown
# 1822 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1823 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1824 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1826 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1828 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1829 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1831 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1832 "data/maps/MareS4/scripts.pory"
	closemessage
# 1834 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1836 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1837 "data/maps/MareS4/scripts.pory"
	closemessage
# 1839 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1840 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1841 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1842 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
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


MareS4_Script_Trigger_Doorguards::
# 1862 "data/maps/MareS4/scripts.pory"
	lockall
# 1864 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1866 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1867 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1868 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1870 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceRight
# 1871 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceLeft
# 1872 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1874 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1875 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1877 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1879 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1880 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1882 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1883 "data/maps/MareS4/scripts.pory"
	closemessage
# 1885 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1887 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1888 "data/maps/MareS4/scripts.pory"
	closemessage
# 1890 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown6
# 1891 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown6
# 1892 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1894 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1895 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1896 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1897 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1898 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1899 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1900 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1901 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1903 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1905 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_RetRLostScene::
# 1910 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 10
# 1912 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1913 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1915 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1916 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1918 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1919 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_GoodJob
# 1920 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1922 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1923 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_RetRLostScene_Text_0
# 1924 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1925 "data/maps/MareS4/scripts.pory"
	closemessage
# 1927 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1928 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1929 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1930 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1932 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1933 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_FaceDown
# 1934 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1936 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkUp3
# 1937 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1939 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1940 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Help
# 1941 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1943 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1944 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_WhatsWrong
# 1945 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1947 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1948 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_RetRGone
# 1949 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1951 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1952 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1953 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1954 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1956 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1957 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Terrible
# 1958 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1960 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 1961 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_RunOff
# 1962 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 1964 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1965 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_OrCaptured
# 1966 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1968 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1969 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_TakeAction
# 1970 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1971 "data/maps/MareS4/scripts.pory"
	closemessage
# 1973 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkDown6
# 1974 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_WalkDown6
# 1975 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1977 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceUp
# 1978 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1979 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1980 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 1981 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1982 "data/maps/MareS4/scripts.pory"
	closemessage
# 1983 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1984 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1986 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_FAUSTULUS
# 1987 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ASCANIUS
# 1988 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
# 1989 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_FAUSTULUS
# 1990 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ASCANIUS
	end


MareS4_Script_Aeneas::
# 1996 "data/maps/MareS4/scripts.pory"
	faceplayer
# 1998 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Aeneas_2
MareS4_Script_Aeneas_1:
# 2005 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Aeneas_5
MareS4_Script_Aeneas_4:
# 2047 "data/maps/MareS4/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS4_Script_Aeneas_2:
# 1999 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2000 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 2001 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2002 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_1

MareS4_Script_Aeneas_5:
# 2006 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2007 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Found
# 2009 "data/maps/MareS4/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AENEAS, 1
# 2010 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MareS4_Script_Aeneas_7
# 2015 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 2016 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2018 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding1
# 2019 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2020 "data/maps/MareS4/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AENEAS
# 2022 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_GiveInvitation
# 2024 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2025 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding2
# 2026 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2027 "data/maps/MareS4/scripts.pory"
	closemessage
# 2029 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2030 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_Aeneas_11
MareS4_Script_Aeneas_10:
# 2034 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkDown6
# 2035 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2037 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_AENEAS
# 2038 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 0, 0
# 2039 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 2040 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_AENEAS
# 2042 "data/maps/MareS4/scripts.pory"
	addvar VAR_AENEID_STATE, 1
	end

MareS4_Script_Aeneas_7:
# 2011 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2012 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_4

MareS4_Script_Aeneas_11:
# 2031 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkLeft
# 2032 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Aeneas_10


MareS4_Script_Faustulus::
# 2052 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Faustulus_2
MareS4_Script_Faustulus_1:
# 2057 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Faustulus_4
	return

MareS4_Script_Faustulus_2:
# 2053 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2054 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Search, MSGBOX_NPC
# 2055 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	goto MareS4_Script_Faustulus_1

MareS4_Script_Faustulus_4:
# 2058 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2059 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Found, MSGBOX_NPC
# 2060 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	return


MareS4_Script_Ascanius::
# 2066 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Ascanius_2
MareS4_Script_Ascanius_1:
# 2071 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Ascanius_4
	return

MareS4_Script_Ascanius_2:
# 2067 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2068 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Search, MSGBOX_NPC
# 2069 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	goto MareS4_Script_Ascanius_1

MareS4_Script_Ascanius_4:
# 2072 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2073 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Found, MSGBOX_NPC
# 2074 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	return


MareS4_Script_Romulus::
# 2080 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Romulus_1
	return

MareS4_Script_Romulus_1:
# 2081 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Romulus_Found, MSGBOX_NPC
	return


MareS4_Script_Remus::
# 2087 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Remus_1
	return

MareS4_Script_Remus_1:
# 2088 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Remus_Found, MSGBOX_NPC
	return


MareS4_Script_Beroe::
# 2094 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Beroe_1
	return

MareS4_Script_Beroe_1:
# 2095 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Beroe_Found, MSGBOX_NPC
	return


MareS4_Script_Ulysses_Text_0:
# 337 "data/maps/MareS4/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

MareS4_Script_Trigger_Rutulian6_Template_Text_0:
# 1432 "data/maps/MareS4/scripts.pory"
	.string "ERROR\pVAR_TEMP_9 OOB$"

MareS4_Script_RetRLostScene_Text_0:
# 1923 "data/maps/MareS4/scripts.pory"
	.string "HELP!$"

MareS4_Text_Rutuli56Pre1::
# 2102 "data/maps/MareS4/scripts.pory"
	.string "Warutuli wafight wastrongya.$"

MareS4_Text_Rutuli56Pre2::
# 2107 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus watrust tastop.$"

MareS4_Text_Rutuli56Lost1::
# 2112 "data/maps/MareS4/scripts.pory"
	.string "Wastrong bena!$"

MareS4_Text_Rutuli56Lost2::
# 2117 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus! Wafail!$"

MareS4_Text_Rutuli56Post::
# 2122 "data/maps/MareS4/scripts.pory"
	.string "Back fallya wamust! Wabeat beya!$"

MareS4_Text_DoorguardPre1::
# 2127 "data/maps/MareS4/scripts.pory"
	.string "KaTurnus best katrust men wabe.$"

MareS4_Text_DoorguardPre2::
# 2132 "data/maps/MareS4/scripts.pory"
	.string "Wapast aliveya gona!$"

MareS4_Text_DoorguardLost1::
# 2137 "data/maps/MareS4/scripts.pory"
	.string "What happen?$"

MareS4_Text_DoorguardLost2::
# 2142 "data/maps/MareS4/scripts.pory"
	.string "Sacanna bena!$"

MareS4_Text_DoorguardPost::
# 2147 "data/maps/MareS4/scripts.pory"
	.string "Wa-admit KaTurnus wadefeat wacanna.\p"
	.string "WaHesperia forever waleave wamust.\n"
	.string "Exhile wagoya.$"

MareS4_Text_Aeneas_GoodJob::
# 2151 "data/maps/MareS4/scripts.pory"
	.string "My lad! Good job, you've ran the savages\n"
	.string "off the island. I saw the last of them\l"
	.string "jump in the sea like they were being\l"
	.string "chased by swarms of hornets! Now we\l"
	.string "can begin...$"

MareS4_Text_Ascanius_Help::
# 2158 "data/maps/MareS4/scripts.pory"
	.string "Aeneas! Come quick! Something terrible\n"
	.string "has happened!$"

MareS4_Text_Aeneas_WhatsWrong::
# 2163 "data/maps/MareS4/scripts.pory"
	.string "Ascianus, what is is?$"

MareS4_Text_Ascanius_RetRGone::
# 2167 "data/maps/MareS4/scripts.pory"
	.string "My boys, Remus and Romulus, are gone!$"

MareS4_Text_Aeneas_Terrible::
# 2171 "data/maps/MareS4/scripts.pory"
	.string "They're gone? That's terrible! They\n"
	.string "must be found.$"

MareS4_Text_Faustulus_RunOff::
# 2176 "data/maps/MareS4/scripts.pory"
	.string "Sarun off likely saplay and salostya.$"

MareS4_Text_Ascanius_OrCaptured::
# 2180 "data/maps/MareS4/scripts.pory"
	.string "Or captured by the enemy! Or dead!$"

MareS4_Text_Aeneas_TakeAction::
# 2184 "data/maps/MareS4/scripts.pory"
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
# 2195 "data/maps/MareS4/scripts.pory"
	.string "Be off! Hurry! There is no time to lose!$"

MareS4_Text_Ascanius_Search::
# 2199 "data/maps/MareS4/scripts.pory"
	.string "Oh Remus! Romulus! Come back to me! We\n"
	.string "need to find my boys! I'm so worried!$"

MareS4_Text_Faustulus_Search::
# 2205 "data/maps/MareS4/scripts.pory"
	.string "Maheart know satwins ok beya. Around\n"
	.string "saplay sabeya. Many places beya sahide.\l"
	.string "Behind rock, up tree, in cave wafindya.$"

MareS4_Text_Aeneas_Found::
# 2209 "data/maps/MareS4/scripts.pory"
	.string "At last, I can relax. We found the boys,\n"
	.string "expelled the natives and fully control\l"
	.string "Isla Hesperia. All that remains is to\l"
	.string "build a mighty city upon the seven hills\l"
	.string "of this noble island.$"

MareS4_Text_Faustulus_Found::
# 2218 "data/maps/MareS4/scripts.pory"
	.string "Maheart sawarm masee saboys safeya\n"
	.string "again saplay.$"

MareS4_Text_Beroe_Found::
# 2222 "data/maps/MareS4/scripts.pory"
	.string "Even with the island all to ourselves I\n"
	.string "can't help but feel lost, and vulnerable\l"
	.string "in this exotic wilderness. I miss the\l"
	.string "fields of Ilium... the walls of Troy...$"

MareS4_Text_Ascanius_Found::
# 2229 "data/maps/MareS4/scripts.pory"
	.string "My boys are back! I was deathly afriad\n"
	.string "that I had lost them just like I lost\l"
	.string "their mother on our bitter journey here.$"

MareS4_Text_Romulus_Found::
# 2235 "data/maps/MareS4/scripts.pory"
	.string "When I get older I will build my house\n"
	.string "upon the hill where the she wolf nursed\l"
	.string "us.$"

MareS4_Text_Remus_Found::
# 2240 "data/maps/MareS4/scripts.pory"
	.string "I'm staying far away from that dark\n"
	.string "cave where that monster kept us from\l"
	.string "our father. The furthest southern hill\l"
	.string "is where I will build my house to avoid\l"
	.string "that cursed place.$"

MareS4_Text_Aeneas_Wedding1::
# 2247 "data/maps/MareS4/scripts.pory"
	.string "What's that? You have something to\n"
	.string "give to me?$"

MareS4_Text_GiveInvitation::
# 2251 "data/maps/MareS4/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Aeneas.$"

MareS4_Text_Aeneas_Wedding2::
# 2255 "data/maps/MareS4/scripts.pory"
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

MareS4_Text_UlyssesAnteScylla::
# 2270 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringScylla::
# 2274 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringCharybdis::
# 2278 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesAfterCharybdis::
# 2282 "data/maps/MareS4/scripts.pory"
	.string "$"
