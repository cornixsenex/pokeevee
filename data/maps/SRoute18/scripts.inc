SRoute18_MapScripts::
	.byte 0


SRoute18_Script_TestTriggerOn2::
# 5 "data/maps/SRoute18/scripts.pory"
	lock
# 6 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 7 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 8 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 9 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn2_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/SRoute18/scripts.pory"
	closemessage
# 11 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn1::
# 16 "data/maps/SRoute18/scripts.pory"
	lock
# 17 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 2
# 18 "data/maps/SRoute18/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 19 "data/maps/SRoute18/scripts.pory"
	waitmovement 0
# 20 "data/maps/SRoute18/scripts.pory"
	msgbox SRoute18_Script_TestTriggerOn1_Text_0, MSGBOX_DEFAULT
# 21 "data/maps/SRoute18/scripts.pory"
	closemessage
# 22 "data/maps/SRoute18/scripts.pory"
	release
	end


Sroute18_Script_TestPorygon::
# 27 "data/maps/SRoute18/scripts.pory"
	lock
# 28 "data/maps/SRoute18/scripts.pory"
	setvar VAR_TEMP_7, 1
# 29 "data/maps/SRoute18/scripts.pory"
	msgbox Sroute18_Script_TestPorygon_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/SRoute18/scripts.pory"
	closemessage
# 31 "data/maps/SRoute18/scripts.pory"
	release
	end


SRoute18_Script_TestTriggerOn2_Text_0:
# 9 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 2!$"

SRoute18_Script_TestTriggerOn1_Text_0:
# 20 "data/maps/SRoute18/scripts.pory"
	.string "TRIGGER 1$"

Sroute18_Script_TestPorygon_Text_0:
# 29 "data/maps/SRoute18/scripts.pory"
	.string "VAR_TEMP_7 set to 1$"
