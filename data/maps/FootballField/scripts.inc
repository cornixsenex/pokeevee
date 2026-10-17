FootballField_MapScripts::
# 24 "data/maps/FootballField/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FootballField_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/FootballField/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FootballField_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 41 "data/maps/FootballField/scripts.pory"
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

FootballField_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 36 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, Common_Script_FacePlayerUp
# 37 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 3, Common_Script_FacePlayerUp
	.2byte 0

FootballField_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FootballField_EventScript_StartRunningTest
# 43 "data/maps/FootballField/scripts.pory"
	map_script_2 VAR_TEMP_1, 3, FootballField_EventScript_StartFinishClass
	.2byte 0


FootballField_EventScript_SetupFinishClass::
# 50 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 14, 35
# 51 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 14, 35
# 52 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/FootballField/scripts.pory"
	turnobject 1, DIR_SOUTH
# 54 "data/maps/FootballField/scripts.pory"
	clearflag FLAG_FOOTBALL_FIELD_FINISH
# 55 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


FootballField_EventScript_StartFinishClass::
# 61 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 0
# 63 "data/maps/FootballField/scripts.pory"
	lockall
# 64 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 65 "data/maps/FootballField/scripts.pory"
	waitmovement
# 66 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachIntro
# 67 "data/maps/FootballField/scripts.pory"
	closemessage
# 68 "data/maps/FootballField/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GYM, FootballField_Text_CoachLost
# 69 "data/maps/FootballField/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 70 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachPost
# 71 "data/maps/FootballField/scripts.pory"
	closemessage
# 72 "data/maps/FootballField/scripts.pory"
	releaseall
	end


FootballField_EventScript_SetupRunningTest::
# 79 "data/maps/FootballField/scripts.pory"
	clearflag FLAG_FOOTBALL_FIELD_SETUP
# 82 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 1
# 85 "data/maps/FootballField/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 90 "data/maps/FootballField/scripts.pory"
	setobjectxy 1, 13, 36
# 91 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 1, 13, 36
# 92 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
# 95 "data/maps/FootballField/scripts.pory"
	setobjectxy 7, 10, 9
# 96 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 7, 10, 9
# 97 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_CHASE_PLAYER
# 99 "data/maps/FootballField/scripts.pory"
	setobjectxy 8, 17, 9
# 100 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 8, 17, 9
# 101 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_CHASE_PLAYER
# 103 "data/maps/FootballField/scripts.pory"
	setobjectxy 9, 13, 29
# 104 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 9, 13, 29
# 105 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_CHASE_PLAYER
# 107 "data/maps/FootballField/scripts.pory"
	setobjectxy 10, 8, 25
# 108 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 10, 8, 25
# 109 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_CHASE_PLAYER
# 111 "data/maps/FootballField/scripts.pory"
	removeobject 11
# 112 "data/maps/FootballField/scripts.pory"
	setobjectxy 11, 7, 27
# 113 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 11, 7, 27
# 114 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_CHASE_PLAYER
# 115 "data/maps/FootballField/scripts.pory"
	addobject 11
# 118 "data/maps/FootballField/scripts.pory"
	setobjectxy 2, 17, 26
# 119 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 2, 17, 26
# 120 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_CHASE_PLAYER
# 122 "data/maps/FootballField/scripts.pory"
	setobjectxy 3, 13, 21
# 123 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 3, 13, 21
# 124 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_CHASE_PLAYER
# 126 "data/maps/FootballField/scripts.pory"
	setobjectxy 4, 9, 17
# 127 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 4, 9, 17
# 128 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_CHASE_PLAYER
# 130 "data/maps/FootballField/scripts.pory"
	setobjectxy 5, 17, 17
# 131 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 5, 17, 17
# 132 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_CHASE_PLAYER
# 134 "data/maps/FootballField/scripts.pory"
	setobjectxy 6, 17, 12
# 135 "data/maps/FootballField/scripts.pory"
	setobjectxyperm 6, 17, 12
# 136 "data/maps/FootballField/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_CHASE_PLAYER
# 138 "data/maps/FootballField/scripts.pory"
	turnobject 7, DIR_SOUTH
# 139 "data/maps/FootballField/scripts.pory"
	turnobject 8, DIR_SOUTH
# 140 "data/maps/FootballField/scripts.pory"
	turnobject 9, DIR_SOUTH
# 141 "data/maps/FootballField/scripts.pory"
	turnobject 10, DIR_SOUTH
# 142 "data/maps/FootballField/scripts.pory"
	turnobject 11, DIR_SOUTH
# 144 "data/maps/FootballField/scripts.pory"
	turnobject 2, DIR_SOUTH
# 145 "data/maps/FootballField/scripts.pory"
	turnobject 3, DIR_SOUTH
# 146 "data/maps/FootballField/scripts.pory"
	turnobject 4, DIR_SOUTH
# 147 "data/maps/FootballField/scripts.pory"
	turnobject 5, DIR_SOUTH
# 148 "data/maps/FootballField/scripts.pory"
	turnobject 6, DIR_SOUTH
	end


FootballField_EventScript_StartRunningTest::
# 154 "data/maps/FootballField/scripts.pory"
	lockall
# 155 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_BeginRunningTest
# 156 "data/maps/FootballField/scripts.pory"
	closemessage
# 157 "data/maps/FootballField/scripts.pory"
	setvar VAR_TEMP_1, 2
# 158 "data/maps/FootballField/scripts.pory"
	releaseall
	return


FootballField_EventScript_DoNotLeaveField::
# 163 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 164 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 165 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_DoNotLeaveField
# 166 "data/maps/FootballField/scripts.pory"
	closemessage
# 167 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_FieldTrigger1::
# 172 "data/maps/FootballField/scripts.pory"
	lockall
# 173 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger1_2
# 188 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger1_1:
# 190 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger1_2:
# 174 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 175 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 176 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 177 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 178 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 179 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 180 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger1_5
# 182 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger1_6
# 185 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_5:
# 181 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger1_1

FootballField_EventScript_FieldTrigger1_6:
# 183 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger1_1


FootballField_EventScript_FieldTrigger2::
# 195 "data/maps/FootballField/scripts.pory"
	lockall
# 196 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger2_2
# 211 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger2_1:
# 213 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger2_2:
# 197 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 198 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 199 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 200 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 201 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 202 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 203 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FieldTrigger2_5
# 205 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger2_6
# 208 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_5:
# 204 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FieldTrigger2_1

FootballField_EventScript_FieldTrigger2_6:
# 206 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger2_1


FootballField_EventScript_FieldTrigger3::
# 218 "data/maps/FootballField/scripts.pory"
	lockall
# 219 "data/maps/FootballField/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq FootballField_EventScript_FieldTrigger3_2
# 232 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_DoNotLeaveField
FootballField_EventScript_FieldTrigger3_1:
# 234 "data/maps/FootballField/scripts.pory"
	releaseall
	end

FootballField_EventScript_FieldTrigger3_2:
# 220 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 221 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 222 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 223 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 224 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 225 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 226 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FieldTrigger3_5
# 229 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FootballCoach
	goto FootballField_EventScript_FieldTrigger3_1

FootballField_EventScript_FieldTrigger3_5:
# 227 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FieldTrigger3_1


FootballField_EventScript_EndZoneTrigger::
# 239 "data/maps/FootballField/scripts.pory"
	lockall
# 240 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 241 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 242 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_ClassFinished
# 243 "data/maps/FootballField/scripts.pory"
	closemessage
# 244 "data/maps/FootballField/scripts.pory"
	setflag FLAG_FOOTBALL_FIELD_FINISH
# 245 "data/maps/FootballField/scripts.pory"
	warpsilent MAP_FOOTBALL_FIELD, 14, 36
# 246 "data/maps/FootballField/scripts.pory"
	waitstate
	end


FootballField_EventScript_FootballCoach::
# 251 "data/maps/FootballField/scripts.pory"
	checktrainerflag TRAINER_UNI_GYM
	goto_if 1, FootballField_EventScript_FootballCoach_2
# 253 "data/maps/FootballField/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GYM, FootballField_EventScript_FootballCoach_3
# 256 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_GymClass
FootballField_EventScript_FootballCoach_1:
# 258 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 259 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	end

FootballField_EventScript_FootballCoach_2:
# 252 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_ClassFinished
	goto FootballField_EventScript_FootballCoach_1

FootballField_EventScript_FootballCoach_3:
# 254 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_FieldClosed
	goto FootballField_EventScript_FootballCoach_1


FootballField_EventScript_ClassFinished::
# 264 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_CoachComplete
# 265 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 266 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_GymClass::
# 272 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 273 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 274 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 275 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_GymIntro
# 276 "data/maps/FootballField/scripts.pory"
	closemessage
# 277 "data/maps/FootballField/scripts.pory"
	delay 30
# 279 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_CollisionYoungster::
# 290 "data/maps/FootballField/scripts.pory"
	lockall
# 291 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 292 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 293 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_RunningTestFail
# 294 "data/maps/FootballField/scripts.pory"
	closemessage
# 295 "data/maps/FootballField/scripts.pory"
	call FootballField_EventScript_TriggerRunningTest
	return


FootballField_EventScript_FieldClosed::
# 299 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 300 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 301 "data/maps/FootballField/scripts.pory"
	msgbox FootballField_Text_FieldClosed
# 302 "data/maps/FootballField/scripts.pory"
	closemessage
# 303 "data/maps/FootballField/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 304 "data/maps/FootballField/scripts.pory"
	waitmovement 0
# 305 "data/maps/FootballField/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 306 "data/maps/FootballField/scripts.pory"
	waitmovement 0
	return


FootballField_EventScript_TriggerRunningTest::
# 311 "data/maps/FootballField/scripts.pory"
	setflag FLAG_FOOTBALL_FIELD_SETUP
# 312 "data/maps/FootballField/scripts.pory"
	warpsilent MAP_FOOTBALL_FIELD, 13, 33
# 313 "data/maps/FootballField/scripts.pory"
	waitstate
	end


FootballField_Text_FieldClosed::
# 318 "data/maps/FootballField/scripts.pory"
	.string "Hey you! Field's closed! We only want\n"
	.string "student atheletes touching this grass.$"

FootballField_Text_GymIntro::
# 322 "data/maps/FootballField/scripts.pory"
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
# 326 "data/maps/FootballField/scripts.pory"
	.string "Hey! We don't let those filthy animals\n"
	.string "on our grass. Your Pokemon, it has to\l"
	.string "wait outside we don't want it here.$"

FootballField_Text_BeginRunningTest::
# 330 "data/maps/FootballField/scripts.pory"
	.string "First things first let's see if you can\n"
	.string "run. Try to make it to the other side of\l"
	.string "the field without letting any of my\l"
	.string "boys hit you first.$"

FootballField_Text_DoNotLeaveField::
# 334 "data/maps/FootballField/scripts.pory"
	.string "Hey! Where do you think you're going?\n"
	.string "Get your lazy ass back on the field and\l"
	.string "finish the drill!$"

FootballField_Text_ClassFinished::
# 338 "data/maps/FootballField/scripts.pory"
	.string "Hey what do you think you're doing? You\n"
	.string "just made my boys look like total\l"
	.string "loosers! Get off my field!$"

FootballField_Text_CoachIntro::
# 342 "data/maps/FootballField/scripts.pory"
	.string "We can't have some game changer like\n"
	.string "you running around making us look bad.\l"
	.string "We got a championship to win!$"

FootballField_Text_CoachLost::
# 346 "data/maps/FootballField/scripts.pory"
	.string "I think I broke something...$"

FootballField_Text_CoachPost::
# 350 "data/maps/FootballField/scripts.pory"
	.string "We don't need your fucking help to win.\n"
	.string "Get out of here kid you passed the\l"
	.string "class.$"

FootballField_Text_CoachComplete::
# 354 "data/maps/FootballField/scripts.pory"
	.string "I told you already, you passed the\n"
	.string "class, now get out of here.$"

FootballField_Text_RunningTestFail::
# 358 "data/maps/FootballField/scripts.pory"
	.string "Hey! One of my boys got ya! You're too\n"
	.string "slow out there do it again!$"
