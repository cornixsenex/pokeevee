AedesTerra_MapScripts::
# 12 "data/maps/AedesTerra/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/AedesTerra/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AedesTerra_MapScripts_MAP_SCRIPT_ON_LOAD
# 32 "data/maps/AedesTerra/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AedesTerra_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_AEDESTERRA_SOLVED, AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_AEDESTERRA_HIDEGRANON, AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 15 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideCushions
	goto AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AedesTerra_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 19 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_GRANON, 33, 20
# 20 "data/maps/AedesTerra/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRA_GRANON, MOVEMENT_TYPE_CHASE_PLAYER
	return

AedesTerra_MapScripts_MAP_SCRIPT_ON_LOAD:
# 26 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_AEDESTERRA_SOLVED, AedesTerra_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AedesTerra_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 27 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideAllBridges
# 28 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBossDoor
	return

AedesTerra_MapScripts_MAP_SCRIPT_ON_RESUME:
# 34 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AedesTerra_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

AedesTerra_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 35 "data/maps/AedesTerra/scripts.pory"
	hideobjectat LOCALID_AEDESTERRA_GRANON, MAP_AEDES_TERRA
# 36 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_GRANON
	return


AedesTerra_Script_HideAllBridges::
# 43 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeLeft
# 44 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeRight
# 45 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeCenter
	return


AedesTerra_Script_ShowAllBridges::
# 50 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeLeft
# 51 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeRight
# 52 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeCenter
	return


AedesTerra_Script_HideBridgeLeft::
# 57 "data/maps/AedesTerra/scripts.pory"
	setmetatile 19, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 58 "data/maps/AedesTerra/scripts.pory"
	setmetatile 19, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 59 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 30, METATILE_Cave_Lava, TRUE
# 60 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 31, METATILE_Cave_Lava, TRUE
# 61 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 30, METATILE_Cave_Lava, TRUE
# 62 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 31, METATILE_Cave_Lava, TRUE
# 63 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 30, METATILE_Cave_Lava, TRUE
# 64 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 31, METATILE_Cave_Lava, TRUE
# 65 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 30, METATILE_Cave_Lava, TRUE
# 66 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 31, METATILE_Cave_Lava, TRUE
# 67 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 30, METATILE_Cave_Lava, TRUE
# 68 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 31, METATILE_Cave_Lava, TRUE
# 69 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 30, METATILE_Cave_Lava, TRUE
# 70 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 31, METATILE_Cave_Lava, TRUE
# 71 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 72 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
	return


AedesTerra_Script_ShowBridgeLeft::
# 77 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_ShowBridgeLeft_Text_0
# 78 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 79 "data/maps/AedesTerra/scripts.pory"
	setmetatile 19, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 80 "data/maps/AedesTerra/scripts.pory"
	setmetatile 19, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 81 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 82 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 83 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 84 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 85 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 86 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 87 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 88 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 89 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 90 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 91 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 92 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 93 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 94 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBridgeRight::
# 99 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 100 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 101 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 30, METATILE_Cave_Lava, TRUE
# 102 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 31, METATILE_Cave_Lava, TRUE
# 103 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 30, METATILE_Cave_Lava, TRUE
# 104 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 31, METATILE_Cave_Lava, TRUE
# 105 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 30, METATILE_Cave_Lava, TRUE
# 106 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 31, METATILE_Cave_Lava, TRUE
# 107 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 108 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
	return


AedesTerra_Script_ShowBridgeRight::
# 113 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_ShowBridgeRight_Text_0
# 114 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 115 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 116 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 117 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 118 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 119 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 120 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 121 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 122 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 123 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 124 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBridgeCenter::
# 130 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 131 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 132 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_Lava, TRUE
# 133 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 31, METATILE_Cave_Lava, TRUE
# 134 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 135 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 137 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 138 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 139 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 30, METATILE_Cave_Lava, TRUE
# 140 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 31, METATILE_Cave_Lava, TRUE
# 141 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 142 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
	return


AedesTerra_Script_ShowBridgeCenter::
# 147 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_ShowBridgeCenter_Text_0
# 148 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 150 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 151 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 152 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 153 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 154 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 155 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
# 157 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 158 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 159 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 160 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 161 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 162 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBossDoor::
# 167 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_AedesTerra_WallSouth, TRUE
# 168 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_AedesTerra_WallSouth, TRUE
	return


AedesTerra_Script_ShowBossDoor::
# 173 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_AedesTerra_CaveDoorTop, TRUE
# 174 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_AedesTerra_CaveDoorBottom, FALSE
	return


AedesTerra_Script_HideCushions::
# 179 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 24, 0
# 180 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 24, 0
# 181 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 24, 0
# 182 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 24, 0
# 183 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 24, 0
# 184 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 24, 0
# 185 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 186 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 24, 0
# 187 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
	return


AedesTerra_Script_PersistSolution::
# 194 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowAllBridges
# 196 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBossDoor
# 198 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideCushions
	return


AedesTerra_Script_ResetPuzzle4::
# 203 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 204 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle4_2
AedesTerra_Script_ResetPuzzle4_1:
	end

AedesTerra_Script_ResetPuzzle4_2:
# 205 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesTerra_Script_ResetPuzzle4_4
# 211 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 212 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle4_1

AedesTerra_Script_ResetPuzzle4_4:
# 206 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 207 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS4
# 208 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 8, 35
# 209 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS4
	goto AedesTerra_Script_ResetPuzzle4_1


AedesTerra_Script_ResetPuzzle5::
# 219 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 220 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle5_2
AedesTerra_Script_ResetPuzzle5_1:
	end

AedesTerra_Script_ResetPuzzle5_2:
# 221 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesTerra_Script_ResetPuzzle5_4
# 227 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 228 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle5_1

AedesTerra_Script_ResetPuzzle5_4:
# 222 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 223 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS5
# 224 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 56, 37
# 225 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS5
	goto AedesTerra_Script_ResetPuzzle5_1


AedesTerra_Script_ResetPuzzle1::
# 235 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 236 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle1_2
AedesTerra_Script_ResetPuzzle1_1:
	end

AedesTerra_Script_ResetPuzzle1_2:
# 237 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle1_4
# 246 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 247 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle1_1

AedesTerra_Script_ResetPuzzle1_4:
# 238 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 239 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS1
# 240 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE1
# 241 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 14, 4
# 242 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 8, 8
# 243 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS1
# 244 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE1
	goto AedesTerra_Script_ResetPuzzle1_1


AedesTerra_Script_ResetPuzzle2::
# 254 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 255 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle2_2
AedesTerra_Script_ResetPuzzle2_1:
	end

AedesTerra_Script_ResetPuzzle2_2:
# 256 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesTerra_Script_ResetPuzzle2_4
# 276 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 277 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_4:
# 257 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 258 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS2
# 259 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_8
AedesTerra_Script_ResetPuzzle2_7:
# 263 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_11
AedesTerra_Script_ResetPuzzle2_10:
# 267 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 33, 11
# 268 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS2
# 269 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_14
AedesTerra_Script_ResetPuzzle2_13:
# 272 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_16
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_8:
# 260 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 261 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
	goto AedesTerra_Script_ResetPuzzle2_7

AedesTerra_Script_ResetPuzzle2_11:
# 264 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE2
# 265 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 36, 8
	goto AedesTerra_Script_ResetPuzzle2_10

AedesTerra_Script_ResetPuzzle2_14:
# 270 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
	goto AedesTerra_Script_ResetPuzzle2_13

AedesTerra_Script_ResetPuzzle2_16:
# 273 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE2
	goto AedesTerra_Script_ResetPuzzle2_1


AedesTerra_Script_ResetPuzzle3::
# 284 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 285 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle3_2
AedesTerra_Script_ResetPuzzle3_1:
	end

AedesTerra_Script_ResetPuzzle3_2:
# 286 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle3_4
# 295 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 296 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle3_1

AedesTerra_Script_ResetPuzzle3_4:
# 287 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 288 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS3
# 289 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 290 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 55, 14
# 291 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 58, 14
# 292 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS3
# 293 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
	goto AedesTerra_Script_ResetPuzzle3_1


AedesTerra_Script_SolvedPuzzle1::
# 303 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 305 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 306 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
# 307 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 309 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_1
	return


AedesTerra_Script_UnSolvedPuzzle1::
# 314 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 315 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 316 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 318 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_1
	return


AedesTerra_Script_SolvedPuzzle2::
# 322 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 325 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_PersistSolution
# 327 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_AEDESTERRA_SOLVED
	return


AedesTerra_Script_SolvedPuzzle3::
# 331 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 333 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 334 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 36, 8
# 335 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 337 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_3
	return


AedesTerra_Script_UnSolvedPuzzle3::
# 342 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 343 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
# 344 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 346 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_3
	return


AedesTerra_Script_SolvedPuzzle4::
# 350 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_SolvedPuzzle4_Text_0
# 351 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 352 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 354 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeLeft
# 356 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesTerra_Script_SolvedPuzzle4_2
AedesTerra_Script_SolvedPuzzle4_1:
# 360 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_4
	return

AedesTerra_Script_SolvedPuzzle4_2:
# 357 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeCenter
	goto AedesTerra_Script_SolvedPuzzle4_1


AedesTerra_Script_UnSolvedPuzzle4::
# 365 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeLeft
# 367 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesTerra_Script_UnSolvedPuzzle4_2
AedesTerra_Script_UnSolvedPuzzle4_1:
# 371 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_4
	return

AedesTerra_Script_UnSolvedPuzzle4_2:
# 368 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeCenter
	goto AedesTerra_Script_UnSolvedPuzzle4_1


AedesTerra_Script_SolvedPuzzle5::
# 375 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_SolvedPuzzle5_Text_0
# 376 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 377 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 379 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeRight
# 381 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesTerra_Script_SolvedPuzzle5_2
AedesTerra_Script_SolvedPuzzle5_1:
# 385 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_5
	return

AedesTerra_Script_SolvedPuzzle5_2:
# 382 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeCenter
	goto AedesTerra_Script_SolvedPuzzle5_1


AedesTerra_Script_UnSolvedPuzzle5::
# 390 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeRight
# 392 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesTerra_Script_UnSolvedPuzzle5_2
AedesTerra_Script_UnSolvedPuzzle5_1:
# 396 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_5
	return

AedesTerra_Script_UnSolvedPuzzle5_2:
# 393 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeCenter
	goto AedesTerra_Script_UnSolvedPuzzle5_1


AedesTerra_Script_SolvedPuzzle::
# 401 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 402 "data/maps/AedesTerra/scripts.pory"
	waitmovement 0
# 404 "data/maps/AedesTerra/scripts.pory"
	playse SE_SWITCH
# 405 "data/maps/AedesTerra/scripts.pory"
	waitse
	return


AedesTerra_Script_TestGanon::
# 411 "data/maps/AedesTerra/scripts.pory"
	load_field_pic 86, 190, 98
# 412 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Script_TestGanon_Text_0
# 413 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 414 "data/maps/AedesTerra/scripts.pory"
	destroy_field_pic 86
# 415 "data/maps/AedesTerra/scripts.pory"
	trainerbattle_no_intro TRAINER_TEST_BATTLE, LoonixBeach_Text_BlueLost
	end


AedesTerra_Script_Granon::
# 421 "data/maps/AedesTerra/scripts.pory"
	lockall
# 422 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 423 "data/maps/AedesTerra/scripts.pory"
	waitmovement 0
# 424 "data/maps/AedesTerra/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_ENCOUNTER
# 425 "data/maps/AedesTerra/scripts.pory"
	waitmoncry
# 426 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 428 "data/maps/AedesTerra/scripts.pory"
	special DoGranonBattle
# 429 "data/maps/AedesTerra/scripts.pory"
	waitstate
# 430 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 431 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_GRANON
# 432 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_GRANON, 0, 0
# 433 "data/maps/AedesTerra/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRA_GRANON, MOVEMENT_TYPE_INVISIBLE
# 434 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_GRANON
# 435 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_AEDESTERRA_HIDEGRANON
# 436 "data/maps/AedesTerra/scripts.pory"
	releaseall
	end


AedesTerra_Script_ShowBridgeLeft_Text_0:
# 77 "data/maps/AedesTerra/scripts.pory"
	.string "Show Bridge Left$"

AedesTerra_Script_ShowBridgeRight_Text_0:
# 113 "data/maps/AedesTerra/scripts.pory"
	.string "Show Bridge Right$"

AedesTerra_Script_ShowBridgeCenter_Text_0:
# 147 "data/maps/AedesTerra/scripts.pory"
	.string "Show Bridge Center$"

AedesTerra_Script_SolvedPuzzle4_Text_0:
# 350 "data/maps/AedesTerra/scripts.pory"
	.string "Solve Puzzle 4$"

AedesTerra_Script_SolvedPuzzle5_Text_0:
# 375 "data/maps/AedesTerra/scripts.pory"
	.string "Solve Puzzle 5$"

AedesTerra_Script_TestGanon_Text_0:
# 412 "data/maps/AedesTerra/scripts.pory"
	.string "TEST$"

AedesTerra_Text_ResetPuzzle::
# 440 "data/maps/AedesTerra/scripts.pory"
	.string "Would you like to reset the puzzle?$"

AedesTerra_Text_CantReset::
# 444 "data/maps/AedesTerra/scripts.pory"
	.string "Nothing happened...$"
