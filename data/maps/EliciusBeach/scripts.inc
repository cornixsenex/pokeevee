EliciusBeach_MapScripts::
# 4 "data/maps/EliciusBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_ROUTE9_CLEARBLOCK, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/EliciusBeach/scripts.pory"
	goto_if_set FLAG_LEAF_ISGF, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/EliciusBeach/scripts.pory"
	setflag FLAG_ROUTE9_CLEARBLOCK
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowMisty
	goto EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/EliciusBeach/scripts.pory"
	call Tranquilitas_Script_ShowLeaf
	return

EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 14 "data/maps/EliciusBeach/scripts.pory"
	goto_if_unset FLAG_TRANQUILITAS_SURFSCHOOL_OPEN, EliciusBeach_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return


Tranquilitas_Script_ShowLeaf::
# 22 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_LEAF, 4, 19
# 23 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_LEAF, MOVEMENT_TYPE_LOOK_AROUND
	return


Tranquilitas_Script_ShowMisty::
# 28 "data/maps/EliciusBeach/scripts.pory"
	setobjectxyperm LOCALID_MISTY, 24, 27
# 29 "data/maps/EliciusBeach/scripts.pory"
	setobjectmovementtype LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
	return


Tranquilitas_Script_Misty::
# 34 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 35 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_MistyBlock
# 36 "data/maps/EliciusBeach/scripts.pory"
	closemessage
# 37 "data/maps/EliciusBeach/scripts.pory"
	applymovement LOCALID_MISTY, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/EliciusBeach/scripts.pory"
	waitmovement 0
	end


Tranquilitas_Script_Leaf::
	end


Tranquilitas_Script_TouristF::
# 48 "data/maps/EliciusBeach/scripts.pory"
	faceplayer
# 49 "data/maps/EliciusBeach/scripts.pory"
	msgbox Tranquilitas_Text_TouristF
# 50 "data/maps/EliciusBeach/scripts.pory"
	closemessage
	end


Tranquilitas_Text_TouristF::
# 54 "data/maps/EliciusBeach/scripts.pory"
	.string "I quit my job to go on vacation.$"

Tranquilitas_Text_MistyBlock::
# 58 "data/maps/EliciusBeach/scripts.pory"
	.string "I'm sorry sir, but the Surf School is\n"
	.string "booked all season long. I haven't any\l"
	.string "room for single registration, but I\l"
	.string "might be able to accomodate a pair. If\l"
	.string "you find someone to sign up with you\l"
	.string "come speak with me. I'll try to fit you\l"
	.string "in!$"
