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
	setmetatile 19, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 78 "data/maps/AedesTerra/scripts.pory"
	setmetatile 19, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 79 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 80 "data/maps/AedesTerra/scripts.pory"
	setmetatile 20, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 81 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 82 "data/maps/AedesTerra/scripts.pory"
	setmetatile 21, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 83 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 84 "data/maps/AedesTerra/scripts.pory"
	setmetatile 22, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 85 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 86 "data/maps/AedesTerra/scripts.pory"
	setmetatile 23, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 87 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 88 "data/maps/AedesTerra/scripts.pory"
	setmetatile 24, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 89 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 90 "data/maps/AedesTerra/scripts.pory"
	setmetatile 25, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 91 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 92 "data/maps/AedesTerra/scripts.pory"
	setmetatile 26, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBridgeRight::
# 97 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 98 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 99 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 30, METATILE_Cave_Lava, TRUE
# 100 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 31, METATILE_Cave_Lava, TRUE
# 101 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 30, METATILE_Cave_Lava, TRUE
# 102 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 31, METATILE_Cave_Lava, TRUE
# 103 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 30, METATILE_Cave_Lava, TRUE
# 104 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 31, METATILE_Cave_Lava, TRUE
# 105 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 106 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
	return


AedesTerra_Script_ShowBridgeRight::
# 111 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 112 "data/maps/AedesTerra/scripts.pory"
	setmetatile 43, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 113 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 114 "data/maps/AedesTerra/scripts.pory"
	setmetatile 44, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 115 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 116 "data/maps/AedesTerra/scripts.pory"
	setmetatile 45, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 117 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 118 "data/maps/AedesTerra/scripts.pory"
	setmetatile 46, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 119 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 120 "data/maps/AedesTerra/scripts.pory"
	setmetatile 47, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBridgeCenter::
# 126 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 127 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 128 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_Lava, TRUE
# 129 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 31, METATILE_Cave_Lava, TRUE
# 130 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 131 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 133 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 30, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 134 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 31, METATILE_Cave_AedesTerra_LavaWallEast, TRUE
# 135 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 30, METATILE_Cave_Lava, TRUE
# 136 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 31, METATILE_Cave_Lava, TRUE
# 137 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 30, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
# 138 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 31, METATILE_Cave_AedesTerra_LavaWallWest, TRUE
	return


AedesTerra_Script_ShowBridgeCenter::
# 144 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 145 "data/maps/AedesTerra/scripts.pory"
	setmetatile 29, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 146 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 147 "data/maps/AedesTerra/scripts.pory"
	setmetatile 30, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 148 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 149 "data/maps/AedesTerra/scripts.pory"
	setmetatile 31, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
# 151 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 30, METATILE_Cave_AedesTerra_LavaBridgeTopLeft, FALSE
# 152 "data/maps/AedesTerra/scripts.pory"
	setmetatile 35, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomLeft, FALSE
# 153 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 30, METATILE_Cave_AedesTerra_LavaBridgeTopCenter, FALSE
# 154 "data/maps/AedesTerra/scripts.pory"
	setmetatile 36, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomCenter, FALSE
# 155 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 30, METATILE_Cave_AedesTerra_LavaBridgeTopRight, FALSE
# 156 "data/maps/AedesTerra/scripts.pory"
	setmetatile 37, 31, METATILE_Cave_AedesTerra_LavaBridgeBottomRight, FALSE
	return


AedesTerra_Script_HideBossDoor::
# 161 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_AedesTerra_WallSouth, TRUE
# 162 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_AedesTerra_WallSouth, TRUE
	return


AedesTerra_Script_ShowBossDoor::
# 167 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 4, METATILE_Cave_AedesTerra_CaveDoorTop, TRUE
# 168 "data/maps/AedesTerra/scripts.pory"
	setmetatile 33, 5, METATILE_Cave_AedesTerra_CaveDoorBottom, FALSE
	return


AedesTerra_Script_HideCushions::
# 173 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 24, 0
# 174 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 24, 0
# 175 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 24, 0
# 176 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 24, 0
# 177 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 24, 0
# 178 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 24, 0
# 179 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 180 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 24, 0
# 181 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
	return


AedesTerra_Script_PersistSolution::
# 188 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowAllBridges
# 190 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBossDoor
# 192 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideCushions
	return


AedesTerra_Script_ResetPuzzle4::
# 197 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 198 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle4_2
AedesTerra_Script_ResetPuzzle4_1:
	end

AedesTerra_Script_ResetPuzzle4_2:
# 199 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesTerra_Script_ResetPuzzle4_4
# 205 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 206 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle4_1

AedesTerra_Script_ResetPuzzle4_4:
# 200 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 201 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS4
# 202 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 8, 35
# 203 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS4
	goto AedesTerra_Script_ResetPuzzle4_1


AedesTerra_Script_ResetPuzzle5::
# 213 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 214 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle5_2
AedesTerra_Script_ResetPuzzle5_1:
	end

AedesTerra_Script_ResetPuzzle5_2:
# 215 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesTerra_Script_ResetPuzzle5_4
# 221 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 222 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle5_1

AedesTerra_Script_ResetPuzzle5_4:
# 216 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 217 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS5
# 218 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS5, 56, 37
# 219 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS5
	goto AedesTerra_Script_ResetPuzzle5_1


AedesTerra_Script_ResetPuzzle1::
# 229 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 230 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle1_2
AedesTerra_Script_ResetPuzzle1_1:
	end

AedesTerra_Script_ResetPuzzle1_2:
# 231 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle1_4
# 240 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 241 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle1_1

AedesTerra_Script_ResetPuzzle1_4:
# 232 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 233 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS1
# 234 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE1
# 235 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS1, 14, 4
# 236 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE1, 8, 8
# 237 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS1
# 238 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE1
	goto AedesTerra_Script_ResetPuzzle1_1


AedesTerra_Script_ResetPuzzle2::
# 248 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 249 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle2_2
AedesTerra_Script_ResetPuzzle2_1:
	end

AedesTerra_Script_ResetPuzzle2_2:
# 250 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesTerra_Script_ResetPuzzle2_4
# 270 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 271 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_4:
# 251 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 252 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS2
# 253 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_8
AedesTerra_Script_ResetPuzzle2_7:
# 257 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_11
AedesTerra_Script_ResetPuzzle2_10:
# 261 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS2, 33, 11
# 262 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS2
# 263 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesTerra_Script_ResetPuzzle2_14
AedesTerra_Script_ResetPuzzle2_13:
# 266 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle2_16
	goto AedesTerra_Script_ResetPuzzle2_1

AedesTerra_Script_ResetPuzzle2_8:
# 254 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 255 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
	goto AedesTerra_Script_ResetPuzzle2_7

AedesTerra_Script_ResetPuzzle2_11:
# 258 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE2
# 259 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE2, 36, 8
	goto AedesTerra_Script_ResetPuzzle2_10

AedesTerra_Script_ResetPuzzle2_14:
# 264 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
	goto AedesTerra_Script_ResetPuzzle2_13

AedesTerra_Script_ResetPuzzle2_16:
# 267 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE2
	goto AedesTerra_Script_ResetPuzzle2_1


AedesTerra_Script_ResetPuzzle3::
# 278 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 279 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle3_2
AedesTerra_Script_ResetPuzzle3_1:
	end

AedesTerra_Script_ResetPuzzle3_2:
# 280 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesTerra_Script_ResetPuzzle3_4
# 289 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 290 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle3_1

AedesTerra_Script_ResetPuzzle3_4:
# 281 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 282 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS3
# 283 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 284 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS3, 55, 14
# 285 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 58, 14
# 286 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS3
# 287 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
	goto AedesTerra_Script_ResetPuzzle3_1


AedesTerra_Script_SolvedPuzzle1::
# 297 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 299 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 300 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 30, 8
# 301 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 303 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_1
	return


AedesTerra_Script_UnSolvedPuzzle1::
# 308 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_SQUARE2
# 309 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_SQUARE2, 24, 0
# 310 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_SQUARE2
# 312 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_1
	return


AedesTerra_Script_SolvedPuzzle2::
# 316 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 319 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_PersistSolution
# 321 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_AEDESTERRA_SOLVED
	return


AedesTerra_Script_SolvedPuzzle3::
# 325 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 327 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 328 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 36, 8
# 329 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 331 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_3
	return


AedesTerra_Script_UnSolvedPuzzle3::
# 336 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CIRCLE3
# 337 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CIRCLE3, 24, 0
# 338 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CIRCLE3
# 340 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_3
	return


AedesTerra_Script_SolvedPuzzle4::
# 344 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 346 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeLeft
# 348 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesTerra_Script_SolvedPuzzle4_2
AedesTerra_Script_SolvedPuzzle4_1:
# 352 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_4
	return

AedesTerra_Script_SolvedPuzzle4_2:
# 349 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeCenter
	goto AedesTerra_Script_SolvedPuzzle4_1


AedesTerra_Script_UnSolvedPuzzle4::
# 357 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeLeft
# 359 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesTerra_Script_UnSolvedPuzzle4_2
AedesTerra_Script_UnSolvedPuzzle4_1:
# 363 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_4
	return

AedesTerra_Script_UnSolvedPuzzle4_2:
# 360 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeCenter
	goto AedesTerra_Script_UnSolvedPuzzle4_1


AedesTerra_Script_SolvedPuzzle5::
# 367 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_SolvedPuzzle
# 369 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeRight
# 371 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesTerra_Script_SolvedPuzzle5_2
AedesTerra_Script_SolvedPuzzle5_1:
# 375 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_TEMP_5
	return

AedesTerra_Script_SolvedPuzzle5_2:
# 372 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_ShowBridgeCenter
	goto AedesTerra_Script_SolvedPuzzle5_1


AedesTerra_Script_UnSolvedPuzzle5::
# 380 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeRight
# 382 "data/maps/AedesTerra/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesTerra_Script_UnSolvedPuzzle5_2
AedesTerra_Script_UnSolvedPuzzle5_1:
# 386 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_TEMP_5
	return

AedesTerra_Script_UnSolvedPuzzle5_2:
# 383 "data/maps/AedesTerra/scripts.pory"
	call AedesTerra_Script_HideBridgeCenter
	goto AedesTerra_Script_UnSolvedPuzzle5_1


AedesTerra_Script_SolvedPuzzle::
# 391 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 392 "data/maps/AedesTerra/scripts.pory"
	waitmovement 0
# 394 "data/maps/AedesTerra/scripts.pory"
	playse SE_SWITCH
# 395 "data/maps/AedesTerra/scripts.pory"
	waitse
	return


AedesTerra_Script_Granon::
# 401 "data/maps/AedesTerra/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 403 "data/maps/AedesTerra/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_ENCOUNTER
# 404 "data/maps/AedesTerra/scripts.pory"
	waitmoncry
# 405 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 407 "data/maps/AedesTerra/scripts.pory"
	special DoGranonBattle
# 408 "data/maps/AedesTerra/scripts.pory"
	waitstate
# 409 "data/maps/AedesTerra/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 410 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_GRANON
# 411 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_GRANON, 0, 0
# 412 "data/maps/AedesTerra/scripts.pory"
	setobjectmovementtype LOCALID_AEDESTERRA_GRANON, MOVEMENT_TYPE_INVISIBLE
# 413 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_GRANON
# 414 "data/maps/AedesTerra/scripts.pory"
	setflag FLAG_AEDESTERRA_HIDEGRANON
	end


AedesTerra_Text_ResetPuzzle::
# 418 "data/maps/AedesTerra/scripts.pory"
	.string "Would you like to reset the puzzle?$"

AedesTerra_Text_CantReset::
# 422 "data/maps/AedesTerra/scripts.pory"
	.string "Nothing happened...$"
