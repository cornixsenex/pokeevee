Route14_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route14_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route14_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Route14_OnResume
	return


Route14_OnResume::
	setstepcallback STEP_CB_ASH
	end


Route14_EventScript_TestBattle::
	lock
	msgbox Route14_EventScript_TestBattle_Text_0
	closemessage
	trainerbattle_no_intro TRAINER_UNI_GEOLOGY, Ardor_Uni_GeologyClass_Text_TeacherBattleLost
	msgbox Route14_EventScript_TestBattle_Text_1
	closemessage
	release
	end


Route14_EventScript_TestBattle_Text_0:
	.string "Test Battle!$"

Route14_EventScript_TestBattle_Text_1:
	.string "Battle Done$"
