BulbusTown_MapScripts::
# 16 "data/maps/BulbusTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_ShowStrike
	goto BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_HideJason
	return


BulbusTown_Script_ShowStrike::
# 29 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 6, 5, 18
# 30 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 7, 6, 18
# 33 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 27, 16, 18
# 36 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 26, 17, 18
# 39 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 8, 27, 18
# 42 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 1, 28, 18
# 45 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BulbusTown_Script_HideJason::
# 51 "data/maps/BulbusTown/scripts.pory"
	removeobject 28
# 52 "data/maps/BulbusTown/scripts.pory"
	removeobject 29
# 53 "data/maps/BulbusTown/scripts.pory"
	removeobject 30
	return


BulbusTown_EventScript_Sailor::
# 59 "data/maps/BulbusTown/scripts.pory"
	lock
# 60 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 61 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Sailor
# 62 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Fisherman::
# 67 "data/maps/BulbusTown/scripts.pory"
	lock
# 68 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 69 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 70 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 75 "data/maps/BulbusTown/scripts.pory"
	lock
# 76 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 77 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 82 "data/maps/BulbusTown/scripts.pory"
	lock
# 83 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 84 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 89 "data/maps/BulbusTown/scripts.pory"
	lock
# 90 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 91 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 92 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 97 "data/maps/BulbusTown/scripts.pory"
	lock
# 98 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 99 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 100 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Striker1::
# 105 "data/maps/BulbusTown/scripts.pory"
	lock
# 106 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 107 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Striker1
# 108 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 109 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_Striker2::
# 114 "data/maps/BulbusTown/scripts.pory"
	lock
# 115 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 116 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Striker2
# 117 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 118 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Text_Sailor::
# 123 "data/maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_Fisherman::
# 129 "data/maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 134 "data/maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 138 "data/maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 142 "data/maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 146 "data/maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_Striker1::
# 150 "data/maps/BulbusTown/scripts.pory"
	.string "We need more money!$"

BulbusTown_Text_Striker2::
# 154 "data/maps/BulbusTown/scripts.pory"
	.string "We deserve more rights!$"
