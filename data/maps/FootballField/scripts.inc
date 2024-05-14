FootballField_MapScripts::
	.byte 0


FootballField_EventScript_RunningTest::
# 36 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupRunningTest
# 37 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_StartRunningTest
	return


FootballField_EventScript_FinishClass::
# 42 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_ClassFinished
# 43 "data/maps/FootballField/scripts.pory"
	closemessage
# 44 "data/maps/FootballField/scripts.pory"
	fadescreen 1
# 46 "data/maps/FootballField/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 14, 36
# 47 "data/maps/FootballField/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 14, 36
# 48 "data/maps/FootballField/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 50 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 14, 35
# 51 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 14, 35
# 52 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/FootballField/scripts.pory"
	turnobject 1, DIR_SOUTH
# 54 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 55 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 58 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
# 60 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 62 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/FootballField/scripts.pory"
	special ResetCamera
# 67 "data/maps/FootballField/scripts.pory"
	fadescreen 0
# 69 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachIntro
# 70 "data/maps/FootballField/scripts.pory"
	closemessage
# 71 "data/maps/FootballField/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GYM, FootballField_Text_CoachLost
# 72 "data/maps/FootballField/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 73 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachPost
# 74 "data/maps/FootballField/scripts.pory"
	closemessage
# 77 "data/maps/FootballField/scripts.pory"
	clearflag FLAG_OPEN_CLASS_GYM
# 78 "data/maps/FootballField/scripts.pory"
	warpsilent MAP_FOOTBALL_FIELD, 14, 36
	end


FootballField_EventScript_CatchingTest::
# 86 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FinishClass
	return


FootballField_EventScript_SetupRunningTest::
# 93 "data/maps/FootballField/scripts.pory"
	fadescreen 1
# 95 "data/maps/FootballField/scripts.pory"
	lockall
# 97 "data/maps/FootballField/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 33
# 98 "data/maps/FootballField/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 13, 33
# 99 "data/maps/FootballField/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 102 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 13, 7
# 103 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 13, 7
# 104 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
# 107 "data/maps/FootballField/scripts.pory"
	setobjectxy 7, 10, 9
# 108 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 7, 10, 9
# 109 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
# 111 "data/maps/FootballField/scripts.pory"
	setobjectxy 8, 17, 9
# 112 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 8, 17, 9
# 113 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
# 115 "data/maps/FootballField/scripts.pory"
	setobjectxy 9, 13, 29
# 116 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 9, 13, 29
# 117 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
# 119 "data/maps/FootballField/scripts.pory"
	setobjectxy 10, 8, 25
# 120 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 10, 8, 25
# 121 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
# 123 "data/maps/FootballField/scripts.pory"
	removeobject 11
# 124 "data/maps/FootballField/scripts.pory"
	setobjectxy 11, 7, 27
# 125 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 11, 7, 27
# 126 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
# 127 "data/maps/FootballField/scripts.pory"
	addobject 11
# 130 "data/maps/FootballField/scripts.pory"
	setobjectxy 2, 17, 26
# 131 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 2, 17, 26
# 132 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
# 134 "data/maps/FootballField/scripts.pory"
	setobjectxy 3, 13, 21
# 135 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 3, 13, 21
# 136 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
# 138 "data/maps/FootballField/scripts.pory"
	setobjectxy 4, 9, 17
# 139 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 4, 9, 17
# 140 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
# 142 "data/maps/FootballField/scripts.pory"
	setobjectxy 5, 17, 17
# 143 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 5, 17, 17
# 144 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
# 146 "data/maps/FootballField/scripts.pory"
	setobjectxy 6, 17, 12
# 147 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 6, 17, 12
# 148 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
# 150 "data/maps/FootballField/scripts.pory"
	turnobject 7, DIR_SOUTH
# 151 "data/maps/FootballField/scripts.pory"
	turnobject 8, DIR_SOUTH
# 152 "data/maps/FootballField/scripts.pory"
	turnobject 9, DIR_SOUTH
# 153 "data/maps/FootballField/scripts.pory"
	turnobject 10, DIR_SOUTH
# 154 "data/maps/FootballField/scripts.pory"
	turnobject 11, DIR_SOUTH
# 156 "data/maps/FootballField/scripts.pory"
	turnobject 2, DIR_SOUTH
# 157 "data/maps/FootballField/scripts.pory"
	turnobject 3, DIR_SOUTH
# 158 "data/maps/FootballField/scripts.pory"
	turnobject 4, DIR_SOUTH
# 159 "data/maps/FootballField/scripts.pory"
	turnobject 5, DIR_SOUTH
# 160 "data/maps/FootballField/scripts.pory"
	turnobject 6, DIR_SOUTH
# 163 "data/maps/FootballField/scripts.pory"
	special ResetCamera
# 164 "data/maps/FootballField/scripts.pory"
	fadescreen 0
	return


FootballField_EventScript_StartRunningTest::
# 170 "data/maps/FootballField/scripts.pory"
	lockall
# 171 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_BeginRunningTest
# 172 "data/maps/FootballField/scripts.pory"
	closemessage
# 173 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 1
# 174 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
# 179 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 180 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 181 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_DoNotLeaveField
# 182 "data/maps/FootballField/scripts.pory"
	closemessage
# 183 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 184 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_DoNotLeaveField_2
	return

FootballField_EventScript_DoNotLeaveField_2:
# 185 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_FieldTrigger1::
# 191 "data/maps/FootballField/scripts.pory"
	lockall
# 192 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
# 207 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
# 209 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
# 193 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 194 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 195 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 196 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 197 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 198 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 199 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
# 201 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
# 204 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
# 200 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
# 202 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
# 214 "data/maps/FootballField/scripts.pory"
	lockall
# 215 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
# 230 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
# 232 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
# 216 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 217 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 218 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 219 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 220 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 221 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 222 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
# 224 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
# 227 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
# 223 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
# 225 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
# 237 "data/maps/FootballField/scripts.pory"
	lockall
# 238 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
# 251 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
# 253 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
# 239 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 240 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 241 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 242 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 243 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 244 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 245 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
# 248 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
# 246 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
# 258 "data/maps/FootballField/scripts.pory"
	lockall
# 259 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 260 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 261 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_EndZone
# 262 "data/maps/FootballField/scripts.pory"
	releaseall
	end


FootballField_EventScript_EndZone::
# 267 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 269 "data/maps/FootballField/scripts.pory"
	case 0, FootballField_EventScript_EndZone_2
# 272 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_EndZone_3
	return

FootballField_EventScript_EndZone_2:
# 270 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_EventScript_EndZone_Text_0
# 271 "data/maps/FootballField/scripts.pory"
	closemessage
	return

FootballField_EventScript_EndZone_3:
# 273 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 2
# 274 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_CatchingTest
	return


FootballField_EventScript_FootballCoach::
# 279 "data/maps/FootballField/scripts.pory"
	lockall
# 280 "data/maps/FootballField/scripts.pory"
	faceplayer
# 281 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
# 283 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
# 286 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
# 288 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 289 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 290 "data/maps/FootballField/scripts.pory"
	release
	end

FootballField_EventScript_FootballCoach_2:
# 282 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
# 284 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
# 295 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachComplete
# 296 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 297 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_GymClass::
# 303 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 304 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 305 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 306 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_GymIntro
# 307 "data/maps/FootballField/scripts.pory"
	closemessage
# 308 "data/maps/FootballField/scripts.pory"
	delay 30
# 310 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_CollisionYoungster::
# 321 "data/maps/FootballField/scripts.pory"
	lockall
# 322 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 323 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 324 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_RunningTestFail
# 325 "data/maps/FootballField/scripts.pory"
	closemessage
# 326 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupRunningTest
# 327 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_StartRunningTest
# 328 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_FieldClosed::
# 333 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 334 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 335 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 336 "data/maps/FootballField/scripts.pory"
	closemessage
# 337 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 338 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_EndZone_Text_0:
# 270 "data/maps/FootballField/scripts.pory"
	.string "EndZone Trigger Var 0$"

FootballField_Text_FieldClosed::
# 343 "data/maps/FootballField/scripts.pory"
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this grass.$"

FootballField_Text_GymIntro::
# 347 "data/maps/FootballField/scripts.pory"
	.string "Wait. Whats that? You're here from the\n"
	.string "college? Oh shit! Uhh... Ellohey.... uhh...\l"
	.string "elcomeway... to... uhhh... assclay.. uhhh.\l"
	.string "Oh fuck it! Look, here's the thing. Out\l"
	.string "here we don't speak that fancy\l"
	.string "academic talk we only speak\l"
	.string "championships. If you mention this to\l"
	.string "those stuffy bearded academics we'll\l"
	.string "beat the pulp out of you. Anyway I need\l"
	.string "to win this championship and if you're\l"
	.string "enrolled in Gym class I need you to help\l"
	.string "me.$"

FootballField_Text_NoFollowersAllowed::
# 351 "data/maps/FootballField/scripts.pory"
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
# 355 "data/maps/FootballField/scripts.pory"
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
# 359 "data/maps/FootballField/scripts.pory"
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
# 363 "data/maps/FootballField/scripts.pory"
	.string "Hey what do you think you're doing? You\n"
	.string "just made my boys look like total\l"
	.string "loosers! Get off my field!$"

FootballField_Text_CoachIntro::
# 367 "data/maps/FootballField/scripts.pory"
	.string "We can't have some game changer like\n"
	.string "you running around making us feel bad.\l"
	.string "We got a championship to win!$"

FootballField_Text_CoachLost::
# 371 "data/maps/FootballField/scripts.pory"
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
# 375 "data/maps/FootballField/scripts.pory"
	.string "We don't need your fucking help to win.\n"
	.string "Get out of here kid you passed the\l"
	.string "class.$"

FootballField_Text_CoachComplete::
# 379 "data/maps/FootballField/scripts.pory"
	.string "I told you already, you passed the\n"
	.string "class, now get out of here.$"

FootballField_Text_RunningTestFail::
# 383 "data/maps/FootballField/scripts.pory"
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
