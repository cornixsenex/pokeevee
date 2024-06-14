BigIslandN_MapScripts::
# 16 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 30 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 23 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 26 "data/maps/BigIslandN/scripts.pory"
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

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 31 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 7
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 32 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1


BigIslandN_Script_ShowColchisCave::
# 41 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, FALSE
# 42 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, FALSE
	return


BigIslandN_Script_HideColchisCave::
# 47 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 48 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 53 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 54 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 55 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 56 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 57 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 58 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 59 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 60 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 61 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 62 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 63 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 64 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 65 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 66 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo2::
# 71 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 72 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 73 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 74 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 76 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 77 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 78 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 79 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 81 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 82 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 83 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 84 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 86 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 87 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 89 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 91 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 92 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 94 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 96 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 97 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 99 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 101 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 102 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 103 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 104 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ShowArgo3::
# 111 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 112 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 113 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 114 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 116 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 41, 12
# 117 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 118 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 119 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 121 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 42, 12
# 122 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 123 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 124 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 126 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 127 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 128 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 129 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 68, 26
# 132 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 133 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 134 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 136 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 31, 37
# 137 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 138 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 139 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 141 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 62, 32
# 142 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 143 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 144 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ArgoArrival::
# 152 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 153 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 154 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 157 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 158 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 164 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 165 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 168 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 170 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 171 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 172 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 173 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 174 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 175 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 176 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 177 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 178 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 179 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 180 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 183 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 184 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 185 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 186 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 187 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 190 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 191 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 192 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 193 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 194 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 195 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 196 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 197 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 198 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 201 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 202 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 203 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 204 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 205 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 206 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 207 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 208 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 209 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 212 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 213 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 214 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 215 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 216 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 217 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 218 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 219 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 220 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 221 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 222 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 223 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 224 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 225 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 226 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 227 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 228 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 229 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 230 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 231 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 232 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 233 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 234 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 237 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 238 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 239 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 240 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 241 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 242 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 243 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 247 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 248 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 249 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 250 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 251 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 252 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 253 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 254 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 255 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
	end


BigIslandN_Script_Philoctetes::
# 261 "data/maps/BigIslandN/scripts.pory"
	lock
# 262 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 263 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 264 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 265 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 266 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 267 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 272 "data/maps/BigIslandN/scripts.pory"
	lockall
# 273 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 283 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 286 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 287 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 290 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 274 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 275 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 276 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 277 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 278 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 281 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 284 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 279 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 296 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 297 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 298 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 299 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 300 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 301 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 302 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 303 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 304 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 305 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 309 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 310 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 311 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 312 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 313 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 314 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 315 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 320 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 321 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 322 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 323 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 324 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 325 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 326 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 327 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 328 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 329 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 330 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 331 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 334 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 335 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 336 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 337 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 338 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 339 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 340 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 342 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 343 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 344 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 345 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 346 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 347 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 348 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 350 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 351 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 352 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 353 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 354 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 355 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 356 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 358 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 359 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 360 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 361 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 362 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 363 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 364 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 368 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 369 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 370 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 371 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 372 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 373 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 374 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 375 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 376 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 377 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 378 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 379 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 380 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 382 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 383 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 384 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 385 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 386 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 387 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 388 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 389 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 390 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 391 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 392 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 395 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 396 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 398 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 402 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 405 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 406 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 408 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 409 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 410 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 416 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 417 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 418 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 420 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 421 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 423 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 424 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 425 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 426 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 427 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 428 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 431 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 432 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 434 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 435 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 436 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 437 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 438 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 439 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 441 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 442 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 444 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 445 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 449 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 450 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 451 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 452 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 453 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 455 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 456 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 457 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 458 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 459 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 462 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 463 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 464 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 466 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 467 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 468 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 470 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 471 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 472 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 477 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 478 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 482 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 483 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 484 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 485 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 486 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 488 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 489 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 490 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 491 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 494 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 495 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 496 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 497 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 498 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 499 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 500 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 501 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 504 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 505 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 506 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 507 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 510 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 511 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 512 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 513 "data/maps/BigIslandN/scripts.pory"
	waitse
# 514 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 515 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 516 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 519 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 520 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 521 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 522 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 523 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 525 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 527 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 530 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 539 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 547 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 548 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 549 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 550 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 553 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 555 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 556 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 557 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 560 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 589 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 590 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 591 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 540 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO
# 541 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 542 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 543 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 544 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 545 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 551 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 561 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 562 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_11
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_11:
# 563 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 564 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_13
# 584 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 585 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_13:
# 565 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 566 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 567 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 571 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 572 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_19
# 576 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 577 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 578 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 579 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 580 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 568 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 569 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 573 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 574 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 596 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 597 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 598 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 599 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 600 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 601 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 602 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 603 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 604 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 605 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 606 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 607 "data/maps/BigIslandN/scripts.pory"
	waitse
# 609 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 610 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 611 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 612 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 614 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 615 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 618 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 619 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 620 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 621 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 624 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_TestNicknamer::
# 630 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 631 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 635 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 636 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 640 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 632 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 633 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 637 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 638 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


# 646 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 647 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 648 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 651 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 652 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 653 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 653 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 653 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 653 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 656 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 657 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 658 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 658 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 658 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 658 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 662 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 663 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 663 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 667 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 668 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 668 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 669 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 672 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 673 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 674 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 677 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 678 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 681 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 682 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 682 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 683 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 683 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 683 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 683 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 683 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 686 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 687 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 688 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 691 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 692 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 695 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 696 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 696 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 697 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 700 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
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
# 702 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 704 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 704 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 707 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 708 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 709 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 712 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 713 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 714 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 717 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 718 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 719 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 722 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 723 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 724 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 725 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 725 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 728 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 729 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 730 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 731 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 731 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 734 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 735 "data/maps/BigIslandN/scripts.pory"
	face_up
# 736 "data/maps/BigIslandN/scripts.pory"
	face_down
# 737 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 740 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 741 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 742 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 742 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 742 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 742 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 743 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 743 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 743 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 743 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 746 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 747 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 748 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 751 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 752 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 752 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 752 "data/maps/BigIslandN/scripts.pory"
	walk_down
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
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 753 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 754 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 755 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 755 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 755 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 755 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 756 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 756 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 756 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 759 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 760 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 760 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 761 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 762 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 286 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 437 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 632 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 637 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Text_ArrivedAtColchis1::
# 766 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 770 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 774 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 778 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 782 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 786 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 790 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 794 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 798 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 802 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 806 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 810 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 814 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 818 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 822 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 826 "data/maps/BigIslandN/scripts.pory"
	.string "Quickly! Hurry! We must warn Aeetes\n"
	.string "that ruffians are here to steal Mareep.\l"
	.string "Enter the cave, and seal it behind you!$"

BigIslandN_Text_OpenColchisCave1::
# 830 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 834 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 838 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_ReleaseSpearow::
# 842 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 846 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 850 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 854 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"
