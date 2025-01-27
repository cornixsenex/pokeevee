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
# 17 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost
# 18 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Karlye_2:
# 8 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 9 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_KARLYE, CityClara_School_Text_KarlyeIntro, CityClara_School_Text_KarlyeLost
# 10 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyeWater, MSGBOX_DEFAULT
# 11 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 12 "data//maps/CityClara_School/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 13 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost, MSGBOX_DEFAULT
# 14 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Karlye_1


CityClara_School_EventScript_Ricky::
# 22 "data//maps/CityClara_School/scripts.pory"
	lock
# 23 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 24 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_RICKY
	goto_if 0, CityClara_School_EventScript_Ricky_2
CityClara_School_EventScript_Ricky_1:
# 28 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyPost
# 29 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Ricky_2:
# 25 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 26 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_RICKY, CityClara_School_Text_RickyIntro, CityClara_School_Text_RickyLost
	goto CityClara_School_EventScript_Ricky_1


CityClara_School_EventScript_Peter::
# 33 "data//maps/CityClara_School/scripts.pory"
	lock
# 34 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 35 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_PETER
	goto_if 0, CityClara_School_EventScript_Peter_2
CityClara_School_EventScript_Peter_1:
# 39 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 9
# 40 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterPost
# 41 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Peter_2:
# 36 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 37 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PETER, CityClara_School_Text_PeterIntro, CityClara_School_Text_PeterLost
	goto CityClara_School_EventScript_Peter_1


CityClara_School_Script_Emily::
# 45 "data//maps/CityClara_School/scripts.pory"
	lock
# 46 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 47 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_EMILY
	goto_if 0, CityClara_School_Script_Emily_2
CityClara_School_Script_Emily_1:
# 52 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyPost
# 53 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 54 "data//maps/CityClara_School/scripts.pory"
	release
	end

CityClara_School_Script_Emily_2:
# 48 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 49 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_EMILY, CityClara_School_Text_EmilyIntro, CityClara_School_Text_EmilyLost
	goto CityClara_School_Script_Emily_1


CityClara_School_EventScript_Danny::
# 59 "data//maps/CityClara_School/scripts.pory"
	lock
# 60 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 61 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_DANNY
	goto_if 0, CityClara_School_EventScript_Danny_2
CityClara_School_EventScript_Danny_1:
# 65 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyPost
# 66 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Danny_2:
# 62 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 63 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_DANNY, CityClara_School_Text_DannyIntro, CityClara_School_Text_DannyLost
	goto CityClara_School_EventScript_Danny_1


CityClara_School_EventScript_Ethan::
# 70 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_ETHAN, CityClara_School_Text_EthanIntro, CityClara_School_Text_EthanLost
# 71 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanPost
# 72 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Sagis::
# 76 "data//maps/CityClara_School/scripts.pory"
	compare VAR_SYS_LEVEL_CAP, 11
	goto_if_lt CityClara_School_EventScript_Sagis_2
CityClara_School_EventScript_Sagis_1:
# 79 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_SAGIS, CityClara_School_Text_SagisIntro, CityClara_School_Text_SagisLost
# 80 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisPost
# 81 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Sagis_2:
# 77 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 11
	goto CityClara_School_EventScript_Sagis_1


CityClara_School_EventScript_Mr_Glasman::
# 85 "data//maps/CityClara_School/scripts.pory"
	lock
# 86 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 87 "data//maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_lt CityClara_School_EventScript_Mr_Glasman_2
# 90 "data//maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_eq CityClara_School_EventScript_Mr_Glasman_3
# 94 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPost
CityClara_School_EventScript_Mr_Glasman_1:
# 96 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Mr_Glasman_2:
# 88 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_Glasman1
# 89 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mr_Glasman_1

CityClara_School_EventScript_Mr_Glasman_3:
# 91 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 92 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_MR_GLASMAN, CityClara_School_Text_Mr_GlasmanIntro, CityClara_School_Text_Mr_GlasmanLost
	goto CityClara_School_EventScript_Mr_Glasman_1


CityClara_School_EventScript_Peeves::
# 100 "data//maps/CityClara_School/scripts.pory"
	lock
# 101 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 102 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesPost
# 103 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 104 "data//maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_IncrementSchoolVar::
# 109 "data//maps/CityClara_School/scripts.pory"
	switch VAR_CITYCLARA_SCHOOL_STATE
# 110 "data//maps/CityClara_School/scripts.pory"
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
# 112 "data//maps/CityClara_School/scripts.pory"
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
# 114 "data//maps/CityClara_School/scripts.pory"
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
# 116 "data//maps/CityClara_School/scripts.pory"
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
# 118 "data//maps/CityClara_School/scripts.pory"
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
# 120 "data//maps/CityClara_School/scripts.pory"
	case 5, CityClara_School_EventScript_IncrementSchoolVar_7
# 122 "data//maps/CityClara_School/scripts.pory"
	case 6, CityClara_School_EventScript_IncrementSchoolVar_8
# 124 "data//maps/CityClara_School/scripts.pory"
	case 7, CityClara_School_EventScript_IncrementSchoolVar_9
	return

CityClara_School_EventScript_IncrementSchoolVar_2:
# 111 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 1
	return

CityClara_School_EventScript_IncrementSchoolVar_3:
# 113 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 2
	return

CityClara_School_EventScript_IncrementSchoolVar_4:
# 115 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 3
	return

CityClara_School_EventScript_IncrementSchoolVar_5:
# 117 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 4
	return

CityClara_School_EventScript_IncrementSchoolVar_6:
# 119 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 5
	return

CityClara_School_EventScript_IncrementSchoolVar_7:
# 121 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 6
	return

CityClara_School_EventScript_IncrementSchoolVar_8:
# 123 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 7
	return

CityClara_School_EventScript_IncrementSchoolVar_9:
# 125 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 8
	return


CityClara_School_EventScript_Mrs_Sully::
# 130 "data//maps/CityClara_School/scripts.pory"
	lockall
# 131 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 133 "data//maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 9
	goto_if_lt CityClara_School_EventScript_Mrs_Sully_2
# 139 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_MRS_SULLY
	goto_if 1, CityClara_School_EventScript_Mrs_Sully_5
# 143 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 144 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPre, MSGBOX_DEFAULT
# 145 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 146 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
# 147 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_GiveTrainerCard
CityClara_School_EventScript_Mrs_Sully_1:
# 150 "data//maps/CityClara_School/scripts.pory"
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
# 135 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyIntroA
# 136 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1

CityClara_School_EventScript_Mrs_Sully_5:
# 140 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 141 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveTrainerCard::
# 155 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyDefeat, MSGBOX_DEFAULT
# 156 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 158 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyExplainCard, MSGBOX_DEFAULT
# 159 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 160 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_GiveCut::
# 165 "data//maps/CityClara_School/scripts.pory"
	lock
# 166 "data//maps/CityClara_School/scripts.pory"
	setflag FLAG_BADGE01_GET
# 167 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyDefeat
# 168 "data//maps/CityClara_School/scripts.pory"
	giveitem ITEM_HM01
# 169 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_ExplainCut
# 170 "data//maps/CityClara_School/scripts.pory"
	setflag FLAG_RECEIVED_CUT
# 171 "data//maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_GradeTrigger1::
# 176 "data//maps/CityClara_School/scripts.pory"
	lock
# 177 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 178 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 179 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 180 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 181 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 182 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1
# 183 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 184 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 185 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 186 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1Return
# 187 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 188 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_GradeTrigger2::
# 192 "data//maps/CityClara_School/scripts.pory"
	lock
# 193 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 194 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 195 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 196 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 197 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 198 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2
# 199 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 200 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 201 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 202 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2Return
# 203 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 204 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight1::
# 208 "data//maps/CityClara_School/scripts.pory"
	lock
# 209 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 210 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 211 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 214 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 215 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight2::
# 219 "data//maps/CityClara_School/scripts.pory"
	lock
# 220 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 221 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 222 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 225 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_Peeves_WalkDown
# 226 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 227 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 228 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_Tyler::
# 232 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_TylerIntro, CityClara_School_Text_TylerLost, Route104_Text_GinaNotEnoughMons
# 233 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerPost
# 234 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_Gabe::
# 238 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_double TRAINER_TYLER_AND_GABE, CityClara_School_Text_GabeIntro, CityClara_School_Text_GabeLost, Route104_Text_GinaNotEnoughMons
# 239 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_GabePost
# 240 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


# 243 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PlayerGrade:
# 244 "data//maps/CityClara_School/scripts.pory"
	walk_left
# 245 "data//maps/CityClara_School/scripts.pory"
	face_right
	step_end

# 248 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1:
# 249 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 250 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 253 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2:
# 254 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 254 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 255 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 258 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1Return:
# 259 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 260 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 263 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2Return:
# 264 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 264 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 265 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 267 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceUp:
# 268 "data//maps/CityClara_School/scripts.pory"
	face_up
	step_end

# 271 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceDown:
# 272 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 275 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_WalkDown:
# 276 "data//maps/CityClara_School/scripts.pory"
	walk_down
	step_end

CityClara_School_Text_KarlyeIntro::
# 279 "data//maps/CityClara_School/scripts.pory"
	.string "During battles your pokemon may become\n"
	.string "tired or injured and need to rest. If\l"
	.string "you're out in the field you can use\l"
	.string "items to help your pokemon rest and\l"
	.string "recover strength. There are many items\l"
	.string "like food, drinks, and potinos which you\l"
	.string "can give your pokemon but be careful as\l"
	.string "some things might have adverse\l"
	.string "effects. You will need to give them time\l"
	.string "to consume and digest items as well so\l"
	.string "you can't use them during battles or\l"
	.string "while on the move. Now that you know\l"
	.string "about items let's have a quick battle.$"

CityClara_School_Text_KarlyeLost::
# 283 "data//maps/CityClara_School/scripts.pory"
	.string "Let me just give Cleffa some water...$"

CityClara_School_Text_KarlyeWater::
# 287 "data//maps/CityClara_School/scripts.pory"
	.string "If you're Eevee is injured after that\n"
	.string "battle then give this to him.$"

CityClara_School_Text_KarlyePost::
# 291 "data//maps/CityClara_School/scripts.pory"
	.string "Fresh water can help injured Pokemon\n"
	.string "recover HP. There are also items which\l"
	.string "help tired Pokemon recover PP like\l"
	.string "coffee.$"

CityClara_School_Text_RickyIntro::
# 295 "data//maps/CityClara_School/scripts.pory"
	.string "There is a limit to how many pokemon you\n"
	.string "can keep. You can only bring 6 Pokemon\l"
	.string "with you into battle. If you want to\l"
	.string "train more than 6 Pokemon at a time you\l"
	.string "will need to store them somewhere. The\l"
	.string "Pokemon Box Company has created the\l"
	.string "Pokemon Box System, a modern marvel,\l"
	.string "which allows you to digitize and store\l"
	.string "your pokemon electronically and then\l"
	.string "retrieve them at a later date. It's a\l"
	.string "marvellous convinience and the company\l"
	.string "offers many boxes for free to all\l"
	.string "trainers. In order to access the\l"
	.string "Pokemon Box System you will need an\l"
	.string "internet connection. You can find\l"
	.string "computers with access at homes,\l"
	.string "businesses, and pokemon centers\l"
	.string "across the state. There is also a\l"
	.string "wireless connector but you'll have to\l"
	.string "find that yourself. Now that you\l"
	.string "understand the Pokemon Box System\l"
	.string "let's have a battle to test your\l"
	.string "strength.$"

CityClara_School_Text_RickyLost::
# 299 "data//maps/CityClara_School/scripts.pory"
	.string "I should haave trained more Pokemon...$"

CityClara_School_Text_RickyPost::
# 303 "data//maps/CityClara_School/scripts.pory"
	.string "If you're looking for a computer to\n"
	.string "access the Pokemon Box System the old\l"
	.string "men next door always let me use theirs.$"

CityClara_School_Text_PeterIntro::
# 307 "data//maps/CityClara_School/scripts.pory"
	.string "The most important job of a Pokemon\n"
	.string "trainer is to make sure your Pokemon\l"
	.string "obey you in battle. I can see that you\l"
	.string "have a special bond with your Eevee but\l"
	.string "in order to command wild Pokemon you\l"
	.string "will need to become a more skilled\l"
	.string "trainer by finishing school. As you grow\l"
	.string "as a trainer you will become capabble of\l"
	.string "controlling more powerful Pokemon. If\l"
	.string "an inexperienced trainer tries to\l"
	.string "command a powerful Pokemon the\l"
	.string "Pokemon may decide to disobey orders\l"
	.string "completely. All Pokemon Trainer School\l"
	.string "graduates recieve a Pokemon Trainer\l"
	.string "Card which will help you keep track of\l"
	.string "your skill as a trainer and determine\l"
	.string "the capacity of the strength of the\l"
	.string "Pokemon you will be able to command. I'm\l"
	.string "still a studen trainer so I can only\l"
	.string "command pokemon level 9. Let's have a\l"
	.string "battle to see how strong you are.$"

CityClara_School_Text_PeterLost::
# 311 "data//maps/CityClara_School/scripts.pory"
	.string "After beating me you should be able to\n"
	.string "train and command Eevee up to level 9\l"
	.string "now!$"

CityClara_School_Text_PeterPost::
# 315 "data//maps/CityClara_School/scripts.pory"
	.string "Your ability as a trainer will increase\n"
	.string "as you meet and battle more\l"
	.string "experienced trainers. I wonder who the\l"
	.string "most powerful trainer in the entire\l"
	.string "state is...$"

CityClara_School_Text_DannyIntro::
# 319 "data//maps/CityClara_School/scripts.pory"
	.string "Pokemon can only battle for so long\n"
	.string "before they must quit the field. Most\l"
	.string "trainers form an emotional bond with\l"
	.string "their Pokemon and will surrender the\l"
	.string "battle when all of their pokemon faint.\l"
	.string "Other trainers push their Pokemon over\l"
	.string "the edge and they die. A dead Pokemon\l"
	.string "cannot be revived. Let me demonstrate\l"
	.string "with a battle. I will surrender if you\l"
	.string "can knock my Teddiursa unconscious but\l"
	.string "I can tell you're the type to never\l"
	.string "surrender until I've killed your Eevee.$"

CityClara_School_Text_DannyLost::
# 323 "data//maps/CityClara_School/scripts.pory"
	.string "I yield! I yield!$"

CityClara_School_Text_DannyPost::
# 327 "data//maps/CityClara_School/scripts.pory"
	.string "I'll need to let my Teddiursa rest\n"
	.string "before having another battle, if you\l"
	.string "let your Pokemon die then no power on\l"
	.string "Earth can bring them back to life.$"

CityClara_School_Text_EthanIntro::
# 331 "data//maps/CityClara_School/scripts.pory"
	.string "Weather conditions, like rain, can\n"
	.string "affect your Pokemon battles. There are\l"
	.string "also some Pokemon who can control\l"
	.string "battle conditions with moves. Since\l"
	.string "we're inside there won't be any special\l"
	.string "conditions during our battle but it's\l"
	.string "something to keep an eye out for.$"

CityClara_School_Text_EthanLost::
# 335 "data//maps/CityClara_School/scripts.pory"
	.string "Even under perfecrt conditions I still\n"
	.string "lost...$"

CityClara_School_Text_EthanPost::
# 339 "data//maps/CityClara_School/scripts.pory"
	.string "It's important to always be aware of\n"
	.string "field conditions during your battles\l"
	.string "outside.$"

CityClara_School_Text_SagisIntro::
# 343 "data//maps/CityClara_School/scripts.pory"
	.string "There are certain status conditions,\n"
	.string "like poison, which persist even after a\l"
	.string "bttle. You will need to let your Pokemon\l"
	.string "rest to recover from those. My bug type\l"
	.string "pokemon specialize in poisoning your\l"
	.string "Pokemon, watch out!$"

CityClara_School_Text_SagisLost::
# 347 "data//maps/CityClara_School/scripts.pory"
	.string "You overpowerd my bugs!$"

CityClara_School_Text_SagisPost::
# 351 "data//maps/CityClara_School/scripts.pory"
	.string "Be careful. If your pokemon is poisoned\n"
	.string "it can die even out of battle. It's a\l"
	.string "good idea to carry around some\l"
	.string "antivenom or extra water to help guard\l"
	.string "against poison.$"

CityClara_School_Text_EmilyIntro::
# 355 "data//maps/CityClara_School/scripts.pory"
	.string "I think there are more than 420 types\n"
	.string "of Pokemon.$"

CityClara_School_Text_EmilyLost::
# 359 "data//maps/CityClara_School/scripts.pory"
	.string "That isn't fair! You're gonna make me\n"
	.string "cry!$"

CityClara_School_Text_EmilyPost::
# 363 "data//maps/CityClara_School/scripts.pory"
	.string "Some trainers will be ready to battle\n"
	.string "you again after a while.$"

CityClara_School_Text_Mr_Glasman1::
# 367 "data//maps/CityClara_School/scripts.pory"
	.string "Before we start why don't you all\n"
	.string "review, among yourselves, in groups, for\l"
	.string "five minutes$"

CityClara_School_Text_Mr_GlasmanIntro::
# 371 "data//maps/CityClara_School/scripts.pory"
	.string "Sheket Bevakasha, that means shut up!\n"
	.string "I need you to show me some more respect\l"
	.string "and recognize my doctorate. Now time\l"
	.string "for you to take a test...to pass or fail.$"

CityClara_School_Text_Mr_GlasmanLost::
# 375 "data//maps/CityClara_School/scripts.pory"
	.string "I told you this before, it's DOCTOR G!$"

CityClara_School_Text_Mr_GlasmanPost::
# 379 "data//maps/CityClara_School/scripts.pory"
	.string "You've proven yourself a brilliant pupil.\n"
	.string "I have taught you everything that I\l"
	.string "know and now your level cap is raised to\l"
	.string "ten. Good luck with your future\l"
	.string "education.$"

CityClara_School_Text_PeevesGrade1::
# 383 "data//maps/CityClara_School/scripts.pory"
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
# 387 "data//maps/CityClara_School/scripts.pory"
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_PeevesIntro::
# 391 "data//maps/CityClara_School/scripts.pory"
	.string "Well looky here looks like there's a new\n"
	.string "kid. You think you're so grown up well\l"
	.string "time to learn what guys like me do to\l"
	.string "freshmeat like you.$"

CityClara_School_Text_PeevesLost::
# 395 "data//maps/CityClara_School/scripts.pory"
	.string "I'll let you keep my lunch money this\n"
	.string "time...$"

CityClara_School_Text_PeevesPost::
# 399 "data//maps/CityClara_School/scripts.pory"
	.string "Sometimes you need to beat a strong\n"
	.string "trainer to continue your journey in\l"
	.string "this world.$"

CityClara_School_Text_TylerIntro::
# 403 "data//maps/CityClara_School/scripts.pory"
	.string "Get in looser, we're riding on the bus!$"

CityClara_School_Text_TylerLost::
# 407 "data//maps/CityClara_School/scripts.pory"
	.string "Well go thy way. Thou shalt not from\n"
	.string "this grove!$"

CityClara_School_Text_TylerPost::
# 411 "data//maps/CityClara_School/scripts.pory"
	.string "I'll see you in the morning...on the bus!$"

CityClara_School_Text_GabeIntro::
# 415 "data//maps/CityClara_School/scripts.pory"
	.string "There is no reason for this senseless\n"
	.string "duel.$"

CityClara_School_Text_GabeLost::
# 419 "data//maps/CityClara_School/scripts.pory"
	.string "Much wasted blood but none of it was\n"
	.string "mine.$"

CityClara_School_Text_GabePost::
# 423 "data//maps/CityClara_School/scripts.pory"
	.string "Your history, the sum of all your crimes,\n"
	.string "will ever bring you, till you repent.$"

CityClara_School_Text_Mrs_SullyIntroA::
# 427 "data//maps/CityClara_School/scripts.pory"
	.string "I've not seen you before you some\n"
	.string "truant? Finish your studies before\l"
	.string "your exam.$"

CityClara_School_Text_Mrs_SullyPre::
# 431 "data//maps/CityClara_School/scripts.pory"
	.string "Win this battle and you will graduate.$"

CityClara_School_Text_Mrs_SullyLost::
# 435 "data//maps/CityClara_School/scripts.pory"
	.string "Congratulations on your achievement!$"

CityClara_School_Text_Mrs_SullyDefeat::
# 439 "data//maps/CityClara_School/scripts.pory"
	.string "That was a thrill! {PLAYER} you are so\n"
	.string "advanced. I've never had a student\l"
	.string "make me feel like they were the one who\l"
	.string "was in control. This Trainer Card is your\l"
	.string "school diploma.$"

CityClara_School_Text_Mrs_SullyExplainCard::
# 443 "data//maps/CityClara_School/scripts.pory"
	.string "As a certified Pokemon Trainer wild\n"
	.string "Pokemon will now follow you and obey\l"
	.string "your commands while in battle as long as\l"
	.string "your capacity to train Pokemon is\l"
	.string "enough to handle them. You can keep\l"
	.string "track of your capacity as a trainer\l"
	.string "using the Trainer Card.$"

CityClara_School_Text_Mrs_SullyPost::
# 447 "data//maps/CityClara_School/scripts.pory"
	.string "You can come back anytime to study.$"

CityClara_School_Text_ExplainCut::
# 451 "data//maps/CityClara_School/scripts.pory"
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
