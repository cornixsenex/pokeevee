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
	compare VAR_CITYCLARA_SCHOOL_STATE, 8
	goto_if_ne CityClara_EventScript_LeafBridge_2
	msgbox CityClara_Text_LeafBridge2
CityClara_EventScript_LeafBridge_1:
	closemessage
	destroy_field_pic 4
	applymovement 22, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

CityClara_EventScript_LeafBridge_2:
	msgbox CityClara_Text_LeafBridge
	goto CityClara_EventScript_LeafBridge_1


CityClara_EventScript_TownSign::
	lock
	msgbox CityClara_Text_TownSign
	closemessage
	release
	end


CityClara_EventScript_Senex::
	lockall
	faceplayer
	msgbox CityClara_Text_Senex1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CityClara_EventScript_Senex_2
	msgbox CityClara_Text_Senex3
CityClara_EventScript_Senex_1:
	closemessage
	releaseall
	end

CityClara_EventScript_Senex_2:
	msgbox CityClara_Text_Senex2
	goto CityClara_EventScript_Senex_1


CityClara_EventScript_Jessie::
	lockall
	faceplayer
	msgbox CityClara_Text_Jessie
	closemessage
	applymovement 14, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end


CityClara_EventScript_James::
	lockall
	faceplayer
	msgbox CityClara_Text_James
	closemessage
	applymovement 15, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end


CityClara_EventScript_RocketBlockA::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox CityClara_Text_RocketBlock1
	closemessage
	waitmovement 0
	applymovement 1, CityClara_Movement_RocketBlock1A
	applymovement 3, CityClara_Movement_RocketBlock2A
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
	waitmovement 0
	msgbox CityClara_Text_RocketBlock2
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
	waitmovement 0
	msgbox CityClara_Text_RocketBlock3
	closemessage
	applymovement 1, CityClara_Movement_RocketReturn1A
	applymovement 3, CityClara_Movement_RocketReturn2A
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
	waitmovement 0
	release
	return


CityClara_EventScript_RocketBlockB::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	msgbox CityClara_Text_RocketBlock1
	closemessage
	waitmovement 0
	applymovement 1, CityClara_Movement_RocketBlock1B
	applymovement 3, CityClara_Movement_RocketBlock2B
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceRight
	waitmovement 0
	msgbox CityClara_Text_RocketBlock2
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerFaceLeft
	waitmovement 0
	msgbox CityClara_Text_RocketBlock3
	closemessage
	applymovement 1, CityClara_Movement_RocketReturn1B
	applymovement 3, CityClara_Movement_RocketReturn2B
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Movement_PlayerReturn
	waitmovement 0
	release
	return


CityClara_EventScript_Rocket1::
	lock
	faceplayer
	msgbox CityClara_Text_Rocket1
	closemessage
	release
	return


CityClara_EventScript_Rocket2::
	lock
	faceplayer
	msgbox CityClara_Text_Rocket2
	closemessage
	release
	return


CityClara_Movement_RocketBlock1A:
	walk_down
	face_right
	step_end

CityClara_Movement_RocketBlock2A:
	walk_down
	walk_left
	step_end

CityClara_Movement_PlayerFaceLeft:
	face_left
	step_end

CityClara_Movement_PlayerFaceRight:
	face_right
	step_end

CityClara_Movement_RocketReturn1A:
	walk_up
	face_down
	step_end

CityClara_Movement_RocketReturn2A:
	walk_right
	walk_up
	face_down
	step_end

CityClara_Movement_PlayerReturn:
	walk_down
	walk_down
	step_end

CityClara_Movement_RocketBlock1B:
	walk_down
	walk_right
	step_end

CityClara_Movement_RocketBlock2B:
	walk_down
	face_left
	step_end

CityClara_Movement_RocketReturn1B:
	walk_left
	walk_up
	face_down
	step_end

CityClara_Movement_RocketReturn2B:
	walk_up
	face_down
	step_end

CityClara_Text_ClubSign::
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

CityClara_Text_TownSign::
	.string "City Saeclara built upon the lake$"

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

CityClara_Text_LeafBridge2::
	.string "Oh my gosh {PLAYER}! Is that the HM\n"
	.string "CUT? You are the best! Let's sneak into\l"
	.string "the church!$"

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

CityClara_Text_Senex1::
	.string "My boy come here, or no, are you a girl?\n"
	.string "Forgive me for my eyes are old as I\l"
	.string "have grown. Tell me would you ask me to\l"
	.string "speak and tell to you the tale of this\l"
	.string "city?$"

CityClara_Text_Senex2::
	.string "This place is ancient, older than I am.\n"
	.string "They say that people first lived on the\l"
	.string "lake thousands of years ago. Escpaing\l"
	.string "drought the elder race escaped across\l"
	.string "the sea and here observed a certain\l"
	.string "sign of fate. Upon the crystal clear\l"
	.string "basin surface a Charizard devoured\l"
	.string "it's own tail. The elders knew their\l"
	.string "fate: To build a town upon the lake in\l"
	.string "reverence of their god. And now\l"
	.string "thousands of years in the future is it\l"
	.string "coincedance that Mew is here?$"

CityClara_Text_Senex3::
	.string "No one has time for history these\n"
	.string "days...$"

CityClara_Text_RocketBlock1::
	.string "Hey You!$"

CityClara_Text_RocketBlock2::
	.string "Stop right there! Take not one more\n"
	.string "stop. This road is closed, we shall let\l"
	.string "no one pass.$"

CityClara_Text_RocketBlock3::
	.string "By order of the Rocket High Command\n"
	.string "only party business will be allowed\l"
	.string "until our mission has been completed.\l"
	.string "Now get thee gone, noone wants more\l"
	.string "trouble$"

CityClara_Text_Rocket1::
	.string "The Rocket Party helped me buy a home!\n"
	.string "Standing watch on the road's the very\l"
	.string "least I can do to pay back our dear\l"
	.string "leader.$"

CityClara_Text_Rocket2::
	.string "The party only wants the very best\n"
	.string "people to represent their interests.\l"
	.string "Perhaps with time, and practice, and\l"
	.string "some luck, you could one day wear our\l"
	.string "great uniform. Never forget the\l"
	.string "party's here for you.$"

CityClara_Text_Jessie::
	.string "This church is being occupied by the\n"
	.string "Rocket Party and we're watching the\l"
	.string "door. You'll have to get in line and wait\l"
	.string "your turn then pay the entrance fee to\l"
	.string "step inside.$"

CityClara_Text_James::
	.string "This town is so antique it's comical.\n"
	.string "Look at all these people waiting in line\l"
	.string "just for a glimpse of some old pokemon.\l"
	.string "The city is a better place to live and\l"
	.string "party people are superior.$"
