FootballField_MapScripts::
# 24 "data/maps/FootballField/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/FootballField/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FootballField_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 25 "data/maps/FootballField/scripts.pory"
	goto_if_set FLAG_FOOTBALL_FIELD_SETUP, FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/FootballField/scripts.pory"
	goto_if_set FLAG_FOOTBALL_FIELD_FINISH, FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupRunningTest
	goto FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 30 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_SetupFinishClass
	return

FootballField_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FootballField_EventScript_StartRunningTest
# 37 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 3, FootballField_EventScript_StartFinishClass
	.2byte 0


FootballField_EventScript_SetupFinishClass::
# 43 "data/maps/FootballField/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 45 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 14, 35
# 46 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 14, 35
# 47 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 48 "data/maps/FootballField/scripts.pory"
	turnobject 1, DIR_SOUTH
# 49 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
# 50 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
# 55 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 58 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 59 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/FootballField/scripts.pory"
	clearflag FLAG_FOOTBALL_FIELD_FINISH
# 62 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


FootballField_EventScript_StartFinishClass::
# 67 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachIntro
# 68 "data/maps/FootballField/scripts.pory"
	closemessage
# 69 "data/maps/FootballField/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GYM, FootballField_Text_CoachLost
# 70 "data/maps/FootballField/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 71 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachPost
# 72 "data/maps/FootballField/scripts.pory"
	closemessage
	end


FootballField_EventScript_SetupRunningTest::
# 79 "data/maps/FootballField/scripts.pory"
	clearflag FLAG_FOOTBALL_FIELD_SETUP
# 82 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 1
# 85 "data/maps/FootballField/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 88 "data/maps/FootballField/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 93 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 13, 7
# 94 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 13, 7
# 95 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_CHASE_PLAYER
# 98 "data/maps/FootballField/scripts.pory"
	setobjectxy 7, 10, 9
# 99 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 7, 10, 9
# 100 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
# 102 "data/maps/FootballField/scripts.pory"
	setobjectxy 8, 17, 9
# 103 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 8, 17, 9
# 104 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
# 106 "data/maps/FootballField/scripts.pory"
	setobjectxy 9, 13, 29
# 107 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 9, 13, 29
# 108 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
# 110 "data/maps/FootballField/scripts.pory"
	setobjectxy 10, 8, 25
# 111 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 10, 8, 25
# 112 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
# 114 "data/maps/FootballField/scripts.pory"
	removeobject 11
# 115 "data/maps/FootballField/scripts.pory"
	setobjectxy 11, 7, 27
# 116 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 11, 7, 27
# 117 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
# 118 "data/maps/FootballField/scripts.pory"
	addobject 11
# 121 "data/maps/FootballField/scripts.pory"
	setobjectxy 2, 17, 26
# 122 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 2, 17, 26
# 123 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
# 125 "data/maps/FootballField/scripts.pory"
	setobjectxy 3, 13, 21
# 126 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 3, 13, 21
# 127 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
# 129 "data/maps/FootballField/scripts.pory"
	setobjectxy 4, 9, 17
# 130 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 4, 9, 17
# 131 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
# 133 "data/maps/FootballField/scripts.pory"
	setobjectxy 5, 17, 17
# 134 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 5, 17, 17
# 135 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
# 137 "data/maps/FootballField/scripts.pory"
	setobjectxy 6, 17, 12
# 138 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 6, 17, 12
# 139 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
# 141 "data/maps/FootballField/scripts.pory"
	turnobject 7, DIR_SOUTH
# 142 "data/maps/FootballField/scripts.pory"
	turnobject 8, DIR_SOUTH
# 143 "data/maps/FootballField/scripts.pory"
	turnobject 9, DIR_SOUTH
# 144 "data/maps/FootballField/scripts.pory"
	turnobject 10, DIR_SOUTH
# 145 "data/maps/FootballField/scripts.pory"
	turnobject 11, DIR_SOUTH
# 147 "data/maps/FootballField/scripts.pory"
	turnobject 2, DIR_SOUTH
# 148 "data/maps/FootballField/scripts.pory"
	turnobject 3, DIR_SOUTH
# 149 "data/maps/FootballField/scripts.pory"
	turnobject 4, DIR_SOUTH
# 150 "data/maps/FootballField/scripts.pory"
	turnobject 5, DIR_SOUTH
# 151 "data/maps/FootballField/scripts.pory"
	turnobject 6, DIR_SOUTH
	end


FootballField_EventScript_StartRunningTest::
# 157 "data/maps/FootballField/scripts.pory"
	lockall
# 158 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_BeginRunningTest
# 159 "data/maps/FootballField/scripts.pory"
	closemessage
# 160 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 2
# 161 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
# 166 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 167 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 168 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_DoNotLeaveField
# 169 "data/maps/FootballField/scripts.pory"
	closemessage
# 170 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_FieldTrigger1::
# 175 "data/maps/FootballField/scripts.pory"
	lockall
# 176 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
# 191 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
# 193 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
# 177 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 178 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 179 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 180 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 181 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 182 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 183 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
# 185 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
# 188 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
# 184 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
# 186 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
# 198 "data/maps/FootballField/scripts.pory"
	lockall
# 199 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
# 214 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
# 216 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
# 200 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 201 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 202 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 203 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 204 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 205 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 206 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
# 208 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
# 211 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
# 207 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
# 209 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
# 221 "data/maps/FootballField/scripts.pory"
	lockall
# 222 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
# 235 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
# 237 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
# 223 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 224 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 225 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 226 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 227 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 228 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 229 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
# 232 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
# 230 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
# 242 "data/maps/FootballField/scripts.pory"
	lockall
# 243 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 244 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 245 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_ClassFinished
# 246 "data/maps/FootballField/scripts.pory"
	closemessage
# 247 "data/maps/FootballField/scripts.pory"
	setflag FLAG_FOOTBALL_FIELD_FINISH
# 248 "data/maps/FootballField/scripts.pory"
	warpsilent MAP_FOOTBALL_FIELD, 14, 36
# 249 "data/maps/FootballField/scripts.pory"
	waitstate
	end


FootballField_EventScript_FootballCoach::
# 254 "data/maps/FootballField/scripts.pory"
	lockall
# 255 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
# 257 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
# 260 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
# 262 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 263 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 264 "data/maps/FootballField/scripts.pory"
	release
	end

FootballField_EventScript_FootballCoach_2:
# 256 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
# 258 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
# 269 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachComplete
# 270 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 271 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_GymClass::
# 277 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 278 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 279 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 280 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_GymIntro
# 281 "data/maps/FootballField/scripts.pory"
	closemessage
# 282 "data/maps/FootballField/scripts.pory"
	delay 30
# 284 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_CollisionYoungster::
# 295 "data/maps/FootballField/scripts.pory"
	lockall
# 296 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 297 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 298 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_RunningTestFail
# 299 "data/maps/FootballField/scripts.pory"
	closemessage
# 300 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_FieldClosed::
# 304 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 305 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 306 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 307 "data/maps/FootballField/scripts.pory"
	closemessage
# 308 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 309 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_TriggerRunningTest::
# 314 "data/maps/FootballField/scripts.pory"
	setflag FLAG_FOOTBALL_FIELD_SETUP
# 315 "data/maps/FootballField/scripts.pory"
	warpsilent MAP_FOOTBALL_FIELD, 13, 33
# 316 "data/maps/FootballField/scripts.pory"
	waitstate
	end


FootballField_Text_FieldClosed::
# 321 "data/maps/FootballField/scripts.pory"
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this grass.$"

FootballField_Text_GymIntro::
# 325 "data/maps/FootballField/scripts.pory"
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
# 329 "data/maps/FootballField/scripts.pory"
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
# 333 "data/maps/FootballField/scripts.pory"
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
# 337 "data/maps/FootballField/scripts.pory"
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
# 341 "data/maps/FootballField/scripts.pory"
	.string "Hey what do you think you're doing? You\n"
	.string "just made my boys look like total\l"
	.string "loosers! Get off my field!$"

FootballField_Text_CoachIntro::
# 345 "data/maps/FootballField/scripts.pory"
	.string "We can't have some game changer like\n"
	.string "you running around making us feel bad.\l"
	.string "We got a championship to win!$"

FootballField_Text_CoachLost::
# 349 "data/maps/FootballField/scripts.pory"
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
# 353 "data/maps/FootballField/scripts.pory"
	.string "We don't need your fucking help to win.\n"
	.string "Get out of here kid you passed the\l"
	.string "class.$"

FootballField_Text_CoachComplete::
# 357 "data/maps/FootballField/scripts.pory"
	.string "I told you already, you passed the\n"
	.string "class, now get out of here.$"

FootballField_Text_RunningTestFail::
# 361 "data/maps/FootballField/scripts.pory"
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
