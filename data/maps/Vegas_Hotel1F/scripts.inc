Vegas_Hotel1F_MapScripts::
	.byte 0


Vegas_Hotel1F_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FLASH, Vegas_Hotel1F_EventScript_Owner_2
	msgbox Vegas_Hotel1F_Text_OwnerHelp
	giveitem ITEM_HM05
	msgbox Vegas_Hotel1F_Text_ExplainFlash
	setflag FLAG_RECEIVED_FLASH
Vegas_Hotel1F_EventScript_Owner_1:
	release
	end

Vegas_Hotel1F_EventScript_Owner_2:
	msgbox Vegas_Hotel1F_Text_OwnerPost
	closemessage
	goto Vegas_Hotel1F_EventScript_Owner_1


Vegas_Hotel1F_Text_OwnerPost::
	.string "That hidden move alone is not enough to\n"
	.string "have your pokemon light up dark spots.\l"
	.string "You'll need to know how to use it\l"
	.string "correct. I think someone at the old\l"
	.string "power plant can help you and maybe\l"
	.string "you'll help us back!$"

Vegas_Hotel1F_Text_OwnerHelp::
	.string "I've had enough of this power outage!\n"
	.string "Nobody thinks about how much money I'm\l"
	.string "loosing every hour without light. I've\l"
	.string "an idea. You boy! You look quite spry.\l"
	.string "Go take this HM and go see if you can\l"
	.string "do the work the government cannot.$"

Vegas_Hotel1F_Text_ExplainFlash::
	.string "That hidden move contains a blinding\n"
	.string "flash which can illuminate the dark\l"
	.string "places and should be able to turn on\l"
	.string "the lights. Go to the power plant and\l"
	.string "find a way to use that move to turn\l"
	.string "back on the lights!$"
