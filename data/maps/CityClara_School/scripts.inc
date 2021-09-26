CityClara_School_MapScripts::
	.byte 0


CityClara_School_EventScript_Mrs_Sully::
	lockall
	goto_if_unset FLAG_RECEIVED_CUT, CityClara_School_EventScript_Mrs_Sully_2
CityClara_School_EventScript_Mrs_Sully_1:
	msgbox CityClara_School_Text_Mrs_SullyPost
	closemessage
	releaseall
	end

CityClara_School_EventScript_Mrs_Sully_2:
	faceplayer
	msgbox CityClara_School_Text_Mrs_SullyIntroA
	closemessage
	trainerbattle_no_intro TRAINER_MRS_SULLY, CityClara_School_Text_Mrs_SullyLost
	call CityClara_School_EventScript_GiveCut
	goto CityClara_School_EventScript_Mrs_Sully_1


CityClara_School_EventScript_GiveCut::
	lock
	setflag FLAG_BADGE01_GET
	giveitem ITEM_HM01
	msgbox CityClara_School_Text_ExplainCut
	setflag FLAG_RECEIVED_CUT
	release
	end


CityClara_School_Text_Mrs_SullyIntroA::
	.string "I've not seen you before you some\n"
	.string "truant?$"

CityClara_School_Text_Mrs_SullyIntro::
	.string "Win this battle and I'll give you cut$"

CityClara_School_Text_Mrs_SullyLost::
	.string "I can't believe a kid like you just won$"

CityClara_School_Text_Mrs_SullyPost::
	.string "With that move cut you can enter the\n"
	.string "church$"

CityClara_School_Text_ExplainCut::
	.string "This is a Hidden Move, HM for short,\n"
	.string "which will allow you to cut down small\l"
	.string "trees.$"
