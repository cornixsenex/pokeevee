Route14_MapScripts::
# 4 "data/maps/Route14/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route14_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route14_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/Route14/scripts.pory"
	call Route14_OnResume
	return


Route14_OnResume::
# 12 "data/maps/Route14/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


Route14_EventScript_TestBattle::
# 17 "data/maps/Route14/scripts.pory"
	lock
# 18 "data/maps/Route14/scripts.pory"
	msgbox Route14_EventScript_TestBattle_Text_0
# 19 "data/maps/Route14/scripts.pory"
	closemessage
# 20 "data/maps/Route14/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_GEOLOGY, Ardor_Uni_GeologyClass_Text_TeacherBattleLost
# 21 "data/maps/Route14/scripts.pory"
	msgbox Route14_EventScript_TestBattle_Text_1
# 22 "data/maps/Route14/scripts.pory"
	closemessage
# 23 "data/maps/Route14/scripts.pory"
	release
	end


Route14_EventScript_TestBattle_Text_0:
# 18 "data/maps/Route14/scripts.pory"
	.string "Test Battle!$"

Route14_EventScript_TestBattle_Text_1:
# 21 "data/maps/Route14/scripts.pory"
	.string "Battle Done$"
