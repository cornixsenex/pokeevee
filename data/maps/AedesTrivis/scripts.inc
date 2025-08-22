AedesTrivis_MapScripts::
# 3 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD
# 24 "data/maps/AedesTrivis/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesTrivis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 2
	goto_if_eq AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 3
	goto_if_eq AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_ShowOrestesSageScene
	goto AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AedesTrivis_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_ShowDuringTrivisQuest
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/AedesTrivis/scripts.pory"
	compare VAR_ORESTES_STATE, 69
	goto_if_lt AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/AedesTrivis/scripts.pory"
	call AedesTrivis_Script_HideTriforceFloor
	return

AedesTrivis_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/AedesTrivis/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 2, AedesTrivis_Script_OrestesSageScene
	.2byte 0


AedesTrivis_Script_ShowOrestesSageScene::
# 31 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 11, 8
# 32 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 11, 10
# 34 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_UP
	return


AedesTrivis_Script_ShowDuringTrivisQuest::
# 39 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_SAGE, 11, 8
# 40 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_SAGE, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/AedesTrivis/scripts.pory"
	setobjectxyperm LOCALID_AEDESTRIVIS_ORESTES, 11, 9
# 42 "data/maps/AedesTrivis/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTRIVIS_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


AedesTrivis_Script_HideTriforceFloor::
# 49 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 5, METATILE_PetalburgGym_TempleFloor, FALSE
# 51 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 52 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 53 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 6, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 55 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 56 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 57 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 58 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 59 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 7, METATILE_PetalburgGym_TempleFloor, FALSE
# 61 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 62 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 63 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 64 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 65 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 66 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 67 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 8, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 69 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 70 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 71 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 72 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 73 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 74 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 75 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 76 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 77 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 9, METATILE_PetalburgGym_TempleFloor, FALSE
# 79 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 80 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 81 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 82 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 83 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 84 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 11, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 85 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 86 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 87 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 88 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 89 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 10, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 91 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 93 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 11, METATILE_PetalburgGym_TempleFloor, FALSE
# 95 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 96 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 97 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 99 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 100 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 101 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 12, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 103 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 104 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 105 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 106 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 107 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 109 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 110 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 111 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 112 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 113 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 13, METATILE_PetalburgGym_TempleFloor, FALSE
# 115 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 116 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 117 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 118 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 119 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 120 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 121 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 123 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 124 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 125 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 126 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 127 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 128 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 129 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 14, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 131 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 1, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 132 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 133 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 134 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 135 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 136 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 137 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 138 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 139 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 141 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 142 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 143 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 144 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 145 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 146 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 147 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 148 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 149 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 21, 15, METATILE_PetalburgGym_TempleFloor, FALSE
# 151 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 0, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 152 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 1, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 153 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 2, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 154 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 3, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 155 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 4, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 156 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 5, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 157 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 6, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 158 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 7, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 159 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 8, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 160 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 9, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 161 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 10, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 163 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 12, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 164 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 13, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 165 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 14, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 166 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 15, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 167 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 16, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 168 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 17, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 169 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 18, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 170 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 19, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 171 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 20, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 172 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 21, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
# 173 "data/maps/AedesTrivis/scripts.pory"
	setmetatile 22, 16, METATILE_PetalburgGym_TempleFloor_Shadow, FALSE
	return


AedesTrivis_Script_Orestes::
# 180 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 181 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesDuringTrivisQuest, MSGBOX_NPC
# 182 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
	return


AedesTrivis_Script_Sage::
	return


AedesTrivis_Script_Slowking::
	return


AedesTrivis_Script_OrestesSageScene::
# 198 "data/maps/AedesTrivis/scripts.pory"
	lockall
# 200 "data/maps/AedesTrivis/scripts.pory"
	setvar VAR_ORESTES_STATE, 3
# 202 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 205 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp6
# 206 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 208 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 209 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes1
# 210 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 212 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 213 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Sage1
# 214 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 216 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 217 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes2
# 218 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 220 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_SAGE, 190, 98
# 221 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Sage2
# 222 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_SAGE
# 224 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 225 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_FaceDown
# 226 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 228 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes3
# 229 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 230 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 232 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_WalkDown
# 233 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 235 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 236 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 238 "data/maps/AedesTrivis/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 239 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes4
# 240 "data/maps/AedesTrivis/scripts.pory"
	applymovement LOCALID_AEDESTRIVIS_ORESTES, Common_Movement_ExclamationMark
# 241 "data/maps/AedesTrivis/scripts.pory"
	waitmovement 0
# 242 "data/maps/AedesTrivis/scripts.pory"
	msgbox AedesTrivis_Text_OrestesSageScene_Orestes5
# 243 "data/maps/AedesTrivis/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 244 "data/maps/AedesTrivis/scripts.pory"
	closemessage
# 246 "data/maps/AedesTrivis/scripts.pory"
	releaseall
	end


AedesTrivis_Text_OrestesSageScene_Orestes1::
# 250 "data/maps/AedesTrivis/scripts.pory"
	.string "What do you mean 'The Speaker is not\n"
	.string "here?' I must consult the oracle!$"

AedesTrivis_Text_OrestesSageScene_Sage1::
# 255 "data/maps/AedesTrivis/scripts.pory"
	.string "He's gone. I already told you ever since\n"
	.string "the green robed pirate carried off the\l"
	.string "Trivis the speaker's pedestal has been\l"
	.string "vacant.$"

AedesTrivis_Text_OrestesSageScene_Orestes2::
# 262 "data/maps/AedesTrivis/scripts.pory"
	.string "Well, if this tree vest is so important\n"
	.string "to the temple, why don't you go get it?$"

AedesTrivis_Text_OrestesSageScene_Sage2::
# 267 "data/maps/AedesTrivis/scripts.pory"
	.string "I'm bound by oathe to attend the Aedes\n"
	.string "Trivis. Only in death may I depart.\l"
	.string "Someone, perhaps you or your champion,\l"
	.string "must seek out the three pieces of\l"
	.string "Trivis broken by that scoundrel who\l"
	.string "came in green and robbed our sacred\l"
	.string "place of the Trivis.$"

AedesTrivis_Text_OrestesSageScene_Orestes3::
# 276 "data/maps/AedesTrivis/scripts.pory"
	.string "Despair! I know now there turly is no\n"
	.string "God, Gods, or Goddess looking down on\l"
	.string "me! My query on the bridge has been\l"
	.string "answered by the total absence of a\l"
	.string "reply. My mind's made up, I must now\l"
	.string "jump...now die.$"

AedesTrivis_Text_OrestesSageScene_Orestes4::
# 284 "data/maps/AedesTrivis/scripts.pory"
	.string "Who are you!? Why have you come to this\n"
	.string "place? I hope you did not come seeking\l"
	.string "guidance since that charlatan is\l"
	.string "offering none. He says some green\l"
	.string "pirate stole his tree vest so he can't\l"
	.string "tell anyone their future.$"

AedesTrivis_Text_OrestesSageScene_Orestes5::
# 292 "data/maps/AedesTrivis/scripts.pory"
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
# 309 "data/maps/AedesTrivis/scripts.pory"
	.string "$"
