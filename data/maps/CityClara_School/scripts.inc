CityClara_School_MapScripts::
	.byte 0


CityClara_School_EventScript_Karlye::
# 5 "data//maps/CityClara_School/scripts.pory"
	lock
# 6 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 7 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_KARLYE
	goto_if 0, CityClara_School_EventScript_Karlye_2
CityClara_School_EventScript_Karlye_1:
# 11 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost
# 12 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Karlye_2:
# 8 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 9 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_KARLYE, CityClara_School_Text_KarlyeIntro, CityClara_School_Text_KarlyeLost
	goto CityClara_School_EventScript_Karlye_1


CityClara_School_EventScript_Ricky::
# 16 "data//maps/CityClara_School/scripts.pory"
	lock
# 17 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 18 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_RICKY
	goto_if 0, CityClara_School_EventScript_Ricky_2
CityClara_School_EventScript_Ricky_1:
# 22 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyPost
# 23 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Ricky_2:
# 19 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 20 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_RICKY, CityClara_School_Text_RickyIntro, CityClara_School_Text_RickyLost
	goto CityClara_School_EventScript_Ricky_1


CityClara_School_EventScript_Peter::
# 27 "data//maps/CityClara_School/scripts.pory"
	lock
# 28 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 29 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_PETER
	goto_if 0, CityClara_School_EventScript_Peter_2
CityClara_School_EventScript_Peter_1:
# 33 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterPost
# 34 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Peter_2:
# 30 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 31 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PETER, CityClara_School_Text_PeterIntro, CityClara_School_Text_PeterLost
	goto CityClara_School_EventScript_Peter_1


CityClara_School_EventScript_Danny::
# 38 "data//maps/CityClara_School/scripts.pory"
	lock
# 39 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 40 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_DANNY
	goto_if 0, CityClara_School_EventScript_Danny_2
CityClara_School_EventScript_Danny_1:
# 44 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyPost
# 45 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Danny_2:
# 41 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 42 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_DANNY, CityClara_School_Text_DannyIntro, CityClara_School_Text_DannyLost
	goto CityClara_School_EventScript_Danny_1


CityClara_School_EventScript_Ethan::
# 49 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_ETHAN, CityClara_School_Text_EthanIntro, CityClara_School_Text_EthanLost
# 50 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanPost
# 51 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Sagis::
# 55 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_SAGIS, CityClara_School_Text_SagisIntro, CityClara_School_Text_SagisLost
# 56 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisPost
# 57 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Emily::
# 61 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_EMILY, CityClara_School_Text_EmilyIntro, CityClara_School_Text_EmilyLost
# 62 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EmilyPost
# 63 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Mr_Glasman::
# 67 "data//maps/CityClara_School/scripts.pory"
	lock
# 68 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 69 "data//maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_lt CityClara_School_EventScript_Mr_Glasman_2
# 72 "data//maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_eq CityClara_School_EventScript_Mr_Glasman_3
# 76 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPost
CityClara_School_EventScript_Mr_Glasman_1:
# 78 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Mr_Glasman_2:
# 70 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_Glasman1
# 71 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mr_Glasman_1

CityClara_School_EventScript_Mr_Glasman_3:
# 73 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 74 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_MR_GLASMAN, CityClara_School_Text_Mr_GlasmanIntro, CityClara_School_Text_Mr_GlasmanLost
	goto CityClara_School_EventScript_Mr_Glasman_1


CityClara_School_EventScript_Peeves::
# 82 "data//maps/CityClara_School/scripts.pory"
	lock
# 83 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 84 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesPost
# 85 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 86 "data//maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_IncrementSchoolVar::
# 91 "data//maps/CityClara_School/scripts.pory"
	switch VAR_CITYCLARA_SCHOOL_STATE
# 92 "data//maps/CityClara_School/scripts.pory"
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
# 94 "data//maps/CityClara_School/scripts.pory"
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
# 96 "data//maps/CityClara_School/scripts.pory"
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
# 98 "data//maps/CityClara_School/scripts.pory"
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
# 100 "data//maps/CityClara_School/scripts.pory"
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
# 102 "data//maps/CityClara_School/scripts.pory"
	case 5, CityClara_School_EventScript_IncrementSchoolVar_7
# 104 "data//maps/CityClara_School/scripts.pory"
	case 6, CityClara_School_EventScript_IncrementSchoolVar_8
# 106 "data//maps/CityClara_School/scripts.pory"
	case 7, CityClara_School_EventScript_IncrementSchoolVar_9
	return

CityClara_School_EventScript_IncrementSchoolVar_2:
# 93 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 1
	return

CityClara_School_EventScript_IncrementSchoolVar_3:
# 95 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 2
	return

CityClara_School_EventScript_IncrementSchoolVar_4:
# 97 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 3
	return

CityClara_School_EventScript_IncrementSchoolVar_5:
# 99 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 4
	return

CityClara_School_EventScript_IncrementSchoolVar_6:
# 101 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 5
	return

CityClara_School_EventScript_IncrementSchoolVar_7:
# 103 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 6
	return

CityClara_School_EventScript_IncrementSchoolVar_8:
# 105 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 7
	return

CityClara_School_EventScript_IncrementSchoolVar_9:
# 107 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 8
	return


CityClara_School_EventScript_Mrs_Sully::
# 112 "data//maps/CityClara_School/scripts.pory"
	lockall
# 113 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 114 "data//maps/CityClara_School/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CUT, CityClara_School_EventScript_Mrs_Sully_2
CityClara_School_EventScript_Mrs_Sully_1:
# 121 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost
# 122 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 123 "data//maps/CityClara_School/scripts.pory"
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
# 115 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 116 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyIntroA
# 117 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 118 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
# 119 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_GiveCut
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveCut::
# 128 "data//maps/CityClara_School/scripts.pory"
	lock
# 129 "data//maps/CityClara_School/scripts.pory"
	setflag FLAG_BADGE01_GET
# 130 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyDefeat
# 131 "data//maps/CityClara_School/scripts.pory"
	giveitem ITEM_HM01
# 132 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_ExplainCut
# 133 "data//maps/CityClara_School/scripts.pory"
	setflag FLAG_RECEIVED_CUT
# 134 "data//maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_GradeTrigger1::
# 139 "data//maps/CityClara_School/scripts.pory"
	lock
# 140 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 141 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 142 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 143 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 144 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 145 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1
# 146 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 147 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 148 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 149 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1Return
# 150 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 151 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_GradeTrigger2::
# 155 "data//maps/CityClara_School/scripts.pory"
	lock
# 156 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 157 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 158 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 159 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 160 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 161 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2
# 162 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 163 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 164 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 165 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2Return
# 166 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 167 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight1::
# 171 "data//maps/CityClara_School/scripts.pory"
	lock
# 172 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 173 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 174 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 177 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 178 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight2::
# 182 "data//maps/CityClara_School/scripts.pory"
	lock
# 183 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 184 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 185 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 188 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_Peeves_WalkDown
# 189 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 190 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 191 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_Tyler::
# 195 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_TylerIntro, CityClara_School_Text_TylerLost, Route104_Text_GinaNotEnoughMons
# 196 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerPost
# 197 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Gabe::
# 201 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_GabeIntro, CityClara_School_Text_GabeLost, Route104_Text_GinaNotEnoughMons
# 202 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_GabePost
# 203 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


# 206 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PlayerGrade:
# 207 "data//maps/CityClara_School/scripts.pory"
	walk_left
# 208 "data//maps/CityClara_School/scripts.pory"
	face_right
	step_end

# 211 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1:
# 212 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 213 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 216 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2:
# 217 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 217 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 218 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 221 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1Return:
# 222 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 223 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 226 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2Return:
# 227 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 227 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 228 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 230 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceUp:
# 231 "data//maps/CityClara_School/scripts.pory"
	face_up
	step_end

# 234 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceDown:
# 235 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 238 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_WalkDown:
# 239 "data//maps/CityClara_School/scripts.pory"
	walk_down
	step_end

CityClara_School_Text_KarlyeIntro::
# 242 "data//maps/CityClara_School/scripts.pory"
	.string "Watch out I'm going to give you coodies!$"

CityClara_School_Text_KarlyeLost::
# 246 "data//maps/CityClara_School/scripts.pory"
	.string "Looks like you just gave your coodies\n"
	.string "to me.$"

CityClara_School_Text_KarlyePost::
# 250 "data//maps/CityClara_School/scripts.pory"
	.string "Sometimes I hang out after school\n"
	.string "behind the school and sell my cudies to\l"
	.string "the boys.$"

CityClara_School_Text_RickyIntro::
# 254 "data//maps/CityClara_School/scripts.pory"
	.string "Will you vote for me as class president?$"

CityClara_School_Text_RickyLost::
# 258 "data//maps/CityClara_School/scripts.pory"
	.string "I'm the most popular kid at this school!$"

CityClara_School_Text_RickyPost::
# 262 "data//maps/CityClara_School/scripts.pory"
	.string "Everyone's coming over to my house\n"
	.string "today except for you. You're not\l"
	.string "allowed.$"

CityClara_School_Text_PeterIntro::
# 266 "data//maps/CityClara_School/scripts.pory"
	.string "It's disgusting they let the common\n"
	.string "trash mingle with the elite at public\l"
	.string "school.$"

CityClara_School_Text_PeterLost::
# 270 "data//maps/CityClara_School/scripts.pory"
	.string "Unhand me you vulgar barbarian!$"

CityClara_School_Text_PeterPost::
# 274 "data//maps/CityClara_School/scripts.pory"
	.string "My daddy owns the inn across the\n"
	.string "street$"

CityClara_School_Text_DannyIntro::
# 278 "data//maps/CityClara_School/scripts.pory"
	.string "Leave me alone, I want to play my game.$"

CityClara_School_Text_DannyLost::
# 282 "data//maps/CityClara_School/scripts.pory"
	.string "I think you might have broke my GBA!$"

CityClara_School_Text_DannyPost::
# 286 "data//maps/CityClara_School/scripts.pory"
	.string "Mommy gave me that toy that you just\n"
	.string "broke.$"

CityClara_School_Text_EthanIntro::
# 290 "data//maps/CityClara_School/scripts.pory"
	.string "Wait, who are you? I only talk to girls!$"

CityClara_School_Text_EthanLost::
# 294 "data//maps/CityClara_School/scripts.pory"
	.string "And that's exactly why we shouldn't\n"
	.string "speak.$"

CityClara_School_Text_EthanPost::
# 298 "data//maps/CityClara_School/scripts.pory"
	.string "Dude, quit trying to stare into my eyes!$"

CityClara_School_Text_SagisIntro::
# 302 "data//maps/CityClara_School/scripts.pory"
	.string "Wait bro, are you for real? We're gonna\n"
	.string "fight?$"

CityClara_School_Text_SagisLost::
# 306 "data//maps/CityClara_School/scripts.pory"
	.string "Whatever dude, I heard you were crazy.$"

CityClara_School_Text_SagisPost::
# 310 "data//maps/CityClara_School/scripts.pory"
	.string "Did I ever tell you about the time I\n"
	.string "hung out in a crack den in Gato?$"

CityClara_School_Text_EmilyIntro::
# 314 "data//maps/CityClara_School/scripts.pory"
	.string "I think most of us are still practicing\n"
	.string "but I can hold my own among the best.$"

CityClara_School_Text_EmilyLost::
# 318 "data//maps/CityClara_School/scripts.pory"
	.string "That isn't fair! You're gonna make me\n"
	.string "cry!$"

CityClara_School_Text_EmilyPost::
# 322 "data//maps/CityClara_School/scripts.pory"
	.string "If I had a boyfriend he'd kick your ass.$"

CityClara_School_Text_Mr_Glasman1::
# 326 "data//maps/CityClara_School/scripts.pory"
	.string "Before we start why don't you all\n"
	.string "review, among yourselves, in groups, for\l"
	.string "five minutes$"

CityClara_School_Text_Mr_GlasmanIntro::
# 330 "data//maps/CityClara_School/scripts.pory"
	.string "Sheket Bevakasha, that means shut up!\n"
	.string "I need you to show me some more respect\l"
	.string "and recognize my doctorate. Now time\l"
	.string "for you to take a test...to pass or fail.$"

CityClara_School_Text_Mr_GlasmanLost::
# 334 "data//maps/CityClara_School/scripts.pory"
	.string "I told you this before, it's DOCTOR G!$"

CityClara_School_Text_Mr_GlasmanPost::
# 338 "data//maps/CityClara_School/scripts.pory"
	.string "You've proven yourself a brilliant pupil.\n"
	.string "Good luck in your education.$"

CityClara_School_Text_PeevesGrade1::
# 342 "data//maps/CityClara_School/scripts.pory"
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
# 346 "data//maps/CityClara_School/scripts.pory"
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_PeevesIntro::
# 350 "data//maps/CityClara_School/scripts.pory"
	.string "Well looky here looks like there's a new\n"
	.string "kid. You think you're so grown up well\l"
	.string "time to learn what guys like me do to\l"
	.string "freshmeat like you.$"

CityClara_School_Text_PeevesLost::
# 354 "data//maps/CityClara_School/scripts.pory"
	.string "I'll let you keep my lunch money this\n"
	.string "time...$"

CityClara_School_Text_PeevesPost::
# 358 "data//maps/CityClara_School/scripts.pory"
	.string "Teacher made me monitor of the halls!$"

CityClara_School_Text_TylerIntro::
# 362 "data//maps/CityClara_School/scripts.pory"
	.string "Get in looser, we're riding on the bus!$"

CityClara_School_Text_TylerLost::
# 366 "data//maps/CityClara_School/scripts.pory"
	.string "Well go thy way. Thou shalt not from\n"
	.string "this grove!$"

CityClara_School_Text_TylerPost::
# 370 "data//maps/CityClara_School/scripts.pory"
	.string "I'll see you in the morning...on the bus!$"

CityClara_School_Text_GabeIntro::
# 374 "data//maps/CityClara_School/scripts.pory"
	.string "There is no reason for this senseless\n"
	.string "duel.$"

CityClara_School_Text_GabeLost::
# 378 "data//maps/CityClara_School/scripts.pory"
	.string "Much wasted blood but none of it was\n"
	.string "mine.$"

CityClara_School_Text_GabePost::
# 382 "data//maps/CityClara_School/scripts.pory"
	.string "Your history, the sum of all your crimes,\n"
	.string "will ever bring you, till you repent.$"

CityClara_School_Text_Mrs_SullyIntroA::
# 386 "data//maps/CityClara_School/scripts.pory"
	.string "I've not seen you before you some\n"
	.string "truant?$"

CityClara_School_Text_Mrs_SullyIntro::
# 390 "data//maps/CityClara_School/scripts.pory"
	.string "Win this battle and I'll give you cut$"

CityClara_School_Text_Mrs_SullyLost::
# 394 "data//maps/CityClara_School/scripts.pory"
	.string "I can't believe a kid like you just won$"

CityClara_School_Text_Mrs_SullyDefeat::
# 398 "data//maps/CityClara_School/scripts.pory"
	.string "That was a thrill! {PLAYER} you are so\n"
	.string "advanced. I've never had a student\l"
	.string "make me feel like they were the one who\l"
	.string "was in control.$"

CityClara_School_Text_Mrs_SullyPost::
# 402 "data//maps/CityClara_School/scripts.pory"
	.string "You can come back anytime to study$"

CityClara_School_Text_ExplainCut::
# 406 "data//maps/CityClara_School/scripts.pory"
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
