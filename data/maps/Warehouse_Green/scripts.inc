Warehouse_Green_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_GANG_STATE, 0, Warehouse_Green_EventScript_HideBigGreen
	map_script_2 VAR_GANG_STATE, 1, Warehouse_Green_EventScript_ShowBigGreen
	.2byte 0


Warehouse_Green_EventScript_ShowBigGreen::
	clearflag FLAG_WAREHOUSE_GREEN_BIGGREEN
	return


Warehouse_Green_EventScript_HideBigGreen::
	removeobject 5
	setflag FLAG_WAREHOUSE_GREEN_BIGGREEN
	return


Warehouse_Green_EventScript_BigGreen::
	lock
	faceplayer
	switch VAR_GANG_STATE
	case 0, Warehouse_Green_EventScript_BigGreen_3
	case 1, Warehouse_Green_EventScript_BigGreen_4
	case 2, Warehouse_Green_EventScript_BigGreen_5
	case 3, Warehouse_Green_EventScript_BigGreen_6
	case 4, Warehouse_Green_EventScript_BigGreen_7
	msgbox Warehouse_Green_EventScript_BigGreen_Text_3
Warehouse_Green_EventScript_BigGreen_1:
	closemessage
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Warehouse_Green_EventScript_BigGreen_3:
	msgbox Warehouse_Green_EventScript_BigGreen_Text_0
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_4:
	call Warehouse_Green_EventScript_BigGreenA
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_5:
	call Warehouse_Green_EventScript_BigGreenB
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_6:
	msgbox Warehouse_Green_EventScript_BigGreen_Text_1
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_7:
	mgsbox Warehouse_Green_EventScript_BigGreen_Text_2
	goto Warehouse_Green_EventScript_BigGreen_1


Warehouse_Green_EventScript_BigGreenA::
	setvar VAR_GANG_STATE, 2
	setflag FLAG_GATOS_VAGRANTS
	msgbox Warehouse_Green_Text_BigGreenA
	closemessage
	return


Warehouse_Green_EventScript_BigGreenB::
	msgbox Warehouse_Green_Text_BigGreenB
	closemessage
	return


Warehouse_Green_EventScript_BigGreen_Text_0:
	.string "VAR is 0$"

Warehouse_Green_EventScript_BigGreen_Text_1:
	.string "VAR is 3$"

Warehouse_Green_EventScript_BigGreen_Text_2:
	.string "VAR is 4$"

Warehouse_Green_EventScript_BigGreen_Text_3:
	.string "VAR OUT OF SCOPE$"

Warehouse_Green_Text_BigGreenA::
	.string "Ahh {PLAYER} so wise to join us here.\n"
	.string "Welcome, please make yourself at home.\l"
	.string "I understand you're here to help us.\l"
	.string "You've come just in time. The\l"
	.string "neighborhood is not as it once was,\l"
	.string "ever since The Great War, the reds and\l"
	.string "blues have sold drugs on our streets\l"
	.string "and stole our turf. We must strike back\l"
	.string "or soon we'll be destroyed! I need you\l"
	.string "to stop their operations. Go to their\l"
	.string "warehouses. Don't hesitate! Do not\l"
	.string "show mercy. Do what must be done! Only\l"
	.string "then can you join our merry gang.$"

Warehouse_Green_Text_BigGreenB::
	.string "You've agreed to perform a great favor\n"
	.string "and win renoun amoung our merry band.\l"
	.string "You must destroy the three colored\l"
	.string "warehouses: the Red the Blue and the\l"
	.string "Yellow one too. When you return I'll let\l"
	.string "you in our gang.$"
