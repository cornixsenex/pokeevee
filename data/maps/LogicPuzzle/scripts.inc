LogicPuzzle_MapScripts::
# 3 "data//maps/LogicPuzzle/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LogicPuzzle_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data//maps/LogicPuzzle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LogicPuzzle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LogicPuzzle_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 4 "data//maps/LogicPuzzle/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 0, LogicPuzzle_EventScript_FacePlayerDown
	.2byte 0

LogicPuzzle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data//maps/LogicPuzzle/scripts.pory"
	map_script_2 VAR_LOGIC_CLASS_STATE, 0, LogicPuzzle_EventScript_Intro
	.2byte 0


LogicPuzzle_EventScript_FacePlayerDown::
# 14 "data//maps/LogicPuzzle/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	end


LogicPuzzle_EventScript_Intro::
# 19 "data//maps/LogicPuzzle/scripts.pory"
	lock
# 20 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 69
# 21 "data//maps/LogicPuzzle/scripts.pory"
	msgbox LogicPuzzle_Text_PuzzleIntro
# 22 "data//maps/LogicPuzzle/scripts.pory"
	closemessage
# 23 "data//maps/LogicPuzzle/scripts.pory"
	release
	end


LogicPuzzle_EventScript_Trigger1::
# 28 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 29 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 1
	goto_if_ne LogicPuzzle_EventScript_Trigger1_2
LogicPuzzle_EventScript_Trigger1_1:
# 32 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger1_2:
# 30 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState1
	goto LogicPuzzle_EventScript_Trigger1_1


LogicPuzzle_EventScript_Trigger2::
# 37 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 38 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 2
	goto_if_ne LogicPuzzle_EventScript_Trigger2_2
LogicPuzzle_EventScript_Trigger2_1:
# 41 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger2_2:
# 39 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState2
	goto LogicPuzzle_EventScript_Trigger2_1


LogicPuzzle_EventScript_Trigger3::
# 46 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 47 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 3
	goto_if_ne LogicPuzzle_EventScript_Trigger3_2
LogicPuzzle_EventScript_Trigger3_1:
# 50 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger3_2:
# 48 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState3
	goto LogicPuzzle_EventScript_Trigger3_1


LogicPuzzle_EventScript_Trigger4::
# 55 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 56 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 4
	goto_if_ne LogicPuzzle_EventScript_Trigger4_2
LogicPuzzle_EventScript_Trigger4_1:
# 59 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger4_2:
# 57 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState4
	goto LogicPuzzle_EventScript_Trigger4_1


LogicPuzzle_EventScript_Trigger5::
# 64 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 65 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 5
	goto_if_ne LogicPuzzle_EventScript_Trigger5_2
LogicPuzzle_EventScript_Trigger5_1:
# 68 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger5_2:
# 66 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState5
	goto LogicPuzzle_EventScript_Trigger5_1


LogicPuzzle_EventScript_Trigger6::
# 73 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 74 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 6
	goto_if_ne LogicPuzzle_EventScript_Trigger6_2
LogicPuzzle_EventScript_Trigger6_1:
# 77 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger6_2:
# 75 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState6
	goto LogicPuzzle_EventScript_Trigger6_1


LogicPuzzle_EventScript_Trigger7::
# 82 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 83 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 7
	goto_if_ne LogicPuzzle_EventScript_Trigger7_2
LogicPuzzle_EventScript_Trigger7_1:
# 86 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger7_2:
# 84 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState7
	goto LogicPuzzle_EventScript_Trigger7_1


LogicPuzzle_EventScript_Trigger8::
# 91 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 92 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 8
	goto_if_ne LogicPuzzle_EventScript_Trigger8_2
LogicPuzzle_EventScript_Trigger8_1:
# 95 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger8_2:
# 93 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState8
	goto LogicPuzzle_EventScript_Trigger8_1


LogicPuzzle_EventScript_Trigger9::
# 100 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 101 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 9
	goto_if_ne LogicPuzzle_EventScript_Trigger9_2
LogicPuzzle_EventScript_Trigger9_1:
# 104 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger9_2:
# 102 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState9
	goto LogicPuzzle_EventScript_Trigger9_1


LogicPuzzle_EventScript_Trigger10::
# 109 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 110 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 10
	goto_if_ne LogicPuzzle_EventScript_Trigger10_2
LogicPuzzle_EventScript_Trigger10_1:
# 113 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger10_2:
# 111 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState10
	goto LogicPuzzle_EventScript_Trigger10_1


LogicPuzzle_EventScript_Trigger11::
# 118 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 119 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 11
	goto_if_ne LogicPuzzle_EventScript_Trigger11_2
LogicPuzzle_EventScript_Trigger11_1:
# 122 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger11_2:
# 120 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState11
	goto LogicPuzzle_EventScript_Trigger11_1


LogicPuzzle_EventScript_Trigger12::
# 127 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 128 "data//maps/LogicPuzzle/scripts.pory"
	compare VAR_LOGIC_CLASS_STATE, 12
	goto_if_ne LogicPuzzle_EventScript_Trigger12_2
LogicPuzzle_EventScript_Trigger12_1:
# 131 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_Trigger12_2:
# 129 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetPuzzleState12
	goto LogicPuzzle_EventScript_Trigger12_1


LogicPuzzle_EventScript_SetPuzzleState1::
# 136 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 1
# 137 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 138 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 3, METATILE_MauvilleGym_PressedSwitch, FALSE
# 139 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock1
# 140 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock2
# 141 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 142 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 143 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 144 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 145 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 146 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 147 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 148 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 149 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 150 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 151 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState2::
# 156 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 2
# 157 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 158 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 3, METATILE_MauvilleGym_PressedSwitch, FALSE
# 159 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock1
# 160 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 161 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock3
# 162 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 163 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 164 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock6
# 165 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 166 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock8
# 167 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock9
# 168 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock10
# 169 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 170 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 171 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState3::
# 176 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 3
# 177 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 178 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
# 179 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 180 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 181 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 182 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock4
# 183 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 184 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock6
# 185 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock7
# 186 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 187 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 188 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 189 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 190 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 191 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState4::
# 196 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 4
# 197 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 198 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_PressedSwitch, FALSE
# 199 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 200 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 201 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock3
# 202 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 203 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock5
# 204 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 205 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock7
# 206 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 207 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 208 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 209 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 210 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 211 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState5::
# 216 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 5
# 217 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 218 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 6, METATILE_MauvilleGym_PressedSwitch, FALSE
# 219 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock1
# 220 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 221 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 222 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 223 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 224 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 225 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock7
# 226 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 227 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock9
# 228 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 229 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 230 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 231 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState6::
# 236 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 6
# 237 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 238 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 7, METATILE_MauvilleGym_PressedSwitch, FALSE
# 239 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 240 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock2
# 241 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 242 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 243 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 244 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 245 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 246 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock8
# 247 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 248 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 249 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 250 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 251 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState7::
# 256 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 7
# 257 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 258 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
# 259 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 260 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 261 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 262 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 263 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 264 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock6
# 265 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 266 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 267 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock9
# 268 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 269 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 270 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 271 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState8::
# 276 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 8
# 277 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 278 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 13, METATILE_MauvilleGym_PressedSwitch, FALSE
# 279 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 280 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 281 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 282 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock4
# 283 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 284 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 285 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 286 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 287 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock9
# 288 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 289 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 290 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 291 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState9::
# 296 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 9
# 297 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 298 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
# 299 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 300 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 301 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 302 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 303 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 304 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 305 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 306 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 307 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock9
# 308 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 309 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 310 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 311 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState10::
# 316 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 10
# 317 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 318 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
# 319 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 320 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 321 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 322 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock4
# 323 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 324 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 325 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 326 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock8
# 327 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 328 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock10
# 329 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 330 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 331 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState11::
# 336 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 11
# 337 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 338 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 11, METATILE_MauvilleGym_PressedSwitch, FALSE
# 339 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 340 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 341 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 342 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 343 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 344 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 345 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 346 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 347 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 348 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock10
# 349 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 350 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 351 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_SetPuzzleState12::
# 356 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 12
# 357 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ResetButtons
# 358 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 13, METATILE_MauvilleGym_PressedSwitch, FALSE
# 359 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock1
# 360 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock2
# 361 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock3
# 362 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock4
# 363 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock5
# 364 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock6
# 365 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock7
# 366 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock8
# 367 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_SetBlock9
# 368 "data//maps/LogicPuzzle/scripts.pory"
	call LogicPuzzle_EventScript_ClearBlock10
# 369 "data//maps/LogicPuzzle/scripts.pory"
	special DrawWholeMapView
# 370 "data//maps/LogicPuzzle/scripts.pory"
	playse SE_UNLOCK
# 371 "data//maps/LogicPuzzle/scripts.pory"
	waitse
	return


LogicPuzzle_EventScript_ResetButtons::
# 376 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 3, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 377 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 3, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 378 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 13, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 379 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 380 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 6, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 381 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 6, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 382 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 7, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 383 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 384 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 13, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 385 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 386 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
# 387 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 11, METATILE_MauvilleGym_RaisedSwitch, FALSE
	return


LogicPuzzle_EventScript_SetBlock1::
# 392 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 393 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 394 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 395 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 396 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 397 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock2::
# 402 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 403 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 404 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 405 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 406 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 407 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 408 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 409 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 410 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 411 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 412 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 413 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock3::
# 418 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 419 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 420 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 4, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 421 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 5, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 422 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 4, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 423 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 5, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock4::
# 428 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 5, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 429 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 430 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 431 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock5::
# 436 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 5, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 437 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 6, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 438 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 7, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 439 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 8, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock6::
# 444 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 445 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 446 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 447 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 448 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 449 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock7::
# 454 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 455 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 456 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 457 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 458 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 459 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 460 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 461 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 462 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 463 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 464 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 465 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock8::
# 470 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 471 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
# 472 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 9, METATILE_MauvilleGym_GreenBeamH2_On, TRUE
# 473 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 10, METATILE_MauvilleGym_GreenBeamH4_On, TRUE
# 474 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 9, METATILE_MauvilleGym_GreenBeamH1_On, TRUE
# 475 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 10, METATILE_MauvilleGym_GreenBeamH3_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock9::
# 480 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 481 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 482 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 12, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 483 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_SetBlock10::
# 488 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 10, METATILE_MauvilleGym_PoleBottom_On, TRUE
# 489 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 11, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 490 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 12, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
# 491 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 13, METATILE_MauvilleGym_GreenBeamV2_On, TRUE
	return


LogicPuzzle_EventScript_ClearBlock1::
# 496 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 497 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 498 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 499 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 500 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 501 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock2::
# 506 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 507 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 508 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 509 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 510 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 511 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 512 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 513 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 514 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 515 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 516 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 517 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock3::
# 522 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 523 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 524 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 525 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 526 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 4, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 527 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 5, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock4::
# 532 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 5, METATILE_MauvilleGym_PoleBottom_Off, TRUE
# 533 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 534 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 535 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock5::
# 540 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 5, METATILE_MauvilleGym_PoleBottom_Off, TRUE
# 541 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 542 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 7, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 543 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 8, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock6::
# 548 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 549 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 550 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 551 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 552 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 553 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 3, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock7::
# 558 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 559 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 560 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 561 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 562 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 563 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 564 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 565 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 566 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 567 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 9, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 568 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 569 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 10, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock8::
# 574 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 575 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 12, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 576 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 577 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 13, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 578 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 9, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 579 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 14, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock9::
# 584 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_PoleBottom_Off, TRUE
# 585 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 586 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 12, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 587 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_ClearBlock10::
# 592 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 10, METATILE_MauvilleGym_PoleBottom_Off, TRUE
# 593 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 11, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 594 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 12, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
# 595 "data//maps/LogicPuzzle/scripts.pory"
	setmetatile 11, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	return


LogicPuzzle_EventScript_TriggerFinish::
# 600 "data//maps/LogicPuzzle/scripts.pory"
	lockall
# 601 "data//maps/LogicPuzzle/scripts.pory"
	msgbox LogicPuzzle_Text_PuzzleFinished
# 602 "data//maps/LogicPuzzle/scripts.pory"
	closemessage
# 603 "data//maps/LogicPuzzle/scripts.pory"
	goto_if_set FLAG_RETURN_LOGIC_PUZZLE_LEFT, LogicPuzzle_EventScript_TriggerFinish_2
# 607 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 1
# 608 "data//maps/LogicPuzzle/scripts.pory"
	warpsilent MAP_ARDOR_UNI_LOGIC_CLASS, 7, 3
LogicPuzzle_EventScript_TriggerFinish_1:
# 610 "data//maps/LogicPuzzle/scripts.pory"
	waitstate
# 611 "data//maps/LogicPuzzle/scripts.pory"
	releaseall
	end

LogicPuzzle_EventScript_TriggerFinish_2:
# 604 "data//maps/LogicPuzzle/scripts.pory"
	setvar VAR_LOGIC_CLASS_STATE, 2
# 605 "data//maps/LogicPuzzle/scripts.pory"
	warpsilent MAP_ARDOR_UNI_LOGIC_CLASS, 5, 3
	goto LogicPuzzle_EventScript_TriggerFinish_1


LogicPuzzle_Text_PuzzleIntro::
# 616 "data//maps/LogicPuzzle/scripts.pory"
	.string "Reperi exitum cum logica.$"

LogicPuzzle_Text_PuzzleFinished::
# 620 "data//maps/LogicPuzzle/scripts.pory"
	.string "Iam reperisti exitum!$"
