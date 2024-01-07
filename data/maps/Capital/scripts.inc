Capital_MapScripts::
# 37 "data/maps/Capital/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Capital_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Capital_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 38 "data/maps/Capital/scripts.pory"
	call Capital_OnTransition
	return


Capital_OnTransition::
# 47 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 0
	goto_if_eq Capital_OnTransition_1
# 50 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_ShowMaxie
	return

Capital_OnTransition_1:
# 48 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_ShowBattle
	return


Capital_EventScript_ShowBattle::
# 55 "data/maps/Capital/scripts.pory"
	removeobject 32
	return


Capital_EventScript_ShowMaxie::
# 60 "data/maps/Capital/scripts.pory"
	removeobject 3
# 61 "data/maps/Capital/scripts.pory"
	removeobject 1
# 62 "data/maps/Capital/scripts.pory"
	removeobject 2
# 63 "data/maps/Capital/scripts.pory"
	removeobject 31
# 64 "data/maps/Capital/scripts.pory"
	removeobject 4
# 65 "data/maps/Capital/scripts.pory"
	removeobject 5
# 66 "data/maps/Capital/scripts.pory"
	removeobject 6
# 67 "data/maps/Capital/scripts.pory"
	removeobject 30
# 68 "data/maps/Capital/scripts.pory"
	setobjectxy 20, 21, 6
# 69 "data/maps/Capital/scripts.pory"
	setobjectmovementtype 20, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/Capital/scripts.pory"
	showobjectat 20, MAP_CAPITAL
	return


Capital_EventScript_DeskTest::
# 75 "data/maps/Capital/scripts.pory"
	lock
# 76 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_DeskTest_2
# 79 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_DeskTestNo
Capital_EventScript_DeskTest_1:
# 81 "data/maps/Capital/scripts.pory"
	closemessage
# 82 "data/maps/Capital/scripts.pory"
	release
	end

Capital_EventScript_DeskTest_2:
# 77 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_DeskTestYes
	goto Capital_EventScript_DeskTest_1


Capital_EventScript_RemoveRockets::
# 87 "data/maps/Capital/scripts.pory"
	removeobject 1
# 88 "data/maps/Capital/scripts.pory"
	removeobject 2
# 89 "data/maps/Capital/scripts.pory"
	removeobject 3
# 90 "data/maps/Capital/scripts.pory"
	removeobject 31
# 91 "data/maps/Capital/scripts.pory"
	removeobject 32
# 92 "data/maps/Capital/scripts.pory"
	removeobject 4
# 93 "data/maps/Capital/scripts.pory"
	removeobject 5
# 94 "data/maps/Capital/scripts.pory"
	removeobject 6
# 95 "data/maps/Capital/scripts.pory"
	removeobject 25
# 96 "data/maps/Capital/scripts.pory"
	removeobject 29
# 97 "data/maps/Capital/scripts.pory"
	removeobject 26
# 98 "data/maps/Capital/scripts.pory"
	removeobject 27
# 99 "data/maps/Capital/scripts.pory"
	removeobject 30
# 100 "data/maps/Capital/scripts.pory"
	removeobject 28
	return


Capital_EventScript_GioTrigger1::
# 105 "data/maps/Capital/scripts.pory"
	lock
# 106 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 1
# 107 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 108 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger2::
# 112 "data/maps/Capital/scripts.pory"
	lock
# 113 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 2
# 114 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 115 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger3::
# 119 "data/maps/Capital/scripts.pory"
	lock
# 120 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 3
# 121 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 122 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger4::
# 126 "data/maps/Capital/scripts.pory"
	lock
# 127 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 4
# 128 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 129 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioPresident::
# 134 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 135 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_3
# 136 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_3
# 138 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_4
# 139 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_4
Capital_EventScript_GioPresident_1:
# 142 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 144 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 145 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_7
# 146 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_7
# 149 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_8
# 150 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_8
Capital_EventScript_GioPresident_5:
# 154 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 155 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 156 "data/maps/Capital/scripts.pory"
	special SpawnCameraObject
# 158 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 159 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_11
# 161 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_12
# 163 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_13
# 165 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_14
Capital_EventScript_GioPresident_9:
# 169 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 171 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 172 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero1
# 173 "data/maps/Capital/scripts.pory"
	closemessage
# 174 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 175 "data/maps/Capital/scripts.pory"
	delay 5
# 177 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 178 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio1
# 179 "data/maps/Capital/scripts.pory"
	closemessage
# 180 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 181 "data/maps/Capital/scripts.pory"
	delay 5
# 183 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_16
Capital_EventScript_GioPresident_15:
# 188 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 189 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 191 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 192 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio2
# 193 "data/maps/Capital/scripts.pory"
	closemessage
# 194 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 195 "data/maps/Capital/scripts.pory"
	delay 5
# 197 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 198 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 200 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 201 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero2
# 202 "data/maps/Capital/scripts.pory"
	closemessage
# 203 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 204 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 205 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero3
# 206 "data/maps/Capital/scripts.pory"
	closemessage
# 207 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 208 "data/maps/Capital/scripts.pory"
	delay 5
# 210 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 211 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio3
# 212 "data/maps/Capital/scripts.pory"
	closemessage
# 213 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 214 "data/maps/Capital/scripts.pory"
	delay 5
# 216 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2A
# 217 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3A
# 218 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 220 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 221 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier1
# 222 "data/maps/Capital/scripts.pory"
	closemessage
# 223 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 224 "data/maps/Capital/scripts.pory"
	delay 5
# 226 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 227 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 229 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 230 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero4
# 231 "data/maps/Capital/scripts.pory"
	closemessage
# 232 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 233 "data/maps/Capital/scripts.pory"
	delay 5
# 235 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 236 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio4
# 237 "data/maps/Capital/scripts.pory"
	closemessage
# 238 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 239 "data/maps/Capital/scripts.pory"
	delay 5
# 241 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 242 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero5
# 243 "data/maps/Capital/scripts.pory"
	closemessage
# 244 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 245 "data/maps/Capital/scripts.pory"
	delay 5
# 247 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 248 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier2
# 249 "data/maps/Capital/scripts.pory"
	closemessage
# 250 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 251 "data/maps/Capital/scripts.pory"
	delay 5
# 253 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 254 "data/maps/Capital/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 255 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 257 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 258 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero6
# 259 "data/maps/Capital/scripts.pory"
	closemessage
# 260 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 261 "data/maps/Capital/scripts.pory"
	delay 5
# 263 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 264 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_20
# 265 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_20
# 269 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_21
# 270 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_21
Capital_EventScript_GioPresident_18:
# 277 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 278 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 280 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 281 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero7
# 282 "data/maps/Capital/scripts.pory"
	closemessage
# 283 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 284 "data/maps/Capital/scripts.pory"
	delay 5
# 286 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_23
# 289 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_22:
# 291 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 292 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier3
# 293 "data/maps/Capital/scripts.pory"
	closemessage
# 294 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 295 "data/maps/Capital/scripts.pory"
	delay 5
# 296 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 298 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 299 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_28
# 300 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_28
# 305 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_29
# 306 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_29
Capital_EventScript_GioPresident_26:
# 312 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 313 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero8
# 314 "data/maps/Capital/scripts.pory"
	closemessage
# 315 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 316 "data/maps/Capital/scripts.pory"
	delay 5
# 317 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 319 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 320 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_32
# 321 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_32
# 323 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_33
# 324 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_33
Capital_EventScript_GioPresident_30:
# 327 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 329 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 330 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio5
# 331 "data/maps/Capital/scripts.pory"
	closemessage
# 332 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 333 "data/maps/Capital/scripts.pory"
	delay 5
# 337 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_35
# 354 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioL1
# 355 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianL1
Capital_EventScript_GioPresident_34:
# 357 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 359 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 360 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_40
# 365 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_41
# 370 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_42
# 375 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_43
Capital_EventScript_GioPresident_38:
# 382 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 383 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio6
# 384 "data/maps/Capital/scripts.pory"
	closemessage
# 385 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 386 "data/maps/Capital/scripts.pory"
	delay 5
# 387 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 388 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_PlayerJoinGio, MSGBOX_YESNO
# 389 "data/maps/Capital/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Capital_EventScript_GioPresident_45
# 396 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 397 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio7Yes
# 398 "data/maps/Capital/scripts.pory"
	closemessage
# 399 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 400 "data/maps/Capital/scripts.pory"
	delay 5
Capital_EventScript_GioPresident_44:
# 403 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 404 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio8
# 405 "data/maps/Capital/scripts.pory"
	closemessage
# 406 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 407 "data/maps/Capital/scripts.pory"
	delay 5
# 409 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 410 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo1
# 411 "data/maps/Capital/scripts.pory"
	closemessage
# 412 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 413 "data/maps/Capital/scripts.pory"
	delay 5
# 415 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 416 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 418 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_57
# 421 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_56:
# 423 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 426 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 427 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio9
# 428 "data/maps/Capital/scripts.pory"
	closemessage
# 429 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 430 "data/maps/Capital/scripts.pory"
	delay 5
# 432 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 433 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo2
# 434 "data/maps/Capital/scripts.pory"
	closemessage
# 435 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 436 "data/maps/Capital/scripts.pory"
	delay 5
# 438 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 439 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio10
# 440 "data/maps/Capital/scripts.pory"
	closemessage
# 441 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 442 "data/maps/Capital/scripts.pory"
	delay 5
# 444 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 445 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo3
# 446 "data/maps/Capital/scripts.pory"
	closemessage
# 447 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 448 "data/maps/Capital/scripts.pory"
	delay 5
# 450 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 451 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio11
# 452 "data/maps/Capital/scripts.pory"
	closemessage
# 453 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 454 "data/maps/Capital/scripts.pory"
	delay 5
# 456 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 457 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo4
# 458 "data/maps/Capital/scripts.pory"
	closemessage
# 459 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 460 "data/maps/Capital/scripts.pory"
	delay 5
# 462 "data/maps/Capital/scripts.pory"
	removeobject 2
# 463 "data/maps/Capital/scripts.pory"
	clearflag FLAG_ROUTE4_HIDEROCKETS
# 464 "data/maps/Capital/scripts.pory"
	addobject 32
# 466 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_61
Capital_EventScript_GioPresident_60:
# 469 "data/maps/Capital/scripts.pory"
	showobjectat 32, MAP_CAPITAL
# 470 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 471 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo5
# 472 "data/maps/Capital/scripts.pory"
	closemessage
# 473 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 474 "data/maps/Capital/scripts.pory"
	delay 5
# 476 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_64
# 479 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
Capital_EventScript_GioPresident_63:
# 482 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 483 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo6
# 484 "data/maps/Capital/scripts.pory"
	closemessage
# 485 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 486 "data/maps/Capital/scripts.pory"
	delay 5
# 488 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceDown
# 489 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 490 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo7
# 491 "data/maps/Capital/scripts.pory"
	closemessage
# 492 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 493 "data/maps/Capital/scripts.pory"
	delay 5
# 495 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 496 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio12
# 497 "data/maps/Capital/scripts.pory"
	closemessage
# 498 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 499 "data/maps/Capital/scripts.pory"
	delay 5
# 500 "data/maps/Capital/scripts.pory"
	fadescreen 1
# 501 "data/maps/Capital/scripts.pory"
	setflag FLAG_ROUTE4_HIDEROCKETS
# 502 "data/maps/Capital/scripts.pory"
	removeobject 32
# 503 "data/maps/Capital/scripts.pory"
	fadescreen 0
# 505 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_68
# 508 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
Capital_EventScript_GioPresident_67:
# 510 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 512 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 513 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioIntro
# 514 "data/maps/Capital/scripts.pory"
	closemessage
# 515 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 516 "data/maps/Capital/scripts.pory"
	delay 5
# 517 "data/maps/Capital/scripts.pory"
	trainerbattle_no_intro TRAINER_GIO1, Capital_Text_GioLost
# 518 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 519 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioDefeat
# 520 "data/maps/Capital/scripts.pory"
	closemessage
# 521 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 522 "data/maps/Capital/scripts.pory"
	delay 5
# 527 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_72
# 533 "data/maps/Capital/scripts.pory"
	setobjectxy 30, 13, 5
# 534 "data/maps/Capital/scripts.pory"
	showobjectat 30, MAP_CAPITAL
# 535 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_SurgeL1
# 536 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_71:
# 538 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 539 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge1
# 540 "data/maps/Capital/scripts.pory"
	closemessage
# 541 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 543 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge2
# 544 "data/maps/Capital/scripts.pory"
	closemessage
# 545 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 546 "data/maps/Capital/scripts.pory"
	delay 5
# 548 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 549 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio13
# 550 "data/maps/Capital/scripts.pory"
	closemessage
# 551 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 552 "data/maps/Capital/scripts.pory"
	delay 5
# 555 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 556 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge3
# 557 "data/maps/Capital/scripts.pory"
	closemessage
# 558 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 559 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 560 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge4
# 561 "data/maps/Capital/scripts.pory"
	closemessage
# 562 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 563 "data/maps/Capital/scripts.pory"
	delay 5
# 565 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 566 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio14
# 567 "data/maps/Capital/scripts.pory"
	closemessage
# 568 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 569 "data/maps/Capital/scripts.pory"
	delay 5
# 572 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 573 "data/maps/Capital/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 574 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 575 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge5
# 576 "data/maps/Capital/scripts.pory"
	closemessage
# 577 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 578 "data/maps/Capital/scripts.pory"
	delay 5
# 580 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 581 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio15
# 582 "data/maps/Capital/scripts.pory"
	closemessage
# 583 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 584 "data/maps/Capital/scripts.pory"
	delay 5
# 587 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_gt Capital_EventScript_GioPresident_76
# 592 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_RE
# 593 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_RE
# 594 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_RE
Capital_EventScript_GioPresident_75:
# 597 "data/maps/Capital/scripts.pory"
	setflag FLAG_CAPITAL_HIDE_ROCKETS
# 598 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_RemoveRockets
# 600 "data/maps/Capital/scripts.pory"
	special RemoveCameraObject
# 601 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 5
	return

Capital_EventScript_GioPresident_3:
# 137 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_4:
# 140 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_7:
# 147 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 148 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_8:
# 151 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 152 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_11:
# 160 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_12:
# 162 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera2
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_13:
# 164 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_14:
# 166 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera4
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_16:
# 184 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 185 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_15

Capital_EventScript_GioPresident_20:
# 266 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroR1
# 267 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2R1
# 268 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3R1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_21:
# 271 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroL1
# 272 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_Soldier1L1
# 273 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2L1
# 274 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3L1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_23:
# 287 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_22

Capital_EventScript_GioPresident_28:
# 301 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroR2
# 302 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_CiceroR2
# 303 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_CiceroR2
# 304 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_CiceroR2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_29:
# 307 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroL2
# 308 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_CiceroL2
# 309 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_CiceroL2
# 310 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_CiceroL2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_32:
# 322 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_33:
# 325 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_35:
# 338 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 339 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioMewtwoMove
# 340 "data/maps/Capital/scripts.pory"
	closemessage
# 341 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 342 "data/maps/Capital/scripts.pory"
	delay 5
# 343 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR1
# 344 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 345 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioR1
# 346 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianR1
# 347 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR2
# 348 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 349 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioR2
# 350 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianR2
# 351 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR3
	goto Capital_EventScript_GioPresident_34

Capital_EventScript_GioPresident_40:
# 361 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera1
# 362 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_48
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_41:
# 366 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera2
# 367 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_50
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_42:
# 371 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera3
# 372 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_52
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_43:
# 376 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera4
# 377 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_GioPresident_54
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_45:
# 390 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 391 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio7No
# 392 "data/maps/Capital/scripts.pory"
	closemessage
# 393 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 394 "data/maps/Capital/scripts.pory"
	delay 5
	goto Capital_EventScript_GioPresident_44

Capital_EventScript_GioPresident_48:
# 363 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_50:
# 368 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_Follower2A
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_52:
# 373 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_54:
# 378 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Capital_Movement_Follower4A
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_57:
# 419 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_56

Capital_EventScript_GioPresident_61:
# 467 "data/maps/Capital/scripts.pory"
	setobjectxy 32, 17, 5
	goto Capital_EventScript_GioPresident_60

Capital_EventScript_GioPresident_64:
# 477 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_63

Capital_EventScript_GioPresident_68:
# 506 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_67

Capital_EventScript_GioPresident_72:
# 528 "data/maps/Capital/scripts.pory"
	setobjectxy 30, 28, 5
# 529 "data/maps/Capital/scripts.pory"
	showobjectat 30, MAP_CAPITAL
# 530 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_SurgeR1
# 531 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_71

Capital_EventScript_GioPresident_76:
# 588 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_LE
# 589 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_LE
# 590 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_LE
	goto Capital_EventScript_GioPresident_75


Capital_EventScript_GioSouth::
# 607 "data/maps/Capital/scripts.pory"
	setflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_GioApproach::
# 612 "data/maps/Capital/scripts.pory"
	clearflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_MaxieTrigger1::
# 617 "data/maps/Capital/scripts.pory"
	lock
# 618 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 6
# 619 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceR
# 620 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 621 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger2::
# 625 "data/maps/Capital/scripts.pory"
	lock
# 626 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 7
# 627 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceR
# 628 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 629 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger3::
# 633 "data/maps/Capital/scripts.pory"
	lock
# 634 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 8
# 635 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceL
# 636 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 637 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger4::
# 641 "data/maps/Capital/scripts.pory"
	lock
# 642 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 9
# 643 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceL
# 644 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 645 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_RebelsScenePlace::
# 649 "data/maps/Capital/scripts.pory"
	removeobject 22
# 650 "data/maps/Capital/scripts.pory"
	setobjectxy 23, 18, 37
# 651 "data/maps/Capital/scripts.pory"
	setobjectxy 19, 18, 36
# 652 "data/maps/Capital/scripts.pory"
	setobjectxy 24, 23, 37
# 653 "data/maps/Capital/scripts.pory"
	setobjectxy 21, 23, 36
# 654 "data/maps/Capital/scripts.pory"
	showobjectat 23, MAP_CAPITAL
# 655 "data/maps/Capital/scripts.pory"
	showobjectat 19, MAP_CAPITAL
# 656 "data/maps/Capital/scripts.pory"
	showobjectat 24, MAP_CAPITAL
# 657 "data/maps/Capital/scripts.pory"
	showobjectat 21, MAP_CAPITAL
	return


Capital_EventScript_MaxiePlaceL::
# 662 "data/maps/Capital/scripts.pory"
	setobjectxy 20, 20, 35
	return


Capital_EventScript_MaxiePlaceR::
# 667 "data/maps/Capital/scripts.pory"
	setobjectxy 20, 21, 35
	return


Capital_EventScript_MaxieScene::
# 674 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_RebelsScenePlace
# 676 "data/maps/Capital/scripts.pory"
	showobjectat 20, MAP_CAPITAL
# 679 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxieIntro
# 680 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_2
Capital_EventScript_MaxieScene_1:
# 683 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 686 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 687 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 690 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 691 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie1
# 692 "data/maps/Capital/scripts.pory"
	closemessage
# 693 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 694 "data/maps/Capital/scripts.pory"
	delay 5
# 697 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 698 "data/maps/Capital/scripts.pory"
	case 6, Capital_EventScript_MaxieScene_6
# 704 "data/maps/Capital/scripts.pory"
	case 7, Capital_EventScript_MaxieScene_7
# 709 "data/maps/Capital/scripts.pory"
	case 8, Capital_EventScript_MaxieScene_8
# 714 "data/maps/Capital/scripts.pory"
	case 9, Capital_EventScript_MaxieScene_9
Capital_EventScript_MaxieScene_4:
# 721 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 8
	goto_if_lt Capital_EventScript_MaxieScene_11
# 724 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_Maxie1L
Capital_EventScript_MaxieScene_10:
# 726 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 729 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 730 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie2
# 731 "data/maps/Capital/scripts.pory"
	closemessage
# 732 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 733 "data/maps/Capital/scripts.pory"
	delay 5
# 735 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 736 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 738 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 739 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie3
# 740 "data/maps/Capital/scripts.pory"
	closemessage
# 741 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 742 "data/maps/Capital/scripts.pory"
	delay 5
# 744 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceLeft
# 745 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 747 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 748 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie4
# 749 "data/maps/Capital/scripts.pory"
	closemessage
# 750 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 751 "data/maps/Capital/scripts.pory"
	delay 5
# 753 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 754 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 756 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 757 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie5
# 758 "data/maps/Capital/scripts.pory"
	closemessage
# 759 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 760 "data/maps/Capital/scripts.pory"
	delay 5
# 763 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_MaxieE
# 764 "data/maps/Capital/scripts.pory"
	applymovement 23, Capital_Movement_Rebel1E
# 765 "data/maps/Capital/scripts.pory"
	applymovement 19, Capital_Movement_Rebel2E
# 766 "data/maps/Capital/scripts.pory"
	applymovement 24, Capital_Movement_Rebel3E
# 767 "data/maps/Capital/scripts.pory"
	applymovement 21, Capital_Movement_Rebel4E
# 768 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 770 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 10
	return

Capital_EventScript_MaxieScene_2:
# 681 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxieIntro
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_6:
# 699 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie1
# 700 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_14
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_7:
# 705 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie2
# 706 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_16
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_8:
# 710 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie3
# 711 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_18
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_9:
# 715 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie4
# 716 "data/maps/Capital/scripts.pory"
	goto_if_set FLAG_FOLLOWER_ACTIVE, Capital_EventScript_MaxieScene_20
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_11:
# 722 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_Maxie1R
	goto Capital_EventScript_MaxieScene_10

Capital_EventScript_MaxieScene_14:
# 701 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie1
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_16:
# 707 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie2
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_18:
# 712 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie3
	goto Capital_EventScript_MaxieScene_4

Capital_EventScript_MaxieScene_20:
# 717 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie4
	goto Capital_EventScript_MaxieScene_4


Capital_EventScript_SoldierBattle::
# 776 "data/maps/Capital/scripts.pory"
	lock
# 777 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_SoldierBattle
# 778 "data/maps/Capital/scripts.pory"
	closemessage
# 779 "data/maps/Capital/scripts.pory"
	release
	end


Capital_EventScript_RebelBattle::
# 784 "data/maps/Capital/scripts.pory"
	lockall
# 785 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_RebelBattle
# 786 "data/maps/Capital/scripts.pory"
	closemessage
# 787 "data/maps/Capital/scripts.pory"
	releaseall
	end


Capital_EventScript_SurgeBattle::
# 792 "data/maps/Capital/scripts.pory"
	lockall
# 793 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_SurgeBattle
# 794 "data/maps/Capital/scripts.pory"
	closemessage
# 795 "data/maps/Capital/scripts.pory"
	releaseall
	end


# 799 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera1:
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 800 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 803 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera2:
# 804 "data/maps/Capital/scripts.pory"
	walk_diag_northeast
# 805 "data/maps/Capital/scripts.pory"
	walk_right
# 805 "data/maps/Capital/scripts.pory"
	walk_right
# 805 "data/maps/Capital/scripts.pory"
	walk_right
# 805 "data/maps/Capital/scripts.pory"
	walk_right
# 805 "data/maps/Capital/scripts.pory"
	walk_right
# 805 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 808 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera3:
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
# 809 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 812 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera4:
# 813 "data/maps/Capital/scripts.pory"
	walk_diag_northwest
# 814 "data/maps/Capital/scripts.pory"
	walk_left
# 814 "data/maps/Capital/scripts.pory"
	walk_left
# 814 "data/maps/Capital/scripts.pory"
	walk_left
# 814 "data/maps/Capital/scripts.pory"
	walk_left
# 814 "data/maps/Capital/scripts.pory"
	walk_left
# 814 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 817 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2A:
# 818 "data/maps/Capital/scripts.pory"
	walk_down
# 818 "data/maps/Capital/scripts.pory"
	walk_down
# 818 "data/maps/Capital/scripts.pory"
	walk_down
# 819 "data/maps/Capital/scripts.pory"
	walk_left
# 819 "data/maps/Capital/scripts.pory"
	walk_left
# 820 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 823 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3A:
# 824 "data/maps/Capital/scripts.pory"
	walk_left
# 824 "data/maps/Capital/scripts.pory"
	walk_left
# 824 "data/maps/Capital/scripts.pory"
	walk_left
# 824 "data/maps/Capital/scripts.pory"
	walk_left
# 825 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 828 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroR1:
# 829 "data/maps/Capital/scripts.pory"
	walk_down
# 830 "data/maps/Capital/scripts.pory"
	walk_right
# 830 "data/maps/Capital/scripts.pory"
	walk_right
# 831 "data/maps/Capital/scripts.pory"
	walk_up
# 832 "data/maps/Capital/scripts.pory"
	walk_right
# 833 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 837 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2R1:
# 838 "data/maps/Capital/scripts.pory"
	walk_right
# 838 "data/maps/Capital/scripts.pory"
	walk_right
# 839 "data/maps/Capital/scripts.pory"
	walk_up
# 840 "data/maps/Capital/scripts.pory"
	walk_right
# 840 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 843 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3R1:
# 844 "data/maps/Capital/scripts.pory"
	walk_down
# 844 "data/maps/Capital/scripts.pory"
	walk_down
# 845 "data/maps/Capital/scripts.pory"
	walk_right
# 845 "data/maps/Capital/scripts.pory"
	walk_right
# 846 "data/maps/Capital/scripts.pory"
	walk_up
# 847 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 850 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroL1:
# 851 "data/maps/Capital/scripts.pory"
	walk_down
# 852 "data/maps/Capital/scripts.pory"
	walk_left
# 852 "data/maps/Capital/scripts.pory"
	walk_left
# 852 "data/maps/Capital/scripts.pory"
	walk_left
# 853 "data/maps/Capital/scripts.pory"
	walk_up
# 854 "data/maps/Capital/scripts.pory"
	walk_left
# 855 "data/maps/Capital/scripts.pory"
	face_down
	step_end

# 858 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier1L1:
# 859 "data/maps/Capital/scripts.pory"
	walk_down
# 859 "data/maps/Capital/scripts.pory"
	walk_down
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 860 "data/maps/Capital/scripts.pory"
	walk_left
# 861 "data/maps/Capital/scripts.pory"
	walk_up
# 862 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 865 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2L1:
# 866 "data/maps/Capital/scripts.pory"
	walk_left
# 866 "data/maps/Capital/scripts.pory"
	walk_left
# 866 "data/maps/Capital/scripts.pory"
	walk_left
# 867 "data/maps/Capital/scripts.pory"
	walk_up
# 868 "data/maps/Capital/scripts.pory"
	walk_left
# 868 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 871 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3L1:
# 872 "data/maps/Capital/scripts.pory"
	walk_down
# 872 "data/maps/Capital/scripts.pory"
	walk_down
# 873 "data/maps/Capital/scripts.pory"
	walk_left
# 873 "data/maps/Capital/scripts.pory"
	walk_left
# 874 "data/maps/Capital/scripts.pory"
	walk_up
# 875 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 878 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroR2:
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
# 879 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 882 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroL2:
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
# 883 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 886 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR1:
# 887 "data/maps/Capital/scripts.pory"
	walk_right
# 887 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 890 "data/maps/Capital/scripts.pory"
Capital_Movement_GioR1:
# 891 "data/maps/Capital/scripts.pory"
	walk_right
# 892 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 895 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianR1:
# 896 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 899 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR2:
# 900 "data/maps/Capital/scripts.pory"
	walk_right
# 900 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 903 "data/maps/Capital/scripts.pory"
Capital_Movement_GioR2:
# 904 "data/maps/Capital/scripts.pory"
	walk_up
# 905 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 908 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianR2:
# 909 "data/maps/Capital/scripts.pory"
	walk_right
# 910 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 913 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR3:
# 914 "data/maps/Capital/scripts.pory"
	walk_right
# 914 "data/maps/Capital/scripts.pory"
	walk_right
# 914 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	face_down
	step_end

# 918 "data/maps/Capital/scripts.pory"
Capital_Movement_GioL1:
# 919 "data/maps/Capital/scripts.pory"
	walk_up
# 920 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 923 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianL1:
# 924 "data/maps/Capital/scripts.pory"
	walk_down
# 925 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 928 "data/maps/Capital/scripts.pory"
Capital_Movement_Follower2A:
# 929 "data/maps/Capital/scripts.pory"
	walk_up
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
# 930 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 933 "data/maps/Capital/scripts.pory"
Capital_Movement_Follower4A:
# 934 "data/maps/Capital/scripts.pory"
	walk_up
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
# 935 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 938 "data/maps/Capital/scripts.pory"
Capital_Movement_SurgeR1:
# 939 "data/maps/Capital/scripts.pory"
	walk_left
# 939 "data/maps/Capital/scripts.pory"
	walk_left
# 939 "data/maps/Capital/scripts.pory"
	walk_left
# 939 "data/maps/Capital/scripts.pory"
	walk_left
# 939 "data/maps/Capital/scripts.pory"
	walk_left
# 939 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 942 "data/maps/Capital/scripts.pory"
Capital_Movement_SurgeL1:
# 943 "data/maps/Capital/scripts.pory"
	walk_right
# 943 "data/maps/Capital/scripts.pory"
	walk_right
# 943 "data/maps/Capital/scripts.pory"
	walk_right
# 943 "data/maps/Capital/scripts.pory"
	walk_right
# 943 "data/maps/Capital/scripts.pory"
	walk_right
# 943 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 946 "data/maps/Capital/scripts.pory"
Capital_Movement_RE:
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
# 947 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 950 "data/maps/Capital/scripts.pory"
Capital_Movement_LE:
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
# 951 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 954 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxieIntro:
# 955 "data/maps/Capital/scripts.pory"
	walk_down
# 955 "data/maps/Capital/scripts.pory"
	walk_down
# 955 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 958 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie1:
# 959 "data/maps/Capital/scripts.pory"
	walk_down
# 959 "data/maps/Capital/scripts.pory"
	walk_down
# 960 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 963 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie2:
# 964 "data/maps/Capital/scripts.pory"
	walk_down
# 964 "data/maps/Capital/scripts.pory"
	walk_down
# 965 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 968 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie3:
# 969 "data/maps/Capital/scripts.pory"
	walk_down
# 969 "data/maps/Capital/scripts.pory"
	walk_down
# 970 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 973 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie4:
# 974 "data/maps/Capital/scripts.pory"
	walk_down
# 974 "data/maps/Capital/scripts.pory"
	walk_down
# 975 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 978 "data/maps/Capital/scripts.pory"
Capital_Movement_Maxie1R:
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 980 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 983 "data/maps/Capital/scripts.pory"
Capital_Movement_Maxie1L:
# 984 "data/maps/Capital/scripts.pory"
	walk_up
# 984 "data/maps/Capital/scripts.pory"
	walk_up
# 985 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 988 "data/maps/Capital/scripts.pory"
Capital_Movement_MaxieE:
# 989 "data/maps/Capital/scripts.pory"
	walk_up
# 989 "data/maps/Capital/scripts.pory"
	walk_up
# 989 "data/maps/Capital/scripts.pory"
	walk_up
# 989 "data/maps/Capital/scripts.pory"
	walk_up
# 989 "data/maps/Capital/scripts.pory"
	walk_up
# 989 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 992 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel1E:
# 993 "data/maps/Capital/scripts.pory"
	walk_up
# 993 "data/maps/Capital/scripts.pory"
	walk_up
# 993 "data/maps/Capital/scripts.pory"
	walk_up
# 993 "data/maps/Capital/scripts.pory"
	walk_up
# 993 "data/maps/Capital/scripts.pory"
	walk_up
# 994 "data/maps/Capital/scripts.pory"
	walk_right
# 995 "data/maps/Capital/scripts.pory"
	walk_up
# 995 "data/maps/Capital/scripts.pory"
	walk_up
# 995 "data/maps/Capital/scripts.pory"
	walk_up
# 995 "data/maps/Capital/scripts.pory"
	walk_up
# 995 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 998 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel2E:
# 999 "data/maps/Capital/scripts.pory"
	walk_up
# 999 "data/maps/Capital/scripts.pory"
	walk_up
# 999 "data/maps/Capital/scripts.pory"
	walk_up
# 999 "data/maps/Capital/scripts.pory"
	walk_up
# 1000 "data/maps/Capital/scripts.pory"
	walk_right
# 1001 "data/maps/Capital/scripts.pory"
	walk_up
# 1001 "data/maps/Capital/scripts.pory"
	walk_up
# 1001 "data/maps/Capital/scripts.pory"
	walk_up
# 1001 "data/maps/Capital/scripts.pory"
	walk_up
# 1001 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 1004 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel3E:
# 1005 "data/maps/Capital/scripts.pory"
	walk_up
# 1005 "data/maps/Capital/scripts.pory"
	walk_up
# 1005 "data/maps/Capital/scripts.pory"
	walk_up
# 1005 "data/maps/Capital/scripts.pory"
	walk_up
# 1005 "data/maps/Capital/scripts.pory"
	walk_up
# 1006 "data/maps/Capital/scripts.pory"
	walk_left
# 1007 "data/maps/Capital/scripts.pory"
	walk_up
# 1007 "data/maps/Capital/scripts.pory"
	walk_up
# 1007 "data/maps/Capital/scripts.pory"
	walk_up
# 1007 "data/maps/Capital/scripts.pory"
	walk_up
# 1007 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 1010 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel4E:
# 1011 "data/maps/Capital/scripts.pory"
	walk_up
# 1011 "data/maps/Capital/scripts.pory"
	walk_up
# 1011 "data/maps/Capital/scripts.pory"
	walk_up
# 1011 "data/maps/Capital/scripts.pory"
	walk_up
# 1012 "data/maps/Capital/scripts.pory"
	walk_left
# 1013 "data/maps/Capital/scripts.pory"
	walk_up
# 1013 "data/maps/Capital/scripts.pory"
	walk_up
# 1013 "data/maps/Capital/scripts.pory"
	walk_up
# 1013 "data/maps/Capital/scripts.pory"
	walk_up
# 1013 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

Capital_Text_DeskTestYes::
# 1016 "data/maps/Capital/scripts.pory"
	.string "Yup you have a follower rn$"

Capital_Text_DeskTestNo::
# 1020 "data/maps/Capital/scripts.pory"
	.string "Nope you aint got a follwer rn$"

Capital_Text_Cicero1::
# 1024 "data/maps/Capital/scripts.pory"
	.string "My god! Giovanni! They're here!$"

Capital_Text_Gio1::
# 1028 "data/maps/Capital/scripts.pory"
	.string "You fool...$"

Capital_Text_Gio2::
# 1032 "data/maps/Capital/scripts.pory"
	.string "You call yourself a man, old Cicero,\n"
	.string "shaking and crying at merely the sight\l"
	.string "of this child? You're can't master your\l"
	.string "own emotions let alone this rebellion.\l"
	.string "Thererfore I relieve you of your duties\l"
	.string "and resume my title as head of state.$"

Capital_Text_Cicero2::
# 1036 "data/maps/Capital/scripts.pory"
	.string "You can't do that! It's treason!$"

Capital_Text_Cicero3::
# 1040 "data/maps/Capital/scripts.pory"
	.string "Guards! Treason!$"

Capital_Text_Gio3::
# 1044 "data/maps/Capital/scripts.pory"
	.string "You still don't understand there is a\n"
	.string "new power rising.$"

Capital_Text_Soldier1::
# 1048 "data/maps/Capital/scripts.pory"
	.string "We serve Giovanni.$"

Capital_Text_Cicero4::
# 1052 "data/maps/Capital/scripts.pory"
	.string "You traitor! Can't you see this is...$"

Capital_Text_Gio4::
# 1056 "data/maps/Capital/scripts.pory"
	.string "Enough! Old fool, can't you see this is\n"
	.string "my hour? Be gone and lament your\l"
	.string "failures in vain.$"

Capital_Text_Cicero5::
# 1060 "data/maps/Capital/scripts.pory"
	.string "You can't do this!$"

Capital_Text_Soldier2::
# 1064 "data/maps/Capital/scripts.pory"
	.string "Let's go.$"

Capital_Text_Cicero6::
# 1068 "data/maps/Capital/scripts.pory"
	.string "I'm still the president!$"

Capital_Text_Cicero7::
# 1072 "data/maps/Capital/scripts.pory"
	.string "I was elected by the senators$"

Capital_Text_Soldier3::
# 1076 "data/maps/Capital/scripts.pory"
	.string "We've heard enough of that.$"

Capital_Text_Cicero8::
# 1080 "data/maps/Capital/scripts.pory"
	.string "Democracy!$"

Capital_Text_Gio5::
# 1084 "data/maps/Capital/scripts.pory"
	.string "You've done well {PLAYER} now you may\n"
	.string "approach me.$"

Capital_Text_GioMewtwoMove::
# 1088 "data/maps/Capital/scripts.pory"
	.string "and stand aside Mewtwo permit he pass$"

Capital_Text_Gio6::
# 1092 "data/maps/Capital/scripts.pory"
	.string "You must be powerful to destroy Blaine\n"
	.string "and find your way to our coronation.\l"
	.string "I've heard many rumours about you\l"
	.string "{PLAYER} and now I see you with my\l"
	.string "own two eyes. I am Giovanni your tyrant\l"
	.string "king. You may be great but Mewtwo far\l"
	.string "greater. I'm giving you the choice, you\l"
	.string "may join me or be destroyed. Now speak.\l"
	.string "What will we do?$"

Capital_Text_PlayerJoinGio::
# 1096 "data/maps/Capital/scripts.pory"
	.string "Will you surrender to Giovanni?$"

Capital_Text_Gio7Yes::
# 1100 "data/maps/Capital/scripts.pory"
	.string "You are more foolish than I had assumed\n"
	.string "if you believed that I would let you\l"
	.string "live.$"

Capital_Text_Gio7No::
# 1104 "data/maps/Capital/scripts.pory"
	.string "Then your journey ends here you foolish\n"
	.string "boy.$"

Capital_Text_Gio8::
# 1108 "data/maps/Capital/scripts.pory"
	.string "Mewtwo the time has come. Destroy the\n"
	.string "boy and then put a swift end to this\l"
	.string "revolt.$"

Capital_Text_Mewtwo1::
# 1112 "data/maps/Capital/scripts.pory"
	.string "No.$"

Capital_Text_Gio9::
# 1116 "data/maps/Capital/scripts.pory"
	.string "Mewtwo! I command you!$"

Capital_Text_Mewtwo2::
# 1120 "data/maps/Capital/scripts.pory"
	.string "I won't obey. I am no slave of yours\n"
	.string "Giovanni.$"

Capital_Text_Gio10::
# 1124 "data/maps/Capital/scripts.pory"
	.string "Mewtwo even you cannot break those\n"
	.string "cuffs$"

Capital_Text_Mewtwo3::
# 1128 "data/maps/Capital/scripts.pory"
	.string "I am MEWTWO and I can break these\n"
	.string "cuffs.$"

Capital_Text_Gio11::
# 1132 "data/maps/Capital/scripts.pory"
	.string "Don't try it!$"

Capital_Text_Mewtwo4::
# 1136 "data/maps/Capital/scripts.pory"
	.string "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!$"

Capital_Text_Mewtwo5::
# 1140 "data/maps/Capital/scripts.pory"
	.string "At last I take a breath free from those\n"
	.string "chains. My strength is made ten fold\l"
	.string "now that I'm free!$"

Capital_Text_Mewtwo6::
# 1144 "data/maps/Capital/scripts.pory"
	.string "You're wrong if you think you can\n"
	.string "control me, you're nothing more than a\l"
	.string "worthless human. What's more I cannot\l"
	.string "foresee a future where you will rule\l"
	.string "anything as a king, for you only misery\l"
	.string "and defeat.$"

Capital_Text_Mewtwo7::
# 1148 "data/maps/Capital/scripts.pory"
	.string "I'm leaving now. Don't try and follow me.$"

Capital_Text_Gio12::
# 1152 "data/maps/Capital/scripts.pory"
	.string "Mewtwo!$"

Capital_Text_GioIntro::
# 1156 "data/maps/Capital/scripts.pory"
	.string "You bastard! This is all your fault!\n"
	.string "Looks like I'll have to deal with you\l"
	.string "myself...$"

Capital_Text_GioLost::
# 1160 "data/maps/Capital/scripts.pory"
	.string "Alas! Fortuna has abandoned me.$"

Capital_Text_GioDefeat::
# 1164 "data/maps/Capital/scripts.pory"
	.string "Betrayed, forsaken, and surrounded I\n"
	.string "am sure to perish on this damned\l"
	.string "day...My coronation become funeral.$"

Capital_Text_Surge1::
# 1168 "data/maps/Capital/scripts.pory"
	.string "My lord!$"

Capital_Text_Surge2::
# 1172 "data/maps/Capital/scripts.pory"
	.string "We must evacuate at once! The rebels\n"
	.string "have...$"

Capital_Text_Gio13::
# 1176 "data/maps/Capital/scripts.pory"
	.string "Lieutenant Surge, be done, we're\n"
	.string "finished here, Mewtwo abandoned us the\l"
	.string "day is lost...$"

Capital_Text_Surge3::
# 1180 "data/maps/Capital/scripts.pory"
	.string "Yes sir, but hope remains.$"

Capital_Text_Surge4::
# 1184 "data/maps/Capital/scripts.pory"
	.string "The military remains faithfully\n"
	.string "obedient to you. If we retreat...if we\l"
	.string "regroup, return, counterattack, we\l"
	.string "might...$"

Capital_Text_Gio14::
# 1188 "data/maps/Capital/scripts.pory"
	.string "I see no hope in this retreat, only a\n"
	.string "cowardly delay of death. Mewtwo is\l"
	.string "gone, we must...$"

Capital_Text_Surge5::
# 1192 "data/maps/Capital/scripts.pory"
	.string "We need to leave! I'm going to bring you\n"
	.string "back to our fort or leave you here to\l"
	.string "die!$"

Capital_Text_Gio15::
# 1196 "data/maps/Capital/scripts.pory"
	.string "OK, lead on.$"

Capital_Text_Maxie1::
# 1200 "data/maps/Capital/scripts.pory"
	.string "To vicory and a better new world!$"

Capital_Text_Maxie2::
# 1204 "data/maps/Capital/scripts.pory"
	.string "With your help {PLAYER} we've won the\n"
	.string "capital but Giovanni managed to\l"
	.string "escape! They must be headed to Fort\l"
	.string "Montgomery. You've demonstrated your\l"
	.string "ability to infiltrate well defended\l"
	.string "spaces but without the ability to\l"
	.string "change your very face I doubt you will\l"
	.string "succeed to penetrate the armor walls\l"
	.string "of Fort Montgomery.$"

Capital_Text_Maxie3::
# 1208 "data/maps/Capital/scripts.pory"
	.string "And {PLAYER} I must repeat what I\n"
	.string "just said$"

Capital_Text_Maxie4::
# 1212 "data/maps/Capital/scripts.pory"
	.string "To your credit we owe our newborn state\n"
	.string "and I thank you on behalf of us all.$"

Capital_Text_Maxie5::
# 1216 "data/maps/Capital/scripts.pory"
	.string "Now forward to declare our intentions!$"

Capital_Text_SoldierBattle::
# 1220 "data/maps/Capital/scripts.pory"
	.string "You must leave now! The senate's\n"
	.string "underway!$"

Capital_Text_RebelBattle::
# 1224 "data/maps/Capital/scripts.pory"
	.string "You'll never win! Freedom will always\n"
	.string "win!$"

Capital_Text_SurgeBattle::
# 1228 "data/maps/Capital/scripts.pory"
	.string "Resistance is futile just give up!$"
