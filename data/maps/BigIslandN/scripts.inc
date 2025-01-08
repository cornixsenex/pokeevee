BigIslandN_MapScripts::
# 21 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 39 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
# 46 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 28 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 32 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 14
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 35 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 29 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 31 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgoExit
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 28 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 40 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 40 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 18
	goto_if_gt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 41 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1

BigIslandN_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 47 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 14, BigIslandN_Script_ArgoExit
# 48 "data/maps/BigIslandN/scripts.pory"
	map_script_2 VAR_ARGO_STATE, 18, BigIslandN_Script_EscapeColchis
	.2byte 0


BigIslandN_Script_ShowColchisCave::
# 55 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 56 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 61 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 62 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 68 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 57, 32
# 69 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 71 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 58, 32
# 72 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 74 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 59, 32
# 75 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 77 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 60, 32
# 78 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 80 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 61, 32
# 81 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 83 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 84 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 86 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 87 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 89 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 64, 32
# 90 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_INVISIBLE
# 92 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 93 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 95 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 96 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 98 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 99 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 101 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 102 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 104 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 105 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 107 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 108 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 110 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 111 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 113 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 12, MAP_BIG_ISLAND_N
# 114 "data/maps/BigIslandN/scripts.pory"
	removeobject 12
	return


BigIslandN_Script_ShowArgo2::
# 120 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 121 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 123 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 125 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 126 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 127 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 128 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 130 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 132 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 133 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 135 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 136 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 137 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 138 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 140 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 141 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 142 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 143 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 145 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 146 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 147 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 148 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 150 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 151 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 152 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 153 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	return


BigIslandN_Script_ShowArgo3::
# 160 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 161 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 162 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 163 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 165 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 166 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 167 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 168 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 170 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 171 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 172 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 173 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 175 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 176 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 177 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 178 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 180 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 181 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 182 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 183 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 185 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 186 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 187 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 188 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 190 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 191 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 192 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 193 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo7::
# 199 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 200 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 201 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 202 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 204 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 205 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 206 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 207 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 209 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 210 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 211 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 212 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 214 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 215 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 216 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 217 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 219 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 91, 26
# 220 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 221 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 222 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 224 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 225 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 226 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 227 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 229 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 230 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 231 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 232 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgoExit::
# 238 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 239 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 240 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 241 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 243 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 21
# 244 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 245 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 246 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 248 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 21
# 249 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 250 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 251 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 253 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 83, 21
# 254 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 255 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 256 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 258 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 21
# 259 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 260 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 261 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 263 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 39
# 264 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 265 "data/maps/BigIslandN/scripts.pory"
	addobject 7, MAP_BIG_ISLAND_N
# 266 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 268 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 12, 30, 39
# 269 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_RIGHT
# 270 "data/maps/BigIslandN/scripts.pory"
	addobject 12, MAP_BIG_ISLAND_N
# 271 "data/maps/BigIslandN/scripts.pory"
	showobjectat 12, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoExit::
# 277 "data/maps/BigIslandN/scripts.pory"
	lockall
# 280 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 281 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 284 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 285 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 290 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 291 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 292 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 293 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 295 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 296 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 297 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 298 "data/maps/BigIslandN/scripts.pory"
	waitse
# 299 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 300 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 301 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 304 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 24, 190, 98
# 305 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_MedeaExitColchis, MSGBOX_DEFAULT
# 306 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 24
# 309 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 310 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExitColchis, MSGBOX_DEFAULT
# 311 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 312 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 314 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo1
# 315 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo1
# 316 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo1
# 317 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 318 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 319 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 320 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 321 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 322 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 323 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, Common_Movement_WalkRight
# 324 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 325 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_ExeuntArgo2
# 326 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_ExeuntArgo2
# 327 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_ExeuntArgo2
# 328 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 331 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 332 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt1, MSGBOX_DEFAULT
# 333 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 335 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ThreeCheers, MSGBOX_DEFAULT
# 337 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 338 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt2, MSGBOX_DEFAULT
# 339 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 340 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 343 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonMedeaExeunt
# 344 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_JasonMedeaExeunt
# 345 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_DioscuriExeunt
# 346 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_DioscuriExeunt
# 347 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusExeunt
# 348 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusExeunt
# 349 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 352 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 353 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 356 "data/maps/BigIslandN/scripts.pory"
	load_field_pic 21, 190, 99
# 357 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonExeunt3, MSGBOX_DEFAULT
# 358 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 359 "data/maps/BigIslandN/scripts.pory"
	destroy_field_pic 21
# 362 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_DioscuriExeunt
# 363 "data/maps/BigIslandN/scripts.pory"
	applymovement 12, BigIslandN_Movement_DioscuriExeunt
# 364 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 367 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 368 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
# 370 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_EscapeColchis::
# 375 "data/maps/BigIslandN/scripts.pory"
	lockall
# 378 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerExitColchis
# 379 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 382 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 383 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 387 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 388 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 389 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 390 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 392 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 393 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 394 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 395 "data/maps/BigIslandN/scripts.pory"
	waitse
# 396 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 397 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 398 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 401 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 20
# 404 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_ArgoArrival::
# 410 "data/maps/BigIslandN/scripts.pory"
	delay 50
# 411 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 412 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 415 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 416 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 422 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 423 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 426 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 427 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 428 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 429 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 430 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 431 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 432 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 433 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 434 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 435 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 436 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 437 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 438 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 441 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 442 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 443 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 444 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 445 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 448 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 449 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 450 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 451 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 452 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 453 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 454 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 455 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 456 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 459 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 460 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 461 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 462 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 463 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 464 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 465 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 466 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 467 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 470 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 471 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 472 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 473 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 474 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 475 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 476 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 477 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 478 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 479 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 480 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 481 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 482 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 483 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 484 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 485 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 486 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 487 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 488 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 489 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 490 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 491 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 492 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 495 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 496 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 497 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 498 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 501 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 502 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 503 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 507 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 508 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 509 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 510 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 511 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 512 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 513 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 514 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 515 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 516 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 517 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 518 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 520 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 526 "data/maps/BigIslandN/scripts.pory"
	lock
# 527 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 528 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 529 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 530 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 531 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 532 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 537 "data/maps/BigIslandN/scripts.pory"
	lockall
# 538 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 548 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 551 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 552 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 555 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 539 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 540 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 541 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 542 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 543 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 546 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 549 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 544 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 561 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 562 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 563 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 564 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 565 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 566 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 567 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 568 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 569 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 570 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 574 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 575 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 576 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 577 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 578 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 579 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 580 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 585 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 586 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 587 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 588 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 589 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 590 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 591 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 592 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 593 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 594 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 595 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 596 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 599 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 600 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 601 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 602 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 603 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 604 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 605 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 607 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 608 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 609 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 610 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 611 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 612 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 613 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 615 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 616 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 617 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 618 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 619 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 620 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 621 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 623 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 624 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 625 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 626 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 627 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 628 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 629 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 633 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 634 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 635 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 636 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 637 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 638 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 639 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 640 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 641 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 642 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 643 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 644 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 645 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 647 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 648 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 649 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 650 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 651 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 652 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 653 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 654 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 655 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 656 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 657 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 660 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 661 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 663 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 667 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 670 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 671 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 673 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 674 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 675 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 681 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 682 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 683 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 685 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 686 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 688 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 689 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 690 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 691 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 692 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 693 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 696 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 697 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 699 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 700 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 701 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 702 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 703 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 704 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 706 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 707 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 709 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 710 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 714 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 715 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 716 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 717 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 718 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 720 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 721 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 722 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 723 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 724 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 727 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 728 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 729 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 731 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 732 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 733 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 735 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 736 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 737 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 742 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 743 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 747 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 748 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 749 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 750 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 751 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 753 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 754 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 755 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 756 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 759 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 760 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 761 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 762 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 763 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 764 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 765 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 766 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 769 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 770 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 771 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 772 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 775 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 776 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 777 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 778 "data/maps/BigIslandN/scripts.pory"
	waitse
# 779 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 780 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 781 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 784 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 785 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 786 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 787 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 788 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 790 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 792 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 795 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 796 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 797 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 798 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 801 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 810 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 818 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 819 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 820 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 821 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 824 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 826 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 827 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 828 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 831 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 869 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 870 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 871 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 811 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO
# 812 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 813 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 814 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 815 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 816 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 822 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 833 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASON_OSTRACON, BigIslandN_Script_JasonAtColchisCave_12
BigIslandN_Script_JasonAtColchisCave_11:
# 841 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 842 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_14
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_12:
# 834 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASON_OSTRACON
# 835 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 836 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 837 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ostracon, MSGBOX_DEFAULT
# 838 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_11

BigIslandN_Script_JasonAtColchisCave_14:
# 843 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 844 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 864 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 865 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 845 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 846 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 847 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_19
# 851 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 852 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_22
# 856 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 857 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 858 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 859 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 860 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 848 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 849 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_22:
# 853 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 854 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 876 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 877 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 878 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 879 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 880 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 881 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 882 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 883 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 884 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 885 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 886 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 887 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 888 "data/maps/BigIslandN/scripts.pory"
	waitse
# 890 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 891 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 892 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 893 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 895 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 896 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 898 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 899 "data/maps/BigIslandN/scripts.pory"
	releaseall
# 900 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	end


BigIslandN_Script_TestNicknamer::
# 908 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 909 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 913 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 914 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 918 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 910 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 911 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 915 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 916 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


BigIslandN_Script_Argo::
# 925 "data/maps/BigIslandN/scripts.pory"
	lock
# 926 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Argo, MSGBOX_DEFAULT
# 927 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 928 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Dioscuri::
# 935 "data/maps/BigIslandN/scripts.pory"
	lock
# 936 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 937 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Dioscuri_2
# 939 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_Script_Dioscuri_7
BigIslandN_Script_Dioscuri_6:
# 941 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_Script_Dioscuri_4
# 949 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Dioscuri_Text_0
BigIslandN_Script_Dioscuri_1:
# 951 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 952 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Dioscuri_2:
# 938 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_3:
# 940 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_4:
# 942 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_BIGISLANDN_DIOSCURIFOUND, BigIslandN_Script_Dioscuri_11
# 946 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_7:
# 939 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_Script_Dioscuri_3
	goto BigIslandN_Script_Dioscuri_6

BigIslandN_Script_Dioscuri_11:
# 943 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_BIGISLANDN_DIOSCURIFOUND
# 944 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1


BigIslandN_Script_Orpheus::
# 957 "data/maps/BigIslandN/scripts.pory"
	lock
# 958 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 959 "data/maps/BigIslandN/scripts.pory"
	switch VAR_ARGO_STATE
# 960 "data/maps/BigIslandN/scripts.pory"
	case 0, BigIslandN_Script_Orpheus_3
# 962 "data/maps/BigIslandN/scripts.pory"
	case 1, BigIslandN_Script_Orpheus_4
# 964 "data/maps/BigIslandN/scripts.pory"
	case 2, BigIslandN_Script_Orpheus_5
# 966 "data/maps/BigIslandN/scripts.pory"
	case 3, BigIslandN_Script_Orpheus_6
# 968 "data/maps/BigIslandN/scripts.pory"
	case 4, BigIslandN_Script_Orpheus_7
# 970 "data/maps/BigIslandN/scripts.pory"
	case 5, BigIslandN_Script_Orpheus_8
# 972 "data/maps/BigIslandN/scripts.pory"
	case 6, BigIslandN_Script_Orpheus_9
# 974 "data/maps/BigIslandN/scripts.pory"
	case 7, BigIslandN_Script_Orpheus_10
# 977 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus8, MSGBOX_DEFAULT
BigIslandN_Script_Orpheus_1:
# 979 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 980 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Orpheus_3:
# 961 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus0, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_4:
# 963 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_5:
# 965 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_6:
# 967 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_7:
# 969 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus4, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_8:
# 971 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus5, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_9:
# 973 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus6, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_10:
# 975 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus7, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1


BigIslandN_Script_Theseus::
# 985 "data/maps/BigIslandN/scripts.pory"
	lock
# 986 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 987 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Theseus, MSGBOX_DEFAULT
# 988 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 989 "data/maps/BigIslandN/scripts.pory"
	release
	end


# 993 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 994 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 995 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 995 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 995 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 995 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 995 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 998 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 999 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1000 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1000 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1000 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1000 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1003 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 1004 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1004 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1005 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1005 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1005 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1005 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1006 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 1009 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 1010 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1010 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1011 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1014 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 1015 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1015 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1016 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1019 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 1020 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1021 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1024 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1025 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1028 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 1029 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1029 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1030 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1030 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1030 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1030 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1030 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1033 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 1034 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1035 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1038 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 1039 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1042 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1043 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1044 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1047 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 1048 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1048 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1049 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1050 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1051 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1054 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 1055 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1056 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1059 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 1060 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1061 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 1064 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 1065 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1066 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 1069 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 1070 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1070 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1070 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1070 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1071 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1072 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1075 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1076 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1077 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1078 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1078 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1081 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 1082 "data/maps/BigIslandN/scripts.pory"
	face_up
# 1083 "data/maps/BigIslandN/scripts.pory"
	face_down
# 1084 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 1087 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1088 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1089 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1090 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1090 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1090 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1090 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1093 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 1094 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1095 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1098 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1099 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1100 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1100 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1100 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1101 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1102 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1103 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1103 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1103 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1106 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 1107 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1107 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1108 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1109 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

# 1112 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerExitColchis:
# 1113 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1116 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo1:
# 1117 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1117 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 1117 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 1120 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_ExeuntArgo2:
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1121 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1122 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1123 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1123 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1123 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1124 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1125 "data/maps/BigIslandN/scripts.pory"
	walk_right
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
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1127 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1128 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1129 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1130 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1133 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonMedeaExeunt:
# 1134 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1134 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1137 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_DioscuriExeunt:
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1138 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1141 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusExeunt:
# 1142 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 1143 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1143 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1143 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1143 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 1146 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusExeunt:
# 1147 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 1148 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1148 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1148 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 1148 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 551 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 702 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 910 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 915 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Script_Dioscuri_Text_0:
# 949 "data/maps/BigIslandN/scripts.pory"
	.string "ERROR: BigIslandN_Script_Dioscuri\n"
	.string "VAR_ARGO_STATE index not accounted for.\l"
	.string "Please report bugs to CornixSenex$"

BigIslandN_Text_ArrivedAtColchis1::
# 1151 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 1155 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 1159 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 1163 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 1167 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 1171 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 1175 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 1179 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 1183 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 1187 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 1191 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 1195 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 1199 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 1203 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 1207 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 1212 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 1216 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 1220 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 1224 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_Ostracon::
# 1239 "data/maps/BigIslandN/scripts.pory"
	.string "What's that? Philoctetes enchanted by\n"
	.string "an evil witch?\l"
	.string "And a volcanic bird!\l"
	.string "An old prophet gave you an Ostracon?\l"
	.string "By SPEAROW free!\l"
	.string "What nonesense is all this? We need to\l"
	.string "work on opening this cave.$"

BigIslandN_Text_ReleaseSpearow::
# 1243 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 1247 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 1251 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 1255 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"

BigIslandN_Text_Argo::
# 1259 "data/maps/BigIslandN/scripts.pory"
	.string "The mighty ship of Jason:\n"
	.string "THE ARGO$"

BigIslandN_Text_Orpheus0::
# 1263 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 0 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus1::
# 1267 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 1 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus2::
# 1271 "data/maps/BigIslandN/scripts.pory"
	.string "On distant shores, where sea and sorrow\n"
	.string "meet, I stand, a wanderer, with heart\l"
	.string "forlorn and beat. My quest, lost to the\l"
	.string "waves' relentless roar, and with it, all\l"
	.string "my hopes, forever on the shore.$"

BigIslandN_Text_Orpheus3::
# 1275 "data/maps/BigIslandN/scripts.pory"
	.string "The sun dips low, in fiery splendor set,\n"
	.string "amidst the waves, that gently lap and\l"
	.string "fret. The salty scent, of ocean's\l"
	.string "darkling breast, invades my senses, and\l"
	.string "my soul finds rest.$"

BigIslandN_Text_Orpheus4::
# 1279 "data/maps/BigIslandN/scripts.pory"
	.string "The cries of gulls, that wheel and soar\n"
	.string "above, echo my sighs, and share my\l"
	.string "endless love, for thee, O Ocean, vast\l"
	.string "and wild and free, that holds my dreams,\l"
	.string "in thy dark secrecy.$"

BigIslandN_Text_Orpheus5::
# 1283 "data/maps/BigIslandN/scripts.pory"
	.string "The breeze, that whispers secrets in my\n"
	.string "ear, of distant lands, and memories so\l"
	.string "dear, stirs up the depths, of sorrow and\l"
	.string "despair, and I, a shipwrecked soul, am\l"
	.string "left to stare.$"

BigIslandN_Text_Orpheus6::
# 1287 "data/maps/BigIslandN/scripts.pory"
	.string "The tide, that ebbs and flows, with\n"
	.string "soothing sound, lulls me to sleep, on\l"
	.string "this forsaken ground, yet, in my dreams,\l"
	.string "I see the shores I've left, and wake to\l"
	.string "find, my heart still bereft.$"

BigIslandN_Text_Orpheus7::
# 1291 "data/maps/BigIslandN/scripts.pory"
	.string "O, cruel fate, that brought me to this\n"
	.string "place! A poet, lost, without a friendly\l"
	.string "face. My lyre, silenced, and my voice,\l"
	.string "unheard. A castaway, with none to share\l"
	.string "my word.$"

BigIslandN_Text_Orpheus8::
# 1295 "data/maps/BigIslandN/scripts.pory"
	.string "The ocean's vastness stretches far and\n"
	.string "wide. A limitless expanse, where I am\l"
	.string "lost inside. No hope, no rescue, comes\l"
	.string "to set me free. A prisoner, of the waves'\l"
	.string "eternity.$"

BigIslandN_Text_Dioscuri1::
# 1299 "data/maps/BigIslandN/scripts.pory"
	.string "I can't believe we're stuck on guard\n"
	.string "duty!\l"
	.string "It's so boring! How long have they been\l"
	.string "gone?$"

BigIslandN_Text_Dioscuri2::
# 1303 "data/maps/BigIslandN/scripts.pory"
	.string "We made friends with a couple islanders\n"
	.string "who tell us that people have been going\l"
	.string "missing recently and the rumour is\l"
	.string "they're being kidnapped by a secret\l"
	.string "cult and sacrificed to the volcano God.\l"
	.string "Of course it all sounds like nonesense\l"
	.string "to us.$"

BigIslandN_Text_Dioscuri3::
# 1307 "data/maps/BigIslandN/scripts.pory"
	.string "Hey {PLAYER} don't tell Jason that we\n"
	.string "snuck off.$"

BigIslandN_Text_Theseus::
# 1311 "data/maps/BigIslandN/scripts.pory"
	.string "This island's home to beautiful women!$"

BigIslandN_Text_MedeaExitColchis::
# 1316 "data/maps/BigIslandN/scripts.pory"
	.string "Ethay ayway otay Olchiscay isay\n"
	.string "osedclay oreverfay.$"

BigIslandN_Text_JasonExitColchis::
# 1320 "data/maps/BigIslandN/scripts.pory"
	.string "Let us depart this place for our new\n"
	.string "life.$"

BigIslandN_Text_JasonExeunt1::
# 1330 "data/maps/BigIslandN/scripts.pory"
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
# 1334 "data/maps/BigIslandN/scripts.pory"
	.string "Hip hip horray!\p"
	.string "Hip hip hooray!\p"
	.string "Hip hip hooray!$"

BigIslandN_Text_JasonExeunt2::
# 1338 "data/maps/BigIslandN/scripts.pory"
	.string "Now let us return home, triumphantly.$"

BigIslandN_Text_JasonExeunt3::
# 1342 "data/maps/BigIslandN/scripts.pory"
	.string "Visit us sometime soon in Bulbus Town.$"
