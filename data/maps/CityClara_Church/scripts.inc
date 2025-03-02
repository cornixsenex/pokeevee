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
	setobjectxyperm 6, 0, 0
# 35 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 37 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 4, 0, 0
# 38 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 40 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 5, 0, 0
# 41 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 43 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 7, 0, 0
# 44 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
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
	removeobject 8
# 59 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 60 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 61 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 62 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 63 "data/maps/CityClara_Church/scripts.pory"
	removeobject 13
	end


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
# 68 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 69 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 70 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 13, 20, 15
# 71 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 73 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	end


CityClara_Church_EventScript_BlaineTrigger1::
# 78 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 80 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 81 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 83 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 85 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger2::
# 90 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 92 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 93 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 95 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 97 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger3::
# 103 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneL
# 105 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger4::
# 111 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 113 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger5::
# 118 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 120 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 121 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 123 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 125 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_EventScript_BlaineTrigger6::
# 130 "data/maps/CityClara_Church/scripts.pory"
	lockall
# 132 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 133 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 135 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_BlaineSceneR
# 137 "data/maps/CityClara_Church/scripts.pory"
	releaseall
	end


CityClara_Church_Script_BlaineSceneL::
# 143 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterL
# 144 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 146 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 147 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 148 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL1
# 149 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 151 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_TEMP_2
# 153 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 158 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_Script_BlaineSceneR::
# 164 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterR
# 165 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 167 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 168 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 169 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR1
# 170 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 172 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 177 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 182 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 183 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 184 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 185 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 186 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 187 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 188 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 189 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 190 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 191 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 192 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 193 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 194 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 197 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 198 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 199 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 202 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 203 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 204 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 206 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 207 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 208 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 209 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 212 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 213 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 214 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 217 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 218 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_0
# 220 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 221 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 222 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 223 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 224 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 225 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 226 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 231 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 232 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 233 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 234 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 235 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 236 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 237 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 238 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 239 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 240 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 241 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 242 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 245 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 246 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 247 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 248 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 249 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 250 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 251 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 252 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 253 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 254 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 255 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 256 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 257 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 258 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 259 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 262 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 263 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 264 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 265 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 267 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 268 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 270 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 271 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 276 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 281 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 282 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 283 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 285 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 286 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 287 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 288 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 289 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 290 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 291 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 292 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 295 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 296 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 298 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 22, 23
# 299 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 301 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 18, 23
# 302 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 305 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 306 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 307 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 308 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 309 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 310 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 311 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 312 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 313 "data/maps/CityClara_Church/scripts.pory"
	addobject 10
# 314 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 315 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 316 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 317 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 318 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 319 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 320 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 321 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_1
# 322 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 326 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 343 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 344 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 345 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 346 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 347 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 348 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 349 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 350 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 351 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_TeamRocketEngageR
# 352 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_TeamRocketEngageR
# 353 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_TeamRocketEngageR
# 354 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 355 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 356 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 357 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 358 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 359 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 360 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 361 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, Common_Movement_WalkRight
# 362 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 363 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 364 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, Common_Movement_WalkRight
# 365 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 366 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_WalkDown
# 367 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 368 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 369 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 370 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 371 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR2
# 372 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 373 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
CityClara_Church_EventScript_BlaineCutscene_5:
# 375 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_JesseAndJames
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 277 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 278 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 279 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 327 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 328 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 329 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 330 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 331 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 332 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 333 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 334 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 335 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageL
# 336 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageL
# 337 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageL
# 338 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 339 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL2
# 340 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 341 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
# 379 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 380 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 381 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_double TRAINER_JESSE_AND_JAMES_1, CityClara_Church_Text_JesseAndJamesIntro, CityClara_Text_JesseAndJamesLost, Route104_Text_GinaNotEnoughMons, CityClara_Church_Script_JesseAndJamesDefeated, NO_MUSIC
	return


CityClara_Church_Script_JesseAndJamesDefeated::
# 386 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 387 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 388 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 389 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 390 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 391 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 392 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 393 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_2
# 395 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_3
# 397 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_4
# 399 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_Script_JesseAndJamesDefeated_5
# 402 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 403 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_Script_JesseAndJamesDefeated_1:
# 405 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 406 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 409 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 410 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 411 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 412 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 413 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 414 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 415 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 416 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 417 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 418 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 419 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 420 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 421 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 422 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 423 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 424 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 425 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 426 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 427 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 428 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 430 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 431 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 432 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 433 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 435 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 436 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 437 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 438 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 439 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 440 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 441 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 442 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 443 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 444 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 445 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 446 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 447 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 448 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 449 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 453 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 454 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 455 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 456 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 461 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 462 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 463 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 464 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 468 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 469 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 470 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 471 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 477 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 478 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 479 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 480 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 486 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 487 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 488 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 489 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 490 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 491 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 492 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 493 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 494 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 495 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 500 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 501 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 502 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 503 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 507 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 511 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 512 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 513 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 514 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 518 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 519 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 520 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 521 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 525 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 526 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 527 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 528 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 532 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 533 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 534 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 535 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 539 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 540 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 541 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 545 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 546 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 547 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 548 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 551 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 552 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 553 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 558 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 559 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 560 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 561 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 565 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 566 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 567 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 568 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 572 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_Script_JesseAndJamesDefeated_2:
# 394 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_3:
# 396 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_4:
# 398 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_Script_JesseAndJamesDefeated_1

CityClara_Church_Script_JesseAndJamesDefeated_5:
# 400 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_Script_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 577 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 578 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 579 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 581 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 583 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 585 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 580 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 582 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 584 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 586 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 592 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 593 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 597 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 594 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 595 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 603 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 604 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 608 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 605 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 606 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 614 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 615 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 619 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 616 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 617 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 625 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 626 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 629 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 627 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 634 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 635 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 636 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 642 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 643 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 644 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 647 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 648 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 648 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 648 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 653 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 655 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 656 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 656 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 656 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 659 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 663 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 667 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 668 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 673 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 675 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 676 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 676 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 676 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 679 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 680 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 680 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 680 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 685 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 688 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 688 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 688 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 691 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 695 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 699 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 701 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 705 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 707 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 711 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 713 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 716 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 718 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 721 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 722 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 723 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 723 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 723 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 727 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 728 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 729 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 733 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 735 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 735 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 739 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 743 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 744 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 745 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 746 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 747 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 750 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 753 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 756 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 757 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 758 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 761 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 762 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 765 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 766 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 769 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 770 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 770 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 770 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 773 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 774 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 777 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 778 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 781 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 782 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 785 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 786 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 786 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 787 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 788 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 791 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 792 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 792 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 794 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 797 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 800 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 801 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 802 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 805 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 807 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 807 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 808 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 811 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 813 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 814 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 817 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 819 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 820 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 823 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 825 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 826 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 829 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 831 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 832 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 835 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 837 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 838 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 841 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 843 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 844 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 847 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 849 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 850 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 853 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 854 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 854 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 854 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 855 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 856 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 859 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 861 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 862 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 865 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 866 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 866 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 866 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 866 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 866 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 868 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 871 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 874 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 877 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 881 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 886 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 891 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 896 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 901 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 903 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 906 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 911 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 916 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 921 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 926 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 931 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 936 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 942 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 947 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 949 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 952 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 954 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 955 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 955 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 956 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 959 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 960 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 961 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 964 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 968 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 971 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 972 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 973 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 976 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 980 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 983 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 986 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 989 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 992 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 994 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 995 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 998 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 999 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1001 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1002 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1005 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterL:
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1010 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterR:
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_left
	step_end

# 1015 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL1:
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1019 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL2:
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1020 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1023 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR1:
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1027 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR2:
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1031 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabL:
# 1032 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1034 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1037 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabL:
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1040 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1043 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabR:
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1045 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1045 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1046 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1049 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabR:
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1052 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1055 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitL:
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1057 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1060 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitL:
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1062 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1062 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1065 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitR:
# 1066 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1066 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1066 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1067 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1067 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1070 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitR:
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1071 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1075 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageL:
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1076 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1078 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1081 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageL:
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
# 1083 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1084 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1087 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageL:
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1089 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1089 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1089 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1090 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1093 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageR:
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
# 1095 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1096 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1099 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageR:
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1102 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1105 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageR:
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1107 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1107 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1107 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1108 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1111 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_TeamRocketEngageR:
# 1112 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1112 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1112 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1112 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1113 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1113 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

CityClara_Church_EventScript_BlaineCutscene_Text_0:
# 218 "data/maps/CityClara_Church/scripts.pory"
	.string "Noooooo!$"

CityClara_Church_EventScript_BlaineCutscene_Text_1:
# 321 "data/maps/CityClara_Church/scripts.pory"
	.string "TEST TIME$"

CityClara_Church_Text_Sage1::
# 1117 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing!$"

CityClara_Church_Text_Blaine1::
# 1121 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1125 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped! You know not what\n"
	.string "you do!$"

CityClara_Church_Text_Blaine2::
# 1129 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I came to do and,\n"
	.string "with our great power, we can't be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of government\l"
	.string "you and your people will vaish to dust!$"

CityClara_Church_Text_Sage3::
# 1135 "data/maps/CityClara_Church/scripts.pory"
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
# 1139 "data/maps/CityClara_Church/scripts.pory"
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
# 1146 "data/maps/CityClara_Church/scripts.pory"
	.string "Nowhere to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. That man has truly suprassed\l"
	.string "the old gods.$"

CityClara_Church_Text_Blaine5::
# 1150 "data/maps/CityClara_Church/scripts.pory"
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
# 1154 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1158 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1162 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1166 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Gardsmen forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1170 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1174 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1178 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1182 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1186 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1190 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1194 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1198 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1202 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1206 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1210 "data/maps/CityClara_Church/scripts.pory"
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
# 1214 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1218 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1222 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1226 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1230 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1234 "data/maps/CityClara_Church/scripts.pory"
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
# 1238 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1242 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1246 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1250 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1254 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1258 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1262 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1266 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1270 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1274 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1278 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1282 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1286 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1290 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1294 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
