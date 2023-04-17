BeachCave_MapScripts::
	.byte 0


BeachCave_EventScript_Nick::
	trainerbattle_single TRAINER_NICK, Route3_Text_NickIntro, Route3_Text_NickLost
	msgbox Route3_Text_NickPost
	closemessage
	end


BeachCave_EventScript_Kyle::
	trainerbattle_single TRAINER_KYLE, Route3_Text_KyleIntro, Route3_Text_KyleLost
	msgbox Route3_Text_KylePost
	closemessage
	end


BeachCave_EventScript_Jed::
	trainerbattle_single TRAINER_JED, Route3_Text_JedIntro, Route3_Text_JedLost
	msgbox Route3_Text_JedPost
	closemessage
	end


BeachCave_EventScript_Rex::
	trainerbattle_single TRAINER_REX, Route3_Text_RexIntro, Route3_Text_RexLost
	msgbox Route3_Text_RexPost
	closemessage
	end


BeachCave_EventScript_Morgan::
	trainerbattle_single TRAINER_MORGAN, Route3_Text_MorganIntro, Route3_Text_MorganLost
	msgbox Route3_Text_MorganPost
	closemessage
	end


BeachCave_EventScript_Trevor::
	trainerbattle_single TRAINER_TREVOR, Route3_Text_TrevorIntro, Route3_Text_TrevorLost
	msgbox Route3_Text_TrevorPost
	closemessage
	end


BeachCave_EventScript_Hector::
	lock
	faceplayer
	checkitem ITEM_DIPLOMA, 1
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_EventScript_Hector_2
	msgbox BeachCave_EventScript_Hector_Text_1
BeachCave_EventScript_Hector_1:
	closemessage
	return

BeachCave_EventScript_Hector_2:
	msgbox BeachCave_EventScript_Hector_Text_0
	goto BeachCave_EventScript_Hector_1


BeachCave_EventScript_Hector_Text_0:
	.string "ENGLISH$"

BeachCave_EventScript_Hector_Text_1:
	.string "LATINA$"

Route3_Text_NickIntro::
	.string "We come here to train! Yodaleeahooh!$"

Route3_Text_NickLost::
	.string "Not too bad kid$"

Route3_Text_NickPost::
	.string "This cave has gotten rather popular\n"
	.string "lately.$"

Route3_Text_KyleIntro::
	.string "I'm running first, then getting stoned\n"
	.string "lated.$"

Route3_Text_KyleLost::
	.string "Guess I was wrong, should have smoked a\n"
	.string "bowl first.$"

Route3_Text_KylePost::
	.string "Come let me know if you get a surfboard!$"

Route3_Text_JedIntro::
	.string "Hey kid have you ever talked to your\n"
	.string "dog?$"

Route3_Text_JedLost::
	.string "Looks like I head back home again.$"

Route3_Text_JedPost::
	.string "I moved out here last year from\n"
	.string "Tennessee!$"

Route3_Text_RexIntro::
	.string "Are you ready to build muscle and gain\n"
	.string "power over your life and in your core?$"

Route3_Text_RexLost::
	.string "I love the flag. I love my body too!$"

Route3_Text_RexPost::
	.string "You've got spunk kid, but you're still no\n"
	.string "black belt.$"

Route3_Text_MorganIntro::
	.string "Hey cutie do you want to dance with me?$"

Route3_Text_MorganLost::
	.string "Okay, that was awkward...$"

Route3_Text_MorganPost::
	.string "Leave me alone!$"

Route3_Text_TrevorIntro::
	.string "Oh dude watch out we're skoobin in the\n"
	.string "cave!$"

Route3_Text_TrevorLost::
	.string "Oh shit I think you just fucked up my\n"
	.string "hand.$"

Route3_Text_TrevorPost::
	.string "There's no way I'm going to pay for\n"
	.string "this...$"
