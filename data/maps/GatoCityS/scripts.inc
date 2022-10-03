GatoCityS_MapScripts::
	.byte 0


GatoCityS_WatchSeller::
	lock
	msgbox GatoCityS_Text_WatchSeller1
	waitmessage
	pokemart GatoCityS_Mart_WatchSeller
	msgbox GatoCityS_Text_WatchSeller2
	release
	end


	.align 2
GatoCityS_Mart_WatchSeller:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

GatoCityS_Text_WatchSeller1::
	.string "Hey kid, you wanna buy a watch? Come\n"
	.string "here.$"

GatoCityS_Text_WatchSeller2::
	.string "You don't know who I am! We never\n"
	.string "talked...$"
