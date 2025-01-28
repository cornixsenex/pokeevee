CityClara_School_MapScripts::
	.byte 0


CityClara_School_EventScript_Karlye::
# 5 "data/maps/CityClara_School/scripts.pory"
	lock
# 6 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 7 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_KARLYE
	goto_if 0, CityClara_School_EventScript_Karlye_2
CityClara_School_EventScript_Karlye_1:
# 19 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost
# 20 "data/maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Karlye_2:
# 8 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 9 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyeIntro, MSGBOX_DEFAULT
# 10 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 11 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_KARLYE, CityClara_School_Text_KarlyeLost
# 12 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyeWater, MSGBOX_DEFAULT
# 13 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 14 "data/maps/CityClara_School/scripts.pory"
	giveitem ITEM_FRESH_WATER, 1
# 15 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_KarlyePost, MSGBOX_DEFAULT
# 16 "data/maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Karlye_1


CityClara_School_EventScript_Ricky::
# 24 "data/maps/CityClara_School/scripts.pory"
	lock
# 25 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 26 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_RICKY
	goto_if 0, CityClara_School_EventScript_Ricky_2
CityClara_School_EventScript_Ricky_1:
# 32 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyPost
# 33 "data/maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Ricky_2:
# 27 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 28 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_RickyIntro, MSGBOX_DEFAULT
# 29 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 30 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_RICKY, CityClara_School_Text_RickyLost
	goto CityClara_School_EventScript_Ricky_1


CityClara_School_EventScript_Peter::
# 37 "data/maps/CityClara_School/scripts.pory"
	lock
# 38 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 39 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_PETER
	goto_if 0, CityClara_School_EventScript_Peter_2
CityClara_School_EventScript_Peter_1:
# 45 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 9
# 46 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterPost
# 47 "data/maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Peter_2:
# 40 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 41 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeterIntro, MSGBOX_DEFAULT
# 42 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 43 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_PETER, CityClara_School_Text_PeterLost
	goto CityClara_School_EventScript_Peter_1


CityClara_School_Script_Emily::
# 51 "data/maps/CityClara_School/scripts.pory"
	lock
# 52 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 53 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_EMILY
	goto_if 0, CityClara_School_Script_Emily_2
CityClara_School_Script_Emily_1:
# 59 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EmilyPost
# 60 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 61 "data/maps/CityClara_School/scripts.pory"
	release
	end

CityClara_School_Script_Emily_2:
# 54 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 55 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EmilyIntro, MSGBOX_DEFAULT
# 56 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 57 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_EMILY, CityClara_School_Text_EmilyLost
	goto CityClara_School_Script_Emily_1


CityClara_School_EventScript_Danny::
# 66 "data/maps/CityClara_School/scripts.pory"
	lock
# 67 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 68 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_DANNY
	goto_if 0, CityClara_School_EventScript_Danny_2
CityClara_School_EventScript_Danny_1:
# 74 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyPost
# 75 "data/maps/CityClara_School/scripts.pory"
	release
	return

CityClara_School_EventScript_Danny_2:
# 69 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 70 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_DannyIntro, MSGBOX_DEFAULT
# 71 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 72 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_DANNY, CityClara_School_Text_DannyLost
	goto CityClara_School_EventScript_Danny_1


CityClara_School_EventScript_Ethan::
# 79 "data/maps/CityClara_School/scripts.pory"
	lock
# 80 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 81 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_ETHAN
	goto_if 0, CityClara_School_EventScript_Ethan_2
CityClara_School_EventScript_Ethan_1:
# 87 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanPost
# 88 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Ethan_2:
# 82 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 83 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_EthanIntro, MSGBOX_DEFAULT
# 84 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 85 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_ETHAN, CityClara_School_Text_EthanLost
	goto CityClara_School_EventScript_Ethan_1


CityClara_School_EventScript_Sagis::
# 92 "data/maps/CityClara_School/scripts.pory"
	lock
# 93 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 94 "data/maps/CityClara_School/scripts.pory"
	compare VAR_SYS_LEVEL_CAP, 11
	goto_if_lt CityClara_School_EventScript_Sagis_2
CityClara_School_EventScript_Sagis_1:
# 97 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_SAGIS
	goto_if 0, CityClara_School_EventScript_Sagis_5
CityClara_School_EventScript_Sagis_4:
# 103 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisPost
# 104 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Sagis_2:
# 95 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_SYS_LEVEL_CAP, 11
	goto CityClara_School_EventScript_Sagis_1

CityClara_School_EventScript_Sagis_5:
# 98 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 99 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_SagisIntro, MSGBOX_DEFAULT
# 100 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 101 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_SAGIS, CityClara_School_Text_SagisLost
	goto CityClara_School_EventScript_Sagis_4


CityClara_School_EventScript_Mr_Glasman::
# 108 "data/maps/CityClara_School/scripts.pory"
	lock
# 109 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 110 "data/maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_lt CityClara_School_EventScript_Mr_Glasman_2
# 112 "data/maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 4
	goto_if_eq CityClara_School_EventScript_Mr_Glasman_3
# 119 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPost
CityClara_School_EventScript_Mr_Glasman_1:
# 121 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 122 "data/maps/CityClara_School/scripts.pory"
	release
	end

CityClara_School_EventScript_Mr_Glasman_2:
# 111 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_Glasman1
	goto CityClara_School_EventScript_Mr_Glasman_1

CityClara_School_EventScript_Mr_Glasman_3:
# 113 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 114 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanIntro, MSGBOX_DEFAULT
# 115 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 116 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MR_GLASMAN, CityClara_School_Text_Mr_GlasmanLost
# 117 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mr_GlasmanPost
	goto CityClara_School_EventScript_Mr_Glasman_1


CityClara_School_EventScript_Peeves::
# 127 "data/maps/CityClara_School/scripts.pory"
	lock
# 128 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 129 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesPost
# 130 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 131 "data/maps/CityClara_School/scripts.pory"
	release
	end


CityClara_School_EventScript_IncrementSchoolVar::
# 136 "data/maps/CityClara_School/scripts.pory"
	switch VAR_CITYCLARA_SCHOOL_STATE
# 137 "data/maps/CityClara_School/scripts.pory"
	case 0, CityClara_School_EventScript_IncrementSchoolVar_2
# 139 "data/maps/CityClara_School/scripts.pory"
	case 1, CityClara_School_EventScript_IncrementSchoolVar_3
# 141 "data/maps/CityClara_School/scripts.pory"
	case 2, CityClara_School_EventScript_IncrementSchoolVar_4
# 143 "data/maps/CityClara_School/scripts.pory"
	case 3, CityClara_School_EventScript_IncrementSchoolVar_5
# 145 "data/maps/CityClara_School/scripts.pory"
	case 4, CityClara_School_EventScript_IncrementSchoolVar_6
# 147 "data/maps/CityClara_School/scripts.pory"
	case 5, CityClara_School_EventScript_IncrementSchoolVar_7
# 149 "data/maps/CityClara_School/scripts.pory"
	case 6, CityClara_School_EventScript_IncrementSchoolVar_8
# 151 "data/maps/CityClara_School/scripts.pory"
	case 7, CityClara_School_EventScript_IncrementSchoolVar_9
# 153 "data/maps/CityClara_School/scripts.pory"
	case 8, CityClara_School_EventScript_IncrementSchoolVar_10
# 155 "data/maps/CityClara_School/scripts.pory"
	case 9, CityClara_School_EventScript_IncrementSchoolVar_11
# 158 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_EventScript_IncrementSchoolVar_Text_0
# 159 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_IncrementSchoolVar_2:
# 138 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 1
	return

CityClara_School_EventScript_IncrementSchoolVar_3:
# 140 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 2
	return

CityClara_School_EventScript_IncrementSchoolVar_4:
# 142 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 3
	return

CityClara_School_EventScript_IncrementSchoolVar_5:
# 144 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 4
	return

CityClara_School_EventScript_IncrementSchoolVar_6:
# 146 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 5
	return

CityClara_School_EventScript_IncrementSchoolVar_7:
# 148 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 6
	return

CityClara_School_EventScript_IncrementSchoolVar_8:
# 150 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 7
	return

CityClara_School_EventScript_IncrementSchoolVar_9:
# 152 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 8
	return

CityClara_School_EventScript_IncrementSchoolVar_10:
# 154 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 9
	return

CityClara_School_EventScript_IncrementSchoolVar_11:
# 156 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_CITYCLARA_SCHOOL_STATE, 10
	return


CityClara_School_EventScript_Mrs_Sully::
# 164 "data/maps/CityClara_School/scripts.pory"
	lockall
# 165 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 167 "data/maps/CityClara_School/scripts.pory"
	compare VAR_CITYCLARA_SCHOOL_STATE, 9
	goto_if_lt CityClara_School_EventScript_Mrs_Sully_2
# 171 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_MRS_SULLY
	goto_if 1, CityClara_School_EventScript_Mrs_Sully_5
# 175 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 176 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPre, MSGBOX_DEFAULT
# 177 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 178 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
# 179 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_GiveTrainerCard
# 181 "data/maps/CityClara_School/scripts.pory"
	setvar VAR_GRANNY_STATE, 9
CityClara_School_EventScript_Mrs_Sully_1:
# 184 "data/maps/CityClara_School/scripts.pory"
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
# 168 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyIntroA
# 169 "data/maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1

CityClara_School_EventScript_Mrs_Sully_5:
# 172 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 173 "data/maps/CityClara_School/scripts.pory"
	closemessage
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveTrainerCard::
# 189 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyDefeat, MSGBOX_DEFAULT
# 190 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 191 "data/maps/CityClara_School/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/CityClara_School/scripts.pory"
	setflag FLAG_SYS_TRAINER_CARD_GET
# 193 "data/maps/CityClara_School/scripts.pory"
	giveitem ITEM_TRAINER_CARD, 1
# 194 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyExplainCard, MSGBOX_DEFAULT
# 195 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_Mrs_SullyPost, MSGBOX_DEFAULT
# 196 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return


CityClara_School_EventScript_GradeTrigger1::
# 201 "data/maps/CityClara_School/scripts.pory"
	lock
# 202 "data/maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 204 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 205 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 206 "data/maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 207 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1
# 208 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 209 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 210 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 211 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade1Return
# 212 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 213 "data/maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_GradeTrigger2::
# 217 "data/maps/CityClara_School/scripts.pory"
	lock
# 218 "data/maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 219 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade1
# 220 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 221 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 222 "data/maps/CityClara_School/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_School_Movement_PlayerGrade
# 223 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2
# 224 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 225 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_PeevesGrade2
# 226 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 227 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_PeevesGrade2Return
# 228 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 229 "data/maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight1::
# 233 "data/maps/CityClara_School/scripts.pory"
	lock
# 234 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 235 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 236 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 239 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 240 "data/maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_PeevesFight2::
# 244 "data/maps/CityClara_School/scripts.pory"
	lock
# 245 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 246 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 247 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 250 "data/maps/CityClara_School/scripts.pory"
	applymovement 7, CityClara_School_Movement_Peeves_WalkDown
# 251 "data/maps/CityClara_School/scripts.pory"
	waitmovement 0
# 252 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_single TRAINER_PEEVES, CityClara_School_Text_PeevesIntro, CityClara_School_Text_PeevesLost
# 253 "data/maps/CityClara_School/scripts.pory"
	release
	return


CityClara_School_EventScript_Tyler::
# 257 "data/maps/CityClara_School/scripts.pory"
	lock
# 258 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 259 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_TYLER_AND_GABE
	goto_if 0, CityClara_School_EventScript_Tyler_2
CityClara_School_EventScript_Tyler_1:
# 265 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerPost
# 266 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Tyler_2:
# 260 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 261 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerGabeIntro, MSGBOX_DEFAULT
# 262 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 263 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_TYLER_AND_GABE, CityClara_School_Text_TylerLost
	goto CityClara_School_EventScript_Tyler_1


CityClara_School_EventScript_Gabe::
# 270 "data/maps/CityClara_School/scripts.pory"
	lock
# 271 "data/maps/CityClara_School/scripts.pory"
	faceplayer
# 272 "data/maps/CityClara_School/scripts.pory"
	checktrainerflag TRAINER_TYLER_AND_GABE
	goto_if 0, CityClara_School_EventScript_Gabe_2
CityClara_School_EventScript_Gabe_1:
# 278 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_GabePost
# 279 "data/maps/CityClara_School/scripts.pory"
	closemessage
	return

CityClara_School_EventScript_Gabe_2:
# 273 "data/maps/CityClara_School/scripts.pory"
	call CityClara_School_EventScript_IncrementSchoolVar
# 274 "data/maps/CityClara_School/scripts.pory"
	msgbox CityClara_School_Text_TylerGabeIntro, MSGBOX_DEFAULT
# 275 "data/maps/CityClara_School/scripts.pory"
	closemessage
# 276 "data/maps/CityClara_School/scripts.pory"
	trainerbattle_no_intro TRAINER_TYLER_AND_GABE, CityClara_School_Text_GabeLost
	goto CityClara_School_EventScript_Gabe_1


# 282 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PlayerGrade:
# 283 "data/maps/CityClara_School/scripts.pory"
	walk_left
# 284 "data/maps/CityClara_School/scripts.pory"
	face_right
	step_end

# 287 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1:
# 288 "data/maps/CityClara_School/scripts.pory"
	walk_down
# 289 "data/maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 292 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2:
# 293 "data/maps/CityClara_School/scripts.pory"
	walk_down
# 293 "data/maps/CityClara_School/scripts.pory"
	walk_down
# 294 "data/maps/CityClara_School/scripts.pory"
	face_left
	step_end

# 297 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade1Return:
# 298 "data/maps/CityClara_School/scripts.pory"
	walk_up
# 299 "data/maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 302 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_PeevesGrade2Return:
# 303 "data/maps/CityClara_School/scripts.pory"
	walk_up
# 303 "data/maps/CityClara_School/scripts.pory"
	walk_up
# 304 "data/maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 306 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceUp:
# 307 "data/maps/CityClara_School/scripts.pory"
	face_up
	step_end

# 310 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_FaceDown:
# 311 "data/maps/CityClara_School/scripts.pory"
	face_down
	step_end

# 314 "data/maps/CityClara_School/scripts.pory"
CityClara_School_Movement_Peeves_WalkDown:
# 315 "data/maps/CityClara_School/scripts.pory"
	walk_down
	step_end

CityClara_School_EventScript_IncrementSchoolVar_Text_0:
# 158 "data/maps/CityClara_School/scripts.pory"
	.string "ERROR:\n"
	.string "CityClara_School_EventScript_IncrementSchoolVar\l"
	.string "OOB$"

CityClara_School_Text_KarlyeIntro::
# 318 "data/maps/CityClara_School/scripts.pory"
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
# 322 "data/maps/CityClara_School/scripts.pory"
	.string "Let me just give Cleffa some water...$"

CityClara_School_Text_KarlyeWater::
# 326 "data/maps/CityClara_School/scripts.pory"
	.string "If you're Eevee is injured after that\n"
	.string "battle then give this to him.$"

CityClara_School_Text_KarlyePost::
# 330 "data/maps/CityClara_School/scripts.pory"
	.string "Fresh water can help injured Pokemon\n"
	.string "recover HP. There are also items which\l"
	.string "help tired Pokemon recover PP like\l"
	.string "coffee.$"

CityClara_School_Text_RickyIntro::
# 334 "data/maps/CityClara_School/scripts.pory"
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
# 338 "data/maps/CityClara_School/scripts.pory"
	.string "I should haave trained more Pokemon...$"

CityClara_School_Text_RickyPost::
# 342 "data/maps/CityClara_School/scripts.pory"
	.string "If you're looking for a computer to\n"
	.string "access the Pokemon Box System the old\l"
	.string "men next door always let me use theirs.$"

CityClara_School_Text_PeterIntro::
# 346 "data/maps/CityClara_School/scripts.pory"
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
# 350 "data/maps/CityClara_School/scripts.pory"
	.string "After beating me you should be able to\n"
	.string "train and command Eevee up to level 9\l"
	.string "now!$"

CityClara_School_Text_PeterPost::
# 354 "data/maps/CityClara_School/scripts.pory"
	.string "Your ability as a trainer will increase\n"
	.string "as you meet and battle more\l"
	.string "experienced trainers. I wonder who the\l"
	.string "most powerful trainer in the entire\l"
	.string "state is...$"

CityClara_School_Text_DannyIntro::
# 358 "data/maps/CityClara_School/scripts.pory"
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
# 362 "data/maps/CityClara_School/scripts.pory"
	.string "I yield! I yield!$"

CityClara_School_Text_DannyPost::
# 366 "data/maps/CityClara_School/scripts.pory"
	.string "I'll need to let my Teddiursa rest\n"
	.string "before having another battle, if you\l"
	.string "let your Pokemon die then no power on\l"
	.string "Earth can bring them back to life.$"

CityClara_School_Text_EthanIntro::
# 370 "data/maps/CityClara_School/scripts.pory"
	.string "Weather conditions, like rain, can\n"
	.string "affect your Pokemon battles. There are\l"
	.string "also some Pokemon who can control\l"
	.string "battle conditions with moves. Since\l"
	.string "we're inside there won't be any special\l"
	.string "conditions during our battle but it's\l"
	.string "something to keep an eye out for.$"

CityClara_School_Text_EthanLost::
# 374 "data/maps/CityClara_School/scripts.pory"
	.string "Even under perfecrt conditions I still\n"
	.string "lost...$"

CityClara_School_Text_EthanPost::
# 378 "data/maps/CityClara_School/scripts.pory"
	.string "It's important to always be aware of\n"
	.string "field conditions during your battles\l"
	.string "outside.$"

CityClara_School_Text_SagisIntro::
# 382 "data/maps/CityClara_School/scripts.pory"
	.string "There are certain status conditions,\n"
	.string "like poison, which persist even after a\l"
	.string "bttle. You will need to let your Pokemon\l"
	.string "rest to recover from those. My bug type\l"
	.string "pokemon specialize in poisoning your\l"
	.string "Pokemon, watch out!$"

CityClara_School_Text_SagisLost::
# 386 "data/maps/CityClara_School/scripts.pory"
	.string "You overpowerd my bugs!$"

CityClara_School_Text_SagisPost::
# 390 "data/maps/CityClara_School/scripts.pory"
	.string "Be careful. If your pokemon is poisoned\n"
	.string "it can die even out of battle. It's a\l"
	.string "good idea to carry around some\l"
	.string "antivenom or extra water to help guard\l"
	.string "against poison.$"

CityClara_School_Text_EmilyIntro::
# 394 "data/maps/CityClara_School/scripts.pory"
	.string "I think there are more than 420 types\n"
	.string "of Pokemon.$"

CityClara_School_Text_EmilyLost::
# 398 "data/maps/CityClara_School/scripts.pory"
	.string "That isn't fair! You're gonna make me\n"
	.string "cry!$"

CityClara_School_Text_EmilyPost::
# 402 "data/maps/CityClara_School/scripts.pory"
	.string "Some trainers will be ready to battle\n"
	.string "you again after a while.$"

CityClara_School_Text_Mr_Glasman1::
# 406 "data/maps/CityClara_School/scripts.pory"
	.string "Before we start why don't you all\n"
	.string "review, among yourselves, in groups, for\l"
	.string "five minutes$"

CityClara_School_Text_Mr_GlasmanIntro::
# 410 "data/maps/CityClara_School/scripts.pory"
	.string "Sheket Bevakasha, that means shut up!\n"
	.string "I need you to show me some more respect\l"
	.string "and recognize my doctorate. Now time\l"
	.string "for you to take a test...to pass or fail.$"

CityClara_School_Text_Mr_GlasmanLost::
# 414 "data/maps/CityClara_School/scripts.pory"
	.string "I told you this before, it's DOCTOR G!$"

CityClara_School_Text_Mr_GlasmanPost::
# 418 "data/maps/CityClara_School/scripts.pory"
	.string "You've proven yourself a brilliant pupil.\n"
	.string "I have taught you everything that I\l"
	.string "know and now your level cap is raised to\l"
	.string "ten. Good luck with your future\l"
	.string "education.$"

CityClara_School_Text_PeevesGrade1::
# 422 "data/maps/CityClara_School/scripts.pory"
	.string "Hey you! Where do you think that you're\n"
	.string "going?$"

CityClara_School_Text_PeevesGrade2::
# 426 "data/maps/CityClara_School/scripts.pory"
	.string "This class is only for the older kids,\n"
	.string "Come back when you've graduated first\l"
	.string "grade.$"

CityClara_School_Text_PeevesIntro::
# 430 "data/maps/CityClara_School/scripts.pory"
	.string "Well looky here looks like there's a new\n"
	.string "kid. You think you're so grown up well\l"
	.string "time to learn what guys like me do to\l"
	.string "freshmeat like you.$"

CityClara_School_Text_PeevesLost::
# 434 "data/maps/CityClara_School/scripts.pory"
	.string "I'll let you keep my lunch money this\n"
	.string "time...$"

CityClara_School_Text_PeevesPost::
# 438 "data/maps/CityClara_School/scripts.pory"
	.string "Sometimes you need to beat a strong\n"
	.string "trainer to continue your journey in\l"
	.string "this world.$"

CityClara_School_Text_TylerGabeIntro::
# 442 "data/maps/CityClara_School/scripts.pory"
	.string "Sometimes two trainers will battle you\n"
	.string "at once and you will send out two\l"
	.string "Pokemon to face them both. If you do\l"
	.string "not have two Pokemon then you will have\l"
	.string "to face them while outnumbered. Since\l"
	.string "you're not a certified Pokemon Trainer\l"
	.string "then only Eevee will obey you for now.\l"
	.string "Good luck.$"

CityClara_School_Text_TylerLost::
# 446 "data/maps/CityClara_School/scripts.pory"
	.string "Two vs one and we still lost!$"

CityClara_School_Text_TylerPost::
# 450 "data/maps/CityClara_School/scripts.pory"
	.string "Sometimes you will even encounter\n"
	.string "double wild Pokemon battles.$"

CityClara_School_Text_GabeLost::
# 454 "data/maps/CityClara_School/scripts.pory"
	.string "We didn't have great team synergy...$"

CityClara_School_Text_GabePost::
# 458 "data/maps/CityClara_School/scripts.pory"
	.string "Double battles sometimes require a\n"
	.string "different strategy than normal\l"
	.string "battles.$"

CityClara_School_Text_Mrs_SullyIntroA::
# 462 "data/maps/CityClara_School/scripts.pory"
	.string "I've not seen you before you some\n"
	.string "truant? Finish your studies before\l"
	.string "your exam.$"

CityClara_School_Text_Mrs_SullyPre::
# 466 "data/maps/CityClara_School/scripts.pory"
	.string "Win this battle and you will graduate.$"

CityClara_School_Text_Mrs_SullyLost::
# 470 "data/maps/CityClara_School/scripts.pory"
	.string "Congratulations on your achievement!$"

CityClara_School_Text_Mrs_SullyDefeat::
# 474 "data/maps/CityClara_School/scripts.pory"
	.string "That was a thrill! {PLAYER} you are so\n"
	.string "advanced. I've never had a student\l"
	.string "make me feel like they were the one who\l"
	.string "was in control. This Trainer Card is your\l"
	.string "school diploma.$"

CityClara_School_Text_Mrs_SullyExplainCard::
# 478 "data/maps/CityClara_School/scripts.pory"
	.string "As a certified Pokemon Trainer wild\n"
	.string "Pokemon will now follow you and obey\l"
	.string "your commands while in battle as long as\l"
	.string "your capacity to train Pokemon is\l"
	.string "enough to handle them. You can keep\l"
	.string "track of your capacity as a trainer\l"
	.string "using the Trainer Card.$"

CityClara_School_Text_Mrs_SullyPost::
# 482 "data/maps/CityClara_School/scripts.pory"
	.string "You can come back anytime to study.$"

CityClara_School_Text_ExplainCut::
# 486 "data/maps/CityClara_School/scripts.pory"
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
