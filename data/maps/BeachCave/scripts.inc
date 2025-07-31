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
	return

BeachCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/BeachCave/scripts.pory"
	call BeachCave_Script_HideHector
	return


BeachCave_Script_HideHector::
# 18 "data/maps/BeachCave/scripts.pory"
	setobjectxyperm LOCALID_BEACHCAVE_HECTOR, 0, 0
# 19 "data/maps/BeachCave/scripts.pory"
	setobjectxyperm LOCALID_BEACHCAVE_HECTORTRAINER, 0, 0
# 20 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_HECTOR, MOVEMENT_TYPE_INVISIBLE
# 21 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_HECTORTRAINER, MOVEMENT_TYPE_INVISIBLE
# 22 "data/maps/BeachCave/scripts.pory"
	setobjectmovementtype LOCALID_BEACHCAVE_LASS, MOVEMENT_TYPE_FACE_DOWN
	return


BeachCave_EventScript_Nick::
# 27 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_NICK, Route3_Text_NickIntro, Route3_Text_NickLost
# 28 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_NickPost
# 29 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_Script_Lass::
	return


BeachCave_EventScript_Kyle::
# 38 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_KYLE, Route3_Text_KyleIntro, Route3_Text_KyleLost
# 39 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_KylePost
# 40 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Jed::
# 45 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_JED, Route3_Text_JedIntro, Route3_Text_JedLost
# 46 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_JedPost
# 47 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Rex::
# 52 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_REX, Route3_Text_RexIntro, Route3_Text_RexLost
# 53 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_RexPost
# 54 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Morgan::
# 59 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_MORGAN, Route3_Text_MorganIntro, Route3_Text_MorganLost
# 60 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_MorganPost
# 61 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Trevor::
# 66 "data/maps/BeachCave/scripts.pory"
	trainerbattle_single TRAINER_TREVOR, Route3_Text_TrevorIntro, Route3_Text_TrevorLost
# 67 "data/maps/BeachCave/scripts.pory"
	msgbox Route3_Text_TrevorPost
# 68 "data/maps/BeachCave/scripts.pory"
	closemessage
	end


BeachCave_EventScript_Hector::
# 73 "data/maps/BeachCave/scripts.pory"
	lock
# 74 "data/maps/BeachCave/scripts.pory"
	faceplayer
# 75 "data/maps/BeachCave/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_HECTOR, 1
# 76 "data/maps/BeachCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BeachCave_EventScript_Hector_2
# 85 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Hector1
# 86 "data/maps/BeachCave/scripts.pory"
	closemessage
BeachCave_EventScript_Hector_1:
# 88 "data/maps/BeachCave/scripts.pory"
	release
	return

BeachCave_EventScript_Hector_2:
# 77 "data/maps/BeachCave/scripts.pory"
	removeitem ITEM_WEDDING_INVITATION_HECTOR
# 78 "data/maps/BeachCave/scripts.pory"
	msgbox BeachCave_Text_Hector2
# 79 "data/maps/BeachCave/scripts.pory"
	closemessage
# 80 "data/maps/BeachCave/scripts.pory"
	fadescreenswapbuffers 1
# 81 "data/maps/BeachCave/scripts.pory"
	removeobject 7
# 82 "data/maps/BeachCave/scripts.pory"
	setflag FLAG_BEACHCAVE_HIDE_HECTOR
# 83 "data/maps/BeachCave/scripts.pory"
	fadescreenswapbuffers 0
	goto BeachCave_EventScript_Hector_1


Route3_Text_NickIntro::
# 91 "data/maps/BeachCave/scripts.pory"
	.string "We come here to train! Yodaleeahooh!$"

Route3_Text_NickLost::
# 95 "data/maps/BeachCave/scripts.pory"
	.string "Not too bad kid$"

Route3_Text_NickPost::
# 99 "data/maps/BeachCave/scripts.pory"
	.string "This cave has gotten rather popular\n"
	.string "lately.$"

Route3_Text_KyleIntro::
# 103 "data/maps/BeachCave/scripts.pory"
	.string "I'm running first, then getting stoned\n"
	.string "lated.$"

Route3_Text_KyleLost::
# 107 "data/maps/BeachCave/scripts.pory"
	.string "Guess I was wrong, should have smoked a\n"
	.string "bowl first.$"

Route3_Text_KylePost::
# 111 "data/maps/BeachCave/scripts.pory"
	.string "Come let me know if you get a surfboard!$"

Route3_Text_JedIntro::
# 115 "data/maps/BeachCave/scripts.pory"
	.string "Hey kid have you ever talked to your\n"
	.string "dog?$"

Route3_Text_JedLost::
# 119 "data/maps/BeachCave/scripts.pory"
	.string "Looks like I head back home again.$"

Route3_Text_JedPost::
# 123 "data/maps/BeachCave/scripts.pory"
	.string "I moved out here last year from\n"
	.string "Tennessee!$"

Route3_Text_RexIntro::
# 127 "data/maps/BeachCave/scripts.pory"
	.string "Are you ready to build muscle and gain\n"
	.string "power over your life and in your core?$"

Route3_Text_RexLost::
# 131 "data/maps/BeachCave/scripts.pory"
	.string "I love the flag. I love my body too!$"

Route3_Text_RexPost::
# 135 "data/maps/BeachCave/scripts.pory"
	.string "You've got spunk kid, but you're still no\n"
	.string "black belt.$"

Route3_Text_MorganIntro::
# 139 "data/maps/BeachCave/scripts.pory"
	.string "Hey cutie do you want to dance with me?$"

Route3_Text_MorganLost::
# 143 "data/maps/BeachCave/scripts.pory"
	.string "Okay, that was awkward...$"

Route3_Text_MorganPost::
# 147 "data/maps/BeachCave/scripts.pory"
	.string "Leave me alone!$"

Route3_Text_TrevorIntro::
# 151 "data/maps/BeachCave/scripts.pory"
	.string "Oh dude watch out we're skoobin in the\n"
	.string "cave!$"

Route3_Text_TrevorLost::
# 155 "data/maps/BeachCave/scripts.pory"
	.string "Oh shit I think you just fucked up my\n"
	.string "hand.$"

Route3_Text_TrevorPost::
# 159 "data/maps/BeachCave/scripts.pory"
	.string "There's no way I'm going to pay for\n"
	.string "this...$"

BeachCave_Text_Hector1::
# 163 "data/maps/BeachCave/scripts.pory"
	.string "Hello. My name is Hector, I'm from Troy. I\n"
	.string "dedicate every waking moment to self\l"
	.string "improvement, pious discipline, and\l"
	.string "rightous action. Go with God stranger.$"

BeachCave_Text_Hector2::
# 167 "data/maps/BeachCave/scripts.pory"
	.string "What's this invitation that you've\n"
	.string "brought me? My brother Paris will marry\l"
	.string "Helen? I must travel to Nestor's house\l"
	.string "at once!$"
