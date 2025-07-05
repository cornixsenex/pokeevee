MareS1_MapScripts::
	.byte 0


Script_Tombstone_Default::
# 10 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Default
# 11 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jesus::
# 16 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jesus
# 17 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Tombstone_Text_Default::
# 25 "data/maps/MareS1/scripts.pory"
	.string "The inscription is too faded to read$"

Tombstone_Text_Jesus::
# 29 "data/maps/MareS1/scripts.pory"
	.string "IESUS NAZARENUS\n"
	.string "DCCLVIII - DCCXC$"
