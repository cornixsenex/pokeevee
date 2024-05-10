BigIslandN_MapScripts::
# 16 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_BOAT_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 20 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	return


BigIslandN_Script_HideArgo::
# 27 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 28 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 29 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 30 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 31 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 32 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 33 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 34 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 35 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 36 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 37 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 38 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 39 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 40 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo::
# 45 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 46 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 47 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 48 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 50 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 51 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 53 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 55 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 56 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 58 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 60 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 61 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 62 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 63 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 65 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 66 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 67 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 68 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 70 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 71 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 73 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 75 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 76 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 78 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoArrival::
# 85 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 86 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 87 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 90 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 91 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_BOAT_STATE, 2
# 97 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 98 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 101 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 102 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 103 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 104 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 105 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 106 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 107 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 108 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 109 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 110 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 111 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 112 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 113 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 116 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 117 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 118 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 119 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 120 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 123 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 124 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 125 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 126 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 127 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 128 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 129 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 130 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 131 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 134 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 135 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 136 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 137 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 138 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 139 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 140 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 141 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 142 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 145 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 146 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 147 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 148 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 149 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 150 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 151 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 152 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 153 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 154 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 155 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 156 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 157 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 158 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 159 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 160 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 161 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 162 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 163 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 164 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 165 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 166 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 167 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 170 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 171 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 172 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 173 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 174 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 175 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 176 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 180 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 181 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 182 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 183 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 184 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 185 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 186 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 187 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 188 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	end


BigIslandN_Script_Philoctetes::
# 194 "data/maps/BigIslandN/scripts.pory"
	lock
# 195 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 196 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 197 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 198 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 199 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 200 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 205 "data/maps/BigIslandN/scripts.pory"
	lockall
# 206 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 207 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 208 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 209 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 210 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_2
# 213 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
BigIslandN_Script_Jason_1:
# 215 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 211 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 221 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 222 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 223 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 224 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 225 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 226 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 227 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 228 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 229 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 230 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 234 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 235 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 236 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 237 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 238 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 239 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 240 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 245 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 246 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 247 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 248 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 249 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 250 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 251 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 252 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 253 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 254 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 255 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 256 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 259 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 260 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 261 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 262 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 263 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 264 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 265 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 267 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 268 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 269 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 270 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 271 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 272 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 273 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 275 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 276 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 35
# 277 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 278 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 279 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 280 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 281 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 283 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 284 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 37
# 285 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 286 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 287 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 288 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 289 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 293 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 294 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 295 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 296 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 297 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 298 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 299 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 300 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 301 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 302 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 303 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 304 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 305 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 308 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_single TRAINER_COLCHIS_GRUNT1, BigIslandN_Text_ColchisGrunt1Pre, BigIslandN_Text_ColchisGrunt1Lost
# 309 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 310 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 312 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_JasonExitArgo
# 313 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_JasonExitArgo
# 314 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
	end


# 343 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 344 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 345 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 345 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 345 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 345 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 345 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 348 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 349 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 350 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 350 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 350 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 350 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 353 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 354 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 354 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 355 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 355 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 355 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 355 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 356 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 360 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 360 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 361 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 364 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 365 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 365 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 366 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 369 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 370 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 371 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 374 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 375 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 378 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 379 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 379 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 380 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 380 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 380 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 380 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 380 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 383 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 384 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 385 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 388 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 389 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 392 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 393 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 393 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 394 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 397 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 398 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 398 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 398 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 399 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 399 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 399 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 400 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 400 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 400 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 400 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 401 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 401 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 404 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 405 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 406 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 409 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 410 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 411 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 415 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 416 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

BigIslandN_Text_ArrivedAtColchis1::
# 419 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 423 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 427 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 431 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 435 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 439 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 443 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 447 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 451 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 455 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 459 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 463 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"
