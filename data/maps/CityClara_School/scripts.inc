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
# 16 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost
# 17 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Karlye_2:
# 8 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 9 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyeIntro, MSGBOX_DEFAULT
# 10 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 11 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_KARLYE, CityClara_School_Text_KarlyeLost
# 12 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyeWater, MSGBOX_DEFAULT
# 13 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 14 "data//maps/CityClara_School/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
	goto CityClara_School_EventScript_Karlye_1


CityClara_School_EventScript_Ricky::
# 21 "data//maps/CityClara_School/scripts.pory"
	lock
# 22 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 23 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_RICKY
	goto_if 0, CityClara_School_EventScript_Ricky_2
CityClara_School_EventScript_Ricky_1:
# 29 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyPost
# 30 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Ricky_2:
# 24 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 25 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyIntro, MSGBOX_DEFAULT
# 26 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 27 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY, CityClara_School_Text_RickyLost
	goto CityClara_School_EventScript_Ricky_1


CityClara_School_EventScript_Peter::
# 34 "data//maps/CityClara_School/scripts.pory"
	lock
# 35 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 36 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_PETER
	goto_if 0, CityClara_School_EventScript_Peter_2
CityClara_School_EventScript_Peter_1:
# 42 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 9
# 43 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterPost
# 44 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Peter_2:
# 37 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 38 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterIntro, MSGBOX_DEFAULT
# 39 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 40 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_PETER, CityClara_School_Text_PeterLost
	goto CityClara_School_EventScript_Peter_1


CityClara_School_Script_Emily::
# 48 "data//maps/CityClara_School/scripts.pory"
	lock
# 49 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 50 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_EMILY
	goto_if 0, CityClara_School_Script_Emily_2
CityClara_School_Script_Emily_1:
# 56 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EmilyPost
# 57 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 58 "data//maps/CityClara_School/scripts.pory"
	release
	end

CityClara_School_Script_Emily_2:
# 51 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 52 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EmilyIntro, MSGBOX_DEFAULT
# 53 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 54 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_EMILY, CityClara_School_Text_EmilyLost
	goto CityClara_School_Script_Emily_1


CityClara_School_EventScript_Danny::
# 63 "data//maps/CityClara_School/scripts.pory"
	lock
# 64 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 65 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_DANNY
	goto_if 0, CityClara_School_EventScript_Danny_2
CityClara_School_EventScript_Danny_1:
# 71 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyPost
# 72 "data//maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Danny_2:
# 66 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 67 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyIntro, MSGBOX_DEFAULT
# 68 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 69 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNY, CityClara_School_Text_DannyLost
	goto CityClara_School_EventScript_Danny_1


CityClara_School_EventScript_Ethan::
# 76 "data//maps/CityClara_School/scripts.pory"
	lock
# 77 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 78 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_ETHAN
	goto_if 0, CityClara_School_EventScript_Ethan_2
CityClara_School_EventScript_Ethan_1:
# 84 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanPost
# 85 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Ethan_2:
# 79 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 80 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanIntro, MSGBOX_DEFAULT
# 81 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 82 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_ETHAN, CityClara_School_Text_EthanLost
	goto CityClara_School_EventScript_Ethan_1


CityClara_School_EventScript_Sagis::
# 89 "data//maps/CityClara_School/scripts.pory"
	lock
# 90 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 91 "data//maps/CityClara_School/scripts.pory"
	compare VAR_SYS_LEVEL_CAP, 11
	goto_if_lt CityClara_School_EventScript_Sagis_2
CityClara_School_EventScript_Sagis_1:
# 94 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_SAGIS
	goto_if 0, CityClara_School_EventScript_Sagis_5
CityClara_School_EventScript_Sagis_4:
# 100 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisPost
# 101 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Sagis_2:
# 92 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 11
	goto CityClara_School_EventScript_Sagis_1

CityClara_School_EventScript_Sagis_5:
# 95 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 96 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisIntro, MSGBOX_DEFAULT
# 97 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 98 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_SAGIS, CityClara_School_Text_SagisLost
	goto CityClara_School_EventScript_Sagis_4


CityClara_School_EventScript_Mr_Glasman::
# 105 "data//maps/CityClara_School/scripts.pory"
	lock
# 106 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 107 "data//maps/CityClara_School/scripts.pory"
	compare VAR_ALDEON_SCHOOL_STATE, 4
	goto_if_lt CityClara_School_EventScript_Mr_Glasman_2
# 109 "data//maps/CityClara_School/scripts.pory"
	compare VAR_ALDEON_SCHOOL_STATE, 4
	goto_if_eq CityClara_School_EventScript_Mr_Glasman_3
# 116 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPostB
CityClara_School_EventScript_Mr_Glasman_1:
# 118 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 119 "data//maps/CityClara_School/scripts.pory"
	release
	end

CityClara_School_EventScript_Mr_Glasman_2:
# 108 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_Glasman1
	goto CityClara_School_EventScript_Mr_Glasman_1

CityClara_School_EventScript_Mr_Glasman_3:
# 110 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 111 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanIntro, MSGBOX_DEFAULT
# 112 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 113 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MR_GLASMAN, CityClara_School_Text_Mr_GlasmanLost
# 114 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPostA
	goto CityClara_School_EventScript_Mr_Glasman_1


CityClara_School_EventScript_Peeves::
# 124 "data//maps/CityClara_School/scripts.pory"
	lock
# 125 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 126 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesPost
# 127 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 128 "data//maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_IncrementSchoolVar::
# 133 "data//maps/CityClara_School/scripts.pory"
	switch VAR_ALDEON_SCHOOL_STATE
# 134 "data//maps/CityClara_School/scripts.pory"
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
# 136 "data//maps/CityClara_School/scripts.pory"
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
# 138 "data//maps/CityClara_School/scripts.pory"
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
# 140 "data//maps/CityClara_School/scripts.pory"
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
# 142 "data//maps/CityClara_School/scripts.pory"
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
# 144 "data//maps/CityClara_School/scripts.pory"
	case 5, CityClara_School_EventScript_IncrementSchoolVar_7
# 146 "data//maps/CityClara_School/scripts.pory"
	case 6, CityClara_School_EventScript_IncrementSchoolVar_8
# 148 "data//maps/CityClara_School/scripts.pory"
	case 7, CityClara_School_EventScript_IncrementSchoolVar_9
# 150 "data//maps/CityClara_School/scripts.pory"
	case 8, CityClara_School_EventScript_IncrementSchoolVar_10
# 152 "data//maps/CityClara_School/scripts.pory"
	case 9, CityClara_School_EventScript_IncrementSchoolVar_11
# 155 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_EventScript_IncrementSchoolVar_Text_0
# 156 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_IncrementSchoolVar_2:
# 135 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 1
	return

CityClara_School_EventScript_IncrementSchoolVar_3:
# 137 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 2
	return

CityClara_School_EventScript_IncrementSchoolVar_4:
# 139 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 3
	return

CityClara_School_EventScript_IncrementSchoolVar_5:
# 141 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 4
	return

CityClara_School_EventScript_IncrementSchoolVar_6:
# 143 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 5
	return

CityClara_School_EventScript_IncrementSchoolVar_7:
# 145 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 6
	return

CityClara_School_EventScript_IncrementSchoolVar_8:
# 147 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 7
	return

CityClara_School_EventScript_IncrementSchoolVar_9:
# 149 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 8
	return

CityClara_School_EventScript_IncrementSchoolVar_10:
# 151 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 9
	return

CityClara_School_EventScript_IncrementSchoolVar_11:
# 153 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 10
	return


CityClara_School_EventScript_Mrs_Sully::
# 161 "data//maps/CityClara_School/scripts.pory"
	lockall
# 162 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 164 "data//maps/CityClara_School/scripts.pory"
	compare VAR_ALDEON_SCHOOL_STATE, 10
	goto_if_lt CityClara_School_EventScript_Mrs_Sully_2
# 168 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_MRS_SULLY
	goto_if 1, CityClara_School_EventScript_Mrs_Sully_5
# 172 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_ALDEON_SCHOOL_STATE, 11
# 173 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPre, MSGBOX_DEFAULT
# 174 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 175 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
# 176 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_GiveTrainerCard
# 178 "data//maps/CityClara_School/scripts.pory"
	setvar VAR_GRANNY_STATE, 9
CityClara_School_EventScript_Mrs_Sully_1:
# 181 "data//maps/CityClara_School/scripts.pory"
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
# 165 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyIntroA
# 166 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1

CityClara_School_EventScript_Mrs_Sully_5:
# 169 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 170 "data//maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveTrainerCard::
# 186 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyDefeat, MSGBOX_DEFAULT
# 187 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 188 "data//maps/CityClara_School/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data//maps/CityClara_School/scripts.pory"
	setflag FLAG_SYS_TRAINER_CARD_GET
# 190 "data//maps/CityClara_School/scripts.pory"
	giveitem ITEM_TRAINER_CARD, 1
# 191 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyExplainCard, MSGBOX_DEFAULT
# 192 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 193 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_GradeTrigger1::
# 198 "data//maps/CityClara_School/scripts.pory"
	lock
# 199 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 200 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 201 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 202 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 203 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 204 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1
# 205 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 206 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 207 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 208 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1Return
# 209 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 210 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_GradeTrigger2::
# 214 "data//maps/CityClara_School/scripts.pory"
	lock
# 215 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 216 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 217 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 218 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 219 "data//maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 220 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2
# 221 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 222 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 223 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 224 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2Return
# 225 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 226 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight1::
# 230 "data//maps/CityClara_School/scripts.pory"
	lock
# 231 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 232 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 233 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 236 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 237 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight2::
# 241 "data//maps/CityClara_School/scripts.pory"
	lock
# 242 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 243 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 244 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 247 "data//maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_Peeves_WalkDown
# 248 "data//maps/CityClara_School/scripts.pory"
	waitmovement 0
# 249 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 250 "data//maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_Tyler::
# 254 "data//maps/CityClara_School/scripts.pory"
	lock
# 255 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 256 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_TYLER_AND_GABE
	goto_if 0, CityClara_School_EventScript_Tyler_2
CityClara_School_EventScript_Tyler_1:
# 262 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerPost
# 263 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Tyler_2:
# 257 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 258 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerGabeIntro, MSGBOX_DEFAULT
# 259 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 260 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_TYLER_AND_GABE, CityClara_School_Text_TylerLost
	goto CityClara_School_EventScript_Tyler_1


CityClara_School_EventScript_Gabe::
# 267 "data//maps/CityClara_School/scripts.pory"
	lock
# 268 "data//maps/CityClara_School/scripts.pory"
	faceplayer
# 269 "data//maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_TYLER_AND_GABE
	goto_if 0, CityClara_School_EventScript_Gabe_2
CityClara_School_EventScript_Gabe_1:
# 275 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_GabePost
# 276 "data//maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Gabe_2:
# 270 "data//maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 271 "data//maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerGabeIntro, MSGBOX_DEFAULT
# 272 "data//maps/CityClara_School/scripts.pory"
	closemessage
# 273 "data//maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_TYLER_AND_GABE, CityClara_School_Text_GabeLost
	goto CityClara_School_EventScript_Gabe_1


# 279 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PlayerGrade:
# 280 "data//maps/CityClara_School/scripts.pory"
	walk_left
# 281 "data//maps/CityClara_School/scripts.pory"
	face_right
	step_end

# 284 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1:
# 285 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 286 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 289 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2:
# 290 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 290 "data//maps/CityClara_School/scripts.pory"
	walk_down
# 291 "data//maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 294 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1Return:
# 295 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 296 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 299 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2Return:
# 300 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 300 "data//maps/CityClara_School/scripts.pory"
	walk_up
# 301 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 303 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceUp:
# 304 "data//maps/CityClara_School/scripts.pory"
	face_up
	step_end

# 307 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceDown:
# 308 "data//maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 311 "data//maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_WalkDown:
# 312 "data//maps/CityClara_School/scripts.pory"
	walk_down
	step_end

CityClara_School_EventScript_IncrementSchoolVar_Text_0:
# 155 "data//maps/CityClara_School/scripts.pory"
	.string "ERROR:\n"
	.string "CityClara_School_EventScript_IncrementSchoolVar\l"
	.string "OOB$"

CityClara_School_Text_KarlyeIntro::
# 315 "data//maps/CityClara_School/scripts.pory"
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
# 319 "data//maps/CityClara_School/scripts.pory"
	.string "Let me just give Cleffa some water...$"

CityClara_School_Text_KarlyeWater::
# 323 "data//maps/CityClara_School/scripts.pory"
	.string "If your Eevee is injured after that\n"
	.string "battle then give this to him.$"

CityClara_School_Text_KarlyePost::
# 327 "data//maps/CityClara_School/scripts.pory"
	.string "Fresh water can help injured Pokemon\n"
	.string "recover HP. There are also items which\l"
	.string "help tired Pokemon recover PP like\l"
	.string "coffee.$"

CityClara_School_Text_RickyIntro::
# 331 "data//maps/CityClara_School/scripts.pory"
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
	.string "marvellous convenience and the\l"
	.string "company offers many boxes for free to\l"
	.string "all trainers. In order to access the\l"
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
# 335 "data//maps/CityClara_School/scripts.pory"
	.string "I should have trained more Pokemon...$"

CityClara_School_Text_RickyPost::
# 339 "data//maps/CityClara_School/scripts.pory"
	.string "If you're looking for a computer to\n"
	.string "access the Pokemon Box System Pokemon\l"
	.string "Centers will allow to use theirs free of\l"
	.string "charge.$"

CityClara_School_Text_PeterIntro::
# 343 "data//maps/CityClara_School/scripts.pory"
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
# 347 "data//maps/CityClara_School/scripts.pory"
	.string "After beating me you should be able to\n"
	.string "train and command Eevee up to level 9\l"
	.string "now!$"

CityClara_School_Text_PeterPost::
# 351 "data//maps/CityClara_School/scripts.pory"
	.string "Your ability as a trainer will increase\n"
	.string "as you meet and battle more\l"
	.string "experienced trainers. I wonder who the\l"
	.string "most powerful trainer in the entire\l"
	.string "state is...$"

CityClara_School_Text_DannyIntro::
# 355 "data//maps/CityClara_School/scripts.pory"
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
# 359 "data//maps/CityClara_School/scripts.pory"
	.string "I yield! I yield!$"

CityClara_School_Text_DannyPost::
# 363 "data//maps/CityClara_School/scripts.pory"
	.string "I'll need to let my Teddiursa rest\n"
	.string "before having another battle, if you\l"
	.string "let your Pokemon die then no power on\l"
	.string "Earth can bring them back to life.$"

CityClara_School_Text_EthanIntro::
# 367 "data//maps/CityClara_School/scripts.pory"
	.string "Weather conditions, like rain, can\n"
	.string "affect your Pokemon battles. There are\l"
	.string "also some Pokemon who can control\l"
	.string "battle conditions with moves. Since\l"
	.string "we're inside there won't be any special\l"
	.string "conditions during our battle but it's\l"
	.string "something to keep an eye out for.$"

CityClara_School_Text_EthanLost::
# 371 "data//maps/CityClara_School/scripts.pory"
	.string "Even under perfecrt conditions I still\n"
	.string "lost...$"

CityClara_School_Text_EthanPost::
# 375 "data//maps/CityClara_School/scripts.pory"
	.string "It's important to always be aware of\n"
	.string "field conditions during your battles\l"
	.string "outside.$"

CityClara_School_Text_SagisIntro::
# 379 "data//maps/CityClara_School/scripts.pory"
	.string "There are certain status conditions,\n"
	.string "like poison, which persist even after a\l"
	.string "bttle. You will need to let your Pokemon\l"
	.string "rest to recover from those. My bug type\l"
	.string "pokemon specialize in poisoning your\l"
	.string "Pokemon, watch out!$"

CityClara_School_Text_SagisLost::
# 383 "data//maps/CityClara_School/scripts.pory"
	.string "You overpowerd my bugs!$"

CityClara_School_Text_SagisPost::
# 387 "data//maps/CityClara_School/scripts.pory"
	.string "Be careful. If your pokemon is poisoned\n"
	.string "it can die even out of battle. It's a\l"
	.string "good idea to carry around some\l"
	.string "antivenom or extra water to help guard\l"
	.string "against poison.$"

CityClara_School_Text_EmilyIntro::
# 391 "data//maps/CityClara_School/scripts.pory"
	.string "I think there are more than 420 types\n"
	.string "of Pokemon.$"

CityClara_School_Text_EmilyLost::
# 395 "data//maps/CityClara_School/scripts.pory"
	.string "That isn't fair! You're gonna make me\n"
	.string "cry!$"

CityClara_School_Text_EmilyPost::
# 399 "data//maps/CityClara_School/scripts.pory"
	.string "Some trainers will be ready to battle\n"
	.string "you again after a while.$"

CityClara_School_Text_Mr_Glasman1::
# 403 "data//maps/CityClara_School/scripts.pory"
	.string "Before we start why don't you all\n"
	.string "review, among yourselves, in groups, for\l"
	.string "five minutes$"

CityClara_School_Text_Mr_GlasmanIntro::
# 407 "data//maps/CityClara_School/scripts.pory"
	.string "Sheket Bevakasha, that means shut up!\n"
	.string "I need you to show me some more respect\l"
	.string "and recognize my doctorate. Now time\l"
	.string "for you to take a test...to pass or fail.$"

CityClara_School_Text_Mr_GlasmanLost::
# 411 "data//maps/CityClara_School/scripts.pory"
	.string "I told you this before, it's DOCTOR G!$"

CityClara_School_Text_Mr_GlasmanPostA::
# 415 "data//maps/CityClara_School/scripts.pory"
	.string "You've proven yourself a brilliant pupil.\n"
	.string "I have taught you everything that I\l"
	.string "know and now your level cap is raised to\l"
	.string "ten. Good luck with your future\l"
	.string "education.$"

CityClara_School_Text_Mr_GlasmanPostB::
# 419 "data//maps/CityClara_School/scripts.pory"
	.string "Good luck with your future education.$"

CityClara_School_Text_PeevesGrade1::
# 423 "data//maps/CityClara_School/scripts.pory"
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
# 427 "data//maps/CityClara_School/scripts.pory"
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_PeevesIntro::
# 431 "data//maps/CityClara_School/scripts.pory"
	.string "Well looky here looks like there's a new\n"
	.string "kid. You think you're so grown up well\l"
	.string "time to learn what guys like me do to\l"
	.string "freshmeat like you.$"

CityClara_School_Text_PeevesLost::
# 435 "data//maps/CityClara_School/scripts.pory"
	.string "I'll let you keep my lunch money this\n"
	.string "time...$"

CityClara_School_Text_PeevesPost::
# 439 "data//maps/CityClara_School/scripts.pory"
	.string "Sometimes you need to beat a strong\n"
	.string "trainer to continue your journey in\l"
	.string "this world.$"

CityClara_School_Text_TylerGabeIntro::
# 443 "data//maps/CityClara_School/scripts.pory"
	.string "Sometimes two trainers will battle you\n"
	.string "at once and you will send out two\l"
	.string "Pokemon to face them both. If you do\l"
	.string "not have two Pokemon then you will have\l"
	.string "to face them while outnumbered. Since\l"
	.string "you're not a certified Pokemon Trainer\l"
	.string "then only Eevee will obey you for now.\l"
	.string "Good luck.$"

CityClara_School_Text_TylerLost::
# 447 "data//maps/CityClara_School/scripts.pory"
	.string "Two vs one and we still lost!$"

CityClara_School_Text_TylerPost::
# 451 "data//maps/CityClara_School/scripts.pory"
	.string "Sometimes you will even encounter\n"
	.string "double wild Pokemon battles.$"

CityClara_School_Text_GabeLost::
# 455 "data//maps/CityClara_School/scripts.pory"
	.string "We didn't have great team synergy...$"

CityClara_School_Text_GabePost::
# 459 "data//maps/CityClara_School/scripts.pory"
	.string "Double battles sometimes require a\n"
	.string "different strategy than normal\l"
	.string "battles.$"

CityClara_School_Text_Mrs_SullyIntroA::
# 463 "data//maps/CityClara_School/scripts.pory"
	.string "I've not seen you before you some\n"
	.string "truant? Finish your studies before\l"
	.string "your exam.$"

CityClara_School_Text_Mrs_SullyPre::
# 467 "data//maps/CityClara_School/scripts.pory"
	.string "Win this battle and you will graduate.$"

CityClara_School_Text_Mrs_SullyLost::
# 471 "data//maps/CityClara_School/scripts.pory"
	.string "Congratulations on your achievement!$"

CityClara_School_Text_Mrs_SullyDefeat::
# 475 "data//maps/CityClara_School/scripts.pory"
	.string "That was a thrill! {PLAYER} you are so\n"
	.string "advanced. I've never had a student\l"
	.string "make me feel like they were the one who\l"
	.string "was in control. This Trainer Card is your\l"
	.string "school diploma.$"

CityClara_School_Text_Mrs_SullyExplainCard::
# 479 "data//maps/CityClara_School/scripts.pory"
	.string "As a certified Pokemon Trainer wild\n"
	.string "Pokemon will now follow you and obey\l"
	.string "your commands while in battle as long as\l"
	.string "your capacity to train Pokemon is\l"
	.string "enough to handle them. You can keep\l"
	.string "track of your capacity as a trainer\l"
	.string "using the Trainer Card.$"

CityClara_School_Text_Mrs_SullyPost::
# 483 "data//maps/CityClara_School/scripts.pory"
	.string "You can come back anytime to study.$"

CityClara_School_Text_ExplainCut::
# 487 "data//maps/CityClara_School/scripts.pory"
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
