MareS4_MapScripts::
# 27 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS4_MapScripts_MAP_SCRIPT_ON_LOAD
# 37 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 73 "data/maps/MareS4/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS4_MapScripts_MAP_SCRIPT_ON_LOAD:
# 29 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 16
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_3
MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 33 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 18
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 30 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ReverseWhirlpool
	goto MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_1

MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 29 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 19
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_1

MareS4_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 34 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_HideWhirlpool
	return

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 39 "data/maps/MareS4/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS4_F
# 41 "data/maps/MareS4/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 45 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 49 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 53 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 57 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 61 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 12
	goto_if_eq MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 65 "data/maps/MareS4/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 69 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 15
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
	return

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 42 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ARGO, 0, 0
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 46 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_SetupRutuli
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 45 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 50 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_SetupRetRLostScene
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 54 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 58 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRFound
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 62 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowAeneasGone
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_18

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 66 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_HideScylla
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 65 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 17
	goto_if_ne MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	goto MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 70 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowUlysses
	return

MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 69 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 20
	goto_if_lt MareS4_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
	return

MareS4_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 74 "data/maps/MareS4/scripts.pory"
	map_script_2 VAR_AENEID_STATE, 9, MareS4_Script_RetRLostScene
	.2byte 0


MareS4_Script_Transition_MareTropicum::
# 79 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 1
# 80 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 81 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareTranquillum::
# 85 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 2
# 86 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 87 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_MareSubtropicum::
# 91 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 3
# 92 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 93 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHerbaBona::
# 97 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 4
# 98 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 99 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_IslaHesperia::
# 103 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 5
# 104 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 105 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_Transition_ScyllaCharybdis::
# 109 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_5, 6
# 110 "data/maps/MareS4/scripts.pory"
	special TransitionMapMusic
# 111 "data/maps/MareS4/scripts.pory"
	special ShowMapNamePopup
	return


MareS4_Script_SetupRutuli::
# 118 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 8
	goto_if_lt MareS4_Script_SetupRutuli_2
MareS4_Script_SetupRutuli_1:
# 125 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN1, MareS4_Script_SetupRutuli_5
MareS4_Script_SetupRutuli_4:
# 131 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN2, MareS4_Script_SetupRutuli_8
MareS4_Script_SetupRutuli_7:
# 137 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN3, MareS4_Script_SetupRutuli_11
MareS4_Script_SetupRutuli_10:
# 143 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN4, MareS4_Script_SetupRutuli_14
MareS4_Script_SetupRutuli_13:
# 149 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_17
MareS4_Script_SetupRutuli_16:
# 154 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_20
MareS4_Script_SetupRutuli_19:
# 158 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_24
MareS4_Script_SetupRutuli_22:
# 161 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_29
MareS4_Script_SetupRutuli_27:
# 164 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_SetupRutuli_34
MareS4_Script_SetupRutuli_32:
	return

MareS4_Script_SetupRutuli_2:
# 119 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 67, 59
# 120 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 69, 59
# 121 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_FACE_DOWN
	goto MareS4_Script_SetupRutuli_1

MareS4_Script_SetupRutuli_5:
# 126 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 1
# 127 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 47, 75
# 128 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS4_Script_SetupRutuli_4

MareS4_Script_SetupRutuli_8:
# 132 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 1
# 133 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 55, 76
# 134 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	goto MareS4_Script_SetupRutuli_7

MareS4_Script_SetupRutuli_11:
# 138 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 1
# 139 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 52, 71
# 140 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS4_Script_SetupRutuli_10

MareS4_Script_SetupRutuli_14:
# 144 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 1
# 145 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 67, 73
# 146 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS4_Script_SetupRutuli_13

MareS4_Script_SetupRutuli_17:
# 150 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 60, 64
# 151 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS4_Script_SetupRutuli_16

MareS4_Script_SetupRutuli_20:
# 155 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 70, 64
# 156 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_FACE_LEFT
	goto MareS4_Script_SetupRutuli_19

MareS4_Script_SetupRutuli_23:
# 159 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 3
	goto MareS4_Script_SetupRutuli_22

MareS4_Script_SetupRutuli_24:
# 158 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_23
	goto MareS4_Script_SetupRutuli_22

MareS4_Script_SetupRutuli_28:
# 162 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto MareS4_Script_SetupRutuli_27

MareS4_Script_SetupRutuli_29:
# 161 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_28
	goto MareS4_Script_SetupRutuli_27

MareS4_Script_SetupRutuli_33:
# 165 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
	goto MareS4_Script_SetupRutuli_32

MareS4_Script_SetupRutuli_34:
# 164 "data/maps/MareS4/scripts.pory"
	goto_if_unset FLAG_MARES4_RUTULIAN6, MareS4_Script_SetupRutuli_33
	goto MareS4_Script_SetupRutuli_32


MareS4_Script_SetupRetRLostScene::
# 171 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 172 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 67, 61
# 173 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 69, 65
# 174 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_UP
# 175 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 176 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_FACE_UP
	return


MareS4_Script_ShowRetRSearch::
# 181 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 182 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 53, 77
# 183 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 42, 72
# 184 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 185 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 186 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP
	return


MareS4_Script_ShowRetRFound::
# 191 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 69, 61
# 192 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 65, 62
# 193 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 66, 64
# 194 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ROMULUS, 63, 64
# 195 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_REMUS, 67, 66
# 196 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_BEROE, 70, 64
# 197 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 198 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 199 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 200 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 201 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 202 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_BEROE, MOVEMENT_TYPE_FACE_RIGHT
	return


MareS4_Script_ShowAeneasGone::
# 207 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_FAUSTULUS, 65, 62
# 208 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ASCANIUS, 66, 64
# 209 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ROMULUS, 63, 64
# 210 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_REMUS, 67, 66
# 211 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_BEROE, 70, 64
# 212 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_FAUSTULUS, MOVEMENT_TYPE_FACE_UP
# 213 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 214 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 215 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 216 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_BEROE, MOVEMENT_TYPE_FACE_RIGHT
	return


MareS4_Script_HideScylla::
# 221 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_SCYLLA, 0, 0
# 222 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_SCYLLA, MOVEMENT_TYPE_INVISIBLE
	return


MareS4_Script_ShowUlysses::
# 227 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ULYSSES, 73, 54
# 228 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ULYSSES, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
	return


MareS4_Script_ReverseWhirlpool::
# 233 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 47, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 235 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 236 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 237 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 48, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 239 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 49, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 240 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 49, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 241 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 49, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 242 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 49, METATILE_Pacifidlog_WaterCurrent_Southward, FALSE
# 243 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 49, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 245 "data/maps/MareS4/scripts.pory"
	setmetatile 72, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 246 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 247 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 50, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 248 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 249 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 250 "data/maps/MareS4/scripts.pory"
	setmetatile 78, 50, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 252 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 51, METATILE_Pacifidlog_WaterCurrent_Eastward, FALSE
# 253 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 51, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 254 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 51, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 255 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 51, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 256 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 51, METATILE_Pacifidlog_WaterCurrent_Westward, FALSE
# 258 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 259 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 260 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 52, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
# 262 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 53, METATILE_Pacifidlog_WaterCurrent_Northward, FALSE
	return


MareS4_Script_HideWhirlpool::
# 268 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 47, METATILE_General_CalmWater, FALSE
# 270 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 48, METATILE_General_CalmWater, FALSE
# 271 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 48, METATILE_General_CalmWater, FALSE
# 272 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 48, METATILE_General_CalmWater, FALSE
# 274 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 49, METATILE_General_CalmWater, FALSE
# 275 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 49, METATILE_General_CalmWater, FALSE
# 276 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 49, METATILE_General_CalmWater, FALSE
# 277 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 49, METATILE_General_CalmWater, FALSE
# 278 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 49, METATILE_General_CalmWater, FALSE
# 280 "data/maps/MareS4/scripts.pory"
	setmetatile 72, 50, METATILE_General_CalmWater, FALSE
# 281 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 50, METATILE_General_CalmWater, FALSE
# 282 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 50, METATILE_General_CalmWater, FALSE
# 283 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 50, METATILE_General_CalmWater, FALSE
# 284 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 50, METATILE_General_CalmWater, FALSE
# 285 "data/maps/MareS4/scripts.pory"
	setmetatile 78, 50, METATILE_General_CalmWater, FALSE
# 287 "data/maps/MareS4/scripts.pory"
	setmetatile 73, 51, METATILE_General_CalmWater, FALSE
# 288 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 51, METATILE_General_CalmWater, FALSE
# 289 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 51, METATILE_General_CalmWater, FALSE
# 290 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 51, METATILE_General_CalmWater, FALSE
# 291 "data/maps/MareS4/scripts.pory"
	setmetatile 77, 51, METATILE_General_CalmWater, FALSE
# 293 "data/maps/MareS4/scripts.pory"
	setmetatile 74, 52, METATILE_General_CalmWater, FALSE
# 294 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 52, METATILE_General_CalmWater, FALSE
# 295 "data/maps/MareS4/scripts.pory"
	setmetatile 76, 52, METATILE_General_CalmWater, FALSE
# 297 "data/maps/MareS4/scripts.pory"
	setmetatile 75, 53, METATILE_General_CalmWater, FALSE
	return


MareS4_Script_Scylla::
# 303 "data/maps/MareS4/scripts.pory"
	faceplayer
# 304 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 305 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 306 "data/maps/MareS4/scripts.pory"
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_ENCOUNTER
# 307 "data/maps/MareS4/scripts.pory"
	waitmoncry
# 308 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 309 "data/maps/MareS4/scripts.pory"
	callnative DoScyllaBattle
# 310 "data/maps/MareS4/scripts.pory"
	waitstate
# 311 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 312 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_SCYLLA
# 313 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_SCYLLA, 0, 0
# 314 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_SCYLLA, MOVEMENT_TYPE_INVISIBLE
# 315 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_SCYLLA
# 316 "data/maps/MareS4/scripts.pory"
	compare VAR_ULYSSES_STATE, 17
	goto_if_eq MareS4_Script_Scylla_2
MareS4_Script_Scylla_1:
	end

MareS4_Script_Scylla_2:
# 317 "data/maps/MareS4/scripts.pory"
	setvar VAR_ULYSSES_STATE, 18
	goto MareS4_Script_Scylla_1


MareS4_Script_Ulysses::
# 323 "data/maps/MareS4/scripts.pory"
	faceplayer
# 324 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 325 "data/maps/MareS4/scripts.pory"
	switch VAR_ULYSSES_STATE
# 326 "data/maps/MareS4/scripts.pory"
	case 16, MareS4_Script_Ulysses_3
# 329 "data/maps/MareS4/scripts.pory"
	case 17, MareS4_Script_Ulysses_4
# 332 "data/maps/MareS4/scripts.pory"
	case 18, MareS4_Script_Ulysses_5
# 335 "data/maps/MareS4/scripts.pory"
	case 19, MareS4_Script_Ulysses_6
# 339 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Ulysses_Text_0
MareS4_Script_Ulysses_1:
# 341 "data/maps/MareS4/scripts.pory"
	closemessage
# 342 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 343 "data/maps/MareS4/scripts.pory"
	unfaceplayer
	end

MareS4_Script_Ulysses_3:
# 328 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_UlyssesBeginScylla
	goto MareS4_Script_Ulysses_1

MareS4_Script_Ulysses_4:
# 331 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringScylla
	goto MareS4_Script_Ulysses_1

MareS4_Script_Ulysses_5:
# 334 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringCharybdis
	goto MareS4_Script_Ulysses_1

MareS4_Script_Ulysses_6:
# 337 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_UlyssesAfterCharybdis
	goto MareS4_Script_Ulysses_1


MareS4_Script_UlyssesBeginScylla::
# 348 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAnteScylla
# 349 "data/maps/MareS4/scripts.pory"
	closemessage
# 350 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 351 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_ExclamationMark
# 352 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 353 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_FaceRight
# 354 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 355 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_SCYLLA
# 356 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_SCYLLA, 75, 50
# 357 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_SCYLLA, MOVEMENT_TYPE_LOOK_AROUND
# 358 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_SCYLLA
# 359 "data/maps/MareS4/scripts.pory"
	playmoncry SPECIES_TENTACRUEL, CRY_MODE_ENCOUNTER
# 360 "data/maps/MareS4/scripts.pory"
	waitmoncry
# 361 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 362 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_UlyssesBeginScylla_2
# 365 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_FaceLeft
MareS4_Script_UlyssesBeginScylla_1:
# 367 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 368 "data/maps/MareS4/scripts.pory"
	setvar VAR_ULYSSES_STATE, 17
# 369 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ReverseWhirlpool
# 370 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 371 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringScylla
	return

MareS4_Script_UlyssesBeginScylla_2:
# 363 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_FaceDown
	goto MareS4_Script_UlyssesBeginScylla_1


MareS4_Script_UlyssesAfterCharybdis::
# 377 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAfterCharybdis
# 378 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 379 "data/maps/MareS4/scripts.pory"
	closemessage
# 381 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 382 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_UlyssesAfterCharybdis_2
# 388 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_WalkDown
# 389 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 390 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_WalkLeft
# 391 "data/maps/MareS4/scripts.pory"
	waitmovement 0
MareS4_Script_UlyssesAfterCharybdis_1:
# 393 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_WalkDown6
# 394 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 396 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ULYSSES
# 397 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_ULYSSES, 0, 0
# 398 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 399 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ULYSSES
# 401 "data/maps/MareS4/scripts.pory"
	setvar VAR_ULYSSES_STATE, 20
	end

MareS4_Script_UlyssesAfterCharybdis_2:
# 383 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_WalkLeft
# 384 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 385 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ULYSSES, Common_Movement_WalkDown
# 386 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_UlyssesAfterCharybdis_1


MareS4_Script_Whirlpool::
# 408 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 409 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 410 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 411 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 412 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_SetInvisible
# 413 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 414 "data/maps/MareS4/scripts.pory"
	playse SE_M_WHIRLPOOL
# 415 "data/maps/MareS4/scripts.pory"
	waitse
# 416 "data/maps/MareS4/scripts.pory"
	playse SE_M_DIVE
# 417 "data/maps/MareS4/scripts.pory"
	waitse
# 418 "data/maps/MareS4/scripts.pory"
	warpsilent MAP_SUB_MARE, 27, 45
	return


MareS4_Script_Rutulian1::
# 423 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_FaceDown
# 424 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 426 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 428 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 429 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 431 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 433 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 434 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 435 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 436 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 438 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 439 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 440 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 441 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 443 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 444 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
	end


MareS4_Script_Trigger_Rutulian1A::
# 450 "data/maps/MareS4/scripts.pory"
	lockall
# 451 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 453 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 455 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 456 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS4/scripts.pory"
	delay 30
# 459 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 460 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 463 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 465 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkDown
# 466 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 467 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 468 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 469 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp7
# 470 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 472 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 473 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 474 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 475 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 477 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 478 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 480 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1B::
# 485 "data/maps/MareS4/scripts.pory"
	lockall
# 486 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 488 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 490 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 491 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 493 "data/maps/MareS4/scripts.pory"
	delay 30
# 494 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 495 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 498 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 500 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 502 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 503 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 504 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 505 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 506 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 507 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 509 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 510 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 511 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 512 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 514 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 515 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 517 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1C::
# 522 "data/maps/MareS4/scripts.pory"
	lockall
# 523 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 525 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 527 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 528 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 530 "data/maps/MareS4/scripts.pory"
	delay 30
# 531 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 532 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 534 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 535 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 537 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 539 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 540 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 541 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 542 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 543 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 544 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 546 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 547 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 548 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 549 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 551 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 552 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 554 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian2::
# 560 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_FaceRight
# 561 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 563 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 565 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 566 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 568 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 570 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 571 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 572 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkLeft5
# 573 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 574 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp7
# 575 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 577 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 578 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 579 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 580 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 582 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 583 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
	end


MareS4_Script_Trigger_Rutulian2A::
# 589 "data/maps/MareS4/scripts.pory"
	lockall
# 590 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 592 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 594 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 595 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS4/scripts.pory"
	delay 30
# 598 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 599 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 602 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 604 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight3
# 605 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 606 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp
# 607 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 608 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight5
# 609 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 611 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 612 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 613 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 614 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 616 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 617 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 619 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian2B::
# 624 "data/maps/MareS4/scripts.pory"
	lockall
# 625 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 627 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 629 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 630 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 632 "data/maps/MareS4/scripts.pory"
	delay 30
# 633 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 634 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 636 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 637 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 639 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 641 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight
# 642 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 643 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp2
# 644 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 645 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight6
# 646 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 648 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 649 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 650 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 651 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 653 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 654 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 656 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian3::
# 662 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_FaceLeft
# 663 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 665 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 667 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 668 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 670 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 672 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp6
# 673 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 675 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 676 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 677 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 678 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 680 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 681 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
	end


MareS4_Script_Trigger_Rutulian3A::
# 687 "data/maps/MareS4/scripts.pory"
	lockall
# 688 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 690 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 692 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 693 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 695 "data/maps/MareS4/scripts.pory"
	delay 30
# 696 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 697 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 699 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp
# 700 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 702 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 704 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight
# 705 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 706 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp7
# 707 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 709 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 710 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 711 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 712 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 714 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 715 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 717 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian3B::
# 722 "data/maps/MareS4/scripts.pory"
	lockall
# 723 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 725 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 727 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 728 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 730 "data/maps/MareS4/scripts.pory"
	delay 30
# 731 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 732 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 735 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 737 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkLeft
# 738 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 739 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp2
# 740 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 741 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight2
# 742 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 743 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp5
# 744 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 746 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 747 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 748 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 749 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 751 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 752 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 754 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian4::
# 760 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_FaceUp
# 761 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 763 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 765 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 766 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 768 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 770 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft5
# 771 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 772 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp7
# 773 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 775 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 776 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 777 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 778 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 780 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 781 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
	end


MareS4_Script_Trigger_Rutulian4A::
# 787 "data/maps/MareS4/scripts.pory"
	lockall
# 788 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 790 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 792 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 793 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 795 "data/maps/MareS4/scripts.pory"
	delay 30
# 796 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 797 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 799 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft4
# 800 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 802 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 804 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 805 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 806 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 807 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 808 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 809 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 811 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 812 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 813 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 814 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 816 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 817 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 819 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4B::
# 824 "data/maps/MareS4/scripts.pory"
	lockall
# 825 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 827 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 829 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 830 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 832 "data/maps/MareS4/scripts.pory"
	delay 30
# 833 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 834 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 836 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft3
# 837 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 839 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 841 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 842 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 843 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 844 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 845 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 846 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 848 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 849 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 850 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 851 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 853 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 854 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 856 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4C::
# 861 "data/maps/MareS4/scripts.pory"
	lockall
# 862 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 864 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 866 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 867 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 869 "data/maps/MareS4/scripts.pory"
	delay 30
# 870 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 871 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 873 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 874 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 876 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 878 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 879 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 880 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 881 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 882 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 883 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 885 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 886 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 887 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 888 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 890 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 891 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 893 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4D::
# 898 "data/maps/MareS4/scripts.pory"
	lockall
# 899 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 901 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 903 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 904 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 906 "data/maps/MareS4/scripts.pory"
	delay 30
# 907 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 908 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 910 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 911 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 913 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 915 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 916 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 917 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 918 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 919 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 920 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 922 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 923 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 924 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 925 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 927 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 928 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 930 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4E::
# 935 "data/maps/MareS4/scripts.pory"
	lockall
# 936 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 938 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 940 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 941 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 943 "data/maps/MareS4/scripts.pory"
	delay 30
# 944 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 945 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 948 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 950 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp6
# 951 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 953 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 954 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 955 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 956 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 958 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 959 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 961 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian5::
# 967 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_FaceDown
# 968 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 970 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 972 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 973 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 975 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 977 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 978 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 980 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 981 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 982 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 983 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 985 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 987 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_Rutulian5_2
# 990 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
MareS4_Script_Rutulian5_1:
	end

MareS4_Script_Rutulian5_2:
# 988 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian5_1


MareS4_Script_Trigger_Rutulian5A::
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
# 1009 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1011 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1012 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1013 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1014 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1015 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1016 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1018 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1019 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1020 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1021 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1023 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1025 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1027 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5B::
# 1032 "data/maps/MareS4/scripts.pory"
	lockall
# 1033 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1035 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1037 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1038 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1040 "data/maps/MareS4/scripts.pory"
	delay 30
# 1041 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1042 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1044 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1045 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1047 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1049 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1050 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1051 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1052 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1053 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1054 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1056 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1057 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1058 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1059 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1061 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1063 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1065 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5C::
# 1070 "data/maps/MareS4/scripts.pory"
	lockall
# 1071 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1073 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1075 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1076 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1078 "data/maps/MareS4/scripts.pory"
	delay 30
# 1079 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1080 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1082 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1083 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1085 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1087 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1088 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1089 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1090 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1091 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1092 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1094 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1095 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1096 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1097 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1099 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1101 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1103 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5D::
# 1108 "data/maps/MareS4/scripts.pory"
	lockall
# 1109 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1111 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1113 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1114 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1116 "data/maps/MareS4/scripts.pory"
	delay 30
# 1117 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1118 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1120 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1121 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1123 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1125 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1126 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1127 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1128 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1129 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1130 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1132 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1133 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1134 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1135 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1137 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1139 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1141 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5E::
# 1146 "data/maps/MareS4/scripts.pory"
	lockall
# 1147 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1149 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1151 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1152 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1154 "data/maps/MareS4/scripts.pory"
	delay 30
# 1155 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1156 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1158 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1159 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1161 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1163 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1164 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1165 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1166 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1167 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1168 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1170 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1171 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1172 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1173 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1175 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1177 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1179 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5F::
# 1184 "data/maps/MareS4/scripts.pory"
	lockall
# 1185 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1187 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1189 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1190 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1192 "data/maps/MareS4/scripts.pory"
	delay 30
# 1193 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1194 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1196 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1197 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1199 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1201 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1202 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1203 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1204 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1205 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1206 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1208 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1209 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1210 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1211 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1213 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1215 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1217 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5G::
# 1222 "data/maps/MareS4/scripts.pory"
	lockall
# 1223 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1225 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1227 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1228 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1230 "data/maps/MareS4/scripts.pory"
	delay 30
# 1231 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1232 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1234 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1235 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1237 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1239 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1240 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1241 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1242 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1243 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1244 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1246 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1247 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1248 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1249 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1251 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1253 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1255 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5H::
# 1260 "data/maps/MareS4/scripts.pory"
	lockall
# 1261 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1263 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1265 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1266 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1268 "data/maps/MareS4/scripts.pory"
	delay 30
# 1269 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1270 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1272 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1273 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1275 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1277 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1278 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1279 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1280 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1281 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1282 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1284 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1285 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1286 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1287 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1289 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1291 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1293 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5I::
# 1298 "data/maps/MareS4/scripts.pory"
	lockall
# 1299 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1301 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1303 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1304 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1306 "data/maps/MareS4/scripts.pory"
	delay 30
# 1307 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1308 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1310 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1311 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1313 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1315 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp6
# 1316 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1318 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1319 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1320 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1321 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1323 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1325 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1327 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5J::
# 1332 "data/maps/MareS4/scripts.pory"
	lockall
# 1333 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1335 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1337 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1338 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1340 "data/maps/MareS4/scripts.pory"
	delay 30
# 1341 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1342 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1344 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight9
# 1345 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1347 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1349 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1350 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1351 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkLeft
# 1352 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1353 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1354 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1356 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1357 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1358 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1359 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1361 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1363 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1365 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian6::
# 1371 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceUp
# 1372 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1374 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1376 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1377 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1379 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1381 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
# 1382 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1384 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1385 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1386 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1387 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1389 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1391 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_Rutulian6_2
# 1394 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
MareS4_Script_Rutulian6_1:
	end

MareS4_Script_Rutulian6_2:
# 1392 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian6_1


MareS4_Script_Trigger_Rutulian6A::
# 1401 "data/maps/MareS4/scripts.pory"
	lockall
# 1402 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1403 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6B::
# 1407 "data/maps/MareS4/scripts.pory"
	lockall
# 1408 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1409 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6C::
# 1413 "data/maps/MareS4/scripts.pory"
	lockall
# 1414 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1415 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6D::
# 1419 "data/maps/MareS4/scripts.pory"
	lockall
# 1420 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1421 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6E::
# 1425 "data/maps/MareS4/scripts.pory"
	lockall
# 1426 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1427 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6F::
# 1431 "data/maps/MareS4/scripts.pory"
	lockall
# 1432 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1433 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6G::
# 1437 "data/maps/MareS4/scripts.pory"
	lockall
# 1438 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1439 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6H::
# 1443 "data/maps/MareS4/scripts.pory"
	lockall
# 1444 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1445 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6I::
# 1449 "data/maps/MareS4/scripts.pory"
	lockall
# 1450 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1451 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6J::
# 1455 "data/maps/MareS4/scripts.pory"
	lockall
# 1456 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 10
# 1457 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6_Template::
# 1462 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1464 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1466 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1467 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1469 "data/maps/MareS4/scripts.pory"
	delay 30
# 1470 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1471 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1473 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1474 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_3
# 1476 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_4
# 1478 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_5
# 1480 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_6
# 1482 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_7
# 1484 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_8
# 1486 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_9
# 1488 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_10
# 1490 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_11
# 1492 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_12
# 1495 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1496 "data/maps/MareS4/scripts.pory"
	closemessage
# 1497 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1498 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1499 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_1:
# 1502 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1504 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1506 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1507 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_16
# 1509 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_17
# 1513 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_18
# 1517 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_19
# 1521 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_20
# 1525 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_21
# 1529 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_22
# 1533 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_23
# 1535 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_24
# 1541 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_25
# 1548 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1549 "data/maps/MareS4/scripts.pory"
	closemessage
# 1550 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1551 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1552 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_3:
# 1475 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft9
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_4:
# 1477 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_5:
# 1479 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_6:
# 1481 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_7:
# 1483 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_8:
# 1485 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_9:
# 1487 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_10:
# 1489 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_11:
# 1491 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_12:
# 1493 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_14:
# 1555 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1557 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1558 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1559 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1560 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1562 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1564 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1565 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1567 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_16:
# 1508 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_17:
# 1510 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1511 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1512 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_18:
# 1514 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1515 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1516 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_19:
# 1518 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1519 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1520 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_20:
# 1522 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1523 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1524 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_21:
# 1526 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1527 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1528 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_22:
# 1530 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1531 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1532 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_23:
# 1534 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_24:
# 1536 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1537 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1538 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1539 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1540 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_25:
# 1542 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1543 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1544 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1545 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1546 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14


MareS4_Script_Trigger_RutuliDoubleA::
# 1573 "data/maps/MareS4/scripts.pory"
	lockall
# 1574 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1575 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleB::
# 1579 "data/maps/MareS4/scripts.pory"
	lockall
# 1580 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1581 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleC::
# 1585 "data/maps/MareS4/scripts.pory"
	lockall
# 1586 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1587 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleD::
# 1591 "data/maps/MareS4/scripts.pory"
	lockall
# 1592 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1593 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleE::
# 1597 "data/maps/MareS4/scripts.pory"
	lockall
# 1598 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1599 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleF::
# 1603 "data/maps/MareS4/scripts.pory"
	lockall
# 1604 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1605 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleG::
# 1609 "data/maps/MareS4/scripts.pory"
	lockall
# 1610 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1611 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleH::
# 1615 "data/maps/MareS4/scripts.pory"
	lockall
# 1616 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1617 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleI::
# 1621 "data/maps/MareS4/scripts.pory"
	lockall
# 1622 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1623 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_Rutuli56Double_Template::
# 1629 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1631 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1633 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1634 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1635 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1637 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1638 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_3
# 1640 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_4
# 1643 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_5
# 1646 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_6
# 1649 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_7
# 1652 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_8
# 1655 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_9
# 1658 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_10
# 1661 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_11
# 1664 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1665 "data/maps/MareS4/scripts.pory"
	closemessage
# 1666 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1667 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1668 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_1:
# 1671 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1673 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1674 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1676 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre1
# 1678 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1679 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1681 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre2
# 1682 "data/maps/MareS4/scripts.pory"
	closemessage
# 1684 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1685 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost1, TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost2
# 1687 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Post
# 1688 "data/maps/MareS4/scripts.pory"
	closemessage
# 1690 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1691 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1692 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1693 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1694 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_15
# 1706 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_16
# 1718 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_17
# 1730 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_18
# 1742 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_19
# 1754 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_20
# 1766 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_21
# 1775 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_22
# 1784 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_23
# 1794 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1795 "data/maps/MareS4/scripts.pory"
	closemessage
# 1796 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1797 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1798 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_3:
# 1639 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_4:
# 1641 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1642 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_5:
# 1644 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1645 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_6:
# 1647 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1648 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_7:
# 1650 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
# 1651 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_8:
# 1653 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
# 1654 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_9:
# 1656 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1657 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_10:
# 1659 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1660 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_11:
# 1662 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_13:
# 1802 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1803 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1804 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1805 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1806 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1807 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1808 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1809 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1811 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1812 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1814 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1815 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1817 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_15:
# 1695 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1696 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1698 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1699 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1700 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1701 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1702 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1703 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1704 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1705 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_16:
# 1707 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1708 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1709 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1710 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1711 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1712 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1713 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1714 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1715 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1716 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1717 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_17:
# 1719 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1720 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1721 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1722 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1723 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1725 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1726 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1727 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1728 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1729 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_18:
# 1731 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1732 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1734 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1735 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1736 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1737 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1738 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1739 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1740 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1741 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_19:
# 1743 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1744 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1745 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1746 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1747 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1748 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1749 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1750 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1751 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1752 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1753 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_20:
# 1755 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1756 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1757 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1758 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1759 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1760 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1761 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1762 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1763 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1764 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1765 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_21:
# 1767 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1768 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1769 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1770 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1771 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1772 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1773 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1774 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_22:
# 1776 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1777 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1778 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1779 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1780 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1781 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1782 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1783 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_23:
# 1785 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1786 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1787 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1788 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1789 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1790 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1791 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1792 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13


MareS4_Script_Rutulian7::
# 1824 "data/maps/MareS4/scripts.pory"
	lockall
# 1826 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1828 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1829 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1830 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1832 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceDown
# 1833 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown
# 1834 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1835 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1836 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1838 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1840 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1841 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1843 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1844 "data/maps/MareS4/scripts.pory"
	closemessage
# 1846 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1848 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1849 "data/maps/MareS4/scripts.pory"
	closemessage
# 1851 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1852 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1853 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1854 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1855 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1857 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1858 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1859 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1860 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1861 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1862 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1863 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1864 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1866 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1868 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian8::
# 1875 "data/maps/MareS4/scripts.pory"
	lockall
# 1877 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1879 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1880 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1881 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1883 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceDown
# 1884 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown
# 1885 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1886 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1887 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1889 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1891 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1892 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1894 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1895 "data/maps/MareS4/scripts.pory"
	closemessage
# 1897 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1899 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1900 "data/maps/MareS4/scripts.pory"
	closemessage
# 1902 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1903 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1904 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1905 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1906 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1908 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1909 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1910 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1911 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1912 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1913 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1914 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1915 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1917 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1919 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Doorguards::
# 1925 "data/maps/MareS4/scripts.pory"
	lockall
# 1927 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1929 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1930 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1931 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1933 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceRight
# 1934 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceLeft
# 1935 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1937 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1938 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1940 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1942 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1943 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1945 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1946 "data/maps/MareS4/scripts.pory"
	closemessage
# 1948 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1950 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1951 "data/maps/MareS4/scripts.pory"
	closemessage
# 1953 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown6
# 1954 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown6
# 1955 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1957 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1958 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1959 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1960 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1961 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1962 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1963 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1964 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1966 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1968 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_RetRLostScene::
# 1973 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 10
# 1975 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1976 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1978 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1979 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1981 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1982 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_GoodJob
# 1983 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1985 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1986 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_RetRLostScene_Text_0
# 1987 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1988 "data/maps/MareS4/scripts.pory"
	closemessage
# 1990 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1991 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1992 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1993 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1995 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1996 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_FaceDown
# 1997 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1999 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkUp3
# 2000 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2002 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2003 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Help
# 2004 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 2006 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2007 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_WhatsWrong
# 2008 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2010 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2011 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_RetRGone
# 2012 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 2014 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 2015 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 2016 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 2017 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2019 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2020 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Terrible
# 2021 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2023 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2024 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_RunOff
# 2025 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 2027 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2028 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_OrCaptured
# 2029 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 2031 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2032 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_TakeAction
# 2033 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2034 "data/maps/MareS4/scripts.pory"
	closemessage
# 2036 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkDown6
# 2037 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_WalkDown6
# 2038 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2040 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceUp
# 2041 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2042 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2043 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 2044 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2045 "data/maps/MareS4/scripts.pory"
	closemessage
# 2046 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 2047 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2049 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_FAUSTULUS
# 2050 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ASCANIUS
# 2051 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
# 2052 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_FAUSTULUS
# 2053 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ASCANIUS
	end


MareS4_Script_Aeneas::
# 2059 "data/maps/MareS4/scripts.pory"
	faceplayer
# 2061 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Aeneas_2
MareS4_Script_Aeneas_1:
# 2068 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Aeneas_5
MareS4_Script_Aeneas_4:
# 2110 "data/maps/MareS4/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS4_Script_Aeneas_2:
# 2062 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2063 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 2064 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2065 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_1

MareS4_Script_Aeneas_5:
# 2069 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2070 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Found
# 2072 "data/maps/MareS4/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AENEAS, 1
# 2073 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MareS4_Script_Aeneas_7
# 2078 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 2079 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2081 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding1
# 2082 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2083 "data/maps/MareS4/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AENEAS
# 2085 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_GiveInvitation
# 2087 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2088 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding2
# 2089 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2090 "data/maps/MareS4/scripts.pory"
	closemessage
# 2092 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2093 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_Aeneas_11
MareS4_Script_Aeneas_10:
# 2097 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkDown6
# 2098 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2100 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_AENEAS
# 2101 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 0, 0
# 2102 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 2103 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_AENEAS
# 2105 "data/maps/MareS4/scripts.pory"
	addvar VAR_AENEID_STATE, 1
	end

MareS4_Script_Aeneas_7:
# 2074 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2075 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_4

MareS4_Script_Aeneas_11:
# 2094 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkLeft
# 2095 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Aeneas_10


MareS4_Script_Faustulus::
# 2115 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Faustulus_2
MareS4_Script_Faustulus_1:
# 2120 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Faustulus_4
	return

MareS4_Script_Faustulus_2:
# 2116 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2117 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Search, MSGBOX_NPC
# 2118 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	goto MareS4_Script_Faustulus_1

MareS4_Script_Faustulus_4:
# 2121 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2122 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Found, MSGBOX_NPC
# 2123 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	return


MareS4_Script_Ascanius::
# 2129 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Ascanius_2
MareS4_Script_Ascanius_1:
# 2134 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Ascanius_4
	return

MareS4_Script_Ascanius_2:
# 2130 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2131 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Search, MSGBOX_NPC
# 2132 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	goto MareS4_Script_Ascanius_1

MareS4_Script_Ascanius_4:
# 2135 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2136 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Found, MSGBOX_NPC
# 2137 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	return


MareS4_Script_Romulus::
# 2143 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Romulus_1
	return

MareS4_Script_Romulus_1:
# 2144 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Romulus_Found, MSGBOX_NPC
	return


MareS4_Script_Remus::
# 2150 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Remus_1
	return

MareS4_Script_Remus_1:
# 2151 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Remus_Found, MSGBOX_NPC
	return


MareS4_Script_Beroe::
# 2157 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Beroe_1
	return

MareS4_Script_Beroe_1:
# 2158 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Beroe_Found, MSGBOX_NPC
	return


MareS4_Script_Ulysses_Text_0:
# 339 "data/maps/MareS4/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

MareS4_Script_Trigger_Rutulian6_Template_Text_0:
# 1495 "data/maps/MareS4/scripts.pory"
	.string "ERROR\pVAR_TEMP_9 OOB$"

MareS4_Script_RetRLostScene_Text_0:
# 1986 "data/maps/MareS4/scripts.pory"
	.string "HELP!$"

MareS4_Text_Rutuli56Pre1::
# 2165 "data/maps/MareS4/scripts.pory"
	.string "Warutuli wafight wastrongya.$"

MareS4_Text_Rutuli56Pre2::
# 2170 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus watrust tastop.$"

MareS4_Text_Rutuli56Lost1::
# 2175 "data/maps/MareS4/scripts.pory"
	.string "Wastrong bena!$"

MareS4_Text_Rutuli56Lost2::
# 2180 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus! Wafail!$"

MareS4_Text_Rutuli56Post::
# 2185 "data/maps/MareS4/scripts.pory"
	.string "Back fallya wamust! Wabeat beya!$"

MareS4_Text_DoorguardPre1::
# 2190 "data/maps/MareS4/scripts.pory"
	.string "KaTurnus best katrust men wabe.$"

MareS4_Text_DoorguardPre2::
# 2195 "data/maps/MareS4/scripts.pory"
	.string "Wapast aliveya gona!$"

MareS4_Text_DoorguardLost1::
# 2200 "data/maps/MareS4/scripts.pory"
	.string "What happen?$"

MareS4_Text_DoorguardLost2::
# 2205 "data/maps/MareS4/scripts.pory"
	.string "Sacanna bena!$"

MareS4_Text_DoorguardPost::
# 2210 "data/maps/MareS4/scripts.pory"
	.string "Wa-admit KaTurnus wadefeat wacanna.\p"
	.string "WaHesperia forever waleave wamust.\n"
	.string "Exhile wagoya.$"

MareS4_Text_Aeneas_GoodJob::
# 2214 "data/maps/MareS4/scripts.pory"
	.string "My lad! Good job, you've ran the savages\n"
	.string "off the island. I saw the last of them\l"
	.string "jump in the sea like they were being\l"
	.string "chased by swarms of hornets! Now we\l"
	.string "can begin...$"

MareS4_Text_Ascanius_Help::
# 2221 "data/maps/MareS4/scripts.pory"
	.string "Aeneas! Come quick! Something terrible\n"
	.string "has happened!$"

MareS4_Text_Aeneas_WhatsWrong::
# 2226 "data/maps/MareS4/scripts.pory"
	.string "Ascianus, what is is?$"

MareS4_Text_Ascanius_RetRGone::
# 2230 "data/maps/MareS4/scripts.pory"
	.string "My boys, Remus and Romulus, are gone!$"

MareS4_Text_Aeneas_Terrible::
# 2234 "data/maps/MareS4/scripts.pory"
	.string "They're gone? That's terrible! They\n"
	.string "must be found.$"

MareS4_Text_Faustulus_RunOff::
# 2239 "data/maps/MareS4/scripts.pory"
	.string "Sarun off likely saplay and salostya.$"

MareS4_Text_Ascanius_OrCaptured::
# 2243 "data/maps/MareS4/scripts.pory"
	.string "Or captured by the enemy! Or dead!$"

MareS4_Text_Aeneas_TakeAction::
# 2247 "data/maps/MareS4/scripts.pory"
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
# 2258 "data/maps/MareS4/scripts.pory"
	.string "Be off! Hurry! There is no time to lose!$"

MareS4_Text_Ascanius_Search::
# 2262 "data/maps/MareS4/scripts.pory"
	.string "Oh Remus! Romulus! Come back to me! We\n"
	.string "need to find my boys! I'm so worried!$"

MareS4_Text_Faustulus_Search::
# 2268 "data/maps/MareS4/scripts.pory"
	.string "Maheart know satwins ok beya. Around\n"
	.string "saplay sabeya. Many places beya sahide.\l"
	.string "Behind rock, up tree, in cave wafindya.$"

MareS4_Text_Aeneas_Found::
# 2272 "data/maps/MareS4/scripts.pory"
	.string "At last, I can relax. We found the boys,\n"
	.string "expelled the natives and fully control\l"
	.string "Isla Hesperia. All that remains is to\l"
	.string "build a mighty city upon the seven hills\l"
	.string "of this noble island.$"

MareS4_Text_Faustulus_Found::
# 2281 "data/maps/MareS4/scripts.pory"
	.string "Maheart sawarm masee saboys safeya\n"
	.string "again saplay.$"

MareS4_Text_Beroe_Found::
# 2285 "data/maps/MareS4/scripts.pory"
	.string "Even with the island all to ourselves I\n"
	.string "can't help but feel lost, and vulnerable\l"
	.string "in this exotic wilderness. I miss the\l"
	.string "fields of Ilium... the walls of Troy...$"

MareS4_Text_Ascanius_Found::
# 2292 "data/maps/MareS4/scripts.pory"
	.string "My boys are back! I was deathly afriad\n"
	.string "that I had lost them just like I lost\l"
	.string "their mother on our bitter journey here.$"

MareS4_Text_Romulus_Found::
# 2298 "data/maps/MareS4/scripts.pory"
	.string "When I get older I will build my house\n"
	.string "upon the hill where the she wolf nursed\l"
	.string "us.$"

MareS4_Text_Remus_Found::
# 2303 "data/maps/MareS4/scripts.pory"
	.string "I'm staying far away from that dark\n"
	.string "cave where that monster kept us from\l"
	.string "our father. The furthest southern hill\l"
	.string "is where I will build my house to avoid\l"
	.string "that cursed place.$"

MareS4_Text_Aeneas_Wedding1::
# 2310 "data/maps/MareS4/scripts.pory"
	.string "What's that? You have something to\n"
	.string "give to me?$"

MareS4_Text_GiveInvitation::
# 2314 "data/maps/MareS4/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Aeneas.$"

MareS4_Text_Aeneas_Wedding2::
# 2318 "data/maps/MareS4/scripts.pory"
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
# 2333 "data/maps/MareS4/scripts.pory"
	.string "Oh no, {PLAYER}! It seem we cannot go\n"
	.string "on. That impassable whirlpool blocks\l"
	.string "the way forward. We could not hope to\l"
	.string "get across!$"

MareS4_Text_UlyssesDuringScylla::
# 2339 "data/maps/MareS4/scripts.pory"
	.string "That sea monster must be responsible\n"
	.string "for the whirlpool. Quick! Get down there\l"
	.string "and find a way to drive away the\l"
	.string "monster and clear the whirlpool so we\l"
	.string "can journey on.$"

MareS4_Text_UlyssesDuringCharybdis::
# 2346 "data/maps/MareS4/scripts.pory"
	.string "The monster's gone, but the whirlpool\n"
	.string "remains. There must be something else\l"
	.string "responsible. Get back down there and\l"
	.string "try to find a way to clear that\l"
	.string "whirlpool so we can move on.$"

MareS4_Text_UlyssesAfterCharybdis::
# 2353 "data/maps/MareS4/scripts.pory"
	.string "I can't believe...I mean, you did it\n"
	.string "{PLAYER}! You've triumphed over the\l"
	.string "deep sea monster and cleared the\l"
	.string "treacherous whirlpool. Now we can\l"
	.string "finally resume the long journey to\l"
	.string "Nestor's house, to my dear friend's\l"
	.string "wedding.$"
