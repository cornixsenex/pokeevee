Warehouse_Green_MapScripts::
# 7 "data/maps/Warehouse_Green/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/Warehouse_Green/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_YELLOW1
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/Warehouse_Green/scripts.pory"
	setvar VAR_GANG_STATE, 3
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_YELLOW3
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_YELLOW2
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_YELLOW5
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_YELLOW4
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 14 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_BLUE2
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 13 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_BLUE1
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 16 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_BLUE4
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 15 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_BLUE3
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 18 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_RED1
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 17 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_BLUE5
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 20 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_RED3
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 19 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_RED2
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 22 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_RED5
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 21 "data/maps/Warehouse_Green/scripts.pory"
	checktrainerflag TRAINER_RED4
	goto_if 1, Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 23 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 2
	goto_if_eq Warehouse_Green_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Warehouse_Green_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 30 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 0, Warehouse_Green_EventScript_HideBigGreen
# 32 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 1, Warehouse_Green_EventScript_ShowBigGreen
# 34 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 2, Warehouse_Green_EventScript_ShowBigGreen
# 36 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 3, Warehouse_Green_EventScript_HideBigGreen
# 38 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 4, Warehouse_Green_EventScript_HideBigGreen
# 40 "data/maps/Warehouse_Green/scripts.pory"
	map_script_2 VAR_GANG_STATE, 5, Warehouse_Green_EventScript_HideBigGreen
	.2byte 0


Warehouse_Green_EventScript_ShowBigGreen::
# 45 "data/maps/Warehouse_Green/scripts.pory"
	clearflag FLAG_WAREHOUSE_GREEN_BIGGREEN
	return


Warehouse_Green_EventScript_HideBigGreen::
# 50 "data/maps/Warehouse_Green/scripts.pory"
	removeobject 5
# 51 "data/maps/Warehouse_Green/scripts.pory"
	setflag FLAG_WAREHOUSE_GREEN_BIGGREEN
	return


Warehouse_Green_EventScript_BigGreen::
# 56 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 57 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 58 "data/maps/Warehouse_Green/scripts.pory"
	switch VAR_GANG_STATE
# 59 "data/maps/Warehouse_Green/scripts.pory"
	case 0, Warehouse_Green_EventScript_BigGreen_3
# 62 "data/maps/Warehouse_Green/scripts.pory"
	case 1, Warehouse_Green_EventScript_BigGreen_4
# 64 "data/maps/Warehouse_Green/scripts.pory"
	case 2, Warehouse_Green_EventScript_BigGreen_5
# 66 "data/maps/Warehouse_Green/scripts.pory"
	case 3, Warehouse_Green_EventScript_BigGreen_6
# 69 "data/maps/Warehouse_Green/scripts.pory"
	case 4, Warehouse_Green_EventScript_BigGreen_7
# 73 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_EventScript_BigGreen_Text_3
# 74 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
Warehouse_Green_EventScript_BigGreen_1:
# 76 "data/maps/Warehouse_Green/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 77 "data/maps/Warehouse_Green/scripts.pory"
	waitmovement 0
# 78 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_BigGreen_3:
# 60 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_EventScript_BigGreen_Text_0
# 61 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_4:
# 63 "data/maps/Warehouse_Green/scripts.pory"
	call Warehouse_Green_EventScript_BigGreenA
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_5:
# 65 "data/maps/Warehouse_Green/scripts.pory"
	call Warehouse_Green_EventScript_BigGreenB
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_6:
# 67 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_EventScript_BigGreen_Text_1
# 68 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1

Warehouse_Green_EventScript_BigGreen_7:
# 70 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_EventScript_BigGreen_Text_2
# 71 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
	goto Warehouse_Green_EventScript_BigGreen_1


Warehouse_Green_EventScript_BigGreenA::
# 83 "data/maps/Warehouse_Green/scripts.pory"
	setvar VAR_GANG_STATE, 2
# 84 "data/maps/Warehouse_Green/scripts.pory"
	setflag FLAG_GATOS_VAGRANTS
# 85 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_BigGreenA
# 86 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
	return


Warehouse_Green_EventScript_Green1::
# 91 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 92 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 93 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green1_2
# 98 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green1B
Warehouse_Green_EventScript_Green1_1:
# 100 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
# 101 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_Green1_2:
# 95 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green1A
	goto Warehouse_Green_EventScript_Green1_1


Warehouse_Green_EventScript_Green2::
# 106 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 107 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 108 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green2_2
# 113 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green2B
Warehouse_Green_EventScript_Green2_1:
# 115 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
# 116 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_Green2_2:
# 110 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green2A
	goto Warehouse_Green_EventScript_Green2_1


Warehouse_Green_EventScript_Green3::
# 121 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 122 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 123 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green3_2
# 128 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green3B
Warehouse_Green_EventScript_Green3_1:
# 130 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
# 131 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_Green3_2:
# 125 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green3A
	goto Warehouse_Green_EventScript_Green3_1


Warehouse_Green_EventScript_Green4::
# 136 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 137 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 138 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green4_2
# 143 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green4B
Warehouse_Green_EventScript_Green4_1:
# 145 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
# 146 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_Green4_2:
# 140 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green4A
	goto Warehouse_Green_EventScript_Green4_1


Warehouse_Green_EventScript_Green5::
# 151 "data/maps/Warehouse_Green/scripts.pory"
	lock
# 152 "data/maps/Warehouse_Green/scripts.pory"
	faceplayer
# 153 "data/maps/Warehouse_Green/scripts.pory"
	compare VAR_GANG_STATE, 5
	goto_if_lt Warehouse_Green_EventScript_Green5_2
# 158 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green5B
Warehouse_Green_EventScript_Green5_1:
# 160 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
# 161 "data/maps/Warehouse_Green/scripts.pory"
	release
	end

Warehouse_Green_EventScript_Green5_2:
# 155 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_Green5A
	goto Warehouse_Green_EventScript_Green5_1


Warehouse_Green_EventScript_BigGreenB::
# 166 "data/maps/Warehouse_Green/scripts.pory"
	msgbox Warehouse_Green_Text_BigGreenB
# 167 "data/maps/Warehouse_Green/scripts.pory"
	closemessage
	return


Warehouse_Green_EventScript_BigGreen_Text_0:
# 60 "data/maps/Warehouse_Green/scripts.pory"
	.string "VAR is 0$"

Warehouse_Green_EventScript_BigGreen_Text_1:
# 67 "data/maps/Warehouse_Green/scripts.pory"
	.string "VAR is 3$"

Warehouse_Green_EventScript_BigGreen_Text_2:
# 70 "data/maps/Warehouse_Green/scripts.pory"
	.string "VAR is 4$"

Warehouse_Green_EventScript_BigGreen_Text_3:
# 73 "data/maps/Warehouse_Green/scripts.pory"
	.string "VAR OUT OF SCOPE$"

Warehouse_Green_Text_BigGreenA::
# 171 "data/maps/Warehouse_Green/scripts.pory"
	.string "Ahh {PLAYER} so wise to join us here.\l"
	.string "Welcome, please make yourself at home.\l"
	.string "I understand you're here to help us.\l"
	.string "You've come just in time. The\l"
	.string "neighborhood is not as it once was, ever\l"
	.string "since The Great War, the reds and blues\l"
	.string "have sold drugs on our streets and\l"
	.string "stole our turf. We must strike back or\l"
	.string "soon we'll be destroyed! I need you to\l"
	.string "stop their operations. Go to their\l"
	.string "warehouses. Don't hesitate! Do not show\l"
	.string "mercy. Do what must be done! Only then\l"
	.string "can you join our merry gang.$"

Warehouse_Green_Text_BigGreenB::
# 175 "data/maps/Warehouse_Green/scripts.pory"
	.string "You've agreed to perform a great favor\l"
	.string "and win renoun amoung our merry band.\l"
	.string "You must destroy the three colored\l"
	.string "warehouses: the Red the Blue and the\l"
	.string "Yellow one too. When you return I'll let\l"
	.string "you in our gang.$"

Warehouse_Green_Text_Green1A::
# 179 "data/maps/Warehouse_Green/scripts.pory"
	.string "Like zoinks dude I think I might see a\l"
	.string "ghost.$"

Warehouse_Green_Text_Green1B::
# 183 "data/maps/Warehouse_Green/scripts.pory"
	.string "Like zoinks dude I think you're alright\l"
	.string "man.$"

Warehouse_Green_Text_Green2A::
# 187 "data/maps/Warehouse_Green/scripts.pory"
	.string "West side, we call that the Orange\l"
	.string "Street cuz The Reds were the first to\l"
	.string "put their flag down out there, but they\l"
	.string "was more orange back when we has hipper\l"
	.string "and chipper.$"

Warehouse_Green_Text_Green2B::
# 191 "data/maps/Warehouse_Green/scripts.pory"
	.string "Man I tell you we had a blast putting it\l"
	.string "together, yknow being in the bar with\l"
	.string "our people, yeah that shit felt good.$"

Warehouse_Green_Text_Green3A::
# 195 "data/maps/Warehouse_Green/scripts.pory"
	.string "This leaf is a cheap ticket to the most\l"
	.string "beautiful place on earth.$"

Warehouse_Green_Text_Green3B::
# 199 "data/maps/Warehouse_Green/scripts.pory"
	.string "Now I mostly stick to eating the herbs\l"
	.string "now in my old age.$"

Warehouse_Green_Text_Green4A::
# 203 "data/maps/Warehouse_Green/scripts.pory"
	.string "Well, hey man! Quit staring at it man\l"
	.string "that's like my only hat.$"

Warehouse_Green_Text_Green4B::
# 207 "data/maps/Warehouse_Green/scripts.pory"
	.string "Well, hey man! They told me all about\l"
	.string "that stuff at the bar man! Far out\l"
	.string "dude.$"

Warehouse_Green_Text_Green5A::
# 211 "data/maps/Warehouse_Green/scripts.pory"
	.string "The prophet speaks in all of us! Jah\l"
	.string "Rastafari!$"

Warehouse_Green_Text_Green5B::
# 215 "data/maps/Warehouse_Green/scripts.pory"
	.string "Jah Rastafari! The Lion of Zion has\l"
	.string "returned$"
