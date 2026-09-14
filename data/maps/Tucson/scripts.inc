Tucson_MapScripts::
# 25 "data/maps/Tucson/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 61 "data/maps/Tucson/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Tucson_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 66 "data/maps/Tucson/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Tucson_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 28 "data/maps/Tucson/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Tucson_F
# 29 "data/maps/Tucson/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/Tucson/scripts.pory"
	case 1, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 32 "data/maps/Tucson/scripts.pory"
	case 2, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 34 "data/maps/Tucson/scripts.pory"
	case 3, Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 0
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 39 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 2
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 41 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 1
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 43 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 3
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 46 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_HideNestor
Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 50 "data/maps/Tucson/scripts.pory"
	compare VAR_ULYSSES_STATE, 26
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 54 "data/maps/Tucson/scripts.pory"
	compare VAR_ULYSSES_STATE, 27
	goto_if_eq Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 31 "data/maps/Tucson/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/Tucson/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 35 "data/maps/Tucson/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 40 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_ShowNestorHousePreWedding
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 42 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_ShowNestorGather1
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 44 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_ShowNestorGather2
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 51 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_SetupBeggar
	goto Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

Tucson_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 55 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_SetupUlyssesDoorway
	return

Tucson_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 62 "data/maps/Tucson/scripts.pory"
	map_script_2 VAR_NESTOR_STATE, 1, Tucson_Script_FacePlayerNorth
	.2byte 0

Tucson_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 67 "data/maps/Tucson/scripts.pory"
	map_script_2 VAR_NESTOR_STATE, 1, Tucson_Script_NestorGather1
	.2byte 0


Tucson_Script_Transition_Oasis::
# 73 "data/maps/Tucson/scripts.pory"
	setvar VAR_TEMP_5, 2
# 74 "data/maps/Tucson/scripts.pory"
	special TransitionMapMusic
# 75 "data/maps/Tucson/scripts.pory"
	special ShowMapNamePopup
	return


Tucson_Script_Transition_Deseret::
# 79 "data/maps/Tucson/scripts.pory"
	setvar VAR_TEMP_5, 3
# 80 "data/maps/Tucson/scripts.pory"
	special TransitionMapMusic
# 81 "data/maps/Tucson/scripts.pory"
	special ShowMapNamePopup
	return


Tucson_Script_ShowNestorHousePreWedding::
# 90 "data/maps/Tucson/scripts.pory"
	compare VAR_ARGO_STATE > 19, 0
	goto_if_ne Tucson_Script_ShowNestorHousePreWedding_2
Tucson_Script_ShowNestorHousePreWedding_1:
# 94 "data/maps/Tucson/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Tucson_Script_ShowNestorHousePreWedding_5
Tucson_Script_ShowNestorHousePreWedding_4:
# 99 "data/maps/Tucson/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_gt Tucson_Script_ShowNestorHousePreWedding_8
Tucson_Script_ShowNestorHousePreWedding_7:
# 104 "data/maps/Tucson/scripts.pory"
	compare VAR_ORESTES_STATE, 13
	goto_if_eq Tucson_Script_ShowNestorHousePreWedding_11
Tucson_Script_ShowNestorHousePreWedding_10:
# 109 "data/maps/Tucson/scripts.pory"
	compare VAR_ULYSSES_STATE, 27
	goto_if_gt Tucson_Script_ShowNestorHousePreWedding_14
Tucson_Script_ShowNestorHousePreWedding_13:
	return

Tucson_Script_ShowNestorHousePreWedding_2:
# 91 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_ShowDioscuri
	goto Tucson_Script_ShowNestorHousePreWedding_1

Tucson_Script_ShowNestorHousePreWedding_5:
# 95 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 17, 22, 10
# 96 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_Script_ShowNestorHousePreWedding_4

Tucson_Script_ShowNestorHousePreWedding_8:
# 100 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_AENEAS, 24, 10
# 101 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_AENEAS, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_Script_ShowNestorHousePreWedding_7

Tucson_Script_ShowNestorHousePreWedding_11:
# 105 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_AGAMEMNON, 22, 22
# 106 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_AGAMEMNON, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_Script_ShowNestorHousePreWedding_10

Tucson_Script_ShowNestorHousePreWedding_14:
# 110 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_ULYSSES, 40, 17
# 111 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
	goto Tucson_Script_ShowNestorHousePreWedding_13


Tucson_Script_FacePlayerNorth::
# 118 "data/maps/Tucson/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


Tucson_Script_SetupBeggar::
# 123 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_BEGGAR, 93, 28
# 124 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_BEGGAR, MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT
	return


Tucson_Script_SetupUlyssesDoorway::
# 129 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_ULYSSES, 21, 18
# 130 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_FACE_UP
# 132 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_DOORMAN, MOVEMENT_TYPE_FACE_DOWN
	return


Tucson_Script_ShowDioscuri::
# 137 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 5, 62, 10
# 138 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 140 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 6, 63, 10
# 141 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	return


Tucson_Script_ShowNestorGather1::
# 147 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 3, 36, 17
# 148 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
# 150 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 4, 32, 15
# 151 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 153 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 2, 40, 15
# 154 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 156 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 5, 32, 17
# 157 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
# 159 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 6, 40, 17
# 160 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
	return


Tucson_Script_ShowNestorGather2::
# 166 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_ShowNestorGather1
# 168 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 14, 30, 15
# 169 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
# 171 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 15, 34, 15
# 172 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_DOWN
# 174 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 16, 38, 15
# 175 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_FACE_DOWN
# 177 "data/maps/Tucson/scripts.pory"
	setobjectxyperm 17, 42, 15
# 178 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype 17 MOVEMENT_TYPE_FACE_DOWN
	return


Tucson_Script_HideNestor::
# 184 "data/maps/Tucson/scripts.pory"
	removeobject 1
# 185 "data/maps/Tucson/scripts.pory"
	removeobject 3
# 186 "data/maps/Tucson/scripts.pory"
	removeobject 2
# 187 "data/maps/Tucson/scripts.pory"
	removeobject 4
	return


Tucson_Script_Nestor::
# 193 "data/maps/Tucson/scripts.pory"
	lock
# 194 "data/maps/Tucson/scripts.pory"
	faceplayer
# 196 "data/maps/Tucson/scripts.pory"
	goto_if_unset FLAG_TUCSON_NESTOR_INTROD, Tucson_Script_Nestor_2
Tucson_Script_Nestor_1:
# 201 "data/maps/Tucson/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt Tucson_Script_Nestor_5
# 207 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 1
	goto_if_lt Tucson_Script_Nestor_9
Tucson_Script_Nestor_8:
# 220 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor5, MSGBOX_DEFAULT
# 221 "data/maps/Tucson/scripts.pory"
	closemessage
Tucson_Script_Nestor_4:
# 223 "data/maps/Tucson/scripts.pory"
	release
	end

Tucson_Script_Nestor_2:
# 197 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor_Intro, MSGBOX_DEFAULT
# 198 "data/maps/Tucson/scripts.pory"
	setflag FLAG_TUCSON_NESTOR_INTROD
	goto Tucson_Script_Nestor_1

Tucson_Script_Nestor_5:
# 203 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor1, MSGBOX_DEFAULT
# 204 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Nestor_4

Tucson_Script_Nestor_9:
# 209 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor2, MSGBOX_DEFAULT
# 210 "data/maps/Tucson/scripts.pory"
	closemessage
# 212 "data/maps/Tucson/scripts.pory"
	setvar VAR_NESTOR_STATE, 1
# 213 "data/maps/Tucson/scripts.pory"
	release
# 214 "data/maps/Tucson/scripts.pory"
	warpsilent MAP_TUCSON, 36, 19
# 215 "data/maps/Tucson/scripts.pory"
	waitstate
	goto Tucson_Script_Nestor_8


Tucson_Script_NestorGather1::
# 232 "data/maps/Tucson/scripts.pory"
	setvar VAR_NESTOR_STATE, 2
# 235 "data/maps/Tucson/scripts.pory"
	load_field_pic 25, 190, 98
# 236 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor3A, MSGBOX_DEFAULT
# 237 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor3B, MSGBOX_DEFAULT
# 238 "data/maps/Tucson/scripts.pory"
	destroy_field_pic 25
# 241 "data/maps/Tucson/scripts.pory"
	load_field_pic 26, 190, 98
# 242 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_NestorGather1_Menelaus1, MSGBOX_DEFAULT
# 243 "data/maps/Tucson/scripts.pory"
	destroy_field_pic 26
# 245 "data/maps/Tucson/scripts.pory"
	load_field_pic 27, 190, 98
# 246 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_NestorGather1_Paris1, MSGBOX_DEFAULT
# 247 "data/maps/Tucson/scripts.pory"
	destroy_field_pic 27
# 250 "data/maps/Tucson/scripts.pory"
	load_field_pic 25, 190, 98
# 251 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor4A, MSGBOX_DEFAULT
# 252 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Nestor4B, MSGBOX_DEFAULT
# 253 "data/maps/Tucson/scripts.pory"
	closemessage
# 254 "data/maps/Tucson/scripts.pory"
	destroy_field_pic 25
# 256 "data/maps/Tucson/scripts.pory"
	warpsilent MAP_TUCSON, 36, 19
# 257 "data/maps/Tucson/scripts.pory"
	waitstate
	return


Tucson_Script_Helen::
# 266 "data/maps/Tucson/scripts.pory"
	lock
# 268 "data/maps/Tucson/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt Tucson_Script_Helen_2
# 274 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 0
	goto_if_eq Tucson_Script_Helen_3
# 278 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 2
	goto_if_eq Tucson_Script_Helen_4
# 284 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Helen_Text_0, MSGBOX_DEFAULT
# 285 "data/maps/Tucson/scripts.pory"
	closemessage
Tucson_Script_Helen_1:
# 287 "data/maps/Tucson/scripts.pory"
	release
	end

Tucson_Script_Helen_2:
# 269 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen1, MSGBOX_DEFAULT
# 270 "data/maps/Tucson/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 271 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 272 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen2, MSGBOX_NPC
# 273 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Helen_1

Tucson_Script_Helen_3:
# 276 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen3, MSGBOX_DEFAULT
# 277 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Helen_1

Tucson_Script_Helen_4:
# 280 "data/maps/Tucson/scripts.pory"
	faceplayer
# 281 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Helen4, MSGBOX_DEFAULT
# 282 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Helen_1


Tucson_Script_Paris::
# 292 "data/maps/Tucson/scripts.pory"
	lock
# 294 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 0
	goto_if_eq Tucson_Script_Paris_2
# 298 "data/maps/Tucson/scripts.pory"
	compare VAR_NESTOR_STATE, 2
	goto_if_eq Tucson_Script_Paris_3
# 345 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Paris_Text_0, MSGBOX_DEFAULT
# 346 "data/maps/Tucson/scripts.pory"
	closemessage
Tucson_Script_Paris_1:
# 349 "data/maps/Tucson/scripts.pory"
	release
	end

Tucson_Script_Paris_2:
# 295 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris1, MSGBOX_DEFAULT
# 296 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Paris_1

Tucson_Script_Paris_3:
# 299 "data/maps/Tucson/scripts.pory"
	faceplayer
# 301 "data/maps/Tucson/scripts.pory"
	goto_if_unset FLAG_TUCSON_PARIS_DID_INVITE, Tucson_Script_Paris_8
# 318 "data/maps/Tucson/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Tucson_Script_Paris_11
# 331 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_OnHector, MSGBOX_DEFAULT
# 333 "data/maps/Tucson/scripts.pory"
	compare VAR_AENEID_STATE, 12
	goto_if_lt Tucson_Script_Paris_18
Tucson_Script_Paris_17:
# 336 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_BringGuests, MSGBOX_DEFAULT
# 337 "data/maps/Tucson/scripts.pory"
	closemessage
Tucson_Script_Paris_7:
# 341 "data/maps/Tucson/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 342 "data/maps/Tucson/scripts.pory"
	waitmovement 0
	goto Tucson_Script_Paris_1

Tucson_Script_Paris_8:
# 303 "data/maps/Tucson/scripts.pory"
	setflag FLAG_TUCSON_PARIS_DID_INVITE
# 304 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_GiveInvites, MSGBOX_DEFAULT
# 305 "data/maps/Tucson/scripts.pory"
	closemessage
# 306 "data/maps/Tucson/scripts.pory"
	giveitem ITEM_WEDDING_INVITATION_HECTOR
# 307 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_OnHector, MSGBOX_DEFAULT
# 308 "data/maps/Tucson/scripts.pory"
	closemessage
# 309 "data/maps/Tucson/scripts.pory"
	giveitem ITEM_WEDDING_INVITATION_AENEAS
# 310 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_OnAeneas, MSGBOX_DEFAULT
# 311 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_BringGuests, MSGBOX_DEFAULT
# 312 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Paris_7

Tucson_Script_Paris_11:
# 320 "data/maps/Tucson/scripts.pory"
	compare VAR_AENEID_STATE, 12
	goto_if_lt Tucson_Script_Paris_14
# 326 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris2, MSGBOX_DEFAULT
# 327 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Paris_7

Tucson_Script_Paris_14:
# 321 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_OnAeneas, MSGBOX_DEFAULT
# 322 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_BringGuests, MSGBOX_DEFAULT
# 323 "data/maps/Tucson/scripts.pory"
	closemessage
	goto Tucson_Script_Paris_7

Tucson_Script_Paris_18:
# 334 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Paris_OnAeneas, MSGBOX_DEFAULT
	goto Tucson_Script_Paris_17


Tucson_Script_Menelaus::
# 354 "data/maps/Tucson/scripts.pory"
	lock
# 355 "data/maps/Tucson/scripts.pory"
	faceplayer
# 356 "data/maps/Tucson/scripts.pory"
	switch VAR_NESTOR_STATE
# 357 "data/maps/Tucson/scripts.pory"
	case 0, Tucson_Script_Menelaus_3
# 359 "data/maps/Tucson/scripts.pory"
	case 1, Tucson_Script_Menelaus_4
# 361 "data/maps/Tucson/scripts.pory"
	case 2, Tucson_Script_Menelaus_5
# 381 "data/maps/Tucson/scripts.pory"
	case 3, Tucson_Script_Menelaus_6
# 383 "data/maps/Tucson/scripts.pory"
	case 4, Tucson_Script_Menelaus_7
# 386 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_5, MSGBOX_DEFAULT
Tucson_Script_Menelaus_1:
# 389 "data/maps/Tucson/scripts.pory"
	closemessage
# 390 "data/maps/Tucson/scripts.pory"
	release
	end

Tucson_Script_Menelaus_3:
# 358 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Menelaus1, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_4:
# 360 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_0, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_5:
# 363 "data/maps/Tucson/scripts.pory"
	goto_if_unset FLAG_TUCSON_MENELAUS_DID_INVITE, Tucson_Script_Menelaus_9
# 375 "data/maps/Tucson/scripts.pory"
	compare VAR_ORESTES_STATE, 12
	goto_if_gt Tucson_Script_Menelaus_12
# 378 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_2, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_6:
# 382 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_3, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_7:
# 384 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_4, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_9:
# 364 "data/maps/Tucson/scripts.pory"
	setflag FLAG_TUCSON_MENELAUS_DID_INVITE
# 365 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Menelaus_GiveInvites, MSGBOX_DEFAULT
# 366 "data/maps/Tucson/scripts.pory"
	closemessage
# 367 "data/maps/Tucson/scripts.pory"
	giveitem ITEM_WEDDING_INVITATION_AGAMEMNON
# 368 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Menelaus_OnAgamemnon, MSGBOX_DEFAULT
# 369 "data/maps/Tucson/scripts.pory"
	closemessage
# 370 "data/maps/Tucson/scripts.pory"
	giveitem ITEM_WEDDING_INVITATION_ULYSSES
# 371 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Menelaus_OnUlysses, MSGBOX_DEFAULT
# 372 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_BringGuests, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1

Tucson_Script_Menelaus_12:
# 376 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Script_Menelaus_Text_1, MSGBOX_DEFAULT
	goto Tucson_Script_Menelaus_1


Tucson_Script_Hector::
# 395 "data/maps/Tucson/scripts.pory"
	lock
# 396 "data/maps/Tucson/scripts.pory"
	faceplayer
# 397 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Hector, MSGBOX_DEFAULT
# 398 "data/maps/Tucson/scripts.pory"
	release
	end


Tucson_Script_Beggar::
# 403 "data/maps/Tucson/scripts.pory"
	faceplayer
# 404 "data/maps/Tucson/scripts.pory"
	showmoneybox 18, 0
# 405 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Beggar1, MSGBOX_YESNO
# 406 "data/maps/Tucson/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Tucson_Script_Beggar_2
Tucson_Script_Beggar_1:
# 417 "data/maps/Tucson/scripts.pory"
	hidemoneybox
# 418 "data/maps/Tucson/scripts.pory"
	closemessage
# 419 "data/maps/Tucson/scripts.pory"
	unfaceplayer
	end

Tucson_Script_Beggar_2:
# 407 "data/maps/Tucson/scripts.pory"
	removemoney 1
# 408 "data/maps/Tucson/scripts.pory"
	updatemoneybox
# 409 "data/maps/Tucson/scripts.pory"
	playse SE_SHOP
# 410 "data/maps/Tucson/scripts.pory"
	waitse
# 411 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_Beggar2
# 412 "data/maps/Tucson/scripts.pory"
	checkitem ITEM_PENELOPE_RING
# 413 "data/maps/Tucson/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Tucson_Script_Beggar_4
	goto Tucson_Script_Beggar_1

Tucson_Script_Beggar_4:
# 414 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_UlyssesFight
	goto Tucson_Script_Beggar_1


Tucson_Script_Doorman::
# 425 "data/maps/Tucson/scripts.pory"
	compare VAR_ULYSSES_STATE, 27
	goto_if_eq Tucson_Script_Doorman_1
	return

Tucson_Script_Doorman_1:
# 426 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_UlyssesDoorway
	return


Tucson_Script_UlyssesFight::
# 434 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_BEGGAR, Common_Movement_ExclamationMark
# 435 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 437 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_BeggarUlysses
# 438 "data/maps/Tucson/scripts.pory"
	closemessage
# 440 "data/maps/Tucson/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 441 "data/maps/Tucson/scripts.pory"
	removeobject LOCALID_TUCSON_BEGGAR
# 442 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_BEGGAR, 0, 0
# 443 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_BEGGAR, MOVEMENT_TYPE_INVISIBLE
# 444 "data/maps/Tucson/scripts.pory"
	addobject LOCALID_TUCSON_BEGGAR
# 445 "data/maps/Tucson/scripts.pory"
	removeobject LOCALID_TUCSON_ULYSSES
# 446 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_ULYSSES, 93, 28
# 447 "data/maps/Tucson/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 448 "data/maps/Tucson/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/Tucson/scripts.pory"
	case DIR_NORTH, Tucson_Script_UlyssesFight_3
# 451 "data/maps/Tucson/scripts.pory"
	case DIR_WEST, Tucson_Script_UlyssesFight_4
# 453 "data/maps/Tucson/scripts.pory"
	case DIR_EAST, Tucson_Script_UlyssesFight_5
# 456 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_FACE_UP
Tucson_Script_UlyssesFight_1:
# 458 "data/maps/Tucson/scripts.pory"
	addobject LOCALID_TUCSON_ULYSSES
# 459 "data/maps/Tucson/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 461 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 462 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesPre
# 463 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 464 "data/maps/Tucson/scripts.pory"
	closemessage
# 466 "data/maps/Tucson/scripts.pory"
	trainerbattle_no_intro TRAINER_ULYSSES, Tucson_Text_UlyssesLost
# 468 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 469 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesPost1
# 470 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 472 "data/maps/Tucson/scripts.pory"
	removeitem ITEM_PENELOPE_RING
# 473 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_GaveRing
# 474 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 475 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesPost2
# 476 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 477 "data/maps/Tucson/scripts.pory"
	closemessage
# 479 "data/maps/Tucson/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 480 "data/maps/Tucson/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Tucson_Script_UlyssesFight_8
Tucson_Script_UlyssesFight_7:
# 484 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_ULYSSES, Common_Movement_WalkLeft9
# 485 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 487 "data/maps/Tucson/scripts.pory"
	removeobject LOCALID_TUCSON_ULYSSES
# 488 "data/maps/Tucson/scripts.pory"
	removeobject LOCALID_TUCSON_DOORMAN
# 489 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_SetupUlyssesDoorway
# 490 "data/maps/Tucson/scripts.pory"
	addobject LOCALID_TUCSON_ULYSSES
# 491 "data/maps/Tucson/scripts.pory"
	addobject LOCALID_TUCSON_DOORMAN
# 493 "data/maps/Tucson/scripts.pory"
	setvar VAR_ULYSSES_STATE, 27
	end

Tucson_Script_UlyssesFight_3:
# 450 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
	goto Tucson_Script_UlyssesFight_1

Tucson_Script_UlyssesFight_4:
# 452 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
	goto Tucson_Script_UlyssesFight_1

Tucson_Script_UlyssesFight_5:
# 454 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_FACE_LEFT
	goto Tucson_Script_UlyssesFight_1

Tucson_Script_UlyssesFight_8:
# 481 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_ULYSSES, Common_Movement_WalkDown
# 482 "data/maps/Tucson/scripts.pory"
	waitmovement 0
	goto Tucson_Script_UlyssesFight_7


Tucson_Script_UlyssesDoorway::
# 500 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_BUTLER, 190, 98
# 501 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesDoorway_Doorman1
# 502 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_BUTLER
# 504 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 505 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesDoorway_Ulysses1
# 506 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 508 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_DOORMAN, Common_Movement_ExclamationMark
# 509 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 511 "data/maps/Tucson/scripts.pory"
	load_field_pic FIELD_PIC_BUTLER, 190, 98
# 512 "data/maps/Tucson/scripts.pory"
	msgbox Tucson_Text_UlyssesDoorway_Doorman2
# 513 "data/maps/Tucson/scripts.pory"
	destroy_field_pic FIELD_PIC_BUTLER
# 514 "data/maps/Tucson/scripts.pory"
	closemessage
# 516 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_ULYSSES, Common_Movement_WalkRight8
# 517 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 519 "data/maps/Tucson/scripts.pory"
	removeobject LOCALID_TUCSON_ULYSSES
# 520 "data/maps/Tucson/scripts.pory"
	setobjectxyperm LOCALID_TUCSON_ULYSSES, 40, 17
# 521 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
# 522 "data/maps/Tucson/scripts.pory"
	addobject LOCALID_TUCSON_ULYSSES
# 524 "data/maps/Tucson/scripts.pory"
	applymovement LOCALID_TUCSON_DOORMAN, Common_Movement_FaceLeft
# 525 "data/maps/Tucson/scripts.pory"
	waitmovement 0
# 526 "data/maps/Tucson/scripts.pory"
	setobjectmovementtype LOCALID_TUCSON_DOORMAN, MOVEMENT_TYPE_FACE_LEFT
# 528 "data/maps/Tucson/scripts.pory"
	setvar VAR_ULYSSES_STATE, 28
# 531 "data/maps/Tucson/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, Tucson_Script_UlyssesDoorway_3
Tucson_Script_UlyssesDoorway_1:
	end

Tucson_Script_UlyssesDoorway_2:
	goto Tucson_Script_UlyssesDoorway_1

Tucson_Script_UlyssesDoorway_3:
# 532 "data/maps/Tucson/scripts.pory"
	compare VAR_AENEID_STATE, 11
	goto_if_gt Tucson_Script_UlyssesDoorway_5
	goto Tucson_Script_UlyssesDoorway_1

Tucson_Script_UlyssesDoorway_5:
# 533 "data/maps/Tucson/scripts.pory"
	compare VAR_ORESTES_STATE, 13
	goto_if_eq Tucson_Script_UlyssesDoorway_2
	goto Tucson_Script_UlyssesDoorway_1


Tucson_Script_Ulysses::
# 543 "data/maps/Tucson/scripts.pory"
	compare VAR_ULYSSES_STATE, 27
	goto_if_eq Tucson_Script_Ulysses_1
	return

Tucson_Script_Ulysses_1:
# 544 "data/maps/Tucson/scripts.pory"
	call Tucson_Script_UlyssesDoorway
	return


Tucson_Script_Helen_Text_0:
# 284 "data/maps/Tucson/scripts.pory"
	.string "After Wedding Return to House\n"
	.string "Denumount$"

Tucson_Script_Paris_Text_0:
# 345 "data/maps/Tucson/scripts.pory"
	.string "VAR_NESTOR_STATE OOB -\n"
	.string "Tucson_Script_Paris$"

Tucson_Script_Menelaus_Text_0:
# 360 "data/maps/Tucson/scripts.pory"
	.string "NESTOR STATE 1$"

Tucson_Script_Menelaus_Text_1:
# 376 "data/maps/Tucson/scripts.pory"
	.string "Agamemnon is here$"

Tucson_Script_Menelaus_Text_2:
# 378 "data/maps/Tucson/scripts.pory"
	.string "Agamemnon is NOT here$"

Tucson_Script_Menelaus_Text_3:
# 382 "data/maps/Tucson/scripts.pory"
	.string "NESTOR STATE 3$"

Tucson_Script_Menelaus_Text_4:
# 384 "data/maps/Tucson/scripts.pory"
	.string "NESTOR STATE 4$"

Tucson_Script_Menelaus_Text_5:
# 386 "data/maps/Tucson/scripts.pory"
	.string "NESTOR STATE OOB$"

Tucson_Text_Nestor_Intro::
# 550 "data/maps/Tucson/scripts.pory"
	.string "I've lived a happy and eventful life but\n"
	.string "now I see my end approaching fast.\l"
	.string "Without a son to inherit my wealth I\l"
	.string "must rely on Helen, my daughter, to give\l"
	.string "birth to a legitimate heir and to that\l"
	.string "end I've arranged a marriage between\l"
	.string "her and one of the two suitors:\l"
	.string "Menelaus, that brilliant business man,\l"
	.string "and the absent minded pretty Paris.$"

Tucson_Text_Nestor1::
# 554 "data/maps/Tucson/scripts.pory"
	.string "My daughter Helen, much to my dismay,\n"
	.string "refuses to marry until Castor and\l"
	.string "Pollux her twin brothers return home.\l"
	.string "Tell Castor and Pollux to hurry home.$"

Tucson_Text_Nestor2::
# 558 "data/maps/Tucson/scripts.pory"
	.string "Thank you for helping to bring my sons\n"
	.string "home. Without delay the preparations\l"
	.string "for Helen's wedding must begin. Call\l"
	.string "them in!$"

Tucson_Text_Nestor3A::
# 562 "data/maps/Tucson/scripts.pory"
	.string "With great rejoicing we welcome back\n"
	.string "the Dioscuri. Champion Castor and the\l"
	.string "proud Pollux were gone for far too long\l"
	.string "and only when they return to our house\l"
	.string "do we reflect on their great importance\l"
	.string "to the fortune and cheer of our estate.\l"
	.string "The beneficial {PLAYER} is deeply\l"
	.string "thanked for his assistance in bringing\l"
	.string "you back. You both were sorely missed.\l"
	.string "Now to address the reason we are\l"
	.string "gathered here today. It's my intention\l"
	.string "that Helen shall wed the one among us\l"
	.string "most suited to wed. Just as I did when I\l"
	.string "was just a youth, before the works of\l"
	.string "war had left me thus, I searched the\l"
	.string "whole country to discover someone in\l"
	.string "who to trust care of my house. Before,\l"
	.string "however, it was the lovely Leda I\l"
	.string "sought to wed whereas this time I\l"
	.string "sought the man whom my Helen will wed.\l"
	.string "Once I had interviewed hundreds of men,\l"
	.string "then spent hundreds of hours in debate\l"
	.string "over inherent traits, accomplishments,\l"
	.string "and astrologic signs I narrowed it to\l"
	.string "Paris of Troy, and Menelaus, the self\l"
	.string "made tycoon of commerce and trade.$"

Tucson_Text_Nestor3B::
# 566 "data/maps/Tucson/scripts.pory"
	.string "One of these two is my hand chosen heir\n"
	.string "and groom to my only daughter, Helen.\l"
	.string "This decision has kept me up at night,\l"
	.string "and more often than when I was in war\l"
	.string "has my heart been beset by doubt.\l"
	.string "Therefore know you be worthy gentleman\l"
	.string "and both distinguised men of quality\l"
	.string "despite the fact that only one of you\l"
	.string "will win. Necessity mandates someone\l"
	.string "must lose. I will not tolerate a fight or\l"
	.string "feud between two young princes, above\l"
	.string "all men, over mere things like women or\l"
	.string "money therefore I will ask before we\l"
	.string "proceed that you both swear upon the\l"
	.string "sun and moon, upon the countless orbs\l"
	.string "who light heaven, upon the mighty\l"
	.string "earth, upon the sea, upon the air we\l"
	.string "breath and by the stream of death that\l"
	.string "separates our Earth from Hell, that you\l"
	.string "will both hold the other as kin and not\l"
	.string "only refrain from complaining, let alone\l"
	.string "threatening violence, or force, but\l"
	.string "celebrate to see you brother wed when\l"
	.string "he has won, and you have lost, Helen. Do\l"
	.string "both you swear to hold our contract\l"
	.string "thus?$"

Tucson_Text_NestorGather1_Menelaus1::
# 570 "data/maps/Tucson/scripts.pory"
	.string "I swear, Nestor the wise, to hold Paris\n"
	.string "as my brother if he, by your consent,\l"
	.string "marries Helen and takes all your estate.$"

Tucson_Text_NestorGather1_Paris1::
# 574 "data/maps/Tucson/scripts.pory"
	.string "Though it is most unlike myself to swear\n"
	.string "an oath, for often oathes are lightly\l"
	.string "made and quickly forgotten by those\l"
	.string "who swear, to win the hand of this\l"
	.string "unique beauty even the Prince Paris is\l"
	.string "ready to humble himself and contradict\l"
	.string "his rules. Therefore I swear by all\l"
	.string "those things and more that I shall hold\l"
	.string "Menelaus as kin after you declare who\l"
	.string "Helen shall wed.$"

Tucson_Text_Nestor4A::
# 578 "data/maps/Tucson/scripts.pory"
	.string "It has been sworn. Now that we have\n"
	.string "agreed that we shall hold eachother as\l"
	.string "brothers before, during, and after the\l"
	.string "wedding, it's only right that we should\l"
	.string "act as such. Therefore I tell you both,\l"
	.string "our family will be hosting a joyous\l"
	.string "reception, ceremony, and legendary\l"
	.string "feast to celebrate the marriage of\l"
	.string "Helen to the distinguished groom, your\l"
	.string "own brother. You both are invited and,\l"
	.string "by the bonds of kin which now unite our\l"
	.string "fate as one, under sworn obligation to\l"
	.string "attend. You both are expected to bring\l"
	.string "a guest to serve as your best man and a\l"
	.string "brother from your own families to\l"
	.string "celebrate this great occasion. Helen's\l"
	.string "wedding will be told as legend for\l"
	.string "generations and the desire of men to\l"
	.string "attend will likewise be extraordinary.$"

Tucson_Text_Nestor4B::
# 582 "data/maps/Tucson/scripts.pory"
	.string "I know the both of you have many men\n"
	.string "under consideration to invite. Think\l"
	.string "carefully and choose your men wisely,\l"
	.string "as I too carefully selected you. Write\l"
	.string "down your invitations on letters and\l"
	.string "then, since he was so effective at\l"
	.string "bringing my boys, once lost at sea, back\l"
	.string "home, I'm entrusting to {PLAYER} the\l"
	.string "keep, care, and, delivery of your\l"
	.string "invitations to your own chosen best\l"
	.string "man and brother. Once they've made up\l"
	.string "their mind talk to them {PLAYER},\l"
	.string "deliver their invitations and then,\l"
	.string "bring back their guests to gather in my\l"
	.string "house. Once re-convened I will\l"
	.string "announce which one will marry Helen and\l"
	.string "take my estate. Until that time, when\l"
	.string "all of us are met, I release you to your\l"
	.string "own whims and wants. May time pass over\l"
	.string "us gentle and swift.$"

Tucson_Text_Nestor5::
# 586 "data/maps/Tucson/scripts.pory"
	.string "Bring the suitors text$"

Tucson_Text_Hector::
# 590 "data/maps/Tucson/scripts.pory"
	.string "It is a great honor and true privilege\n"
	.string "to be here in the great house of Nestor\l"
	.string "to see the wedding of lovely Helen\l"
	.string "whether my brother is the groom or not.$"

Tucson_Text_Helen1::
# 594 "data/maps/Tucson/scripts.pory"
	.string "Despite the radiant glow of your face\n"
	.string "my heart still shivers cold, I'm\l"
	.string "trembling. Dear Paris, know these tears\l"
	.string "that wet my cheeks are shed out of\l"
	.string "longing for Castor and Pollux. My dear\l"
	.string "brothers have been away for far too\l"
	.string "long and I now fear the worst.$"

Tucson_Text_Helen2::
# 598 "data/maps/Tucson/scripts.pory"
	.string "Please leave us be unless you bring us\n"
	.string "news that Castor and Pollux have\l"
	.string "returned home.$"

Tucson_Text_Helen3::
# 602 "data/maps/Tucson/scripts.pory"
	.string "Dear Paris I must not have slept last\n"
	.string "night between my dreams of you and\l"
	.string "those nightmares which filled my\l"
	.string "fragile heart up with despair. I pray my\l"
	.string "father says I'll marry you or never will\l"
	.string "I be merry again.$"

Tucson_Text_Helen4::
# 606 "data/maps/Tucson/scripts.pory"
	.string "I secretly hope that your mission fails\n"
	.string "and the invited guests never arrive so\l"
	.string "my Paris and I can remain here as I fear\l"
	.string "my father will speak the words as\l"
	.string "hideous as that face: Menelaus.$"

Tucson_Text_Paris1::
# 610 "data/maps/Tucson/scripts.pory"
	.string "Do not defraud the world of your beauty\n"
	.string "by desecrating your radiant glow with\l"
	.string "worried looks, anxious breathes, or\l"
	.string "tears. Take comfort in the comfort you\l"
	.string "give me.$"

Tucson_Text_Paris_GiveInvites::
# 614 "data/maps/Tucson/scripts.pory"
	.string "Out of many brothers, and many friends,\n"
	.string "I have decided who I shall invite. The\l"
	.string "mighty Hector, my eldest brother, and\l"
	.string "wise Aeneas my long time mentor.$"

Tucson_Text_Paris_OnHector::
# 618 "data/maps/Tucson/scripts.pory"
	.string "Hector is a man of great discipline who\n"
	.string "trains his body daily without rest. He\l"
	.string "competes often at Gymnasium.$"

Tucson_Text_Paris_OnAeneas::
# 624 "data/maps/Tucson/scripts.pory"
	.string "Old Aeneas departed these lands to\n"
	.string "seek out Lavinian Shores across the\l"
	.string "sea. He purposed to found a city upon\l"
	.string "some savage uninhabited island.\l"
	.string "Exactly where that is, I do not know.$"

Tucson_Text_BringGuests::
# 628 "data/maps/Tucson/scripts.pory"
	.string "Deliver my invitations swiftly, gather\n"
	.string "my guests so we can be married.$"

Tucson_Text_Paris2::
# 632 "data/maps/Tucson/scripts.pory"
	.string "Thank you. It is a blessing to see my\n"
	.string "brother, Hector, and dear old Aeneas,\l"
	.string "gathered together with me in this\l"
	.string "house. I hope that Nestor does not long\l"
	.string "delay the beginning of Helen's great\l"
	.string "wedding, and more I hope he gives me his\l"
	.string "consent to marry his daughter, my love,\l"
	.string "Helen.$"

Tucson_Text_Menelaus1::
# 636 "data/maps/Tucson/scripts.pory"
	.string "The thought of conquering Helen is more\n"
	.string "exciting than all of the wealth I stand\l"
	.string "to inherit from her father, Nestor.$"

Tucson_Text_Menelaus_GiveInvites::
# 640 "data/maps/Tucson/scripts.pory"
	.string "I know exactly who I will invite to be in\n"
	.string "attendance when I marry the luscious\l"
	.string "Helen. My eldest brother Agamemnon and\l"
	.string "my friend Ulysses.$"

Tucson_Text_Menelaus_OnAgamemnon::
# 644 "data/maps/Tucson/scripts.pory"
	.string "My dear older brother Agamemnon lives\n"
	.string "with his family in Albion Town.$"

Tucson_Text_Menelaus_OnUlysses::
# 648 "data/maps/Tucson/scripts.pory"
	.string "Cunning Ulysses, who made great riches\n"
	.string "with me in the business industry, lives\l"
	.string "with wife and son on his private island.$"

Tucson_Text_Beggar1::
# 652 "data/maps/Tucson/scripts.pory"
	.string "Oh please sir, help! A coin for this\n"
	.string "beggar?$"

Tucson_Text_Beggar2::
# 656 "data/maps/Tucson/scripts.pory"
	.string "Blessings on you from he who governs\n"
	.string "all!$"

Tucson_Text_BeggarUlysses::
# 660 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesPre::
# 664 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesLost::
# 668 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesPost1::
# 672 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_GaveRing::
# 676 "data/maps/Tucson/scripts.pory"
	.string "{PLAYER} gave Ulysses Penelope's\n"
	.string "Ring$"

Tucson_Text_UlyssesPost2::
# 680 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesDoorway_Doorman1::
# 684 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesDoorway_Ulysses1::
# 688 "data/maps/Tucson/scripts.pory"
	.string "$"

Tucson_Text_UlyssesDoorway_Doorman2::
# 692 "data/maps/Tucson/scripts.pory"
	.string "$"
