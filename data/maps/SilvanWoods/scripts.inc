SilvanWoods_MapScripts::
# 28 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 57 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SilvanWoods
# 31 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/SilvanWoods/scripts.pory"
	case 1, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 34 "data/maps/SilvanWoods/scripts.pory"
	case 2, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 36 "data/maps/SilvanWoods/scripts.pory"
	case 3, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 41 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 44 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 48 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 51 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 4
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 33 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 35 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 37 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 42 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 49 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupScottBlock
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 52 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupSilvanLeafExit
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME:
# 58 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 59 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_TryRemoveAriados
	return


SilvanWoods_Script_TryRemoveAriados::
# 66 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
	return


SilvanWoods_Script_SilvanWoodsTransition::
# 71 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
# 72 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 73 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_LowerRioDracoTransition::
# 77 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
# 78 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 79 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_SilvaProfundaTransition::
# 83 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
# 84 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 85 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_ShowFerryEast::
# 89 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 29, 56
# 90 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 30, 56
# 92 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
	return


SilvanWoods_Script_ShowFerryWest::
# 98 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 19, 56
# 99 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 18, 56
# 101 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
	return


SilvanWoods_Script_Ferryman::
# 107 "data/maps/SilvanWoods/scripts.pory"
	faceplayer
# 108 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman1, MSGBOX_YESNO
# 109 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilvanWoods_Script_Ferryman_1
# 112 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman2, MSGBOX_DEFAULT
# 113 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 114 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_Ferryman_4
# 118 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
# 119 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return

SilvanWoods_Script_Ferryman_1:
# 110 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerry
	return

SilvanWoods_Script_Ferryman_4:
# 115 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
# 116 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return


SilvanWoods_Script_DoFerry::
# 126 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman3, MSGBOX_DEFAULT
# 127 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 128 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_DoFerry_1
# 131 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryEast
	return

SilvanWoods_Script_DoFerry_1:
# 129 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryWest
	return


SilvanWoods_Script_DoFerryWest::
# 136 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 138 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 139 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 141 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 142 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 143 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 144 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 145 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 146 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 149 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 150 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 153 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 155 "data/maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 158 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 159 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 161 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 162 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 164 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 165 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 166 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 168 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 169 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 170 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 172 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 173 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 174 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 175 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 176 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 177 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 179 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 180 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 182 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
# 184 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 185 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 187 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 152 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 154 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 156 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 192 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 194 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 195 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 197 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 198 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 199 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 200 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 201 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 202 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 205 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 206 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 212 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 214 "data/maps/SilvanWoods/scripts.pory"
	case DIR_WEST, SilvanWoods_Script_DoFerryEast_5
# 217 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 218 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 220 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 221 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 223 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryE
# 224 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryE
# 225 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 227 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 228 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 229 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 231 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 232 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 233 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 234 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 235 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 236 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 238 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 239 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 241 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
# 243 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 244 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 246 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 208 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 209 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 210 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 213 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 215 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_Script_SetupSilvanLeafeScene2::
# 252 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_6, 1
# 254 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 2
	goto_if_eq SilvanWoods_Script_SetupSilvanLeafeScene2_2
SilvanWoods_Script_SetupSilvanLeafeScene2_1:
	return

SilvanWoods_Script_SetupSilvanLeafeScene2_2:
# 255 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 14, 52
# 256 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 258 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 14, 53
# 259 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 261 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 14, 54
# 262 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_LEFT
	goto SilvanWoods_Script_SetupSilvanLeafeScene2_1


SilvanWoods_Script_SilvanLeafScene2A::
# 269 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 270 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 271 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 272 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2B::
# 277 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 278 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 279 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 280 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2::
# 285 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 286 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 287 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 289 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 290 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott1
# 291 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 292 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 294 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLaefScene2_Player1
# 295 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 297 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 298 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott2
# 299 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 301 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 302 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 303 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 304 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 307 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 308 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 309 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown2
# 310 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkDown2
# 311 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 315 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 316 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 317 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 318 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 319 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 320 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 322 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown
# 323 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 325 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 326 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 328 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 329 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 330 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 331 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 332 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 335 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 336 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 337 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 338 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 339 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 340 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 341 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 342 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 343 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 344 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 346 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 347 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 348 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 349 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 350 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 351 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 352 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 9, MAP_SILVAN_WOODS
# 353 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 354 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 356 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 357 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 358 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 359 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 360 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 361 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 30, MAP_SILVAN_WOODS
# 362 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 363 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 365 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 366 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 367 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 368 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 369 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 33, MAP_SILVAN_WOODS
# 370 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 371 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 373 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 374 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 375 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 377 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 378 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 379 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 381 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 384 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 29, 56
# 385 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 386 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 387 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 388 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 389 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 391 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 29, 56
# 392 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 393 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 394 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 395 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 396 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 397 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 399 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 29, 56
# 400 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 401 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 402 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 403 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 404 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 405 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 406 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 408 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 409 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 410 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 411 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 412 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 413 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 415 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 416 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 417 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 418 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 419 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 420 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp
# 421 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp
# 422 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 423 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 425 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 426 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 427 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 428 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 430 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight2
# 431 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight2
# 432 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight2
# 433 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 434 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 436 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 437 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceDown
# 438 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceDown
# 439 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 440 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 442 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 443 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott3
# 444 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 445 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 447 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 448 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 449 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceRight
# 450 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceRight
# 451 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 452 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 453 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 454 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 455 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_ExclamationMark
# 456 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 458 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 459 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 37, 50
# 460 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_DOWN
# 461 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 462 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_Chik1
# 463 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 465 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_LOOK_AROUND
# 466 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 467 "data/maps/SilvanWoods/scripts.pory"
	delay 40
# 468 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 470 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 471 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 472 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 473 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf1
# 474 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_LeafChaseChik1
# 475 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_LeafChaseChik1
# 477 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 478 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott4
# 479 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 481 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 482 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 483 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 487 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott5
# 488 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 489 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 491 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit1
# 492 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 494 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 496 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 497 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 498 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 500 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 501 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 502 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 504 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 505 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 506 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 508 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 509 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 510 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 511 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 513 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott::
# 518 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_EventScript_Scott_1
	return

SilvanWoods_EventScript_Scott_1:
# 519 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 520 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	return


SilvanWoods_EventScript_ScottBlock::
# 525 "data/maps/SilvanWoods/scripts.pory"
	lock
# 526 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 527 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 528 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 529 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 530 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 531 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 532 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 533 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 534 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 535 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 536 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 537 "data/maps/SilvanWoods/scripts.pory"
	release
	end


SilvanWoods_Script_TryShowBlue::
# 542 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_4, 1
# 543 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TryShowBlue_3
SilvanWoods_Script_TryShowBlue_1:
	end

SilvanWoods_Script_TryShowBlue_2:
# 544 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowBlue
	goto SilvanWoods_Script_TryShowBlue_1

SilvanWoods_Script_TryShowBlue_3:
# 543 "data/maps/SilvanWoods/scripts.pory"
	goto_if_unset FLAG_SILVANWOODS_BLUESHOWN, SilvanWoods_Script_TryShowBlue_2
	goto SilvanWoods_Script_TryShowBlue_1


SilvanWoods_Script_ShowBlue::
# 551 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVANWOODS_BLUESHOWN
# 552 "data/maps/SilvanWoods/scripts.pory"
	lock
# 554 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 555 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 557 "data/maps/SilvanWoods/scripts.pory"
	removeobject 36
# 558 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 8, 12
# 559 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_FACE_RIGHT
# 560 "data/maps/SilvanWoods/scripts.pory"
	addobject 36
# 561 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 36, MAP_SILVAN_WOODS
# 563 "data/maps/SilvanWoods/scripts.pory"
	removeobject 37
# 564 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 7, 12
# 565 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_RIGHT
# 566 "data/maps/SilvanWoods/scripts.pory"
	addobject 37
# 567 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 37, MAP_SILVAN_WOODS
# 569 "data/maps/SilvanWoods/scripts.pory"
	applymovement 36, SilvanWoods_Movement_BlueWalkBy
# 570 "data/maps/SilvanWoods/scripts.pory"
	applymovement 37, SilvanWoods_Movement_BlueWalkBy
# 571 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 573 "data/maps/SilvanWoods/scripts.pory"
	removeobject 36
# 574 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 0, 0
# 575 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_INVISIBLE
# 577 "data/maps/SilvanWoods/scripts.pory"
	removeobject 37
# 578 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 0, 0
# 579 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_INVISIBLE
# 581 "data/maps/SilvanWoods/scripts.pory"
	release
	return


SilvanWoods_Script_TrySetupSilvanLeaf3::
# 586 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_7, 1
# 587 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TrySetupSilvanLeaf3_2
SilvanWoods_Script_TrySetupSilvanLeaf3_1:
	return

SilvanWoods_Script_TrySetupSilvanLeaf3_2:
# 589 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 590 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 20, 19
# 591 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 592 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 593 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 595 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 596 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 20, 20
# 597 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 598 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 599 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 601 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 602 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 23, 19
# 603 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 604 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 605 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
	goto SilvanWoods_Script_TrySetupSilvanLeaf3_1


SilvanWoods_Script_SilvanLeafScene3A::
# 611 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 612 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 613 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 614 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 615 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 616 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 618 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3B::
# 623 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 624 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 625 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 626 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 627 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 628 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 630 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3::
# 636 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 637 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf3
# 638 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf2
# 639 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 641 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_SilvanLeafScene3_Text_0
# 643 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 644 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 646 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf4
# 647 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 648 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 650 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 651 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 28, 14
# 652 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 653 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 654 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 656 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 657 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 27, 14
# 658 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_RIGHT
# 659 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 660 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 662 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 663 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 664 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 665 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 667 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 668 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 669 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 671 "data/maps/SilvanWoods/scripts.pory"
	playbgm MUS_HELP, TRUE
# 673 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 674 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 676 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 677 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf5
# 678 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 680 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceUp
# 681 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 682 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 683 "data/maps/SilvanWoods/scripts.pory"
	applymovement 34, Common_Movement_FaceDown
# 684 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 686 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_ENCOUNTER
# 687 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 688 "data/maps/SilvanWoods/scripts.pory"
	setwildbattle SPECIES_ARIADOS, 23
# 689 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 690 "data/maps/SilvanWoods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 691 "data/maps/SilvanWoods/scripts.pory"
	dowildbattle
# 693 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 694 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp2
# 695 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp2
# 696 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 698 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 699 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf6
# 700 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 701 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 703 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 704 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 705 "data/maps/SilvanWoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 706 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 707 "data/maps/SilvanWoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 709 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 710 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 711 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 713 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 714 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf7
# 715 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 716 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 718 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 719 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 720 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 723 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 724 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 725 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 726 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 727 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 729 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 730 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 731 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
# 732 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 733 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 735 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 736 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 737 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 738 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 739 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 741 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 742 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 0, 0
# 743 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_INVISIBLE
# 744 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 745 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 747 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 4
# 750 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SetupScottBlock::
# 755 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 756 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SetupSilvanLeafExit::
# 761 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 762 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 764 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 765 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 767 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 768 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SilvanLeafScene4::
# 775 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 777 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 778 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 780 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 781 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 782 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 783 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 785 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 786 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott6
# 787 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 789 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 790 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf8
# 791 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 793 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 794 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott7
# 795 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 796 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 798 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 799 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 800 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 801 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 803 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 804 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 805 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 806 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 807 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 809 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 810 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 811 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 812 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 813 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 815 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 816 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 817 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 818 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 819 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 822 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 5
# 823 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Crystal::
# 828 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 829 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 830 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 835 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 836 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 837 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 842 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 843 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 844 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 849 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 850 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 851 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 856 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 857 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 858 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 864 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 865 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 866 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 871 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 872 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 873 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 878 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 879 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 880 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 885 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 886 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 887 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 892 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 893 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 894 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 899 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 900 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 901 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 906 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 907 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 908 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 913 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 914 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 915 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 920 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 921 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 922 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 927 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 928 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 929 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 934 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 935 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 936 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 941 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 942 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 943 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 948 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 949 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 950 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 956 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 957 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 958 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 963 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 964 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 965 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 970 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 971 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 972 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 977 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 978 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 979 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 984 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 985 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 986 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 991 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 992 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 993 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 998 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 999 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 1000 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 1005 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 1006 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 1007 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 1012 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 1013 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 1014 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 1018 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 1019 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1020 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1023 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 1024 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1025 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1028 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 1029 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1029 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1032 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 1033 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1033 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1036 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 1037 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1038 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1041 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1042 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1046 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1047 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1051 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 1052 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1052 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1053 "data/maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 1056 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 1057 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1057 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1058 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 1061 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLaefScene2_Player1:
# 1062 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1063 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1066 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Chik1:
# 1067 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1067 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1067 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1067 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1067 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1070 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf1:
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1071 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1074 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_LeafChaseChik1:
# 1075 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1075 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1079 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit1:
# 1080 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1080 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1084 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_BlueWalkBy:
# 1085 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1086 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1087 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1087 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1087 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1087 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1089 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1089 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1090 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1090 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1093 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene:
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1094 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1098 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_LeafExit:
# 1099 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1099 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1099 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1099 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1103 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf2:
# 1104 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1104 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1104 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1104 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1107 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene4_Exeunt:
# 1108 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1108 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1108 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1108 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 158 "data/maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 208 "data/maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Script_SilvanLeafScene3_Text_0:
# 641 "data/maps/SilvanWoods/scripts.pory"
	.string "No! Wait!$"

SilvanWoods_Text_CrystalIntro::
# 1113 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 1117 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 1121 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 1125 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 1129 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 1133 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 1137 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 1141 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 1145 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 1149 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 1153 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 1157 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 1161 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 1165 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 1169 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 1173 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 1177 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 1181 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 1185 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 1189 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 1193 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 1197 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 1201 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 1205 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 1209 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 1213 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 1217 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 1221 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 1225 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 1229 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 1233 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 1237 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 1241 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 1245 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 1249 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 1253 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 1257 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 1261 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 1265 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 1269 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 1273 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 1277 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 1281 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 1285 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 1289 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 1293 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 1297 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 1301 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 1305 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 1309 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 1313 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 1317 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 1321 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 1325 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 1329 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 1333 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 1337 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 1342 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 1346 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 1350 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 1354 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 1358 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 1362 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 1366 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 1370 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 1374 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 1378 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 1382 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 1386 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 1390 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 1394 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 1398 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 1402 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 1406 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 1410 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 1414 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 1418 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 1422 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 1426 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 1430 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 1434 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 1438 "data/maps/SilvanWoods/scripts.pory"
	.string "This road leads to Castalia. Go find {LEAF}!$"

SilvanWoods_Text_ScottPass::
# 1442 "data/maps/SilvanWoods/scripts.pory"
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
# 1446 "data/maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 1450 "data/maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 1454 "data/maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 1458 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"

SilvanWoods_Text_Scott1::
# 1462 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}!$"

SilvanWoods_Text_Scott2::
# 1466 "data/maps/SilvanWoods/scripts.pory"
	.string "This man has agreed to ferry people\n"
	.string "across the river for a fee!$"

SilvanWoods_Text_Leaf1::
# 1470 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's not delay! Let us depart at once.$"

SilvanWoods_Text_Scott3::
# 1474 "data/maps/SilvanWoods/scripts.pory"
	.string "It's of great importance we stay as one\n"
	.string "as we travel through perilous Silva...$"

SilvanWoods_Text_Leaf2::
# 1478 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh my! Look what majestic {PKMN} frolic and\n"
	.string "play among the Silvan woods. My heart is\l"
	.string "captured instantly by her...I must have\l"
	.string "you! Come here! Dont be afraid!$"

SilvanWoods_Text_Scott4::
# 1482 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back! Stop {LEAF}! Don't go! It's\n"
	.string "dangerous!$"

SilvanWoods_Text_Scott5::
# 1486 "data/maps/SilvanWoods/scripts.pory"
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
# 1491 "data/maps/SilvanWoods/scripts.pory"
	.string "Please have no fear! I will never hurt\n"
	.string "you.$"

SilvanWoods_Text_Leaf4::
# 1497 "data/maps/SilvanWoods/scripts.pory"
	.string "I won't go back until I have captured\n"
	.string "that delicate nymph of Silva. Come on!\l"
	.string "I've nearly gotten her cornered!$"

SilvanWoods_Text_Leaf5::
# 1502 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no! She's in danger! {PLAYER} do\n"
	.string "something!$"

SilvanWoods_Text_Leaf6::
# 1507 "data/maps/SilvanWoods/scripts.pory"
	.string "Now that she's safe I'll catch her with\n"
	.string "a ball.$"

SilvanWoods_Text_Leaf7::
# 1512 "data/maps/SilvanWoods/scripts.pory"
	.string "Chikorita finally trusts me back. It's\n"
	.string "strange she was once my one desire but\l"
	.string "having her now I'm drawn back to Mew. We\l"
	.string "must make haste to reach Castalia in\l"
	.string "order to catch a glimpse of great Mew!$"

SilvanWoods_Text_Scott6::
# 1517 "data/maps/SilvanWoods/scripts.pory"
	.string "What took you so long?$"

SilvanWoods_Text_Leaf8::
# 1522 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm ready to go!$"

SilvanWoods_Text_Scott7::
# 1526 "data/maps/SilvanWoods/scripts.pory"
	.string "Come on! Castalia is right this way!$"
