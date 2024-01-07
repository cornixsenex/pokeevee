BeachCave_MapScripts::
	.byte 0


BeachCave_EventScript_Nick::
# 5 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_NICK, Route3_Text_NickIntro, Route3_Text_NickLost
# 6 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_NickPost
# 7 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Kyle::
# 12 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_KYLE, Route3_Text_KyleIntro, Route3_Text_KyleLost
# 13 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_KylePost
# 14 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Jed::
# 19 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_JED, Route3_Text_JedIntro, Route3_Text_JedLost
# 20 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_JedPost
# 21 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Rex::
# 26 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_REX, Route3_Text_RexIntro, Route3_Text_RexLost
# 27 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_RexPost
# 28 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Morgan::
# 33 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_MORGAN, Route3_Text_MorganIntro, Route3_Text_MorganLost
# 34 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_MorganPost
# 35 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Trevor::
# 40 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, Route3_Text_TrevorIntro, Route3_Text_TrevorLost
# 41 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_TrevorPost
# 42 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Hector::
# 47 "data/maps/BeachCave/scripts.pory"
	lock
# 48 "data/maps/BeachCave/scripts.pory"
	faceplayer
# 49 "data/maps/BeachCave/scripts.pory"
	checkitem ITEM_DIPLOMA, 1
# 50 "data/maps/BeachCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_EventScript_Hector_2
# 53 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_EventScript_Hector_Text_1
BeachCave_EventScript_Hector_1:
# 55 "data/maps/BeachCave/scripts.pory"
	closemessage
	return

BeachCave_EventScript_Hector_2:
# 51 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_EventScript_Hector_Text_0
	goto BeachCave_EventScript_Hector_1


BeachCave_EventScript_Hector_Text_0:
# 51 "data/maps/BeachCave/scripts.pory"
	.string "ENGLISH$"

BeachCave_EventScript_Hector_Text_1:
# 53 "data/maps/BeachCave/scripts.pory"
	.string "LATINA$"

Route3_Text_NickIntro::
# 58 "data/maps/BeachCave/scripts.pory"
	.string "We come here to train! Yodaleeahooh!$"

Route3_Text_NickLost::
# 62 "data/maps/BeachCave/scripts.pory"
	.string "Not too bad kid$"

Route3_Text_NickPost::
# 66 "data/maps/BeachCave/scripts.pory"
	.string "This cave has gotten rather popular\n"
	.string "lately.$"

Route3_Text_KyleIntro::
# 70 "data/maps/BeachCave/scripts.pory"
	.string "I'm running first, then getting stoned\n"
	.string "lated.$"

Route3_Text_KyleLost::
# 74 "data/maps/BeachCave/scripts.pory"
	.string "Guess I was wrong, should have smoked a\n"
	.string "bowl first.$"

Route3_Text_KylePost::
# 78 "data/maps/BeachCave/scripts.pory"
	.string "Come let me know if you get a surfboard!$"

Route3_Text_JedIntro::
# 82 "data/maps/BeachCave/scripts.pory"
	.string "Hey kid have you ever talked to your\n"
	.string "dog?$"

Route3_Text_JedLost::
# 86 "data/maps/BeachCave/scripts.pory"
	.string "Looks like I head back home again.$"

Route3_Text_JedPost::
# 90 "data/maps/BeachCave/scripts.pory"
	.string "I moved out here last year from\n"
	.string "Tennessee!$"

Route3_Text_RexIntro::
# 94 "data/maps/BeachCave/scripts.pory"
	.string "Are you ready to build muscle and gain\n"
	.string "power over your life and in your core?$"

Route3_Text_RexLost::
# 98 "data/maps/BeachCave/scripts.pory"
	.string "I love the flag. I love my body too!$"

Route3_Text_RexPost::
# 102 "data/maps/BeachCave/scripts.pory"
	.string "You've got spunk kid, but you're still no\n"
	.string "black belt.$"

Route3_Text_MorganIntro::
# 106 "data/maps/BeachCave/scripts.pory"
	.string "Hey cutie do you want to dance with me?$"

Route3_Text_MorganLost::
# 110 "data/maps/BeachCave/scripts.pory"
	.string "Okay, that was awkward...$"

Route3_Text_MorganPost::
# 114 "data/maps/BeachCave/scripts.pory"
	.string "Leave me alone!$"

Route3_Text_TrevorIntro::
# 118 "data/maps/BeachCave/scripts.pory"
	.string "Oh dude watch out we're skoobin in the\n"
	.string "cave!$"

Route3_Text_TrevorLost::
# 122 "data/maps/BeachCave/scripts.pory"
	.string "Oh shit I think you just fucked up my\n"
	.string "hand.$"

Route3_Text_TrevorPost::
# 126 "data/maps/BeachCave/scripts.pory"
	.string "There's no way I'm going to pay for\n"
	.string "this...$"
