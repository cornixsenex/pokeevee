Hospital3F_MapScripts::
# 3 "data/maps/Hospital3F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital3F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital3F/scripts.pory"
	call Hospital3F_OnResume
	return


Hospital3F_OnResume::
# 13 "data/maps/Hospital3F/scripts.pory"
	call Hospital3F_EventScript_SetFloor3
	return


Hospital3F_EventScript_SetFloor3::
# 17 "data/maps/Hospital3F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 3
	return


Hospital3F_EventScript_Tobogan::
# 22 "data/maps/Hospital3F/scripts.pory"
	trainerbattle_single TRAINER_TOBOGAN, Hospital3F_Text_ToboganPre, Hospital3F_Text_ToboganLost
# 23 "data/maps/Hospital3F/scripts.pory"
	msgbox Hospital3F_Text_ToboganPost
# 24 "data/maps/Hospital3F/scripts.pory"
	closemessage
# 25 "data/maps/Hospital3F/scripts.pory"
	release
	end


Hospital3F_EventScript_Judy::
# 30 "data/maps/Hospital3F/scripts.pory"
	trainerbattle_single TRAINER_JUDY, Hospital3F_Text_JudyPre, Hospital3F_Text_JudyLost
# 31 "data/maps/Hospital3F/scripts.pory"
	msgbox Hospital3F_Text_JudyPost
# 32 "data/maps/Hospital3F/scripts.pory"
	closemessage
# 33 "data/maps/Hospital3F/scripts.pory"
	release
	end


Hospital3F_Text_ToboganPre::
# 39 "data/maps/Hospital3F/scripts.pory"
	.string "Bad news! Your test results are\l"
	.string "positive for HIV. That's right you got\l"
	.string "the AIDS!$"

Hospital3F_Text_ToboganLost::
# 43 "data/maps/Hospital3F/scripts.pory"
	.string "Even my magnum dong could not save me...$"

Hospital3F_Text_ToboganPost::
# 47 "data/maps/Hospital3F/scripts.pory"
	.string "Yeah, I'm a real doctor with a degree.$"

Hospital3F_Text_JudyPre::
# 51 "data/maps/Hospital3F/scripts.pory"
	.string "Uh-Oh! Looks like you don't have all\l"
	.string "your shots. Hold still! This will only\l"
	.string "take one minute.$"

Hospital3F_Text_JudyLost::
# 55 "data/maps/Hospital3F/scripts.pory"
	.string "It was for your own good...$"

Hospital3F_Text_JudyPost::
# 59 "data/maps/Hospital3F/scripts.pory"
	.string "Do not come back to this hospital floor\l"
	.string "when you get sick.$"
