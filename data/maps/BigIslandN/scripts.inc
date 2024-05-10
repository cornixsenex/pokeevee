BigIslandN_MapScripts::
# 12 "data/maps/BigIslandN/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/BigIslandN/scripts.pory"
	compare VAR_ARGO_BOAT_STATE, 2
	goto_if_eq BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_HideArgo
	return

BigIslandN_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	return


BigIslandN_Script_HideArgo::
# 23 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_BIG_ISLAND_N
# 24 "data/maps/BigIslandN/scripts.pory"
	removeobject 1
# 25 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 2, MAP_BIG_ISLAND_N
# 26 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 27 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 3, MAP_BIG_ISLAND_N
# 28 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 29 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 30 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 31 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 32 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 33 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 34 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 35 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 36 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
	end


BigIslandN_Script_ShowArgo::
# 41 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 42 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 43 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 44 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 46 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 81, 18
# 47 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 48 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 49 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 51 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 82, 18
# 52 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 54 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 56 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 111, 14
# 57 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 59 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 61 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 60, 21
# 62 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 64 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 66 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 50, 30
# 67 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 69 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 71 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 51, 30
# 72 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 73 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 74 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
	end


BigIslandN_Script_ArgoArrival::
# 81 "data/maps/BigIslandN/scripts.pory"
	delay 100
# 82 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 83 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 86 "data/maps/BigIslandN/scripts.pory"
	setflag FLAG_MARES5_HIDE_ARGO
# 87 "data/maps/BigIslandN/scripts.pory"
	setvar VAR_ARGO_BOAT_STATE, 2
# 93 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis1, MSGBOX_DEFAULT
# 94 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 97 "data/maps/BigIslandN/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 99 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 7, 80, 17
# 100 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_RIGHT
# 101 "data/maps/BigIslandN/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S5
# 102 "data/maps/BigIslandN/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 103 "data/maps/BigIslandN/scripts.pory"
	addobject 7
# 104 "data/maps/BigIslandN/scripts.pory"
	showobjectat 7, MAP_BIG_ISLAND_N
# 105 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonDisembark
# 106 "data/maps/BigIslandN/scripts.pory"
	delay 25
# 107 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MareS5_Movement_PlayerDisembark
# 108 "data/maps/BigIslandN/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_BIG_ISLAND_N
# 109 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 112 "data/maps/BigIslandN/scripts.pory"
	showobjectat 1, MAP_BIG_ISLAND_N
# 113 "data/maps/BigIslandN/scripts.pory"
	addobject 1
# 114 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 1, 80, 17
# 115 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 116 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 1, MAP_MARE_S5
# 119 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 120 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 4, 80, 17
# 121 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 122 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis2, MSGBOX_DEFAULT
# 123 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 124 "data/maps/BigIslandN/scripts.pory"
	addobject 4
# 125 "data/maps/BigIslandN/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_N
# 126 "data/maps/BigIslandN/scripts.pory"
	applymovement 4, BigIslandN_Movement_OrpheusDisembark
# 127 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 130 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 131 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 5, 80, 17
# 132 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 133 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis3, MSGBOX_DEFAULT
# 134 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 135 "data/maps/BigIslandN/scripts.pory"
	addobject 5
# 136 "data/maps/BigIslandN/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_N
# 137 "data/maps/BigIslandN/scripts.pory"
	applymovement 5, BigIslandN_Movement_TheseusDisembark
# 138 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 141 "data/maps/BigIslandN/scripts.pory"
	removeobject 2
# 142 "data/maps/BigIslandN/scripts.pory"
	removeobject 3
# 143 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
# 144 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 145 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 2, 80, 17
# 146 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 3, 80, 17
# 147 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 148 "data/maps/BigIslandN/scripts.pory"
	setobjectxyperm 6, 80, 17
# 149 "data/maps/BigIslandN/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
# 150 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis4, MSGBOX_DEFAULT
# 151 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 152 "data/maps/BigIslandN/scripts.pory"
	addobject 6
# 153 "data/maps/BigIslandN/scripts.pory"
	showobjectat 6, MAP_BIG_ISLAND_N
# 154 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesDisembark
# 155 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 156 "data/maps/BigIslandN/scripts.pory"
	addobject 3
# 157 "data/maps/BigIslandN/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_N
# 158 "data/maps/BigIslandN/scripts.pory"
	applymovement 3, BigIslandN_Movement_PolluxDisembark
# 159 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 160 "data/maps/BigIslandN/scripts.pory"
	addobject 2
# 161 "data/maps/BigIslandN/scripts.pory"
	showobjectat 2, MAP_BIG_ISLAND_N
# 162 "data/maps/BigIslandN/scripts.pory"
	applymovement 2, BigIslandN_Movement_CastorDisembark
# 163 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 166 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 167 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 168 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_ArrivedAtColchis5, MSGBOX_DEFAULT
# 169 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 170 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExitArgo
# 171 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_JasonExitArgo
# 172 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 176 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 177 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 178 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 179 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 180 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 181 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 182 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 183 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 184 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	end


BigIslandN_Script_Philoctetes::
# 190 "data/maps/BigIslandN/scripts.pory"
	lock
# 191 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 192 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Philoctetes, MSGBOX_DEFAULT
# 193 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 194 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 195 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 196 "data/maps/BigIslandN/scripts.pory"
	release
	end


BigIslandN_Script_Jason::
# 201 "data/maps/BigIslandN/scripts.pory"
	lockall
# 202 "data/maps/BigIslandN/scripts.pory"
	faceplayer
# 203 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Jason, MSGBOX_DEFAULT
# 204 "data/maps/BigIslandN/scripts.pory"
	closemessage
# 205 "data/maps/BigIslandN/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 206 "data/maps/BigIslandN/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq BigIslandN_Script_Jason_2
# 209 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreB
BigIslandN_Script_Jason_1:
# 211 "data/maps/BigIslandN/scripts.pory"
	releaseall
	end

BigIslandN_Script_Jason_2:
# 207 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ExploreA
	goto BigIslandN_Script_Jason_1


BigIslandN_Script_ExploreA::
# 217 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreA1
# 218 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_PhiloctetesExploreA1
# 219 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 220 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 221 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 222 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 223 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 224 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_ExploreB::
# 228 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 229 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 230 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 231 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 232 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_JasonExploreB1
# 233 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 234 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_Ambush
	return


BigIslandN_Script_Ambush::
# 238 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, BigIslandN_Movement_Ambush
# 239 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, BigIslandN_Movement_Ambush
# 240 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BigIslandN_Movement_Ambush
# 241 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 242 "data/maps/BigIslandN/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 243 "data/maps/BigIslandN/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 244 "data/maps/BigIslandN/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 245 "data/maps/BigIslandN/scripts.pory"
	waitmovement 0
# 246 "data/maps/BigIslandN/scripts.pory"
	msgbox BigIslandN_Text_Ambush, MSGBOX_DEFAULT
# 247 "data/maps/BigIslandN/scripts.pory"
	closemessage
	end


# 260 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 261 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 262 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 262 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 262 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 262 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 262 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 265 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 266 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 267 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 267 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 267 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 267 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 270 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 271 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 271 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 272 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 272 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 272 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 272 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 273 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 276 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 277 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 277 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 278 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 281 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 282 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 282 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 283 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 286 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 287 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 288 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 291 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 292 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 295 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesDisembark:
# 296 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 296 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 297 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 297 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 297 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 297 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 297 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 300 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreA1:
# 301 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 302 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 305 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PhiloctetesExploreA1:
# 306 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 309 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExploreB1:
# 310 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 310 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 311 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 314 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_Ambush:
# 315 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 315 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 315 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 316 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 316 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 316 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 317 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 317 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 317 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 317 "data/maps/BigIslandN/scripts.pory"
	walk_left
# 318 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 318 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

BigIslandN_Text_ArrivedAtColchis1::
# 321 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 325 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 329 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 333 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 337 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"

BigIslandN_Text_Philoctetes::
# 341 "data/maps/BigIslandN/scripts.pory"
	.string "We've finally arrived on the island!\n"
	.string "Speak to Jason and let's go find\l"
	.string "Colchis.$"

BigIslandN_Text_Jason::
# 345 "data/maps/BigIslandN/scripts.pory"
	.string "Let us set off at once to find Colchis.$"

BigIslandN_Text_Ambush::
# 349 "data/maps/BigIslandN/scripts.pory"
	.string "On guard friends! Something wicked\n"
	.string "heads our way.$"
