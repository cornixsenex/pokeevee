Route4_MapScripts::
	.byte 0


Route4_EventScript_Delia::
	trainerbattle_single TRAINER_DELIA_AND_BONNIE, Route4_Text_DeliaIntro, Route4_Text_DeliaLost
	msgbox Route4_Text_DeliaPost
	closemessage
	end


Route4_EventScript_Bonnie::
	trainerbattle_single TRAINER_DELIA_AND_BONNIE, Route4_Text_BonnieIntro, Route4_Text_BonnieLost
	msgbox Route4_Text_BonniePost
	closemessage
	end


Route4_EventScript_Roy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Will::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Walton::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Lewis::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Liz::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Lindsey::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Lexy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Jeremy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Orion::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Kipland::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Mandy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Tecmessa::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Aias::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Les::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Sanjay::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Willie::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Harry::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Teucer::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Syra::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Sky::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Rocky::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Tyson::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Stu::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Ali::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Hektor::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Epeus::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Sandy::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Pygmalion::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Dido::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Betty::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Donovan::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Helen::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_Menelaus::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_FatMan::
	msgbox Route4_Text_Test
	closemessage
	end


Route4_EventScript_RocketTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route4_Text_Rocket1
	closemessage
	msgbox Route4_Text_Rocket2
	applymovement 14, Route4_Movement_RocketExit
	applymovement 15, Route4_Movement_RocketExit
	waitmovement 0
	removeobject 14
	removeobject 15
	setflag FLAG_ROUTE4_HIDEROCKETS
	setvar VAR_ROUTE4_STATE, 1
	release
	end


Route4_Movement_RocketExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route4_Text_DeliaIntro::
	.string "We just got out of school. We're here to\n"
	.string "play!$"

Route4_Text_DeliaLost::
	.string "Why don't you pick on someone your own\n"
	.string "size?$"

Route4_Text_DeliaPost::
	.string "We actually don't go to school no more.$"

Route4_Text_BonnieIntro::
	.string "Watch out Delia! This guy wants to\n"
	.string "fight.$"

Route4_Text_BonnieLost::
	.string "You sure showed us that you can beat\n"
	.string "us up.$"

Route4_Text_BonniePost::
	.string "I hope we never see your face again.$"

Route4_Text_Test::
	.string "Just a Test Message srry$"

Route4_Text_Rocket1::
	.string "This is no good what will we tell the\n"
	.string "boss?$"

Route4_Text_Rocket2::
	.string "Don't worry about that, leave it to me.\n"
	.string "There's no sign of her out here\l"
	.string "anyways...$"
