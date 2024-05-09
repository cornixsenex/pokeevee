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
	applymovement 6, BigIslandN_Movement_TheseusDisembark
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
	waitmovement 0
# 175 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_N
# 176 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_N
# 177 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_N
# 178 "data/maps/BigIslandN/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_N
# 179 "data/maps/BigIslandN/scripts.pory"
	removeobject 7
# 180 "data/maps/BigIslandN/scripts.pory"
	removeobject 6
# 181 "data/maps/BigIslandN/scripts.pory"
	removeobject 5
# 182 "data/maps/BigIslandN/scripts.pory"
	removeobject 4
# 183 "data/maps/BigIslandN/scripts.pory"
	call BigIslandN_Script_ShowArgo
	end


# 188 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonDisembark:
# 189 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 190 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 190 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 190 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 190 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 190 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/BigIslandN/scripts.pory"
MareS5_Movement_PlayerDisembark:
# 194 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 195 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 195 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 195 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 195 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 198 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_OrpheusDisembark:
# 199 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 199 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 200 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 200 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 200 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 200 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 201 "data/maps/BigIslandN/scripts.pory"
	walk_right
	step_end

# 204 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_TheseusDisembark:
# 205 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 205 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 206 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 209 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_PolluxDisembark:
# 210 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 210 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 211 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_CastorDisembark:
# 215 "data/maps/BigIslandN/scripts.pory"
	walk_right
# 216 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/BigIslandN/scripts.pory"
BigIslandN_Movement_JasonExitArgo:
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
# 220 "data/maps/BigIslandN/scripts.pory"
	walk_down
	step_end

BigIslandN_Text_ArrivedAtColchis1::
# 223 "data/maps/BigIslandN/scripts.pory"
	.string "We've landed on the north side of the\n"
	.string "big island we call Ignis. According to\l"
	.string "this map Colchis is located within a\l"
	.string "cave on the west side of the island.$"

BigIslandN_Text_ArrivedAtColchis2::
# 227 "data/maps/BigIslandN/scripts.pory"
	.string "Orpheus, search for food and fresh\n"
	.string "water.$"

BigIslandN_Text_ArrivedAtColchis3::
# 231 "data/maps/BigIslandN/scripts.pory"
	.string "And Theseus inquire with the town\n"
	.string "whether the locals will give us shelter\l"
	.string "and open their markets to Argonauts.$"

BigIslandN_Text_ArrivedAtColchis4::
# 235 "data/maps/BigIslandN/scripts.pory"
	.string "Castor and Pollux you will guard the\n"
	.string "ship while {PLAYER} and I and\l"
	.string "Philoctetes go investigate the rumored\l"
	.string "Colchis cave.$"

BigIslandN_Text_ArrivedAtColchis5::
# 239 "data/maps/BigIslandN/scripts.pory"
	.string "Meet Philoctetes and I in the woods\n"
	.string "when you're ready to find the Colchis\l"
	.string "cave.$"
