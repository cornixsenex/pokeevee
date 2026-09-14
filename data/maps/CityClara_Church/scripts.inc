CityClara_Church_MapScripts::
# 27 "data/maps/CityClara_Church/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 28 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_gt CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_ShowAfterCutscene
	return


CityClara_Church_Script_ShowAfterCutscene::
# 37 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 11, 0, 0
# 38 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 40 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 4, 0, 0
# 41 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 43 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 5, 0, 0
# 44 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 46 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 0, 0
# 47 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 3, 0, 0
# 50 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 52 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 1, 0, 0
# 53 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 55 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 2, 20, 15
# 56 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Church_OnWarp_HidePreChurchCutscene::
# 61 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 62 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 63 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 64 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
	end


CityClara_Church_Script_RemoveRockets::
# 69 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 70 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 11, 0, 0
# 71 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 73 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 74 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 4, 0, 0
# 75 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 77 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 78 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 5, 0, 0
# 79 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 81 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 82 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 0, 0
# 83 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 85 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 86 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 3, 0, 0
# 87 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 89 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 90 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 1, 0, 0
# 91 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 93 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 94 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 2, 0, 0
# 95 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
	return


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
# 101 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 102 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 103 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 13, 20, 15
# 104 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 106 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	end


CityClara_Church_EventScript_BlaineTrigger1::
# 111 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 113 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 114 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 116 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 118 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger2::
# 123 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 125 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 126 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 128 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 130 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger3::
# 136 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 138 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger4::
# 144 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 146 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger5::
# 151 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 153 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 154 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 156 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 158 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger6::
# 163 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 165 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 166 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 168 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 170 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_Script_BlaineSceneL::
# 176 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterL
# 177 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 179 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 180 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 181 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL1
# 182 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 184 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_TEMP_2
# 186 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 191 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_Script_BlaineSceneR::
# 197 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterR
# 198 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 200 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 201 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 202 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR1
# 203 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 205 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 210 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 215 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 216 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 217 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 218 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 219 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 220 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 221 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 222 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 223 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 224 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 225 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 226 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 227 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 230 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 231 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 232 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 235 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 236 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 237 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 239 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 240 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 241 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 242 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 245 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 246 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 247 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 250 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 251 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_0
# 253 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 254 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 255 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 256 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 257 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 258 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 259 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 264 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 265 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 266 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 267 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 268 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 269 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 270 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 271 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 272 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 273 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 274 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 275 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 278 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 279 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 280 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 281 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 282 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 283 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 284 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 285 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 286 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 287 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 288 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 289 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 290 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 291 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 292 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 295 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 296 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 297 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 298 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 300 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 301 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 303 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 304 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 309 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 314 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 315 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 316 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 318 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 319 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 320 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 321 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 322 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 323 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 324 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 325 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 328 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 6, 18, 23
# 329 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 331 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 7, 22, 23
# 332 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 334 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 335 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 338 "data/maps/CityClara_Church/scripts.pory"
	addobject 6
# 339 "data/maps/CityClara_Church/scripts.pory"
	addobject 7
# 340 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 6, MAP_CITY_CLARA_CHURCH
# 341 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 7, MAP_CITY_CLARA_CHURCH
# 342 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_Rocket1Enter
# 343 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_Rocket2Enter
# 344 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 345 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 346 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 347 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 348 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_MeowthEnter
# 349 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 350 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 351 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 352 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 353 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 357 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 388 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 389 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 390 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 391 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 392 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_RemoveRockets
# 393 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_TeamRocketEngageR
# 394 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_TeamRocketEngageR
# 395 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_TeamRocketEngageR
# 396 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 397 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 398 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 399 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 400 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 401 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 402 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 403 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 404 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 405 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 406 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 407 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 408 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 409 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 410 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 411 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 412 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 413 "data/maps/CityClara_Church/scripts.pory"
	turnobject 7, DIR_WEST
# 414 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR2
# 415 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 416 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
CityClara_Church_EventScript_BlaineCutscene_5:
# 418 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_JesseAndJames
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 310 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 311 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 312 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 358 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 359 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 360 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 361 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 362 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_RemoveRockets
# 363 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_TeamRocketEngageL
# 364 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_TeamRocketEngageL
# 365 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_TeamRocketEngageL
# 366 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 367 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 368 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft
# 369 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 370 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 371 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 372 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 373 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 374 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 375 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 376 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft
# 377 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 378 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 379 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 380 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 381 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 382 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 383 "data/maps/CityClara_Church/scripts.pory"
	turnobject 6, DIR_EAST
# 384 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL2
# 385 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 386 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
# 422 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_Script_JesseAndJames_2
# 425 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
CityClara_Church_Script_JesseAndJames_1:
# 427 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 428 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_Script_JesseAndJamesDefeated, NO_MUSIC
	return

CityClara_Church_Script_JesseAndJames_2:
# 423 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
	goto CityClara_Church_Script_JesseAndJames_1


CityClara_Church_Script_JesseAndJamesDefeated::
# 434 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 435 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 437 "data/maps/CityClara_Church/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 438 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 439 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 6, 0, 0
# 440 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 441 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 442 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 7, 0, 0
# 443 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 444 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 445 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 0, 0
# 446 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 447 "data/maps/CityClara_Church/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 449 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_Script_JesseAndJamesDefeated_2
# 452 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenterR
CityClara_Church_Script_JesseAndJamesDefeated_1:
# 454 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 456 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_LeafScene
	return

CityClara_Church_Script_JesseAndJamesDefeated_2:
# 450 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenterL
	goto CityClara_Church_Script_JesseAndJamesDefeated_1


CityClara_Church_Script_LeafScene::
# 461 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 462 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 465 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 12, 18
# 466 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
# 467 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 468 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 470 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 12, 11, 18
# 471 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_RIGHT
# 472 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 473 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 475 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 477 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_LeafEnter
# 478 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_LeafEnter
# 479 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 481 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 482 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 483 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 484 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 486 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 487 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 488 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 490 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 2, 22, 23
# 491 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
# 492 "data/maps/CityClara_Church/scripts.pory"
	addobject 2
# 493 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 2, MAP_CITY_CLARA_CHURCH
# 495 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 496 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 497 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_PythiaEnter
# 499 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 500 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia1
# 501 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 502 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 504 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 505 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 506 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 508 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 509 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia2
# 510 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 512 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 513 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 515 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 516 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 517 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 519 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 520 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 521 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 522 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 524 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf5
# 525 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 526 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 527 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia3A
# 528 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 530 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, Common_Movement_WalkUp3
# 531 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 532 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 533 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 535 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 536 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia3B
# 537 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 539 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 540 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 541 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 543 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 544 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf6
# 545 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 546 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 548 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_LeafExit
# 549 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_LeafExit
# 550 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 552 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp3
# 553 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 555 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 556 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia4
# 558 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 559 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia5
# 561 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_MEWRA_SIGIL
# 563 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Pythia6
# 564 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 565 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 567 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 568 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 0, 0
# 569 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_INVISIBLE
# 570 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 571 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 572 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 12, 0, 0
# 573 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 12, MOVEMENT_TYPE_INVISIBLE
# 574 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 576 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 2
# 577 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_LEAF_ROAD_TO_ARDOR, 1
# 579 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_ChooseStone::
# 586 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 587 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 588 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 590 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 592 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 594 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 589 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 591 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 593 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveLeafStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 595 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 602 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 603 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 607 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 604 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 605 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 613 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 614 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 618 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 615 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 616 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveLeafStone::
# 624 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveLeafStone, MSGBOX_YESNO
# 625 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveLeafStone_2
# 629 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveLeafStone_1:
	return

CityClara_Church_EventScript_GiveLeafStone_2:
# 626 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_LEAF_STONE
# 627 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveLeafStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 635 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 636 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 639 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 637 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Mewra::
# 644 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 645 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 646 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 647 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 648 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 649 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 650 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
	end


CityClara_Church_EventScript_BlaineTest::
# 655 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 656 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 657 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 660 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 662 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 663 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 663 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 666 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 668 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 672 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 676 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 680 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 683 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 683 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 686 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 688 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 692 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 694 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 695 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 695 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 698 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 699 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 699 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 701 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 701 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 701 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 704 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 708 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 712 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 718 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 719 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 719 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 724 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 726 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 729 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 731 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 734 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 735 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 740 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 741 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 742 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 746 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 747 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 748 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 748 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 749 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 749 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 749 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 749 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 749 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 752 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 753 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 753 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 753 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 756 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 757 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 758 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 759 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 760 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 763 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 764 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 765 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 765 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 766 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 769 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 770 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 771 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 774 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 775 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 778 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 782 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 786 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 787 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 790 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 791 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 794 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 795 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 798 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 800 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 801 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 804 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 807 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 810 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 813 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 815 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 818 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 821 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 824 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 826 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 827 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 830 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 831 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 831 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 831 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 833 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 836 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 839 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 842 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 844 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 845 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 848 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 849 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 849 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 849 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 851 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 854 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 857 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 860 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 862 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 863 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 866 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 869 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 872 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 875 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 878 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 880 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 881 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 884 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 885 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 890 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 891 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 891 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 894 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 895 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 895 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 895 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 895 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 896 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 899 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 900 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 900 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 900 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 900 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 901 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 904 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 906 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 906 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 909 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 911 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 914 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 915 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 915 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 915 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 915 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 916 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 919 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 920 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 920 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 920 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 921 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 921 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 921 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 924 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 925 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 925 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 925 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 929 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 930 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 930 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 930 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 931 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 934 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 935 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 935 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 935 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 939 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 944 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 949 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 955 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 960 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 962 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 965 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 969 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 972 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 974 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 977 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 978 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 978 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 978 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 978 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 979 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 980 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 980 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 981 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 984 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 986 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 989 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 991 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 992 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 995 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 996 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 998 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1001 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1003 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1007 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1008 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1008 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1008 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1010 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1013 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1014 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1015 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1015 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1015 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1020 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterL:
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1025 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterR:
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_left
	step_end

# 1030 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL1:
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1034 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL2:
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1038 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR1:
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1042 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR2:
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1046 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabL:
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1048 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1048 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1049 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1052 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabL:
# 1053 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1053 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1053 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1053 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1054 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1054 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1055 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1058 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabR:
# 1059 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1059 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1059 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1059 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1061 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1064 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabR:
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1066 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1066 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1067 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1070 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitL:
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1075 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitL:
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1080 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitR:
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1085 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitR:
# 1086 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1086 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1086 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1086 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1087 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1090 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageL:
# 1091 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1091 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1092 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1092 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1093 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1096 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageL:
# 1097 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1097 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1097 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1098 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1098 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1098 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1099 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1102 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageL:
# 1103 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1104 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1104 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1104 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1105 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1108 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageR:
# 1109 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1109 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1109 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1111 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1114 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageR:
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1117 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1120 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageR:
# 1121 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1123 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1126 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_TeamRocketEngageR:
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1128 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1128 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 1131 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_TeamRocketEngageL:
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1133 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1133 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 1136 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenterL:
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1141 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenterR:
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1142 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1143 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1146 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PythiaEnter:
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1148 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1148 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1149 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

CityClara_Church_EventScript_BlaineCutscene_Text_0:
# 251 "data/maps/CityClara_Church/scripts.pory"
	.string "Noooooo!$"

CityClara_Church_Text_Sage1::
# 1152 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing!$"

CityClara_Church_Text_Blaine1::
# 1156 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1160 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped! You know not what\n"
	.string "you do!$"

CityClara_Church_Text_Blaine2::
# 1164 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I came to do and,\n"
	.string "with our great power, we can't be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of government\l"
	.string "you and your people will vaish to dust!$"

CityClara_Church_Text_Sage3::
# 1170 "data/maps/CityClara_Church/scripts.pory"
	.string "Unhand me! I am Mew's true suppliant!\n"
	.string "The foundations of this city were built\l"
	.string "on solid rock of our worship of Mew. One\l"
	.string "thousand years we cultivated art,\l"
	.string "sharing discoveries with even you, we\l"
	.string "must thank Mew for all our modern world.\l"
	.string "Your foolish pride is threatening to\l"
	.string "end this thousand years of human life\l"
	.string "which Mew exclusively made possible for\l"
	.string "us!$"

CityClara_Church_Text_Blaine3::
# 1174 "data/maps/CityClara_Church/scripts.pory"
	.string "You speak of foolish pride most\n"
	.string "narrowly. Your sad devotion to this\l"
	.string "religion has not helped you amass a\l"
	.string "massive worth nor given you the\l"
	.string "clairvoyance to see the inevitable\l"
	.string "triumph of man. Human progress has\l"
	.string "overcome your myth! No whispered\l"
	.string "prayer can stop the forward march of\l"
	.string "progress. Now, guardsmen, take her\l"
	.string "away!$"

CityClara_Church_Text_Blaine4::
# 1181 "data/maps/CityClara_Church/scripts.pory"
	.string "Nowhere to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. That man has truly suprassed\l"
	.string "the old gods.$"

CityClara_Church_Text_Blaine5::
# 1185 "data/maps/CityClara_Church/scripts.pory"
	.string "Today we defeated superstition and\n"
	.string "proudly declare this the age of man!\l"
	.string "Throwing a yoke on this defeated god\l"
	.string "shall empower us to design our fate.\l"
	.string "Under the leadership of Giovon\l"
	.string "humanity will live to touch the stars,\l"
	.string "to take the place of Jove in Illion, and\l"
	.string "shake the universe as we see fit... We're\l"
	.string "finished here, back to Sabine Nova.$"

CityClara_Church_Text_Blaine6::
# 1189 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1193 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1197 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1201 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me. Look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Gardsmen forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1205 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble and make it double$"

CityClara_Text_JesseAndJamesLost::
# 1209 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1213 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1217 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1221 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1225 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Dad1::
# 1230 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Dad2::
# 1234 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1238 "data/maps/CityClara_Church/scripts.pory"
	.string "My name is Lamina, I serve the church\n"
	.string "where for one thousand years we've\l"
	.string "worshipped Mew. Today that wicked man\l"
	.string "of pure evil has somehow found a way to\l"
	.string "enslave Mew. After the Rockets\l"
	.string "outlawed religion we feared every day\l"
	.string "would be our last but knew our faith in\l"
	.string "Mew would kept us safe. Until today\l"
	.string "they had left us alone and we truly\l"
	.string "believed Mew had appeared to prove\l"
	.string "once and for all our church was safe...$"

CityClara_Church_Text_Dad3::
# 1242 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1246 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1250 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1254 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1258 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1262 "data/maps/CityClara_Church/scripts.pory"
	.string "I think I know someone who just might\n"
	.string "help. You should {PLAYER} travel\l"
	.string "north to the desert and there seek out\l"
	.string "the university. It stands in the\l"
	.string "ancient city, Ardor. There you will meet\l"
	.string "my old friend from the war, Indiana is in\l"
	.string "hiding disguised as an archaeology\l"
	.string "professor. If there still stands a man\l"
	.string "with will to fight it will be him. Tell him\l"
	.string "the time has come.$"

CityClara_Church_Text_Sage7::
# 1266 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1270 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1274 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Dad8::
# 1278 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Sage9::
# 1282 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1286 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1290 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1294 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveLeafStone::
# 1298 "data/maps/CityClara_Church/scripts.pory"
	.string "This Leaf Stone will protect you on the\n"
	.string "raod. Never reckless but calm,\l"
	.string "cautionary, and wise you wish to be,\l"
	.string "just like the trees. Will you bring the\l"
	.string "green Leaf Stone on your quest?$"

CityClara_Church_Text_GiveNoneStone::
# 1302 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1306 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1310 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1314 "data/maps/CityClara_Church/scripts.pory"
	.string "Go to the University Ardor and speak\n"
	.string "with professor Indianus. Give him my\l"
	.string "sigil and prepare for war.$"

CityClara_Church_Text_ERROR::
# 1318 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"

CityClara_Church_Text_Leaf1::
# 1322 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? What happened here? Where's\l"
	.string "everyone? Where's MEW?$"

CityClara_Church_Text_Pythia1::
# 1327 "data/maps/CityClara_Church/scripts.pory"
	.string "They've taken Mew! The worst has come\n"
	.string "to pass!$"

CityClara_Church_Text_Leaf2::
# 1332 "data/maps/CityClara_Church/scripts.pory"
	.string "Who are you, who are they, and where is\n"
	.string "Mew?$"

CityClara_Church_Text_Pythia2::
# 1337 "data/maps/CityClara_Church/scripts.pory"
	.string "I know no name for I am The Mewra, the\n"
	.string "woman chosen as a little girl by the\l"
	.string "last Mewra, to protect the Church,\l"
	.string "maintain this sacred space, and to\l"
	.string "prepare the world for the return of\l"
	.string "blessed Mew. Since long ago this Church\l"
	.string "has been at peace but now I see the end\l"
	.string "times have begun. Mew has returned but\l"
	.string "men have betrayed her, imprisoned her\l"
	.string "within technology, and plan to twist her\l"
	.string "into something foul.$"

CityClara_Church_Text_Leaf3::
# 1342 "data/maps/CityClara_Church/scripts.pory"
	.string "That's terrible!$"

CityClara_Church_Text_Leaf4::
# 1347 "data/maps/CityClara_Church/scripts.pory"
	.string "{PLAYER}! Something must be done!$"

CityClara_Church_Text_Leaf5::
# 1352 "data/maps/CityClara_Church/scripts.pory"
	.string "Is there any way we can help, Mewra?$"

CityClara_Church_Text_Pythia3A::
# 1356 "data/maps/CityClara_Church/scripts.pory"
	.string "The truth is, I'm not sure.$"

CityClara_Church_Text_Pythia3B::
# 1361 "data/maps/CityClara_Church/scripts.pory"
	.string "This is unlike anything that has come\n"
	.string "to pass for Mew has not returned to us\l"
	.string "since ancient times. The fallen kings\l"
	.string "were crowned long after her, and even\l"
	.string "when we built upon the Lake this mighty\l"
	.string "church, generations ago, the myth of\l"
	.string "Mew was a very old tale. Her appearance\l"
	.string "can only mean one thing, that this is a\l"
	.string "time of great importance. The power of\l"
	.string "the city, Urbia, has finally polluted\l"
	.string "even here. For half an age we were ruled\l"
	.string "by the Kings, who sometimes brought\l"
	.string "even war to our lake, but even they\l"
	.string "respected this temple. The Urbians have\l"
	.string "gone too far this time with this\l"
	.string "accuresed abduction of Mew. They must\l"
	.string "be stopped or else the soul of man will\l"
	.string "be forever doomed to black darkness.\l"
	.string "Though grievously my memory recalls the\l"
	.string "bitter fruits of the revolution, when so\l"
	.string "many young men died needlessly, I\l"
	.string "recognize that we must once again\l"
	.string "commit ourselves to battle on the field\l"
	.string "in order to preserve the soul of man. We\l"
	.string "must inspire people to rise up, to\l"
	.string "overthrow the Urbian Tyrants, and\l"
	.string "restore coexistence with nature. I am\l"
	.string "Mewra, not a leader in war. A\l"
	.string "descendant, of the great kings of old,\l"
	.string "must return to reclaim his ancient\l"
	.string "throne, throw down the pretenders, and\l"
	.string "restore peace. You two, though young,\l"
	.string "are here for a reason. I see in you the\l"
	.string "knack for adventure. Therefore I'm\l"
	.string "asking, pleading, tasking you with\l"
	.string "finding the elusive Maximus, who once\l"
	.string "commanded armies in the war, and would\l"
	.string "have been King if not for defeat. He is\l"
	.string "the heir to the Urbian throne and can\l"
	.string "rally the people to our cause. After the\l"
	.string "war he went into hiding but as his ally\l"
	.string "we have kept in touch. At the\l"
	.string "University of Ardor speak with the\l"
	.string "profesor, Indianus, and tell him you're a\l"
	.string "friend of the Mewra.$"

CityClara_Church_Text_Leaf6::
# 1366 "data/maps/CityClara_Church/scripts.pory"
	.string "C'mon {PLAYER} this is what we're\n"
	.string "meant to do. Ardor University is far\l"
	.string "north over the mountains in the great\l"
	.string "desert and the road there will be both\l"
	.string "long and hard but you and I will get\l"
	.string "there in the end. Let's go! Mewra, and\l"
	.string "Mew, and the entire world, are counting\l"
	.string "on us to find Maximus, restore the old\l"
	.string "kingdom, and rescue Mew. There is no\l"
	.string "time to wait! We depart now.$"

CityClara_Church_Text_Pythia4::
# 1370 "data/maps/CityClara_Church/scripts.pory"
	.string "I can tell you are a special young man\n"
	.string "put in this situation with purpose. I\l"
	.string "cannot guarrantee you will succeed but\l"
	.string "I will offer you my assistance. The\l"
	.string "Mewra have kept these three stones\l"
	.string "with us to protect us and the church\l"
	.string "from danger. Even during the War of\l"
	.string "Sudden Flame we kept them to ourselves\l"
	.string "but at this time I see now that our hope\l"
	.string "travels with you. I will give you\l"
	.string "whichever you ask for.$"

CityClara_Church_Text_Pythia5::
# 1375 "data/maps/CityClara_Church/scripts.pory"
	.string "Maximus has spent decades in hiding\n"
	.string "after being defeated in the war. Give\l"
	.string "him this sacred sigil, he will know, the\l"
	.string "time has come for more revolution.$"

CityClara_Church_Text_Pythia6::
# 1380 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry that this must fall onto you\n"
	.string "but we do not control circumstances\l"
	.string "like destiny, or fate. Our only choice is\l"
	.string "what we choose to do with the time\l"
	.string "given to us by our fate. I pray that you\l"
	.string "can find Maximus and help the forces of\l"
	.string "good triumph in war. Good luck. Return if\l"
	.string "you need direction.$"
