SilvanWoods_MapScripts::
# 28 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 58 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 30 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SilvanWoods_F
# 32 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/SilvanWoods/scripts.pory"
	case 1, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 35 "data/maps/SilvanWoods/scripts.pory"
	case 2, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 37 "data/maps/SilvanWoods/scripts.pory"
	case 3, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 42 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 45 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 49 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 52 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 4
	goto_if_eq SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 34 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 36 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 38 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 43 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 50 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupScottBlock
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 53 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SetupSilvanLeafExit
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME:
# 59 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 60 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_TryRemoveAriados
	return


SilvanWoods_Script_TryRemoveAriados::
# 67 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
	return


SilvanWoods_Script_SilvanWoodsTransition::
# 72 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
# 73 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 74 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_LowerRioDracoTransition::
# 78 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
# 79 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 80 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_SilvaProfundaTransition::
# 84 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
# 85 "data/maps/SilvanWoods/scripts.pory"
	special TransitionMapMusic
# 86 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_ShowFerryEast::
# 90 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 29, 56
# 91 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 30, 56
# 93 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
	return


SilvanWoods_Script_ShowFerryWest::
# 99 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 19, 56
# 100 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 101 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 18, 56
# 102 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
	return


SilvanWoods_Script_Ferryman::
# 108 "data/maps/SilvanWoods/scripts.pory"
	faceplayer
# 109 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman1, MSGBOX_YESNO
# 110 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilvanWoods_Script_Ferryman_1
# 113 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman2, MSGBOX_DEFAULT
# 114 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 115 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_Ferryman_4
# 119 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
# 120 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return

SilvanWoods_Script_Ferryman_1:
# 111 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerry
	return

SilvanWoods_Script_Ferryman_4:
# 116 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
# 117 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
	return


SilvanWoods_Script_DoFerry::
# 127 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman3, MSGBOX_DEFAULT
# 128 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 129 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_DoFerry_1
# 132 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryEast
	return

SilvanWoods_Script_DoFerry_1:
# 130 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryWest
	return


SilvanWoods_Script_DoFerryWest::
# 137 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 139 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 140 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 142 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 143 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 144 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 145 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 146 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 147 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 150 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 151 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 154 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 156 "data/maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 159 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 160 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 162 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 163 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 165 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 166 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 167 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 169 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 170 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 171 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 173 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 174 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 175 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 176 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 177 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 178 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 180 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 181 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 183 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
# 185 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 186 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 188 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 153 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 155 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 157 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 193 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 195 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 196 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 198 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 199 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 200 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 201 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 202 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 203 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 206 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 207 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 213 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 215 "data/maps/SilvanWoods/scripts.pory"
	case DIR_WEST, SilvanWoods_Script_DoFerryEast_5
# 218 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 219 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 221 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 222 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 224 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryE
# 225 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryE
# 226 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 228 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 229 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 230 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 232 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 233 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 234 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 235 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 236 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 237 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 239 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 240 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 242 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
# 244 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 245 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 247 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 209 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 210 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 211 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 214 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 216 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_Script_SetupSilvanLeafeScene2::
# 253 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_6, 1
# 255 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 2
	goto_if_eq SilvanWoods_Script_SetupSilvanLeafeScene2_2
SilvanWoods_Script_SetupSilvanLeafeScene2_1:
	return

SilvanWoods_Script_SetupSilvanLeafeScene2_2:
# 256 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 14, 52
# 257 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_LEFT
# 259 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 14, 53
# 260 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_LEFT
# 262 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 14, 54
# 263 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_LEFT
	goto SilvanWoods_Script_SetupSilvanLeafeScene2_1


SilvanWoods_Script_SilvanLeafScene2A::
# 270 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 271 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 272 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 273 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2B::
# 278 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 279 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 280 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 281 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene2
	return


SilvanWoods_Script_SilvanLeafScene2::
# 286 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 287 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 288 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 290 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 291 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott1
# 292 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 293 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 295 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLaefScene2_Player1
# 296 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 298 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 299 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott2
# 300 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 302 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 303 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 304 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 305 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 308 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 309 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 310 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown2
# 311 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkDown2
# 312 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 316 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 317 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 318 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 319 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 320 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 321 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 323 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkDown
# 324 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 326 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkDown2
# 327 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 329 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 330 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 331 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 332 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 333 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 336 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 337 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 338 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 339 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 340 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 341 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 342 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 343 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 344 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 0, 0
# 345 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_INVISIBLE
# 347 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 348 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 349 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 350 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 351 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 352 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 353 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 9, MAP_SILVAN_WOODS
# 354 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 355 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 357 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 358 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 359 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 360 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 361 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 362 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 30, MAP_SILVAN_WOODS
# 363 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 364 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 366 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 367 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 368 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 369 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 370 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 33, MAP_SILVAN_WOODS
# 371 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 372 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 374 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 375 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 376 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 378 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 379 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 380 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 382 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 385 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 29, 56
# 386 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 387 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 388 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 389 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 390 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 392 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 29, 56
# 393 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 394 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 395 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 396 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 397 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 398 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 400 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 29, 56
# 401 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 402 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 403 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 404 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 405 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 406 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 407 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 409 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 410 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 411 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 412 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 413 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 414 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 416 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 417 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 418 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 419 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 420 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 421 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp
# 422 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp
# 423 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 424 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 426 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight
# 427 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight
# 428 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 429 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 431 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_WalkRight2
# 432 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkRight2
# 433 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkRight2
# 434 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 435 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 437 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 438 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceDown
# 439 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceDown
# 440 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 441 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 443 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 444 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott3
# 445 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 446 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 448 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 449 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 450 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceRight
# 451 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_FaceRight
# 452 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 453 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 454 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 455 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 456 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_ExclamationMark
# 457 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 459 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 460 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 37, 50
# 461 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_DOWN
# 462 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 463 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_Chik1
# 464 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 466 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_LOOK_AROUND
# 467 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 468 "data/maps/SilvanWoods/scripts.pory"
	delay 40
# 469 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 471 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 472 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 473 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 474 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf1
# 475 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_LeafChaseChik1
# 476 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_LeafChaseChik1
# 478 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 479 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott4
# 480 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 482 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 483 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 484 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 488 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott5
# 489 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 490 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 492 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit1
# 493 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 495 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 3
# 497 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 498 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 499 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 501 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 502 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 503 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 505 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 506 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 507 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 509 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 510 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 511 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 512 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 514 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott::
# 519 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_EventScript_Scott_1
	return

SilvanWoods_EventScript_Scott_1:
# 520 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 521 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	return


SilvanWoods_EventScript_ScottBlock::
# 526 "data/maps/SilvanWoods/scripts.pory"
	lock
# 527 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 528 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 529 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 530 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 531 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 532 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 533 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 534 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 535 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 536 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 537 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 538 "data/maps/SilvanWoods/scripts.pory"
	release
	end


SilvanWoods_Script_TryShowBlue::
# 543 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_4, 1
# 544 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TryShowBlue_3
SilvanWoods_Script_TryShowBlue_1:
	end

SilvanWoods_Script_TryShowBlue_2:
# 545 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowBlue
	goto SilvanWoods_Script_TryShowBlue_1

SilvanWoods_Script_TryShowBlue_3:
# 544 "data/maps/SilvanWoods/scripts.pory"
	goto_if_unset FLAG_SILVANWOODS_BLUESHOWN, SilvanWoods_Script_TryShowBlue_2
	goto SilvanWoods_Script_TryShowBlue_1


SilvanWoods_Script_ShowBlue::
# 552 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVANWOODS_BLUESHOWN
# 553 "data/maps/SilvanWoods/scripts.pory"
	lock
# 555 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 556 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 558 "data/maps/SilvanWoods/scripts.pory"
	removeobject 36
# 559 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 8, 12
# 560 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_FACE_RIGHT
# 561 "data/maps/SilvanWoods/scripts.pory"
	addobject 36
# 562 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 36, MAP_SILVAN_WOODS
# 564 "data/maps/SilvanWoods/scripts.pory"
	removeobject 37
# 565 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 7, 12
# 566 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_FACE_RIGHT
# 567 "data/maps/SilvanWoods/scripts.pory"
	addobject 37
# 568 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 37, MAP_SILVAN_WOODS
# 570 "data/maps/SilvanWoods/scripts.pory"
	applymovement 36, SilvanWoods_Movement_BlueWalkBy
# 571 "data/maps/SilvanWoods/scripts.pory"
	applymovement 37, SilvanWoods_Movement_BlueWalkBy
# 572 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 574 "data/maps/SilvanWoods/scripts.pory"
	removeobject 36
# 575 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 36, 0, 0
# 576 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 36, MOVEMENT_TYPE_INVISIBLE
# 578 "data/maps/SilvanWoods/scripts.pory"
	removeobject 37
# 579 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 37, 0, 0
# 580 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 37, MOVEMENT_TYPE_INVISIBLE
# 582 "data/maps/SilvanWoods/scripts.pory"
	release
	return


SilvanWoods_Script_TrySetupSilvanLeaf3::
# 587 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_7, 1
# 588 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 3
	goto_if_eq SilvanWoods_Script_TrySetupSilvanLeaf3_2
SilvanWoods_Script_TrySetupSilvanLeaf3_1:
	return

SilvanWoods_Script_TrySetupSilvanLeaf3_2:
# 590 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 591 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 20, 19
# 592 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
# 593 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 594 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 596 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 597 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 20, 20
# 598 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_RIGHT
# 599 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 600 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 602 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 603 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 23, 19
# 604 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 605 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 606 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
	goto SilvanWoods_Script_TrySetupSilvanLeaf3_1


SilvanWoods_Script_SilvanLeafScene3A::
# 612 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 613 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 614 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 615 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 616 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 617 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 619 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3B::
# 624 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 625 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 626 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 627 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 628 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 629 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_SilvanLeafScene3
# 631 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SilvanLeafScene3::
# 637 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 638 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf3
# 639 "data/maps/SilvanWoods/scripts.pory"
	applymovement 35, SilvanWoods_Movement_ChikFleeLeaf2
# 640 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 642 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_SilvanLeafScene3_Text_0
# 644 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 645 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 647 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf4
# 648 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 649 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 651 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 652 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 28, 14
# 653 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_FACE_LEFT
# 654 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 655 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 657 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 658 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 27, 14
# 659 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_FACE_RIGHT
# 660 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 661 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 663 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 664 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 665 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene
# 666 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 668 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 669 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 670 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 672 "data/maps/SilvanWoods/scripts.pory"
	playbgm MUS_HELP, TRUE
# 674 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 675 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 677 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 678 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf5
# 679 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 681 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceUp
# 682 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 683 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 684 "data/maps/SilvanWoods/scripts.pory"
	applymovement 34, Common_Movement_FaceDown
# 685 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 687 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_ARIADOS, CRY_MODE_ENCOUNTER
# 688 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 689 "data/maps/SilvanWoods/scripts.pory"
	setwildbattle SPECIES_ARIADOS, 23
# 690 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 691 "data/maps/SilvanWoods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, TRUE
# 692 "data/maps/SilvanWoods/scripts.pory"
	dowildbattle
# 694 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 695 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_WalkUp2
# 696 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, Common_Movement_WalkUp2
# 697 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 699 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 700 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf6
# 701 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 702 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 704 "data/maps/SilvanWoods/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_ENCOUNTER
# 705 "data/maps/SilvanWoods/scripts.pory"
	waitmoncry
# 706 "data/maps/SilvanWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 707 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 708 "data/maps/SilvanWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 710 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 711 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 712 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 714 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 715 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf7
# 716 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 717 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 719 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 720 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene3_LeafExit
# 721 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 724 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 725 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 726 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 727 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 728 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 730 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 731 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 732 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
# 733 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 734 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 736 "data/maps/SilvanWoods/scripts.pory"
	removeobject 35
# 737 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 35, 0, 0
# 738 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 35, MOVEMENT_TYPE_INVISIBLE
# 739 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 740 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 742 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 743 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 34, 0, 0
# 744 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_INVISIBLE
# 745 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 746 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_SILVAN_WOODS
# 748 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 4
# 751 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_Script_SetupScottBlock::
# 756 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 757 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SetupSilvanLeafExit::
# 762 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 62, 60
# 763 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 765 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 61, 60
# 766 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
# 768 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 61, 61
# 769 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_FACE_UP
	return


SilvanWoods_Script_SilvanLeafScene4::
# 776 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 778 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 779 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 781 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 782 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 783 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 784 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 786 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 787 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott6
# 788 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 790 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 791 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf8
# 792 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 794 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 33, 190, 98
# 795 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Scott7
# 796 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 33
# 797 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 799 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 800 "data/maps/SilvanWoods/scripts.pory"
	applymovement 30, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 801 "data/maps/SilvanWoods/scripts.pory"
	applymovement 33, SilvanWoods_Movement_SilvanLeafScene4_Exeunt
# 802 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 804 "data/maps/SilvanWoods/scripts.pory"
	removeobject 30
# 805 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 30, 0, 0
# 806 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_INVISIBLE
# 807 "data/maps/SilvanWoods/scripts.pory"
	addobject 30
# 808 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 30, MAP_SILVAN_WOODS
# 810 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 811 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 9, 0, 0
# 812 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 813 "data/maps/SilvanWoods/scripts.pory"
	addobject 9
# 814 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 9, MAP_SILVAN_WOODS
# 816 "data/maps/SilvanWoods/scripts.pory"
	removeobject 33
# 817 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 33, 0, 0
# 818 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 33, MOVEMENT_TYPE_INVISIBLE
# 819 "data/maps/SilvanWoods/scripts.pory"
	addobject 33
# 820 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 33, MAP_SILVAN_WOODS
# 823 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_SILVANWOODS_STATE, 5
# 824 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Crystal::
# 829 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 830 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 831 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 836 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 837 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 838 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 843 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 844 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 845 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 850 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 851 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 852 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 857 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 858 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 859 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 865 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 866 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 867 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 872 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 873 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 874 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 879 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 880 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 881 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 886 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 887 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 888 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 893 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 894 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 895 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 900 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 901 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 902 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 907 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 908 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 909 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 914 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 915 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 916 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 921 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 922 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 923 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 928 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 929 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 930 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 935 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 936 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 937 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 942 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 943 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 944 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 949 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 950 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 951 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 957 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 958 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 959 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 964 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 965 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 966 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 971 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 972 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 973 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 978 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 979 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 980 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 985 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 986 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 987 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 992 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 993 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 994 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 999 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 1000 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 1001 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 1006 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 1007 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 1008 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 1013 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 1014 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 1015 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 1019 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 1020 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1021 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1024 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 1025 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1026 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1029 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 1030 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1030 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1033 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 1034 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1034 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1037 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 1038 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1039 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1042 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1043 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1044 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1047 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1048 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1049 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 1052 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 1053 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1053 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1054 "data/maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 1057 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 1058 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1058 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1059 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 1062 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLaefScene2_Player1:
# 1063 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1064 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1067 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Chik1:
# 1068 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1068 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1068 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1068 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1068 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1071 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf1:
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1072 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1075 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_LeafChaseChik1:
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1076 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1077 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1080 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit1:
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1081 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1082 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 1085 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_BlueWalkBy:
# 1086 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1087 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1088 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1089 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1089 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1090 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1090 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1091 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1091 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1094 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_GoToSpiderScene:
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1095 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1096 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 1096 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 1099 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene3_LeafExit:
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1100 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 1101 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 1104 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ChikFleeLeaf2:
# 1105 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1105 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1105 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1105 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 1108 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_SilvanLeafScene4_Exeunt:
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1109 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1110 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 1111 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1111 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 1111 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 159 "data/maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 209 "data/maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Script_SilvanLeafScene3_Text_0:
# 642 "data/maps/SilvanWoods/scripts.pory"
	.string "No! Wait!$"

SilvanWoods_Text_CrystalIntro::
# 1114 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 1118 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 1122 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 1126 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 1130 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 1134 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 1138 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 1142 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 1146 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 1150 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 1154 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 1158 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 1162 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 1166 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 1170 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 1174 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 1178 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 1182 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 1186 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 1190 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 1194 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 1198 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 1202 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 1206 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 1210 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 1214 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 1218 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 1222 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 1226 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 1230 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 1234 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 1238 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 1242 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 1246 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 1250 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 1254 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 1258 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 1262 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 1266 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 1270 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 1274 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 1278 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 1282 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 1286 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 1290 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 1294 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 1298 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 1302 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 1306 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 1310 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 1314 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 1318 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 1322 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 1326 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 1330 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 1334 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 1338 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 1343 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 1347 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 1351 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 1355 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 1359 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 1363 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 1367 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 1371 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 1375 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 1379 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 1383 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 1387 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 1391 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 1395 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 1399 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 1403 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 1407 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 1411 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 1415 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 1419 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 1423 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 1427 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 1431 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 1435 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 1439 "data/maps/SilvanWoods/scripts.pory"
	.string "This road leads to Castalia. Go find {LEAF}!$"

SilvanWoods_Text_ScottPass::
# 1443 "data/maps/SilvanWoods/scripts.pory"
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
# 1447 "data/maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 1451 "data/maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 1455 "data/maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 1459 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"

SilvanWoods_Text_Scott1::
# 1463 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}!$"

SilvanWoods_Text_Scott2::
# 1467 "data/maps/SilvanWoods/scripts.pory"
	.string "This man has agreed to ferry people\n"
	.string "across the river for a fee!$"

SilvanWoods_Text_Leaf1::
# 1471 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's not delay! Let us depart at once.$"

SilvanWoods_Text_Scott3::
# 1475 "data/maps/SilvanWoods/scripts.pory"
	.string "It's of great importance we stay as one\n"
	.string "as we travel through perilous Silva...$"

SilvanWoods_Text_Leaf2::
# 1479 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh my! Look what majestic {PKMN} frolic and\n"
	.string "play among the Silvan woods. My heart is\l"
	.string "captured instantly by her...I must have\l"
	.string "you! Come here! Dont be afraid!$"

SilvanWoods_Text_Scott4::
# 1483 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back! Stop {LEAF}! Don't go! It's\n"
	.string "dangerous!$"

SilvanWoods_Text_Scott5::
# 1487 "data/maps/SilvanWoods/scripts.pory"
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
# 1492 "data/maps/SilvanWoods/scripts.pory"
	.string "Please have no fear! I will never hurt\n"
	.string "you.$"

SilvanWoods_Text_Leaf4::
# 1498 "data/maps/SilvanWoods/scripts.pory"
	.string "I won't go back until I have captured\n"
	.string "that delicate nymph of Silva. Come on!\l"
	.string "I've nearly gotten her cornered!$"

SilvanWoods_Text_Leaf5::
# 1503 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no! She's in danger! {PLAYER} do\n"
	.string "something!$"

SilvanWoods_Text_Leaf6::
# 1508 "data/maps/SilvanWoods/scripts.pory"
	.string "Now that she's safe I'll catch her with\n"
	.string "a ball.$"

SilvanWoods_Text_Leaf7::
# 1513 "data/maps/SilvanWoods/scripts.pory"
	.string "Chikorita finally trusts me back. It's\n"
	.string "strange she was once my one desire but\l"
	.string "having her now I'm drawn back to Mew. We\l"
	.string "must make haste to reach Castalia in\l"
	.string "order to catch a glimpse of great Mew!$"

SilvanWoods_Text_Scott6::
# 1518 "data/maps/SilvanWoods/scripts.pory"
	.string "What took you so long?$"

SilvanWoods_Text_Leaf8::
# 1523 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm ready to go!$"

SilvanWoods_Text_Scott7::
# 1527 "data/maps/SilvanWoods/scripts.pory"
	.string "Come on! Castalia is right this way!$"
