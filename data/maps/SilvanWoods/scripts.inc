SilvanWoods_MapScripts::
# 28 "data//maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data//maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SilvanWoods
# 31 "data//maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 32 "data//maps/SilvanWoods/scripts.pory"
	case 1, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 34 "data//maps/SilvanWoods/scripts.pory"
	case 2, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 36 "data//maps/SilvanWoods/scripts.pory"
	case 3, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 40 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 43 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 33 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 35 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 37 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 41 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
	return


SilvanWoods_Script_SilvanWoodsTransition::
# 51 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
# 52 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_LowerRioDracoTransition::
# 56 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
# 57 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_SilvaProfundaTransition::
# 61 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
# 62 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_ShowFerryEast::
# 66 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 29, 56
# 67 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 68 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 30, 56
# 69 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
	return


SilvanWoods_Script_ShowFerryWest::
# 75 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 19, 56
# 76 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 77 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 18, 56
# 78 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
	return


SilvanWoods_Script_Ferryman::
# 84 "data//maps/SilvanWoods/scripts.pory"
	faceplayer
# 85 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman1, MSGBOX_YESNO
# 86 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilvanWoods_Script_Ferryman_1
# 89 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman2, MSGBOX_DEFAULT
# 90 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 91 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_Ferryman_4
# 95 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
# 96 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return

SilvanWoods_Script_Ferryman_1:
# 87 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerry
	return

SilvanWoods_Script_Ferryman_4:
# 92 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
# 93 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return


SilvanWoods_Script_DoFerry::
# 103 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman3, MSGBOX_DEFAULT
# 104 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 105 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_DoFerry_1
# 108 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryEast
	return

SilvanWoods_Script_DoFerry_1:
# 106 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryWest
	return


SilvanWoods_Script_DoFerryWest::
# 113 "data//maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 115 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 116 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 118 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 119 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 121 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 122 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 123 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 126 "data//maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 127 "data//maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 128 "data//maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 130 "data//maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 132 "data//maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 135 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 136 "data//maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 138 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 139 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 141 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 142 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 143 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 145 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 146 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 147 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 149 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 150 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 151 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 152 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 153 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 154 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 156 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 157 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 159 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
# 161 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 162 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 164 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 129 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 131 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 133 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 169 "data//maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 171 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 172 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 174 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 175 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 176 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 177 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 178 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 179 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 182 "data//maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 183 "data//maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 184 "data//maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 189 "data//maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 191 "data//maps/SilvanWoods/scripts.pory"
	case DIR_WEST, SilvanWoods_Script_DoFerryEast_5
# 194 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 195 "data//maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 197 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 198 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 200 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryE
# 201 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryE
# 202 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 204 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 205 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 206 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 208 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 209 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 210 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 211 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 212 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 213 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 215 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 216 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 218 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
# 220 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 221 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 223 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 185 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 186 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 187 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 190 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 192 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_Script_SetupSilvanLeafeScene2::
# 229 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_6, 1
# 231 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 2
	goto_if_eq SilvanWoods_Script_SetupSilvanLeafeScene2_2
SilvanWoods_Script_SetupSilvanLeafeScene2_1:
	return

SilvanWoods_Script_SetupSilvanLeafeScene2_2:
# 232 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 14, 52
# 233 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 235 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 14, 53
# 236 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 238 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 14, 54
# 239 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_LEFT
	goto SilvanWoods_Script_SetupSilvanLeafeScene2_1


SilvanWoods_Script_SilvanLeafScene2A::
# 246 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 247 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 248 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 249 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2B::
# 254 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 255 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 256 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 257 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2::
# 262 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 263 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 264 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 266 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 267 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott1
# 268 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 269 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 271 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLaefScene2_Player1
# 272 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 274 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 275 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott2
# 276 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 278 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 279 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 280 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 281 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 284 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 285 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 286 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown2
# 287 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkDown2
# 288 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 292 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 293 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 294 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 295 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 296 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 297 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 299 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown
# 300 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 302 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 303 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 305 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 306 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 307 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 308 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 309 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 312 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 313 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 314 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 315 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 316 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 317 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 318 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 319 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 320 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 321 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 323 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 324 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 325 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 326 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 327 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 328 "data//maps/SilvanWoods/scripts.pory"
	removeobject 9
# 329 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 9, MAP_SILVAN_WOODS
# 330 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 331 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 333 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 334 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 335 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 336 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 337 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 338 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 30, MAP_SILVAN_WOODS
# 339 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 340 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 342 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 343 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 344 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 345 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 346 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 33, MAP_SILVAN_WOODS
# 347 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 348 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 350 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 351 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 352 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 354 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 355 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 356 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 358 "data//maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 361 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 29, 56
# 362 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 363 "data//maps/SilvanWoods/scripts.pory"
	addobject 9
# 364 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 365 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 366 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 368 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 29, 56
# 369 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 370 "data//maps/SilvanWoods/scripts.pory"
	addobject 30
# 371 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 372 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 373 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 374 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 376 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 29, 56
# 377 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 378 "data//maps/SilvanWoods/scripts.pory"
	addobject 33
# 379 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 380 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 381 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 382 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 383 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 385 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 386 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 387 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 388 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 389 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 390 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 392 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 393 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 394 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 395 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 396 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 397 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp
# 398 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp
# 399 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 400 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 402 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 403 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 404 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 405 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 407 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight2
# 408 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight2
# 409 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight2
# 410 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 411 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 413 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 414 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceDown
# 415 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceDown
# 416 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 417 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 419 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 420 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott3
# 421 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 422 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 424 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 425 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 426 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceRight
# 427 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceRight
# 428 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 429 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 430 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 431 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 432 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_ExclamationMark
# 433 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 435 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 436 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 37, 50
# 437 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_DOWN
# 438 "data//maps/SilvanWoods/scripts.pory"
	addobject 35
# 439 "data//maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_Chik1
# 440 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 442 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_LOOK_AROUND
# 443 "data//maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 444 "data//maps/SilvanWoods/scripts.pory"
	delay 40
# 445 "data//maps/SilvanWoods/scripts.pory"
	waitmoncry
# 447 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 448 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 449 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 450 "data//maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf1
# 451 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_LeafChaseChik1
# 452 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_LeafChaseChik1
# 454 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 455 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott4
# 456 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 458 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 459 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 460 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 464 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott5
# 465 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 466 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 468 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit1
# 469 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 471 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 473 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 474 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 475 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 477 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 478 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 479 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 481 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 482 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 483 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 485 "data//maps/SilvanWoods/scripts.pory"
	removeobject 9
# 486 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 487 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 488 "data//maps/SilvanWoods/scripts.pory"
	addobject 9
# 490 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott::
# 495 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_EventScript_Scott_1
	return

SilvanWoods_EventScript_Scott_1:
# 496 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 497 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	return


SilvanWoods_EventScript_ScottBlock::
# 502 "data//maps/SilvanWoods/scripts.pory"
	lock
# 503 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 504 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 505 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 506 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 507 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 508 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 509 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 510 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 511 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 512 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 513 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 514 "data//maps/SilvanWoods/scripts.pory"
	release
	end


SilvanWoods_Script_TryShowBlue::
# 519 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_4, 1
# 520 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TryShowBlue_3
SilvanWoods_Script_TryShowBlue_1:
	end

SilvanWoods_Script_TryShowBlue_2:
# 521 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowBlue
	goto SilvanWoods_Script_TryShowBlue_1

SilvanWoods_Script_TryShowBlue_3:
# 520 "data//maps/SilvanWoods/scripts.pory"
	goto_if_unset FLAG_SILVANWOODS_BLUESHOWN, SilvanWoods_Script_TryShowBlue_2
	goto SilvanWoods_Script_TryShowBlue_1


SilvanWoods_Script_ShowBlue::
# 528 "data//maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVANWOODS_BLUESHOWN
# 529 "data//maps/SilvanWoods/scripts.pory"
	lock
# 531 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 532 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 534 "data//maps/SilvanWoods/scripts.pory"
	removeobject 36
# 535 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 8, 12
# 536 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_FACE_RIGHT
# 537 "data//maps/SilvanWoods/scripts.pory"
	addobject 36
# 538 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 36, MAP_SILVAN_WOODS
# 540 "data//maps/SilvanWoods/scripts.pory"
	removeobject 37
# 541 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 7, 12
# 542 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_RIGHT
# 543 "data//maps/SilvanWoods/scripts.pory"
	addobject 37
# 544 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 37, MAP_SILVAN_WOODS
# 546 "data//maps/SilvanWoods/scripts.pory"
	applymovement 36, SilvanWoods_Movement_BlueWalkBy
# 547 "data//maps/SilvanWoods/scripts.pory"
	applymovement 37, SilvanWoods_Movement_BlueWalkBy
# 548 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 550 "data//maps/SilvanWoods/scripts.pory"
	removeobject 36
# 551 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 0, 0
# 552 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_INVISIBLE
# 554 "data//maps/SilvanWoods/scripts.pory"
	removeobject 37
# 555 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 0, 0
# 556 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_INVISIBLE
# 558 "data//maps/SilvanWoods/scripts.pory"
	release
	return


SilvanWoods_EventScript_Crystal::
# 563 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 564 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 565 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 570 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 571 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 572 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 577 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 578 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 579 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 584 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 585 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 586 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 591 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 592 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 593 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 599 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 600 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 601 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 606 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 607 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 608 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 613 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 614 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 615 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 620 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 621 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 622 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 627 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 628 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 629 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 634 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 635 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 636 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 641 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 642 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 643 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 648 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 649 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 650 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 655 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 656 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 657 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 662 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 663 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 664 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 669 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 670 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 671 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 676 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 677 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 678 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 683 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 684 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 685 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 691 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 692 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 693 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 698 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 699 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 700 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 705 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 706 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 707 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 712 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 713 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 714 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 719 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 720 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 721 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 726 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 727 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 728 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 733 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 734 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 735 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 740 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 741 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 742 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 747 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 748 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 749 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 753 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 754 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 755 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 758 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 759 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 760 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 763 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 764 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 764 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 767 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 768 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 768 "data//maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 771 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 772 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 773 "data//maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 776 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 777 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 778 "data//maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 781 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 782 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 783 "data//maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 786 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 787 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 787 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 788 "data//maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 791 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 792 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 792 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 793 "data//maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 796 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLaefScene2_Player1:
# 797 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 798 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 801 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Chik1:
# 802 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 802 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 802 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 802 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 802 "data//maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 805 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf1:
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 806 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 809 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_LeafChaseChik1:
# 810 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 810 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 811 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 814 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit1:
# 815 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 815 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 816 "data//maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 819 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_BlueWalkBy:
# 820 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 821 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 822 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 822 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 822 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 822 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 823 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 823 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 824 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 824 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 825 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 825 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 135 "data//maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 185 "data//maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Text_CrystalIntro::
# 828 "data//maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 832 "data//maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 836 "data//maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 840 "data//maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 844 "data//maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 848 "data//maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 852 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 856 "data//maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 860 "data//maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 864 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 868 "data//maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 872 "data//maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 876 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 880 "data//maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 884 "data//maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 888 "data//maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 892 "data//maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 896 "data//maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 900 "data//maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 904 "data//maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 908 "data//maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 912 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 916 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 920 "data//maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 924 "data//maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 928 "data//maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 932 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 936 "data//maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 940 "data//maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 944 "data//maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 948 "data//maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 952 "data//maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 956 "data//maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 960 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 964 "data//maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 968 "data//maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 972 "data//maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 976 "data//maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 980 "data//maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 984 "data//maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 988 "data//maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 992 "data//maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 996 "data//maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 1000 "data//maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 1004 "data//maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 1008 "data//maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 1012 "data//maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 1016 "data//maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 1020 "data//maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 1024 "data//maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 1028 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 1032 "data//maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 1036 "data//maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 1040 "data//maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 1044 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 1048 "data//maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 1052 "data//maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 1057 "data//maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 1061 "data//maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 1065 "data//maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 1069 "data//maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 1073 "data//maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 1077 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 1081 "data//maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 1085 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 1089 "data//maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 1093 "data//maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 1097 "data//maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 1101 "data//maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 1105 "data//maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 1109 "data//maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 1113 "data//maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 1117 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 1121 "data//maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 1125 "data//maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 1129 "data//maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 1133 "data//maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 1137 "data//maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 1141 "data//maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 1145 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 1149 "data//maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 1153 "data//maps/SilvanWoods/scripts.pory"
	.string "This road leads to Castalia. Go find {LEAF}!$"

SilvanWoods_Text_ScottPass::
# 1157 "data//maps/SilvanWoods/scripts.pory"
	.string "This {RIVAL} who is stalking you\n"
	.string "sounds dangerous we should stay as a\l"
	.string "group. Anyways {PLAYER} we're quite\l"
	.string "near Saeclara. This path should lead us\l"
	.string "directly to Mew. I cannot speak for\l"
	.string "either of you but all this excitement\l"
	.string "makes me want a bowl. So once your safe\l"
	.string "in town you can find me poking some\l"
	.string "smot in my local weed shop. Come with me\l"
	.string "Leaf we'll smoke some Indica.$"

SilvanWoods_Text_Ferryman1::
# 1161 "data//maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 1165 "data//maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 1169 "data//maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 1173 "data//maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"

SilvanWoods_Text_Scott1::
# 1177 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}!$"

SilvanWoods_Text_Scott2::
# 1181 "data//maps/SilvanWoods/scripts.pory"
	.string "This man has agreed to ferry people\n"
	.string "across the river for a fee!$"

SilvanWoods_Text_Leaf1::
# 1185 "data//maps/SilvanWoods/scripts.pory"
	.string "Let's not delay! Let us depart at once.$"

SilvanWoods_Text_Scott3::
# 1189 "data//maps/SilvanWoods/scripts.pory"
	.string "It's of great importance we stay as one\n"
	.string "as we travel through perilous Silva...$"

SilvanWoods_Text_Leaf2::
# 1193 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh my! Look what majestic {PKMN} frolic and\n"
	.string "play among the Silvan woods. My heart is\l"
	.string "captured instantly by her...I must have\l"
	.string "you! Come here! Dont be afraid!$"

SilvanWoods_Text_Scott4::
# 1197 "data//maps/SilvanWoods/scripts.pory"
	.string "Come back! Stop {LEAF}! Don't go! It's\n"
	.string "dangerous!$"

SilvanWoods_Text_Scott5::
# 1201 "data//maps/SilvanWoods/scripts.pory"
	.string "Now wasn't she the one in the hurry to\n"
	.string "reach Castalia and behold Mew? The\l"
	.string "hearts and fancies of young girls are\l"
	.string "quick to turn too suddenly. Our job, as\l"
	.string "men, is to direct them towards a better\l"
	.string "path, but defend and support them when\l"
	.string "they err. It's dangerous beneath the\l"
	.string "trees alone for anyone, let alone my\l"
	.string "daughter. Go find her {PLAYER}, keep\l"
	.string "her safe in Silva, and bring her back to\l"
	.string "more sensible ways. I'll go ahead and\l"
	.string "find Castalian paths.$"
