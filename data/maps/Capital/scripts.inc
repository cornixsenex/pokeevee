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
	msgbox Capital_Text_DeskTestNo
# 77 "data/maps/Capital/scripts.pory"
	closemessage
# 78 "data/maps/Capital/scripts.pory"
	release
	end


Capital_EventScript_RemoveRockets::
# 83 "data/maps/Capital/scripts.pory"
	removeobject 1
# 84 "data/maps/Capital/scripts.pory"
	removeobject 2
# 85 "data/maps/Capital/scripts.pory"
	removeobject 3
# 86 "data/maps/Capital/scripts.pory"
	removeobject 31
# 87 "data/maps/Capital/scripts.pory"
	removeobject 32
# 88 "data/maps/Capital/scripts.pory"
	removeobject 4
# 89 "data/maps/Capital/scripts.pory"
	removeobject 5
# 90 "data/maps/Capital/scripts.pory"
	removeobject 6
# 91 "data/maps/Capital/scripts.pory"
	removeobject 25
# 92 "data/maps/Capital/scripts.pory"
	removeobject 29
# 93 "data/maps/Capital/scripts.pory"
	removeobject 26
# 94 "data/maps/Capital/scripts.pory"
	removeobject 27
# 95 "data/maps/Capital/scripts.pory"
	removeobject 30
# 96 "data/maps/Capital/scripts.pory"
	removeobject 28
	return


Capital_EventScript_GioTrigger1::
# 101 "data/maps/Capital/scripts.pory"
	lock
# 102 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 1
# 103 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 104 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger2::
# 108 "data/maps/Capital/scripts.pory"
	lock
# 109 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 2
# 110 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 111 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger3::
# 115 "data/maps/Capital/scripts.pory"
	lock
# 116 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 3
# 117 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 118 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioTrigger4::
# 122 "data/maps/Capital/scripts.pory"
	lock
# 123 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 4
# 124 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_GioPresident
# 125 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_GioPresident::
# 130 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 131 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_3
# 132 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_3
# 134 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_4
# 135 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_4
Capital_EventScript_GioPresident_1:
# 138 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 140 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 141 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_7
# 142 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_7
# 145 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_8
# 146 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_8
Capital_EventScript_GioPresident_5:
# 150 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 151 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 152 "data/maps/Capital/scripts.pory"
	special SpawnCameraObject
# 154 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 155 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_11
# 157 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_12
# 159 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_13
# 161 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_14
Capital_EventScript_GioPresident_9:
# 165 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 167 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 168 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero1
# 169 "data/maps/Capital/scripts.pory"
	closemessage
# 170 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 171 "data/maps/Capital/scripts.pory"
	delay 5
# 173 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 174 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio1
# 175 "data/maps/Capital/scripts.pory"
	closemessage
# 176 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 177 "data/maps/Capital/scripts.pory"
	delay 5
# 179 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_16
Capital_EventScript_GioPresident_15:
# 184 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 185 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 187 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 188 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio2
# 189 "data/maps/Capital/scripts.pory"
	closemessage
# 190 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 191 "data/maps/Capital/scripts.pory"
	delay 5
# 193 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 194 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 196 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 197 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero2
# 198 "data/maps/Capital/scripts.pory"
	closemessage
# 199 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 200 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 201 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero3
# 202 "data/maps/Capital/scripts.pory"
	closemessage
# 203 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 204 "data/maps/Capital/scripts.pory"
	delay 5
# 206 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 207 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio3
# 208 "data/maps/Capital/scripts.pory"
	closemessage
# 209 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 210 "data/maps/Capital/scripts.pory"
	delay 5
# 212 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2A
# 213 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3A
# 214 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 216 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 217 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier1
# 218 "data/maps/Capital/scripts.pory"
	closemessage
# 219 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 220 "data/maps/Capital/scripts.pory"
	delay 5
# 222 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 223 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 225 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 226 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero4
# 227 "data/maps/Capital/scripts.pory"
	closemessage
# 228 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 229 "data/maps/Capital/scripts.pory"
	delay 5
# 231 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 232 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio4
# 233 "data/maps/Capital/scripts.pory"
	closemessage
# 234 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 235 "data/maps/Capital/scripts.pory"
	delay 5
# 237 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 238 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero5
# 239 "data/maps/Capital/scripts.pory"
	closemessage
# 240 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 241 "data/maps/Capital/scripts.pory"
	delay 5
# 243 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 244 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier2
# 245 "data/maps/Capital/scripts.pory"
	closemessage
# 246 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 247 "data/maps/Capital/scripts.pory"
	delay 5
# 249 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 250 "data/maps/Capital/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 251 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 253 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 254 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero6
# 255 "data/maps/Capital/scripts.pory"
	closemessage
# 256 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 257 "data/maps/Capital/scripts.pory"
	delay 5
# 259 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 260 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_20
# 261 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_20
# 265 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_21
# 266 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_21
Capital_EventScript_GioPresident_18:
# 273 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 274 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 276 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 277 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero7
# 278 "data/maps/Capital/scripts.pory"
	closemessage
# 279 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 280 "data/maps/Capital/scripts.pory"
	delay 5
# 282 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_23
# 285 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_22:
# 287 "data/maps/Capital/scripts.pory"
	load_field_pic 13, 190, 98
# 288 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Soldier3
# 289 "data/maps/Capital/scripts.pory"
	closemessage
# 290 "data/maps/Capital/scripts.pory"
	destroy_field_pic 13
# 291 "data/maps/Capital/scripts.pory"
	delay 5
# 292 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 294 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 295 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_28
# 296 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_28
# 301 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_29
# 302 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_29
Capital_EventScript_GioPresident_26:
# 308 "data/maps/Capital/scripts.pory"
	load_field_pic 12, 190, 98
# 309 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Cicero8
# 310 "data/maps/Capital/scripts.pory"
	closemessage
# 311 "data/maps/Capital/scripts.pory"
	destroy_field_pic 12
# 312 "data/maps/Capital/scripts.pory"
	delay 5
# 313 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 315 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 316 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_32
# 317 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_32
# 319 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_33
# 320 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_33
Capital_EventScript_GioPresident_30:
# 323 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 325 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 326 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio5
# 327 "data/maps/Capital/scripts.pory"
	closemessage
# 328 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 329 "data/maps/Capital/scripts.pory"
	delay 5
# 333 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_35
# 350 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioL1
# 351 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianL1
Capital_EventScript_GioPresident_34:
# 353 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 355 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 356 "data/maps/Capital/scripts.pory"
	case 1, Capital_EventScript_GioPresident_40
# 358 "data/maps/Capital/scripts.pory"
	case 2, Capital_EventScript_GioPresident_41
# 360 "data/maps/Capital/scripts.pory"
	case 3, Capital_EventScript_GioPresident_42
# 362 "data/maps/Capital/scripts.pory"
	case 4, Capital_EventScript_GioPresident_43
Capital_EventScript_GioPresident_38:
# 366 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 367 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio6
# 368 "data/maps/Capital/scripts.pory"
	closemessage
# 369 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 370 "data/maps/Capital/scripts.pory"
	delay 5
# 371 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 372 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_PlayerJoinGio, MSGBOX_YESNO
# 373 "data/maps/Capital/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Capital_EventScript_GioPresident_45
# 380 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 381 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio7Yes
# 382 "data/maps/Capital/scripts.pory"
	closemessage
# 383 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 384 "data/maps/Capital/scripts.pory"
	delay 5
Capital_EventScript_GioPresident_44:
# 387 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 388 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio8
# 389 "data/maps/Capital/scripts.pory"
	closemessage
# 390 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 391 "data/maps/Capital/scripts.pory"
	delay 5
# 393 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 394 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo1
# 395 "data/maps/Capital/scripts.pory"
	closemessage
# 396 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 397 "data/maps/Capital/scripts.pory"
	delay 5
# 399 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 400 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 402 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_49
# 405 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_48:
# 407 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 410 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 411 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio9
# 412 "data/maps/Capital/scripts.pory"
	closemessage
# 413 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 414 "data/maps/Capital/scripts.pory"
	delay 5
# 416 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 417 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo2
# 418 "data/maps/Capital/scripts.pory"
	closemessage
# 419 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 420 "data/maps/Capital/scripts.pory"
	delay 5
# 422 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 423 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio10
# 424 "data/maps/Capital/scripts.pory"
	closemessage
# 425 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 426 "data/maps/Capital/scripts.pory"
	delay 5
# 428 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 429 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo3
# 430 "data/maps/Capital/scripts.pory"
	closemessage
# 431 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 432 "data/maps/Capital/scripts.pory"
	delay 5
# 434 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 435 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio11
# 436 "data/maps/Capital/scripts.pory"
	closemessage
# 437 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 438 "data/maps/Capital/scripts.pory"
	delay 5
# 440 "data/maps/Capital/scripts.pory"
	load_field_pic 11, 190, 98
# 441 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo4
# 442 "data/maps/Capital/scripts.pory"
	closemessage
# 443 "data/maps/Capital/scripts.pory"
	destroy_field_pic 11
# 444 "data/maps/Capital/scripts.pory"
	delay 5
# 446 "data/maps/Capital/scripts.pory"
	removeobject 2
# 447 "data/maps/Capital/scripts.pory"
	clearflag FLAG_ROUTE4_HIDEROCKETS
# 448 "data/maps/Capital/scripts.pory"
	addobject 32
# 450 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 2
	goto_if_gt Capital_EventScript_GioPresident_53
Capital_EventScript_GioPresident_52:
# 453 "data/maps/Capital/scripts.pory"
	showobjectat 32, MAP_CAPITAL
# 454 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 455 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo5
# 456 "data/maps/Capital/scripts.pory"
	closemessage
# 457 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 458 "data/maps/Capital/scripts.pory"
	delay 5
# 460 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_56
# 463 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceRight
Capital_EventScript_GioPresident_55:
# 466 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 467 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo6
# 468 "data/maps/Capital/scripts.pory"
	closemessage
# 469 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 470 "data/maps/Capital/scripts.pory"
	delay 5
# 472 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceDown
# 473 "data/maps/Capital/scripts.pory"
	load_field_pic 15, 190, 98
# 474 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Mewtwo7
# 475 "data/maps/Capital/scripts.pory"
	closemessage
# 476 "data/maps/Capital/scripts.pory"
	destroy_field_pic 15
# 477 "data/maps/Capital/scripts.pory"
	delay 5
# 479 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 480 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio12
# 481 "data/maps/Capital/scripts.pory"
	closemessage
# 482 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 483 "data/maps/Capital/scripts.pory"
	delay 5
# 484 "data/maps/Capital/scripts.pory"
	fadescreen 1
# 485 "data/maps/Capital/scripts.pory"
	setflag FLAG_ROUTE4_HIDEROCKETS
# 486 "data/maps/Capital/scripts.pory"
	removeobject 32
# 487 "data/maps/Capital/scripts.pory"
	fadescreen 0
# 489 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_60
# 492 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
Capital_EventScript_GioPresident_59:
# 494 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 496 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 497 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioIntro
# 498 "data/maps/Capital/scripts.pory"
	closemessage
# 499 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 500 "data/maps/Capital/scripts.pory"
	delay 5
# 501 "data/maps/Capital/scripts.pory"
	trainerbattle_no_intro TRAINER_GIO1, Capital_Text_GioLost
# 502 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 503 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioDefeat
# 504 "data/maps/Capital/scripts.pory"
	closemessage
# 505 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 506 "data/maps/Capital/scripts.pory"
	delay 5
# 511 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_lt Capital_EventScript_GioPresident_64
# 517 "data/maps/Capital/scripts.pory"
	setobjectxy 30, 13, 5
# 518 "data/maps/Capital/scripts.pory"
	showobjectat 30, MAP_CAPITAL
# 519 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_SurgeL1
# 520 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
Capital_EventScript_GioPresident_63:
# 522 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 523 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge1
# 524 "data/maps/Capital/scripts.pory"
	closemessage
# 525 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 527 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge2
# 528 "data/maps/Capital/scripts.pory"
	closemessage
# 529 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 530 "data/maps/Capital/scripts.pory"
	delay 5
# 532 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 533 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio13
# 534 "data/maps/Capital/scripts.pory"
	closemessage
# 535 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 536 "data/maps/Capital/scripts.pory"
	delay 5
# 539 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 540 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge3
# 541 "data/maps/Capital/scripts.pory"
	closemessage
# 542 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 543 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 544 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge4
# 545 "data/maps/Capital/scripts.pory"
	closemessage
# 546 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 547 "data/maps/Capital/scripts.pory"
	delay 5
# 549 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 550 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio14
# 551 "data/maps/Capital/scripts.pory"
	closemessage
# 552 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 553 "data/maps/Capital/scripts.pory"
	delay 5
# 556 "data/maps/Capital/scripts.pory"
	load_field_pic 14, 190, 98
# 557 "data/maps/Capital/scripts.pory"
	applymovement 30, Common_Movement_ExclamationMark
# 558 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 559 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Surge5
# 560 "data/maps/Capital/scripts.pory"
	closemessage
# 561 "data/maps/Capital/scripts.pory"
	destroy_field_pic 14
# 562 "data/maps/Capital/scripts.pory"
	delay 5
# 564 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 565 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio15
# 566 "data/maps/Capital/scripts.pory"
	closemessage
# 567 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 568 "data/maps/Capital/scripts.pory"
	delay 5
# 571 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 3
	goto_if_gt Capital_EventScript_GioPresident_68
# 576 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_RE
# 577 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_RE
# 578 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_RE
Capital_EventScript_GioPresident_67:
# 581 "data/maps/Capital/scripts.pory"
	setflag FLAG_CAPITAL_HIDE_ROCKETS
# 582 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_RemoveRockets
# 584 "data/maps/Capital/scripts.pory"
	special RemoveCameraObject
# 585 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 5
	return

Capital_EventScript_GioPresident_3:
# 133 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_4:
# 136 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_1

Capital_EventScript_GioPresident_7:
# 143 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 144 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_8:
# 147 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 148 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_5

Capital_EventScript_GioPresident_11:
# 156 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_12:
# 158 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera2
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_13:
# 160 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_14:
# 162 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Capital_Movement_PanCamera4
	goto Capital_EventScript_GioPresident_9

Capital_EventScript_GioPresident_16:
# 180 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 181 "data/maps/Capital/scripts.pory"
	waitmovement 0
	goto Capital_EventScript_GioPresident_15

Capital_EventScript_GioPresident_20:
# 262 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroR1
# 263 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2R1
# 264 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3R1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_21:
# 267 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroL1
# 268 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_Soldier1L1
# 269 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_Soldier2L1
# 270 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_Soldier3L1
	goto Capital_EventScript_GioPresident_18

Capital_EventScript_GioPresident_23:
# 283 "data/maps/Capital/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_22

Capital_EventScript_GioPresident_28:
# 297 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroR2
# 298 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_CiceroR2
# 299 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_CiceroR2
# 300 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_CiceroR2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_29:
# 303 "data/maps/Capital/scripts.pory"
	applymovement 3, Capital_Movement_CiceroL2
# 304 "data/maps/Capital/scripts.pory"
	applymovement 5, Capital_Movement_CiceroL2
# 305 "data/maps/Capital/scripts.pory"
	applymovement 6, Capital_Movement_CiceroL2
# 306 "data/maps/Capital/scripts.pory"
	applymovement 4, Capital_Movement_CiceroL2
	goto Capital_EventScript_GioPresident_26

Capital_EventScript_GioPresident_32:
# 318 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_33:
# 321 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_30

Capital_EventScript_GioPresident_35:
# 334 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 335 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_GioMewtwoMove
# 336 "data/maps/Capital/scripts.pory"
	closemessage
# 337 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 338 "data/maps/Capital/scripts.pory"
	delay 5
# 339 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR1
# 340 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 341 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioR1
# 342 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianR1
# 343 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR2
# 344 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 345 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_GioR2
# 346 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_PersianR2
# 347 "data/maps/Capital/scripts.pory"
	applymovement 2, Capital_Movement_MewtwoR3
	goto Capital_EventScript_GioPresident_34

Capital_EventScript_GioPresident_40:
# 357 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera1
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_41:
# 359 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera2
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_42:
# 361 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera3
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_43:
# 363 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PanCamera4
	goto Capital_EventScript_GioPresident_38

Capital_EventScript_GioPresident_45:
# 374 "data/maps/Capital/scripts.pory"
	load_field_pic 10, 190, 98
# 375 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Gio7No
# 376 "data/maps/Capital/scripts.pory"
	closemessage
# 377 "data/maps/Capital/scripts.pory"
	destroy_field_pic 10
# 378 "data/maps/Capital/scripts.pory"
	delay 5
	goto Capital_EventScript_GioPresident_44

Capital_EventScript_GioPresident_49:
# 403 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_48

Capital_EventScript_GioPresident_53:
# 451 "data/maps/Capital/scripts.pory"
	setobjectxy 32, 17, 5
	goto Capital_EventScript_GioPresident_52

Capital_EventScript_GioPresident_56:
# 461 "data/maps/Capital/scripts.pory"
	applymovement 32, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_55

Capital_EventScript_GioPresident_60:
# 490 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
	goto Capital_EventScript_GioPresident_59

Capital_EventScript_GioPresident_64:
# 512 "data/maps/Capital/scripts.pory"
	setobjectxy 30, 28, 5
# 513 "data/maps/Capital/scripts.pory"
	showobjectat 30, MAP_CAPITAL
# 514 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_SurgeR1
# 515 "data/maps/Capital/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
	goto Capital_EventScript_GioPresident_63

Capital_EventScript_GioPresident_68:
# 572 "data/maps/Capital/scripts.pory"
	applymovement 1, Capital_Movement_LE
# 573 "data/maps/Capital/scripts.pory"
	applymovement 31, Capital_Movement_LE
# 574 "data/maps/Capital/scripts.pory"
	applymovement 30, Capital_Movement_LE
	goto Capital_EventScript_GioPresident_67


Capital_EventScript_GioSouth::
# 591 "data/maps/Capital/scripts.pory"
	setflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_GioApproach::
# 596 "data/maps/Capital/scripts.pory"
	clearflag FLAG_FOLLOWER_ALT_APPROACH
	end


Capital_EventScript_MaxieTrigger1::
# 601 "data/maps/Capital/scripts.pory"
	lock
# 602 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 6
# 603 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceR
# 604 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 605 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger2::
# 609 "data/maps/Capital/scripts.pory"
	lock
# 610 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 7
# 611 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceR
# 612 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 613 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger3::
# 617 "data/maps/Capital/scripts.pory"
	lock
# 618 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 8
# 619 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceL
# 620 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 621 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_MaxieTrigger4::
# 625 "data/maps/Capital/scripts.pory"
	lock
# 626 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 9
# 627 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxiePlaceL
# 628 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_MaxieScene
# 629 "data/maps/Capital/scripts.pory"
	release
	return


Capital_EventScript_RebelsScenePlace::
# 633 "data/maps/Capital/scripts.pory"
	removeobject 22
# 634 "data/maps/Capital/scripts.pory"
	setobjectxy 23, 18, 37
# 635 "data/maps/Capital/scripts.pory"
	setobjectxy 19, 18, 36
# 636 "data/maps/Capital/scripts.pory"
	setobjectxy 24, 23, 37
# 637 "data/maps/Capital/scripts.pory"
	setobjectxy 21, 23, 36
# 638 "data/maps/Capital/scripts.pory"
	showobjectat 23, MAP_CAPITAL
# 639 "data/maps/Capital/scripts.pory"
	showobjectat 19, MAP_CAPITAL
# 640 "data/maps/Capital/scripts.pory"
	showobjectat 24, MAP_CAPITAL
# 641 "data/maps/Capital/scripts.pory"
	showobjectat 21, MAP_CAPITAL
	return


Capital_EventScript_MaxiePlaceL::
# 646 "data/maps/Capital/scripts.pory"
	setobjectxy 20, 20, 35
	return


Capital_EventScript_MaxiePlaceR::
# 651 "data/maps/Capital/scripts.pory"
	setobjectxy 20, 21, 35
	return


Capital_EventScript_MaxieScene::
# 658 "data/maps/Capital/scripts.pory"
	call Capital_EventScript_RebelsScenePlace
# 660 "data/maps/Capital/scripts.pory"
	showobjectat 20, MAP_CAPITAL
# 663 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxieIntro
# 664 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 667 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 668 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 671 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 672 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie1
# 673 "data/maps/Capital/scripts.pory"
	closemessage
# 674 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 675 "data/maps/Capital/scripts.pory"
	delay 5
# 678 "data/maps/Capital/scripts.pory"
	switch VAR_CAPITAL_STATE
# 679 "data/maps/Capital/scripts.pory"
	case 6, Capital_EventScript_MaxieScene_3
# 681 "data/maps/Capital/scripts.pory"
	case 7, Capital_EventScript_MaxieScene_4
# 683 "data/maps/Capital/scripts.pory"
	case 8, Capital_EventScript_MaxieScene_5
# 685 "data/maps/Capital/scripts.pory"
	case 9, Capital_EventScript_MaxieScene_6
Capital_EventScript_MaxieScene_1:
# 689 "data/maps/Capital/scripts.pory"
	compare VAR_CAPITAL_STATE, 8
	goto_if_lt Capital_EventScript_MaxieScene_8
# 692 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_Maxie1L
Capital_EventScript_MaxieScene_7:
# 694 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 697 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 698 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie2
# 699 "data/maps/Capital/scripts.pory"
	closemessage
# 700 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 701 "data/maps/Capital/scripts.pory"
	delay 5
# 703 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 704 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 706 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 707 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie3
# 708 "data/maps/Capital/scripts.pory"
	closemessage
# 709 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 710 "data/maps/Capital/scripts.pory"
	delay 5
# 712 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceLeft
# 713 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 715 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 716 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie4
# 717 "data/maps/Capital/scripts.pory"
	closemessage
# 718 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 719 "data/maps/Capital/scripts.pory"
	delay 5
# 721 "data/maps/Capital/scripts.pory"
	applymovement 20, Common_Movement_FaceUp
# 722 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 724 "data/maps/Capital/scripts.pory"
	load_field_pic 9, 190, 98
# 725 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_Maxie5
# 726 "data/maps/Capital/scripts.pory"
	closemessage
# 727 "data/maps/Capital/scripts.pory"
	destroy_field_pic 9
# 728 "data/maps/Capital/scripts.pory"
	delay 5
# 731 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_MaxieE
# 732 "data/maps/Capital/scripts.pory"
	applymovement 23, Capital_Movement_Rebel1E
# 733 "data/maps/Capital/scripts.pory"
	applymovement 19, Capital_Movement_Rebel2E
# 734 "data/maps/Capital/scripts.pory"
	applymovement 24, Capital_Movement_Rebel3E
# 735 "data/maps/Capital/scripts.pory"
	applymovement 21, Capital_Movement_Rebel4E
# 736 "data/maps/Capital/scripts.pory"
	waitmovement 0
# 738 "data/maps/Capital/scripts.pory"
	setvar VAR_CAPITAL_STATE, 10
	return

Capital_EventScript_MaxieScene_3:
# 680 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie1
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_4:
# 682 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie2
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_5:
# 684 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie3
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_6:
# 686 "data/maps/Capital/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Capital_Movement_PlayerMaxie4
	goto Capital_EventScript_MaxieScene_1

Capital_EventScript_MaxieScene_8:
# 690 "data/maps/Capital/scripts.pory"
	applymovement 20, Capital_Movement_Maxie1R
	goto Capital_EventScript_MaxieScene_7


Capital_EventScript_SoldierBattle::
# 744 "data/maps/Capital/scripts.pory"
	lock
# 745 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_SoldierBattle
# 746 "data/maps/Capital/scripts.pory"
	closemessage
# 747 "data/maps/Capital/scripts.pory"
	release
	end


Capital_EventScript_RebelBattle::
# 752 "data/maps/Capital/scripts.pory"
	lockall
# 753 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_RebelBattle
# 754 "data/maps/Capital/scripts.pory"
	closemessage
# 755 "data/maps/Capital/scripts.pory"
	releaseall
	end


Capital_EventScript_SurgeBattle::
# 760 "data/maps/Capital/scripts.pory"
	lockall
# 761 "data/maps/Capital/scripts.pory"
	msgbox Capital_Text_SurgeBattle
# 762 "data/maps/Capital/scripts.pory"
	closemessage
# 763 "data/maps/Capital/scripts.pory"
	releaseall
	end


# 767 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera1:
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
# 768 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 771 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera2:
# 772 "data/maps/Capital/scripts.pory"
	walk_diag_northeast
# 773 "data/maps/Capital/scripts.pory"
	walk_right
# 773 "data/maps/Capital/scripts.pory"
	walk_right
# 773 "data/maps/Capital/scripts.pory"
	walk_right
# 773 "data/maps/Capital/scripts.pory"
	walk_right
# 773 "data/maps/Capital/scripts.pory"
	walk_right
# 773 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 776 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera3:
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
# 777 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 780 "data/maps/Capital/scripts.pory"
Capital_Movement_PanCamera4:
# 781 "data/maps/Capital/scripts.pory"
	walk_diag_northwest
# 782 "data/maps/Capital/scripts.pory"
	walk_left
# 782 "data/maps/Capital/scripts.pory"
	walk_left
# 782 "data/maps/Capital/scripts.pory"
	walk_left
# 782 "data/maps/Capital/scripts.pory"
	walk_left
# 782 "data/maps/Capital/scripts.pory"
	walk_left
# 782 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 785 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2A:
# 786 "data/maps/Capital/scripts.pory"
	walk_down
# 786 "data/maps/Capital/scripts.pory"
	walk_down
# 786 "data/maps/Capital/scripts.pory"
	walk_down
# 787 "data/maps/Capital/scripts.pory"
	walk_left
# 787 "data/maps/Capital/scripts.pory"
	walk_left
# 788 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 791 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3A:
# 792 "data/maps/Capital/scripts.pory"
	walk_left
# 792 "data/maps/Capital/scripts.pory"
	walk_left
# 792 "data/maps/Capital/scripts.pory"
	walk_left
# 792 "data/maps/Capital/scripts.pory"
	walk_left
# 793 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 796 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroR1:
# 797 "data/maps/Capital/scripts.pory"
	walk_down
# 798 "data/maps/Capital/scripts.pory"
	walk_right
# 798 "data/maps/Capital/scripts.pory"
	walk_right
# 799 "data/maps/Capital/scripts.pory"
	walk_up
# 800 "data/maps/Capital/scripts.pory"
	walk_right
# 801 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 805 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2R1:
# 806 "data/maps/Capital/scripts.pory"
	walk_right
# 806 "data/maps/Capital/scripts.pory"
	walk_right
# 807 "data/maps/Capital/scripts.pory"
	walk_up
# 808 "data/maps/Capital/scripts.pory"
	walk_right
# 808 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 811 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3R1:
# 812 "data/maps/Capital/scripts.pory"
	walk_down
# 812 "data/maps/Capital/scripts.pory"
	walk_down
# 813 "data/maps/Capital/scripts.pory"
	walk_right
# 813 "data/maps/Capital/scripts.pory"
	walk_right
# 814 "data/maps/Capital/scripts.pory"
	walk_up
# 815 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 818 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroL1:
# 819 "data/maps/Capital/scripts.pory"
	walk_down
# 820 "data/maps/Capital/scripts.pory"
	walk_left
# 820 "data/maps/Capital/scripts.pory"
	walk_left
# 820 "data/maps/Capital/scripts.pory"
	walk_left
# 821 "data/maps/Capital/scripts.pory"
	walk_up
# 822 "data/maps/Capital/scripts.pory"
	walk_left
# 823 "data/maps/Capital/scripts.pory"
	face_down
	step_end

# 826 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier1L1:
# 827 "data/maps/Capital/scripts.pory"
	walk_down
# 827 "data/maps/Capital/scripts.pory"
	walk_down
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 828 "data/maps/Capital/scripts.pory"
	walk_left
# 829 "data/maps/Capital/scripts.pory"
	walk_up
# 830 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 833 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier2L1:
# 834 "data/maps/Capital/scripts.pory"
	walk_left
# 834 "data/maps/Capital/scripts.pory"
	walk_left
# 834 "data/maps/Capital/scripts.pory"
	walk_left
# 835 "data/maps/Capital/scripts.pory"
	walk_up
# 836 "data/maps/Capital/scripts.pory"
	walk_left
# 836 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 839 "data/maps/Capital/scripts.pory"
Capital_Movement_Soldier3L1:
# 840 "data/maps/Capital/scripts.pory"
	walk_down
# 840 "data/maps/Capital/scripts.pory"
	walk_down
# 841 "data/maps/Capital/scripts.pory"
	walk_left
# 841 "data/maps/Capital/scripts.pory"
	walk_left
# 842 "data/maps/Capital/scripts.pory"
	walk_up
# 843 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 846 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroR2:
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
# 847 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 850 "data/maps/Capital/scripts.pory"
Capital_Movement_CiceroL2:
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
# 851 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 854 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR1:
# 855 "data/maps/Capital/scripts.pory"
	walk_right
# 855 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 858 "data/maps/Capital/scripts.pory"
Capital_Movement_GioR1:
# 859 "data/maps/Capital/scripts.pory"
	walk_right
# 860 "data/maps/Capital/scripts.pory"
	face_up
	step_end

# 863 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianR1:
# 864 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 867 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR2:
# 868 "data/maps/Capital/scripts.pory"
	walk_right
# 868 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 871 "data/maps/Capital/scripts.pory"
Capital_Movement_GioR2:
# 872 "data/maps/Capital/scripts.pory"
	walk_up
# 873 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 876 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianR2:
# 877 "data/maps/Capital/scripts.pory"
	walk_right
# 878 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 881 "data/maps/Capital/scripts.pory"
Capital_Movement_MewtwoR3:
# 882 "data/maps/Capital/scripts.pory"
	walk_right
# 882 "data/maps/Capital/scripts.pory"
	walk_right
# 882 "data/maps/Capital/scripts.pory"
	walk_right
# 883 "data/maps/Capital/scripts.pory"
	face_down
	step_end

# 886 "data/maps/Capital/scripts.pory"
Capital_Movement_GioL1:
# 887 "data/maps/Capital/scripts.pory"
	walk_up
# 888 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 891 "data/maps/Capital/scripts.pory"
Capital_Movement_PersianL1:
# 892 "data/maps/Capital/scripts.pory"
	walk_down
# 893 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 896 "data/maps/Capital/scripts.pory"
Capital_Movement_Follower2A:
# 897 "data/maps/Capital/scripts.pory"
	walk_up
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
# 898 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 901 "data/maps/Capital/scripts.pory"
Capital_Movement_Follower4A:
# 902 "data/maps/Capital/scripts.pory"
	walk_up
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
# 903 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 906 "data/maps/Capital/scripts.pory"
Capital_Movement_SurgeR1:
# 907 "data/maps/Capital/scripts.pory"
	walk_left
# 907 "data/maps/Capital/scripts.pory"
	walk_left
# 907 "data/maps/Capital/scripts.pory"
	walk_left
# 907 "data/maps/Capital/scripts.pory"
	walk_left
# 907 "data/maps/Capital/scripts.pory"
	walk_left
# 907 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 910 "data/maps/Capital/scripts.pory"
Capital_Movement_SurgeL1:
# 911 "data/maps/Capital/scripts.pory"
	walk_right
# 911 "data/maps/Capital/scripts.pory"
	walk_right
# 911 "data/maps/Capital/scripts.pory"
	walk_right
# 911 "data/maps/Capital/scripts.pory"
	walk_right
# 911 "data/maps/Capital/scripts.pory"
	walk_right
# 911 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 914 "data/maps/Capital/scripts.pory"
Capital_Movement_RE:
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
# 915 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 918 "data/maps/Capital/scripts.pory"
Capital_Movement_LE:
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
# 919 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 922 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxieIntro:
# 923 "data/maps/Capital/scripts.pory"
	walk_down
# 923 "data/maps/Capital/scripts.pory"
	walk_down
# 923 "data/maps/Capital/scripts.pory"
	walk_down
	step_end

# 926 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie1:
# 927 "data/maps/Capital/scripts.pory"
	walk_down
# 927 "data/maps/Capital/scripts.pory"
	walk_down
# 928 "data/maps/Capital/scripts.pory"
	walk_right
	step_end

# 931 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie2:
# 932 "data/maps/Capital/scripts.pory"
	walk_down
# 932 "data/maps/Capital/scripts.pory"
	walk_down
# 933 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 936 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie3:
# 937 "data/maps/Capital/scripts.pory"
	walk_down
# 937 "data/maps/Capital/scripts.pory"
	walk_down
# 938 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 941 "data/maps/Capital/scripts.pory"
Capital_Movement_PlayerMaxie4:
# 942 "data/maps/Capital/scripts.pory"
	walk_down
# 942 "data/maps/Capital/scripts.pory"
	walk_down
# 943 "data/maps/Capital/scripts.pory"
	walk_left
	step_end

# 946 "data/maps/Capital/scripts.pory"
Capital_Movement_Maxie1R:
# 947 "data/maps/Capital/scripts.pory"
	walk_up
# 947 "data/maps/Capital/scripts.pory"
	walk_up
# 948 "data/maps/Capital/scripts.pory"
	face_left
	step_end

# 951 "data/maps/Capital/scripts.pory"
Capital_Movement_Maxie1L:
# 952 "data/maps/Capital/scripts.pory"
	walk_up
# 952 "data/maps/Capital/scripts.pory"
	walk_up
# 953 "data/maps/Capital/scripts.pory"
	face_right
	step_end

# 956 "data/maps/Capital/scripts.pory"
Capital_Movement_MaxieE:
# 957 "data/maps/Capital/scripts.pory"
	walk_up
# 957 "data/maps/Capital/scripts.pory"
	walk_up
# 957 "data/maps/Capital/scripts.pory"
	walk_up
# 957 "data/maps/Capital/scripts.pory"
	walk_up
# 957 "data/maps/Capital/scripts.pory"
	walk_up
# 957 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 960 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel1E:
# 961 "data/maps/Capital/scripts.pory"
	walk_up
# 961 "data/maps/Capital/scripts.pory"
	walk_up
# 961 "data/maps/Capital/scripts.pory"
	walk_up
# 961 "data/maps/Capital/scripts.pory"
	walk_up
# 961 "data/maps/Capital/scripts.pory"
	walk_up
# 962 "data/maps/Capital/scripts.pory"
	walk_right
# 963 "data/maps/Capital/scripts.pory"
	walk_up
# 963 "data/maps/Capital/scripts.pory"
	walk_up
# 963 "data/maps/Capital/scripts.pory"
	walk_up
# 963 "data/maps/Capital/scripts.pory"
	walk_up
# 963 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 966 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel2E:
# 967 "data/maps/Capital/scripts.pory"
	walk_up
# 967 "data/maps/Capital/scripts.pory"
	walk_up
# 967 "data/maps/Capital/scripts.pory"
	walk_up
# 967 "data/maps/Capital/scripts.pory"
	walk_up
# 968 "data/maps/Capital/scripts.pory"
	walk_right
# 969 "data/maps/Capital/scripts.pory"
	walk_up
# 969 "data/maps/Capital/scripts.pory"
	walk_up
# 969 "data/maps/Capital/scripts.pory"
	walk_up
# 969 "data/maps/Capital/scripts.pory"
	walk_up
# 969 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 972 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel3E:
# 973 "data/maps/Capital/scripts.pory"
	walk_up
# 973 "data/maps/Capital/scripts.pory"
	walk_up
# 973 "data/maps/Capital/scripts.pory"
	walk_up
# 973 "data/maps/Capital/scripts.pory"
	walk_up
# 973 "data/maps/Capital/scripts.pory"
	walk_up
# 974 "data/maps/Capital/scripts.pory"
	walk_left
# 975 "data/maps/Capital/scripts.pory"
	walk_up
# 975 "data/maps/Capital/scripts.pory"
	walk_up
# 975 "data/maps/Capital/scripts.pory"
	walk_up
# 975 "data/maps/Capital/scripts.pory"
	walk_up
# 975 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

# 978 "data/maps/Capital/scripts.pory"
Capital_Movement_Rebel4E:
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 979 "data/maps/Capital/scripts.pory"
	walk_up
# 980 "data/maps/Capital/scripts.pory"
	walk_left
# 981 "data/maps/Capital/scripts.pory"
	walk_up
# 981 "data/maps/Capital/scripts.pory"
	walk_up
# 981 "data/maps/Capital/scripts.pory"
	walk_up
# 981 "data/maps/Capital/scripts.pory"
	walk_up
# 981 "data/maps/Capital/scripts.pory"
	walk_up
	step_end

Capital_Text_DeskTestYes::
# 984 "data/maps/Capital/scripts.pory"
	.string "Yup you have a follower rn$"

Capital_Text_DeskTestNo::
# 988 "data/maps/Capital/scripts.pory"
	.string "Nope you aint got a follwer rn$"

Capital_Text_Cicero1::
# 992 "data/maps/Capital/scripts.pory"
	.string "My god! Giovanni! They're here!$"

Capital_Text_Gio1::
# 996 "data/maps/Capital/scripts.pory"
	.string "You fool...$"

Capital_Text_Gio2::
# 1000 "data/maps/Capital/scripts.pory"
	.string "You call yourself a man, old Cicero,\l"
	.string "shaking and crying at merely the sight\l"
	.string "of this child? You're can't master your\l"
	.string "own emotions let alone this rebellion.\l"
	.string "Thererfore I relieve you of your duties\l"
	.string "and resume my title as head of state.$"

Capital_Text_Cicero2::
# 1004 "data/maps/Capital/scripts.pory"
	.string "You can't do that! It's treason!$"

Capital_Text_Cicero3::
# 1008 "data/maps/Capital/scripts.pory"
	.string "Guards! Treason!$"

Capital_Text_Gio3::
# 1012 "data/maps/Capital/scripts.pory"
	.string "You still don't understand there is a\l"
	.string "new power rising.$"

Capital_Text_Soldier1::
# 1016 "data/maps/Capital/scripts.pory"
	.string "We serve Giovanni.$"

Capital_Text_Cicero4::
# 1020 "data/maps/Capital/scripts.pory"
	.string "You traitor! Can't you see this is...$"

Capital_Text_Gio4::
# 1024 "data/maps/Capital/scripts.pory"
	.string "Enough! Old fool, can't you see this is\l"
	.string "my hour? Be gone and lament your\l"
	.string "failures in vain.$"

Capital_Text_Cicero5::
# 1028 "data/maps/Capital/scripts.pory"
	.string "You can't do this!$"

Capital_Text_Soldier2::
# 1032 "data/maps/Capital/scripts.pory"
	.string "Let's go.$"

Capital_Text_Cicero6::
# 1036 "data/maps/Capital/scripts.pory"
	.string "I'm still the president!$"

Capital_Text_Cicero7::
# 1040 "data/maps/Capital/scripts.pory"
	.string "I was elected by the senators$"

Capital_Text_Soldier3::
# 1044 "data/maps/Capital/scripts.pory"
	.string "We've heard enough of that.$"

Capital_Text_Cicero8::
# 1048 "data/maps/Capital/scripts.pory"
	.string "Democracy!$"

Capital_Text_Gio5::
# 1052 "data/maps/Capital/scripts.pory"
	.string "You've done well {PLAYER} now you may\l"
	.string "approach me.$"

Capital_Text_GioMewtwoMove::
# 1056 "data/maps/Capital/scripts.pory"
	.string "and stand aside Mewtwo permit he pass$"

Capital_Text_Gio6::
# 1060 "data/maps/Capital/scripts.pory"
	.string "You must be powerful to destroy Blaine\l"
	.string "and find your way to our coronation.\l"
	.string "I've heard many rumours about you\l"
	.string "{PLAYER} and now I see you with my\l"
	.string "own two eyes. I am Giovanni your tyrant\l"
	.string "king. You may be great but Mewtwo far\l"
	.string "greater. I'm giving you the choice, you\l"
	.string "may join me or be destroyed. Now speak.\l"
	.string "What will we do?$"

Capital_Text_PlayerJoinGio::
# 1064 "data/maps/Capital/scripts.pory"
	.string "Will you surrender to Giovanni?$"

Capital_Text_Gio7Yes::
# 1068 "data/maps/Capital/scripts.pory"
	.string "You are more foolish than I had assumed\l"
	.string "if you believed that I would let you\l"
	.string "live.$"

Capital_Text_Gio7No::
# 1072 "data/maps/Capital/scripts.pory"
	.string "Then your journey ends here you foolish\l"
	.string "boy.$"

Capital_Text_Gio8::
# 1076 "data/maps/Capital/scripts.pory"
	.string "Mewtwo the time has come. Destroy the\l"
	.string "boy and then put a swift end to this\l"
	.string "revolt.$"

Capital_Text_Mewtwo1::
# 1080 "data/maps/Capital/scripts.pory"
	.string "No.$"

Capital_Text_Gio9::
# 1084 "data/maps/Capital/scripts.pory"
	.string "Mewtwo! I command you!$"

Capital_Text_Mewtwo2::
# 1088 "data/maps/Capital/scripts.pory"
	.string "I won't obey. I am no slave of yours\l"
	.string "Giovanni.$"

Capital_Text_Gio10::
# 1092 "data/maps/Capital/scripts.pory"
	.string "Mewtwo even you cannot break those\l"
	.string "cuffs$"

Capital_Text_Mewtwo3::
# 1096 "data/maps/Capital/scripts.pory"
	.string "I am MEWTWO and I can break these\l"
	.string "cuffs.$"

Capital_Text_Gio11::
# 1100 "data/maps/Capital/scripts.pory"
	.string "Don't try it!$"

Capital_Text_Mewtwo4::
# 1104 "data/maps/Capital/scripts.pory"
	.string "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!$"

Capital_Text_Mewtwo5::
# 1108 "data/maps/Capital/scripts.pory"
	.string "At last I take a breath free from those\l"
	.string "chains. My strength is made ten fold\l"
	.string "now that I'm free!$"

Capital_Text_Mewtwo6::
# 1112 "data/maps/Capital/scripts.pory"
	.string "You're wrong if you think you can\l"
	.string "control me, you're nothing more than a\l"
	.string "worthless human. What's more I cannot\l"
	.string "foresee a future where you will rule\l"
	.string "anything as a king, for you only misery\l"
	.string "and defeat.$"

Capital_Text_Mewtwo7::
# 1116 "data/maps/Capital/scripts.pory"
	.string "I'm leaving now. Don't try and follow me.$"

Capital_Text_Gio12::
# 1120 "data/maps/Capital/scripts.pory"
	.string "Mewtwo!$"

Capital_Text_GioIntro::
# 1124 "data/maps/Capital/scripts.pory"
	.string "You bastard! This is all your fault!\l"
	.string "Looks like I'll have to deal with you\l"
	.string "myself...$"

Capital_Text_GioLost::
# 1128 "data/maps/Capital/scripts.pory"
	.string "Alas! Fortuna has abandoned me.$"

Capital_Text_GioDefeat::
# 1132 "data/maps/Capital/scripts.pory"
	.string "Betrayed, forsaken, and surrounded I\l"
	.string "am sure to perish on this damned\l"
	.string "day...My coronation become funeral.$"

Capital_Text_Surge1::
# 1136 "data/maps/Capital/scripts.pory"
	.string "My lord!$"

Capital_Text_Surge2::
# 1140 "data/maps/Capital/scripts.pory"
	.string "We must evacuate at once! The rebels\l"
	.string "have...$"

Capital_Text_Gio13::
# 1144 "data/maps/Capital/scripts.pory"
	.string "Lieutenant Surge, be done, we're\l"
	.string "finished here, Mewtwo abandoned us the\l"
	.string "day is lost...$"

Capital_Text_Surge3::
# 1148 "data/maps/Capital/scripts.pory"
	.string "Yes sir, but hope remains.$"

Capital_Text_Surge4::
# 1152 "data/maps/Capital/scripts.pory"
	.string "The military remains faithfully\l"
	.string "obedient to you. If we retreat...if we\l"
	.string "regroup, return, counterattack, we\l"
	.string "might...$"

Capital_Text_Gio14::
# 1156 "data/maps/Capital/scripts.pory"
	.string "I see no hope in this retreat, only a\l"
	.string "cowardly delay of death. Mewtwo is\l"
	.string "gone, we must...$"

Capital_Text_Surge5::
# 1160 "data/maps/Capital/scripts.pory"
	.string "We need to leave! I'm going to bring you\l"
	.string "back to our fort or leave you here to\l"
	.string "die!$"

Capital_Text_Gio15::
# 1164 "data/maps/Capital/scripts.pory"
	.string "OK, lead on.$"

Capital_Text_Maxie1::
# 1168 "data/maps/Capital/scripts.pory"
	.string "To vicory and a better new world!$"

Capital_Text_Maxie2::
# 1172 "data/maps/Capital/scripts.pory"
	.string "With your help {PLAYER} we've won the\l"
	.string "capital but Giovanni managed to\l"
	.string "escape! They must be headed to Fort\l"
	.string "Montgomery. You've demonstrated your\l"
	.string "ability to infiltrate well defended\l"
	.string "spaces but without the ability to\l"
	.string "change your very face I doubt you will\l"
	.string "succeed to penetrate the armor walls\l"
	.string "of Fort Montgomery.$"

Capital_Text_Maxie3::
# 1176 "data/maps/Capital/scripts.pory"
	.string "And {PLAYER} I must repeat what I\l"
	.string "just said$"

Capital_Text_Maxie4::
# 1180 "data/maps/Capital/scripts.pory"
	.string "To your credit we owe our newborn state\l"
	.string "and I thank you on behalf of us all.$"

Capital_Text_Maxie5::
# 1184 "data/maps/Capital/scripts.pory"
	.string "Now forward to declare our intentions!$"

Capital_Text_SoldierBattle::
# 1188 "data/maps/Capital/scripts.pory"
	.string "You must leave now! The senate's\l"
	.string "underway!$"

Capital_Text_RebelBattle::
# 1192 "data/maps/Capital/scripts.pory"
	.string "You'll never win! Freedom will always\l"
	.string "win!$"

Capital_Text_SurgeBattle::
# 1196 "data/maps/Capital/scripts.pory"
	.string "Resistance is futile just give up!$"
