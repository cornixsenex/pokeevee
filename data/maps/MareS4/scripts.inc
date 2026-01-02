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
	case 16, MareS4_Script_Ulysses_2
# 329 "data/maps/MareS4/scripts.pory"
	case 17, MareS4_Script_Ulysses_3
# 332 "data/maps/MareS4/scripts.pory"
	case 18, MareS4_Script_Ulysses_4
# 335 "data/maps/MareS4/scripts.pory"
	case 19, MareS4_Script_Ulysses_5
# 339 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Ulysses_Text_0
# 340 "data/maps/MareS4/scripts.pory"
	closemessage
# 341 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
	end

MareS4_Script_Ulysses_2:
# 328 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAnteScylla
	return

MareS4_Script_Ulysses_3:
# 331 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringScylla
	return

MareS4_Script_Ulysses_4:
# 334 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesDuringCharybdis
	return

MareS4_Script_Ulysses_5:
# 337 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_UlyssesAfterCharybdis
	return


MareS4_Script_UlyssesAfterCharybdis::
# 348 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_UlyssesAfterCharybdis
# 349 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 350 "data/maps/MareS4/scripts.pory"
	closemessage
	end


MareS4_Script_Whirlpool::
# 360 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 361 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 362 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 363 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 364 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_SetInvisible
# 365 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 366 "data/maps/MareS4/scripts.pory"
	playse SE_M_WHIRLPOOL
# 367 "data/maps/MareS4/scripts.pory"
	waitse
# 368 "data/maps/MareS4/scripts.pory"
	playse SE_M_DIVE
# 369 "data/maps/MareS4/scripts.pory"
	waitse
# 370 "data/maps/MareS4/scripts.pory"
	warpsilent MAP_SUB_MARE, 27, 45
	return


MareS4_Script_Rutulian1::
# 375 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_FaceDown
# 376 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 378 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 380 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 381 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 383 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 385 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 386 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 387 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 388 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 390 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 391 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 392 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 393 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 395 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 396 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
	end


MareS4_Script_Trigger_Rutulian1A::
# 402 "data/maps/MareS4/scripts.pory"
	lockall
# 403 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 405 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 407 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 408 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 410 "data/maps/MareS4/scripts.pory"
	delay 30
# 411 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 412 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 415 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 417 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkDown
# 418 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 419 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 420 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 421 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp7
# 422 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 424 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 425 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 426 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 427 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 429 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 430 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 432 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1B::
# 437 "data/maps/MareS4/scripts.pory"
	lockall
# 438 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 440 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 442 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 443 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 445 "data/maps/MareS4/scripts.pory"
	delay 30
# 446 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 447 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 449 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 450 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 452 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 454 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 455 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 456 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 457 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 459 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 461 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 462 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 463 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 464 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 466 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 467 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 469 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1C::
# 474 "data/maps/MareS4/scripts.pory"
	lockall
# 475 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 477 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 479 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 480 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 482 "data/maps/MareS4/scripts.pory"
	delay 30
# 483 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 484 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 486 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 487 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 489 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 491 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 492 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 493 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 494 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 495 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 496 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 498 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 499 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 500 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 501 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 503 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 504 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 506 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian2::
# 512 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_FaceRight
# 513 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 515 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 517 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 518 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 520 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 522 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 523 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 524 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkLeft5
# 525 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 526 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp7
# 527 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 529 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 530 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 531 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 532 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 534 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 535 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
	end


MareS4_Script_Trigger_Rutulian2A::
# 541 "data/maps/MareS4/scripts.pory"
	lockall
# 542 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 544 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 546 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 547 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 549 "data/maps/MareS4/scripts.pory"
	delay 30
# 550 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 551 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 554 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 556 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight3
# 557 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 558 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp
# 559 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 560 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight5
# 561 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 563 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 564 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 565 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 566 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 568 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 569 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 571 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian2B::
# 576 "data/maps/MareS4/scripts.pory"
	lockall
# 577 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 579 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 581 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 582 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 584 "data/maps/MareS4/scripts.pory"
	delay 30
# 585 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 586 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 588 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 589 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 591 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 593 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight
# 594 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 595 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp2
# 596 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight6
# 598 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 600 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 601 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 602 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 603 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 605 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 606 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 608 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian3::
# 614 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_FaceLeft
# 615 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 617 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 619 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 620 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 622 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 624 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp6
# 625 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 627 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 628 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 629 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 630 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 632 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 633 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
	end


MareS4_Script_Trigger_Rutulian3A::
# 639 "data/maps/MareS4/scripts.pory"
	lockall
# 640 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 642 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 644 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 645 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 647 "data/maps/MareS4/scripts.pory"
	delay 30
# 648 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 649 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 651 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp
# 652 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 654 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 656 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight
# 657 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp7
# 659 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 661 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 662 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 663 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 664 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 666 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 667 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 669 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian3B::
# 674 "data/maps/MareS4/scripts.pory"
	lockall
# 675 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 677 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 679 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 680 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 682 "data/maps/MareS4/scripts.pory"
	delay 30
# 683 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 684 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 687 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 689 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkLeft
# 690 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 691 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp2
# 692 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 693 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight2
# 694 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 695 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp5
# 696 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 698 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 699 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 700 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 701 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 703 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 704 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 706 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian4::
# 712 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_FaceUp
# 713 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 715 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 717 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 718 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 720 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 722 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft5
# 723 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp7
# 725 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 727 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 728 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 729 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 730 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 732 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 733 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
	end


MareS4_Script_Trigger_Rutulian4A::
# 739 "data/maps/MareS4/scripts.pory"
	lockall
# 740 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 742 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 744 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 745 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 747 "data/maps/MareS4/scripts.pory"
	delay 30
# 748 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 749 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 751 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft4
# 752 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 754 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 756 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 757 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 758 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 759 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 760 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 761 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 763 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 764 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 765 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 766 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 768 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 769 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 771 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4B::
# 776 "data/maps/MareS4/scripts.pory"
	lockall
# 777 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 779 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 781 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 782 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 784 "data/maps/MareS4/scripts.pory"
	delay 30
# 785 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 786 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 788 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft3
# 789 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 791 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 793 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 794 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 795 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 796 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 797 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 798 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 800 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 801 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 802 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 803 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 805 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 806 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 808 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4C::
# 813 "data/maps/MareS4/scripts.pory"
	lockall
# 814 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 816 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 818 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 819 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 821 "data/maps/MareS4/scripts.pory"
	delay 30
# 822 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 823 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 825 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 826 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 828 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 830 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 831 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 832 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 833 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 834 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 835 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 837 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 838 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 839 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 840 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 842 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 843 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 845 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4D::
# 850 "data/maps/MareS4/scripts.pory"
	lockall
# 851 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 853 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 855 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 856 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 858 "data/maps/MareS4/scripts.pory"
	delay 30
# 859 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 860 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 862 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 863 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 865 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 867 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 868 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 869 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 870 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 871 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 872 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 874 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 875 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 876 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 877 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 879 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 880 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 882 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4E::
# 887 "data/maps/MareS4/scripts.pory"
	lockall
# 888 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 890 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 892 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 893 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 895 "data/maps/MareS4/scripts.pory"
	delay 30
# 896 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 897 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 900 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 902 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp6
# 903 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 905 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 906 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 907 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 908 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 910 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 911 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 913 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian5::
# 919 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_FaceDown
# 920 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 922 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 924 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 925 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 927 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 929 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 930 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 932 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 933 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 934 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 935 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 937 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 939 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_Rutulian5_2
# 942 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
MareS4_Script_Rutulian5_1:
	end

MareS4_Script_Rutulian5_2:
# 940 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian5_1


MareS4_Script_Trigger_Rutulian5A::
# 948 "data/maps/MareS4/scripts.pory"
	lockall
# 949 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 951 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 953 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 954 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 956 "data/maps/MareS4/scripts.pory"
	delay 30
# 957 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 958 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 961 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 963 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 964 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 965 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 966 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 967 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 968 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 970 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 971 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 972 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 973 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 975 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 977 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 979 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5B::
# 984 "data/maps/MareS4/scripts.pory"
	lockall
# 985 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 987 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 989 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 990 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 992 "data/maps/MareS4/scripts.pory"
	delay 30
# 993 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 994 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 996 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 997 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 999 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1001 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1002 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1003 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1004 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1005 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1006 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1008 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1009 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1010 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1011 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1013 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1015 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1017 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5C::
# 1022 "data/maps/MareS4/scripts.pory"
	lockall
# 1023 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1025 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1027 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1028 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1030 "data/maps/MareS4/scripts.pory"
	delay 30
# 1031 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1032 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1034 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1035 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1037 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1039 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1040 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1041 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1042 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1043 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1044 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1046 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1047 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1048 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1049 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1051 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1053 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1055 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5D::
# 1060 "data/maps/MareS4/scripts.pory"
	lockall
# 1061 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1063 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1065 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1066 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1068 "data/maps/MareS4/scripts.pory"
	delay 30
# 1069 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1070 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1072 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1073 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1075 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1077 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1078 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1079 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1080 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1081 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1082 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1084 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1085 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1086 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1087 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1089 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1091 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1093 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5E::
# 1098 "data/maps/MareS4/scripts.pory"
	lockall
# 1099 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1101 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1103 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1104 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1106 "data/maps/MareS4/scripts.pory"
	delay 30
# 1107 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1108 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1110 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1111 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1113 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1115 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1116 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1117 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1118 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1119 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1120 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1122 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1123 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1124 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1125 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1127 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1129 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1131 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5F::
# 1136 "data/maps/MareS4/scripts.pory"
	lockall
# 1137 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1139 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1141 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1142 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1144 "data/maps/MareS4/scripts.pory"
	delay 30
# 1145 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1146 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1148 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1149 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1151 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1153 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1154 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1155 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1156 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1157 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1158 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1160 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1161 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1162 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1163 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1165 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1167 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1169 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5G::
# 1174 "data/maps/MareS4/scripts.pory"
	lockall
# 1175 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1177 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1179 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1180 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1182 "data/maps/MareS4/scripts.pory"
	delay 30
# 1183 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1184 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1186 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1187 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1189 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1191 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1192 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1193 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1194 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1195 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1196 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1198 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1199 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1200 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1201 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1203 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1205 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1207 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5H::
# 1212 "data/maps/MareS4/scripts.pory"
	lockall
# 1213 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1215 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1217 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1218 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1220 "data/maps/MareS4/scripts.pory"
	delay 30
# 1221 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1222 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1224 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1225 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1227 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1229 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1230 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1231 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1232 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1233 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1234 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1236 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1237 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1238 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1239 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1241 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1243 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1245 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5I::
# 1250 "data/maps/MareS4/scripts.pory"
	lockall
# 1251 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1253 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1255 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1256 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1258 "data/maps/MareS4/scripts.pory"
	delay 30
# 1259 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1260 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1262 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1263 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1265 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1267 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp6
# 1268 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1270 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1271 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1272 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1273 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1275 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1277 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1279 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5J::
# 1284 "data/maps/MareS4/scripts.pory"
	lockall
# 1285 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1287 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1289 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1290 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1292 "data/maps/MareS4/scripts.pory"
	delay 30
# 1293 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1294 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1296 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight9
# 1297 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1299 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1301 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1302 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1303 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkLeft
# 1304 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1305 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1306 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1308 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1309 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1310 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1311 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1313 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1315 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1317 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian6::
# 1323 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceUp
# 1324 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1326 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1328 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1329 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1331 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1333 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
# 1334 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1336 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1337 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1338 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1339 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1341 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1343 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_Rutulian6_2
# 1346 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
MareS4_Script_Rutulian6_1:
	end

MareS4_Script_Rutulian6_2:
# 1344 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian6_1


MareS4_Script_Trigger_Rutulian6A::
# 1353 "data/maps/MareS4/scripts.pory"
	lockall
# 1354 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1355 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6B::
# 1359 "data/maps/MareS4/scripts.pory"
	lockall
# 1360 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1361 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6C::
# 1365 "data/maps/MareS4/scripts.pory"
	lockall
# 1366 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1367 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6D::
# 1371 "data/maps/MareS4/scripts.pory"
	lockall
# 1372 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1373 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6E::
# 1377 "data/maps/MareS4/scripts.pory"
	lockall
# 1378 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1379 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6F::
# 1383 "data/maps/MareS4/scripts.pory"
	lockall
# 1384 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1385 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6G::
# 1389 "data/maps/MareS4/scripts.pory"
	lockall
# 1390 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1391 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6H::
# 1395 "data/maps/MareS4/scripts.pory"
	lockall
# 1396 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1397 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6I::
# 1401 "data/maps/MareS4/scripts.pory"
	lockall
# 1402 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1403 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6J::
# 1407 "data/maps/MareS4/scripts.pory"
	lockall
# 1408 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 10
# 1409 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6_Template::
# 1414 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1416 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1418 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1419 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1421 "data/maps/MareS4/scripts.pory"
	delay 30
# 1422 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1423 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1425 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1426 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_3
# 1428 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_4
# 1430 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_5
# 1432 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_6
# 1434 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_7
# 1436 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_8
# 1438 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_9
# 1440 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_10
# 1442 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_11
# 1444 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_12
# 1447 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1448 "data/maps/MareS4/scripts.pory"
	closemessage
# 1449 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1450 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1451 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_1:
# 1454 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1456 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1458 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1459 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_16
# 1461 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_17
# 1465 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_18
# 1469 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_19
# 1473 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_20
# 1477 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_21
# 1481 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_22
# 1485 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_23
# 1487 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_24
# 1493 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_25
# 1500 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1501 "data/maps/MareS4/scripts.pory"
	closemessage
# 1502 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1503 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1504 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_3:
# 1427 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft9
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_4:
# 1429 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_5:
# 1431 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_6:
# 1433 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_7:
# 1435 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_8:
# 1437 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_9:
# 1439 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_10:
# 1441 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_11:
# 1443 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_12:
# 1445 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_14:
# 1507 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1509 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1510 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1511 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1512 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1514 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1516 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1517 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1519 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_16:
# 1460 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_17:
# 1462 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1463 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1464 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_18:
# 1466 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1467 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1468 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_19:
# 1470 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1471 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1472 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_20:
# 1474 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1475 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1476 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_21:
# 1478 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1479 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1480 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_22:
# 1482 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1483 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1484 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_23:
# 1486 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_24:
# 1488 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1489 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1490 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1491 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1492 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_25:
# 1494 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1495 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1496 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1497 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1498 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14


MareS4_Script_Trigger_RutuliDoubleA::
# 1525 "data/maps/MareS4/scripts.pory"
	lockall
# 1526 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1527 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleB::
# 1531 "data/maps/MareS4/scripts.pory"
	lockall
# 1532 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1533 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleC::
# 1537 "data/maps/MareS4/scripts.pory"
	lockall
# 1538 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1539 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleD::
# 1543 "data/maps/MareS4/scripts.pory"
	lockall
# 1544 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1545 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleE::
# 1549 "data/maps/MareS4/scripts.pory"
	lockall
# 1550 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1551 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleF::
# 1555 "data/maps/MareS4/scripts.pory"
	lockall
# 1556 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1557 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleG::
# 1561 "data/maps/MareS4/scripts.pory"
	lockall
# 1562 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1563 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleH::
# 1567 "data/maps/MareS4/scripts.pory"
	lockall
# 1568 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1569 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleI::
# 1573 "data/maps/MareS4/scripts.pory"
	lockall
# 1574 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1575 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_Rutuli56Double_Template::
# 1581 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1583 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1585 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1586 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1587 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1589 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1590 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_3
# 1592 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_4
# 1595 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_5
# 1598 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_6
# 1601 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_7
# 1604 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_8
# 1607 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_9
# 1610 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_10
# 1613 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_11
# 1616 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1617 "data/maps/MareS4/scripts.pory"
	closemessage
# 1618 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1619 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1620 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_1:
# 1623 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1625 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1626 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1628 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre1
# 1630 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1631 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1633 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre2
# 1634 "data/maps/MareS4/scripts.pory"
	closemessage
# 1636 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1637 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost1, TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost2
# 1639 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Post
# 1640 "data/maps/MareS4/scripts.pory"
	closemessage
# 1642 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1643 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1644 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1645 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1646 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_15
# 1658 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_16
# 1670 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_17
# 1682 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_18
# 1694 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_19
# 1706 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_20
# 1718 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_21
# 1727 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_22
# 1736 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_23
# 1746 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1747 "data/maps/MareS4/scripts.pory"
	closemessage
# 1748 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1749 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1750 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_3:
# 1591 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_4:
# 1593 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1594 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_5:
# 1596 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1597 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_6:
# 1599 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1600 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_7:
# 1602 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
# 1603 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_8:
# 1605 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
# 1606 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_9:
# 1608 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1609 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_10:
# 1611 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1612 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_11:
# 1614 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_13:
# 1754 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1755 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1756 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1757 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1758 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1759 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1760 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1761 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1763 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1764 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1766 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1767 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1769 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_15:
# 1647 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1648 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1649 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1650 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1651 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1652 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1653 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1654 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1655 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1656 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1657 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_16:
# 1659 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1660 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1661 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1662 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1663 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1664 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1665 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1666 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1667 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1668 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1669 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_17:
# 1671 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1672 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1673 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1674 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1675 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1676 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1677 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1678 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1679 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1680 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1681 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_18:
# 1683 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1684 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1685 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1686 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1687 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1688 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1689 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1690 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1691 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1692 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1693 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_19:
# 1695 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1696 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1698 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
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

MareS4_Script_Trigger_Rutuli56Double_Template_20:
# 1707 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1708 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1709 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1710 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
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

MareS4_Script_Trigger_Rutuli56Double_Template_21:
# 1719 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1720 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1721 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1722 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1723 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1725 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1726 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_22:
# 1728 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1729 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1730 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1731 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1732 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1734 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1735 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_23:
# 1737 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1738 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1739 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1740 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1741 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1742 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1743 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1744 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13


MareS4_Script_Rutulian7::
# 1776 "data/maps/MareS4/scripts.pory"
	lockall
# 1778 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1780 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1781 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1782 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1784 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceDown
# 1785 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown
# 1786 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1787 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1788 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1790 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1792 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1793 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1795 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1796 "data/maps/MareS4/scripts.pory"
	closemessage
# 1798 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1800 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1801 "data/maps/MareS4/scripts.pory"
	closemessage
# 1803 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1804 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1805 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1806 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1807 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1809 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1810 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1811 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1812 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1813 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1814 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1815 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1816 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1818 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1820 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian8::
# 1827 "data/maps/MareS4/scripts.pory"
	lockall
# 1829 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1831 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1832 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1833 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1835 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceDown
# 1836 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown
# 1837 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1838 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1839 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1841 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1843 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1844 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1846 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1847 "data/maps/MareS4/scripts.pory"
	closemessage
# 1849 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1851 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1852 "data/maps/MareS4/scripts.pory"
	closemessage
# 1854 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1855 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1856 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1857 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1858 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1860 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1861 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1862 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1863 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1864 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1865 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1866 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1867 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1869 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1871 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Doorguards::
# 1877 "data/maps/MareS4/scripts.pory"
	lockall
# 1879 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1881 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1882 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1883 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1885 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceRight
# 1886 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceLeft
# 1887 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1889 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1890 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1892 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1894 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1895 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1897 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1898 "data/maps/MareS4/scripts.pory"
	closemessage
# 1900 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1902 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1903 "data/maps/MareS4/scripts.pory"
	closemessage
# 1905 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown6
# 1906 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown6
# 1907 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1909 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1910 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1911 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1912 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1913 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1914 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1915 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1916 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1918 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1920 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_RetRLostScene::
# 1925 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 10
# 1927 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1928 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1930 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1931 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1933 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1934 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_GoodJob
# 1935 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1937 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1938 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_RetRLostScene_Text_0
# 1939 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1940 "data/maps/MareS4/scripts.pory"
	closemessage
# 1942 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1943 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1944 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1945 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1947 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1948 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_FaceDown
# 1949 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1951 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkUp3
# 1952 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1954 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1955 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Help
# 1956 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1958 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1959 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_WhatsWrong
# 1960 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1962 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1963 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_RetRGone
# 1964 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1966 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1967 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1968 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1969 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1971 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1972 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Terrible
# 1973 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1975 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 1976 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_RunOff
# 1977 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 1979 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1980 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_OrCaptured
# 1981 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1983 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1984 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_TakeAction
# 1985 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1986 "data/maps/MareS4/scripts.pory"
	closemessage
# 1988 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkDown6
# 1989 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_WalkDown6
# 1990 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1992 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceUp
# 1993 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1994 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1995 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 1996 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1997 "data/maps/MareS4/scripts.pory"
	closemessage
# 1998 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1999 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2001 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_FAUSTULUS
# 2002 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ASCANIUS
# 2003 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
# 2004 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_FAUSTULUS
# 2005 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ASCANIUS
	end


MareS4_Script_Aeneas::
# 2011 "data/maps/MareS4/scripts.pory"
	faceplayer
# 2013 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Aeneas_2
MareS4_Script_Aeneas_1:
# 2020 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Aeneas_5
MareS4_Script_Aeneas_4:
# 2062 "data/maps/MareS4/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS4_Script_Aeneas_2:
# 2014 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2015 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 2016 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2017 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_1

MareS4_Script_Aeneas_5:
# 2021 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2022 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Found
# 2024 "data/maps/MareS4/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AENEAS, 1
# 2025 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MareS4_Script_Aeneas_7
# 2030 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 2031 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2033 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding1
# 2034 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2035 "data/maps/MareS4/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AENEAS
# 2037 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_GiveInvitation
# 2039 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2040 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding2
# 2041 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2042 "data/maps/MareS4/scripts.pory"
	closemessage
# 2044 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2045 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_Aeneas_11
MareS4_Script_Aeneas_10:
# 2049 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkDown6
# 2050 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2052 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_AENEAS
# 2053 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 0, 0
# 2054 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 2055 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_AENEAS
# 2057 "data/maps/MareS4/scripts.pory"
	addvar VAR_AENEID_STATE, 1
	end

MareS4_Script_Aeneas_7:
# 2026 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2027 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_4

MareS4_Script_Aeneas_11:
# 2046 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkLeft
# 2047 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Aeneas_10


MareS4_Script_Faustulus::
# 2067 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Faustulus_2
MareS4_Script_Faustulus_1:
# 2072 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Faustulus_4
	return

MareS4_Script_Faustulus_2:
# 2068 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2069 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Search, MSGBOX_NPC
# 2070 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	goto MareS4_Script_Faustulus_1

MareS4_Script_Faustulus_4:
# 2073 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2074 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Found, MSGBOX_NPC
# 2075 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	return


MareS4_Script_Ascanius::
# 2081 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Ascanius_2
MareS4_Script_Ascanius_1:
# 2086 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Ascanius_4
	return

MareS4_Script_Ascanius_2:
# 2082 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2083 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Search, MSGBOX_NPC
# 2084 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	goto MareS4_Script_Ascanius_1

MareS4_Script_Ascanius_4:
# 2087 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2088 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Found, MSGBOX_NPC
# 2089 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	return


MareS4_Script_Romulus::
# 2095 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Romulus_1
	return

MareS4_Script_Romulus_1:
# 2096 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Romulus_Found, MSGBOX_NPC
	return


MareS4_Script_Remus::
# 2102 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Remus_1
	return

MareS4_Script_Remus_1:
# 2103 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Remus_Found, MSGBOX_NPC
	return


MareS4_Script_Beroe::
# 2109 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Beroe_1
	return

MareS4_Script_Beroe_1:
# 2110 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Beroe_Found, MSGBOX_NPC
	return


MareS4_Script_Ulysses_Text_0:
# 339 "data/maps/MareS4/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

MareS4_Script_Trigger_Rutulian6_Template_Text_0:
# 1447 "data/maps/MareS4/scripts.pory"
	.string "ERROR\pVAR_TEMP_9 OOB$"

MareS4_Script_RetRLostScene_Text_0:
# 1938 "data/maps/MareS4/scripts.pory"
	.string "HELP!$"

MareS4_Text_Rutuli56Pre1::
# 2117 "data/maps/MareS4/scripts.pory"
	.string "Warutuli wafight wastrongya.$"

MareS4_Text_Rutuli56Pre2::
# 2122 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus watrust tastop.$"

MareS4_Text_Rutuli56Lost1::
# 2127 "data/maps/MareS4/scripts.pory"
	.string "Wastrong bena!$"

MareS4_Text_Rutuli56Lost2::
# 2132 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus! Wafail!$"

MareS4_Text_Rutuli56Post::
# 2137 "data/maps/MareS4/scripts.pory"
	.string "Back fallya wamust! Wabeat beya!$"

MareS4_Text_DoorguardPre1::
# 2142 "data/maps/MareS4/scripts.pory"
	.string "KaTurnus best katrust men wabe.$"

MareS4_Text_DoorguardPre2::
# 2147 "data/maps/MareS4/scripts.pory"
	.string "Wapast aliveya gona!$"

MareS4_Text_DoorguardLost1::
# 2152 "data/maps/MareS4/scripts.pory"
	.string "What happen?$"

MareS4_Text_DoorguardLost2::
# 2157 "data/maps/MareS4/scripts.pory"
	.string "Sacanna bena!$"

MareS4_Text_DoorguardPost::
# 2162 "data/maps/MareS4/scripts.pory"
	.string "Wa-admit KaTurnus wadefeat wacanna.\p"
	.string "WaHesperia forever waleave wamust.\n"
	.string "Exhile wagoya.$"

MareS4_Text_Aeneas_GoodJob::
# 2166 "data/maps/MareS4/scripts.pory"
	.string "My lad! Good job, you've ran the savages\n"
	.string "off the island. I saw the last of them\l"
	.string "jump in the sea like they were being\l"
	.string "chased by swarms of hornets! Now we\l"
	.string "can begin...$"

MareS4_Text_Ascanius_Help::
# 2173 "data/maps/MareS4/scripts.pory"
	.string "Aeneas! Come quick! Something terrible\n"
	.string "has happened!$"

MareS4_Text_Aeneas_WhatsWrong::
# 2178 "data/maps/MareS4/scripts.pory"
	.string "Ascianus, what is is?$"

MareS4_Text_Ascanius_RetRGone::
# 2182 "data/maps/MareS4/scripts.pory"
	.string "My boys, Remus and Romulus, are gone!$"

MareS4_Text_Aeneas_Terrible::
# 2186 "data/maps/MareS4/scripts.pory"
	.string "They're gone? That's terrible! They\n"
	.string "must be found.$"

MareS4_Text_Faustulus_RunOff::
# 2191 "data/maps/MareS4/scripts.pory"
	.string "Sarun off likely saplay and salostya.$"

MareS4_Text_Ascanius_OrCaptured::
# 2195 "data/maps/MareS4/scripts.pory"
	.string "Or captured by the enemy! Or dead!$"

MareS4_Text_Aeneas_TakeAction::
# 2199 "data/maps/MareS4/scripts.pory"
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
# 2210 "data/maps/MareS4/scripts.pory"
	.string "Be off! Hurry! There is no time to lose!$"

MareS4_Text_Ascanius_Search::
# 2214 "data/maps/MareS4/scripts.pory"
	.string "Oh Remus! Romulus! Come back to me! We\n"
	.string "need to find my boys! I'm so worried!$"

MareS4_Text_Faustulus_Search::
# 2220 "data/maps/MareS4/scripts.pory"
	.string "Maheart know satwins ok beya. Around\n"
	.string "saplay sabeya. Many places beya sahide.\l"
	.string "Behind rock, up tree, in cave wafindya.$"

MareS4_Text_Aeneas_Found::
# 2224 "data/maps/MareS4/scripts.pory"
	.string "At last, I can relax. We found the boys,\n"
	.string "expelled the natives and fully control\l"
	.string "Isla Hesperia. All that remains is to\l"
	.string "build a mighty city upon the seven hills\l"
	.string "of this noble island.$"

MareS4_Text_Faustulus_Found::
# 2233 "data/maps/MareS4/scripts.pory"
	.string "Maheart sawarm masee saboys safeya\n"
	.string "again saplay.$"

MareS4_Text_Beroe_Found::
# 2237 "data/maps/MareS4/scripts.pory"
	.string "Even with the island all to ourselves I\n"
	.string "can't help but feel lost, and vulnerable\l"
	.string "in this exotic wilderness. I miss the\l"
	.string "fields of Ilium... the walls of Troy...$"

MareS4_Text_Ascanius_Found::
# 2244 "data/maps/MareS4/scripts.pory"
	.string "My boys are back! I was deathly afriad\n"
	.string "that I had lost them just like I lost\l"
	.string "their mother on our bitter journey here.$"

MareS4_Text_Romulus_Found::
# 2250 "data/maps/MareS4/scripts.pory"
	.string "When I get older I will build my house\n"
	.string "upon the hill where the she wolf nursed\l"
	.string "us.$"

MareS4_Text_Remus_Found::
# 2255 "data/maps/MareS4/scripts.pory"
	.string "I'm staying far away from that dark\n"
	.string "cave where that monster kept us from\l"
	.string "our father. The furthest southern hill\l"
	.string "is where I will build my house to avoid\l"
	.string "that cursed place.$"

MareS4_Text_Aeneas_Wedding1::
# 2262 "data/maps/MareS4/scripts.pory"
	.string "What's that? You have something to\n"
	.string "give to me?$"

MareS4_Text_GiveInvitation::
# 2266 "data/maps/MareS4/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Aeneas.$"

MareS4_Text_Aeneas_Wedding2::
# 2270 "data/maps/MareS4/scripts.pory"
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
# 2285 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringScylla::
# 2289 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringCharybdis::
# 2293 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesAfterCharybdis::
# 2297 "data/maps/MareS4/scripts.pory"
	.string "$"
