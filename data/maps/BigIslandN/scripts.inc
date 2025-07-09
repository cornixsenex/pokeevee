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
	special TransitionMapMusic
# 70 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_Transition_MareOriens::
# 74 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 2
# 75 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 76 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_Transition_MareSubtropicum::
# 80 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 3
# 81 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 82 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_Transition_IslaIgnifera::
# 86 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_TEMP_5, 4
# 87 "data/maps/BigIslandN/scripts.pory"
	special TransitionMapMusic
# 88 "data/maps/BigIslandN/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandN_Script_ShowColchisCave::
# 93 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 94 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 99 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 100 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 106 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 57, 32
# 107 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 109 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 58, 32
# 110 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 112 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 59, 32
# 113 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 115 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 60, 32
# 116 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 118 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 61, 32
# 119 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 121 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 122 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 124 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 125 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 127 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 64, 32
# 128 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_INVISIBLE
# 130 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 131 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 133 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 134 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 136 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 137 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 139 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 140 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 142 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 143 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 145 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 146 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 148 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 149 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 151 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 12, MAP_BIG_ISLAND_N
# 152 "data/maps/BigIslandN/scripts.pory"
	removeobject 12
	return


BigIslandN_Script_ShowArgo2::
# 158 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 159 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 160 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 161 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 163 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 164 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 165 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 166 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 168 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 169 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 170 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 171 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 173 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 174 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 175 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 176 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 178 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 179 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 180 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 181 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 183 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 184 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 185 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 186 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 188 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 189 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 190 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 191 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	return


BigIslandN_Script_ShowArgo3::
# 198 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 199 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 200 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 201 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 203 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 204 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 205 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 206 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 208 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 209 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 210 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 211 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 213 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 214 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 215 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 216 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 218 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 219 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 220 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 221 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 223 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 224 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 225 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 226 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 228 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 229 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 230 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 231 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo7::
# 237 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 238 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 239 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 240 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 242 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 243 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 244 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 245 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 247 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 248 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 249 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 250 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 252 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 253 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 254 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 255 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 257 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 91, 26
# 258 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 259 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 260 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 262 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 263 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 264 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 265 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 267 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 268 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 269 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 270 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgoExit::
# 276 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 277 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 278 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 279 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 281 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 21
# 282 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 283 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 284 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 286 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 21
# 287 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 288 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 289 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 291 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 83, 21
# 292 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 293 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 294 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 296 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 21
# 297 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 298 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 299 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 301 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 39
# 302 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 303 "data/maps/BigIslandN/scripts.pory"
	addobject 7, MAP_BIG_ISLAND_N
# 304 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 306 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 30, 39
# 307 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_RIGHT
# 308 "data/maps/BigIslandN/scripts.pory"
	addobject 12, MAP_BIG_ISLAND_N
# 309 "data/maps/BigIslandN/scripts.pory"
	showobjectat 12, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoExit::
# 315 "data/maps/BigIslandN/scripts.pory"
	lockall
# 318 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 319 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 322 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 323 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 328 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 329 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 330 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 331 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 333 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 334 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 335 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 336 "data/maps/BigIslandN/scripts.pory"
	waitse
# 337 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 338 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 339 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 342 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 24, 190, 98
# 343 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_MedeaExitColchis, MSGBOX_DEFAULT
# 344 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 24
# 347 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 348 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExitColchis, MSGBOX_DEFAULT
# 349 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 350 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 352 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo1
# 353 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo1
# 354 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo1
# 355 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 356 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 357 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 358 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 359 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 360 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 361 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 362 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 363 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo2
# 364 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo2
# 365 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo2
# 366 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 369 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 370 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt1, MSGBOX_DEFAULT
# 371 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 373 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ThreeCheers, MSGBOX_DEFAULT
# 375 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 376 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt2, MSGBOX_DEFAULT
# 377 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 378 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 381 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonMedeaExeunt
# 382 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_JasonMedeaExeunt
# 383 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_DioscuriExeunt
# 384 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_DioscuriExeunt
# 385 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusExeunt
# 386 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusExeunt
# 387 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 390 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 391 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 394 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 395 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt3, MSGBOX_DEFAULT
# 396 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 397 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 400 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_DioscuriExeunt
# 401 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_DioscuriExeunt
# 402 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 405 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 406 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
# 408 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_EscapeColchis::
# 413 "data/maps/BigIslandN/scripts.pory"
	lockall
# 416 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 417 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 420 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 421 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 425 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 426 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 427 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 428 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 430 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 431 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 432 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 433 "data/maps/BigIslandN/scripts.pory"
	waitse
# 434 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 435 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 436 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 439 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 442 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_ArgoArrival::
# 448 "data/maps/BigIslandN/scripts.pory"
	delay 50
# 449 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 450 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 453 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 454 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 460 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 461 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 464 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 465 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 466 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 467 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 468 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 469 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 470 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 471 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 472 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 473 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 474 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 475 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 476 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 479 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 480 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 481 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 482 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 483 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 486 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 487 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 488 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 489 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 490 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 491 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 492 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 493 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 494 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 497 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 498 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 499 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 500 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 501 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 502 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 503 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 504 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 505 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 508 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 509 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 510 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 511 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 512 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 513 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 514 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 515 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 516 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 517 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 518 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 519 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 520 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 521 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 522 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 523 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 524 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 525 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 526 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 527 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 528 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 529 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 530 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 533 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 534 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 535 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 536 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 539 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 540 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 541 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 545 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 546 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 547 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 548 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 549 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 550 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 551 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 552 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 553 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 554 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 555 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 556 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 558 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 564 "data/maps/BigIslandN/scripts.pory"
	lock
# 565 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 566 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 567 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 568 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 569 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 570 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 575 "data/maps/BigIslandN/scripts.pory"
	lockall
# 576 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 586 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 589 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 590 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 593 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 577 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 578 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 579 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 580 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 581 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 584 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 587 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 582 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 599 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 600 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 601 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 602 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 603 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 604 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 605 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 606 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 607 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 608 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 612 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 613 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 614 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 615 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 616 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 617 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 618 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 623 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 624 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 625 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 626 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 627 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 628 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 629 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 630 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 631 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 632 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 633 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 634 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 637 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 638 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 639 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 640 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 641 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 642 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 643 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 645 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 646 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 647 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 648 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 649 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 650 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 651 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 653 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 654 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 655 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 656 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 657 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 658 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 659 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 661 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 662 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 663 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 664 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 665 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 666 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 667 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 671 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 672 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 673 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 674 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 675 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 676 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 677 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 678 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 679 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 680 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 681 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 682 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 683 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 685 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 686 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 687 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 688 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 689 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 690 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 691 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 692 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 693 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 694 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 695 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 698 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 699 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 701 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 705 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 708 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 709 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 711 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 712 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 713 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 719 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 720 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 721 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 723 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 724 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 726 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 727 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 728 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 729 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 730 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 731 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 734 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 735 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 737 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 738 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 739 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 740 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 741 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 742 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 744 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 745 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 747 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 748 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 752 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 753 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 754 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 755 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 756 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 758 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 759 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 760 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 761 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 762 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 765 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 766 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 767 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 769 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 770 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 771 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 773 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 774 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 775 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 780 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 781 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 785 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 786 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 787 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 788 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 789 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 791 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 792 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 793 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 794 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 797 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 798 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 799 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 800 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 801 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 802 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 803 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 804 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 807 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 808 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 809 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 810 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 813 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 814 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 815 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 816 "data/maps/BigIslandN/scripts.pory"
	waitse
# 817 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 818 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 819 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 822 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 823 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 824 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 825 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 826 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 828 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 830 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 833 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 834 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 835 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 836 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 839 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 848 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 856 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 857 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 858 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 859 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 862 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 864 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 865 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 866 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 869 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 907 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 908 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 909 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 849 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO
# 850 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 851 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 852 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 853 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 854 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 860 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 871 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASON_OSTRACON, BigIslandN_Script_JasonAtColchisCave_12
BigIslandN_Script_JasonAtColchisCave_11:
# 879 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 880 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_14
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_12:
# 872 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASON_OSTRACON
# 873 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 874 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 875 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ostracon, MSGBOX_DEFAULT
# 876 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_11

BigIslandN_Script_JasonAtColchisCave_14:
# 881 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 882 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 902 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 903 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 883 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 884 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 885 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_19
# 889 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 890 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_22
# 894 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 895 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 896 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 897 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 898 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 886 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 887 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_22:
# 891 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 892 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 914 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 915 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 916 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 917 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 918 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 919 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 920 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 921 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 922 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 923 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 924 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 925 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 926 "data/maps/BigIslandN/scripts.pory"
	waitse
# 928 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 929 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 930 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 931 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 933 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 934 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 936 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 937 "data/maps/BigIslandN/scripts.pory"
	releaseall
# 938 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	end


BigIslandN_Script_TestNicknamer::
# 946 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 947 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 951 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 952 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 956 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 948 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 949 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 953 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 954 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


BigIslandN_Script_Argo::
# 963 "data/maps/BigIslandN/scripts.pory"
	lock
# 964 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Argo, MSGBOX_DEFAULT
# 965 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 966 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Dioscuri::
# 973 "data/maps/BigIslandN/scripts.pory"
	lock
# 974 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 975 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Dioscuri_2
# 977 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_Script_Dioscuri_7
BigIslandN_Script_Dioscuri_6:
# 979 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_Script_Dioscuri_4
# 987 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Dioscuri_Text_0
BigIslandN_Script_Dioscuri_1:
# 989 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 990 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Dioscuri_2:
# 976 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_3:
# 978 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_4:
# 980 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_BIGISLANDN_DIOSCURIFOUND, BigIslandN_Script_Dioscuri_11
# 984 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_7:
# 977 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_Script_Dioscuri_3
	goto BigIslandN_Script_Dioscuri_6

BigIslandN_Script_Dioscuri_11:
# 981 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_BIGISLANDN_DIOSCURIFOUND
# 982 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1


BigIslandN_Script_Orpheus::
# 995 "data/maps/BigIslandN/scripts.pory"
	lock
# 996 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 997 "data/maps/BigIslandN/scripts.pory"
	switch VAR_ARGO_STATE
# 998 "data/maps/BigIslandN/scripts.pory"
	case 0, BigIslandN_Script_Orpheus_3
# 1000 "data/maps/BigIslandN/scripts.pory"
	case 1, BigIslandN_Script_Orpheus_4
# 1002 "data/maps/BigIslandN/scripts.pory"
	case 2, BigIslandN_Script_Orpheus_5
# 1004 "data/maps/BigIslandN/scripts.pory"
	case 3, BigIslandN_Script_Orpheus_6
# 1006 "data/maps/BigIslandN/scripts.pory"
	case 4, BigIslandN_Script_Orpheus_7
# 1008 "data/maps/BigIslandN/scripts.pory"
	case 5, BigIslandN_Script_Orpheus_8
# 1010 "data/maps/BigIslandN/scripts.pory"
	case 6, BigIslandN_Script_Orpheus_9
# 1012 "data/maps/BigIslandN/scripts.pory"
	case 7, BigIslandN_Script_Orpheus_10
# 1015 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus8, MSGBOX_DEFAULT
BigIslandN_Script_Orpheus_1:
# 1017 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1018 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Orpheus_3:
# 999 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus0, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_4:
# 1001 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_5:
# 1003 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_6:
# 1005 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_7:
# 1007 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus4, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_8:
# 1009 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus5, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_9:
# 1011 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus6, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_10:
# 1013 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus7, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1


BigIslandN_Script_Theseus::
# 1023 "data/maps/BigIslandN/scripts.pory"
	lock
# 1024 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 1025 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Theseus, MSGBOX_DEFAULT
# 1026 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 1027 "data/maps/BigIslandN/scripts.pory"
	release
	end


# 1031 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 1032 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1033 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1033 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1033 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1033 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1033 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1036 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 1037 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1038 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1038 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1038 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1038 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1041 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 1042 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1042 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 1047 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 1048 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1048 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1052 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 1053 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1053 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1054 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1057 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 1058 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1059 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1062 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1063 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1066 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1067 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1068 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1071 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1073 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1076 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 1077 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1080 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1081 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1082 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1085 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1086 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1087 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1092 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 1093 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1094 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1097 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 1098 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1102 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 1103 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1104 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 1107 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 1108 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1108 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1108 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1108 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1109 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1110 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1110 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1113 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1114 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1115 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1116 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1116 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1119 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 1120 "data/maps/BigIslandN/scripts.pory"
	face_up
# 1121 "data/maps/BigIslandN/scripts.pory"
	face_down
# 1122 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 1125 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1126 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1131 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 1132 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1133 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1136 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 1137 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1137 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1137 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1137 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1139 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1140 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1141 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1141 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1141 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1144 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1145 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1146 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1147 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

# 1150 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerExitColchis:
# 1151 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1154 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo1:
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1155 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1158 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo2:
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1159 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1160 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1161 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1162 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1163 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1164 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1165 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1166 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1166 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1167 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1168 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1171 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonMedeaExeunt:
# 1172 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1172 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1175 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_DioscuriExeunt:
# 1176 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1176 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1176 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1176 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1179 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusExeunt:
# 1180 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1181 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1184 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusExeunt:
# 1185 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1186 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 589 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 740 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 948 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 953 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Script_Dioscuri_Text_0:
# 987 "data/maps/BigIslandN/scripts.pory"
	.string "ERROR: BigIslandN_Script_Dioscuri\n"
	.string "VAR_ARGO_STATE index not accounted for.\l"
	.string "Please report bugs to CornixSenex$"

BigIslandN_Text_ArrivedAtColchis1::
# 1189 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 1193 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 1197 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 1201 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 1205 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 1209 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 1213 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 1217 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 1221 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 1225 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 1229 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 1233 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 1237 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 1241 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 1245 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 1250 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 1254 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 1258 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 1262 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_Ostracon::
# 1277 "data/maps/BigIslandN/scripts.pory"
	.string "What's that? Philoctetes enchanted by\n"
	.string "an evil witch?\l"
	.string "And a volcanic bird!\l"
	.string "An old prophet gave you an Ostracon?\l"
	.string "By SPEAROW free!\l"
	.string "What nonesense is all this? We need to\l"
	.string "work on opening this cave.$"

BigIslandN_Text_ReleaseSpearow::
# 1281 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 1285 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 1289 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 1293 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"

BigIslandN_Text_Argo::
# 1297 "data/maps/BigIslandN/scripts.pory"
	.string "The mighty ship of Jason:\n"
	.string "THE ARGO$"

BigIslandN_Text_Orpheus0::
# 1301 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 0 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus1::
# 1305 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 1 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus2::
# 1309 "data/maps/BigIslandN/scripts.pory"
	.string "On distant shores, where sea and sorrow\n"
	.string "meet, I stand, a wanderer, with heart\l"
	.string "forlorn and beat. My quest, lost to the\l"
	.string "waves' relentless roar, and with it, all\l"
	.string "my hopes, forever on the shore.$"

BigIslandN_Text_Orpheus3::
# 1313 "data/maps/BigIslandN/scripts.pory"
	.string "The sun dips low, in fiery splendor set,\n"
	.string "amidst the waves, that gently lap and\l"
	.string "fret. The salty scent, of ocean's\l"
	.string "darkling breast, invades my senses, and\l"
	.string "my soul finds rest.$"

BigIslandN_Text_Orpheus4::
# 1317 "data/maps/BigIslandN/scripts.pory"
	.string "The cries of gulls, that wheel and soar\n"
	.string "above, echo my sighs, and share my\l"
	.string "endless love, for thee, O Ocean, vast\l"
	.string "and wild and free, that holds my dreams,\l"
	.string "in thy dark secrecy.$"

BigIslandN_Text_Orpheus5::
# 1321 "data/maps/BigIslandN/scripts.pory"
	.string "The breeze, that whispers secrets in my\n"
	.string "ear, of distant lands, and memories so\l"
	.string "dear, stirs up the depths, of sorrow and\l"
	.string "despair, and I, a shipwrecked soul, am\l"
	.string "left to stare.$"

BigIslandN_Text_Orpheus6::
# 1325 "data/maps/BigIslandN/scripts.pory"
	.string "The tide, that ebbs and flows, with\n"
	.string "soothing sound, lulls me to sleep, on\l"
	.string "this forsaken ground, yet, in my dreams,\l"
	.string "I see the shores I've left, and wake to\l"
	.string "find, my heart still bereft.$"

BigIslandN_Text_Orpheus7::
# 1329 "data/maps/BigIslandN/scripts.pory"
	.string "O, cruel fate, that brought me to this\n"
	.string "place! A poet, lost, without a friendly\l"
	.string "face. My lyre, silenced, and my voice,\l"
	.string "unheard. A castaway, with none to share\l"
	.string "my word.$"

BigIslandN_Text_Orpheus8::
# 1333 "data/maps/BigIslandN/scripts.pory"
	.string "The ocean's vastness stretches far and\n"
	.string "wide. A limitless expanse, where I am\l"
	.string "lost inside. No hope, no rescue, comes\l"
	.string "to set me free. A prisoner, of the waves'\l"
	.string "eternity.$"

BigIslandN_Text_Dioscuri1::
# 1337 "data/maps/BigIslandN/scripts.pory"
	.string "I can't believe we're stuck on guard\n"
	.string "duty!\l"
	.string "It's so boring! How long have they been\l"
	.string "gone?$"

BigIslandN_Text_Dioscuri2::
# 1341 "data/maps/BigIslandN/scripts.pory"
	.string "We made friends with a couple islanders\n"
	.string "who tell us that people have been going\l"
	.string "missing recently and the rumour is\l"
	.string "they're being kidnapped by a secret\l"
	.string "cult and sacrificed to the volcano God.\l"
	.string "Of course it all sounds like nonesense\l"
	.string "to us.$"

BigIslandN_Text_Dioscuri3::
# 1345 "data/maps/BigIslandN/scripts.pory"
	.string "Hey {PLAYER} don't tell Jason that we\n"
	.string "snuck off.$"

BigIslandN_Text_Theseus::
# 1349 "data/maps/BigIslandN/scripts.pory"
	.string "This island's home to beautiful women!$"

BigIslandN_Text_MedeaExitColchis::
# 1354 "data/maps/BigIslandN/scripts.pory"
	.string "Ethay ayway otay Olchiscay isay\n"
	.string "osedclay oreverfay.$"

BigIslandN_Text_JasonExitColchis::
# 1358 "data/maps/BigIslandN/scripts.pory"
	.string "Let us depart this place for our new\n"
	.string "life.$"

BigIslandN_Text_JasonExeunt1::
# 1368 "data/maps/BigIslandN/scripts.pory"
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
# 1372 "data/maps/BigIslandN/scripts.pory"
	.string "Hip hip horray!\p"
	.string "Hip hip hooray!\p"
	.string "Hip hip hooray!$"

BigIslandN_Text_JasonExeunt2::
# 1376 "data/maps/BigIslandN/scripts.pory"
	.string "Now let us return home, triumphantly.$"

BigIslandN_Text_JasonExeunt3::
# 1380 "data/maps/BigIslandN/scripts.pory"
	.string "Visit us sometime soon in Bulbus Town.$"
