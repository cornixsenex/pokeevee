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
# 377 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_FaceDown
# 378 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 380 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 382 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 383 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 385 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 387 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 388 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 389 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 390 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 392 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 393 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 394 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 395 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 397 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 398 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
	end


MareS4_Script_Trigger_Rutulian1A::
# 404 "data/maps/MareS4/scripts.pory"
	lockall
# 405 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 407 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 409 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 410 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 412 "data/maps/MareS4/scripts.pory"
	delay 30
# 413 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 414 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 417 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 419 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkDown
# 420 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 421 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight3
# 422 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 423 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp7
# 424 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 426 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 427 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 428 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 429 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 431 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 432 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 434 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1B::
# 439 "data/maps/MareS4/scripts.pory"
	lockall
# 440 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 444 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 445 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 447 "data/maps/MareS4/scripts.pory"
	delay 30
# 448 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 449 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 451 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 452 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 454 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 456 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 457 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 459 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 460 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 461 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 463 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 464 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 465 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 466 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 468 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 469 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 471 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian1C::
# 476 "data/maps/MareS4/scripts.pory"
	lockall
# 477 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 479 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 481 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_ExclamationMark
# 482 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 484 "data/maps/MareS4/scripts.pory"
	delay 30
# 485 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 486 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 488 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight2
# 489 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 491 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 493 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp
# 494 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 495 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkRight
# 496 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN1, Common_Movement_WalkUp5
# 498 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 500 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN1
# 501 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN1, 0, 0
# 502 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 503 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN1
# 505 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_A, 0
# 506 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN1
# 508 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian2::
# 514 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_FaceRight
# 515 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 517 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 519 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 520 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 522 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 524 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 525 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 526 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkLeft5
# 527 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 528 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp7
# 529 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 531 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 532 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 533 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 534 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 536 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 537 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
	end


MareS4_Script_Trigger_Rutulian2A::
# 543 "data/maps/MareS4/scripts.pory"
	lockall
# 544 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 546 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 548 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 549 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 551 "data/maps/MareS4/scripts.pory"
	delay 30
# 552 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 553 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 556 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 558 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight3
# 559 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 560 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp
# 561 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 562 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight5
# 563 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 565 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 566 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 567 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 568 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 570 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 571 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 573 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian2B::
# 578 "data/maps/MareS4/scripts.pory"
	lockall
# 579 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 581 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 583 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_ExclamationMark
# 584 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 586 "data/maps/MareS4/scripts.pory"
	delay 30
# 587 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 588 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 590 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkDown
# 591 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 593 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 595 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight
# 596 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkUp2
# 598 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 599 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN2, Common_Movement_WalkRight6
# 600 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 602 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN2
# 603 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN2, 0, 0
# 604 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 605 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN2
# 607 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_B, 0
# 608 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN2
# 610 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian3::
# 616 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_FaceLeft
# 617 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 619 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 621 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 622 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 624 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 626 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp6
# 627 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 629 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 630 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 631 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 632 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 634 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 635 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
	end


MareS4_Script_Trigger_Rutulian3A::
# 641 "data/maps/MareS4/scripts.pory"
	lockall
# 642 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 644 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 646 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 647 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 649 "data/maps/MareS4/scripts.pory"
	delay 30
# 650 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 651 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 653 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp
# 654 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 656 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight
# 659 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 660 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp7
# 661 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 663 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 664 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 665 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 666 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 668 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 669 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 671 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian3B::
# 676 "data/maps/MareS4/scripts.pory"
	lockall
# 677 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 679 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 681 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_ExclamationMark
# 682 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 684 "data/maps/MareS4/scripts.pory"
	delay 30
# 685 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 686 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 689 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 691 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkLeft
# 692 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 693 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp2
# 694 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 695 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkRight2
# 696 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN3, Common_Movement_WalkUp5
# 698 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 700 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN3
# 701 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN3, 0, 0
# 702 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 703 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN3
# 705 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_C, 0
# 706 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN3
# 708 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian4::
# 714 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_FaceUp
# 715 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 717 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 719 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 720 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 722 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft5
# 725 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 726 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp7
# 727 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 729 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 730 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 731 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 732 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 734 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 735 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
	end


MareS4_Script_Trigger_Rutulian4A::
# 741 "data/maps/MareS4/scripts.pory"
	lockall
# 742 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 744 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 746 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 747 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 749 "data/maps/MareS4/scripts.pory"
	delay 30
# 750 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 751 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 753 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft4
# 754 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 756 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 758 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 759 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 760 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 761 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 762 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp3
# 763 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 765 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 766 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 767 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 768 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 770 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 771 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 773 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4B::
# 778 "data/maps/MareS4/scripts.pory"
	lockall
# 779 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 781 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 783 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 784 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 786 "data/maps/MareS4/scripts.pory"
	delay 30
# 787 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 788 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 790 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft3
# 791 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 793 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 795 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 796 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 797 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 798 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 799 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 800 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 802 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 803 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 804 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 805 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 807 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 808 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 810 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4C::
# 815 "data/maps/MareS4/scripts.pory"
	lockall
# 816 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 818 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 820 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 821 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 823 "data/maps/MareS4/scripts.pory"
	delay 30
# 824 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 825 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 827 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft2
# 828 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 830 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 832 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 833 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 834 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 835 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 836 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 837 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 839 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 840 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 841 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 842 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 844 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 845 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 847 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4D::
# 852 "data/maps/MareS4/scripts.pory"
	lockall
# 853 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 855 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 857 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 858 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 860 "data/maps/MareS4/scripts.pory"
	delay 30
# 861 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 862 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 864 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkLeft
# 865 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 867 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 869 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp4
# 870 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 871 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkRight2
# 872 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 873 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp2
# 874 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 876 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 877 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 878 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 879 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 881 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 882 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 884 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian4E::
# 889 "data/maps/MareS4/scripts.pory"
	lockall
# 890 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 892 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 894 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_ExclamationMark
# 895 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 897 "data/maps/MareS4/scripts.pory"
	delay 30
# 898 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 899 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 902 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 904 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN4, Common_Movement_WalkUp6
# 905 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 907 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN4
# 908 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN4, 0, 0
# 909 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 910 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN4
# 912 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_D, 0
# 913 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN4
# 915 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian5::
# 921 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_FaceDown
# 922 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 924 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 926 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 927 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 929 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 931 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 932 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 934 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 935 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 936 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 937 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 939 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 941 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN6, MareS4_Script_Rutulian5_2
# 944 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 2
MareS4_Script_Rutulian5_1:
	end

MareS4_Script_Rutulian5_2:
# 942 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian5_1


MareS4_Script_Trigger_Rutulian5A::
# 950 "data/maps/MareS4/scripts.pory"
	lockall
# 951 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 953 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 955 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 956 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 958 "data/maps/MareS4/scripts.pory"
	delay 30
# 959 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 960 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 963 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 965 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 966 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 967 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 968 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 969 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 970 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 972 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 973 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 974 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 975 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 977 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 979 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 981 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5B::
# 986 "data/maps/MareS4/scripts.pory"
	lockall
# 987 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 989 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 991 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 992 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 994 "data/maps/MareS4/scripts.pory"
	delay 30
# 995 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 996 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 998 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 999 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1001 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1003 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1004 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1005 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1006 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1007 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1008 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1010 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1011 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1012 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1013 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1015 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1017 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1019 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5C::
# 1024 "data/maps/MareS4/scripts.pory"
	lockall
# 1025 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1027 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1029 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1030 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1032 "data/maps/MareS4/scripts.pory"
	delay 30
# 1033 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1034 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1036 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1037 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1039 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1041 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1042 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1043 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1044 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1045 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1046 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1048 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1049 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1050 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1051 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1053 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1055 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1057 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5D::
# 1062 "data/maps/MareS4/scripts.pory"
	lockall
# 1063 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1065 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1067 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1068 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1070 "data/maps/MareS4/scripts.pory"
	delay 30
# 1071 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1072 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1074 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1075 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1077 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1079 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1080 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1081 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1082 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1083 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1084 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1086 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1087 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1088 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1089 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1091 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1093 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1095 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5E::
# 1100 "data/maps/MareS4/scripts.pory"
	lockall
# 1101 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1103 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1105 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1106 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1108 "data/maps/MareS4/scripts.pory"
	delay 30
# 1109 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1110 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1112 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1113 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1115 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1117 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1118 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1119 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1120 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1121 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1122 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1124 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1125 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1126 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1127 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1129 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1131 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1133 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5F::
# 1138 "data/maps/MareS4/scripts.pory"
	lockall
# 1139 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1141 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1143 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1144 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1146 "data/maps/MareS4/scripts.pory"
	delay 30
# 1147 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1148 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1150 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1151 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1153 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1155 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1156 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1157 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1158 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1159 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1160 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1162 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1163 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1164 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1165 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1167 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1169 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1171 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5G::
# 1176 "data/maps/MareS4/scripts.pory"
	lockall
# 1177 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1179 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1181 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1182 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1184 "data/maps/MareS4/scripts.pory"
	delay 30
# 1185 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1186 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1188 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1189 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1191 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1193 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1194 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1195 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1196 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1197 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1198 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1200 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1201 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1202 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1203 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1205 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1207 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1209 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5H::
# 1214 "data/maps/MareS4/scripts.pory"
	lockall
# 1215 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1217 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1219 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1220 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1222 "data/maps/MareS4/scripts.pory"
	delay 30
# 1223 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1224 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1226 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
# 1227 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1229 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1231 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1232 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1233 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1234 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1235 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1236 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1238 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1239 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1240 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1241 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1243 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1245 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1247 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5I::
# 1252 "data/maps/MareS4/scripts.pory"
	lockall
# 1253 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1255 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1257 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1258 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1260 "data/maps/MareS4/scripts.pory"
	delay 30
# 1261 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1262 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1264 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
# 1265 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1267 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1269 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp6
# 1270 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1272 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1273 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1274 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1275 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1277 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1279 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1281 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Rutulian5J::
# 1286 "data/maps/MareS4/scripts.pory"
	lockall
# 1287 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1289 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1291 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1292 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1294 "data/maps/MareS4/scripts.pory"
	delay 30
# 1295 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1296 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1298 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight9
# 1299 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1301 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1303 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1304 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1305 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkLeft
# 1306 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1307 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1308 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1310 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1311 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1312 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1313 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1315 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1317 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1319 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian6::
# 1325 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceUp
# 1326 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1328 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1330 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1331 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1333 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1335 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
# 1336 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1338 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1339 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1340 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1341 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1343 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1345 "data/maps/MareS4/scripts.pory"
	goto_if_set FLAG_MARES4_RUTULIAN5, MareS4_Script_Rutulian6_2
# 1348 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 1
MareS4_Script_Rutulian6_1:
	end

MareS4_Script_Rutulian6_2:
# 1346 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
	goto MareS4_Script_Rutulian6_1


MareS4_Script_Trigger_Rutulian6A::
# 1355 "data/maps/MareS4/scripts.pory"
	lockall
# 1356 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1357 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6B::
# 1361 "data/maps/MareS4/scripts.pory"
	lockall
# 1362 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1363 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6C::
# 1367 "data/maps/MareS4/scripts.pory"
	lockall
# 1368 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1369 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6D::
# 1373 "data/maps/MareS4/scripts.pory"
	lockall
# 1374 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1375 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6E::
# 1379 "data/maps/MareS4/scripts.pory"
	lockall
# 1380 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1381 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6F::
# 1385 "data/maps/MareS4/scripts.pory"
	lockall
# 1386 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1387 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6G::
# 1391 "data/maps/MareS4/scripts.pory"
	lockall
# 1392 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1393 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6H::
# 1397 "data/maps/MareS4/scripts.pory"
	lockall
# 1398 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1399 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6I::
# 1403 "data/maps/MareS4/scripts.pory"
	lockall
# 1404 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1405 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6J::
# 1409 "data/maps/MareS4/scripts.pory"
	lockall
# 1410 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 10
# 1411 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutulian6_Template
	return


MareS4_Script_Trigger_Rutulian6_Template::
# 1416 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1418 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1420 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1421 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1423 "data/maps/MareS4/scripts.pory"
	delay 30
# 1424 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1425 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1427 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1428 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_3
# 1430 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_4
# 1432 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_5
# 1434 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_6
# 1436 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_7
# 1438 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_8
# 1440 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_9
# 1442 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_10
# 1444 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_11
# 1446 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_12
# 1449 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1450 "data/maps/MareS4/scripts.pory"
	closemessage
# 1451 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1452 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1453 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_1:
# 1456 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1458 "data/maps/MareS4/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 1460 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1461 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutulian6_Template_16
# 1463 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutulian6_Template_17
# 1467 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutulian6_Template_18
# 1471 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutulian6_Template_19
# 1475 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutulian6_Template_20
# 1479 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutulian6_Template_21
# 1483 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutulian6_Template_22
# 1487 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutulian6_Template_23
# 1489 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutulian6_Template_24
# 1495 "data/maps/MareS4/scripts.pory"
	case 10, MareS4_Script_Trigger_Rutulian6_Template_25
# 1502 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1503 "data/maps/MareS4/scripts.pory"
	closemessage
# 1504 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1505 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1506 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_3:
# 1429 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft9
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_4:
# 1431 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_5:
# 1433 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_6:
# 1435 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_7:
# 1437 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_8:
# 1439 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_9:
# 1441 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_10:
# 1443 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_11:
# 1445 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_12:
# 1447 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_FaceLeft
	goto MareS4_Script_Trigger_Rutulian6_Template_1

MareS4_Script_Trigger_Rutulian6_Template_14:
# 1509 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1511 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1512 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1513 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1514 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1516 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1518 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 0
# 1519 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1521 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutulian6_Template_16:
# 1462 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_17:
# 1464 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1465 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1466 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_18:
# 1468 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1469 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1470 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_19:
# 1472 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1473 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1474 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_20:
# 1476 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1477 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1478 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_21:
# 1480 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1481 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1482 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_22:
# 1484 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1485 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1486 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_23:
# 1488 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp6
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_24:
# 1490 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1491 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1492 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1493 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1494 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14

MareS4_Script_Trigger_Rutulian6_Template_25:
# 1496 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1497 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1498 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1499 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1500 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
	goto MareS4_Script_Trigger_Rutulian6_Template_14


MareS4_Script_Trigger_RutuliDoubleA::
# 1527 "data/maps/MareS4/scripts.pory"
	lockall
# 1528 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 1
# 1529 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleB::
# 1533 "data/maps/MareS4/scripts.pory"
	lockall
# 1534 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 2
# 1535 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleC::
# 1539 "data/maps/MareS4/scripts.pory"
	lockall
# 1540 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 3
# 1541 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleD::
# 1545 "data/maps/MareS4/scripts.pory"
	lockall
# 1546 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 4
# 1547 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleE::
# 1551 "data/maps/MareS4/scripts.pory"
	lockall
# 1552 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 5
# 1553 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleF::
# 1557 "data/maps/MareS4/scripts.pory"
	lockall
# 1558 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 6
# 1559 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleG::
# 1563 "data/maps/MareS4/scripts.pory"
	lockall
# 1564 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 7
# 1565 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleH::
# 1569 "data/maps/MareS4/scripts.pory"
	lockall
# 1570 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 8
# 1571 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_RutuliDoubleI::
# 1575 "data/maps/MareS4/scripts.pory"
	lockall
# 1576 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 9
# 1577 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_Trigger_Rutuli56Double_Template
	return


MareS4_Script_Trigger_Rutuli56Double_Template::
# 1583 "data/maps/MareS4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1585 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1587 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_ExclamationMark
# 1588 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_ExclamationMark
# 1589 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1591 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1592 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_3
# 1594 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_4
# 1597 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_5
# 1600 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_6
# 1603 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_7
# 1606 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_8
# 1609 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_9
# 1612 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_10
# 1615 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_11
# 1618 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1619 "data/maps/MareS4/scripts.pory"
	closemessage
# 1620 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1621 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1622 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_1:
# 1625 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1627 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1628 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1630 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre1
# 1632 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1633 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1635 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Pre2
# 1636 "data/maps/MareS4/scripts.pory"
	closemessage
# 1638 "data/maps/MareS4/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1639 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost1, TRAINER_RUTULIAN, MareS4_Text_Rutuli56Lost2
# 1641 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Rutuli56Post
# 1642 "data/maps/MareS4/scripts.pory"
	closemessage
# 1644 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1645 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1646 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1647 "data/maps/MareS4/scripts.pory"
	switch VAR_TEMP_9
# 1648 "data/maps/MareS4/scripts.pory"
	case 1, MareS4_Script_Trigger_Rutuli56Double_Template_15
# 1660 "data/maps/MareS4/scripts.pory"
	case 2, MareS4_Script_Trigger_Rutuli56Double_Template_16
# 1672 "data/maps/MareS4/scripts.pory"
	case 3, MareS4_Script_Trigger_Rutuli56Double_Template_17
# 1684 "data/maps/MareS4/scripts.pory"
	case 4, MareS4_Script_Trigger_Rutuli56Double_Template_18
# 1696 "data/maps/MareS4/scripts.pory"
	case 5, MareS4_Script_Trigger_Rutuli56Double_Template_19
# 1708 "data/maps/MareS4/scripts.pory"
	case 6, MareS4_Script_Trigger_Rutuli56Double_Template_20
# 1720 "data/maps/MareS4/scripts.pory"
	case 7, MareS4_Script_Trigger_Rutuli56Double_Template_21
# 1729 "data/maps/MareS4/scripts.pory"
	case 8, MareS4_Script_Trigger_Rutuli56Double_Template_22
# 1738 "data/maps/MareS4/scripts.pory"
	case 9, MareS4_Script_Trigger_Rutuli56Double_Template_23
# 1748 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_Trigger_Rutulian6_Template_Text_0
# 1749 "data/maps/MareS4/scripts.pory"
	closemessage
# 1750 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1751 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1752 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_3:
# 1593 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_4:
# 1595 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1596 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_5:
# 1598 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1599 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_6:
# 1601 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1602 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_7:
# 1604 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft4
# 1605 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_8:
# 1607 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft3
# 1608 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_9:
# 1610 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft2
# 1611 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_10:
# 1613 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1614 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight7
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_11:
# 1616 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight8
	goto MareS4_Script_Trigger_Rutuli56Double_Template_1

MareS4_Script_Trigger_Rutuli56Double_Template_13:
# 1756 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN5
# 1757 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN6
# 1758 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN5, 0, 0
# 1759 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN6, 0, 0
# 1760 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN5, MOVEMENT_TYPE_INVISIBLE
# 1761 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN6, MOVEMENT_TYPE_INVISIBLE
# 1762 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN5
# 1763 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN6
# 1765 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN5
# 1766 "data/maps/MareS4/scripts.pory"
	setflag FLAG_MARES4_RUTULIAN6
# 1768 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1769 "data/maps/MareS4/scripts.pory"
	setvar VAR_TEMP_9, 0
# 1771 "data/maps/MareS4/scripts.pory"
	releaseall
	end

MareS4_Script_Trigger_Rutuli56Double_Template_15:
# 1649 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1650 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1651 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight6
# 1652 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight6
# 1653 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1654 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1655 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1656 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1657 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1658 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1659 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_16:
# 1661 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1662 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1663 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight5
# 1664 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight5
# 1665 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1666 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1667 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1668 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1669 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1670 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1671 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_17:
# 1673 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1674 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1675 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight4
# 1676 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight4
# 1677 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1678 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1679 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1680 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1681 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1682 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1683 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_18:
# 1685 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1686 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1687 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight3
# 1688 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight3
# 1689 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1690 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1691 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1692 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1693 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1694 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1695 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_19:
# 1697 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1698 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1699 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight2
# 1700 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight2
# 1701 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1702 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1703 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1704 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1705 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1706 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1707 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_20:
# 1709 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1710 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1711 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1712 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkRight
# 1713 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1714 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1715 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1716 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1717 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1718 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1719 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_21:
# 1721 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1722 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1723 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp
# 1724 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1725 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1726 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1727 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1728 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_22:
# 1730 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkRight
# 1731 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1732 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1733 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1734 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1735 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1736 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1737 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13

MareS4_Script_Trigger_Rutuli56Double_Template_23:
# 1739 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1740 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1741 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp
# 1742 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkLeft
# 1743 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1744 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN5, Common_Movement_WalkUp5
# 1745 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN6, Common_Movement_WalkUp5
# 1746 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Trigger_Rutuli56Double_Template_13


MareS4_Script_Rutulian7::
# 1778 "data/maps/MareS4/scripts.pory"
	lockall
# 1780 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1782 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1783 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1784 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1786 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceDown
# 1787 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown
# 1788 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1789 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1790 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1792 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1794 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1795 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1797 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1798 "data/maps/MareS4/scripts.pory"
	closemessage
# 1800 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1802 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1803 "data/maps/MareS4/scripts.pory"
	closemessage
# 1805 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1806 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1807 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1808 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1809 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1811 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1812 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1813 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1814 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1815 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1816 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1817 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1818 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1820 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1822 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Rutulian8::
# 1829 "data/maps/MareS4/scripts.pory"
	lockall
# 1831 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1833 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1834 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1835 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1837 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceDown
# 1838 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown
# 1839 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1840 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkRight
# 1841 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1843 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1845 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1846 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1848 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1849 "data/maps/MareS4/scripts.pory"
	closemessage
# 1851 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1853 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1854 "data/maps/MareS4/scripts.pory"
	closemessage
# 1856 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkLeft
# 1857 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1858 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown7
# 1859 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown7
# 1860 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1862 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1863 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1864 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1865 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1866 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1867 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1868 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1869 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1871 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1873 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_Trigger_Doorguards::
# 1879 "data/maps/MareS4/scripts.pory"
	lockall
# 1881 "data/maps/MareS4/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1883 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_ExclamationMark
# 1884 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_ExclamationMark
# 1885 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1887 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_FaceRight
# 1888 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_FaceLeft
# 1889 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1891 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1892 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1894 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre1
# 1896 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 1897 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1899 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPre2
# 1900 "data/maps/MareS4/scripts.pory"
	closemessage
# 1902 "data/maps/MareS4/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS4_Text_DoorguardLost1, TRAINER_RUTULIAN, MareS4_Text_DoorguardLost2
# 1904 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_DoorguardPost
# 1905 "data/maps/MareS4/scripts.pory"
	closemessage
# 1907 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN7, Common_Movement_WalkDown6
# 1908 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_RUTULIAN8, Common_Movement_WalkDown6
# 1909 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1911 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN7
# 1912 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_RUTULIAN8
# 1913 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN7, 0, 0
# 1914 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_RUTULIAN8, 0, 0
# 1915 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN7, MOVEMENT_TYPE_INVISIBLE
# 1916 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_RUTULIAN8, MOVEMENT_TYPE_INVISIBLE
# 1917 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN7
# 1918 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_RUTULIAN8
# 1920 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 8
# 1922 "data/maps/MareS4/scripts.pory"
	releaseall
	end


MareS4_Script_RetRLostScene::
# 1927 "data/maps/MareS4/scripts.pory"
	setvar VAR_AENEID_STATE, 10
# 1929 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1930 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1932 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 1933 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1935 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1936 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_GoodJob
# 1937 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1939 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1940 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Script_RetRLostScene_Text_0
# 1941 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1942 "data/maps/MareS4/scripts.pory"
	closemessage
# 1944 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1945 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1946 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1947 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1949 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 1950 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_FaceDown
# 1951 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1953 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkUp3
# 1954 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1956 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1957 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Help
# 1958 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1960 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1961 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_WhatsWrong
# 1962 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1964 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1965 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_RetRGone
# 1966 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1968 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1969 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 1970 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_ExclamationMark
# 1971 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1973 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1974 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Terrible
# 1975 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1977 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 1978 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_RunOff
# 1979 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 1981 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 1982 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_OrCaptured
# 1983 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 1985 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1986 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_TakeAction
# 1987 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1988 "data/maps/MareS4/scripts.pory"
	closemessage
# 1990 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_ASCANIUS, Common_Movement_WalkDown6
# 1991 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_FAUSTULUS, Common_Movement_WalkDown6
# 1992 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1994 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceUp
# 1995 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 1996 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 1997 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 1998 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 1999 "data/maps/MareS4/scripts.pory"
	closemessage
# 2000 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_FaceDown
# 2001 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2003 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_FAUSTULUS
# 2004 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_ASCANIUS
# 2005 "data/maps/MareS4/scripts.pory"
	call MareS4_Script_ShowRetRSearch
# 2006 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_FAUSTULUS
# 2007 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_ASCANIUS
	end


MareS4_Script_Aeneas::
# 2013 "data/maps/MareS4/scripts.pory"
	faceplayer
# 2015 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Aeneas_2
MareS4_Script_Aeneas_1:
# 2022 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Aeneas_5
MareS4_Script_Aeneas_4:
# 2064 "data/maps/MareS4/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS4_Script_Aeneas_2:
# 2016 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2017 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Search
# 2018 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2019 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_1

MareS4_Script_Aeneas_5:
# 2023 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2024 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Found
# 2026 "data/maps/MareS4/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_AENEAS, 1
# 2027 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MareS4_Script_Aeneas_7
# 2032 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_ExclamationMark
# 2033 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2035 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding1
# 2036 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2037 "data/maps/MareS4/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_AENEAS
# 2039 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_GiveInvitation
# 2041 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 2042 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Aeneas_Wedding2
# 2043 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2044 "data/maps/MareS4/scripts.pory"
	closemessage
# 2046 "data/maps/MareS4/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2047 "data/maps/MareS4/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS4_Script_Aeneas_11
MareS4_Script_Aeneas_10:
# 2051 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkDown6
# 2052 "data/maps/MareS4/scripts.pory"
	waitmovement 0
# 2054 "data/maps/MareS4/scripts.pory"
	removeobject LOCALID_MARES4_AENEAS
# 2055 "data/maps/MareS4/scripts.pory"
	setobjectxyperm LOCALID_MARES4_AENEAS, 0, 0
# 2056 "data/maps/MareS4/scripts.pory"
	setobjectmovementtype LOCALID_MARES4_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 2057 "data/maps/MareS4/scripts.pory"
	addobject LOCALID_MARES4_AENEAS
# 2059 "data/maps/MareS4/scripts.pory"
	addvar VAR_AENEID_STATE, 1
	end

MareS4_Script_Aeneas_7:
# 2028 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 2029 "data/maps/MareS4/scripts.pory"
	closemessage
	goto MareS4_Script_Aeneas_4

MareS4_Script_Aeneas_11:
# 2048 "data/maps/MareS4/scripts.pory"
	applymovement LOCALID_MARES4_AENEAS, Common_Movement_WalkLeft
# 2049 "data/maps/MareS4/scripts.pory"
	waitmovement 0
	goto MareS4_Script_Aeneas_10


MareS4_Script_Faustulus::
# 2069 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Faustulus_2
MareS4_Script_Faustulus_1:
# 2074 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Faustulus_4
	return

MareS4_Script_Faustulus_2:
# 2070 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2071 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Search, MSGBOX_NPC
# 2072 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	goto MareS4_Script_Faustulus_1

MareS4_Script_Faustulus_4:
# 2075 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 2076 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Faustulus_Found, MSGBOX_NPC
# 2077 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
	return


MareS4_Script_Ascanius::
# 2083 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS4_Script_Ascanius_2
MareS4_Script_Ascanius_1:
# 2088 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Ascanius_4
	return

MareS4_Script_Ascanius_2:
# 2084 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2085 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Search, MSGBOX_NPC
# 2086 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	goto MareS4_Script_Ascanius_1

MareS4_Script_Ascanius_4:
# 2089 "data/maps/MareS4/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 2090 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Ascanius_Found, MSGBOX_NPC
# 2091 "data/maps/MareS4/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
	return


MareS4_Script_Romulus::
# 2097 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Romulus_1
	return

MareS4_Script_Romulus_1:
# 2098 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Romulus_Found, MSGBOX_NPC
	return


MareS4_Script_Remus::
# 2104 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Remus_1
	return

MareS4_Script_Remus_1:
# 2105 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Remus_Found, MSGBOX_NPC
	return


MareS4_Script_Beroe::
# 2111 "data/maps/MareS4/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_eq MareS4_Script_Beroe_1
	return

MareS4_Script_Beroe_1:
# 2112 "data/maps/MareS4/scripts.pory"
	msgbox MareS4_Text_Beroe_Found, MSGBOX_NPC
	return


MareS4_Script_Ulysses_Text_0:
# 339 "data/maps/MareS4/scripts.pory"
	.string "VAR_ULYSSES_STATE OOB$"

MareS4_Script_Trigger_Rutulian6_Template_Text_0:
# 1449 "data/maps/MareS4/scripts.pory"
	.string "ERROR\pVAR_TEMP_9 OOB$"

MareS4_Script_RetRLostScene_Text_0:
# 1940 "data/maps/MareS4/scripts.pory"
	.string "HELP!$"

MareS4_Text_Rutuli56Pre1::
# 2119 "data/maps/MareS4/scripts.pory"
	.string "Warutuli wafight wastrongya.$"

MareS4_Text_Rutuli56Pre2::
# 2124 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus watrust tastop.$"

MareS4_Text_Rutuli56Lost1::
# 2129 "data/maps/MareS4/scripts.pory"
	.string "Wastrong bena!$"

MareS4_Text_Rutuli56Lost2::
# 2134 "data/maps/MareS4/scripts.pory"
	.string "Ka-Turnus! Wafail!$"

MareS4_Text_Rutuli56Post::
# 2139 "data/maps/MareS4/scripts.pory"
	.string "Back fallya wamust! Wabeat beya!$"

MareS4_Text_DoorguardPre1::
# 2144 "data/maps/MareS4/scripts.pory"
	.string "KaTurnus best katrust men wabe.$"

MareS4_Text_DoorguardPre2::
# 2149 "data/maps/MareS4/scripts.pory"
	.string "Wapast aliveya gona!$"

MareS4_Text_DoorguardLost1::
# 2154 "data/maps/MareS4/scripts.pory"
	.string "What happen?$"

MareS4_Text_DoorguardLost2::
# 2159 "data/maps/MareS4/scripts.pory"
	.string "Sacanna bena!$"

MareS4_Text_DoorguardPost::
# 2164 "data/maps/MareS4/scripts.pory"
	.string "Wa-admit KaTurnus wadefeat wacanna.\p"
	.string "WaHesperia forever waleave wamust.\n"
	.string "Exhile wagoya.$"

MareS4_Text_Aeneas_GoodJob::
# 2168 "data/maps/MareS4/scripts.pory"
	.string "My lad! Good job, you've ran the savages\n"
	.string "off the island. I saw the last of them\l"
	.string "jump in the sea like they were being\l"
	.string "chased by swarms of hornets! Now we\l"
	.string "can begin...$"

MareS4_Text_Ascanius_Help::
# 2175 "data/maps/MareS4/scripts.pory"
	.string "Aeneas! Come quick! Something terrible\n"
	.string "has happened!$"

MareS4_Text_Aeneas_WhatsWrong::
# 2180 "data/maps/MareS4/scripts.pory"
	.string "Ascianus, what is is?$"

MareS4_Text_Ascanius_RetRGone::
# 2184 "data/maps/MareS4/scripts.pory"
	.string "My boys, Remus and Romulus, are gone!$"

MareS4_Text_Aeneas_Terrible::
# 2188 "data/maps/MareS4/scripts.pory"
	.string "They're gone? That's terrible! They\n"
	.string "must be found.$"

MareS4_Text_Faustulus_RunOff::
# 2193 "data/maps/MareS4/scripts.pory"
	.string "Sarun off likely saplay and salostya.$"

MareS4_Text_Ascanius_OrCaptured::
# 2197 "data/maps/MareS4/scripts.pory"
	.string "Or captured by the enemy! Or dead!$"

MareS4_Text_Aeneas_TakeAction::
# 2201 "data/maps/MareS4/scripts.pory"
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
# 2212 "data/maps/MareS4/scripts.pory"
	.string "Be off! Hurry! There is no time to lose!$"

MareS4_Text_Ascanius_Search::
# 2216 "data/maps/MareS4/scripts.pory"
	.string "Oh Remus! Romulus! Come back to me! We\n"
	.string "need to find my boys! I'm so worried!$"

MareS4_Text_Faustulus_Search::
# 2222 "data/maps/MareS4/scripts.pory"
	.string "Maheart know satwins ok beya. Around\n"
	.string "saplay sabeya. Many places beya sahide.\l"
	.string "Behind rock, up tree, in cave wafindya.$"

MareS4_Text_Aeneas_Found::
# 2226 "data/maps/MareS4/scripts.pory"
	.string "At last, I can relax. We found the boys,\n"
	.string "expelled the natives and fully control\l"
	.string "Isla Hesperia. All that remains is to\l"
	.string "build a mighty city upon the seven hills\l"
	.string "of this noble island.$"

MareS4_Text_Faustulus_Found::
# 2235 "data/maps/MareS4/scripts.pory"
	.string "Maheart sawarm masee saboys safeya\n"
	.string "again saplay.$"

MareS4_Text_Beroe_Found::
# 2239 "data/maps/MareS4/scripts.pory"
	.string "Even with the island all to ourselves I\n"
	.string "can't help but feel lost, and vulnerable\l"
	.string "in this exotic wilderness. I miss the\l"
	.string "fields of Ilium... the walls of Troy...$"

MareS4_Text_Ascanius_Found::
# 2246 "data/maps/MareS4/scripts.pory"
	.string "My boys are back! I was deathly afriad\n"
	.string "that I had lost them just like I lost\l"
	.string "their mother on our bitter journey here.$"

MareS4_Text_Romulus_Found::
# 2252 "data/maps/MareS4/scripts.pory"
	.string "When I get older I will build my house\n"
	.string "upon the hill where the she wolf nursed\l"
	.string "us.$"

MareS4_Text_Remus_Found::
# 2257 "data/maps/MareS4/scripts.pory"
	.string "I'm staying far away from that dark\n"
	.string "cave where that monster kept us from\l"
	.string "our father. The furthest southern hill\l"
	.string "is where I will build my house to avoid\l"
	.string "that cursed place.$"

MareS4_Text_Aeneas_Wedding1::
# 2264 "data/maps/MareS4/scripts.pory"
	.string "What's that? You have something to\n"
	.string "give to me?$"

MareS4_Text_GiveInvitation::
# 2268 "data/maps/MareS4/scripts.pory"
	.string "{PLAYER} gave the Wedding Invitation\n"
	.string "to Aeneas.$"

MareS4_Text_Aeneas_Wedding2::
# 2272 "data/maps/MareS4/scripts.pory"
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
# 2287 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringScylla::
# 2291 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesDuringCharybdis::
# 2295 "data/maps/MareS4/scripts.pory"
	.string "$"

MareS4_Text_UlyssesAfterCharybdis::
# 2299 "data/maps/MareS4/scripts.pory"
	.string "$"
