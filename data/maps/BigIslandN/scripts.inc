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
	compare VAR_ARGO_STATE, 3
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
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
	compare VAR_ARGO_STATE, 4
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 30 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1


BigIslandN_Script_HideColchisCave::
# 38 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 39 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 44 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 45 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 46 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 47 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 48 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 49 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 50 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 51 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 52 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 53 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 54 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 55 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 56 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 57 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo2::
# 62 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 63 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 65 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 67 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 68 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 69 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 70 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 72 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 73 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 75 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 77 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 78 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 79 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 80 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 82 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 83 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 85 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 87 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 88 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 89 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 90 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 92 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 93 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 94 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 95 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ShowArgo3::
# 101 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 102 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 103 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 104 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 106 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 107 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 108 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 109 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 111 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 112 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 113 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 114 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 116 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 117 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 118 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 119 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 121 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 122 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 123 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 124 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 126 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 127 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 128 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 129 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 132 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 133 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 134 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ArgoArrival::
# 142 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 143 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 144 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 147 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 148 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 154 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 155 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 158 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 159 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 160 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 161 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 162 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 163 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 164 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 165 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 166 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 167 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 168 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 169 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 170 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 173 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 174 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 175 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 176 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 177 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 180 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 181 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 182 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 183 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 184 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 185 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 186 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 187 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 188 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 191 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 192 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 193 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 194 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 195 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 196 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 197 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 198 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 199 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 202 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 203 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 204 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 205 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 206 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 207 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 208 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 209 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 210 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 211 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 212 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 213 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 214 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 215 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 216 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 217 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 218 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 219 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 220 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 221 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 222 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 223 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 224 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 227 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 228 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 229 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 230 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 231 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 232 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 233 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 237 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 238 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 239 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 240 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 241 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 242 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 243 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 244 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 245 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	end


BigIslandN_Script_Philoctetes::
# 251 "data/maps/BigIslandN/scripts.pory"
	lock
# 252 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 253 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 254 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 255 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 256 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 257 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 262 "data/maps/BigIslandN/scripts.pory"
	lockall
# 263 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 264 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 273 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_eq BigIslandN_Script_Jason_3
# 276 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 277 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 280 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 265 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 266 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 267 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 268 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 271 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 274 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 269 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 286 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 287 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 288 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 289 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 290 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 291 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 292 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 293 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 294 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 295 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 299 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 300 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 301 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 302 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 303 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 304 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 305 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 310 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 311 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 312 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 313 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 314 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 315 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 316 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 317 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 318 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 319 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 320 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 321 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 324 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 325 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 326 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 327 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 328 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 329 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 330 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 332 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 333 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 334 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 335 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 336 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 337 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 338 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 340 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 341 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 342 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 343 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 344 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 345 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 346 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 348 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 349 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 350 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 351 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 352 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 353 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 354 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 358 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 359 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 360 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 361 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 362 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 363 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 364 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 365 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 366 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 367 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 368 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 369 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 370 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 372 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 373 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 374 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 375 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 376 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 377 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 378 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 379 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 380 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 381 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 382 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 385 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 386 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 388 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 391 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, TRUE
# 392 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, TRUE
# 396 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 397 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 399 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 400 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 401 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 407 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 408 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 409 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 411 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 412 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 414 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 415 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 416 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 417 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 418 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 419 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 422 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 423 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 425 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 426 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 427 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 428 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 429 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 430 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 432 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 433 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 435 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 436 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 440 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 441 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 442 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 443 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 444 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 446 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 447 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 448 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 449 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 450 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 453 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 454 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 455 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 457 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 458 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 459 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 461 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 462 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 463 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 468 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 469 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 473 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 474 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 475 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 476 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 477 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 479 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 480 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 481 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 482 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 485 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 486 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 487 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 488 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 489 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 490 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 491 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 492 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 495 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 496 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 497 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 498 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 501 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 502 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 503 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 504 "data/maps/BigIslandN/scripts.pory"
	waitse
# 505 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 506 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 507 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 510 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 511 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 512 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 513 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 514 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 516 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 518 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 521 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 529 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 530 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 533 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 534 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	return


# 538 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 539 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 540 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 540 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 540 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 540 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 540 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 543 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 544 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 545 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 545 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 545 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 545 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 548 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 549 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 549 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 550 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 550 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 550 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 550 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 551 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 554 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 555 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 555 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 556 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 559 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 560 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 560 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 561 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 564 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 565 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 566 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 569 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 570 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 573 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 574 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 574 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 575 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 575 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 575 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 575 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 575 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 578 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 579 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 580 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 583 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 584 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 587 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 588 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 588 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 589 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 592 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 593 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 593 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 593 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 594 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 594 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 594 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 595 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 595 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 595 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 595 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 596 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 596 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 599 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 600 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 601 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 604 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 605 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 606 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 609 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 610 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 611 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 614 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 615 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 615 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 615 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 615 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 616 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 617 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 617 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 620 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 621 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 622 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 623 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 623 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 626 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 627 "data/maps/BigIslandN/scripts.pory"
	face_up
# 628 "data/maps/BigIslandN/scripts.pory"
	face_down
# 629 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 632 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 633 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 633 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 633 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 634 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 634 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 634 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 634 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 635 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 635 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 635 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 635 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 638 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 639 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 640 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 643 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 644 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 644 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 644 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 644 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 645 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 646 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 647 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 647 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 647 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 647 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 651 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 652 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 652 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 653 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 654 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 276 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 428 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Text_ArrivedAtColchis1::
# 658 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 662 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 666 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 670 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 674 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 678 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 682 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 686 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 690 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 694 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 698 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 702 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 706 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 710 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 714 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 718 "data/maps/BigIslandN/scripts.pory"
	.string "Quickly! Hurry! We must warn Aeetes\n"
	.string "that ruffians are here to steal Mareep.\l"
	.string "Enter the cave, and seal it behind you!$"

BigIslandN_Text_OpenColchisCave1::
# 722 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...\l"
	.string "OPEN SAYS ME!\l"
	.string "That didn't work, but what else could we\l"
	.string "try...$"
