Warehouse_Green_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checktrainerflag TRAINER_YELLOW1
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_GANG_STATE, 3
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	checktrainerflag TRAINER_YELLOW3
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	checktrainerflag TRAINER_YELLOW2
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	checktrainerflag TRAINER_YELLOW5
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	checktrainerflag TRAINER_YELLOW4
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	compare VAR_GANG_STATE, 2
	goto_if_eq Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_GANG_STATE, 0, Warehouse_Green_EventScript_HideBigGreen
	map_script_2 VAR_GANG_STATE, 1, Warehouse_Green_EventScript_ShowBigGreen
	map_script_2 VAR_GANG_STATE, 2, Warehouse_Green_EventScript_ShowBigGreen
	map_script_2 VAR_GANG_STATE, 3, Warehouse_Green_EventScript_HideBigGreen
	map_script_2 VAR_GANG_STATE, 4, Warehouse_Green_EventScript_HideBigGreen
	map_script_2 VAR_GANG_STATE, 5, Warehouse_Green_EventScript_HideBigGreen
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
	closemessage
Warehouse_Green_EventScript_BigGreen_1:
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Warehouse_Green_EventScript_BigGreen_3:
	msgbox Warehouse_Green_EventScript_BigGreen_Text_0
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_4:
	call Warehouse_Green_EventScript_BigGreenA
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_5:
	call Warehouse_Green_EventScript_BigGreenB
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_6:
	msgbox Warehouse_Green_EventScript_BigGreen_Text_1
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_7:
	msgbox Warehouse_Green_EventScript_BigGreen_Text_2
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1


Warehouse_Green_EventScript_BigGreenA::
	setvar VAR_GANG_STATE, 2
	setflag FLAG_GATOS_VAGRANTS
	msgbox Warehouse_Green_Text_BigGreenA
	closemessage
	return


Warehouse_Green_EventScript_Green1::
	lock
	faceplayer
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green1_2
	msgbox Warehouse_Green_Text_Green1B
Warehouse_Green_EventScript_Green1_1:
	closemessage
	release
	end

Warehouse_Green_EventScript_Green1_2:
	msgbox Warehouse_Green_Text_Green1A
	goto Warehouse_Green_EventScript_Green1_1


Warehouse_Green_EventScript_Green2::
	lock
	faceplayer
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green2_2
	msgbox Warehouse_Green_Text_Green2B
Warehouse_Green_EventScript_Green2_1:
	closemessage
	release
	end

Warehouse_Green_EventScript_Green2_2:
	msgbox Warehouse_Green_Text_Green2A
	goto Warehouse_Green_EventScript_Green2_1


Warehouse_Green_EventScript_Green3::
	lock
	faceplayer
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green3_2
	msgbox Warehouse_Green_Text_Green3B
Warehouse_Green_EventScript_Green3_1:
	closemessage
	release
	end

Warehouse_Green_EventScript_Green3_2:
	msgbox Warehouse_Green_Text_Green3A
	goto Warehouse_Green_EventScript_Green3_1


Warehouse_Green_EventScript_Green4::
	lock
	faceplayer
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green4_2
	msgbox Warehouse_Green_Text_Green4B
Warehouse_Green_EventScript_Green4_1:
	closemessage
	release
	end

Warehouse_Green_EventScript_Green4_2:
	msgbox Warehouse_Green_Text_Green4A
	goto Warehouse_Green_EventScript_Green4_1


Warehouse_Green_EventScript_Green5::
	lock
	faceplayer
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green5_2
	msgbox Warehouse_Green_Text_Green5B
Warehouse_Green_EventScript_Green5_1:
	closemessage
	release
	end

Warehouse_Green_EventScript_Green5_2:
	msgbox Warehouse_Green_Text_Green5A
	goto Warehouse_Green_EventScript_Green5_1


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

Warehouse_Green_Text_Green1A::
	.string "Like zoinks dude I think I might see a\n"
	.string "ghost.$"

Warehouse_Green_Text_Green1B::
	.string "Like zoinks dude I think you're alright\n"
	.string "man.$"

Warehouse_Green_Text_Green2A::
	.string "West side, we call that the Orange\n"
	.string "Street cuz The Reds were the first to\l"
	.string "put their flag down out there, but they\l"
	.string "was more orange back when we has\l"
	.string "hipper and chipper.$"

Warehouse_Green_Text_Green2B::
	.string "Man I tell you we had a blast putting it\n"
	.string "together, yknow being in the bar with\l"
	.string "our people, yeah that shit felt good.$"

Warehouse_Green_Text_Green3A::
	.string "This leaf is a cheap ticket to the most\n"
	.string "beautiful place on earth.$"

Warehouse_Green_Text_Green3B::
	.string "Now I mostly stick to eating the herbs\n"
	.string "now in my old age.$"

Warehouse_Green_Text_Green4A::
	.string "Well, hey man! Quit staring at it man\n"
	.string "that's like my only hat.$"

Warehouse_Green_Text_Green4B::
	.string "Well, hey man! They told me all about\n"
	.string "that stuff at the bar man! Far out\l"
	.string "dude.$"

Warehouse_Green_Text_Green5A::
	.string "The prophet speaks in all of us! Jah\n"
	.string "Rastafari!$"

Warehouse_Green_Text_Green5B::
	.string "Jah Rastafari! The Lion of Zion has\n"
	.string "returned$"
