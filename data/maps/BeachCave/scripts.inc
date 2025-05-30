BeachCave_MapScripts::
	.byte 0


BeachCave_EventScript_Nick::
# 9 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_NICK, Route3_Text_NickIntro, Route3_Text_NickLost
# 10 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_NickPost
# 11 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Kyle::
# 16 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_KYLE, Route3_Text_KyleIntro, Route3_Text_KyleLost
# 17 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_KylePost
# 18 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Jed::
# 23 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_JED, Route3_Text_JedIntro, Route3_Text_JedLost
# 24 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_JedPost
# 25 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Rex::
# 30 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_REX, Route3_Text_RexIntro, Route3_Text_RexLost
# 31 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_RexPost
# 32 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Morgan::
# 37 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_MORGAN, Route3_Text_MorganIntro, Route3_Text_MorganLost
# 38 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_MorganPost
# 39 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Trevor::
# 44 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, Route3_Text_TrevorIntro, Route3_Text_TrevorLost
# 45 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_TrevorPost
# 46 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Hector::
# 51 "data/maps/BeachCave/scripts.pory"
	lock
# 52 "data/maps/BeachCave/scripts.pory"
	faceplayer
# 53 "data/maps/BeachCave/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 54 "data/maps/BeachCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_EventScript_Hector_2
# 63 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Hector1
# 64 "data/maps/BeachCave/scripts.pory"
	closemessage
BeachCave_EventScript_Hector_1:
# 66 "data/maps/BeachCave/scripts.pory"
	release
	return

BeachCave_EventScript_Hector_2:
# 55 "data/maps/BeachCave/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_HECTOR
# 56 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Hector2
# 57 "data/maps/BeachCave/scripts.pory"
	closemessage
# 58 "data/maps/BeachCave/scripts.pory"
	fadescreenswapbuffers 1
# 59 "data/maps/BeachCave/scripts.pory"
	removeobject 7
# 60 "data/maps/BeachCave/scripts.pory"
	setflag FLAG_BEACHCAVE_HIDE_HECTOR
# 61 "data/maps/BeachCave/scripts.pory"
	fadescreenswapbuffers 0
	goto BeachCave_EventScript_Hector_1


Route3_Text_NickIntro::
# 69 "data/maps/BeachCave/scripts.pory"
	.string "We come here to train! Yodaleeahooh!$"

Route3_Text_NickLost::
# 73 "data/maps/BeachCave/scripts.pory"
	.string "Not too bad kid$"

Route3_Text_NickPost::
# 77 "data/maps/BeachCave/scripts.pory"
	.string "This cave has gotten rather popular\n"
	.string "lately.$"

Route3_Text_KyleIntro::
# 81 "data/maps/BeachCave/scripts.pory"
	.string "I'm running first, then getting stoned\n"
	.string "lated.$"

Route3_Text_KyleLost::
# 85 "data/maps/BeachCave/scripts.pory"
	.string "Guess I was wrong, should have smoked a\n"
	.string "bowl first.$"

Route3_Text_KylePost::
# 89 "data/maps/BeachCave/scripts.pory"
	.string "Come let me know if you get a surfboard!$"

Route3_Text_JedIntro::
# 93 "data/maps/BeachCave/scripts.pory"
	.string "Hey kid have you ever talked to your\n"
	.string "dog?$"

Route3_Text_JedLost::
# 97 "data/maps/BeachCave/scripts.pory"
	.string "Looks like I head back home again.$"

Route3_Text_JedPost::
# 101 "data/maps/BeachCave/scripts.pory"
	.string "I moved out here last year from\n"
	.string "Tennessee!$"

Route3_Text_RexIntro::
# 105 "data/maps/BeachCave/scripts.pory"
	.string "Are you ready to build muscle and gain\n"
	.string "power over your life and in your core?$"

Route3_Text_RexLost::
# 109 "data/maps/BeachCave/scripts.pory"
	.string "I love the flag. I love my body too!$"

Route3_Text_RexPost::
# 113 "data/maps/BeachCave/scripts.pory"
	.string "You've got spunk kid, but you're still no\n"
	.string "black belt.$"

Route3_Text_MorganIntro::
# 117 "data/maps/BeachCave/scripts.pory"
	.string "Hey cutie do you want to dance with me?$"

Route3_Text_MorganLost::
# 121 "data/maps/BeachCave/scripts.pory"
	.string "Okay, that was awkward...$"

Route3_Text_MorganPost::
# 125 "data/maps/BeachCave/scripts.pory"
	.string "Leave me alone!$"

Route3_Text_TrevorIntro::
# 129 "data/maps/BeachCave/scripts.pory"
	.string "Oh dude watch out we're skoobin in the\n"
	.string "cave!$"

Route3_Text_TrevorLost::
# 133 "data/maps/BeachCave/scripts.pory"
	.string "Oh shit I think you just fucked up my\n"
	.string "hand.$"

Route3_Text_TrevorPost::
# 137 "data/maps/BeachCave/scripts.pory"
	.string "There's no way I'm going to pay for\n"
	.string "this...$"

BeachCave_Text_Hector1::
# 141 "data/maps/BeachCave/scripts.pory"
	.string "Hello. My name is Hector, I'm from Troy. I\n"
	.string "dedicate every waking moment to self\l"
	.string "improvement, pious discipline, and\l"
	.string "rightous action. Go with God stranger.$"

BeachCave_Text_Hector2::
# 145 "data/maps/BeachCave/scripts.pory"
	.string "What's this invitation that you've\n"
	.string "brought me? My brother Paris will marry\l"
	.string "Helen? I must travel to Nestor's house\l"
	.string "at once!$"
