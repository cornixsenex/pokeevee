AedesTrivis_MapScripts::
# 6 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD
# 36 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AedesTrivis_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 40 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesTrivis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 2
	goto_if_eq AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 3
	goto_if_eq AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 5
	goto_if_eq AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 21 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 5
	goto_if_gt AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_ShowOrestesSageScene
	goto AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_ShowDuringTrivisQuest
# 14 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_CheckTrivisComplete
	goto AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 18 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_SetupReturnFromWhiteout
	goto AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_SetupSlowkingEtSage
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 30 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 5
	goto_if_lt AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 31 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_HideTriforceFloor
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 37 "data/maps/AedesTrivis/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 5, Common_Script_FacePlayerUp
	.2byte 0

AedesTrivis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 41 "data/maps/AedesTrivis/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 2, AedesTrivis_Script_OrestesSageScene
# 42 "data/maps/AedesTrivis/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 4, AedesTrivis_Script_TrivisCompleteScene1
# 43 "data/maps/AedesTrivis/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 5, AedesTrivis_Script_TrivisCompleteScene2
	.2byte 0


AedesTrivis_Script_ShowOrestesSageScene::
# 49 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 11, 8
# 50 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 11, 10
# 52 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_UP
	return


AedesTrivis_Script_ShowDuringTrivisQuest::
# 57 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 11, 8
# 58 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 59 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 11, 9
# 60 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


AedesTrivis_Script_HideTriforceFloor::
# 67 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 5, METATILE_PetalburgGym_TempleFloor, FALSE
# 69 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 70 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 71 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 73 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 74 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 75 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 76 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 77 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 79 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 80 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 81 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 82 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 83 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 84 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 85 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 87 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 88 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 89 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 90 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 91 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 92 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 93 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 94 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 95 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 97 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 98 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 99 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 100 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 101 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 102 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 103 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 104 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 105 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 106 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 107 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 109 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 111 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 113 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 114 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 115 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 117 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 118 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 119 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 121 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 122 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 123 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 124 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 125 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 127 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 128 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 129 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 130 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 131 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 133 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 134 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 135 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 136 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 137 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 138 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 139 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 141 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 142 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 143 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 144 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 145 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 146 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 147 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 149 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 1, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 150 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 151 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 152 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 153 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 154 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 155 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 156 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 157 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 159 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 160 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 161 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 162 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 163 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 164 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 165 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 166 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 167 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 21, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 169 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 0, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 170 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 1, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 171 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 172 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 173 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 174 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 175 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 176 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 177 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 178 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 179 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 181 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 182 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 183 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 184 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 185 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 186 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 187 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 188 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 189 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 190 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 21, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 191 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 22, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
	return


AedesTrivis_Script_CheckTrivisComplete::
# 197 "data/maps/AedesTrivis/scripts.pory"
	checkitem ITEM_TRIVIS_FORTITUDINIS
# 198 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTrivis_Script_CheckTrivisComplete_2
AedesTrivis_Script_CheckTrivisComplete_1:
	return

AedesTrivis_Script_CheckTrivisComplete_2:
# 199 "data/maps/AedesTrivis/scripts.pory"
	checkitem ITEM_TRIVIS_SAPIENTIAE
# 200 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTrivis_Script_CheckTrivisComplete_4
	goto AedesTrivis_Script_CheckTrivisComplete_1

AedesTrivis_Script_CheckTrivisComplete_4:
# 201 "data/maps/AedesTrivis/scripts.pory"
	checkitem ITEM_TRIVIS_POTESTATIS
# 202 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTrivis_Script_CheckTrivisComplete_6
	goto AedesTrivis_Script_CheckTrivisComplete_1

AedesTrivis_Script_CheckTrivisComplete_6:
# 203 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_SetupTrivisComplete
	goto AedesTrivis_Script_CheckTrivisComplete_1


AedesTrivis_Script_SetupTrivisComplete::
# 212 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 10, 10
# 213 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_RIGHT
# 214 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 12, 10
# 215 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_LEFT
# 217 "data/maps/AedesTrivis/scripts.pory"
	setvar VAR_ORESTES_STATE, 4
	return


AedesTrivis_Script_SetupReturnFromWhiteout::
# 223 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 10, 11
# 224 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 225 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 12, 11
# 226 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


AedesTrivis_Script_SetupSlowkingEtSage::
# 232 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 10, 4
# 233 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 234 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SLOWKING, 11, 2
# 235 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SLOWKING, MOVEMENT_TYPE_FACE_DOWN
	return


AedesTrivis_Script_Orestes::
# 241 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 242 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesDuringTrivisQuest, MSGBOX_NPC
# 243 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
	return


AedesTrivis_Script_Sage::
# 248 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 69
	goto_if_lt AedesTrivis_Script_Sage_1
	return

AedesTrivis_Script_Sage_1:
# 250 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 251 "data/maps/AedesTrivis/scripts.pory"
	goto_if_unset FLAG_AEDES_TRIVIS_SAGEINTROD, AedesTrivis_Script_Sage_4
# 256 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_SageDuringQuest
AedesTrivis_Script_Sage_3:
# 259 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 260 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
	end

AedesTrivis_Script_Sage_4:
# 252 "data/maps/AedesTrivis/scripts.pory"
	setflag FLAG_AEDES_TRIVIS_SAGEINTROD
# 253 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_SageIntroQuest
	goto AedesTrivis_Script_Sage_3


AedesTrivis_Script_Slowking::
# 268 "data/maps/AedesTrivis/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesTrivis_Script_Slowking_1
	return

AedesTrivis_Script_Slowking_1:
# 269 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 270 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_Return
# 271 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 272 "data/maps/AedesTrivis/scripts.pory"
	closemessage
	end


AedesTrivis_Script_OrestesSageScene::
# 280 "data/maps/AedesTrivis/scripts.pory"
	lockall
# 282 "data/maps/AedesTrivis/scripts.pory"
	setvar VAR_ORESTES_STATE, 3
# 284 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 285 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 287 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp6
# 288 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 290 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 291 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes1
# 292 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 294 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 295 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Sage1
# 296 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 298 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 299 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes2
# 300 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 302 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 303 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Sage2
# 304 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 306 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 307 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_FaceDown
# 308 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 310 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes3
# 311 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 312 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 314 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkDown
# 315 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 317 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 318 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 320 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 321 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes4
# 322 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 323 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 324 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes5
# 325 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 326 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 328 "data/maps/AedesTrivis/scripts.pory"
	releaseall
	end


AedesTrivis_Script_TrivisCompleteScene1::
# 333 "data/maps/AedesTrivis/scripts.pory"
	lockall
# 335 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 336 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 338 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp6
# 339 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 342 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 343 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete1
# 344 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 346 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 347 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Sage_TrivisComplete1
# 348 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 350 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_ExclamationMark
# 351 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 352 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 354 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_FaceDown
# 355 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_FaceDown
# 356 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 358 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 359 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete2
# 360 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 362 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 363 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Sage_TrivisComplete2
# 364 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 365 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 367 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_WalkDown
# 368 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkDown
# 369 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 371 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_ExclamationMark
# 372 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 373 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 374 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 376 "data/maps/AedesTrivis/scripts.pory"
	playse SE_M_HYPER_BEAM
# 377 "data/maps/AedesTrivis/scripts.pory"
	waitse
# 378 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_TrivisGlow
# 379 "data/maps/AedesTrivis/scripts.pory"
	playse SE_M_HYPER_BEAM
# 380 "data/maps/AedesTrivis/scripts.pory"
	waitse
# 382 "data/maps/AedesTrivis/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 383 "data/maps/AedesTrivis/scripts.pory"
	delay 40
# 385 "data/maps/AedesTrivis/scripts.pory"
	removeitem ITEM_TRIVIS_FORTITUDINIS
# 386 "data/maps/AedesTrivis/scripts.pory"
	removeitem ITEM_TRIVIS_SAPIENTIAE
# 387 "data/maps/AedesTrivis/scripts.pory"
	removeitem ITEM_TRIVIS_POTESTATIS
# 389 "data/maps/AedesTrivis/scripts.pory"
	setvar VAR_ORESTES_STATE, 5
# 391 "data/maps/AedesTrivis/scripts.pory"
	warpsilent MAP_AEDES_TRIVIS, 11, 12
	return


AedesTrivis_Script_TrivisCompleteScene2::
# 397 "data/maps/AedesTrivis/scripts.pory"
	lockall
# 399 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 400 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete3
# 401 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 404 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 405 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Sage_TrivisComplete3
# 406 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 408 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 409 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete4
# 410 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 412 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 413 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete1
# 414 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 416 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_ExclamationMark
# 417 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 418 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 419 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 421 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 422 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete5
# 423 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 425 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_FaceUp
# 426 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_FaceUp
# 427 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 429 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 430 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Sage_TrivisComplete4
# 431 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 432 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 434 "data/maps/AedesTrivis/scripts.pory"
	removeobject LOCALID_AEDESTRIVIS_SLOWKING
# 435 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SLOWKING, 11, 2
# 436 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SLOWKING, MOVEMENT_TYPE_FACE_DOWN
# 437 "data/maps/AedesTrivis/scripts.pory"
	addobject LOCALID_AEDESTRIVIS_SLOWKING
# 439 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_WalkUp6
# 440 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp6
# 441 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkUp6
# 442 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 443 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 444 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 445 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_WalkUp
# 446 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 447 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_SAGE, Common_Movement_FaceDown
# 448 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 450 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 451 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete2
# 452 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 454 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 455 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Sage_TrivisComplete4
# 456 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 457 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 458 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 460 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 461 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete6
# 462 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 463 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 465 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkUp
# 466 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 467 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkLeft
# 468 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 469 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkUp
# 470 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 472 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 473 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete7
# 474 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 476 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 477 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete3
# 478 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 480 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 481 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete8
# 482 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 484 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 485 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete4
# 486 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 488 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 489 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Orestes_TrivisComplete9
# 490 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 492 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 493 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete5
# 494 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 495 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 497 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkDown
# 498 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 499 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkRight
# 500 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 501 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkDown6
# 502 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 504 "data/maps/AedesTrivis/scripts.pory"
	removeobject LOCALID_AEDESTRIVIS_ORESTES
# 505 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 0, 0
# 506 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 507 "data/maps/AedesTrivis/scripts.pory"
	addobject LOCALID_AEDESTRIVIS_ORESTES
# 509 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 510 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete6
# 511 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 512 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 514 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 515 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 517 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 518 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete7
# 519 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 521 "data/maps/AedesTrivis/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 523 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SLOWKING, 190, 98
# 524 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_TrivisComplete8
# 525 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_Slowking_Return
# 526 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SLOWKING
# 527 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 529 "data/maps/AedesTrivis/scripts.pory"
	setflag FLAG_TEMP_7
# 531 "data/maps/AedesTrivis/scripts.pory"
	setvar VAR_ORESTES_STATE, 6
# 533 "data/maps/AedesTrivis/scripts.pory"
	releaseall
	end


AedesTrivis_Text_OrestesSageScene_Orestes1::
# 537 "data/maps/AedesTrivis/scripts.pory"
	.string "What do you mean 'The Speaker is not\n"
	.string "here?' I must consult the oracle!$"

AedesTrivis_Text_OrestesSageScene_Sage1::
# 542 "data/maps/AedesTrivis/scripts.pory"
	.string "He's gone. I already told you ever since\n"
	.string "the green robed pirate carried off the\l"
	.string "Trivis the speaker's pedestal has been\l"
	.string "vacant.$"

AedesTrivis_Text_OrestesSageScene_Orestes2::
# 549 "data/maps/AedesTrivis/scripts.pory"
	.string "Well, if this tree vest is so important\n"
	.string "to the temple, why don't you go get it?$"

AedesTrivis_Text_OrestesSageScene_Sage2::
# 554 "data/maps/AedesTrivis/scripts.pory"
	.string "I'm bound by oathe to attend the Aedes\n"
	.string "Trivis. Only in death may I depart.\l"
	.string "Someone, perhaps you or your champion,\l"
	.string "must seek out the three pieces of\l"
	.string "Trivis broken by that scoundrel who\l"
	.string "came in green and robbed our sacred\l"
	.string "place of the Trivis.$"

AedesTrivis_Text_OrestesSageScene_Orestes3::
# 563 "data/maps/AedesTrivis/scripts.pory"
	.string "Despair! I know now there turly is no\n"
	.string "God, Gods, or Goddess looking down on\l"
	.string "me! My query on the bridge has been\l"
	.string "answered by the total absence of a\l"
	.string "reply. My mind's made up, I must now\l"
	.string "jump...now die.$"

AedesTrivis_Text_OrestesSageScene_Orestes4::
# 571 "data/maps/AedesTrivis/scripts.pory"
	.string "Who are you!? Why have you come to this\n"
	.string "place? I hope you did not come seeking\l"
	.string "guidance since that charlatan is\l"
	.string "offering none. He says some green\l"
	.string "pirate stole his tree vest so he can't\l"
	.string "tell anyone their future.$"

AedesTrivis_Text_OrestesSageScene_Orestes5::
# 579 "data/maps/AedesTrivis/scripts.pory"
	.string "I just realized you're the answer to my\n"
	.string "desperate supplication for help. The\l"
	.string "odds of another traveller arriving here\l"
	.string "just as I'm leaving...impossible! You\l"
	.string "must be here to restore the temple and\l"
	.string "bring the oracle back to tell me what is\l"
	.string "it I must do. I simply must speak with\l"
	.string "him soon or I will surely die! So please,\l"
	.string "hurry, find the missing tree vest and\l"
	.string "bring the oracle back. Maybe try to talk\l"
	.string "to that pretender and see if he has any\l"
	.string "helpful advice for you. Thank you God,\l"
	.string "Gods, Goddesses, or Goddess for\l"
	.string "answering my most desperate prayers!$"

AedesTrivis_Text_OrestesDuringTrivisQuest::
# 596 "data/maps/AedesTrivis/scripts.pory"
	.string "Please help me! Please repair the tree\n"
	.string "vest and bring back the oracle, else I\l"
	.string "must die!$"

AedesTrivis_Text_SageIntroQuest::
# 601 "data/maps/AedesTrivis/scripts.pory"
	.string "The thief in green snuck in during the\n"
	.string "night and stole the Trivis from this\l"
	.string "sacred place. That he wore green seems\l"
	.string "no coincidence for this was once the\l"
	.string "land of Hylia where young men were\l"
	.string "clothed in tunics of green when they\l"
	.string "reached the age of majority. Whether\l"
	.string "this thief was just a copycat, or if\l"
	.string "some of the Hylians survive\l"
	.string "underground, in the caves along the\l"
	.string "Drake, is not clear but I think the\l"
	.string "thief must have been inspired to take\l"
	.string "the Trivis by the Hylian people, living\l"
	.string "or dead.$"

AedesTrivis_Text_SageDuringQuest::
# 616 "data/maps/AedesTrivis/scripts.pory"
	.string "If you intend to rescue the Trivis and\n"
	.string "return the temple's stolen glory I would\l"
	.string "begin your search inside the caves that\l"
	.string "run deep underground along the Drake. I\l"
	.string "know of one just south of the temple,\l"
	.string "along the western shore, not far from\l"
	.string "here. There are others as well. I am not\l"
	.string "sure if the thief has them or hid them\l"
	.string "or might be trying to use their power\l"
	.string "for ill. Tread carefully, good luck, and\l"
	.string "please return.$"

AedesTrivis_Text_Orestes_TrivisComplete1::
# 632 "data/maps/AedesTrivis/scripts.pory"
	.string "You don't understand! This is Urgent! I\n"
	.string "must have guidance! The guilt is killing\l"
	.string "me!$"

AedesTrivis_Text_Sage_TrivisComplete1::
# 638 "data/maps/AedesTrivis/scripts.pory"
	.string "And as I told you, many times before, I\n"
	.string "am a mere custodian. I can't give you\l"
	.string "any advice worth more than words. Until\l"
	.string "the Trivis is returned, and the Speaker\l"
	.string "assumes his post, there is no one who\l"
	.string "can help you here and raising your voice\l"
	.string "will not change that. Now, please,\l"
	.string "compose yourself.$"

AedesTrivis_Text_Orestes_TrivisComplete2::
# 648 "data/maps/AedesTrivis/scripts.pory"
	.string "What's that? It's {PLAYER}!$"

AedesTrivis_Text_Sage_TrivisComplete2::
# 652 "data/maps/AedesTrivis/scripts.pory"
	.string "Have you found the Trivis?$"

AedesTrivis_Text_TrivisGlow::
# 656 "data/maps/AedesTrivis/scripts.pory"
	.string "The three pieces of Trivis begin to\n"
	.string "glow.$"

AedesTrivis_Text_Orestes_TrivisComplete3::
# 660 "data/maps/AedesTrivis/scripts.pory"
	.string "What happened? Woah! What was that\n"
	.string "sound? That light?$"

AedesTrivis_Text_Sage_TrivisComplete3::
# 664 "data/maps/AedesTrivis/scripts.pory"
	.string "What happy day! You've done it lad! You\n"
	.string "have returned our temple to it's lost\l"
	.string "glory! The Trivis, at long last, has been\l"
	.string "restored!$"

AedesTrivis_Text_Orestes_TrivisComplete4::
# 670 "data/maps/AedesTrivis/scripts.pory"
	.string "The tree vest restored? That means...$"

AedesTrivis_Text_Slowking_TrivisComplete1::
# 674 "data/maps/AedesTrivis/scripts.pory"
	.string "Thank you, {PLAYER}.$"

AedesTrivis_Text_Orestes_TrivisComplete5::
# 678 "data/maps/AedesTrivis/scripts.pory"
	.string "What? Who was that?$"

AedesTrivis_Text_Sage_TrivisComplete4::
# 682 "data/maps/AedesTrivis/scripts.pory"
	.string "The speaker has returned!$"

AedesTrivis_Text_Slowking_TrivisComplete2::
# 686 "data/maps/AedesTrivis/scripts.pory"
	.string "The speaker? Yes, that's what they\n"
	.string "once called us. After the Trivis was\l"
	.string "stolen from here we were unable to take\l"
	.string "corporal form but, now that the temple\l"
	.string "is restored, we have returned to serve\l"
	.string "devout pilgrims.$"

AedesTrivis_Text_Orestes_TrivisComplete6::
# 694 "data/maps/AedesTrivis/scripts.pory"
	.string "Hello!$"

AedesTrivis_Text_Orestes_TrivisComplete7::
# 698 "data/maps/AedesTrivis/scripts.pory"
	.string "I'm Orestes, son of Agamemnon, and I\n"
	.string "desperately need divine advice!$"

AedesTrivis_Text_Slowking_TrivisComplete3::
# 703 "data/maps/AedesTrivis/scripts.pory"
	.string "Hasty Orestes, long have we observed\n"
	.string "your haughty family act beyond the will\l"
	.string "of He who holds the scale to judge our\l"
	.string "lives. Despite the godless actions of\l"
	.string "your kin, your own abstainment from\l"
	.string "ritual prayer up to this point, and your\l"
	.string "rude impatience, we welcome and invite\l"
	.string "you to approach our platform and tell\l"
	.string "us what bothers you.$"

AedesTrivis_Text_Orestes_TrivisComplete8::
# 714 "data/maps/AedesTrivis/scripts.pory"
	.string "My father, who's soul may be stained\n"
	.string "with sin, lies petrified in bed,\l"
	.string "bewitched by my mother, who's own life\l"
	.string "is no more righteous. The shame of\l"
	.string "knowing my father lies there disgraced\l"
	.string "and cursed while I do nothing to avenge\l"
	.string "or rescue him from that sad fate fills\l"
	.string "me with deep remorse and thoughts of\l"
	.string "death. Yet neither can I act upon these\l"
	.string "pains without crossing mother, another\l"
	.string "sin. You say my family's sinful, and that\l"
	.string "I have ever scored the will of the\l"
	.string "divine. These things are true, but now I\l"
	.string "want to change. I came here to ask what\l"
	.string "action to take, to learn, then do, the\l"
	.string "will of the divine. I'm sorry if I seem\l"
	.string "hasty, or base, but my situation's\l"
	.string "indeed dire!$"

AedesTrivis_Text_Slowking_TrivisComplete4::
# 734 "data/maps/AedesTrivis/scripts.pory"
	.string "Your father has unjustly been abused\n"
	.string "and as his son you must see justice\l"
	.string "done. Since the offending party's your\l"
	.string "mother the hand of justice cannot be\l"
	.string "your own. You must find someone else to\l"
	.string "break the spell and free Agamemnon.\l"
	.string "Orestes, know your mother will not\l"
	.string "persist in this world. After her curse is\l"
	.string "broken she will die, but you will not be\l"
	.string "guilty for her death instead renowned\l"
	.string "as your father's savior. Therefore\l"
	.string "depart, find someone else to bring\l"
	.string "justice to your father, death to your\l"
	.string "mom.$"

AedesTrivis_Text_Orestes_TrivisComplete9::
# 750 "data/maps/AedesTrivis/scripts.pory"
	.string "But, how...$"

AedesTrivis_Text_Slowking_TrivisComplete5::
# 755 "data/maps/AedesTrivis/scripts.pory"
	.string "No buts! We've said our prophecy. Be\n"
	.string "gone! Attend to your urgent business.$"

AedesTrivis_Text_Slowking_TrivisComplete6::
# 761 "data/maps/AedesTrivis/scripts.pory"
	.string "Now, {PLAYER}, approach our dais. We\n"
	.string "would thank you for your great service\l"
	.string "to our temple.$"

AedesTrivis_Text_Slowking_TrivisComplete7::
# 767 "data/maps/AedesTrivis/scripts.pory"
	.string "Most valiant and pure hearted\n"
	.string "{PLAYER}, we thank you for returning\l"
	.string "the stolen Trivis and restoring this\l"
	.string "place of light. Accept this gift on\l"
	.string "behalf of our diocese$"

AedesTrivis_Text_Slowking_TrivisComplete8::
# 775 "data/maps/AedesTrivis/scripts.pory"
	.string "That ancient stone was once regalia of\n"
	.string "the Hylian Kings. It has been kept in\l"
	.string "our possession all this tired age. Now it\l"
	.string "is yours, to do with as you please. Use\l"
	.string "it wisely. Keep to the righteous path\l"
	.string "and by persistence you'll achieve your\l"
	.string "quest. Now farewell, {PLAYER}. Be\l"
	.string "about your business.$"

AedesTrivis_Text_Slowking_Return::
# 785 "data/maps/AedesTrivis/scripts.pory"
	.string "If during your journey you require\n"
	.string "additional advice, return to us.$"
