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
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
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

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 1
	goto_if_ne BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_3

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
	return


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
	delay 50
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
# 243 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 244 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 245 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 249 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 250 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 251 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 252 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 253 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 254 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 255 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 256 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 257 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 258 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 259 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo2
# 260 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 262 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_Philoctetes::
# 268 "data/maps/BigIslandN/scripts.pory"
	lock
# 269 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 270 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 271 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 272 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 273 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 274 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 279 "data/maps/BigIslandN/scripts.pory"
	lockall
# 280 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_Script_Jason_2
# 290 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_le BigIslandN_Script_Jason_3
# 293 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Jason_Text_0, MSGBOX_DEFAULT
# 294 "data/maps/BigIslandN/scripts.pory"
	closemessage
BigIslandN_Script_Jason_1:
# 297 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 281 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 282 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 283 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 284 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 285 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_7
# 288 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_3:
# 291 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
	goto BigIslandN_Script_Jason_1

BigIslandN_Script_Jason_7:
# 286 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 303 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 304 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 305 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 306 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 307 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 308 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 309 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 310 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 311 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 312 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 316 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 317 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 318 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 319 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 320 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 321 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 322 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 327 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 328 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 329 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 330 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 331 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 332 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 333 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 334 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 335 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 336 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 337 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 338 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 341 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 342 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 343 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 344 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 345 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 346 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 347 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 349 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 350 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 351 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 352 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 353 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 354 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 355 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 357 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 358 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 359 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 360 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 361 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 362 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 363 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 365 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 366 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 367 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 368 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 369 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 370 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 371 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 375 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 376 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 377 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 378 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 379 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 380 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 381 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 382 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 383 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 384 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 385 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 386 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 387 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 389 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 390 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 391 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 392 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 393 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 394 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 395 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 396 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 397 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 398 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 399 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 402 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 403 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 405 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_IGNIS_GRUNT_1, BigIslandN_Text_ColchisGrunt1Lost
# 409 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 412 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 413 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 415 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 416 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 417 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 423 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 424 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 425 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 427 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 428 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 430 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 431 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 432 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 433 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 434 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 435 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 438 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 439 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 441 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 442 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 443 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 444 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 445 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 446 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 448 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 449 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 451 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 452 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 456 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 457 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 458 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 459 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 460 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 462 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 463 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 464 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 465 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 466 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 469 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 470 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 471 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 473 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 474 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 475 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 477 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 478 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 479 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 484 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 485 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 489 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 490 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 491 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 492 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 493 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 495 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 496 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 497 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 498 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 501 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 502 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 503 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 504 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 505 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 506 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 507 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 508 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 511 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 512 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 513 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 514 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 517 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 518 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 519 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 520 "data/maps/BigIslandN/scripts.pory"
	waitse
# 521 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 522 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 523 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 526 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 527 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 528 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 529 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 530 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 532 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 3
# 534 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_JasonAtColchisCave
# 537 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo3
	return


BigIslandN_Script_JasonAtColchisCave::
# 546 "data/maps/BigIslandN/scripts.pory"
	goto_if_unset FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO, BigIslandN_Script_JasonAtColchisCave_2
BigIslandN_Script_JasonAtColchisCave_1:
# 554 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave2, MSGBOX_DEFAULT
# 555 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 556 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 557 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_5
# 560 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
BigIslandN_Script_JasonAtColchisCave_4:
# 562 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 563 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave3, MSGBOX_DEFAULT
# 564 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 567 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 6
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_9
BigIslandN_Script_JasonAtColchisCave_8:
# 596 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 597 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 598 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_JasonAtColchisCave_2:
# 547 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_BIGISLAND_S_JASONCOLCHIS_INTRO
# 548 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 549 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 550 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 551 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 552 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	goto BigIslandN_Script_JasonAtColchisCave_1

BigIslandN_Script_JasonAtColchisCave_5:
# 558 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
	goto BigIslandN_Script_JasonAtColchisCave_4

BigIslandN_Script_JasonAtColchisCave_9:
# 568 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, IsSpearowInParty
# 569 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_11
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_11:
# 570 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleaseSpearow, MSGBOX_YESNO
# 571 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_13
# 591 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 592 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_13:
# 572 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 573 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 574 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_JasonAtColchisCave_16
# 578 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 579 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_SPEAROW
	goto_if_ne BigIslandN_Script_JasonAtColchisCave_19
# 583 "data/maps/BigIslandN/scripts.pory"
	special BufferMonNickname
# 584 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ReleasedSpearow, MSGBOX_DEFAULT
# 585 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 586 "data/maps/BigIslandN/scripts.pory"
	special ReleaseChosenMon
# 587 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_EnterColchis
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_16:
# 575 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 576 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8

BigIslandN_Script_JasonAtColchisCave_19:
# 580 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 581 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_JasonAtColchisCave_8


BigIslandN_Script_EnterColchis::
# 603 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 604 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 605 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 8
# 606 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 5
# 607 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 608 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 609 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 610 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowColchisCave
# 611 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 612 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 613 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 7
# 614 "data/maps/BigIslandN/scripts.pory"
	waitse
# 616 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 617 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 618 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave4, MSGBOX_DEFAULT
# 619 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 621 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 622 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 625 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 63, 32
# 626 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 627 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 628 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 631 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end


BigIslandN_Script_TestNicknamer::
# 637 "data/maps/BigIslandN/scripts.pory"
	special ChoosePartyMon
# 638 "data/maps/BigIslandN/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BigIslandN_Script_TestNicknamer_2
# 642 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 643 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BigIslandN_Script_TestNicknamer_5
# 647 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
BigIslandN_Script_TestNicknamer_1:
	end

BigIslandN_Script_TestNicknamer_2:
# 639 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_0
# 640 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1

BigIslandN_Script_TestNicknamer_5:
# 644 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_TestNicknamer_Text_1
# 645 "data/maps/BigIslandN/scripts.pory"
	closemessage
	goto BigIslandN_Script_TestNicknamer_1


# 653 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 654 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 655 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 658 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 659 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 660 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 660 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 660 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 660 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 663 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 664 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 665 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 665 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 665 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 665 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 666 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 669 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 670 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 670 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 671 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 674 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 675 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 675 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 676 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 679 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 680 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 681 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 684 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 685 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 688 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 689 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 689 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 690 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 693 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 694 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 695 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 698 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 699 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 702 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 703 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 704 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 707 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 708 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 708 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 709 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 709 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 709 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 710 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 710 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 710 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 710 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 710 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 711 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 711 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 714 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 715 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 716 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 719 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 720 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 721 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 724 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 725 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 726 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 729 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 730 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 730 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 730 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 730 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 731 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 732 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 732 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 735 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 736 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 737 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 738 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 738 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 741 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 742 "data/maps/BigIslandN/scripts.pory"
	face_up
# 743 "data/maps/BigIslandN/scripts.pory"
	face_down
# 744 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 747 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 748 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 748 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 748 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 749 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 749 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 749 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 749 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 750 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 753 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 754 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 755 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 758 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 759 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 759 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 759 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 759 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 760 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 760 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 760 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 761 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 762 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 763 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 763 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 763 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 766 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 767 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 767 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 768 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 769 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Jason_Text_0:
# 293 "data/maps/BigIslandN/scripts.pory"
	.string "BAD VAR in BigIslandN_Script_Jason$"

BigIslandN_Script_Ambush_Text_0:
# 444 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Script_TestNicknamer_Text_0:
# 639 "data/maps/BigIslandN/scripts.pory"
	.string "DECLINE$"

BigIslandN_Script_TestNicknamer_Text_1:
# 644 "data/maps/BigIslandN/scripts.pory"
	.string "CANT NAME EGG$"

BigIslandN_Text_ArrivedAtColchis1::
# 773 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 777 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 781 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 785 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 789 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 793 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 797 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 801 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 805 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 809 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 813 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 817 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 821 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 825 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 829 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 834 "data/maps/BigIslandN/scripts.pory"
	.string "Uicklyquay! Urryhay! Eway ustmay\n"
	.string "arnway Aeetesay atthay uffiansray\l"
	.string "areay erehay otay ealstay Areepmay.\l"
	.string "Enteray ethay avecay anday ealsay itay\l"
	.string "ehindbay ouyay.$"

BigIslandN_Text_OpenColchisCave1::
# 838 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...$"

BigIslandN_Text_OpenColchisCave2::
# 842 "data/maps/BigIslandN/scripts.pory"
	.string "OPEN SAYS ME!$"

BigIslandN_Text_OpenColchisCave3::
# 846 "data/maps/BigIslandN/scripts.pory"
	.string "That didn't work, but what else could we\n"
	.string "try...$"

BigIslandN_Text_ReleaseSpearow::
# 850 "data/maps/BigIslandN/scripts.pory"
	.string "Will you release SPEAROW?$"

BigIslandN_Text_DeclineReleaseSpearow::
# 854 "data/maps/BigIslandN/scripts.pory"
	.string "Best not to release SPEAROW here and\n"
	.string "now.$"

BigIslandN_Text_OpenColchisCave4::
# 858 "data/maps/BigIslandN/scripts.pory"
	.string "My goodness lad! What kind of magic is\n"
	.string "this where SPEAROW flies and cave doors\l"
	.string "open? Let's not waste any time. Now\l"
	.string "follow me!$"

BigIslandN_Text_ReleasedSpearow::
# 862 "data/maps/BigIslandN/scripts.pory"
	.string "{STR_VAR_1} was released!\p"
	.string "Bye Bye {STR_VAR_1}!$"
