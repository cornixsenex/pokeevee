Route6_MapScripts::
# 10 "data/maps/Route6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route6
# 12 "data/maps/Route6/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/Route6/scripts.pory"
	case 1, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/Route6/scripts.pory"
	case 2, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/Route6/scripts.pory"
	case 3, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route6_Script_Transition_ViaLitoralis::
# 27 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 28 "data/maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_Script_Transition_VillaVivaria::
# 32 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 33 "data/maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_Script_Transition_SinusPacificus::
# 37 "data/maps/Route6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 38 "data/maps/Route6/scripts.pory"
	special ShowMapNamePopup
	return


Route6_EventScript_GirafarigSign::
# 43 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_GirafarigSign
# 44 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_UrsaringSign::
# 49 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_UrsaringSign
# 50 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_MonfernoSign::
# 55 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_MonfernoSign
# 56 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_PiplupSign::
# 61 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_PiplupSign
# 62 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_SavannaSign::
# 67 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SavannaSign
# 68 "data/maps/Route6/scripts.pory"
	closemessage
	end


Route6_EventScript_JesseAndJames::
# 73 "data/maps/Route6/scripts.pory"
	lock
# 74 "data/maps/Route6/scripts.pory"
	setvar VAR_ROUTE6_STATE, 1
# 75 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 76 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceLeft
# 78 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse1
# 80 "data/maps/Route6/scripts.pory"
	closemessage
# 81 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 82 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth1
# 84 "data/maps/Route6/scripts.pory"
	closemessage
# 85 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseApproachPikachu
# 86 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesApproachPikachu
# 87 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthApproachPikachu
# 88 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route6/scripts.pory"
	applymovement 17, Common_Movement_WalkUp
# 90 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseTakePikachu
# 92 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JamesTakePikachu
# 93 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_MeowthTakePikachu
# 94 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route6/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 96 "data/maps/Route6/scripts.pory"
	fadescreen 1
# 97 "data/maps/Route6/scripts.pory"
	waitmoncry
# 98 "data/maps/Route6/scripts.pory"
	removeobject 17
# 99 "data/maps/Route6/scripts.pory"
	fadescreen 0
# 100 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse2
# 101 "data/maps/Route6/scripts.pory"
	closemessage
# 102 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth2
# 103 "data/maps/Route6/scripts.pory"
	closemessage
# 104 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Jesse3
# 105 "data/maps/Route6/scripts.pory"
	closemessage
# 106 "data/maps/Route6/scripts.pory"
	applymovement 15, Route6_Movement_JesseExit
# 107 "data/maps/Route6/scripts.pory"
	applymovement 18, Route6_Movement_JesseExit
# 108 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_Meowth3
# 110 "data/maps/Route6/scripts.pory"
	closemessage
# 111 "data/maps/Route6/scripts.pory"
	applymovement 16, Route6_Movement_JesseExit
# 112 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route6/scripts.pory"
	removeobject 15
# 114 "data/maps/Route6/scripts.pory"
	removeobject 16
# 115 "data/maps/Route6/scripts.pory"
	removeobject 18
# 116 "data/maps/Route6/scripts.pory"
	setflag FLAG_ROUTE6_HIDEPIKACHU
# 117 "data/maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariManTrigger::
# 122 "data/maps/Route6/scripts.pory"
	lock
# 123 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 124 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 126 "data/maps/Route6/scripts.pory"
	closemessage
# 127 "data/maps/Route6/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 128 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 130 "data/maps/Route6/scripts.pory"
	closemessage
# 131 "data/maps/Route6/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_Movement_SafariBlock
# 132 "data/maps/Route6/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route6/scripts.pory"
	release
	end


Route6_EventScript_SafariMan::
# 138 "data/maps/Route6/scripts.pory"
	lock
# 139 "data/maps/Route6/scripts.pory"
	faceplayer
# 140 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan1
# 141 "data/maps/Route6/scripts.pory"
	closemessage
# 142 "data/maps/Route6/scripts.pory"
	msgbox Route6_Text_SafariMan2
# 143 "data/maps/Route6/scripts.pory"
	closemessage
# 144 "data/maps/Route6/scripts.pory"
	release
	end


# 148 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseApproachPikachu:
# 149 "data/maps/Route6/scripts.pory"
	walk_diag_southeast
# 150 "data/maps/Route6/scripts.pory"
	face_right
	step_end

# 153 "data/maps/Route6/scripts.pory"
Route6_Movement_JamesApproachPikachu:
# 154 "data/maps/Route6/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/Route6/scripts.pory"
Route6_Movement_MeowthApproachPikachu:
# 158 "data/maps/Route6/scripts.pory"
	walk_left
	step_end

# 161 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseTakePikachu:
# 162 "data/maps/Route6/scripts.pory"
	walk_up
# 163 "data/maps/Route6/scripts.pory"
	face_right
	step_end

# 166 "data/maps/Route6/scripts.pory"
Route6_Movement_JamesTakePikachu:
# 167 "data/maps/Route6/scripts.pory"
	walk_diag_northeast
# 168 "data/maps/Route6/scripts.pory"
	face_up
	step_end

# 171 "data/maps/Route6/scripts.pory"
Route6_Movement_MeowthTakePikachu:
# 172 "data/maps/Route6/scripts.pory"
	walk_up
# 173 "data/maps/Route6/scripts.pory"
	face_left
	step_end

# 176 "data/maps/Route6/scripts.pory"
Route6_Movement_JesseExit:
# 177 "data/maps/Route6/scripts.pory"
	walk_right
# 177 "data/maps/Route6/scripts.pory"
	walk_right
# 177 "data/maps/Route6/scripts.pory"
	walk_right
# 177 "data/maps/Route6/scripts.pory"
	walk_right
# 177 "data/maps/Route6/scripts.pory"
	walk_right
	step_end

# 180 "data/maps/Route6/scripts.pory"
Route6_Movement_SafariBlock:
# 181 "data/maps/Route6/scripts.pory"
	walk_down
# 182 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route6/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route6/scripts.pory"
	walk_fast_left
	step_end

Route6_Text_GirafarigSign::
# 187 "data/maps/Route6/scripts.pory"
	.string "Girafarig the psychic giraffe pokemon$"

Route6_Text_UrsaringSign::
# 191 "data/maps/Route6/scripts.pory"
	.string "Ursaring the grateful bear pokemon$"

Route6_Text_MonfernoSign::
# 195 "data/maps/Route6/scripts.pory"
	.string "Monferno the monkey fire pokemon$"

Route6_Text_PiplupSign::
# 199 "data/maps/Route6/scripts.pory"
	.string "Piplup the baby penguin pokemon$"

Route6_Text_SavannaSign::
# 203 "data/maps/Route6/scripts.pory"
	.string "Scenes from the savanna! Rhyhorn,\n"
	.string "Hippopotas, and Luxray$"

Route6_Text_Jesse1::
# 207 "data/maps/Route6/scripts.pory"
	.string "We've got you now you god damned\n"
	.string "pikachu! After we've captured you\l"
	.string "you'll help us find and then destroy\l"
	.string "that boy who snuck into the church and\l"
	.string "embarressed us with the boss!$"

Route6_Text_Meowth1::
# 211 "data/maps/Route6/scripts.pory"
	.string "Hey! Not so fast! We've got you\n"
	.string "surrounded!$"

Route6_Text_Jesse2::
# 215 "data/maps/Route6/scripts.pory"
	.string "Next time we see that twerp his ass is\n"
	.string "toast! With this here pikachu we'll\l"
	.string "rough him up and win our favor back with\l"
	.string "our good boss1$"

Route6_Text_Meowth2::
# 219 "data/maps/Route6/scripts.pory"
	.string "Hey guys! Isn't that the same twerp\n"
	.string "right there?$"

Route6_Text_Jesse3::
# 223 "data/maps/Route6/scripts.pory"
	.string "Be quiet you don't know what you're\n"
	.string "saying! Lets all move out! He must be\l"
	.string "off this way$"

Route6_Text_Meowth3::
# 227 "data/maps/Route6/scripts.pory"
	.string "They think of me as the comic relief!$"

Route6_Text_SafariMan1::
# 231 "data/maps/Route6/scripts.pory"
	.string "I can't believe you're gone oh PIKACHU!$"

Route6_Text_SafariMan2::
# 235 "data/maps/Route6/scripts.pory"
	.string "You've got to help me find my PIKACHU!\n"
	.string "About this tall! Yellowish! Sparky thing\l"
	.string "that was just stolen by two wicked\l"
	.string "things!$"

Route6_Text_Test::
# 253 "data/maps/Route6/scripts.pory"
	.string "Just a Test Message srry$"
