BigIslandN_MapScripts::
# 29 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 57 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
# 64 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 32 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_BigIslandN_F
# 34 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 41 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 46 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 48 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 50 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 14
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 53 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 35 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 36 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 37 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 34 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_MANUAL_WEATHER, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 42 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 47 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 49 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 51 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgoExit
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 46 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 58 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 58 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_gt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 59 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1

BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 65 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 14, BigIslandN_Script_ArgoExit
# 66 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 18, BigIslandN_Script_EscapeColchis
	.2byte 0


BigIslandN_Script_Transition_MareMortuorum::
# 74 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 1
# 75 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MANUAL_WEATHER
# 76 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_FOG_DIAGONAL
# 77 "data/maps/BigIslandN/scripts.pory"
	doweather
# 78 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 79 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_Transition_MareOriens::
# 83 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_MareOriens_2
BigIslandN_Script_Transition_MareOriens_1:
# 88 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 2
# 89 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 90 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_MareOriens_2:
# 84 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 85 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 86 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_MareOriens_1


BigIslandN_Script_Transition_MareSubtropicum::
# 94 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_MareSubtropicum_2
BigIslandN_Script_Transition_MareSubtropicum_1:
# 99 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 3
# 100 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 101 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_MareSubtropicum_2:
# 95 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 96 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 97 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_MareSubtropicum_1


BigIslandN_Script_Transition_IslaIgnifera::
# 105 "data/maps/BigIslandN/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandN_Script_Transition_IslaIgnifera_2
BigIslandN_Script_Transition_IslaIgnifera_1:
# 110 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 4
# 111 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 112 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandN_Script_Transition_IslaIgnifera_2:
# 106 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_MANUAL_WEATHER
# 107 "data/maps/BigIslandN/scripts.pory"
	setweather WEATHER_NONE
# 108 "data/maps/BigIslandN/scripts.pory"
	doweather
	goto BigIslandN_Script_Transition_IslaIgnifera_1


BigIslandN_Script_ShowColchisCave::
# 117 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 118 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 123 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 124 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 130 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 57, 32
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 133 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 58, 32
# 134 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 136 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 59, 32
# 137 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 139 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 60, 32
# 140 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 142 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 61, 32
# 143 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 145 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 146 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 148 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 149 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 151 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 64, 32
# 152 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_INVISIBLE
# 154 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 155 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 157 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 158 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 160 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 161 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 163 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 164 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 166 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 167 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 169 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 170 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 172 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 173 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 175 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 12, MAP_BIG_ISLAND_N
# 176 "data/maps/BigIslandN/scripts.pory"
	removeobject 12
	return


BigIslandN_Script_ShowArgo2::
# 182 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 183 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 184 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 185 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 187 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 188 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 189 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 190 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 192 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 193 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 194 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 195 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 197 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 198 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 199 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 200 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 202 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 203 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 204 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 205 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 207 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 208 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 209 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 210 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 212 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 213 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 214 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 215 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	return


BigIslandN_Script_ShowArgo3::
# 222 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 223 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 224 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 225 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 227 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 228 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 229 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 230 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 232 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 233 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 234 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 235 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 237 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 238 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 239 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 240 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 242 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 243 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 244 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 245 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 247 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 248 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 249 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 250 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 252 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 253 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 254 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 255 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo7::
# 261 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 262 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 263 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 264 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 266 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 267 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 268 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 269 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 271 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 272 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 273 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 274 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 276 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 277 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 278 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 279 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 281 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 91, 26
# 282 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 283 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 284 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 286 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 287 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 288 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 289 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 291 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 292 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 293 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 294 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgoExit::
# 300 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 301 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 302 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 303 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 305 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 21
# 306 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 307 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 308 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 310 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 21
# 311 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 312 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 313 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 315 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 83, 21
# 316 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 317 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 318 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 320 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 21
# 321 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 322 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 323 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 325 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 39
# 326 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 327 "data/maps/BigIslandN/scripts.pory"
	addobject 7, MAP_BIG_ISLAND_N
# 328 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 330 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 30, 39
# 331 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_RIGHT
# 332 "data/maps/BigIslandN/scripts.pory"
	addobject 12, MAP_BIG_ISLAND_N
# 333 "data/maps/BigIslandN/scripts.pory"
	showobjectat 12, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoExit::
# 339 "data/maps/BigIslandN/scripts.pory"
	lockall
# 342 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 343 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 346 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 347 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 352 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 353 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 354 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 355 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 357 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 358 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 359 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 360 "data/maps/BigIslandN/scripts.pory"
	waitse
# 361 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 362 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 363 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 366 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 24, 190, 98
# 367 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_MedeaExitColchis, MSGBOX_DEFAULT
# 368 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 24
# 371 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 372 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExitColchis, MSGBOX_DEFAULT
# 373 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 374 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 376 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo1
# 377 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo1
# 378 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo1
# 379 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 380 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 381 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 382 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 383 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 384 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 385 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 386 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 387 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo2
# 388 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo2
# 389 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo2
# 390 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 393 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 394 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt1, MSGBOX_DEFAULT
# 395 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 397 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ThreeCheers, MSGBOX_DEFAULT
# 399 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 400 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt2, MSGBOX_DEFAULT
# 401 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 402 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 405 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonMedeaExeunt
# 406 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_JasonMedeaExeunt
# 407 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_DioscuriExeunt
# 408 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_DioscuriExeunt
# 409 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusExeunt
# 410 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusExeunt
# 411 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 414 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 415 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 418 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 419 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt3, MSGBOX_DEFAULT
# 420 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 421 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 424 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_DioscuriExeunt
# 425 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_DioscuriExeunt
# 426 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 429 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 430 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
# 432 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_EscapeColchis::
# 437 "data/maps/BigIslandN/scripts.pory"
	lockall
# 440 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 441 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 444 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 445 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 449 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 450 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 451 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 452 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 454 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 455 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 456 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 457 "data/maps/BigIslandN/scripts.pory"
	waitse
# 458 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 459 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 460 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 463 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 466 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_ArgoArrival::
# 472 "data/maps/BigIslandN/scripts.pory"
	delay 50
# 473 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 474 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 477 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MAREC_HIDE_ARGO
# 478 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 484 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 485 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 488 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 489 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 490 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 491 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 492 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 493 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 494 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 495 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 496 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 497 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 498 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 499 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 500 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 503 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 504 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 505 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 506 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 507 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 510 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 511 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 512 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 513 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 514 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 515 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 516 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 517 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 518 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 521 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 522 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 523 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 524 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 525 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 526 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 527 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 528 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 529 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 532 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 533 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 534 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 535 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 536 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 537 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 538 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 539 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 540 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 541 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 542 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 543 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 544 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 545 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 546 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 547 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 548 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 549 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 550 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 551 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 552 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 553 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 554 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 557 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 558 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 559 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 560 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 563 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 564 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 565 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 569 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 570 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 571 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 572 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 573 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 574 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 575 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 576 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 577 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 578 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 579 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 580 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 582 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 588 "data/maps/BigIslandN/scripts.pory"
	lock
# 589 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 590 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 591 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 592 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 593 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 594 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 599 "data/maps/BigIslandN/scripts.pory"
	lockall
# 600 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 610 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 613 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 614 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 617 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 601 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 602 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 603 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 604 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 605 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 608 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 611 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 606 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 623 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 624 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 625 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 626 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 627 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 628 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 629 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 630 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 631 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 632 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 636 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 637 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 638 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 639 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 640 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 641 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 642 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 647 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 648 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 649 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 650 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 651 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 652 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 653 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 654 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 655 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 656 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 657 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 658 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 661 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 662 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 663 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 664 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 665 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 666 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 667 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 669 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 670 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 671 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 672 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 673 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 674 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 675 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 677 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 678 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 679 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 680 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 681 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 682 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 683 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 685 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 686 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 687 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 688 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 689 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 690 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 691 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 695 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 696 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 697 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 698 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 699 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 700 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 701 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 702 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 703 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 704 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 705 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 706 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 707 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 709 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 710 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 711 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 712 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 713 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 714 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 715 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 716 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 717 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 718 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 719 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 722 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 723 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 725 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 729 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 732 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 733 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 735 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 736 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 737 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 743 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 744 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 745 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 747 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 748 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 750 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 751 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 752 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 753 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 754 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 755 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 758 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 759 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 761 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 762 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 763 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 764 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 765 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 766 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 768 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 769 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 771 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 772 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 776 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 777 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 778 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 779 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 780 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 782 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 783 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 784 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 785 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 786 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 789 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 790 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 791 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 793 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 794 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 795 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 797 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 798 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 799 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 804 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 805 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 809 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 810 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 811 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 812 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 813 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 815 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 816 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 817 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 818 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 821 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 822 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 823 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 824 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 825 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 826 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 827 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 828 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 831 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 832 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 833 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 834 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 837 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 838 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 839 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 840 "data/maps/BigIslandN/scripts.pory"
	waitse
# 841 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 842 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 843 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 846 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 847 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 848 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 849 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 850 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 852 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 854 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 857 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 858 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 859 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 860 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 863 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 872 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 880 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 881 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 882 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 883 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 886 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 888 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 889 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 890 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 893 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 931 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 932 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 933 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 873 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO
# 874 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 875 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 876 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 877 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 878 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 884 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 895 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASON_OSTRACON, BigIslandN_Script_JasonAtColchisCave_12
BigIslandN_Script_JasonAtColchisCave_11:
# 903 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 904 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_14
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_12:
# 896 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASON_OSTRACON
# 897 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 898 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 899 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ostracon, MSGBOX_DEFAULT
# 900 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_11

BigIslandN_Script_JasonAtColchisCave_14:
# 905 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 906 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 926 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 927 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 907 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 908 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 909 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_19
# 913 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 914 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_22
# 918 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 919 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 920 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 921 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 922 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 910 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 911 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_22:
# 915 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 916 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 938 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 939 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 940 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 941 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 942 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 943 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 944 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 945 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 946 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 947 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 948 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 949 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 950 "data/maps/BigIslandN/scripts.pory"
	waitse
# 952 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 953 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 954 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 955 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 957 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 958 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 960 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 961 "data/maps/BigIslandN/scripts.pory"
	releaseall
# 962 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	end


BigIslandN_Script_TestNicknamer::
# 970 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 971 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 975 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 976 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 980 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 972 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 973 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 977 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 978 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


BigIslandN_Script_Argo::
# 987 "data/maps/BigIslandN/scripts.pory"
	lock
# 988 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Argo, MSGBOX_DEFAULT
# 989 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 990 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Dioscuri::
# 997 "data/maps/BigIslandN/scripts.pory"
	lock
# 998 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 999 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Dioscuri_2
# 1001 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_Script_Dioscuri_7
BigIslandN_Script_Dioscuri_6:
# 1003 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_Script_Dioscuri_4
# 1011 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Dioscuri_Text_0
BigIslandN_Script_Dioscuri_1:
# 1013 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1014 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Dioscuri_2:
# 1000 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_3:
# 1002 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_4:
# 1004 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_BIGISLANDN_DIOSCURIFOUND, BigIslandN_Script_Dioscuri_11
# 1008 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_7:
# 1001 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_Script_Dioscuri_3
	goto BigIslandN_Script_Dioscuri_6

BigIslandN_Script_Dioscuri_11:
# 1005 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_BIGISLANDN_DIOSCURIFOUND
# 1006 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1


BigIslandN_Script_Orpheus::
# 1019 "data/maps/BigIslandN/scripts.pory"
	lock
# 1020 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 1021 "data/maps/BigIslandN/scripts.pory"
	switch VAR_ARGO_STATE
# 1022 "data/maps/BigIslandN/scripts.pory"
	case 0, BigIslandN_Script_Orpheus_3
# 1024 "data/maps/BigIslandN/scripts.pory"
	case 1, BigIslandN_Script_Orpheus_4
# 1026 "data/maps/BigIslandN/scripts.pory"
	case 2, BigIslandN_Script_Orpheus_5
# 1028 "data/maps/BigIslandN/scripts.pory"
	case 3, BigIslandN_Script_Orpheus_6
# 1030 "data/maps/BigIslandN/scripts.pory"
	case 4, BigIslandN_Script_Orpheus_7
# 1032 "data/maps/BigIslandN/scripts.pory"
	case 5, BigIslandN_Script_Orpheus_8
# 1034 "data/maps/BigIslandN/scripts.pory"
	case 6, BigIslandN_Script_Orpheus_9
# 1036 "data/maps/BigIslandN/scripts.pory"
	case 7, BigIslandN_Script_Orpheus_10
# 1039 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus8, MSGBOX_DEFAULT
BigIslandN_Script_Orpheus_1:
# 1041 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1042 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Orpheus_3:
# 1023 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus0, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_4:
# 1025 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_5:
# 1027 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_6:
# 1029 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_7:
# 1031 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus4, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_8:
# 1033 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus5, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_9:
# 1035 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus6, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_10:
# 1037 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus7, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1


BigIslandN_Script_Theseus::
# 1047 "data/maps/BigIslandN/scripts.pory"
	lock
# 1048 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 1049 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Theseus, MSGBOX_DEFAULT
# 1050 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1051 "data/maps/BigIslandN/scripts.pory"
	release
	end


# 1055 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1057 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1057 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1057 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1057 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1057 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1060 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1062 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1065 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
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
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 1071 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1076 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 1077 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1077 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1078 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1081 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 1082 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1083 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1086 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1090 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 1091 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1091 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1092 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1092 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1092 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1092 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1092 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1095 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 1096 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1097 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1100 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 1101 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1104 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 1105 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1105 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1106 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1109 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 1110 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1110 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1111 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1111 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1111 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1112 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1113 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1113 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1116 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 1117 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1118 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1121 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 1122 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1123 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1126 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1128 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 1131 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
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
BigIslandN_Movement_AmbusherExit4:
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1139 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1143 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 1144 "data/maps/BigIslandN/scripts.pory"
	face_up
# 1145 "data/maps/BigIslandN/scripts.pory"
	face_down
# 1146 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 1149 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 1150 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1150 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1150 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1152 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1152 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1152 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1152 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1155 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 1156 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1157 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1160 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1168 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 1169 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1169 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1170 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1171 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

# 1174 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerExitColchis:
# 1175 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1178 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo1:
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1179 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1182 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo2:
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
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1187 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1188 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1188 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1188 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1190 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1190 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1191 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1192 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1195 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonMedeaExeunt:
# 1196 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1196 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1199 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_DioscuriExeunt:
# 1200 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1200 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1200 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1200 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1203 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusExeunt:
# 1204 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1205 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1205 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1205 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1205 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1208 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusExeunt:
# 1209 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1210 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1210 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1210 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1210 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 613 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 764 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 972 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 977 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Script_Dioscuri_Text_0:
# 1011 "data/maps/BigIslandN/scripts.pory"
	.string "ERROR: BigIslandN_Script_Dioscuri\n"
	.string "VAR_ARGO_STATE index not accounted for.\l"
	.string "Please report bugs to CornixSenex$"

BigIslandN_Text_ArrivedAtColchis1::
# 1213 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to my\l"
	.string "sources Colchis is located in a cave on\l"
	.string "the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 1220 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 1224 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 1228 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 1232 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 1236 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 1240 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 1244 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 1248 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 1252 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 1256 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 1260 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 1264 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 1268 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 1272 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 1277 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 1281 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 1285 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 1289 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_Ostracon::
# 1304 "data/maps/BigIslandN/scripts.pory"
	.string "What's that? Philoctetes enchanted by\n"
	.string "an evil witch?\l"
	.string "And a volcanic bird!\l"
	.string "An old prophet gave you an Ostracon?\l"
	.string "By SPEAROW free!\l"
	.string "What nonesense is all this? We need to\l"
	.string "work on opening this cave.$"

BigIslandN_Text_ReleaseSpearow::
# 1308 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 1312 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 1316 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 1320 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"

BigIslandN_Text_Argo::
# 1324 "data/maps/BigIslandN/scripts.pory"
	.string "The mighty ship of Jason:\n"
	.string "THE ARGO$"

BigIslandN_Text_Orpheus0::
# 1328 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 0 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus1::
# 1332 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 1 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus2::
# 1336 "data/maps/BigIslandN/scripts.pory"
	.string "On distant shores, where sea and sorrow\n"
	.string "meet, I stand, a wanderer, with heart\l"
	.string "forlorn and beat. My quest, lost to the\l"
	.string "waves' relentless roar, and with it, all\l"
	.string "my hopes, forever on the shore.$"

BigIslandN_Text_Orpheus3::
# 1340 "data/maps/BigIslandN/scripts.pory"
	.string "The sun dips low, in fiery splendor set,\n"
	.string "amidst the waves, that gently lap and\l"
	.string "fret. The salty scent, of ocean's\l"
	.string "darkling breast, invades my senses, and\l"
	.string "my soul finds rest.$"

BigIslandN_Text_Orpheus4::
# 1344 "data/maps/BigIslandN/scripts.pory"
	.string "The cries of gulls, that wheel and soar\n"
	.string "above, echo my sighs, and share my\l"
	.string "endless love, for thee, O Ocean, vast\l"
	.string "and wild and free, that holds my dreams,\l"
	.string "in thy dark secrecy.$"

BigIslandN_Text_Orpheus5::
# 1348 "data/maps/BigIslandN/scripts.pory"
	.string "The breeze, that whispers secrets in my\n"
	.string "ear, of distant lands, and memories so\l"
	.string "dear, stirs up the depths, of sorrow and\l"
	.string "despair, and I, a shipwrecked soul, am\l"
	.string "left to stare.$"

BigIslandN_Text_Orpheus6::
# 1352 "data/maps/BigIslandN/scripts.pory"
	.string "The tide, that ebbs and flows, with\n"
	.string "soothing sound, lulls me to sleep, on\l"
	.string "this forsaken ground, yet, in my dreams,\l"
	.string "I see the shores I've left, and wake to\l"
	.string "find, my heart still bereft.$"

BigIslandN_Text_Orpheus7::
# 1356 "data/maps/BigIslandN/scripts.pory"
	.string "O, cruel fate, that brought me to this\n"
	.string "place! A poet, lost, without a friendly\l"
	.string "face. My lyre, silenced, and my voice,\l"
	.string "unheard. A castaway, with none to share\l"
	.string "my word.$"

BigIslandN_Text_Orpheus8::
# 1360 "data/maps/BigIslandN/scripts.pory"
	.string "The ocean's vastness stretches far and\n"
	.string "wide. A limitless expanse, where I am\l"
	.string "lost inside. No hope, no rescue, comes\l"
	.string "to set me free. A prisoner, of the waves'\l"
	.string "eternity.$"

BigIslandN_Text_Dioscuri1::
# 1364 "data/maps/BigIslandN/scripts.pory"
	.string "I can't believe we're stuck on guard\n"
	.string "duty!\l"
	.string "It's so boring! How long have they been\l"
	.string "gone?$"

BigIslandN_Text_Dioscuri2::
# 1368 "data/maps/BigIslandN/scripts.pory"
	.string "We made friends with a couple islanders\n"
	.string "who tell us that people have been going\l"
	.string "missing recently and the rumour is\l"
	.string "they're being kidnapped by a secret\l"
	.string "cult and sacrificed to the volcano God.\l"
	.string "Of course it all sounds like nonesense\l"
	.string "to us.$"

BigIslandN_Text_Dioscuri3::
# 1372 "data/maps/BigIslandN/scripts.pory"
	.string "Hey {PLAYER} don't tell Jason that we\n"
	.string "snuck off.$"

BigIslandN_Text_Theseus::
# 1376 "data/maps/BigIslandN/scripts.pory"
	.string "This island's home to beautiful women!$"

BigIslandN_Text_MedeaExitColchis::
# 1381 "data/maps/BigIslandN/scripts.pory"
	.string "Ethay ayway otay Olchiscay isay\n"
	.string "osedclay oreverfay.$"

BigIslandN_Text_JasonExitColchis::
# 1385 "data/maps/BigIslandN/scripts.pory"
	.string "Let us depart this place for our new\n"
	.string "life.$"

BigIslandN_Text_JasonExeunt1::
# 1395 "data/maps/BigIslandN/scripts.pory"
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
# 1399 "data/maps/BigIslandN/scripts.pory"
	.string "Hip hip horray!\p"
	.string "Hip hip hooray!\p"
	.string "Hip hip hooray!$"

BigIslandN_Text_JasonExeunt2::
# 1403 "data/maps/BigIslandN/scripts.pory"
	.string "Now let us return home, triumphantly.$"

BigIslandN_Text_JasonExeunt3::
# 1407 "data/maps/BigIslandN/scripts.pory"
	.string "Visit us sometime soon in Bulbus Town.$"
