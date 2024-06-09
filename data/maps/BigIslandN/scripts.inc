BigIslandN_MapScripts::
# 16 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 21 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 8
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 24 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 29 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 30 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1


BigIslandN_Script_ShowColchisCave::
# 39 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 40 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 45 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 51 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 52 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 53 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 54 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 55 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 56 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 57 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 58 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 59 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 60 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 61 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 62 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 63 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 64 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo2::
# 69 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 70 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 71 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 72 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 74 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 75 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 76 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 77 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 79 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 80 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 81 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 82 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 84 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 85 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 86 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 87 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 89 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 90 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 92 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 94 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 95 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 97 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 99 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 100 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 101 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 102 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ShowArgo3::
# 109 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 110 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 111 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 112 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 114 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 115 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 116 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 117 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 119 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 120 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 121 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 122 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 124 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 125 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 126 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 127 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 129 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 130 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 131 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 132 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 134 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 135 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 136 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 137 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 139 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 140 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 141 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 142 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ArgoArrival::
# 150 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 151 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 152 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 155 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 156 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 162 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 163 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 166 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 167 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 168 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 169 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 170 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 171 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 172 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 173 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 174 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 175 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 176 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 177 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 178 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 181 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 182 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 183 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 184 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 185 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 188 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 189 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 190 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 191 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 192 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 193 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 194 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 195 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 196 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 199 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 200 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 201 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 202 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 203 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 204 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 205 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 206 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 207 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 210 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 211 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 212 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 213 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 214 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 215 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 216 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 217 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 218 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 219 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 220 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 221 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 222 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 223 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 224 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 225 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 226 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 227 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 228 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 229 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 230 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 231 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 232 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 235 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 236 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 237 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 238 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 239 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 240 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 241 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 245 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 246 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 247 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 248 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 249 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 250 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 251 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 252 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 253 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	end


BigIslandN_Script_Philoctetes::
# 259 "data/maps/BigIslandN/scripts.pory"
	lock
# 260 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 261 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 262 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 263 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 264 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 265 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 270 "data/maps/BigIslandN/scripts.pory"
	lockall
# 271 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 281 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 284 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 285 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 288 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 272 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 273 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 274 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 275 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 276 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 279 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 282 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 277 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 294 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 295 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 296 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 297 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 298 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 299 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 300 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 301 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 302 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 303 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 307 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 308 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 309 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 310 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 311 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 312 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 313 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 318 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 319 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 320 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 321 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 322 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 323 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 324 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 325 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 326 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 327 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 328 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 329 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 332 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 333 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 334 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 335 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 336 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 337 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 338 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 340 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 341 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 342 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 343 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 344 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 345 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 346 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 348 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 349 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 350 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 351 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 352 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 353 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 354 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 356 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 357 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 358 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 359 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 360 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 361 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 362 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 366 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 367 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 368 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 369 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 370 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 371 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 372 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 373 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 374 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 375 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 376 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 377 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 378 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 380 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 381 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 382 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 383 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 384 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 385 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 386 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 387 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 388 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 389 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 390 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 393 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 394 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 396 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 400 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 403 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 404 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 406 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 407 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 408 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 414 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 415 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 416 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 418 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 419 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 421 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 422 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 423 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 424 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 425 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 426 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 429 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 430 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 432 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 433 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 434 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 435 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 436 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 437 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 439 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 440 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 442 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 443 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 447 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 448 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 449 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 450 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 451 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 453 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 454 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 455 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 456 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 457 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 460 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 461 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 462 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 464 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 465 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 466 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 468 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 469 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 470 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 475 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 476 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 480 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 481 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 482 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 483 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 484 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 486 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 487 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 488 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 489 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 492 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 493 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 494 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 495 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 496 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 497 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 498 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 499 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 502 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 503 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 504 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 505 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 508 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 509 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 510 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 511 "data/maps/BigIslandN/scripts.pory"
	waitse
# 512 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 513 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 514 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 517 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 518 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 519 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 520 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 521 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 523 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 525 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 528 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 537 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 545 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 546 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 547 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 548 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 551 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 553 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 554 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 555 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 558 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 587 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 588 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 589 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 538 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO
# 539 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 540 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 541 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 542 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 543 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 549 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 559 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 560 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_11
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_11:
# 561 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 562 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_13
# 582 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 583 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_13:
# 563 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 564 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 565 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 569 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 570 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_19
# 574 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 575 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 576 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 577 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 578 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 566 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 567 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 571 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 572 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 594 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 595 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 596 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 597 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 598 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 599 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 600 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 601 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 602 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 603 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 604 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 8
# 605 "data/maps/BigIslandN/scripts.pory"
	waitse
# 607 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 608 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 609 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 610 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 612 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 613 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 616 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 617 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 618 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 619 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 622 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_TestNicknamer::
# 628 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 629 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 633 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 634 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 638 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 630 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 631 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 635 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 636 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


# 644 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 649 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 650 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 651 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 651 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 651 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 651 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 654 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 656 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 656 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 656 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 656 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 660 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 661 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 661 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 662 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 665 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 667 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 670 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 672 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 675 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 679 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 680 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 680 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 684 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 686 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 689 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 693 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 694 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 694 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 695 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 698 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 699 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 699 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 699 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 700 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 700 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 700 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 701 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 701 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 701 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 701 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 702 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 702 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 705 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 706 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 707 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 710 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 711 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 712 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 715 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 716 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 717 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 720 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 721 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 721 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 721 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 721 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 722 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 726 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 727 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 728 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 732 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 733 "data/maps/BigIslandN/scripts.pory"
	face_up
# 734 "data/maps/BigIslandN/scripts.pory"
	face_down
# 735 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 738 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 739 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 739 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 739 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 740 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 740 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 740 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 740 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 744 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 745 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 746 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 749 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 751 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 752 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 754 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 754 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 754 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 757 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 758 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 758 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 759 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 760 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 284 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 435 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 630 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 635 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Text_ArrivedAtColchis1::
# 764 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 768 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 772 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 776 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 780 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 784 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 788 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 792 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 796 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 800 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 804 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 808 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 812 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 816 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 820 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 824 "data/maps/BigIslandN/scripts.pory"
	.string "Quickly! Hurry! We must warn Aeetes\n"
	.string "that ruffians are here to steal Mareep.\l"
	.string "Enter the cave, and seal it behind you!$"

BigIslandN_Text_OpenColchisCave1::
# 828 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 832 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 836 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_ReleaseSpearow::
# 840 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 844 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 848 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 852 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"
