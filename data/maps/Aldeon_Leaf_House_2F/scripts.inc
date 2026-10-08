Aldeon_Leaf_House_2F_MapScripts::
	.byte 0


Aldeon_Leaf_House_2F_EventScript_Bed::
# 6 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	lockall
# 7 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	msgbox Aldeon_Leaf_House_2F_Text_Bed, MSGBOX_YESNO
# 8 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	closemessage
# 9 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_2F_EventScript_Bed_2
Aldeon_Leaf_House_2F_EventScript_Bed_1:
# 12 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_2F_EventScript_Bed_2:
# 10 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_2F_EventScript_Bed_1


Aldeon_Leaf_House_2F_EventScript_PC::
# 17 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	lock
# 18 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	playse SE_PC_ON
# 19 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 20 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	goto EventScript_PCMainMenu
# 21 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	waitstate
# 22 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_2F_Text_Bed::
# 26 "data/maps/Aldeon_Leaf_House_2F/scripts.pory"
	.string "It's Leaf's bed!\p"
	.string "Would you like to take a rest?$"
