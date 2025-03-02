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
	load_field_pic 7, 190, 98
# 198 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 199 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 200 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 201 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 202 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 203 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 204 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 205 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 206 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 209 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 210 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 211 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 214 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 215 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 216 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 218 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 219 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 220 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 221 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 224 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 225 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 226 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 229 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 230 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_EventScript_BlaineCutscene_Text_0
# 232 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 233 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 234 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 235 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 236 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 237 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 238 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 243 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 244 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 245 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 246 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 247 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 248 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 249 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 250 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 251 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 252 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 253 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 254 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 257 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 258 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 259 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 260 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 261 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 262 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, EnterPokeballMovement
# 263 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 264 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_FORCE_ENTER_MASTERBALL_GFX
# 265 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 266 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 267 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 268 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 269 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 270 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 271 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 274 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 275 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 276 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 277 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 279 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 280 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 282 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 283 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 288 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 293 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 294 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 295 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 297 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 298 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 299 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 300 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 301 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 302 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 303 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 304 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 307 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 308 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 310 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 22, 23
# 311 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 313 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 18, 23
# 314 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 317 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 318 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 319 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 320 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 321 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 322 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 323 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 324 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 325 "data/maps/CityClara_Church/scripts.pory"
	addobject 10
# 326 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 327 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 328 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 329 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 330 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 331 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 332 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 336 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 349 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 350 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 351 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 352 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 353 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 354 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 355 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 356 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 357 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageR
# 358 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageR
# 359 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageR
CityClara_Church_EventScript_BlaineCutscene_5:
# 361 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 289 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 290 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 291 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 337 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 338 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 339 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 340 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 341 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 342 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 343 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 344 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 345 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageL
# 346 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageL
# 347 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageL
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
	return


CityClara_Church_EventScript_JesseAndJamesDefeated::
# 371 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 372 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 373 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 374 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 375 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 376 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 377 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 378 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
# 380 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
# 382 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
# 384 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
# 387 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 388 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
# 390 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 391 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 394 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 395 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 396 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 397 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 398 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 399 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 400 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 401 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 402 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 403 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 404 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 405 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 406 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 407 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 408 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 409 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 410 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 411 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 412 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 413 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 415 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 416 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 417 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 418 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 420 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 421 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 422 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 423 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 424 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 425 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 426 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 427 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 428 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 429 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 430 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 431 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 432 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 433 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 434 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 438 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 439 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 440 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 441 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 446 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 447 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 448 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 449 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 453 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 454 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 455 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 456 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 462 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 463 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 464 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 465 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 471 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 472 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 473 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 474 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 475 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 476 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 477 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 478 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 479 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 480 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 485 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 486 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 487 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 488 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 492 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 496 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 497 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 498 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 499 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 503 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 504 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 505 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 506 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 510 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 511 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 512 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 513 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 517 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 518 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 519 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 520 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 524 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 525 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 526 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 530 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 531 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 532 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 533 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 536 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 537 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 538 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 543 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 544 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 545 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 546 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 550 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 551 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 552 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 553 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 557 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
# 379 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
# 381 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
# 383 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
# 385 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 562 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 563 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 564 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 566 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 568 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 570 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 565 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 567 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 569 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 571 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 577 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 578 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 582 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 579 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 580 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 588 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 589 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 593 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 590 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 591 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 599 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 600 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 604 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 601 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 602 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 610 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 611 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 614 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 612 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 619 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 620 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 621 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 627 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 628 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 629 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 632 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 633 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 633 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 633 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 634 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 635 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 635 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 638 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 639 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 639 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 640 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 644 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 648 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 652 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 653 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 653 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 653 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 654 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 655 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 655 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 658 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 659 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 659 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 664 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 665 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 665 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 665 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 670 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 671 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 671 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 672 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 676 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
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
CityClara_Church_Movement_PanCamera5B:
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 684 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 685 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 685 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 685 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 690 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 691 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 691 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 696 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 697 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 697 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 697 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 698 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 701 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 703 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 706 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 707 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 708 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 712 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 713 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 714 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 718 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 719 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 720 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 724 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 728 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 729 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 730 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 731 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 732 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 735 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 736 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 737 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 738 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 741 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 742 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 743 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 746 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 747 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 750 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 754 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 755 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 755 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 755 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 758 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 759 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 762 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 763 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 766 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 767 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 770 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 771 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 771 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 772 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 773 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 776 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 777 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 777 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 778 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 779 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 782 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 783 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 784 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 785 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 786 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 787 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 790 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 791 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 791 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 791 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 791 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 792 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 792 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 793 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 796 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 798 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 799 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 802 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 803 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 803 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 803 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 804 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 804 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 804 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 805 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 808 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 810 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 810 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 811 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 814 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 815 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 816 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 817 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 820 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 821 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 821 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 821 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 823 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 826 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 827 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 828 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 828 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 829 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 832 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 833 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 834 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 835 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 838 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 839 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 839 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 839 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 841 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 844 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 845 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 846 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 846 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 847 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 850 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 851 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 852 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 853 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 856 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 857 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 859 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 862 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 866 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 867 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 871 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 872 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 876 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 881 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
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
	step_end

# 886 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 887 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 888 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 891 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 896 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
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
	step_end

# 901 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 906 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 911 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
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
	step_end

# 916 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 921 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 927 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 929 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 932 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 934 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 937 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage1:
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 939 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 939 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 940 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 943 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage1:
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 944 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 945 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 946 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 949 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage1:
# 950 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 951 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 952 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 955 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage3:
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 956 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 957 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 960 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage3:
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 962 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 963 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 963 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 964 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 967 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage4:
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 968 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 970 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 973 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage4:
# 974 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 974 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 975 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 975 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 976 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 979 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage4:
# 980 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 982 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 984 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage6:
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 985 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 988 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 991 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage6:
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 992 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	face_right
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

CityClara_Church_EventScript_BlaineCutscene_Text_0:
# 230 "data/maps/CityClara_Church/scripts.pory"
	.string "Noooooo!$"

CityClara_Church_Text_Sage1::
# 1159 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing!$"

CityClara_Church_Text_Blaine1::
# 1163 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1167 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped! You know not what\n"
	.string "you do!$"

CityClara_Church_Text_Blaine2::
# 1171 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I came to do and,\n"
	.string "with our great power, we can't be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of government\l"
	.string "you and your people will vaish to dust!$"

CityClara_Church_Text_Sage3::
# 1177 "data/maps/CityClara_Church/scripts.pory"
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
# 1181 "data/maps/CityClara_Church/scripts.pory"
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
# 1188 "data/maps/CityClara_Church/scripts.pory"
	.string "Nowhere to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. That man has truly suprassed\l"
	.string "the old gods.$"

CityClara_Church_Text_Blaine5::
# 1192 "data/maps/CityClara_Church/scripts.pory"
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
# 1196 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1200 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1204 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1208 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Gardsmen forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1212 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1216 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1220 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1224 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1228 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1232 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1236 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1240 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1244 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1248 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1252 "data/maps/CityClara_Church/scripts.pory"
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
# 1256 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1260 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1264 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1268 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1272 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1276 "data/maps/CityClara_Church/scripts.pory"
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
# 1280 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1284 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1288 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1292 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1296 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1300 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1304 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1308 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1312 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1316 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1320 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1324 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1328 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1332 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1336 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
