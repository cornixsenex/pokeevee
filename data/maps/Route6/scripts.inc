Route6_MapScripts::
	.byte 0


Route6_EventScript_GirafarigSign::
# 6 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_GirafarigSign
# 7 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_UrsaringSign::
# 12 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_UrsaringSign
# 13 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_MonfernoSign::
# 18 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_MonfernoSign
# 19 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_PiplupSign::
# 24 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_PiplupSign
# 25 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_SavannaSign::
# 30 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SavannaSign
# 31 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_JesseAndJames::
# 36 "data/maps/Route6/scripts.pory"
	lock
# 37 "data/maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_STATE, 1
# 38 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 39 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceLeft
# 41 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse1
# 43 "data/maps/Route6/scripts.pory"
	closemessage
# 44 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 45 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth1
# 47 "data/maps/Route6/scripts.pory"
	closemessage
# 48 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseApproachPikachu
# 49 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesApproachPikachu
# 50 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthApproachPikachu
# 51 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_WalkUp
# 53 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseTakePikachu
# 55 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesTakePikachu
# 56 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthTakePikachu
# 57 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route6/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 59 "data/maps/Route6/scripts.pory"
	fadescreen 1
# 60 "data/maps/Route6/scripts.pory"
	waitmoncry
# 61 "data/maps/Route6/scripts.pory"
	removeobject 17
# 62 "data/maps/Route6/scripts.pory"
	fadescreen 0
# 63 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse2
# 64 "data/maps/Route6/scripts.pory"
	closemessage
# 65 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth2
# 66 "data/maps/Route6/scripts.pory"
	closemessage
# 67 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse3
# 68 "data/maps/Route6/scripts.pory"
	closemessage
# 69 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseExit
# 70 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JesseExit
# 71 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth3
# 73 "data/maps/Route6/scripts.pory"
	closemessage
# 74 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_JesseExit
# 75 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route6/scripts.pory"
	removeobject 15
# 77 "data/maps/Route6/scripts.pory"
	removeobject 16
# 78 "data/maps/Route6/scripts.pory"
	removeobject 18
# 79 "data/maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_HIDEPIKACHU
# 80 "data/maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariManTrigger::
# 85 "data/maps/Route6/scripts.pory"
	lock
# 86 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 87 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 89 "data/maps/Route6/scripts.pory"
	closemessage
# 90 "data/maps/Route6/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 91 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 93 "data/maps/Route6/scripts.pory"
	closemessage
# 94 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Movement_SafariBlock
# 95 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariMan::
# 101 "data/maps/Route6/scripts.pory"
	lock
# 102 "data/maps/Route6/scripts.pory"
	faceplayer
# 103 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 104 "data/maps/Route6/scripts.pory"
	closemessage
# 105 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 106 "data/maps/Route6/scripts.pory"
	closemessage
# 107 "data/maps/Route6/scripts.pory"
	release
	end


# 111 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseApproachPikachu:
# 112 "data/maps/Route6/scripts.pory"
	walk_diag_southeast
# 113 "data/maps/Route6/scripts.pory"
	face_right
	step_end

# 116 "data/maps/Route6/scripts.pory"
Route6_Movement_JamesApproachPikachu:
# 117 "data/maps/Route6/scripts.pory"
	walk_right
	step_end

# 120 "data/maps/Route6/scripts.pory"
Route6_Movement_MeowthApproachPikachu:
# 121 "data/maps/Route6/scripts.pory"
	walk_left
	step_end

# 124 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseTakePikachu:
# 125 "data/maps/Route6/scripts.pory"
	walk_up
# 126 "data/maps/Route6/scripts.pory"
	face_right
	step_end

# 129 "data/maps/Route6/scripts.pory"
Route6_Movement_JamesTakePikachu:
# 130 "data/maps/Route6/scripts.pory"
	walk_diag_northeast
# 131 "data/maps/Route6/scripts.pory"
	face_up
	step_end

# 134 "data/maps/Route6/scripts.pory"
Route6_Movement_MeowthTakePikachu:
# 135 "data/maps/Route6/scripts.pory"
	walk_up
# 136 "data/maps/Route6/scripts.pory"
	face_left
	step_end

# 139 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseExit:
# 140 "data/maps/Route6/scripts.pory"
	walk_right
# 140 "data/maps/Route6/scripts.pory"
	walk_right
# 140 "data/maps/Route6/scripts.pory"
	walk_right
# 140 "data/maps/Route6/scripts.pory"
	walk_right
# 140 "data/maps/Route6/scripts.pory"
	walk_right
	step_end

# 143 "data/maps/Route6/scripts.pory"
Route6_Movement_SafariBlock:
# 144 "data/maps/Route6/scripts.pory"
	walk_down
# 145 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route6/scripts.pory"
	walk_fast_left
	step_end

Route6_Text_GirafarigSign::
# 150 "data/maps/Route6/scripts.pory"
	.string "Girafarig the psychic giraffe pokemon$"

Route6_Text_UrsaringSign::
# 154 "data/maps/Route6/scripts.pory"
	.string "Ursaring the grateful bear pokemon$"

Route6_Text_MonfernoSign::
# 158 "data/maps/Route6/scripts.pory"
	.string "Monferno the monkey fire pokemon$"

Route6_Text_PiplupSign::
# 162 "data/maps/Route6/scripts.pory"
	.string "Piplup the baby penguin pokemon$"

Route6_Text_SavannaSign::
# 166 "data/maps/Route6/scripts.pory"
	.string "Scenes from the savanna! Rhyhorn,\l"
	.string "Hippopotas, and Luxray$"

Route6_Text_Jesse1::
# 170 "data/maps/Route6/scripts.pory"
	.string "We've got you now you god damned\l"
	.string "pikachu! After we've captured you\l"
	.string "you'll help us find and then destroy\l"
	.string "that boy who snuck into the church and\l"
	.string "embarressed us with the boss!$"

Route6_Text_Meowth1::
# 174 "data/maps/Route6/scripts.pory"
	.string "Hey! Not so fast! We've got you\l"
	.string "surrounded!$"

Route6_Text_Jesse2::
# 178 "data/maps/Route6/scripts.pory"
	.string "Next time we see that twerp his ass is\l"
	.string "toast! With this here pikachu we'll\l"
	.string "rough him up and win our favor back with\l"
	.string "our good boss1$"

Route6_Text_Meowth2::
# 182 "data/maps/Route6/scripts.pory"
	.string "Hey guys! Isn't that the same twerp\l"
	.string "right there?$"

Route6_Text_Jesse3::
# 186 "data/maps/Route6/scripts.pory"
	.string "Be quiet you don't know what you're\l"
	.string "saying! Lets all move out! He must be\l"
	.string "off this way$"

Route6_Text_Meowth3::
# 190 "data/maps/Route6/scripts.pory"
	.string "They think of me as the comic relief!$"

Route6_Text_SafariMan1::
# 194 "data/maps/Route6/scripts.pory"
	.string "I can't believe you're gone oh PIKACHU!$"

Route6_Text_SafariMan2::
# 198 "data/maps/Route6/scripts.pory"
	.string "You've got to help me find my PIKACHU!\l"
	.string "About this tall! Yellowish! Sparky thing\l"
	.string "that was just stolen by two wicked\l"
	.string "things!$"

Route6_Text_Test::
# 216 "data/maps/Route6/scripts.pory"
	.string "Just a Test Message srry$"
