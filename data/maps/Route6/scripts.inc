Route6_MapScripts::
# 10 "data//maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/Route6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route6
# 12 "data//maps/Route6/scripts.pory"
	switch VAR_RESULT
# 13 "data//maps/Route6/scripts.pory"
	case 1, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data//maps/Route6/scripts.pory"
	case 2, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data//maps/Route6/scripts.pory"
	case 3, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route6_Script_Transition_ViaLitoralis::
# 27 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 28 "data//maps/Route6/scripts.pory"
	special TransitionMapMusic
# 29 "data//maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_Script_Transition_VillaVivaria::
# 33 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 34 "data//maps/Route6/scripts.pory"
	special TransitionMapMusic
# 35 "data//maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_Script_Transition_SinusPacificus::
# 39 "data//maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 40 "data//maps/Route6/scripts.pory"
	special TransitionMapMusic
# 41 "data//maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_EventScript_GirafarigSign::
# 46 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_GirafarigSign
# 47 "data//maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_UrsaringSign::
# 52 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_UrsaringSign
# 53 "data//maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_MonfernoSign::
# 58 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_MonfernoSign
# 59 "data//maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_PiplupSign::
# 64 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_PiplupSign
# 65 "data//maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_SavannaSign::
# 70 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_SavannaSign
# 71 "data//maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_JesseAndJames::
# 76 "data//maps/Route6/scripts.pory"
	lock
# 77 "data//maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_STATE, 1
# 78 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 79 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 80 "data//maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceLeft
# 81 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 82 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse1
# 83 "data//maps/Route6/scripts.pory"
	closemessage
# 84 "data//maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 85 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 86 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth1
# 87 "data//maps/Route6/scripts.pory"
	closemessage
# 88 "data//maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseApproachPikachu
# 89 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesApproachPikachu
# 90 "data//maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthApproachPikachu
# 91 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 92 "data//maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_WalkUp
# 93 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 94 "data//maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseTakePikachu
# 95 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesTakePikachu
# 96 "data//maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthTakePikachu
# 97 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 98 "data//maps/Route6/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 99 "data//maps/Route6/scripts.pory"
	fadescreen 1
# 100 "data//maps/Route6/scripts.pory"
	waitmoncry
# 101 "data//maps/Route6/scripts.pory"
	removeobject 17
# 102 "data//maps/Route6/scripts.pory"
	fadescreen 0
# 103 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse2
# 104 "data//maps/Route6/scripts.pory"
	closemessage
# 105 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth2
# 106 "data//maps/Route6/scripts.pory"
	closemessage
# 107 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse3
# 108 "data//maps/Route6/scripts.pory"
	closemessage
# 109 "data//maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseExit
# 110 "data//maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JesseExit
# 111 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 112 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth3
# 113 "data//maps/Route6/scripts.pory"
	closemessage
# 114 "data//maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_JesseExit
# 115 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 116 "data//maps/Route6/scripts.pory"
	removeobject 15
# 117 "data//maps/Route6/scripts.pory"
	removeobject 16
# 118 "data//maps/Route6/scripts.pory"
	removeobject 18
# 119 "data//maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_HIDEPIKACHU
# 120 "data//maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariManTrigger::
# 125 "data//maps/Route6/scripts.pory"
	lock
# 126 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 127 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 128 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 129 "data//maps/Route6/scripts.pory"
	closemessage
# 130 "data//maps/Route6/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 131 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 132 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 133 "data//maps/Route6/scripts.pory"
	closemessage
# 134 "data//maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Movement_SafariBlock
# 135 "data//maps/Route6/scripts.pory"
	waitmovement 0
# 136 "data//maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariMan::
# 141 "data//maps/Route6/scripts.pory"
	lock
# 142 "data//maps/Route6/scripts.pory"
	faceplayer
# 143 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 144 "data//maps/Route6/scripts.pory"
	closemessage
# 145 "data//maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 146 "data//maps/Route6/scripts.pory"
	closemessage
# 147 "data//maps/Route6/scripts.pory"
	release
	end


# 151 "data//maps/Route6/scripts.pory"
Route6_Movement_JesseApproachPikachu:
# 152 "data//maps/Route6/scripts.pory"
	walk_diag_southeast
# 153 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 156 "data//maps/Route6/scripts.pory"
Route6_Movement_JamesApproachPikachu:
# 157 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 160 "data//maps/Route6/scripts.pory"
Route6_Movement_MeowthApproachPikachu:
# 161 "data//maps/Route6/scripts.pory"
	walk_left
	step_end

# 164 "data//maps/Route6/scripts.pory"
Route6_Movement_JesseTakePikachu:
# 165 "data//maps/Route6/scripts.pory"
	walk_up
# 166 "data//maps/Route6/scripts.pory"
	face_right
	step_end

# 169 "data//maps/Route6/scripts.pory"
Route6_Movement_JamesTakePikachu:
# 170 "data//maps/Route6/scripts.pory"
	walk_diag_northeast
# 171 "data//maps/Route6/scripts.pory"
	face_up
	step_end

# 174 "data//maps/Route6/scripts.pory"
Route6_Movement_MeowthTakePikachu:
# 175 "data//maps/Route6/scripts.pory"
	walk_up
# 176 "data//maps/Route6/scripts.pory"
	face_left
	step_end

# 179 "data//maps/Route6/scripts.pory"
Route6_Movement_JesseExit:
# 180 "data//maps/Route6/scripts.pory"
	walk_right
# 180 "data//maps/Route6/scripts.pory"
	walk_right
# 180 "data//maps/Route6/scripts.pory"
	walk_right
# 180 "data//maps/Route6/scripts.pory"
	walk_right
# 180 "data//maps/Route6/scripts.pory"
	walk_right
	step_end

# 183 "data//maps/Route6/scripts.pory"
Route6_Movement_SafariBlock:
# 184 "data//maps/Route6/scripts.pory"
	walk_down
# 185 "data//maps/Route6/scripts.pory"
	walk_fast_left
# 185 "data//maps/Route6/scripts.pory"
	walk_fast_left
# 185 "data//maps/Route6/scripts.pory"
	walk_fast_left
# 185 "data//maps/Route6/scripts.pory"
	walk_fast_left
	step_end

Route6_Text_GirafarigSign::
# 190 "data//maps/Route6/scripts.pory"
	.string "Girafarig the psychic giraffe pokemon$"

Route6_Text_UrsaringSign::
# 194 "data//maps/Route6/scripts.pory"
	.string "Ursaring the grateful bear pokemon$"

Route6_Text_MonfernoSign::
# 198 "data//maps/Route6/scripts.pory"
	.string "Monferno the monkey fire pokemon$"

Route6_Text_PiplupSign::
# 202 "data//maps/Route6/scripts.pory"
	.string "Piplup the baby penguin pokemon$"

Route6_Text_SavannaSign::
# 206 "data//maps/Route6/scripts.pory"
	.string "Scenes from the savanna! Rhyhorn,\n"
	.string "Hippopotas, and Luxray$"

Route6_Text_Jesse1::
# 210 "data//maps/Route6/scripts.pory"
	.string "We've got you now you god damned\n"
	.string "pikachu! After we've captured you\l"
	.string "you'll help us find and then destroy\l"
	.string "that boy who snuck into the church and\l"
	.string "embarressed us with the boss!$"

Route6_Text_Meowth1::
# 214 "data//maps/Route6/scripts.pory"
	.string "Hey! Not so fast! We've got you\n"
	.string "surrounded!$"

Route6_Text_Jesse2::
# 218 "data//maps/Route6/scripts.pory"
	.string "Next time we see that twerp his ass is\n"
	.string "toast! With this here pikachu we'll\l"
	.string "rough him up and win our favor back with\l"
	.string "our good boss1$"

Route6_Text_Meowth2::
# 222 "data//maps/Route6/scripts.pory"
	.string "Hey guys! Isn't that the same twerp\n"
	.string "right there?$"

Route6_Text_Jesse3::
# 226 "data//maps/Route6/scripts.pory"
	.string "Be quiet you don't know what you're\n"
	.string "saying! Lets all move out! He must be\l"
	.string "off this way$"

Route6_Text_Meowth3::
# 230 "data//maps/Route6/scripts.pory"
	.string "They think of me as the comic relief!$"

Route6_Text_SafariMan1::
# 234 "data//maps/Route6/scripts.pory"
	.string "I can't believe you're gone oh PIKACHU!$"

Route6_Text_SafariMan2::
# 238 "data//maps/Route6/scripts.pory"
	.string "You've got to help me find my PIKACHU!\n"
	.string "About this tall! Yellowish! Sparky thing\l"
	.string "that was just stolen by two wicked\l"
	.string "things!$"

Route6_Text_Test::
# 256 "data//maps/Route6/scripts.pory"
	.string "Just a Test Message srry$"
