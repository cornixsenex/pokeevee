Vegas_Hotel1F_MapScripts::
# 8 "data/maps/Vegas_Hotel1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Vegas_Hotel1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Vegas_Hotel1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Vegas_Hotel1F/scripts.pory"
	goto_if_set FLAG_PALATIUMFELIX_OPEN, Vegas_Hotel1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Vegas_Hotel1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/Vegas_Hotel1F/scripts.pory"
	setvar VAR_TEMP_6, 1
	return


Vegas_Hotel1F_Script_DoorMan::
# 18 "data/maps/Vegas_Hotel1F/scripts.pory"
	lock
# 19 "data/maps/Vegas_Hotel1F/scripts.pory"
	faceplayer
# 20 "data/maps/Vegas_Hotel1F/scripts.pory"
	goto_if_set FLAG_PALATIUMFELIX_OPEN, Vegas_Hotel1F_Script_DoorMan_2
# 23 "data/maps/Vegas_Hotel1F/scripts.pory"
	call Vegas_Hotel1F_Script_DoorMan_Closed
Vegas_Hotel1F_Script_DoorMan_1:
# 25 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 26 "data/maps/Vegas_Hotel1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/Vegas_Hotel1F/scripts.pory"
	closemessage
	return

Vegas_Hotel1F_Script_DoorMan_2:
# 21 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_DoorManOpen
	goto Vegas_Hotel1F_Script_DoorMan_1


Vegas_Hotel1F_Script_DoorBlock::
# 31 "data/maps/Vegas_Hotel1F/scripts.pory"
	lock
# 32 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 33 "data/maps/Vegas_Hotel1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 35 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 36 "data/maps/Vegas_Hotel1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/Vegas_Hotel1F/scripts.pory"
	call Vegas_Hotel1F_Script_DoorMan_Closed
# 38 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 39 "data/maps/Vegas_Hotel1F/scripts.pory"
	goto_if_unset FLAG_PALATIUMFELIX_OPEN, Vegas_Hotel1F_Script_DoorBlock_2
Vegas_Hotel1F_Script_DoorBlock_1:
# 42 "data/maps/Vegas_Hotel1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/Vegas_Hotel1F/scripts.pory"
	closemessage
# 44 "data/maps/Vegas_Hotel1F/scripts.pory"
	release
	end

Vegas_Hotel1F_Script_DoorBlock_2:
# 40 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto Vegas_Hotel1F_Script_DoorBlock_1


Vegas_Hotel1F_Script_DoorMan_Closed::
# 49 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_DoorManClose
# 50 "data/maps/Vegas_Hotel1F/scripts.pory"
	checkitem ITEM_COIN_CASE, 1
# 51 "data/maps/Vegas_Hotel1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Vegas_Hotel1F_Script_DoorMan_Closed_2
Vegas_Hotel1F_Script_DoorMan_Closed_1:
	return

Vegas_Hotel1F_Script_DoorMan_Closed_2:
# 52 "data/maps/Vegas_Hotel1F/scripts.pory"
	call Vegas_Hotel1F_Script_DoorMan_Open
	goto Vegas_Hotel1F_Script_DoorMan_Closed_1


Vegas_Hotel1F_Script_DoorMan_Open::
# 58 "data/maps/Vegas_Hotel1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 59 "data/maps/Vegas_Hotel1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_DoorManCoinCase
# 61 "data/maps/Vegas_Hotel1F/scripts.pory"
	setflag FLAG_PALATIUMFELIX_OPEN
# 62 "data/maps/Vegas_Hotel1F/scripts.pory"
	setvar VAR_TEMP_6, 1
# 63 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_DoorManOpen
	return


Vegas_Hotel1F_EventScript_Owner::
# 69 "data/maps/Vegas_Hotel1F/scripts.pory"
	lock
# 70 "data/maps/Vegas_Hotel1F/scripts.pory"
	faceplayer
# 71 "data/maps/Vegas_Hotel1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_FLASH, Vegas_Hotel1F_EventScript_Owner_2
# 75 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_OwnerHelp
# 77 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_ExplainFlash
Vegas_Hotel1F_EventScript_Owner_1:
# 80 "data/maps/Vegas_Hotel1F/scripts.pory"
	release
	end

Vegas_Hotel1F_EventScript_Owner_2:
# 72 "data/maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_OwnerPost
# 73 "data/maps/Vegas_Hotel1F/scripts.pory"
	closemessage
	goto Vegas_Hotel1F_EventScript_Owner_1


Vegas_Hotel1F_Text_OwnerPost::
# 87 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "That hidden move alone is not enough to\n"
	.string "have your pokemon light up dark spots.\l"
	.string "You'll need to know how to use it\l"
	.string "correct. I think someone at the old\l"
	.string "power plant can help you and maybe\l"
	.string "you'll help us back!$"

Vegas_Hotel1F_Text_OwnerHelp::
# 91 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "I've had enough of this power outage!\n"
	.string "Nobody thinks about how much money I'm\l"
	.string "loosing every hour without light. I've\l"
	.string "an idea. You boy! You look quite spry. Go\l"
	.string "take this HM and go see if you can do\l"
	.string "the work the government cannot.$"

Vegas_Hotel1F_Text_ExplainFlash::
# 95 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "That hidden move contains a blinding\n"
	.string "flash which can illuminate the dark\l"
	.string "places and should be able to turn on\l"
	.string "the lights. Go to the power plant and\l"
	.string "find a way to use that move to turn\l"
	.string "back on the lights!$"

Vegas_Hotel1F_Text_DoorManOpen::
# 99 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "Welcome to the Palatium Felix! Enjoy\n"
	.string "your time playing with us. Good luck!$"

Vegas_Hotel1F_Text_DoorManClose::
# 103 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "Excuse me sir, Palatium Felix is only for\n"
	.string "high rolling gamblers. We only welcome\l"
	.string "guests with a coin case. I do apologize.\l"
	.string "Have a nice day.$"

Vegas_Hotel1F_Text_DoorManCoinCase::
# 107 "data/maps/Vegas_Hotel1F/scripts.pory"
	.string "Whats that? You have got with you a\n"
	.string "coin case? Very sorry! It was just a\l"
	.string "mistake!$"
