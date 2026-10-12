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
	fadescreenswapbuffers FADE_TO_BLACK
# 46 "data/maps/FootballField/scripts.pory"
	setobjectxy LOCALID_PLAYER, 14, 36
# 47 "data/maps/FootballField/scripts.pory"
	setobjectxyperm LOCALID_PLAYER, 14, 36
# 48 "data/maps/FootballField/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
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
	msgbox FootballField_EventScript_SetupRunningTest_Text_0
# 95 "data/maps/FootballField/scripts.pory"
	closemessage
# 96 "data/maps/FootballField/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 99 "data/maps/FootballField/scripts.pory"
	setobjectxy LOCALID_PLAYER, 13, 33
# 101 "data/maps/FootballField/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 104 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 13, 7
# 105 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 13, 7
# 106 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
# 109 "data/maps/FootballField/scripts.pory"
	setobjectxy 7, 10, 9
# 110 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 7, 10, 9
# 111 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
# 113 "data/maps/FootballField/scripts.pory"
	setobjectxy 8, 17, 9
# 114 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 8, 17, 9
# 115 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
# 117 "data/maps/FootballField/scripts.pory"
	setobjectxy 9, 13, 29
# 118 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 9, 13, 29
# 119 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
# 121 "data/maps/FootballField/scripts.pory"
	setobjectxy 10, 8, 25
# 122 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 10, 8, 25
# 123 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
# 125 "data/maps/FootballField/scripts.pory"
	removeobject 11
# 126 "data/maps/FootballField/scripts.pory"
	setobjectxy 11, 7, 27
# 127 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 11, 7, 27
# 128 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
# 129 "data/maps/FootballField/scripts.pory"
	addobject 11
# 132 "data/maps/FootballField/scripts.pory"
	setobjectxy 2, 17, 26
# 133 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 2, 17, 26
# 134 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
# 136 "data/maps/FootballField/scripts.pory"
	setobjectxy 3, 13, 21
# 137 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 3, 13, 21
# 138 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
# 140 "data/maps/FootballField/scripts.pory"
	setobjectxy 4, 9, 17
# 141 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 4, 9, 17
# 142 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
# 144 "data/maps/FootballField/scripts.pory"
	setobjectxy 5, 17, 17
# 145 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 5, 17, 17
# 146 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
# 148 "data/maps/FootballField/scripts.pory"
	setobjectxy 6, 17, 12
# 149 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 6, 17, 12
# 150 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
# 152 "data/maps/FootballField/scripts.pory"
	turnobject 7, DIR_SOUTH
# 153 "data/maps/FootballField/scripts.pory"
	turnobject 8, DIR_SOUTH
# 154 "data/maps/FootballField/scripts.pory"
	turnobject 9, DIR_SOUTH
# 155 "data/maps/FootballField/scripts.pory"
	turnobject 10, DIR_SOUTH
# 156 "data/maps/FootballField/scripts.pory"
	turnobject 11, DIR_SOUTH
# 158 "data/maps/FootballField/scripts.pory"
	turnobject 2, DIR_SOUTH
# 159 "data/maps/FootballField/scripts.pory"
	turnobject 3, DIR_SOUTH
# 160 "data/maps/FootballField/scripts.pory"
	turnobject 4, DIR_SOUTH
# 161 "data/maps/FootballField/scripts.pory"
	turnobject 5, DIR_SOUTH
# 162 "data/maps/FootballField/scripts.pory"
	turnobject 6, DIR_SOUTH
# 166 "data/maps/FootballField/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 168 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_EventScript_SetupRunningTest_Text_1
# 169 "data/maps/FootballField/scripts.pory"
	closemessage
	return


FootballField_EventScript_StartRunningTest::
# 174 "data/maps/FootballField/scripts.pory"
	lockall
# 175 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_BeginRunningTest
# 176 "data/maps/FootballField/scripts.pory"
	closemessage
# 177 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 1
# 178 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
# 183 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 184 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 185 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_DoNotLeaveField
# 186 "data/maps/FootballField/scripts.pory"
	closemessage
# 187 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 188 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_DoNotLeaveField_2
	return

FootballField_EventScript_DoNotLeaveField_2:
# 189 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_FieldTrigger1::
# 195 "data/maps/FootballField/scripts.pory"
	lockall
# 196 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
# 211 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
# 213 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
# 197 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 198 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 199 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 200 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 201 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 202 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 203 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
# 205 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
# 208 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
# 204 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
# 206 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
# 218 "data/maps/FootballField/scripts.pory"
	lockall
# 219 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
# 234 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
# 236 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
# 220 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 221 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 222 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 223 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 224 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 225 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 226 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
# 228 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
# 231 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
# 227 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
# 229 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
# 241 "data/maps/FootballField/scripts.pory"
	lockall
# 242 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
# 255 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
# 257 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
# 243 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 244 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 245 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 246 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 247 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 248 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 249 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
# 252 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
# 250 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
# 262 "data/maps/FootballField/scripts.pory"
	lockall
# 263 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 264 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 265 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_EndZone
# 266 "data/maps/FootballField/scripts.pory"
	releaseall
	end


FootballField_EventScript_EndZone::
# 271 "data/maps/FootballField/scripts.pory"
	switch VAR_TEMP_1
# 273 "data/maps/FootballField/scripts.pory"
	case 0, FootballField_EventScript_EndZone_2
# 276 "data/maps/FootballField/scripts.pory"
	case 1, FootballField_EventScript_EndZone_3
	return

FootballField_EventScript_EndZone_2:
# 274 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_EventScript_EndZone_Text_0
# 275 "data/maps/FootballField/scripts.pory"
	closemessage
	return

FootballField_EventScript_EndZone_3:
# 277 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 2
# 278 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_CatchingTest
	return


FootballField_EventScript_FootballCoach::
# 283 "data/maps/FootballField/scripts.pory"
	lockall
# 284 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
# 286 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
# 289 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
# 291 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 292 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 293 "data/maps/FootballField/scripts.pory"
	release
	end

FootballField_EventScript_FootballCoach_2:
# 285 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
# 287 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
# 298 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachComplete
# 299 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 300 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_GymClass::
# 306 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 307 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 308 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 309 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_GymIntro
# 310 "data/maps/FootballField/scripts.pory"
	closemessage
# 311 "data/maps/FootballField/scripts.pory"
	delay 30
# 313 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_RunningTest
	return


FootballField_EventScript_CollisionYoungster::
# 324 "data/maps/FootballField/scripts.pory"
	lockall
# 325 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 326 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 327 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_RunningTestFail
# 328 "data/maps/FootballField/scripts.pory"
	closemessage
# 329 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupRunningTest
# 330 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_StartRunningTest
# 331 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_FieldClosed::
# 336 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 337 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 338 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 339 "data/maps/FootballField/scripts.pory"
	closemessage
# 340 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 341 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_SetupRunningTest_Text_0:
# 94 "data/maps/FootballField/scripts.pory"
	.string "TEST$"

FootballField_EventScript_SetupRunningTest_Text_1:
# 168 "data/maps/FootballField/scripts.pory"
	.string "TEST2$"

FootballField_EventScript_EndZone_Text_0:
# 274 "data/maps/FootballField/scripts.pory"
	.string "EndZone Trigger Var 0$"

FootballField_Text_FieldClosed::
# 346 "data/maps/FootballField/scripts.pory"
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this grass.$"

FootballField_Text_GymIntro::
# 350 "data/maps/FootballField/scripts.pory"
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
# 354 "data/maps/FootballField/scripts.pory"
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
# 358 "data/maps/FootballField/scripts.pory"
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
# 362 "data/maps/FootballField/scripts.pory"
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
# 366 "data/maps/FootballField/scripts.pory"
	.string "Hey what do you think you're doing? You\n"
	.string "just made my boys look like total\l"
	.string "loosers! Get off my field!$"

FootballField_Text_CoachIntro::
# 370 "data/maps/FootballField/scripts.pory"
	.string "We can't have some game changer like\n"
	.string "you running around making us feel bad.\l"
	.string "We got a championship to win!$"

FootballField_Text_CoachLost::
# 374 "data/maps/FootballField/scripts.pory"
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
# 378 "data/maps/FootballField/scripts.pory"
	.string "We don't need your fucking help to win.\n"
	.string "Get out of here kid you passed the\l"
	.string "class.$"

FootballField_Text_CoachComplete::
# 382 "data/maps/FootballField/scripts.pory"
	.string "I told you already, you passed the\n"
	.string "class, now get out of here.$"

FootballField_Text_RunningTestFail::
# 386 "data/maps/FootballField/scripts.pory"
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
