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
# 155 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 156 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraL2
# 157 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 158 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 160 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_JesseAndJames
# 164 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_Script_BlaineSceneR::
# 170 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerEnterR
# 171 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 173 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 174 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 175 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR1
# 176 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 178 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 180 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 181 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCameraR2
# 182 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 183 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 185 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_Script_JesseAndJames
# 189 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 194 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 195 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 196 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 197 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 198 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 199 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 200 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 201 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 202 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 203 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 204 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 205 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 206 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 207 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 208 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 209 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 212 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 213 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 214 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 217 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 218 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 219 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 220 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 222 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 223 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 224 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 225 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 228 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 229 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 230 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 233 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 234 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_0
# 236 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 237 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 238 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 239 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 240 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 241 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 242 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 247 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 248 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 249 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 250 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 251 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 252 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 253 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 254 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 255 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 256 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 257 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 258 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 261 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 262 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 263 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 264 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 265 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 266 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 267 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 268 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 269 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 270 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 271 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 272 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 273 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 274 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 275 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 278 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 279 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 280 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 281 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 283 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 284 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 286 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 287 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 292 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 297 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 298 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 299 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 301 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 302 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 303 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 304 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 305 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 306 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 307 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 308 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 309 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 312 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 313 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 315 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 22, 23
# 316 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 318 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 18, 23
# 319 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 322 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 323 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 324 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 325 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 326 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 327 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 328 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 329 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 330 "data/maps/CityClara_Church/scripts.pory"
	addobject 10
# 331 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 332 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 333 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 334 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 335 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 336 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 337 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 341 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 354 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 355 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 356 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 357 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 358 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 359 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 360 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 361 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 362 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageR
# 363 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageR
# 364 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageR
CityClara_Church_EventScript_BlaineCutscene_5:
# 366 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 293 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 294 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 295 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 342 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 343 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 344 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 345 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 346 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 347 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 348 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 349 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 350 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageL
# 351 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageL
# 352 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageL
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
	return


CityClara_Church_EventScript_JesseAndJamesDefeated::
# 376 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 377 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 378 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 379 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 380 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 381 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 382 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 383 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
# 385 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
# 387 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
# 389 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
# 392 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 393 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
# 395 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 396 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 399 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 400 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 401 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 402 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 403 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 404 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 405 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 406 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 407 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 408 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 409 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 410 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 411 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 412 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 413 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 414 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 415 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 416 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 417 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 418 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 420 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 421 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 422 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 423 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 425 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 426 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 427 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 428 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 429 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 430 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 431 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 432 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 433 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 434 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 435 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 436 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 437 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 438 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 439 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 443 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 444 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 445 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 446 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 451 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 452 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 453 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 454 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 458 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 459 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 460 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 461 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 467 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 468 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 469 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 470 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 476 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 477 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 478 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 479 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 480 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 481 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 482 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 483 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 484 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 485 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 490 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 491 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 492 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 493 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 497 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 501 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 502 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 503 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 504 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 508 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 509 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 510 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 511 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 515 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 516 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 517 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 518 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 522 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 523 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 524 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 525 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 529 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 530 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 531 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 535 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 536 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 537 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 538 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 541 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 542 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 543 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 548 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 549 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 550 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 551 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 555 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 556 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 557 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 558 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 562 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
# 384 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
# 386 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
# 388 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
# 390 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 567 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 568 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 569 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 571 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 573 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 575 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 570 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 572 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 574 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 576 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 582 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 583 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 587 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 584 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 585 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 593 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 594 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 598 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 595 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 596 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 604 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 605 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 609 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 606 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 607 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 615 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 616 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 619 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 617 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 624 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 625 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 626 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 632 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 633 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 634 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 637 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 638 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 638 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 638 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 639 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 640 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 640 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 643 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 644 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 644 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 646 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 646 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 646 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 649 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 653 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 657 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 659 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 663 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 665 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 669 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 671 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 672 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 675 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 676 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 676 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 681 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 685 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 689 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 691 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 695 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 697 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 701 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 703 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 706 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 707 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 707 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 707 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 708 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 711 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 717 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 719 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 723 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 724 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 726 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 729 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 730 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 733 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 735 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 736 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 737 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 740 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 741 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 742 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 742 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 743 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 746 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 747 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 748 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 751 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 752 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 755 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 756 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 759 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 760 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 760 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 760 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 763 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 764 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 767 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 768 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 771 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 772 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 775 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 776 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 776 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 777 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 778 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 781 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 782 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 782 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 784 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 787 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 789 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 790 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 791 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 792 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 795 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 798 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 801 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 803 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 804 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 807 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 810 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 813 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 814 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 816 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 819 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 820 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 821 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 822 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 825 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 826 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 826 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 826 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 828 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 831 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 832 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 834 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 837 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 838 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 839 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 840 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 843 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 844 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 844 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 844 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 846 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 849 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 850 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 852 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 855 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 856 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 857 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 858 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 861 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 862 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 864 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 867 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 871 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 876 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 881 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 886 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 891 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 893 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 896 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 901 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 906 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 911 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 916 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 921 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 926 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 932 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 934 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 937 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 939 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 942 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage1:
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 945 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 948 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage1:
# 949 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 949 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 949 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 954 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage1:
# 955 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 957 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 960 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage3:
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 962 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 965 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage3:
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 966 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 967 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 969 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 972 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage4:
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 973 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 974 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 974 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 974 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 975 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 978 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage4:
# 979 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 979 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 980 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 980 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 981 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 984 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage4:
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 987 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 989 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage6:
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 990 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 991 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 996 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage6:
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 998 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1001 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1002 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1003 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1005 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1008 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1010 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1013 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 1014 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1014 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1014 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1014 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1015 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1016 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1017 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1020 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1022 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1025 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1026 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1029 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 1030 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1031 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1032 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1035 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1036 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1036 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1037 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1038 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1041 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1042 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1042 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1042 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1043 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1044 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1047 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1048 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1049 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1049 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1049 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1051 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1054 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterL:
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
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1059 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterR:
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1061 "data/maps/CityClara_Church/scripts.pory"
	walk_left
	step_end

# 1064 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL1:
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1065 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1068 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL2:
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1072 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR1:
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1076 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR2:
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1077 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1080 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabL:
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1081 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1082 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1083 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1086 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabL:
# 1087 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1087 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1087 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1087 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1088 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1089 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1092 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabR:
# 1093 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1093 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1093 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1093 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1094 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1095 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1098 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabR:
# 1099 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1099 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1099 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1099 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1100 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1101 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1104 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitL:
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1105 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1109 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitL:
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1110 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1114 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitR:
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1115 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1119 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitR:
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1120 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1121 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1124 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageL:
# 1125 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1125 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1126 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1126 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1127 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1130 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageL:
# 1131 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1131 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1131 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1132 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1133 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1136 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageL:
# 1137 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1138 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1139 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1142 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageR:
# 1143 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1143 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1143 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1144 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1144 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1144 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1145 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1148 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageR:
# 1149 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1149 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1150 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1150 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1151 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1154 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageR:
# 1155 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1156 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1157 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

CityClara_Church_EventScript_BlaineCutscene_Text_0:
# 234 "data/maps/CityClara_Church/scripts.pory"
	.string "Noooooo!$"

CityClara_Church_Text_Sage1::
# 1164 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing.$"

CityClara_Church_Text_Blaine1::
# 1168 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1172 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped, you know not what\n"
	.string "you do.$"

CityClara_Church_Text_Blaine2::
# 1176 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I came to do and,\n"
	.string "with our great power, we can't be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of government\l"
	.string "you and your people will vaish to dust$"

CityClara_Church_Text_Sage3::
# 1182 "data/maps/CityClara_Church/scripts.pory"
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
# 1186 "data/maps/CityClara_Church/scripts.pory"
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
# 1193 "data/maps/CityClara_Church/scripts.pory"
	.string "No where to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. That man has truly suprassed\l"
	.string "the old gods.$"

CityClara_Church_Text_Blaine5::
# 1197 "data/maps/CityClara_Church/scripts.pory"
	.string "Today we defeated superstition and\n"
	.string "proudly declare this the age of man!\l"
	.string "Throwing a yoke on this defeated god\l"
	.string "shall empower us to design our fate.\l"
	.string "Under the leadership of us Rockets\l"
	.string "humanity will live to touch the stars,\l"
	.string "to take the place of Jove in Illion, and\l"
	.string "shake the universe as we see fit...\l"
	.string "Enough of this, we leave now for Gato.$"

CityClara_Church_Text_Blaine6::
# 1201 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1205 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1209 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1213 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Rockets forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1217 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1221 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1225 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1229 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1233 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1237 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1241 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1245 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1249 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1253 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1257 "data/maps/CityClara_Church/scripts.pory"
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
# 1261 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1265 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1269 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1273 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1277 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1281 "data/maps/CityClara_Church/scripts.pory"
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
# 1285 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1289 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1293 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1297 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1301 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1305 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1309 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1313 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1317 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1321 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1325 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1329 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1333 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1337 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1341 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
