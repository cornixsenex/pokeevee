SilvanWoods_MapScripts::
# 28 "data//maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 57 "data//maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME
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
# 41 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 44 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 48 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 51 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 4
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
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

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 42 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 49 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupScottBlock
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 52 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupSilvanLeafExit
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME:
# 58 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 59 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_TryRemoveAriados
	return


SilvanWoods_Script_TryRemoveAriados::
# 66 "data//maps/SilvanWoods/scripts.pory"
	removeobject 34
	return


SilvanWoods_Script_SilvanWoodsTransition::
# 71 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
# 72 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_LowerRioDracoTransition::
# 76 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
# 77 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_SilvaProfundaTransition::
# 81 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
# 82 "data//maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_ShowFerryEast::
# 86 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 29, 56
# 87 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 88 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 30, 56
# 89 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
	return


SilvanWoods_Script_ShowFerryWest::
# 95 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 19, 56
# 96 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 97 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 18, 56
# 98 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
	return


SilvanWoods_Script_Ferryman::
# 104 "data//maps/SilvanWoods/scripts.pory"
	faceplayer
# 105 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman1, MSGBOX_YESNO
# 106 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilvanWoods_Script_Ferryman_1
# 109 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman2, MSGBOX_DEFAULT
# 110 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 111 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_Ferryman_4
# 115 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
# 116 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return

SilvanWoods_Script_Ferryman_1:
# 107 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerry
	return

SilvanWoods_Script_Ferryman_4:
# 112 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
# 113 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return


SilvanWoods_Script_DoFerry::
# 123 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman3, MSGBOX_DEFAULT
# 124 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 125 "data//maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_DoFerry_1
# 128 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryEast
	return

SilvanWoods_Script_DoFerry_1:
# 126 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryWest
	return


SilvanWoods_Script_DoFerryWest::
# 133 "data//maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 135 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 136 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 138 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 139 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 140 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 141 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 142 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 143 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 146 "data//maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 147 "data//maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 148 "data//maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 150 "data//maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 152 "data//maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 155 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 156 "data//maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 158 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 159 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 161 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 162 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 163 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 165 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 166 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 167 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 169 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 170 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 171 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 172 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 173 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 174 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 176 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 177 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 179 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
# 181 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 182 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 184 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 149 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 151 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 153 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 189 "data//maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 191 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 192 "data//maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 194 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 195 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 196 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 197 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 198 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 199 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 202 "data//maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 203 "data//maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 204 "data//maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 209 "data//maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 211 "data//maps/SilvanWoods/scripts.pory"
	case DIR_WEST, SilvanWoods_Script_DoFerryEast_5
# 214 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 215 "data//maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 217 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 218 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 220 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryE
# 221 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryE
# 222 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 224 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 225 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 226 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 228 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 229 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 230 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 231 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 232 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 233 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 235 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 236 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 238 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
# 240 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 241 "data//maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 243 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 205 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 206 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 207 "data//maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 210 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 212 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_Script_SetupSilvanLeafeScene2::
# 249 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_6, 1
# 251 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 2
	goto_if_eq SilvanWoods_Script_SetupSilvanLeafeScene2_2
SilvanWoods_Script_SetupSilvanLeafeScene2_1:
	return

SilvanWoods_Script_SetupSilvanLeafeScene2_2:
# 252 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 14, 52
# 253 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 255 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 14, 53
# 256 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 258 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 14, 54
# 259 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_LEFT
	goto SilvanWoods_Script_SetupSilvanLeafeScene2_1


SilvanWoods_Script_SilvanLeafScene2A::
# 266 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 267 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 268 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 269 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2B::
# 274 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 275 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 276 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 277 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2::
# 282 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 283 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 284 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 286 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 287 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott1
# 288 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 289 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 291 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLaefScene2_Player1
# 292 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 294 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 295 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott2
# 296 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 298 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 299 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 300 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 301 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 304 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 305 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 306 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown2
# 307 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkDown2
# 308 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 312 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 313 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 314 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 315 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 316 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 317 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 319 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown
# 320 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 322 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 323 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 325 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 326 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 327 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 328 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 329 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 332 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 333 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 334 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 335 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 336 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 337 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 338 "data//maps/SilvanWoods/scripts.pory"
	removeobject 32
# 339 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 340 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 341 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 343 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 344 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 345 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 346 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 347 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 348 "data//maps/SilvanWoods/scripts.pory"
	removeobject 9
# 349 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 9, MAP_SILVAN_WOODS
# 350 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 351 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 353 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 354 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 355 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 356 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 357 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 358 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 30, MAP_SILVAN_WOODS
# 359 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 360 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 362 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 363 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 364 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 365 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 366 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat 33, MAP_SILVAN_WOODS
# 367 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 368 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 370 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 371 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 372 "data//maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 374 "data//maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 375 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 376 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 378 "data//maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 381 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 29, 56
# 382 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 383 "data//maps/SilvanWoods/scripts.pory"
	addobject 9
# 384 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 385 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 386 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 388 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 29, 56
# 389 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 390 "data//maps/SilvanWoods/scripts.pory"
	addobject 30
# 391 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 392 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 393 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 394 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 396 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 29, 56
# 397 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 398 "data//maps/SilvanWoods/scripts.pory"
	addobject 33
# 399 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 400 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 401 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 402 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 403 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 405 "data//maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 406 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 407 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 408 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 409 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 410 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 412 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 413 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 414 "data//maps/SilvanWoods/scripts.pory"
	addobject 32
# 415 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 416 "data//maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 417 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp
# 418 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp
# 419 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 420 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 422 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 423 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 424 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 425 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 427 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight2
# 428 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight2
# 429 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight2
# 430 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 431 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 433 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 434 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceDown
# 435 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceDown
# 436 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 437 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 439 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 440 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott3
# 441 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 442 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 444 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 445 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 446 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceRight
# 447 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceRight
# 448 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 449 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 450 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 451 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 452 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_ExclamationMark
# 453 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 455 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 456 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 37, 50
# 457 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_DOWN
# 458 "data//maps/SilvanWoods/scripts.pory"
	addobject 35
# 459 "data//maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_Chik1
# 460 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 462 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_LOOK_AROUND
# 463 "data//maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 464 "data//maps/SilvanWoods/scripts.pory"
	delay 40
# 465 "data//maps/SilvanWoods/scripts.pory"
	waitmoncry
# 467 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 468 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 469 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 470 "data//maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf1
# 471 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_LeafChaseChik1
# 472 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_LeafChaseChik1
# 474 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 475 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott4
# 476 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 478 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 479 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 480 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 484 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott5
# 485 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 486 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 488 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit1
# 489 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 491 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 493 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 494 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 495 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 497 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 498 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 499 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 501 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 502 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 503 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 505 "data//maps/SilvanWoods/scripts.pory"
	removeobject 9
# 506 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 507 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 508 "data//maps/SilvanWoods/scripts.pory"
	addobject 9
# 510 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott::
# 515 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_EventScript_Scott_1
	return

SilvanWoods_EventScript_Scott_1:
# 516 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 517 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	return


SilvanWoods_EventScript_ScottBlock::
# 522 "data//maps/SilvanWoods/scripts.pory"
	lock
# 523 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 524 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 525 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 526 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 527 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 528 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 529 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 530 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 531 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 532 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 533 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 534 "data//maps/SilvanWoods/scripts.pory"
	release
	end


SilvanWoods_Script_TryShowBlue::
# 539 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_4, 1
# 540 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TryShowBlue_3
SilvanWoods_Script_TryShowBlue_1:
	end

SilvanWoods_Script_TryShowBlue_2:
# 541 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowBlue
	goto SilvanWoods_Script_TryShowBlue_1

SilvanWoods_Script_TryShowBlue_3:
# 540 "data//maps/SilvanWoods/scripts.pory"
	goto_if_unset FLAG_SILVANWOODS_BLUESHOWN, SilvanWoods_Script_TryShowBlue_2
	goto SilvanWoods_Script_TryShowBlue_1


SilvanWoods_Script_ShowBlue::
# 548 "data//maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVANWOODS_BLUESHOWN
# 549 "data//maps/SilvanWoods/scripts.pory"
	lock
# 551 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 552 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 554 "data//maps/SilvanWoods/scripts.pory"
	removeobject 36
# 555 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 8, 12
# 556 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_FACE_RIGHT
# 557 "data//maps/SilvanWoods/scripts.pory"
	addobject 36
# 558 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 36, MAP_SILVAN_WOODS
# 560 "data//maps/SilvanWoods/scripts.pory"
	removeobject 37
# 561 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 7, 12
# 562 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_RIGHT
# 563 "data//maps/SilvanWoods/scripts.pory"
	addobject 37
# 564 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 37, MAP_SILVAN_WOODS
# 566 "data//maps/SilvanWoods/scripts.pory"
	applymovement 36, SilvanWoods_Movement_BlueWalkBy
# 567 "data//maps/SilvanWoods/scripts.pory"
	applymovement 37, SilvanWoods_Movement_BlueWalkBy
# 568 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 570 "data//maps/SilvanWoods/scripts.pory"
	removeobject 36
# 571 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 0, 0
# 572 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_INVISIBLE
# 574 "data//maps/SilvanWoods/scripts.pory"
	removeobject 37
# 575 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 0, 0
# 576 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_INVISIBLE
# 578 "data//maps/SilvanWoods/scripts.pory"
	release
	return


SilvanWoods_Script_TrySetupSilvanLeaf3::
# 583 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_7, 1
# 584 "data//maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TrySetupSilvanLeaf3_2
SilvanWoods_Script_TrySetupSilvanLeaf3_1:
	return

SilvanWoods_Script_TrySetupSilvanLeaf3_2:
# 586 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 587 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 20, 19
# 588 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 589 "data//maps/SilvanWoods/scripts.pory"
	addobject 30
# 590 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 592 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 593 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 20, 20
# 594 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 595 "data//maps/SilvanWoods/scripts.pory"
	addobject 33
# 596 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 598 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 599 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 23, 19
# 600 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 601 "data//maps/SilvanWoods/scripts.pory"
	addobject 35
# 602 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
	goto SilvanWoods_Script_TrySetupSilvanLeaf3_1


SilvanWoods_Script_SilvanLeafScene3A::
# 608 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 609 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 610 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 611 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 612 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 613 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 615 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3B::
# 620 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 621 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 622 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 623 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 624 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 625 "data//maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 627 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3::
# 633 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 634 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf3
# 635 "data//maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf2
# 636 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 638 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_SilvanLeafScene3_Text_0
# 640 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 641 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 643 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf4
# 644 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 645 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 647 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 648 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 28, 14
# 649 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 650 "data//maps/SilvanWoods/scripts.pory"
	addobject 35
# 651 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 653 "data//maps/SilvanWoods/scripts.pory"
	removeobject 34
# 654 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 27, 14
# 655 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_RIGHT
# 656 "data//maps/SilvanWoods/scripts.pory"
	addobject 34
# 657 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 659 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 660 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 661 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 662 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 664 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 665 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 666 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 668 "data//maps/SilvanWoods/scripts.pory"
	playbgm MUS_HELP, TRUE
# 670 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 671 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 673 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 674 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf5
# 675 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 677 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceUp
# 678 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 679 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 680 "data//maps/SilvanWoods/scripts.pory"
	applymovement 34, Common_Movement_FaceDown
# 681 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 683 "data//maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_ENCOUNTER
# 684 "data//maps/SilvanWoods/scripts.pory"
	waitmoncry
# 685 "data//maps/SilvanWoods/scripts.pory"
	setwildbattle SPECIES_ARIADOS, 23
# 686 "data//maps/SilvanWoods/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 687 "data//maps/SilvanWoods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 688 "data//maps/SilvanWoods/scripts.pory"
	dowildbattle
# 690 "data//maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 691 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp2
# 692 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp2
# 693 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 695 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 696 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf6
# 697 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 698 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 700 "data//maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 701 "data//maps/SilvanWoods/scripts.pory"
	waitmoncry
# 702 "data//maps/SilvanWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 703 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 704 "data//maps/SilvanWoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 706 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 707 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 708 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 710 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 711 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf7
# 712 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 713 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 715 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 716 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 717 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 720 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 721 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 722 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 723 "data//maps/SilvanWoods/scripts.pory"
	addobject 30
# 724 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 726 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 727 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 728 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
# 729 "data//maps/SilvanWoods/scripts.pory"
	addobject 33
# 730 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 732 "data//maps/SilvanWoods/scripts.pory"
	removeobject 35
# 733 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 734 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 735 "data//maps/SilvanWoods/scripts.pory"
	addobject 35
# 736 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 738 "data//maps/SilvanWoods/scripts.pory"
	removeobject 34
# 739 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 0, 0
# 740 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_INVISIBLE
# 741 "data//maps/SilvanWoods/scripts.pory"
	addobject 34
# 742 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 744 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 4
# 747 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SetupScottBlock::
# 752 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 753 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SetupSilvanLeafExit::
# 758 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 759 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 761 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 762 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 764 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 765 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SilvanLeafScene4::
# 772 "data//maps/SilvanWoods/scripts.pory"
	lockall
# 774 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 775 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 777 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 778 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 779 "data//maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 780 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 782 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 783 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott6
# 784 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 786 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 787 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf8
# 788 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 790 "data//maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 791 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott7
# 792 "data//maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 793 "data//maps/SilvanWoods/scripts.pory"
	closemessage
# 795 "data//maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 796 "data//maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 797 "data//maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 798 "data//maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 800 "data//maps/SilvanWoods/scripts.pory"
	removeobject 30
# 801 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 802 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 803 "data//maps/SilvanWoods/scripts.pory"
	addobject 30
# 804 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 806 "data//maps/SilvanWoods/scripts.pory"
	removeobject 9
# 807 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 808 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 809 "data//maps/SilvanWoods/scripts.pory"
	addobject 9
# 810 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 812 "data//maps/SilvanWoods/scripts.pory"
	removeobject 33
# 813 "data//maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 814 "data//maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 815 "data//maps/SilvanWoods/scripts.pory"
	addobject 33
# 816 "data//maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 819 "data//maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 5
# 820 "data//maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Crystal::
# 825 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 826 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 827 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 832 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 833 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 834 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 839 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 840 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 841 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 846 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 847 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 848 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 853 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 854 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 855 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 861 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 862 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 863 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 868 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 869 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 870 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 875 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 876 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 877 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 882 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 883 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 884 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 889 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 890 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 891 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 896 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 897 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 898 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 903 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 904 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 905 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 910 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 911 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 912 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 917 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 918 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 919 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 924 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 925 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 926 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 931 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 932 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 933 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 938 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 939 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 940 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 945 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 946 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 947 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 953 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 954 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 955 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 960 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 961 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 962 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 967 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 968 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 969 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 974 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 975 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 976 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 981 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 982 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 983 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 988 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 989 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 990 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 995 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 996 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 997 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 1002 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 1003 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 1004 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 1009 "data//maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 1010 "data//maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 1011 "data//maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 1015 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 1016 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1017 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1020 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 1021 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1022 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1025 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 1026 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1026 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1029 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 1030 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1030 "data//maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1033 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 1034 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1035 "data//maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1038 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1039 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1040 "data//maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1043 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1044 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1045 "data//maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1048 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 1049 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1049 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1050 "data//maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 1053 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 1054 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1054 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1055 "data//maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 1058 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLaefScene2_Player1:
# 1059 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1060 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1063 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Chik1:
# 1064 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1064 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1064 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1064 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1064 "data//maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1067 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf1:
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1068 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1071 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_LeafChaseChik1:
# 1072 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1072 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1073 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1076 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit1:
# 1077 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1077 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1078 "data//maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1081 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_BlueWalkBy:
# 1082 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1083 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1084 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1084 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1084 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1084 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1085 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1085 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1086 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1086 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1087 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1087 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1090 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene:
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1092 "data//maps/SilvanWoods/scripts.pory"
	walk_up
# 1092 "data//maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1095 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_LeafExit:
# 1096 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1096 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1096 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1096 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
# 1097 "data//maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1100 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf2:
# 1101 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1101 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1101 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1101 "data//maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1104 "data//maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene4_Exeunt:
# 1105 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1105 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1105 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1105 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1106 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1106 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1106 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1106 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1106 "data//maps/SilvanWoods/scripts.pory"
	walk_right
# 1107 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1107 "data//maps/SilvanWoods/scripts.pory"
	walk_down
# 1107 "data//maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 155 "data//maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 205 "data//maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Script_SilvanLeafScene3_Text_0:
# 638 "data//maps/SilvanWoods/scripts.pory"
	.string "No! Wait!$"

SilvanWoods_Text_CrystalIntro::
# 1110 "data//maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 1114 "data//maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 1118 "data//maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 1122 "data//maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 1126 "data//maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 1130 "data//maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 1134 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 1138 "data//maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 1142 "data//maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 1146 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 1150 "data//maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 1154 "data//maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 1158 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 1162 "data//maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 1166 "data//maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 1170 "data//maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 1174 "data//maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 1178 "data//maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 1182 "data//maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 1186 "data//maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 1190 "data//maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 1194 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 1198 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 1202 "data//maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 1206 "data//maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 1210 "data//maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 1214 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 1218 "data//maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 1222 "data//maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 1226 "data//maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 1230 "data//maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 1234 "data//maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 1238 "data//maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 1242 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 1246 "data//maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 1250 "data//maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 1254 "data//maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 1258 "data//maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 1262 "data//maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 1266 "data//maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 1270 "data//maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 1274 "data//maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 1278 "data//maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 1282 "data//maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 1286 "data//maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 1290 "data//maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 1294 "data//maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 1298 "data//maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 1302 "data//maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 1306 "data//maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 1310 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 1314 "data//maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 1318 "data//maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 1322 "data//maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 1326 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 1330 "data//maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 1334 "data//maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 1339 "data//maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 1343 "data//maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 1347 "data//maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 1351 "data//maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 1355 "data//maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 1359 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 1363 "data//maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 1367 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 1371 "data//maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 1375 "data//maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 1379 "data//maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 1383 "data//maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 1387 "data//maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 1391 "data//maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 1395 "data//maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 1399 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 1403 "data//maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 1407 "data//maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 1411 "data//maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 1415 "data//maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 1419 "data//maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 1423 "data//maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 1427 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 1431 "data//maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 1435 "data//maps/SilvanWoods/scripts.pory"
	.string "This road leads to Castalia. Go find {LEAF}!$"

SilvanWoods_Text_ScottPass::
# 1439 "data//maps/SilvanWoods/scripts.pory"
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
# 1443 "data//maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 1447 "data//maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 1451 "data//maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 1455 "data//maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"

SilvanWoods_Text_Scott1::
# 1459 "data//maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}!$"

SilvanWoods_Text_Scott2::
# 1463 "data//maps/SilvanWoods/scripts.pory"
	.string "This man has agreed to ferry people\n"
	.string "across the river for a fee!$"

SilvanWoods_Text_Leaf1::
# 1467 "data//maps/SilvanWoods/scripts.pory"
	.string "Let's not delay! Let us depart at once.$"

SilvanWoods_Text_Scott3::
# 1471 "data//maps/SilvanWoods/scripts.pory"
	.string "It's of great importance we stay as one\n"
	.string "as we travel through perilous Silva...$"

SilvanWoods_Text_Leaf2::
# 1475 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh my! Look what majestic {PKMN} frolic and\n"
	.string "play among the Silvan woods. My heart is\l"
	.string "captured instantly by her...I must have\l"
	.string "you! Come here! Dont be afraid!$"

SilvanWoods_Text_Scott4::
# 1479 "data//maps/SilvanWoods/scripts.pory"
	.string "Come back! Stop {LEAF}! Don't go! It's\n"
	.string "dangerous!$"

SilvanWoods_Text_Scott5::
# 1483 "data//maps/SilvanWoods/scripts.pory"
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

SilvanWoods_Text_Leaf3::
# 1488 "data//maps/SilvanWoods/scripts.pory"
	.string "Please have no fear! I will never hurt\n"
	.string "you.$"

SilvanWoods_Text_Leaf4::
# 1494 "data//maps/SilvanWoods/scripts.pory"
	.string "I won't go back until I have captured\n"
	.string "that delicate nymph of Silva. Come on!\l"
	.string "I've nearly gotten her cornered!$"

SilvanWoods_Text_Leaf5::
# 1499 "data//maps/SilvanWoods/scripts.pory"
	.string "Oh no! She's in danger! {PLAYER} do\n"
	.string "something!$"

SilvanWoods_Text_Leaf6::
# 1504 "data//maps/SilvanWoods/scripts.pory"
	.string "Now that she's safe I'll catch her with\n"
	.string "a ball.$"

SilvanWoods_Text_Leaf7::
# 1509 "data//maps/SilvanWoods/scripts.pory"
	.string "Chikorita finally trusts me back. It's\n"
	.string "strange she was once my one desire but\l"
	.string "having her now I'm drawn back to Mew. We\l"
	.string "must make haste to reach Castalia in\l"
	.string "order to catch a glimpse of great Mew!$"

SilvanWoods_Text_Scott6::
# 1514 "data//maps/SilvanWoods/scripts.pory"
	.string "What took you so long?$"

SilvanWoods_Text_Leaf8::
# 1519 "data//maps/SilvanWoods/scripts.pory"
	.string "I'm ready to go!$"

SilvanWoods_Text_Scott7::
# 1523 "data//maps/SilvanWoods/scripts.pory"
	.string "Come on! Castalia is right this way!$"
