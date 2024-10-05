BigIslandN_MapScripts::
# 16 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 32 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 23 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 28 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 26 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 23 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 33 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 34 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1


BigIslandN_Script_ShowColchisCave::
# 43 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 44 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 49 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 50 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 55 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 56 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 57 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 58 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 59 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 60 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 61 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 62 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 63 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 64 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 65 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 66 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 67 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 68 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo2::
# 73 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 74 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 75 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 76 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 78 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 79 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 80 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 81 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 83 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 84 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 85 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 86 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 88 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 89 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 90 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 91 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 93 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 94 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 95 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 96 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 98 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 99 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 101 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 103 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 104 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 106 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	return


BigIslandN_Script_ShowArgo3::
# 113 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 114 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 115 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 116 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 118 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 119 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 120 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 121 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 123 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 124 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 125 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 126 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 128 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 129 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 130 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 131 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 133 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 134 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 135 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 136 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 138 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 139 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 140 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 141 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 143 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 144 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 145 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 146 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo7::
# 152 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 153 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 154 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 155 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 157 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 158 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 160 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 162 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 163 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 164 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 165 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 167 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 168 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 169 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 170 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 172 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 91, 26
# 173 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 174 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 175 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 177 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 178 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 179 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 180 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 182 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 183 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 184 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 185 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ArgoArrival::
# 193 "data/maps/BigIslandN/scripts.pory"
	delay 50
# 194 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 198 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 199 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 205 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 206 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 209 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 210 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 211 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 212 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 213 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 214 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 215 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 216 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 217 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 218 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 219 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 220 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 221 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 224 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 225 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 226 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 227 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 228 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 231 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 232 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 233 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 234 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 235 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 236 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 237 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 238 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 239 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 242 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 243 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 244 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 245 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 246 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 247 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 248 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 249 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 250 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 253 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 254 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 255 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 257 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 258 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 259 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 260 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 261 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 262 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 263 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 264 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 265 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 266 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 267 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 268 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 269 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 270 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 271 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 272 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 273 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 274 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 275 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 278 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 279 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 280 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 281 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 284 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 285 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 286 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 290 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 291 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 292 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 293 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 294 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 295 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 296 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 297 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 298 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 299 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 300 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 301 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 303 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 309 "data/maps/BigIslandN/scripts.pory"
	lock
# 310 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 311 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 312 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 313 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 314 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 315 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 320 "data/maps/BigIslandN/scripts.pory"
	lockall
# 321 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 331 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 334 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 335 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 338 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 322 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 323 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 324 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 325 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 326 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 329 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 332 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 327 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 344 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 345 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 346 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 347 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 348 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 349 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 350 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 351 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 352 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 353 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 357 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 358 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 359 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 360 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 361 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 362 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 363 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 368 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 369 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 370 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 371 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 372 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 373 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 374 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 375 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 376 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 377 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 378 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 379 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 382 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 383 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 384 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 385 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 386 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 387 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 388 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 390 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 391 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 392 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 393 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 394 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 395 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 396 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 398 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 399 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 400 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 401 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 402 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 403 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 404 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 406 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 407 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 408 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 409 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 410 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 411 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 412 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 416 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 417 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 418 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 419 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 420 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 421 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 422 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 423 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 424 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 425 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 426 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 427 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 428 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 430 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 431 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 432 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 433 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 434 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 435 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 436 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 437 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 438 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 439 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 440 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 443 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 444 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 446 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 450 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 453 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 454 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 456 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 457 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 458 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 464 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 465 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 466 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 468 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 469 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 471 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 472 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 473 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 474 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 475 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 476 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 479 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 480 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 482 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 483 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 484 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 485 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 486 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 487 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 489 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 490 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 492 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 493 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 497 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 498 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 499 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 500 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 501 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 503 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 504 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 505 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 506 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 507 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 510 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 511 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 512 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 514 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 515 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 516 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 518 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 519 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 520 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 525 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 526 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 530 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 531 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 532 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 533 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 534 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 536 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 537 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 538 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 539 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 542 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 543 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 544 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 545 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 546 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 547 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 548 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 549 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 552 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 553 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 554 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 555 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 558 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 559 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 560 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 561 "data/maps/BigIslandN/scripts.pory"
	waitse
# 562 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 563 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 564 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 567 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 568 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 569 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 570 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 571 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 573 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 575 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 578 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 579 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 580 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 581 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 584 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 593 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 601 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 602 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 603 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 604 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 607 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 609 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 610 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 611 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 614 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 652 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 653 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 654 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 594 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASONCOLCHIS_INTRO
# 595 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 596 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 597 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 598 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 599 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 605 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 616 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_N_JASON_OSTRACON, BigIslandN_Script_JasonAtColchisCave_12
BigIslandN_Script_JasonAtColchisCave_11:
# 624 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 625 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_14
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_12:
# 617 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_N_JASON_OSTRACON
# 618 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 619 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 620 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ostracon, MSGBOX_DEFAULT
# 621 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_11

BigIslandN_Script_JasonAtColchisCave_14:
# 626 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 627 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 647 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 648 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 628 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 629 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 630 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_19
# 634 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 635 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_22
# 639 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 640 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 641 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 642 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 643 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 631 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 632 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_22:
# 636 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 637 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 659 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 660 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 661 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 662 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 663 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 664 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 665 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 666 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 667 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 668 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 669 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 670 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 671 "data/maps/BigIslandN/scripts.pory"
	waitse
# 673 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 674 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 675 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 676 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 678 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 679 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 681 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 682 "data/maps/BigIslandN/scripts.pory"
	releaseall
# 683 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo7
	end


BigIslandN_Script_TestNicknamer::
# 691 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 692 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 696 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 697 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 701 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 693 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 694 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 698 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 699 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


BigIslandN_Script_Argo::
# 708 "data/maps/BigIslandN/scripts.pory"
	lock
# 709 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Argo, MSGBOX_DEFAULT
# 710 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 711 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Dioscuri::
# 718 "data/maps/BigIslandN/scripts.pory"
	lock
# 719 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 720 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Dioscuri_2
# 722 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_Script_Dioscuri_7
BigIslandN_Script_Dioscuri_6:
# 724 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_eq BigIslandN_Script_Dioscuri_4
# 732 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Dioscuri_Text_0
BigIslandN_Script_Dioscuri_1:
# 734 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 735 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Dioscuri_2:
# 721 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_3:
# 723 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_4:
# 725 "data/maps/BigIslandN/scripts.pory"
	goto_if_set FLAG_BIGISLANDN_DIOSCURIFOUND, BigIslandN_Script_Dioscuri_11
# 729 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1

BigIslandN_Script_Dioscuri_7:
# 722 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_Script_Dioscuri_3
	goto BigIslandN_Script_Dioscuri_6

BigIslandN_Script_Dioscuri_11:
# 726 "data/maps/BigIslandN/scripts.pory"
	clearflag FLAG_BIGISLANDN_DIOSCURIFOUND
# 727 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Dioscuri3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Dioscuri_1


BigIslandN_Script_Orpheus::
# 740 "data/maps/BigIslandN/scripts.pory"
	lock
# 741 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 742 "data/maps/BigIslandN/scripts.pory"
	switch VAR_ARGO_STATE
# 743 "data/maps/BigIslandN/scripts.pory"
	case 0, BigIslandN_Script_Orpheus_3
# 745 "data/maps/BigIslandN/scripts.pory"
	case 1, BigIslandN_Script_Orpheus_4
# 747 "data/maps/BigIslandN/scripts.pory"
	case 2, BigIslandN_Script_Orpheus_5
# 749 "data/maps/BigIslandN/scripts.pory"
	case 3, BigIslandN_Script_Orpheus_6
# 751 "data/maps/BigIslandN/scripts.pory"
	case 4, BigIslandN_Script_Orpheus_7
# 753 "data/maps/BigIslandN/scripts.pory"
	case 5, BigIslandN_Script_Orpheus_8
# 755 "data/maps/BigIslandN/scripts.pory"
	case 6, BigIslandN_Script_Orpheus_9
# 757 "data/maps/BigIslandN/scripts.pory"
	case 7, BigIslandN_Script_Orpheus_10
# 760 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus8, MSGBOX_DEFAULT
BigIslandN_Script_Orpheus_1:
# 762 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 763 "data/maps/BigIslandN/scripts.pory"
	release
	end

BigIslandN_Script_Orpheus_3:
# 744 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus0, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_4:
# 746 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus1, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_5:
# 748 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus2, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_6:
# 750 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus3, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_7:
# 752 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus4, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_8:
# 754 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus5, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_9:
# 756 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus6, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1

BigIslandN_Script_Orpheus_10:
# 758 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Orpheus7, MSGBOX_DEFAULT
	goto BigIslandN_Script_Orpheus_1


BigIslandN_Script_Theseus::
# 768 "data/maps/BigIslandN/scripts.pory"
	lock
# 769 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 770 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Theseus, MSGBOX_DEFAULT
# 771 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 772 "data/maps/BigIslandN/scripts.pory"
	release
	end


# 776 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 777 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 778 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 778 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 778 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 778 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 778 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 781 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 782 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 783 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 783 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 783 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 783 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 786 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 787 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 787 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 788 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 788 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 788 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 788 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 789 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 792 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 793 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 793 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 794 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 797 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 798 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 798 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 799 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 802 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 803 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 804 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 807 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 808 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 811 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 812 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 812 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 813 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 813 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 813 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 813 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 813 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 816 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 817 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 818 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 821 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 822 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 825 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 826 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 826 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 827 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 830 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 831 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 831 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 832 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 832 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 832 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 833 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 833 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 833 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 833 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 833 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 834 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 834 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 837 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 838 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 839 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 842 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 843 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 844 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 847 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 848 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 849 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 852 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 853 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 853 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 853 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 853 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 854 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 855 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 855 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 858 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 859 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 860 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 861 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 861 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 864 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 865 "data/maps/BigIslandN/scripts.pory"
	face_up
# 866 "data/maps/BigIslandN/scripts.pory"
	face_down
# 867 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 870 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 871 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 871 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 871 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 872 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 872 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 872 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 872 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 873 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 873 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 873 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 873 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 876 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 877 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 878 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 881 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 882 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 882 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 882 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 882 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 883 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 883 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 883 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 884 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 885 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 886 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 886 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 886 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 889 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 890 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 890 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 891 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 892 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 334 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 485 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 693 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 698 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Script_Dioscuri_Text_0:
# 732 "data/maps/BigIslandN/scripts.pory"
	.string "ERROR: BigIslandN_Script_Dioscuri\n"
	.string "VAR_ARGO_STATE index not accounted for.\l"
	.string "Please report bugs to CornixSenex$"

BigIslandN_Text_ArrivedAtColchis1::
# 896 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 900 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 904 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 908 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 912 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 916 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 920 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 924 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 928 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 932 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 936 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 940 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 944 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 948 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 952 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 957 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 961 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 965 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 969 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_Ostracon::
# 984 "data/maps/BigIslandN/scripts.pory"
	.string "What's that? Philoctetes enchanted by\n"
	.string "an evil witch?\l"
	.string "And a volcanic bird!\l"
	.string "An old prophet gave you an Ostracon?\l"
	.string "By SPEAROW free!\l"
	.string "What nonesense is all this? We need to\l"
	.string "work on opening this cave.$"

BigIslandN_Text_ReleaseSpearow::
# 988 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 992 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 996 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 1000 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"

BigIslandN_Text_Argo::
# 1004 "data/maps/BigIslandN/scripts.pory"
	.string "The mighty ship of Jason:\n"
	.string "THE ARGO$"

BigIslandN_Text_Orpheus0::
# 1008 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 0 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus1::
# 1012 "data/maps/BigIslandN/scripts.pory"
	.string "ARGO VAR STATE is 1 you should never\n"
	.string "read this. Please report bugs to\l"
	.string "CornixSenex$"

BigIslandN_Text_Orpheus2::
# 1016 "data/maps/BigIslandN/scripts.pory"
	.string "On distant shores, where sea and sorrow\n"
	.string "meet, I stand, a wanderer, with heart\l"
	.string "forlorn and beat. My quest, lost to the\l"
	.string "waves' relentless roar, and with it, all\l"
	.string "my hopes, forever on the shore.$"

BigIslandN_Text_Orpheus3::
# 1020 "data/maps/BigIslandN/scripts.pory"
	.string "The sun dips low, in fiery splendor set,\n"
	.string "amidst the waves, that gently lap and\l"
	.string "fret. The salty scent, of ocean's\l"
	.string "darkling breast, invades my senses, and\l"
	.string "my soul finds rest.$"

BigIslandN_Text_Orpheus4::
# 1024 "data/maps/BigIslandN/scripts.pory"
	.string "The cries of gulls, that wheel and soar\n"
	.string "above, echo my sighs, and share my\l"
	.string "endless love, for thee, O Ocean, vast\l"
	.string "and wild and free, that holds my dreams,\l"
	.string "in thy dark secrecy.$"

BigIslandN_Text_Orpheus5::
# 1028 "data/maps/BigIslandN/scripts.pory"
	.string "The breeze, that whispers secrets in my\n"
	.string "ear, of distant lands, and memories so\l"
	.string "dear, stirs up the depths, of sorrow and\l"
	.string "despair, and I, a shipwrecked soul, am\l"
	.string "left to stare.$"

BigIslandN_Text_Orpheus6::
# 1032 "data/maps/BigIslandN/scripts.pory"
	.string "The tide, that ebbs and flows, with\n"
	.string "soothing sound, lulls me to sleep, on\l"
	.string "this forsaken ground, yet, in my dreams,\l"
	.string "I see the shores I've left, and wake to\l"
	.string "find, my heart still bereft.$"

BigIslandN_Text_Orpheus7::
# 1036 "data/maps/BigIslandN/scripts.pory"
	.string "O, cruel fate, that brought me to this\n"
	.string "place! A poet, lost, without a friendly\l"
	.string "face. My lyre, silenced, and my voice,\l"
	.string "unheard. A castaway, with none to share\l"
	.string "my word.$"

BigIslandN_Text_Orpheus8::
# 1040 "data/maps/BigIslandN/scripts.pory"
	.string "The ocean's vastness stretches far and\n"
	.string "wide. A limitless expanse, where I am\l"
	.string "lost inside. No hope, no rescue, comes\l"
	.string "to set me free. A prisoner, of the waves'\l"
	.string "eternity.$"

BigIslandN_Text_Dioscuri1::
# 1044 "data/maps/BigIslandN/scripts.pory"
	.string "I can't believe we're stuck on guard\n"
	.string "duty!\l"
	.string "It's so boring! How long have they been\l"
	.string "gone?$"

BigIslandN_Text_Dioscuri2::
# 1048 "data/maps/BigIslandN/scripts.pory"
	.string "We made friends with a couple islanders\n"
	.string "who tell us that people have been going\l"
	.string "missing recently and the rumour is\l"
	.string "they're being kidnapped by a secret\l"
	.string "cult and sacrificed to the volcano God.\l"
	.string "Of course it all sounds like nonesense\l"
	.string "to us.$"

BigIslandN_Text_Dioscuri3::
# 1052 "data/maps/BigIslandN/scripts.pory"
	.string "Hey {PLAYER} don't tell Jason that we\n"
	.string "snuck off.$"

BigIslandN_Text_Theseus::
# 1056 "data/maps/BigIslandN/scripts.pory"
	.string "This island's home to beautiful women!$"
