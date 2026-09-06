Route14CS_MapScripts::
# 4 "data/maps/Route14CS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route14CS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route14CS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/Route14CS/scripts.pory"
	call Route14CS_OnResume
	return


Route14CS_OnResume::
# 12 "data/maps/Route14CS/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


Route14CS_EventScript_TestBattle::
# 17 "data/maps/Route14CS/scripts.pory"
	lock
# 18 "data/maps/Route14CS/scripts.pory"
	msgbox Route14CS_EventScript_TestBattle_Text_0
# 19 "data/maps/Route14CS/scripts.pory"
	closemessage
# 20 "data/maps/Route14CS/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GEOLOGY, Ardor_Uni_GeologyClass_Text_TeacherBattleLost
# 21 "data/maps/Route14CS/scripts.pory"
	msgbox Route14CS_EventScript_TestBattle_Text_1
# 22 "data/maps/Route14CS/scripts.pory"
	closemessage
# 23 "data/maps/Route14CS/scripts.pory"
	release
	end


Route14CS_EventScript_TestBattle_Text_0:
# 18 "data/maps/Route14CS/scripts.pory"
	.string "Test Battle!$"

Route14CS_EventScript_TestBattle_Text_1:
# 21 "data/maps/Route14CS/scripts.pory"
	.string "Battle Done$"
