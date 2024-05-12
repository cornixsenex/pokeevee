BigIslandN_MapScripts::
# 16 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 20 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD:
# 25 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_STATE, 4
	goto_if_lt BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2
BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 26 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
	goto BigIslandN_MapScripts_MAP_SCRIPT_ON_LOAD_1


BigIslandN_Script_HideColchisCave::
# 34 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_RockWall_RockBase, TRUE
# 35 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_RockWall_GrassBase, TRUE
	return


BigIslandN_Script_HideArgo::
# 40 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 41 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 42 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 43 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 44 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 45 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 46 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 47 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 48 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 49 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 50 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 51 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 52 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 53 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo::
# 58 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 59 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 60 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 61 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 63 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 64 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 66 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 68 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 69 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 71 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 73 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 74 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 76 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 78 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 79 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 80 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 81 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 83 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 84 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 85 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 86 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 88 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 89 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 90 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 91 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoArrival::
# 98 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 99 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 100 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 103 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 104 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 2
# 110 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 111 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 114 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 115 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 116 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 117 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 118 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 119 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 120 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 121 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 122 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 123 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 124 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 125 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 126 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 129 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 130 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 132 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 133 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 136 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 137 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 138 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 139 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 140 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 141 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 142 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 143 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 144 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 147 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 148 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 149 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 150 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 151 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 152 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 153 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 154 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 155 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 158 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 159 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 160 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 161 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 162 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 163 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 164 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 165 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 166 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 167 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 168 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 169 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 170 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 171 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 172 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 173 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 174 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 175 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 176 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 177 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 178 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 179 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 180 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 183 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 184 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 185 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 186 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 187 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 188 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 189 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 193 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 194 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 195 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 196 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 197 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 198 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 199 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 200 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 201 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	end


BigIslandN_Script_Philoctetes::
# 207 "data/maps/BigIslandN/scripts.pory"
	lock
# 208 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 209 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 210 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 211 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 212 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 213 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 218 "data/maps/BigIslandN/scripts.pory"
	lockall
# 219 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 220 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 221 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 222 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 223 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_2
# 226 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
BigIslandN_Script_Jason_1:
# 228 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 224 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 234 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 235 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 236 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 237 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 238 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 239 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 240 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 241 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 242 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 243 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 247 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 248 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 249 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 250 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 251 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 252 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 253 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 258 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_AmbushAll
# 259 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushAll
# 260 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_AmbushAll
# 261 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 262 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 263 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 264 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 265 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 266 "data/maps/BigIslandN/scripts.pory"
	playmoncry SPECIES_CHANDELURE, CRY_MODE_NORMAL
# 267 "data/maps/BigIslandN/scripts.pory"
	waitmoncry
# 268 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 269 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 272 "data/maps/BigIslandN/scripts.pory"
	removeobject 8
# 273 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 45, 36
# 274 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 275 "data/maps/BigIslandN/scripts.pory"
	addobject 8
# 276 "data/maps/BigIslandN/scripts.pory"
	showobjectat 8, MAP_BIG_ISLAND_N
# 277 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_Ambusher1
# 278 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 280 "data/maps/BigIslandN/scripts.pory"
	removeobject 9
# 281 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 45, 37
# 282 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 283 "data/maps/BigIslandN/scripts.pory"
	addobject 9
# 284 "data/maps/BigIslandN/scripts.pory"
	showobjectat 9, MAP_BIG_ISLAND_N
# 285 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_WalkLeft
# 286 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 288 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 289 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 39, 37
# 290 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 291 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 292 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 293 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 294 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 296 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 297 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 39, 35
# 298 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_RIGHT
# 299 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 300 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 301 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 302 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 306 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush2, MSGBOX_DEFAULT
# 307 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 308 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_PlayerAmbush2
# 309 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 310 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonAmbush2
# 311 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 312 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 313 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 314 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 315 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 316 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 317 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 318 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 320 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 321 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 322 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 323 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 324 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 325 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 326 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 327 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 328 "data/maps/BigIslandN/scripts.pory"
	delay 10
# 329 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 330 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 333 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Pre, MSGBOX_DEFAULT
# 334 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 336 "data/maps/BigIslandN/scripts.pory"
	trainerbattle_no_intro TRAINER_COLCHIS_GRUNT1, BigIslandN_Text_ColchisGrunt1Lost
# 339 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 35, METATILE_General_CaveEntrance_Top, TRUE
# 340 "data/maps/BigIslandN/scripts.pory"
	setmetatile 31, 36, METATILE_General_CaveEntrance_Bottom, TRUE
# 344 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ColchisGrunt1Post, MSGBOX_DEFAULT
# 345 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 347 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, BigIslandN_Movement_AmbusherExit3
# 348 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, BigIslandN_Movement_AmbusherExit4
# 349 "data/maps/BigIslandN/scripts.pory"
	waitmovement 11
# 355 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 356 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 357 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 359 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonPostAmbush, MSGBOX_DEFAULT
# 360 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 362 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 363 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 364 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 365 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 366 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 367 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 370 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_PhiloctetesAbducted, MSGBOX_DEFAULT
# 371 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 373 "data/maps/BigIslandN/scripts.pory"
	applymovement 8, BigIslandN_Movement_AmbushPhiloctetesExit
# 374 "data/maps/BigIslandN/scripts.pory"
	applymovement 9, BigIslandN_Movement_AmbushPhiloctetesExit
# 375 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_AmbushPhiloctetesExit
# 376 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Script_Ambush_Text_0, MSGBOX_DEFAULT
# 377 "data/maps/BigIslandN/scripts.pory"
	waitmovement 9
# 378 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 380 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 381 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 383 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_JasonLeaveHim, MSGBOX_DEFAULT
# 384 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 388 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 389 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 30, 37
# 390 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
# 391 "data/maps/BigIslandN/scripts.pory"
	addobject 10
# 392 "data/maps/BigIslandN/scripts.pory"
	showobjectat 10, MAP_BIG_ISLAND_N
# 394 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 395 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 31, 37
# 396 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 397 "data/maps/BigIslandN/scripts.pory"
	addobject 11
# 398 "data/maps/BigIslandN/scripts.pory"
	showobjectat 11, MAP_BIG_ISLAND_N
# 401 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonSetupFollowAmbush
# 402 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 403 "data/maps/BigIslandN/scripts.pory"
	waitmovement 7
# 405 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonFollowAmbush
# 406 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_JasonFollowAmbush
# 407 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 409 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 410 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 411 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 416 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_CultistsEnterCave, MSGBOX_DEFAULT
# 417 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 421 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 422 "data/maps/BigIslandN/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 423 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 424 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 11, MAP_BIG_ISLAND_N
# 425 "data/maps/BigIslandN/scripts.pory"
	removeobject 11
# 427 "data/maps/BigIslandN/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 428 "data/maps/BigIslandN/scripts.pory"
	waitmovement 10
# 429 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 10, MAP_BIG_ISLAND_N
# 430 "data/maps/BigIslandN/scripts.pory"
	removeobject 10
# 433 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 10, 28, 33
# 434 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 435 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 11, 28, 33
# 436 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 437 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 8, 28, 33
# 438 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 439 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 9, 28, 33
# 440 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 443 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8004, 1
# 444 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8005, 1
# 445 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8006, 16
# 446 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_0x8007, 3
# 449 "data/maps/BigIslandN/scripts.pory"
	special ShakeCamera
# 450 "data/maps/BigIslandN/scripts.pory"
	waitstate
# 451 "data/maps/BigIslandN/scripts.pory"
	playse SE_EFFECTIVE
# 452 "data/maps/BigIslandN/scripts.pory"
	waitse
# 453 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideColchisCave
# 454 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 455 "data/maps/BigIslandN/scripts.pory"
	delay 30
# 458 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 459 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonApproachColchisCave
# 460 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 461 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 462 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 465 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_OpenColchisCave1, MSGBOX_DEFAULT
# 466 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 470 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_STATE, 4
	return


# 476 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 477 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 478 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 478 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 478 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 478 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 478 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 481 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 482 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 483 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 483 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 483 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 483 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 486 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 487 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 487 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 488 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 488 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 488 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 488 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 489 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 492 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 493 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 493 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 494 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 497 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 498 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 498 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 499 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 502 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 503 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 504 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 507 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 508 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 511 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 512 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 512 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 513 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 513 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 513 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 513 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 513 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 516 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 517 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 518 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 521 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 522 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 525 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 526 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 526 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 527 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 530 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushAll:
# 531 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 531 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 531 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 532 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 532 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 532 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 533 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 533 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 533 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 533 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 534 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 534 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 537 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambusher1:
# 538 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 539 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 542 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PlayerAmbush2:
# 543 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 544 "data/maps/BigIslandN/scripts.pory"
	walk_left
	step_end

# 547 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonAmbush2:
# 548 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 549 "data/maps/BigIslandN/scripts.pory"
	face_left
	step_end

# 552 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit3:
# 553 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 553 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 553 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 553 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 554 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 555 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 555 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 558 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbusherExit4:
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 559 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 560 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 561 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 561 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 564 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesAmbush2:
# 565 "data/maps/BigIslandN/scripts.pory"
	face_up
# 566 "data/maps/BigIslandN/scripts.pory"
	face_down
# 567 "data/maps/BigIslandN/scripts.pory"
	face_right
	step_end

# 570 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_AmbushPhiloctetesExit:
# 571 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 571 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 571 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 572 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 572 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 572 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 572 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 573 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 573 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 573 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 573 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 576 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonSetupFollowAmbush:
# 577 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 578 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 581 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonFollowAmbush:
# 582 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 582 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 582 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 582 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 583 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 584 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 585 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 585 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 585 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 585 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 586 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 586 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 586 "data/maps/BigIslandN/scripts.pory"
	walk_up
	step_end

# 589 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonApproachColchisCave:
# 590 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 590 "data/maps/BigIslandN/scripts.pory"
	walk_up
# 591 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 592 "data/maps/BigIslandN/scripts.pory"
	face_up
	step_end

BigIslandN_Script_Ambush_Text_0:
# 376 "data/maps/BigIslandN/scripts.pory"
	.string "NOOOOOOOO!$"

BigIslandN_Text_ArrivedAtColchis1::
# 596 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 600 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 604 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 608 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 612 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 616 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 620 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 624 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"

BigIslandN_Text_Ambush2::
# 628 "data/maps/BigIslandN/scripts.pory"
	.string "To arms! Defend the party! Now recall\n"
	.string "the sacred oaths you swore. Now to\l"
	.string "battle!$"

BigIslandN_Text_ColchisGrunt1Pre::
# 632 "data/maps/BigIslandN/scripts.pory"
	.string "Illkay ethay invadersay anday\n"
	.string "otectpray areeppmay$"

BigIslandN_Text_ColchisGrunt1Lost::
# 636 "data/maps/BigIslandN/scripts.pory"
	.string "Ymay ifelay isay orfeitfay. Iay eavelay\n"
	.string "inay efeatday$"

BigIslandN_Text_ColchisGrunt1Post::
# 640 "data/maps/BigIslandN/scripts.pory"
	.string "Eway eednay otay arnway Aeetesay ofay\n"
	.string "isthat otplay otay ealstay Areepmay.\l"
	.string "Urryhay ackbay otay ethay avecay$"

BigIslandN_Text_PhiloctetesAbducted::
# 644 "data/maps/BigIslandN/scripts.pory"
	.string "Please help me friends! I'm lost! They're\n"
	.string "taking me! Assemble Argonauts! Jason!\l"
	.string "Please Help!$"

BigIslandN_Text_JasonLeaveHim::
# 648 "data/maps/BigIslandN/scripts.pory"
	.string "Leave him. He swore an oath that he\n"
	.string "would die in service of our quest to\l"
	.string "find Mareep. We must find the location\l"
	.string "of Colchis.$"

BigIslandN_Text_JasonPostAmbush::
# 652 "data/maps/BigIslandN/scripts.pory"
	.string "Well done your bravery has saved our\n"
	.string "quest.$"

BigIslandN_Text_CultistsEnterCave::
# 656 "data/maps/BigIslandN/scripts.pory"
	.string "Quickly! Hurry! We must warn Aeetes\n"
	.string "that ruffians are here to steal Mareep.\l"
	.string "Enter the cave, and seal it behind you!$"

BigIslandN_Text_OpenColchisCave1::
# 660 "data/maps/BigIslandN/scripts.pory"
	.string "This must be where Colchis Cave is\n"
	.string "hidden. The only question now is how do\l"
	.string "we open the secret door...\l"
	.string "OPEN SAYS ME!\l"
	.string "That didn't work, but what else could we\l"
	.string "try...$"
