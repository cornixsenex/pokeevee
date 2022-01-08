BulbusTown_PokemonCenter_MapScripts::
	.byte 0


BulbusTown_PokemonCenter_EventScript_Nurse::
	lock
	goto_if_set FLAG_HASINSURANCE, BulbusTown_PokemonCenter_EventScript_Nurse_2
	msgbox BulbusTown_PokemonCenter_Text_NoInsurance
	closemessage
	checkmoney 2500, 0
	compare VAR_RESULT, 0
	goto_if_eq BulbusTown_PokemonCenter_EventScript_Nurse_5
	showmoneybox 0, 0, 0
	msgbox BulbusTown_PokemonCenter_Text_OutOfPocket, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq BulbusTown_PokemonCenter_EventScript_Nurse_9
	msgbox BulbusTown_PokemonCenter_Text_Goodbye
	closemessage
BulbusTown_PokemonCenter_EventScript_Nurse_8:
	hidemoneybox
BulbusTown_PokemonCenter_EventScript_Nurse_1:
	release
	end

BulbusTown_PokemonCenter_EventScript_Nurse_2:
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	goto BulbusTown_PokemonCenter_EventScript_Nurse_1

BulbusTown_PokemonCenter_EventScript_Nurse_5:
	msgbox BulbusTown_PokemonCenter_Text_TooPoor
	closemessage
	goto BulbusTown_PokemonCenter_EventScript_Nurse_1

BulbusTown_PokemonCenter_EventScript_Nurse_9:
	removemoney 2500, 0
	updatemoneybox
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	goto BulbusTown_PokemonCenter_EventScript_Nurse_8


BulbusTown_PokemonCenter_Text_NoInsurance::
	.string "Hello and welcome to our Pokemon\n"
	.string "Center. I'm sorry but it seems you don't\l"
	.string "have any Health Insurance.$"

BulbusTown_PokemonCenter_Text_TooPoor::
	.string "You look too poor to afford any help.\n"
	.string "It's time for you to go. Get out of\l"
	.string "here!$"

BulbusTown_PokemonCenter_Text_OutOfPocket::
	.string "Our healthcare costs 2,500 dollars.\n"
	.string "Would you like to pay out of pocket?$"

BulbusTown_PokemonCenter_Text_Goodbye::
	.string "In that case you should go away.\n"
	.string "Goodbye!$"
