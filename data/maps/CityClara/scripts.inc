CityClara_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CityClara_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call CityClara_OnTransition
	return


CityClara_OnTransition::
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_OnTransition_2
CityClara_OnTransition_1:
	end

CityClara_OnTransition_2:
	setobjectxyperm 4, 39, 34
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 5, 30, 32
	setobjectmovementtype 5, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 6, 58, 12
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 8, 18, 40
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 9, 55, 25
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 12, 30, 38
	setobjectmovementtype 12, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 13, 39, 40
	setobjectmovementtype 13, MOVEMENT_TYPE_WANDER_AROUND
	goto CityClara_OnTransition_1


CityClara_EventScript_ClubSign::
	lock
	msgbox CityClara_Text_ClubSign
	closemessage
	release
	end


CityClara_EventScript_CannaWoman::
	lockall
	faceplayer
	msgbox CityClara_Text_CannaWoman
	closemessage
	releaseall
	end


CityClara_EventScript_GreenSuit::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_GreenSuit_2
	msgbox CityClara_Text_GreenSuit
CityClara_EventScript_GreenSuit_1:
	closemessage
	release
	end

CityClara_EventScript_GreenSuit_2:
	msgbox CityClara_Text_GreenSuit2
	goto CityClara_EventScript_GreenSuit_1


CityClara_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_FatMan_2
	msgbox CityClara_Text_FatMan
CityClara_EventScript_FatMan_1:
	closemessage
	release
	end

CityClara_EventScript_FatMan_2:
	msgbox CityClara_Text_FatMan2
	goto CityClara_EventScript_FatMan_1


CityClara_EventScript_WomanA::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_WomanA_2
	msgbox CityClara_Text_WomanA
CityClara_EventScript_WomanA_1:
	closemessage
	release
	end

CityClara_EventScript_WomanA_2:
	msgbox CityClara_Text_WomanA2
	goto CityClara_EventScript_WomanA_1


CityClara_EventScript_RedWoman::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_RedWoman_2
	msgbox CityClara_Text_RedWoman
CityClara_EventScript_RedWoman_1:
	closemessage
	release
	end

CityClara_EventScript_RedWoman_2:
	msgbox CityClara_Text_RedWoman2
	goto CityClara_EventScript_RedWoman_1


CityClara_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldMan_2
	msgbox CityClara_Text_OldMan
CityClara_EventScript_OldMan_1:
	closemessage
	release
	end

CityClara_EventScript_OldMan_2:
	msgbox CityClara_Text_OldMan2
	goto CityClara_EventScript_OldMan_1


CityClara_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_OldWoman_2
	msgbox CityClara_Text_OldWoman
CityClara_EventScript_OldWoman_1:
	closemessage
	release
	end

CityClara_EventScript_OldWoman_2:
	msgbox CityClara_Text_OldWoman2
	goto CityClara_EventScript_OldWoman_1


CityClara_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_CLARACITY_AFTERMEW, CityClara_EventScript_Lass_2
	msgbox CityClara_Text_Lass
CityClara_EventScript_Lass_1:
	closemessage
	release
	end

CityClara_EventScript_Lass_2:
	msgbox CityClara_Text_Lass2
	goto CityClara_EventScript_Lass_1


CityClara_EventScript_LeafBridge::
	lock
	faceplayer
	load_field_pic 4, 190, 98
	msgbox CityClara_Text_LeafBridge
	closemessage
	destroy_field_pic 4
	applymovement 22, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end


CityClara_Text_ClubSign::
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_CannaWoman::
	.string "You see this building here? The Chronic\n"
	.string "Club? They got me so high I can barely\l"
	.string "walk!$"

CityClara_Text_LeafBridge::
	.string "I can't believe how long this line\n"
	.string "appears! We'll wait all day and night to\l"
	.string "move halfway up to the top. Oh\l"
	.string "{PLAYER} I bet you could find\l"
	.string "another way we could sneak around.\l"
	.string "Maybe you could learn how to cut down\l"
	.string "trees and we could sneak in, go around\l"
	.string "the back! I bet they teach you how to\l"
	.string "cut down trees and things like that if\l"
	.string "you go to the school! I've never been\l"
	.string "myself but you should go! The school is\l"
	.string "that orange building over there on the\l"
	.string "corner of the south eastern street.$"

CityClara_Text_GreenSuit::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_GreenSuit2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_FatMan::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_FatMan2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_WomanA::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_WomanA2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_RedWoman::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_RedWoman2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldMan::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldMan2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_OldWoman::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_OldWoman2::
	.string "I trust the Party to take care of Mew.$"

CityClara_Text_Lass::
	.string "I'm first in line because I payed for it.$"

CityClara_Text_Lass2::
	.string "I trust the Party to take care of Mew.$"
