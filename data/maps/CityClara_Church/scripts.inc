CityClara_Church_MapScripts::
# 24 "data/maps/CityClara_Church/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 25 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_gt CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CityClara_Church_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_ShowAfterCutscene
	return


CityClara_Church_Script_ShowAfterCutscene::
# 34 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 11, 0, 0
# 35 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 37 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 4, 0, 0
# 38 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 40 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 5, 0, 0
# 41 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 43 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 0, 0
# 44 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 46 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 3, 0, 0
# 47 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 1, 0, 0
# 50 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 52 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 2, 20, 15
# 53 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


CityClara_Church_OnWarp_HidePreChurchCutscene::
# 58 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 59 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 60 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 61 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
	end


CityClara_Church_Script_RemoveRockets::
# 66 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 67 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 11, 0, 0
# 68 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_INVISIBLE
# 70 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 71 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 4, 0, 0
# 72 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 74 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 75 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 5, 0, 0
# 76 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 78 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 79 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 0, 0
# 80 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_INVISIBLE
# 82 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 83 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 3, 0, 0
# 84 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 86 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 87 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 1, 0, 0
# 88 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 90 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 91 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 2, 0, 0
# 92 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
	return


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
# 98 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 99 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 100 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 13, 20, 15
# 101 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 102 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 103 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	end


CityClara_Church_EventScript_BlaineTrigger1::
# 108 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 110 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 111 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 113 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 115 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger2::
# 120 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 122 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 123 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 125 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 127 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger3::
# 133 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 135 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger4::
# 141 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 143 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger5::
# 148 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 150 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 151 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 153 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 155 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger6::
# 160 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 162 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 163 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 165 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 167 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_Script_BlaineSceneL::
# 173 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterL
# 174 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 176 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 177 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 178 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL1
# 179 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 181 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_TEMP_2
# 183 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 188 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_Script_BlaineSceneR::
# 194 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterR
# 195 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 197 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 198 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 199 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR1
# 200 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 202 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 207 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 212 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 213 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 214 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 215 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 216 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 217 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 218 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 219 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 220 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 221 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 222 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 223 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 224 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 227 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 228 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 229 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 232 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 233 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 234 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 236 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 237 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 238 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 239 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 242 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 243 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 244 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 247 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 248 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_0
# 250 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 251 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 252 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 253 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 254 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 255 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 256 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 261 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 262 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 263 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 264 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 265 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 266 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 267 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 268 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 269 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 270 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 271 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 272 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 275 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 276 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 277 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 278 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 279 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 280 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 281 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 282 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 283 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 284 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 285 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 286 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 287 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 288 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 289 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 292 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 293 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 294 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 295 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 297 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 298 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 300 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 301 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 306 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 311 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 312 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 313 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 315 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 316 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 317 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 318 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 319 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 320 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 321 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 322 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 325 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 6, 18, 23
# 326 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 328 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 7, 22, 23
# 329 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 331 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 332 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 335 "data/maps/CityClara_Church/scripts.pory"
	addobject 6
# 336 "data/maps/CityClara_Church/scripts.pory"
	addobject 7
# 337 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 6, MAP_CITY_CLARA_CHURCH
# 338 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 7, MAP_CITY_CLARA_CHURCH
# 339 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_Rocket1Enter
# 340 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_Rocket2Enter
# 341 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 342 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 343 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 344 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 345 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_MeowthEnter
# 346 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 347 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 348 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 349 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 350 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 354 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 385 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 386 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 387 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 388 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 389 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_RemoveRockets
# 390 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_TeamRocketEngageR
# 391 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_TeamRocketEngageR
# 392 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_TeamRocketEngageR
# 393 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 394 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 395 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 396 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 397 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 398 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 399 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 400 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkRight
# 401 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 402 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkRight
# 403 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 404 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 405 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 406 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 407 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 408 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 409 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 410 "data/maps/CityClara_Church/scripts.pory"
	turnobject 6, DIR_WEST
# 411 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR2
# 412 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 413 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
CityClara_Church_EventScript_BlaineCutscene_5:
# 415 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_JesseAndJames
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 307 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 308 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 309 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 355 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 356 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 357 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 358 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 359 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_RemoveRockets
# 360 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_TeamRocketEngageL
# 361 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_TeamRocketEngageL
# 362 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_TeamRocketEngageL
# 363 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 364 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkUp
# 365 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft
# 366 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 367 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 368 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 369 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkUp
# 370 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 371 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 372 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkLeft
# 373 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft
# 374 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 375 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_WalkDown
# 376 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 377 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 378 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 379 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 380 "data/maps/CityClara_Church/scripts.pory"
	turnobject 6, DIR_EAST
# 381 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL2
# 382 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 383 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
# 419 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_Script_JesseAndJames_2
# 422 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
CityClara_Church_Script_JesseAndJames_1:
# 424 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 425 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_Script_JesseAndJamesDefeated, NO_MUSIC
	return

CityClara_Church_Script_JesseAndJames_2:
# 420 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
	goto CityClara_Church_Script_JesseAndJames_1


CityClara_Church_Script_JesseAndJamesDefeated::
# 430 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 431 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 432 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 433 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 434 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 435 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 436 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 437 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_2
# 439 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_3
# 441 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_4
# 443 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_5
# 446 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 447 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_Script_JesseAndJamesDefeated_1:
# 449 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 450 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 453 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 454 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 455 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 456 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 457 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 458 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 459 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 460 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 461 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 462 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 463 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 464 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 465 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 466 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 467 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 468 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 469 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 470 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 471 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 472 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 474 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 475 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 476 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 477 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 479 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 480 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 481 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 482 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 483 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 484 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 485 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 486 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 487 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 488 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 489 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 490 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 491 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 492 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 493 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 497 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 498 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 499 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 500 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 505 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 506 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 507 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 508 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 512 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 513 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 514 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 515 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 521 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 522 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 523 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 524 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 530 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 531 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 532 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 533 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 534 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 535 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 536 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 537 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 538 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 539 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 544 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 545 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 546 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 547 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 551 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 555 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 556 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 557 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 558 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 562 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 563 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 564 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 565 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 569 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 570 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 571 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 572 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 576 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 577 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 578 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 579 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 583 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 584 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 585 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 589 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 590 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 591 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 592 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 595 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 596 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 597 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 602 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 603 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 604 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 605 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 609 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 610 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 611 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 612 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 616 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_Script_JesseAndJamesDefeated_2:
# 438 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_3:
# 440 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_4:
# 442 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_5:
# 444 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_Script_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 621 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 622 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 623 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 625 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 627 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 629 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 624 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 626 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 628 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 630 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 636 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 637 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 641 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 638 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 639 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 647 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 648 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 652 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 649 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 650 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 658 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 659 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 663 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 660 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 661 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 669 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 670 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 673 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 671 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 678 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 679 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 680 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 686 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 687 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 688 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 691 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 694 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 694 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 697 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 699 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 703 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 707 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 711 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 717 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 719 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 723 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 729 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 731 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 732 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 732 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 732 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 735 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 739 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 743 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 744 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 744 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 744 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 745 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 749 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 750 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 750 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 755 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 756 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 756 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 756 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 757 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 760 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 761 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 761 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 761 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 762 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 765 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 766 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 771 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 772 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 773 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 777 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 778 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 783 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 784 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 784 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 784 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 787 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 789 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 790 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 791 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 794 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 795 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 797 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 800 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 801 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 802 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 805 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 809 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 810 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 813 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 817 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 818 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 821 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 822 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 825 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 826 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 829 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 831 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 832 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 835 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 838 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 841 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 844 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 846 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 849 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 852 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 855 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 857 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 858 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 861 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 862 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 862 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 862 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 864 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 867 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 870 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 873 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 875 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 876 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 879 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 880 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 880 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 880 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 881 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 881 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 881 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 882 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 885 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 886 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 888 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 891 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 894 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 897 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 899 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 899 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 899 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 900 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 903 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 905 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 906 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 909 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 910 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 911 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 915 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 916 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 918 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 921 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 925 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 926 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 930 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 931 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 931 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 931 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 931 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 935 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 936 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 940 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 942 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 945 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 947 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 950 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 955 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 960 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 962 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 965 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 970 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 971 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 971 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 971 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 975 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 980 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 986 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 991 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 993 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 996 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 998 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 999 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 999 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1003 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1005 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1008 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1010 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1015 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1017 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1020 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1024 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 1025 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1027 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1030 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1032 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1036 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1037 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1037 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1037 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1042 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1045 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1049 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterL:
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1054 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterR:
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_left
	step_end

# 1059 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL1:
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1063 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL2:
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1067 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR1:
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1071 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR2:
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1075 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabL:
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1078 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1081 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabL:
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1083 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1083 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1084 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1087 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabR:
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1089 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1089 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1090 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1093 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabR:
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1095 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1095 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1096 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1099 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitL:
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1104 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitL:
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1109 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitR:
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1114 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitR:
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1119 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageL:
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1121 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1121 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1122 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1125 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageL:
# 1126 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1126 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1126 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1127 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1128 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1131 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageL:
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1133 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1133 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1133 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1134 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1137 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageR:
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1139 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1139 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1139 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1140 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1143 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageR:
# 1144 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1144 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1145 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1145 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1146 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1149 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageR:
# 1150 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1151 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1151 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1151 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1152 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1155 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_TeamRocketEngageR:
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1157 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1157 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 1160 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_TeamRocketEngageL:
# 1161 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1161 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1161 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1161 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1162 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1162 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

CityClara_Church_EventScript_BlaineCutscene_Text_0:
# 248 "data/maps/CityClara_Church/scripts.pory"
	.string "Noooooo!$"

CityClara_Church_Text_Sage1::
# 1167 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing!$"

CityClara_Church_Text_Blaine1::
# 1171 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1175 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped! You know not what\n"
	.string "you do!$"

CityClara_Church_Text_Blaine2::
# 1179 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I came to do and,\n"
	.string "with our great power, we can't be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of government\l"
	.string "you and your people will vaish to dust!$"

CityClara_Church_Text_Sage3::
# 1185 "data/maps/CityClara_Church/scripts.pory"
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
# 1189 "data/maps/CityClara_Church/scripts.pory"
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
# 1196 "data/maps/CityClara_Church/scripts.pory"
	.string "Nowhere to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. That man has truly suprassed\l"
	.string "the old gods.$"

CityClara_Church_Text_Blaine5::
# 1200 "data/maps/CityClara_Church/scripts.pory"
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
# 1204 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1208 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1212 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1216 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Gardsmen forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1220 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1224 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1228 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1232 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1236 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1240 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1244 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1248 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1252 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1256 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1260 "data/maps/CityClara_Church/scripts.pory"
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
# 1264 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1268 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1272 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1276 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1280 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1284 "data/maps/CityClara_Church/scripts.pory"
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
# 1288 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1292 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1296 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1300 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1304 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1308 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1312 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1316 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1320 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1324 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1328 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1332 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1336 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1340 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1344 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
