Route6_MapScripts::
	.byte 0


Route6_EventScript_GirafarigSign::
	msgbox Route6_Text_GirafarigSign
	closemessage
	end


Route6_EventScript_UrsaringSign::
	msgbox Route6_Text_UrsaringSign
	closemessage
	end


Route6_EventScript_MonfernoSign::
	msgbox Route6_Text_MonfernoSign
	closemessage
	end


Route6_EventScript_PiplupSign::
	msgbox Route6_Text_PiplupSign
	closemessage
	end


Route6_EventScript_SavannaSign::
	msgbox Route6_Text_SavannaSign
	closemessage
	end


Route6_EventScript_JesseAndJames::
	lock
	setvar VAR_ROUTE6_STATE, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 17, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Route6_Text_Jesse1
	closemessage
	applymovement 17, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route6_Text_Meowth1
	closemessage
	applymovement 15, Route6_Movement_JesseApproachPikachu
	applymovement 18, Route6_Movement_JamesApproachPikachu
	applymovement 16, Route6_Movement_MeowthApproachPikachu
	waitmovement 0
	applymovement 17, Common_Movement_WalkUp
	waitmovement 0
	applymovement 15, Route6_Movement_JesseTakePikachu
	applymovement 18, Route6_Movement_JamesTakePikachu
	applymovement 16, Route6_Movement_MeowthTakePikachu
	waitmovement 0
	playmoncry SPECIES_PIKACHU, 0
	fadescreen 1
	waitmoncry
	removeobject 17
	fadescreen 0
	msgbox Route6_Text_Jesse2
	closemessage
	msgbox Route6_Text_Meowth2
	closemessage
	msgbox Route6_Text_Jesse3
	closemessage
	applymovement 15, Route6_Movement_JesseExit
	applymovement 18, Route6_Movement_JesseExit
	waitmovement 0
	msgbox Route6_Text_Meowth3
	closemessage
	applymovement 16, Route6_Movement_JesseExit
	waitmovement 0
	removeobject 15
	removeobject 16
	removeobject 18
	setflag FLAG_ROUTE6_HIDEPIKACHU
	release
	end


Route6_EventScript_SafariManTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route6_Text_SafariMan1
	closemessage
	applymovement 25, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Route6_Text_SafariMan2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Movement_SafariBlock
	waitmovement 0
	release
	end


Route6_EventScript_SafariMan::
	lock
	faceplayer
	msgbox Route6_Text_SafariMan1
	closemessage
	msgbox Route6_Text_SafariMan2
	closemessage
	release
	end


Route6_Movement_JesseApproachPikachu:
	walk_diag_southeast
	face_right
	step_end

Route6_Movement_JamesApproachPikachu:
	walk_right
	step_end

Route6_Movement_MeowthApproachPikachu:
	walk_left
	step_end

Route6_Movement_JesseTakePikachu:
	walk_up
	face_right
	step_end

Route6_Movement_JamesTakePikachu:
	walk_diag_northeast
	face_up
	step_end

Route6_Movement_MeowthTakePikachu:
	walk_up
	face_left
	step_end

Route6_Movement_JesseExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route6_Movement_SafariBlock:
	walk_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route6_Text_GirafarigSign::
	.string "Girafarig the psychic giraffe pokemon$"

Route6_Text_UrsaringSign::
	.string "Ursaring the grateful bear pokemon$"

Route6_Text_MonfernoSign::
	.string "Monferno the monkey fire pokemon$"

Route6_Text_PiplupSign::
	.string "Piplup the baby penguin pokemon$"

Route6_Text_SavannaSign::
	.string "Scenes from the savanna! Rhyhorn,\n"
	.string "Hippopotas, and Luxray$"

Route6_Text_Jesse1::
	.string "We've got you now you god damned\n"
	.string "pikachu! After we've captured you\l"
	.string "you'll help us find and then destroy\l"
	.string "that boy who snuck into the church and\l"
	.string "embarressed us with the boss!$"

Route6_Text_Meowth1::
	.string "Hey! Not so fast! We've got you\n"
	.string "surrounded!$"

Route6_Text_Jesse2::
	.string "Next time we see that twerp his ass is\n"
	.string "toast! With this here pikachu we'll\l"
	.string "rough him up and win our favor back\l"
	.string "with our good boss1$"

Route6_Text_Meowth2::
	.string "Hey guys! Isn't that the same twerp\n"
	.string "right there?$"

Route6_Text_Jesse3::
	.string "Be quiet you don't know what you're\n"
	.string "saying! Lets all move out! He must be\l"
	.string "off this way$"

Route6_Text_Meowth3::
	.string "They think of me as the comic relief!$"

Route6_Text_SafariMan1::
	.string "I can't believe you're gone oh PIKACHU!$"

Route6_Text_SafariMan2::
	.string "You've got to help me find my PIKACHU!\n"
	.string "About this tall! Yellowish! Sparky\l"
	.string "thing that was just stolen by two\l"
	.string "wicked things!$"

Route6_Text_Test::
	.string "Just a Test Message srry$"
