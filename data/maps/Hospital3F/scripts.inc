Hospital3F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital3F_OnResume
	return


Hospital3F_OnResume::
	call Hospital3F_EventScript_SetFloor3
	return


Hospital3F_EventScript_SetFloor3::
	setvar VAR_HOSPITAL_FLOOR, 3
	return


Hospital3F_EventScript_Tobogan::
	trainerbattle_single TRAINER_TOBOGAN, Hospital3F_Text_ToboganPre, Hospital3F_Text_ToboganLost
	msgbox Hospital3F_Text_ToboganPost
	closemessage
	release
	end


Hospital3F_EventScript_Judy::
	trainerbattle_single TRAINER_JUDY, Hospital3F_Text_JudyPre, Hospital3F_Text_JudyLost
	msgbox Hospital3F_Text_JudyPost
	closemessage
	release
	end


Hospital3F_Text_ToboganPre::
	.string "Bad news! Your test results are\n"
	.string "positive for HIV. That's right you got\l"
	.string "the AIDS!$"

Hospital3F_Text_ToboganLost::
	.string "Even my magnum dong could not save me...$"

Hospital3F_Text_ToboganPost::
	.string "Yeah, I'm a real doctor with a degree.$"

Hospital3F_Text_JudyPre::
	.string "Uh-Oh! Looks like you don't have all\n"
	.string "your shots. Hold still! This will only\l"
	.string "take one minute.$"

Hospital3F_Text_JudyLost::
	.string "It was for your own good...$"

Hospital3F_Text_JudyPost::
	.string "Do not come back to this hospital floor\n"
	.string "when you get sick.$"
