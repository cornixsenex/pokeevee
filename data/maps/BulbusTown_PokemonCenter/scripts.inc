BulbusTown_PokemonCenter_MapScripts::
	.byte 0


BulbusTown_PokemonCenter_EventScript_Nurse::
# 4 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	lock
# 5 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	goto_if_set FLAG_HASINSURANCE, BulbusTown_PokemonCenter_EventScript_Nurse_2
# 11 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	msgbox BulbusTown_PokemonCenter_Text_NoInsurance
# 12 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	closemessage
# 13 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	checkmoney 2500, 0
# 14 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BulbusTown_PokemonCenter_EventScript_Nurse_5
# 19 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	showmoneybox 0, 0, 0
# 20 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	msgbox BulbusTown_PokemonCenter_Text_OutOfPocket, MSGBOX_YESNO
# 21 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BulbusTown_PokemonCenter_EventScript_Nurse_9
# 29 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	msgbox BulbusTown_PokemonCenter_Text_Goodbye
# 30 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	closemessage
BulbusTown_PokemonCenter_EventScript_Nurse_8:
# 32 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	hidemoneybox
BulbusTown_PokemonCenter_EventScript_Nurse_1:
# 36 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	release
	end

BulbusTown_PokemonCenter_EventScript_Nurse_2:
# 6 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	waitmessage
# 8 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	waitbuttonpress
	goto BulbusTown_PokemonCenter_EventScript_Nurse_1

BulbusTown_PokemonCenter_EventScript_Nurse_5:
# 15 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	msgbox BulbusTown_PokemonCenter_Text_TooPoor
# 16 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	closemessage
	goto BulbusTown_PokemonCenter_EventScript_Nurse_1

BulbusTown_PokemonCenter_EventScript_Nurse_9:
# 22 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	removemoney 2500, 0
# 23 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	updatemoneybox
# 24 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 25 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	waitmessage
# 26 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	waitbuttonpress
	goto BulbusTown_PokemonCenter_EventScript_Nurse_8


BulbusTown_PokemonCenter_Text_NoInsurance::
# 41 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	.string "Hello and welcome to our Pokemon\n"
	.string "Center. I'm sorry but it seems you don't\l"
	.string "have any Health Insurance.$"

BulbusTown_PokemonCenter_Text_TooPoor::
# 45 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	.string "You look too poor to afford any help.\n"
	.string "It's time for you to go. Get out of here!$"

BulbusTown_PokemonCenter_Text_OutOfPocket::
# 50 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	.string "Our healthcare costs 2,500 dollars.\n"
	.string "Would you like to pay out of pocket?$"

BulbusTown_PokemonCenter_Text_Goodbye::
# 54 "data/maps/BulbusTown_PokemonCenter/scripts.pory"
	.string "In that case you should go away.\n"
	.string "Goodbye!$"
