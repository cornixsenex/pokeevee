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
	fadescreenswapbuffers 1
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
	fadescreenswapbuffers 0
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
# 79 "data/maps/FootballField/scripts.pory"
	waitstate
	end


FootballField_EventScript_CatchingTest::
# 87 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FinishClass
	return


FootballField_EventScript_SetupRunningTest::
# 94 "data/maps/FootballField/scripts.pory"
	fadescreenswapbuffers 1
# 96 "data/maps/FootballField/scripts.pory"
	lockall
# 98 "data/maps/FootballField/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 33
# 99 "data/maps/FootballField/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 13, 33
# 100 "data/maps/FootballField/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 103 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 13, 7
# 104 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 13, 7
# 105 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
# 108 "data/maps/FootballField/scripts.pory"
	setobjectxy 7, 10, 9
# 109 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 7, 10, 9
# 110 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
# 112 "data/maps/FootballField/scripts.pory"
	setobjectxy 8, 17, 9
# 113 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 8, 17, 9
# 114 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
# 116 "data/maps/FootballField/scripts.pory"
	setobjectxy 9, 13, 29
# 117 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 9, 13, 29
# 118 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
# 120 "data/maps/FootballField/scripts.pory"
	setobjectxy 10, 8, 25
# 121 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 10, 8, 25
# 122 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
# 124 "data/maps/FootballField/scripts.pory"
	removeobject 11
# 125 "data/maps/FootballField/scripts.pory"
	setobjectxy 11, 7, 27
# 126 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 11, 7, 27
# 127 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
# 128 "data/maps/FootballField/scripts.pory"
	addobject 11
# 131 "data/maps/FootballField/scripts.pory"
	setobjectxy 2, 17, 26
# 132 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 2, 17, 26
# 133 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
# 135 "data/maps/FootballField/scripts.pory"
	setobjectxy 3, 13, 21
# 136 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 3, 13, 21
# 137 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
# 139 "data/maps/FootballField/scripts.pory"
	setobjectxy 4, 9, 17
# 140 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 4, 9, 17
# 141 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
# 143 "data/maps/FootballField/scripts.pory"
	setobjectxy 5, 17, 17
# 144 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 5, 17, 17
# 145 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
# 147 "data/maps/FootballField/scripts.pory"
	setobjectxy 6, 17, 12
# 148 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 6, 17, 12
# 149 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
# 151 "data/maps/FootballField/scripts.pory"
	turnobject 7, DIR_SOUTH
# 152 "data/maps/FootballField/scripts.pory"
	turnobject 8, DIR_SOUTH
# 153 "data/maps/FootballField/scripts.pory"
	turnobject 9, DIR_SOUTH
# 154 "data/maps/FootballField/scripts.pory"
	turnobject 10, DIR_SOUTH
# 155 "data/maps/FootballField/scripts.pory"
	turnobject 11, DIR_SOUTH
# 157 "data/maps/FootballField/scripts.pory"
	turnobject 2, DIR_SOUTH
# 158 "data/maps/FootballField/scripts.pory"
	turnobject 3, DIR_SOUTH
# 159 "data/maps/FootballField/scripts.pory"
	turnobject 4, DIR_SOUTH
# 160 "data/maps/FootballField/scripts.pory"
	turnobject 5, DIR_SOUTH
# 161 "data/maps/FootballField/scripts.pory"
	turnobject 6, DIR_SOUTH
# 164 "data/maps/FootballField/scripts.pory"
	special ResetCamera
# 165 "data/maps/FootballField/scripts.pory"
	fadescreenswapbuffers 0
	return


FootballField_EventScript_StartRunningTest::
# 171 "data/maps/FootballField/scripts.pory"
	lockall
# 172 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_BeginRunningTest
# 173 "data/maps/FootballField/scripts.pory"
	closemessage
# 174 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 1
# 175 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
# 180 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 181 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 182 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_DoNotLeaveField
# 183 "data/maps/FootballField/scripts.pory"
	closemessage
# 184 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 185 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_DoNotLeaveField_2
	return

FootballField_EventScript_DoNotLeaveField_2:
# 186 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_FieldTrigger1::
# 192 "data/maps/FootballField/scripts.pory"
	lockall
# 193 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
# 208 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
# 210 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
# 194 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 196 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 197 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 198 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 199 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 200 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
# 202 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
# 205 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
# 201 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
# 203 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
# 215 "data/maps/FootballField/scripts.pory"
	lockall
# 216 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
# 231 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
# 233 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
# 217 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 218 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 219 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 220 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 221 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 222 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 223 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
# 225 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
# 228 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
# 224 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
# 226 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
# 238 "data/maps/FootballField/scripts.pory"
	lockall
# 239 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
# 252 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
# 254 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
# 240 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 241 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 242 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 243 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 244 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 245 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 246 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
# 249 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
# 247 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
# 259 "data/maps/FootballField/scripts.pory"
	lockall
# 260 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 261 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 262 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_EndZone
# 263 "data/maps/FootballField/scripts.pory"
	releaseall
	end


FootballField_EventScript_EndZone::
# 268 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 270 "data/maps/FootballField/scripts.pory"
	case 0, FootballField_EventScript_EndZone_2
# 273 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_EndZone_3
	return

FootballField_EventScript_EndZone_2:
# 271 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_EventScript_EndZone_Text_0
# 272 "data/maps/FootballField/scripts.pory"
	closemessage
	return

FootballField_EventScript_EndZone_3:
# 274 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 2
# 275 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_CatchingTest
	return


FootballField_EventScript_FootballCoach::
# 280 "data/maps/FootballField/scripts.pory"
	lockall
# 281 "data/maps/FootballField/scripts.pory"
	faceplayer
# 282 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
# 284 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
# 287 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
# 289 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 290 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 291 "data/maps/FootballField/scripts.pory"
	release
	end

FootballField_EventScript_FootballCoach_2:
# 283 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
# 285 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
# 296 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachComplete
# 297 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 298 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_GymClass::
# 304 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 305 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 306 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 307 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_GymIntro
# 308 "data/maps/FootballField/scripts.pory"
	closemessage
# 309 "data/maps/FootballField/scripts.pory"
	delay 30
# 311 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_CollisionYoungster::
# 322 "data/maps/FootballField/scripts.pory"
	lockall
# 323 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 324 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 325 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_RunningTestFail
# 326 "data/maps/FootballField/scripts.pory"
	closemessage
# 327 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupRunningTest
# 328 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_StartRunningTest
# 329 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_FieldClosed::
# 334 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 335 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 336 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 337 "data/maps/FootballField/scripts.pory"
	closemessage
# 338 "data/maps/FootballField/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 339 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_EndZone_Text_0:
# 271 "data/maps/FootballField/scripts.pory"
	.string "EndZone Trigger Var 0$"

FootballField_Text_FieldClosed::
# 344 "data/maps/FootballField/scripts.pory"
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this grass.$"

FootballField_Text_GymIntro::
# 348 "data/maps/FootballField/scripts.pory"
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
# 352 "data/maps/FootballField/scripts.pory"
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
# 356 "data/maps/FootballField/scripts.pory"
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
# 360 "data/maps/FootballField/scripts.pory"
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
# 364 "data/maps/FootballField/scripts.pory"
	.string "Hey what do you think you're doing? You\n"
	.string "just made my boys look like total\l"
	.string "loosers! Get off my field!$"

FootballField_Text_CoachIntro::
# 368 "data/maps/FootballField/scripts.pory"
	.string "We can't have some game changer like\n"
	.string "you running around making us feel bad.\l"
	.string "We got a championship to win!$"

FootballField_Text_CoachLost::
# 372 "data/maps/FootballField/scripts.pory"
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
# 376 "data/maps/FootballField/scripts.pory"
	.string "We don't need your fucking help to win.\n"
	.string "Get out of here kid you passed the\l"
	.string "class.$"

FootballField_Text_CoachComplete::
# 380 "data/maps/FootballField/scripts.pory"
	.string "I told you already, you passed the\n"
	.string "class, now get out of here.$"

FootballField_Text_RunningTestFail::
# 384 "data/maps/FootballField/scripts.pory"
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
