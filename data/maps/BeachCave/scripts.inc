BeachCave_MapScripts::
# 7 "data/maps/BeachCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/BeachCave/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 10 "data/maps/BeachCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/BeachCave/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/BeachCave/scripts.pory"
	call BeachCave_Script_HideHector
	return


BeachCave_Script_HideHector::
# 17 "data/maps/BeachCave/scripts.pory"
	setobjectxyperm LOCALID_BEACHCAVE_HECTOR, 0, 0
# 18 "data/maps/BeachCave/scripts.pory"
	setobjectxyperm LOCALID_BEACHCAVE_HECTORTRAINER, 0, 0
# 19 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_HECTOR, MOVEMENT_TYPE_INVISIBLE
# 20 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_HECTORTRAINER, MOVEMENT_TYPE_INVISIBLE
# 21 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_LASS, MOVEMENT_TYPE_FACE_DOWN
	return


BeachCave_EventScript_Nick::
# 26 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_NICK, Route3_Text_NickIntro, Route3_Text_NickLost
# 27 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_NickPost
# 28 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_Script_Lass::
# 33 "data/maps/BeachCave/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 34 "data/maps/BeachCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_Script_Lass_1
# 34 "data/maps/BeachCave/scripts.pory"
	goto_if_set FLAG_GYMNASIUM_HECTORLEFT, BeachCave_Script_Lass_1
# 37 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Lass1, MSGBOX_NPC
	return

BeachCave_Script_Lass_1:
# 35 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Lass2, MSGBOX_NPC
	return


BeachCave_EventScript_Kyle::
# 42 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_KYLE, Route3_Text_KyleIntro, Route3_Text_KyleLost
# 43 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_KylePost
# 44 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Jed::
# 49 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_JED, Route3_Text_JedIntro, Route3_Text_JedLost
# 50 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_JedPost
# 51 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Rex::
# 56 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_REX, Route3_Text_RexIntro, Route3_Text_RexLost
# 57 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_RexPost
# 58 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Morgan::
# 63 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_MORGAN, Route3_Text_MorganIntro, Route3_Text_MorganLost
# 64 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_MorganPost
# 65 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Trevor::
# 70 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, Route3_Text_TrevorIntro, Route3_Text_TrevorLost
# 71 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_TrevorPost
# 72 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_Script_Hector::
# 77 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Hector, MSGBOX_NPC
	return


BeachCave_Script_HectorTrainer::
# 81 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_HectorTrainer1
# 82 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_HectorTrainer2, MSGBOX_NPC
	return


Route3_Text_NickIntro::
# 85 "data/maps/BeachCave/scripts.pory"
	.string "We come here to train! Yodaleeahooh!$"

Route3_Text_NickLost::
# 89 "data/maps/BeachCave/scripts.pory"
	.string "Not too bad kid$"

Route3_Text_NickPost::
# 93 "data/maps/BeachCave/scripts.pory"
	.string "This cave has gotten rather popular\n"
	.string "lately.$"

Route3_Text_KyleIntro::
# 97 "data/maps/BeachCave/scripts.pory"
	.string "I'm running first, then getting stoned\n"
	.string "lated.$"

Route3_Text_KyleLost::
# 101 "data/maps/BeachCave/scripts.pory"
	.string "Guess I was wrong, should have smoked a\n"
	.string "bowl first.$"

Route3_Text_KylePost::
# 105 "data/maps/BeachCave/scripts.pory"
	.string "Come let me know if you get a surfboard!$"

Route3_Text_JedIntro::
# 109 "data/maps/BeachCave/scripts.pory"
	.string "Hey kid have you ever talked to your\n"
	.string "dog?$"

Route3_Text_JedLost::
# 113 "data/maps/BeachCave/scripts.pory"
	.string "Looks like I head back home again.$"

Route3_Text_JedPost::
# 117 "data/maps/BeachCave/scripts.pory"
	.string "I moved out here last year from\n"
	.string "Tennessee!$"

Route3_Text_RexIntro::
# 121 "data/maps/BeachCave/scripts.pory"
	.string "Are you ready to build muscle and gain\n"
	.string "power over your life and in your core?$"

Route3_Text_RexLost::
# 125 "data/maps/BeachCave/scripts.pory"
	.string "I love the flag. I love my body too!$"

Route3_Text_RexPost::
# 129 "data/maps/BeachCave/scripts.pory"
	.string "You've got spunk kid, but you're still no\n"
	.string "black belt.$"

Route3_Text_MorganIntro::
# 133 "data/maps/BeachCave/scripts.pory"
	.string "Hey cutie do you want to dance with me?$"

Route3_Text_MorganLost::
# 137 "data/maps/BeachCave/scripts.pory"
	.string "Okay, that was awkward...$"

Route3_Text_MorganPost::
# 141 "data/maps/BeachCave/scripts.pory"
	.string "Leave me alone!$"

Route3_Text_TrevorIntro::
# 145 "data/maps/BeachCave/scripts.pory"
	.string "Oh dude watch out we're skoobin in the\n"
	.string "cave!$"

Route3_Text_TrevorLost::
# 149 "data/maps/BeachCave/scripts.pory"
	.string "Oh shit I think you just fucked up my\n"
	.string "hand.$"

Route3_Text_TrevorPost::
# 153 "data/maps/BeachCave/scripts.pory"
	.string "There's no way I'm going to pay for\n"
	.string "this...$"

BeachCave_Text_Hector::
# 157 "data/maps/BeachCave/scripts.pory"
	.string "I dedicate every waking moment to self\n"
	.string "improvement, pious discipline, and\l"
	.string "rightous action. Now, if you don't mind,\l"
	.string "please step aside. I must get back to\l"
	.string "work.$"

BeachCave_Text_HectorTrainer1::
# 164 "data/maps/BeachCave/scripts.pory"
	.string "Three! Four! Watch your breathing! Fix\n"
	.string "your form!$"

BeachCave_Text_HectorTrainer2::
# 168 "data/maps/BeachCave/scripts.pory"
	.string "Excuse me, but I'm much too busy\n"
	.string "training the mighty Hector to be\l"
	.string "bothered by some scrub like you. Get\l"
	.string "lost kid!$"

BeachCave_Text_Lass1::
# 172 "data/maps/BeachCave/scripts.pory"
	.string "All day and night I love to stand right\n"
	.string "here and watch Hector exercise his\l"
	.string "body.$"

BeachCave_Text_Lass2::
# 177 "data/maps/BeachCave/scripts.pory"
	.string "Since Hector's gone life hasn't been\n"
	.string "the same...$"
