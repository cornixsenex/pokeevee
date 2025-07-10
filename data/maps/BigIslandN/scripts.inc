BigIslandN_MapScripts::
# 29 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 51 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
# 58 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 32 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_BigIslandN_F
# 35 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 40 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 42 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 44 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 14
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 47 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 36 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 41 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 43 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 45 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgoExit
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 40 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 52 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 52 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_gt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 53 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1

BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 59 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 14, BigIslandN_Script_ArgoExit
# 60 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 18, BigIslandN_Script_EscapeColchis
	.2byte 0


BigIslandN_Script_Transition_MareMortuorum::
# 68 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 1
# 69 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MANUAL_WEATHER
# 70 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 71 "data/maps/BigIslandN/scripts.pory"
	doweather
# 72 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 73 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_Transition_MareOriens::
# 77 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_MareOriens_2
BigIslandN_Script_Transition_MareOriens_1:
# 82 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 2
# 83 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 84 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_MareOriens_2:
# 78 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 79 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 80 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_MareOriens_1


BigIslandN_Script_Transition_MareSubtropicum::
# 88 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_MareSubtropicum_2
BigIslandN_Script_Transition_MareSubtropicum_1:
# 93 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 3
# 94 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 95 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_MareSubtropicum_2:
# 89 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 90 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 91 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_MareSubtropicum_1


BigIslandN_Script_Transition_IslaIgnifera::
# 99 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_IslaIgnifera_2
BigIslandN_Script_Transition_IslaIgnifera_1:
# 104 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 4
# 105 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 106 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_IslaIgnifera_2:
# 100 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 101 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 102 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_IslaIgnifera_1


BigIslandN_Script_ShowColchisCave::
# 111 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 112 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 117 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 118 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 124 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 57, 32
# 125 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 127 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 58, 32
# 128 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 130 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 59, 32
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 133 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 60, 32
# 134 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 136 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 61, 32
# 137 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 139 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 140 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 142 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 143 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 145 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 64, 32
# 146 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_INVISIBLE
# 148 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 149 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 151 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 152 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 154 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 155 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 157 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 158 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 160 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 161 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 163 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 164 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 166 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 167 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 169 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 12, MAP_BIG_ISLAND_N
# 170 "data/maps/BigIslandN/scripts.pory"
	removeobject 12
	return


BigIslandN_Script_ShowArgo2::
# 176 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 177 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 178 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 179 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 181 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 182 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 184 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 186 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 187 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 188 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 189 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 191 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 192 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 193 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 194 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 196 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 197 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 198 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 199 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 201 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 202 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 203 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 204 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 206 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 207 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 208 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 209 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	return


BigIslandN_Script_ShowArgo3::
# 216 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 217 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 218 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 219 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 221 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 222 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 223 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 224 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 226 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 227 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 228 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 229 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 231 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 232 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 233 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 234 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 236 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 237 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 238 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 239 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 241 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 242 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 243 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 244 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 246 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 247 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 248 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 249 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo7::
# 255 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 256 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 257 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 258 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 260 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 261 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 262 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 263 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 265 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 266 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 267 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 268 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 270 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 271 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 272 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 273 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 275 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 91, 26
# 276 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 277 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 278 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 280 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 281 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 282 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 283 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 285 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 286 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 287 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 288 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgoExit::
# 294 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 295 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 296 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 297 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 299 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 21
# 300 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 301 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 302 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 304 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 21
# 305 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 306 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 307 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 309 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 83, 21
# 310 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 311 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 312 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 314 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 21
# 315 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 316 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 317 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 319 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 39
# 320 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 321 "data/maps/BigIslandN/scripts.pory"
	addobject 7, MAP_BIG_ISLAND_N
# 322 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 324 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 30, 39
# 325 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_RIGHT
# 326 "data/maps/BigIslandN/scripts.pory"
	addobject 12, MAP_BIG_ISLAND_N
# 327 "data/maps/BigIslandN/scripts.pory"
	showobjectat 12, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoExit::
# 333 "data/maps/BigIslandN/scripts.pory"
	lockall
# 336 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 337 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 340 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 341 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 346 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 347 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 348 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 349 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 351 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 352 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 353 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 354 "data/maps/BigIslandN/scripts.pory"
	waitse
# 355 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 356 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 357 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 360 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 24, 190, 98
# 361 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_MedeaExitColchis, MSGBOX_DEFAULT
# 362 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 24
# 365 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 366 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExitColchis, MSGBOX_DEFAULT
# 367 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 368 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 370 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo1
# 371 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo1
# 372 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo1
# 373 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 374 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 375 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 376 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 377 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 378 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 379 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 380 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 381 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo2
# 382 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo2
# 383 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo2
# 384 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 387 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 388 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt1, MSGBOX_DEFAULT
# 389 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 391 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ThreeCheers, MSGBOX_DEFAULT
# 393 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 394 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt2, MSGBOX_DEFAULT
# 395 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 396 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 399 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonMedeaExeunt
# 400 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_JasonMedeaExeunt
# 401 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_DioscuriExeunt
# 402 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_DioscuriExeunt
# 403 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusExeunt
# 404 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusExeunt
# 405 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 408 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 409 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 412 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 413 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt3, MSGBOX_DEFAULT
# 414 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 415 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 418 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_DioscuriExeunt
# 419 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_DioscuriExeunt
# 420 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 423 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 424 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
# 426 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_EscapeColchis::
# 431 "data/maps/BigIslandN/scripts.pory"
	lockall
# 434 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 435 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 438 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 439 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 443 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 444 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 445 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 446 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 448 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 449 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 450 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 451 "data/maps/BigIslandN/scripts.pory"
	waitse
# 452 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 453 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 454 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 457 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 460 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_ArgoArrival::
# 466 "data/maps/BigIslandN/scripts.pory"
	delay 50
# 467 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 468 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 471 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 472 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 478 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 479 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 482 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 483 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 484 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 485 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 486 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 487 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 488 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 489 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 490 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 491 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 492 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 493 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 494 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 497 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 498 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 499 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 500 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 501 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 504 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 505 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 506 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 507 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 508 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 509 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 510 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 511 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 512 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 515 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 516 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 517 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 518 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 519 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 520 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 521 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 522 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 523 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 526 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 527 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 528 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 529 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 530 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 531 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 532 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 533 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 534 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 535 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 536 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 537 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 538 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 539 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 540 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 541 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 542 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 543 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 544 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 545 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 546 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 547 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 548 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 551 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 552 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 553 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 554 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 557 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 558 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 559 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 563 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 564 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 565 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 566 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 567 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 568 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 569 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 570 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 571 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 572 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 573 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 574 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 576 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 582 "data/maps/BigIslandN/scripts.pory"
	lock
# 583 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 584 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 585 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 586 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 587 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 588 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 593 "data/maps/BigIslandN/scripts.pory"
	lockall
# 594 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 604 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 607 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 608 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 611 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 595 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 596 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 597 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 598 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 599 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 602 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 605 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 600 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 617 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 618 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 619 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 620 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 621 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 622 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 623 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 624 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 625 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 626 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 630 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 631 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 632 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 633 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 634 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 635 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 636 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 641 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 642 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 643 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 644 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 645 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 646 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 647 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 648 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 649 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 650 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 651 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 652 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 655 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 656 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 657 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 658 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 659 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 660 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 661 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 663 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 664 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 665 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 666 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 667 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 668 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 669 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 671 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 672 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 673 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 674 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 675 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 676 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 677 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 679 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 680 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 681 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 682 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 683 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 684 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 685 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 689 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 690 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 691 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 692 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 693 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 694 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 695 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 696 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 697 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 698 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 699 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 700 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 701 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 703 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 704 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 705 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 706 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 707 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 708 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 709 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 710 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 711 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 712 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 713 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 716 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 717 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 719 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 723 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 726 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 727 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 729 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 730 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 731 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 737 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 738 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 739 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 741 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 742 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 744 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 745 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 746 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 747 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 748 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 749 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 752 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 753 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 755 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 756 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 757 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 758 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 759 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 760 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 762 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 763 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 765 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 766 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 770 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 771 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 772 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 773 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 774 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 776 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 777 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 778 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 779 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 780 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 783 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 784 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 785 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 787 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 788 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 789 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 791 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 792 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 793 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 798 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 799 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 803 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 804 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 805 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 806 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 807 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 809 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 810 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 811 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 812 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 815 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 816 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 817 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 818 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 819 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 820 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 821 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 822 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 825 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 826 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 827 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 828 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 831 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 832 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 833 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 834 "data/maps/BigIslandN/scripts.pory"
	waitse
# 835 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 836 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 837 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 840 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 841 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 842 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 843 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 844 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 846 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 848 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 851 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 852 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 853 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 854 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 857 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 866 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 874 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 875 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 876 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 877 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 880 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 882 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 883 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 884 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 887 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 925 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 926 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 927 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 867 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO
# 868 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 869 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 870 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 871 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 872 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 878 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 889 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASON_OSTRACON, BigIslandN_Script_JasonAtColchisCave_12
BigIslandN_Script_JasonAtColchisCave_11:
# 897 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 898 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_14
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_12:
# 890 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASON_OSTRACON
# 891 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 892 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 893 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ostracon, MSGBOX_DEFAULT
# 894 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_11

BigIslandN_Script_JasonAtColchisCave_14:
# 899 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 900 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 920 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 921 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 901 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 902 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 903 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_19
# 907 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 908 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_22
# 912 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 913 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 914 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 915 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 916 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 904 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 905 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_22:
# 909 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 910 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 932 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 933 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 934 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 935 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 936 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 937 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 938 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 939 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 940 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 941 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 942 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 943 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 944 "data/maps/BigIslandN/scripts.pory"
	waitse
# 946 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 947 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 948 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 949 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 951 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 952 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 954 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 955 "data/maps/BigIslandN/scripts.pory"
	releaseall
# 956 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	end


BigIslandN_Script_TestNicknamer::
# 964 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 965 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 969 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 970 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 974 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 966 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 967 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 971 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 972 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


BigIslandN_Script_Argo::
# 981 "data/maps/BigIslandN/scripts.pory"
	lock
# 982 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Argo, MSGBOX_DEFAULT
# 983 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 984 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Dioscuri::
# 991 "data/maps/BigIslandN/scripts.pory"
	lock
# 992 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 993 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Dioscuri_2
# 995 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_Script_Dioscuri_7
BigIslandN_Script_Dioscuri_6:
# 997 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_Script_Dioscuri_4
# 1005 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Dioscuri_Text_0
BigIslandN_Script_Dioscuri_1:
# 1007 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1008 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Dioscuri_2:
# 994 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_3:
# 996 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_4:
# 998 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_BIGISLANDN_DIOSCURIFOUND, BigIslandN_Script_Dioscuri_11
# 1002 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_7:
# 995 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_Script_Dioscuri_3
	goto BigIslandN_Script_Dioscuri_6

BigIslandN_Script_Dioscuri_11:
# 999 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_BIGISLANDN_DIOSCURIFOUND
# 1000 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1


BigIslandN_Script_Orpheus::
# 1013 "data/maps/BigIslandN/scripts.pory"
	lock
# 1014 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 1015 "data/maps/BigIslandN/scripts.pory"
	switch VAR_ARGO_STATE
# 1016 "data/maps/BigIslandN/scripts.pory"
	case 0, BigIslandN_Script_Orpheus_3
# 1018 "data/maps/BigIslandN/scripts.pory"
	case 1, BigIslandN_Script_Orpheus_4
# 1020 "data/maps/BigIslandN/scripts.pory"
	case 2, BigIslandN_Script_Orpheus_5
# 1022 "data/maps/BigIslandN/scripts.pory"
	case 3, BigIslandN_Script_Orpheus_6
# 1024 "data/maps/BigIslandN/scripts.pory"
	case 4, BigIslandN_Script_Orpheus_7
# 1026 "data/maps/BigIslandN/scripts.pory"
	case 5, BigIslandN_Script_Orpheus_8
# 1028 "data/maps/BigIslandN/scripts.pory"
	case 6, BigIslandN_Script_Orpheus_9
# 1030 "data/maps/BigIslandN/scripts.pory"
	case 7, BigIslandN_Script_Orpheus_10
# 1033 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus8, MSGBOX_DEFAULT
BigIslandN_Script_Orpheus_1:
# 1035 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1036 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Orpheus_3:
# 1017 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus0, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_4:
# 1019 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_5:
# 1021 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_6:
# 1023 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_7:
# 1025 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus4, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_8:
# 1027 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus5, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_9:
# 1029 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus6, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_10:
# 1031 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus7, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1


BigIslandN_Script_Theseus::
# 1041 "data/maps/BigIslandN/scripts.pory"
	lock
# 1042 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 1043 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Theseus, MSGBOX_DEFAULT
# 1044 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1045 "data/maps/BigIslandN/scripts.pory"
	release
	end


# 1049 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1054 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 1055 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1059 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 1060 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1060 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 1065 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 1066 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1066 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1070 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 1071 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1071 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1075 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1077 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1080 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1084 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 1085 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1085 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1089 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 1090 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1091 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1094 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 1095 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1098 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1100 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1103 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 1104 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1104 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1105 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1105 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1105 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1107 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1107 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1110 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 1111 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1115 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 1116 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1117 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1120 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1122 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 1125 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1131 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1133 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1134 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1134 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1137 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 1138 "data/maps/BigIslandN/scripts.pory"
	face_up
# 1139 "data/maps/BigIslandN/scripts.pory"
	face_down
# 1140 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 1143 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 1144 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1144 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1144 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1146 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1146 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1146 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1146 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1149 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 1150 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1154 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1156 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1156 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1156 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1157 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1158 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1162 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

# 1168 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerExitColchis:
# 1169 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1172 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo1:
# 1173 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1173 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1173 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1176 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo2:
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1177 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1178 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1182 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1182 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1182 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1183 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1184 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1184 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1189 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonMedeaExeunt:
# 1190 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1190 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1193 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_DioscuriExeunt:
# 1194 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1194 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1194 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1194 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1197 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusExeunt:
# 1198 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1199 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1199 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1199 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1199 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1202 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusExeunt:
# 1203 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1204 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1204 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1204 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1204 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 607 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 758 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 966 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 971 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Script_Dioscuri_Text_0:
# 1005 "data/maps/BigIslandN/scripts.pory"
	.string "ERROR: BigIslandN_Script_Dioscuri\n"
	.string "VAR_ARGO_STATE index not accounted for.\l"
	.string "Please report bugs to CornixSenex$"

BigIslandN_Text_ArrivedAtColchis1::
# 1207 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 1211 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 1215 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 1219 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 1223 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 1227 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 1231 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 1235 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 1239 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 1243 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 1247 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 1251 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 1255 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 1259 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 1263 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 1268 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 1272 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 1276 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 1280 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_Ostracon::
# 1295 "data/maps/BigIslandN/scripts.pory"
	.string "What's that? Philoctetes enchanted by\n"
	.string "an evil witch?\l"
	.string "And a volcanic bird!\l"
	.string "An old prophet gave you an Ostracon?\l"
	.string "By SPEAROW free!\l"
	.string "What nonesense is all this? We need to\l"
	.string "work on opening this cave.$"

BigIslandN_Text_ReleaseSpearow::
# 1299 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 1303 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 1307 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 1311 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"

BigIslandN_Text_Argo::
# 1315 "data/maps/BigIslandN/scripts.pory"
	.string "The mighty ship of Jason:\n"
	.string "THE ARGO$"

BigIslandN_Text_Orpheus0::
# 1319 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 0 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus1::
# 1323 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 1 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus2::
# 1327 "data/maps/BigIslandN/scripts.pory"
	.string "On distant shores, where sea and sorrow\n"
	.string "meet, I stand, a wanderer, with heart\l"
	.string "forlorn and beat. My quest, lost to the\l"
	.string "waves' relentless roar, and with it, all\l"
	.string "my hopes, forever on the shore.$"

BigIslandN_Text_Orpheus3::
# 1331 "data/maps/BigIslandN/scripts.pory"
	.string "The sun dips low, in fiery splendor set,\n"
	.string "amidst the waves, that gently lap and\l"
	.string "fret. The salty scent, of ocean's\l"
	.string "darkling breast, invades my senses, and\l"
	.string "my soul finds rest.$"

BigIslandN_Text_Orpheus4::
# 1335 "data/maps/BigIslandN/scripts.pory"
	.string "The cries of gulls, that wheel and soar\n"
	.string "above, echo my sighs, and share my\l"
	.string "endless love, for thee, O Ocean, vast\l"
	.string "and wild and free, that holds my dreams,\l"
	.string "in thy dark secrecy.$"

BigIslandN_Text_Orpheus5::
# 1339 "data/maps/BigIslandN/scripts.pory"
	.string "The breeze, that whispers secrets in my\n"
	.string "ear, of distant lands, and memories so\l"
	.string "dear, stirs up the depths, of sorrow and\l"
	.string "despair, and I, a shipwrecked soul, am\l"
	.string "left to stare.$"

BigIslandN_Text_Orpheus6::
# 1343 "data/maps/BigIslandN/scripts.pory"
	.string "The tide, that ebbs and flows, with\n"
	.string "soothing sound, lulls me to sleep, on\l"
	.string "this forsaken ground, yet, in my dreams,\l"
	.string "I see the shores I've left, and wake to\l"
	.string "find, my heart still bereft.$"

BigIslandN_Text_Orpheus7::
# 1347 "data/maps/BigIslandN/scripts.pory"
	.string "O, cruel fate, that brought me to this\n"
	.string "place! A poet, lost, without a friendly\l"
	.string "face. My lyre, silenced, and my voice,\l"
	.string "unheard. A castaway, with none to share\l"
	.string "my word.$"

BigIslandN_Text_Orpheus8::
# 1351 "data/maps/BigIslandN/scripts.pory"
	.string "The ocean's vastness stretches far and\n"
	.string "wide. A limitless expanse, where I am\l"
	.string "lost inside. No hope, no rescue, comes\l"
	.string "to set me free. A prisoner, of the waves'\l"
	.string "eternity.$"

BigIslandN_Text_Dioscuri1::
# 1355 "data/maps/BigIslandN/scripts.pory"
	.string "I can't believe we're stuck on guard\n"
	.string "duty!\l"
	.string "It's so boring! How long have they been\l"
	.string "gone?$"

BigIslandN_Text_Dioscuri2::
# 1359 "data/maps/BigIslandN/scripts.pory"
	.string "We made friends with a couple islanders\n"
	.string "who tell us that people have been going\l"
	.string "missing recently and the rumour is\l"
	.string "they're being kidnapped by a secret\l"
	.string "cult and sacrificed to the volcano God.\l"
	.string "Of course it all sounds like nonesense\l"
	.string "to us.$"

BigIslandN_Text_Dioscuri3::
# 1363 "data/maps/BigIslandN/scripts.pory"
	.string "Hey {PLAYER} don't tell Jason that we\n"
	.string "snuck off.$"

BigIslandN_Text_Theseus::
# 1367 "data/maps/BigIslandN/scripts.pory"
	.string "This island's home to beautiful women!$"

BigIslandN_Text_MedeaExitColchis::
# 1372 "data/maps/BigIslandN/scripts.pory"
	.string "Ethay ayway otay Olchiscay isay\n"
	.string "osedclay oreverfay.$"

BigIslandN_Text_JasonExitColchis::
# 1376 "data/maps/BigIslandN/scripts.pory"
	.string "Let us depart this place for our new\n"
	.string "life.$"

BigIslandN_Text_JasonExeunt1::
# 1386 "data/maps/BigIslandN/scripts.pory"
	.string "Attention Argonauts, our quest is done.\n"
	.string "Shiny Mareep, and victory, is ours!\l"
	.string "Though grivously we lost great Heracles\l"
	.string "and Philoctetes too shall not return,\l"
	.string "that which we set out for has been\l"
	.string "achieved. A special thanks to\l"
	.string "{PLAYER} and Medea without who our\l"
	.string "objective would have failed. Three\l"
	.string "cheers from all for our new companions.$"

BigIslandN_Text_ThreeCheers::
# 1390 "data/maps/BigIslandN/scripts.pory"
	.string "Hip hip horray!\p"
	.string "Hip hip hooray!\p"
	.string "Hip hip hooray!$"

BigIslandN_Text_JasonExeunt2::
# 1394 "data/maps/BigIslandN/scripts.pory"
	.string "Now let us return home, triumphantly.$"

BigIslandN_Text_JasonExeunt3::
# 1398 "data/maps/BigIslandN/scripts.pory"
	.string "Visit us sometime soon in Bulbus Town.$"
