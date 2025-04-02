SaltySpitoon_2F_MapScripts::
	.byte 0


SaltySpitoon_2F_EventScript_LockDoor::
# 21 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_GANG_STATE, 6
# 22 "data//maps/SaltySpitoon_2F/scripts.pory"
	setmetatile 17, 1, METATILE_BrendansMaysHouse_StairsDown, 1
# 23 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_LockDoor
# 24 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 25 "data//maps/SaltySpitoon_2F/scripts.pory"
	playse SE_PIN
# 26 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitse
	end


SaltySpitoon_2F_EventScript_DoorSign::
# 31 "data//maps/SaltySpitoon_2F/scripts.pory"
	lock
# 32 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_DoorSign
# 33 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 34 "data//maps/SaltySpitoon_2F/scripts.pory"
	release
	end


SaltySpitoon_2F_EventScript_RoomTriggerA::
# 40 "data//maps/SaltySpitoon_2F/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerA_2
# 43 "data//maps/SaltySpitoon_2F/scripts.pory"
	lock
# 45 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 48 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 49 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
# 51 "data//maps/SaltySpitoon_2F/scripts.pory"
	switch VAR_GANG_STATE
# 52 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerA_6
# 71 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerA_7
# 90 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerA_8
# 109 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerA_9
# 129 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
# 130 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerA_4:
# 133 "data//maps/SaltySpitoon_2F/scripts.pory"
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerA_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerA_6:
# 54 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 55 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 3
# 56 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 2
# 57 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 1, 1, 8
# 58 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 3, 2, 8
# 59 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 2, 3, 8
# 60 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 61 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 62 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 63 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 1
# 64 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 3
# 65 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 2
# 66 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 1, MAP_SALTY_SPITOON_2F
# 67 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 3, MAP_SALTY_SPITOON_2F
# 68 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 2, MAP_SALTY_SPITOON_2F
# 69 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 70 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_7:
# 73 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 74 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 6
# 75 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 5
# 76 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 4, 1, 8
# 77 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 6, 2, 8
# 78 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 5, 3, 8
# 79 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 80 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 81 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 82 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 4
# 83 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 6
# 84 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 5
# 85 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 4, MAP_SALTY_SPITOON_2F
# 86 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 6, MAP_SALTY_SPITOON_2F
# 87 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 5, MAP_SALTY_SPITOON_2F
# 88 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 89 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_8:
# 92 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 7
# 93 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 9
# 94 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 8
# 95 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 7, 1, 8
# 96 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 9, 2, 8
# 97 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 8, 3, 8
# 98 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 99 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 100 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 101 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 7
# 102 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 9
# 103 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 8
# 104 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 7, MAP_SALTY_SPITOON_2F
# 105 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 9, MAP_SALTY_SPITOON_2F
# 106 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 8, MAP_SALTY_SPITOON_2F
# 107 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 108 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4

SaltySpitoon_2F_EventScript_RoomTriggerA_9:
# 111 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 10
# 112 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 12
# 113 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 11
# 114 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 10, 1, 8
# 115 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 12, 2, 8
# 116 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 11, 3, 8
# 117 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 118 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 119 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 120 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 10
# 121 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 12
# 122 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 11
# 123 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 10, MAP_SALTY_SPITOON_2F
# 124 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 12, MAP_SALTY_SPITOON_2F
# 125 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 11, MAP_SALTY_SPITOON_2F
# 126 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 127 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerA_4


SaltySpitoon_2F_EventScript_RoomTriggerB::
# 139 "data//maps/SaltySpitoon_2F/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerB_2
# 142 "data//maps/SaltySpitoon_2F/scripts.pory"
	lock
# 144 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 146 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 147 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 148 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
# 150 "data//maps/SaltySpitoon_2F/scripts.pory"
	switch VAR_GANG_STATE
# 151 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerB_6
# 170 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerB_7
# 189 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerB_8
# 208 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerB_9
# 228 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
# 229 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerB_4:
# 232 "data//maps/SaltySpitoon_2F/scripts.pory"
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerB_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerB_6:
# 153 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 154 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 3
# 155 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 2
# 156 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 1, 11, 8
# 157 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 3, 12, 8
# 158 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 2, 13, 8
# 159 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 160 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 161 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 162 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 1
# 163 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 3
# 164 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 2
# 165 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 1, MAP_SALTY_SPITOON_2F
# 166 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 3, MAP_SALTY_SPITOON_2F
# 167 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 2, MAP_SALTY_SPITOON_2F
# 168 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 169 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_7:
# 172 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 4
# 173 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 6
# 174 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 5
# 175 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 4, 11, 8
# 176 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 6, 12, 8
# 177 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 5, 13, 8
# 178 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 179 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 180 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 181 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 4
# 182 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 6
# 183 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 5
# 184 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 4, MAP_SALTY_SPITOON_2F
# 185 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 6, MAP_SALTY_SPITOON_2F
# 186 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 5, MAP_SALTY_SPITOON_2F
# 187 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 188 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_8:
# 191 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 7
# 192 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 9
# 193 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 8
# 194 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 7, 11, 8
# 195 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 9, 12, 8
# 196 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 8, 13, 8
# 197 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 198 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 199 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 200 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 7
# 201 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 9
# 202 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 8
# 203 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 7, MAP_SALTY_SPITOON_2F
# 204 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 9, MAP_SALTY_SPITOON_2F
# 205 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 8, MAP_SALTY_SPITOON_2F
# 206 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 207 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4

SaltySpitoon_2F_EventScript_RoomTriggerB_9:
# 210 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 10
# 211 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 12
# 212 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 11
# 213 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 10, 11, 8
# 214 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 12, 12, 8
# 215 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 11, 13, 8
# 216 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 217 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 218 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 219 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 10
# 220 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 12
# 221 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 11
# 222 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 10, MAP_SALTY_SPITOON_2F
# 223 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 12, MAP_SALTY_SPITOON_2F
# 224 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 11, MAP_SALTY_SPITOON_2F
# 225 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 226 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerB_4


SaltySpitoon_2F_EventScript_RoomTriggerC::
# 238 "data//maps/SaltySpitoon_2F/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerC_2
# 241 "data//maps/SaltySpitoon_2F/scripts.pory"
	lock
# 243 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 245 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 246 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 247 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
# 249 "data//maps/SaltySpitoon_2F/scripts.pory"
	switch VAR_GANG_STATE
# 250 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerC_6
# 269 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerC_7
# 288 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerC_8
# 307 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerC_9
# 327 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
# 328 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerC_4:
# 331 "data//maps/SaltySpitoon_2F/scripts.pory"
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerC_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerC_6:
# 252 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 253 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 3
# 254 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 2
# 255 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 1, 1, 18
# 256 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 3, 2, 18
# 257 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 2, 3, 18
# 258 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 259 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 260 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 261 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 1
# 262 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 3
# 263 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 2
# 264 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 1, MAP_SALTY_SPITOON_2F
# 265 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 3, MAP_SALTY_SPITOON_2F
# 266 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 2, MAP_SALTY_SPITOON_2F
# 267 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 268 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_7:
# 271 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 4
# 272 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 6
# 273 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 5
# 274 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 4, 1, 18
# 275 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 6, 2, 18
# 276 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 5, 3, 18
# 277 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 278 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 279 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 280 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 4
# 281 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 6
# 282 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 5
# 283 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 4, MAP_SALTY_SPITOON_2F
# 284 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 6, MAP_SALTY_SPITOON_2F
# 285 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 5, MAP_SALTY_SPITOON_2F
# 286 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 287 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_8:
# 290 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 7
# 291 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 9
# 292 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 8
# 293 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 7, 1, 18
# 294 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 9, 2, 18
# 295 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 8, 3, 18
# 296 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 297 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 298 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 299 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 7
# 300 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 9
# 301 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 8
# 302 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 7, MAP_SALTY_SPITOON_2F
# 303 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 9, MAP_SALTY_SPITOON_2F
# 304 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 8, MAP_SALTY_SPITOON_2F
# 305 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 306 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4

SaltySpitoon_2F_EventScript_RoomTriggerC_9:
# 309 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 10
# 310 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 12
# 311 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 11
# 312 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 10, 1, 18
# 313 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 12, 2, 18
# 314 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 11, 3, 18
# 315 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 316 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 317 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 318 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 10
# 319 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 12
# 320 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 11
# 321 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 10, MAP_SALTY_SPITOON_2F
# 322 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 12, MAP_SALTY_SPITOON_2F
# 323 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 11, MAP_SALTY_SPITOON_2F
# 324 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 325 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerC_4


SaltySpitoon_2F_EventScript_RoomTriggerD::
# 337 "data//maps/SaltySpitoon_2F/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_eq SaltySpitoon_2F_EventScript_RoomTriggerD_2
# 340 "data//maps/SaltySpitoon_2F/scripts.pory"
	lock
# 342 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_TEMP_4, 1
# 344 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 345 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 346 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushPositionPlayer
# 348 "data//maps/SaltySpitoon_2F/scripts.pory"
	switch VAR_GANG_STATE
# 349 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 6, SaltySpitoon_2F_EventScript_RoomTriggerD_6
# 368 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 7, SaltySpitoon_2F_EventScript_RoomTriggerD_7
# 387 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 8, SaltySpitoon_2F_EventScript_RoomTriggerD_8
# 406 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 9, SaltySpitoon_2F_EventScript_RoomTriggerD_9
# 426 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0
# 427 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
SaltySpitoon_2F_EventScript_RoomTriggerD_4:
# 430 "data//maps/SaltySpitoon_2F/scripts.pory"
	release
	end

SaltySpitoon_2F_EventScript_RoomTriggerD_2:
	end

SaltySpitoon_2F_EventScript_RoomTriggerD_6:
# 351 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 352 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 3
# 353 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 2
# 354 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 1, 11, 18
# 355 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 3, 12, 18
# 356 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 2, 13, 18
# 357 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 358 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 359 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
# 360 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 1
# 361 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 3
# 362 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 2
# 363 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 1, MAP_SALTY_SPITOON_2F
# 364 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 3, MAP_SALTY_SPITOON_2F
# 365 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 2, MAP_SALTY_SPITOON_2F
# 366 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 367 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushBlue
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_7:
# 370 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 4
# 371 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 6
# 372 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 5
# 373 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 4, 11, 18
# 374 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 6, 12, 18
# 375 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 5, 13, 18
# 376 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 377 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_LEFT
# 378 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
# 379 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 4
# 380 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 6
# 381 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 5
# 382 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 4, MAP_SALTY_SPITOON_2F
# 383 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 6, MAP_SALTY_SPITOON_2F
# 384 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 5, MAP_SALTY_SPITOON_2F
# 385 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 386 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushYellow
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_8:
# 389 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 7
# 390 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 9
# 391 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 8
# 392 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 7, 11, 18
# 393 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 9, 12, 18
# 394 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 8, 13, 18
# 395 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_LEFT
# 396 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 397 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_LEFT
# 398 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 7
# 399 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 9
# 400 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 8
# 401 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 7, MAP_SALTY_SPITOON_2F
# 402 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 9, MAP_SALTY_SPITOON_2F
# 403 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 8, MAP_SALTY_SPITOON_2F
# 404 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 405 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushRed
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4

SaltySpitoon_2F_EventScript_RoomTriggerD_9:
# 408 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 10
# 409 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 12
# 410 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 11
# 411 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 10, 11, 18
# 412 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 12, 12, 18
# 413 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectxyperm 11, 13, 18
# 414 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
# 415 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_LEFT
# 416 "data//maps/SaltySpitoon_2F/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_LEFT
# 417 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 10
# 418 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 12
# 419 "data//maps/SaltySpitoon_2F/scripts.pory"
	addobject 11
# 420 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 10, MAP_SALTY_SPITOON_2F
# 421 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 12, MAP_SALTY_SPITOON_2F
# 422 "data//maps/SaltySpitoon_2F/scripts.pory"
	showobjectat 11, MAP_SALTY_SPITOON_2F
# 423 "data//maps/SaltySpitoon_2F/scripts.pory"
	special DrawWholeMapView
# 424 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_AmbushGreen
	goto SaltySpitoon_2F_EventScript_RoomTriggerD_4


SaltySpitoon_2F_EventScript_IncVar::
# 435 "data//maps/SaltySpitoon_2F/scripts.pory"
	switch VAR_GANG_STATE
# 436 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 6, SaltySpitoon_2F_EventScript_IncVar_3
# 438 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 7, SaltySpitoon_2F_EventScript_IncVar_4
# 440 "data//maps/SaltySpitoon_2F/scripts.pory"
	case 8, SaltySpitoon_2F_EventScript_IncVar_5
# 443 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_EventScript_IncVar_Text_0
# 444 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
SaltySpitoon_2F_EventScript_IncVar_1:
	return

SaltySpitoon_2F_EventScript_IncVar_3:
# 437 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_GANG_STATE, 7
	goto SaltySpitoon_2F_EventScript_IncVar_1

SaltySpitoon_2F_EventScript_IncVar_4:
# 439 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_GANG_STATE, 8
	goto SaltySpitoon_2F_EventScript_IncVar_1

SaltySpitoon_2F_EventScript_IncVar_5:
# 441 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_GANG_STATE, 9
	goto SaltySpitoon_2F_EventScript_IncVar_1


SaltySpitoon_2F_EventScript_AmbushBlue::
# 451 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 1, SaltySpitoon_2F_Movement_Ambush1
# 452 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 3, SaltySpitoon_2F_Movement_AmbushBig
# 453 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 2, SaltySpitoon_2F_Movement_Ambush2
# 454 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 456 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush1
# 457 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 459 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 460 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 2, Common_Movement_WalkUp
# 461 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 463 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_BLUE6, SaltySpitoon_2F_Text_Blue1Lost, TRAINER_BLUE7, SaltySpitoon_2F_Text_Blue2Lost
# 464 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitstate
# 467 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush2
# 468 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 469 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 470 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 471 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BIGBLUE, SaltySpitoon_2F_Text_BigBlueLost
# 473 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush3
# 474 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 475 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 1, MAP_SALTY_SPITOON_2F
# 476 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 3, MAP_SALTY_SPITOON_2F
# 477 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 2, MAP_SALTY_SPITOON_2F
# 478 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 1
# 479 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 3
# 480 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 2
# 481 "data//maps/SaltySpitoon_2F/scripts.pory"
	setflag FLAG_SS2F_BLUE
# 482 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushYellow::
# 492 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 4, SaltySpitoon_2F_Movement_Ambush1
# 493 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 6, SaltySpitoon_2F_Movement_AmbushBig
# 494 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 5, SaltySpitoon_2F_Movement_Ambush2
# 495 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 497 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush1
# 498 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 500 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkUp
# 501 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 502 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 504 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_YELLOW6, SaltySpitoon_2F_Text_Yellow1Lost, TRAINER_YELLOW7, SaltySpitoon_2F_Text_Yellow2Lost
# 505 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitstate
# 508 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush2
# 509 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 510 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 511 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 512 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BIGYELLOW, SaltySpitoon_2F_Text_BigYellowLost
# 514 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush3
# 515 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 516 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 4, MAP_SALTY_SPITOON_2F
# 517 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 6, MAP_SALTY_SPITOON_2F
# 518 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 5, MAP_SALTY_SPITOON_2F
# 519 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 4
# 520 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 6
# 521 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 5
# 522 "data//maps/SaltySpitoon_2F/scripts.pory"
	setflag FLAG_SS2F_YELLOW
# 523 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushRed::
# 533 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 7, SaltySpitoon_2F_Movement_Ambush1
# 534 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 9, SaltySpitoon_2F_Movement_AmbushBig
# 535 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 8, SaltySpitoon_2F_Movement_Ambush2
# 536 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 538 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush1
# 539 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 541 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 542 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 543 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 545 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_RED6, SaltySpitoon_2F_Text_Red1Lost, TRAINER_RED7, SaltySpitoon_2F_Text_Red2Lost
# 548 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush2
# 549 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 550 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 551 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 552 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BIGRED, SaltySpitoon_2F_Text_BigRedLost
# 554 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush3
# 555 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 556 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 7, MAP_SALTY_SPITOON_2F
# 557 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 9, MAP_SALTY_SPITOON_2F
# 558 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 8, MAP_SALTY_SPITOON_2F
# 559 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 7
# 560 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 9
# 561 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 8
# 562 "data//maps/SaltySpitoon_2F/scripts.pory"
	setflag FLAG_SS2F_RED
# 563 "data//maps/SaltySpitoon_2F/scripts.pory"
	call SaltySpitoon_2F_EventScript_IncVar
	return


SaltySpitoon_2F_EventScript_AmbushGreen::
# 573 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 10, SaltySpitoon_2F_Movement_Ambush1
# 574 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 12, SaltySpitoon_2F_Movement_AmbushBig
# 575 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 11, SaltySpitoon_2F_Movement_Ambush2
# 576 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 578 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush1
# 579 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 581 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 582 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 11, Common_Movement_WalkUp
# 583 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 585 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_two_trainers TRAINER_GREEN6, SaltySpitoon_2F_Text_Green1Lost, TRAINER_GREEN7, SaltySpitoon_2F_Text_Green2Lost
# 588 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush2
# 589 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 590 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 591 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
# 592 "data//maps/SaltySpitoon_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_BIGGREEN, SaltySpitoon_2F_Text_BigGreenLost
# 594 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_Ambush3
# 595 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 596 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 12, MAP_SALTY_SPITOON_2F
# 597 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 12
# 599 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_GetTattoo
# 600 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 601 "data//maps/SaltySpitoon_2F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 602 "data//maps/SaltySpitoon_2F/scripts.pory"
	giveitem ITEM_TATTOO
# 603 "data//maps/SaltySpitoon_2F/scripts.pory"
	msgbox SaltySpitoon_2F_Text_GetTattoo2
# 604 "data//maps/SaltySpitoon_2F/scripts.pory"
	closemessage
# 605 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 10, MAP_SALTY_SPITOON_2F
# 606 "data//maps/SaltySpitoon_2F/scripts.pory"
	hideobjectat 11, MAP_SALTY_SPITOON_2F
# 607 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 11
# 608 "data//maps/SaltySpitoon_2F/scripts.pory"
	removeobject 10
# 609 "data//maps/SaltySpitoon_2F/scripts.pory"
	setflag FLAG_SS2F_GREEN
# 610 "data//maps/SaltySpitoon_2F/scripts.pory"
	setflag FLAG_SS2F_GREEN
# 611 "data//maps/SaltySpitoon_2F/scripts.pory"
	setvar VAR_GANG_STATE, 5
# 612 "data//maps/SaltySpitoon_2F/scripts.pory"
	setmetatile 17, 1, METATILE_BrendansMaysHouse_StairsDown, 0
	return


SaltySpitoon_2F_EventScript_AmbushPositionPlayer::
# 620 "data//maps/SaltySpitoon_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SaltySpitoon_2F_Movement_PlayerAmbush
# 621 "data//maps/SaltySpitoon_2F/scripts.pory"
	waitmovement 0
	return


# 626 "data//maps/SaltySpitoon_2F/scripts.pory"
SaltySpitoon_2F_Movement_PlayerAmbush:
# 627 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 627 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 627 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 628 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_right
# 629 "data//maps/SaltySpitoon_2F/scripts.pory"
	face_down
	step_end

# 633 "data//maps/SaltySpitoon_2F/scripts.pory"
SaltySpitoon_2F_Movement_FollowerAmbush:
# 634 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 634 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 634 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 634 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 635 "data//maps/SaltySpitoon_2F/scripts.pory"
	face_down
	step_end

# 638 "data//maps/SaltySpitoon_2F/scripts.pory"
SaltySpitoon_2F_Movement_Ambush1:
# 639 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 639 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 639 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 639 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
	step_end

# 642 "data//maps/SaltySpitoon_2F/scripts.pory"
SaltySpitoon_2F_Movement_AmbushBig:
# 643 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_left
# 644 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 644 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 644 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 645 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_right
# 646 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
	step_end

# 649 "data//maps/SaltySpitoon_2F/scripts.pory"
SaltySpitoon_2F_Movement_Ambush2:
# 650 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_left
# 650 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_left
# 651 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 651 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 651 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
# 652 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_right
# 652 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_right
# 653 "data//maps/SaltySpitoon_2F/scripts.pory"
	walk_up
	step_end

SaltySpitoon_2F_EventScript_RoomTriggerA_Text_0:
# 129 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "VAR_GANG_STATE NOT 6-9$"

SaltySpitoon_2F_EventScript_IncVar_Text_0:
# 443 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "IncVar Var out of scope$"

SaltySpitoon_2F_Text_LockDoor::
# 656 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "The door locks behind you.$"

SaltySpitoon_2F_Text_DoorSign::
# 660 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "The door is locked.$"

SaltySpitoon_2F_Text_Ambush1::
# 664 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Get him boys.$"

SaltySpitoon_2F_Text_Blue1Lost::
# 668 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Blue2Lost::
# 672 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Yellow1Lost::
# 676 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Yellow2Lost::
# 680 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Red1Lost::
# 684 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Red2Lost::
# 688 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Green1Lost::
# 692 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "This can't be happening!$"

SaltySpitoon_2F_Text_Green2Lost::
# 696 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Another lousy day...$"

SaltySpitoon_2F_Text_Ambush2::
# 700 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "You wont get away from me!$"

SaltySpitoon_2F_Text_BigBlueLost::
# 704 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigYellowLost::
# 708 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigRedLost::
# 712 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_BigGreenLost::
# 716 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Where'd this go so wrong?$"

SaltySpitoon_2F_Text_Ambush3::
# 720 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Well shit. Let's get out of here!$"

SaltySpitoon_2F_Text_GetTattoo::
# 724 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Like zoinks dude you're super strong\n"
	.string "man!\n"
	.string "Like yeah man we're totally your dudes\l"
	.string "now. You're in the gang man! Like we\l"
	.string "never liked that Big Smoke anyways man.\n"
	.string "Here hang tight man I'll give you your\l"
	.string "official gang tattoo this should only\l"
	.string "take a sec...$"

SaltySpitoon_2F_Text_GetTattoo2::
# 728 "data//maps/SaltySpitoon_2F/scripts.pory"
	.string "Hey! That looks real cool man! Like\n"
	.string "zoinks you look like a real tough guy\l"
	.string "now. I'm gonna head back to the shack\l"
	.string "to smoke. See you around boss. Like\l"
	.string "zoinks bro see ya.$"
