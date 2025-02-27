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
# 240 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 241 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 242 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 243 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 244 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 245 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 246 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 247 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 248 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 249 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 250 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 251 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 254 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 255 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 256 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 257 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 258 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 259 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 260 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 261 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 262 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 263 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 264 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 265 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 266 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 269 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 270 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 271 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 272 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 274 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 275 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 277 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 278 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 283 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_2
# 288 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 289 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabR
# 290 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabR
CityClara_Church_EventScript_BlaineCutscene_1:
# 292 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 293 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 294 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 295 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 296 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 297 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 298 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 299 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 300 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 303 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 8, 18, 23
# 304 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 306 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 9, 22, 23
# 307 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 309 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 10, 18, 23
# 310 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 313 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 314 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 315 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 316 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 317 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 318 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 319 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 320 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 321 "data/maps/CityClara_Church/scripts.pory"
	addobject 10
# 322 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 323 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 324 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 325 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 326 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 327 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 328 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 332 "data/maps/CityClara_Church/scripts.pory"
	goto_if_set FLAG_TEMP_2, CityClara_Church_EventScript_BlaineCutscene_6
# 345 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitR
# 346 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitR
# 347 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 348 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 349 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 350 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 351 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 352 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 353 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageR
# 354 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageR
# 355 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageR
CityClara_Church_EventScript_BlaineCutscene_5:
# 357 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 284 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 285 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrabL
# 286 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrabL
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 333 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1ExitL
# 334 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2ExitL
# 335 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 336 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 337 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 338 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 339 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 340 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 341 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngageL
# 342 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngageL
# 343 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngageL
	goto CityClara_Church_EventScript_BlaineCutscene_5


CityClara_Church_Script_JesseAndJames::
	return


CityClara_Church_EventScript_JesseAndJamesDefeated::
# 367 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 368 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 369 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 370 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 371 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 372 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 373 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 374 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
# 376 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
# 378 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
# 380 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
# 383 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 384 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
# 386 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 387 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 390 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 391 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 392 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 393 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 394 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 395 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 396 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 397 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 398 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 399 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 400 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 401 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 402 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 403 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 404 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 405 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 406 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 407 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 408 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 409 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 411 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 412 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 413 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 414 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 416 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 417 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 418 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 419 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 420 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 421 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 422 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 423 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 424 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 425 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 426 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 427 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 428 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 429 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 430 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 434 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 435 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 436 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 437 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 442 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 443 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 444 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 445 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 449 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 450 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 451 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 452 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 458 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 459 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 460 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 461 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 467 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 468 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 469 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 470 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 471 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 472 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 473 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 474 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 475 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 476 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 481 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 482 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 483 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 484 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 488 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 492 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 493 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 494 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 495 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 499 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 500 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 501 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 502 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 506 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 507 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 508 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 509 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 513 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 514 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 515 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 516 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 520 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 521 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 522 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 526 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 527 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 528 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 529 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 532 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 533 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 534 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 539 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 540 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 541 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 542 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 546 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 547 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 548 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 549 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 553 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
# 375 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
# 377 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
# 379 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
# 381 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 558 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 559 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 560 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 562 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 564 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 566 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 561 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 563 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 565 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 567 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 573 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 574 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 578 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 575 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 576 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 584 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 585 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 589 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 586 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 587 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 595 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 596 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 600 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 597 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 598 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 606 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 607 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 610 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 608 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 615 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 616 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 617 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 623 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 624 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 625 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 628 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 629 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 629 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 629 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 630 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 631 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 631 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 634 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 635 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 635 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 636 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 637 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 637 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 637 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 640 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 641 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 644 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 645 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 648 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 649 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 650 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 651 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 651 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 654 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 655 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 655 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 656 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 657 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 657 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 657 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 660 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 661 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 662 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 663 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 663 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 666 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 667 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 669 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 672 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 673 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 676 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 680 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 681 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 683 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 683 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 686 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 687 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 688 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 689 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 692 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 693 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 694 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 697 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 699 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 702 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 703 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 704 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 705 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 708 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 709 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 710 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 714 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 715 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 716 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 716 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 720 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 721 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 724 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 725 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 726 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 727 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 728 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 731 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 732 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 733 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 733 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 734 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 737 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 738 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 739 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 742 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 743 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 746 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 747 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 750 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 751 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 754 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 755 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 758 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 759 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 762 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 763 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 766 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 768 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 769 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 772 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 773 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 773 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 774 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 775 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 778 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 779 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 781 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 782 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 783 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 786 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 787 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 787 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 787 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 787 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 788 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 789 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 792 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 793 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 794 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 795 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 798 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 799 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 800 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 800 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 800 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 801 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 804 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 805 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 806 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 807 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 810 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 812 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 813 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 816 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 817 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 817 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 817 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 818 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 819 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 822 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 823 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 823 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 823 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 823 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 824 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 825 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 828 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 830 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 831 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 834 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 835 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 835 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 835 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 836 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 837 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 840 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 841 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 841 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 841 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 841 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 842 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 843 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 846 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 848 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 849 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 852 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 853 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 854 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 854 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 855 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 858 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 859 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 859 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 860 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 862 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 867 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 868 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 869 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 872 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 873 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 874 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 877 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 878 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 879 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 882 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 884 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 887 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 892 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 894 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 894 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 897 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 899 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 902 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 904 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 907 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 909 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 909 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 912 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 913 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 914 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 917 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 919 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 919 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 923 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 924 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 924 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 924 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 924 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 925 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 928 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 929 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 929 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 929 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 929 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 930 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 933 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage1:
# 934 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 934 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 935 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 935 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 936 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 939 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage1:
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 940 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 941 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 942 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 945 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage1:
# 946 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 948 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 951 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage3:
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 952 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 953 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 956 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage3:
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 957 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 958 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 959 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 959 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 960 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 963 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage4:
# 964 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 964 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 964 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 965 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 966 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 969 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage4:
# 970 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 970 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 971 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 971 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 972 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 975 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage4:
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 977 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 978 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 980 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage6:
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 982 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 983 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 983 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 984 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 987 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage6:
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 989 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 992 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 994 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 995 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 995 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 996 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 999 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1001 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1004 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 1005 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1005 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1005 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1005 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1007 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1008 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1011 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
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
# 1013 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1016 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1020 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 1021 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1023 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1026 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1027 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1028 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1032 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1033 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1034 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1038 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1039 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1040 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1040 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1040 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1042 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1045 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterL:
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1047 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1050 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerEnterR:
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1052 "data/maps/CityClara_Church/scripts.pory"
	walk_left
	step_end

# 1055 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL1:
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1059 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraL2:
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 1060 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 1063 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCameraR1:
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
CityClara_Church_Movement_PanCameraR2:
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 1071 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabL:
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1072 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1073 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1074 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1077 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabL:
# 1078 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1078 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1078 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1078 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1079 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1079 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1080 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1083 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrabR:
# 1084 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1084 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1084 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1084 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1085 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1085 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1086 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1089 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrabR:
# 1090 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1090 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1090 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1090 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1091 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1091 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1092 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1095 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitL:
# 1096 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1096 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1096 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1096 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1097 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1100 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitL:
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1101 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 1102 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1102 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1105 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1ExitR:
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1106 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1107 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1107 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1110 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2ExitR:
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1111 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1112 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1115 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageL:
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1116 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1117 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1117 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1118 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1121 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageL:
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1122 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1123 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1123 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1123 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1124 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1127 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageL:
# 1128 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1129 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1129 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1129 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1130 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 1133 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngageR:
# 1134 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1134 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1134 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1135 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1135 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1135 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1136 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1139 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngageR:
# 1140 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1140 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1141 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1141 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1142 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1145 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngageR:
# 1146 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1147 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1148 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

CityClara_Church_Text_Sage1::
# 1155 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing.$"

CityClara_Church_Text_Blaine1::
# 1159 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1163 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped, you know not what\n"
	.string "you do.$"

CityClara_Church_Text_Blaine2::
# 1167 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I have achieved,\n"
	.string "with this new power we will not be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of our party\l"
	.string "you and your people will vaish to dust$"

CityClara_Church_Text_Sage3::
# 1173 "data/maps/CityClara_Church/scripts.pory"
	.string "Unhand me I am Mew's true suppliant!\n"
	.string "The foundations of this city were built\l"
	.string "on solid rock of our worship of Mew. One\l"
	.string "thousand years we cultivated art,\l"
	.string "sharing discoveries with even you, we\l"
	.string "must thank Mew for all our modern world.\l"
	.string "Your foolish pride is threatening to\l"
	.string "end this thousand years of joy which\l"
	.string "Mew exclusively made possible for us!$"

CityClara_Church_Text_Blaine3::
# 1177 "data/maps/CityClara_Church/scripts.pory"
	.string "You speak of foolish pride most\n"
	.string "narrowly your sad devotion to this\l"
	.string "religion has not helped you amass a\l"
	.string "massive worth nor given you the\l"
	.string "clairvoyance to see your fated\l"
	.string "destruction. Social progress has\l"
	.string "overcome your myth. No simple spoken\l"
	.string "prayer will stop the launch of Rocket\l"
	.string "Party's sailing in the stars. Now\l"
	.string "faithful Rocket grunts, take her away!$"

CityClara_Church_Text_Blaine4::
# 1184 "data/maps/CityClara_Church/scripts.pory"
	.string "No where to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. The party truly has suprassed\l"
	.string "the gods.$"

CityClara_Church_Text_Blaine5::
# 1188 "data/maps/CityClara_Church/scripts.pory"
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
# 1192 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1196 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1200 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1204 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Rockets forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1208 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1212 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1216 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1220 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1224 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1228 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1232 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1236 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1240 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1244 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1248 "data/maps/CityClara_Church/scripts.pory"
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
# 1252 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1256 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1260 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1264 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1268 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1272 "data/maps/CityClara_Church/scripts.pory"
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
# 1276 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1280 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1284 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1288 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1292 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1296 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1300 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1304 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1308 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1312 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1316 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1320 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1324 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1328 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1332 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
