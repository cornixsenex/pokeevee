Vegas_Hotel1F_MapScripts::
	.byte 0


Vegas_Hotel1F_EventScript_Owner::
# 5 "data//maps/Vegas_Hotel1F/scripts.pory"
	lock
# 6 "data//maps/Vegas_Hotel1F/scripts.pory"
	faceplayer
# 7 "data//maps/Vegas_Hotel1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_FLASH, Vegas_Hotel1F_EventScript_Owner_2
# 11 "data//maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_OwnerHelp
# 12 "data//maps/Vegas_Hotel1F/scripts.pory"
	giveitem ITEM_HM05
# 13 "data//maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_ExplainFlash
# 14 "data//maps/Vegas_Hotel1F/scripts.pory"
	setflag FLAG_RECEIVED_FLASH
Vegas_Hotel1F_EventScript_Owner_1:
# 16 "data//maps/Vegas_Hotel1F/scripts.pory"
	release
	end

Vegas_Hotel1F_EventScript_Owner_2:
# 8 "data//maps/Vegas_Hotel1F/scripts.pory"
	msgbox Vegas_Hotel1F_Text_OwnerPost
# 9 "data//maps/Vegas_Hotel1F/scripts.pory"
	closemessage
	goto Vegas_Hotel1F_EventScript_Owner_1


Vegas_Hotel1F_Text_OwnerPost::
# 23 "data//maps/Vegas_Hotel1F/scripts.pory"
	.string "That hidden move alone is not enough to\n"
	.string "have your pokemon light up dark spots.\l"
	.string "You'll need to know how to use it\l"
	.string "correct. I think someone at the old\l"
	.string "power plant can help you and maybe\l"
	.string "you'll help us back!$"

Vegas_Hotel1F_Text_OwnerHelp::
# 27 "data//maps/Vegas_Hotel1F/scripts.pory"
	.string "I've had enough of this power outage!\n"
	.string "Nobody thinks about how much money I'm\l"
	.string "loosing every hour without light. I've\l"
	.string "an idea. You boy! You look quite spry. Go\l"
	.string "take this HM and go see if you can do\l"
	.string "the work the government cannot.$"

Vegas_Hotel1F_Text_ExplainFlash::
# 31 "data//maps/Vegas_Hotel1F/scripts.pory"
	.string "That hidden move contains a blinding\n"
	.string "flash which can illuminate the dark\l"
	.string "places and should be able to turn on\l"
	.string "the lights. Go to the power plant and\l"
	.string "find a way to use that move to turn\l"
	.string "back on the lights!$"
