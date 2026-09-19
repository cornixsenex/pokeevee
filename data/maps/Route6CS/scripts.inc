Route6CS_MapScripts::
# 10 "data/maps/Route6CS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route6CS/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route6CS_F
# 12 "data/maps/Route6CS/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/Route6CS/scripts.pory"
	case 1, Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 15 "data/maps/Route6CS/scripts.pory"
	case 2, Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 17 "data/maps/Route6CS/scripts.pory"
	case 3, Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 1
	return

Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 2
	return

Route6CS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 3
	return


Route6CS_Script_Transition_ViaLitoralis::
# 27 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 28 "data/maps/Route6CS/scripts.pory"
	special TransitionMapMusic
# 29 "data/maps/Route6CS/scripts.pory"
	special ShowMapNamePopup
	return


Route6CS_Script_Transition_VillaVivaria::
# 33 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 2
# 34 "data/maps/Route6CS/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/Route6CS/scripts.pory"
	special ShowMapNamePopup
	return


Route6CS_Script_Transition_SinusPacificus::
# 39 "data/maps/Route6CS/scripts.pory"
	setvar VAR_TEMP_5, 3
# 40 "data/maps/Route6CS/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/Route6CS/scripts.pory"
	special ShowMapNamePopup
	return


Route6CS_EventScript_GirafarigSign::
# 46 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_GirafarigSign
# 47 "data/maps/Route6CS/scripts.pory"
	closemessage
	end


Route6CS_EventScript_UrsaringSign::
# 52 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_UrsaringSign
# 53 "data/maps/Route6CS/scripts.pory"
	closemessage
	end


Route6CS_EventScript_MonfernoSign::
# 58 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_MonfernoSign
# 59 "data/maps/Route6CS/scripts.pory"
	closemessage
	end


Route6CS_EventScript_PiplupSign::
# 64 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_PiplupSign
# 65 "data/maps/Route6CS/scripts.pory"
	closemessage
	end


Route6CS_EventScript_SavannaSign::
# 70 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_SavannaSign
# 71 "data/maps/Route6CS/scripts.pory"
	closemessage
	end


Route6CS_EventScript_JesseAndJames::
# 76 "data/maps/Route6CS/scripts.pory"
	lock
# 77 "data/maps/Route6CS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 78 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route6CS/scripts.pory"
	applymovement 17, Common_Movement_FaceLeft
# 80 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Jesse1
# 82 "data/maps/Route6CS/scripts.pory"
	closemessage
# 83 "data/maps/Route6CS/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 84 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Meowth1
# 86 "data/maps/Route6CS/scripts.pory"
	closemessage
# 87 "data/maps/Route6CS/scripts.pory"
	applymovement 15, Route6CS_Movement_JesseApproachPikachu
# 88 "data/maps/Route6CS/scripts.pory"
	applymovement 18, Route6CS_Movement_JamesApproachPikachu
# 89 "data/maps/Route6CS/scripts.pory"
	applymovement 16, Route6CS_Movement_MeowthApproachPikachu
# 90 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route6CS/scripts.pory"
	applymovement 17, Common_Movement_WalkUp
# 92 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route6CS/scripts.pory"
	applymovement 15, Route6CS_Movement_JesseTakePikachu
# 94 "data/maps/Route6CS/scripts.pory"
	applymovement 18, Route6CS_Movement_JamesTakePikachu
# 95 "data/maps/Route6CS/scripts.pory"
	applymovement 16, Route6CS_Movement_MeowthTakePikachu
# 96 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route6CS/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 98 "data/maps/Route6CS/scripts.pory"
	fadescreenswapbuffers 1
# 99 "data/maps/Route6CS/scripts.pory"
	waitmoncry
# 100 "data/maps/Route6CS/scripts.pory"
	removeobject 17
# 101 "data/maps/Route6CS/scripts.pory"
	fadescreenswapbuffers 0
# 102 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Jesse2
# 103 "data/maps/Route6CS/scripts.pory"
	closemessage
# 104 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Meowth2
# 105 "data/maps/Route6CS/scripts.pory"
	closemessage
# 106 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Jesse3
# 107 "data/maps/Route6CS/scripts.pory"
	closemessage
# 108 "data/maps/Route6CS/scripts.pory"
	applymovement 15, Route6CS_Movement_JesseExit
# 109 "data/maps/Route6CS/scripts.pory"
	applymovement 18, Route6CS_Movement_JesseExit
# 110 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_Meowth3
# 112 "data/maps/Route6CS/scripts.pory"
	closemessage
# 113 "data/maps/Route6CS/scripts.pory"
	applymovement 16, Route6CS_Movement_JesseExit
# 114 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route6CS/scripts.pory"
	removeobject 15
# 116 "data/maps/Route6CS/scripts.pory"
	removeobject 16
# 117 "data/maps/Route6CS/scripts.pory"
	removeobject 18
# 118 "data/maps/Route6CS/scripts.pory"
	setflag FLAG_ROUTE6CS_HIDEPIKACHU
# 119 "data/maps/Route6CS/scripts.pory"
	release
	end


Route6CS_EventScript_SafariManTrigger::
# 124 "data/maps/Route6CS/scripts.pory"
	lock
# 125 "data/maps/Route6CS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 126 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_SafariMan1
# 128 "data/maps/Route6CS/scripts.pory"
	closemessage
# 129 "data/maps/Route6CS/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 130 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_SafariMan2
# 132 "data/maps/Route6CS/scripts.pory"
	closemessage
# 133 "data/maps/Route6CS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6CS_Movement_SafariBlock
# 134 "data/maps/Route6CS/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route6CS/scripts.pory"
	release
	end


Route6CS_EventScript_SafariMan::
# 140 "data/maps/Route6CS/scripts.pory"
	lock
# 141 "data/maps/Route6CS/scripts.pory"
	faceplayer
# 142 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_SafariMan1
# 143 "data/maps/Route6CS/scripts.pory"
	closemessage
# 144 "data/maps/Route6CS/scripts.pory"
	msgbox Route6CS_Text_SafariMan2
# 145 "data/maps/Route6CS/scripts.pory"
	closemessage
# 146 "data/maps/Route6CS/scripts.pory"
	release
	end


# 150 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_JesseApproachPikachu:
# 151 "data/maps/Route6CS/scripts.pory"
	walk_diag_southeast
# 152 "data/maps/Route6CS/scripts.pory"
	face_right
	step_end

# 155 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_JamesApproachPikachu:
# 156 "data/maps/Route6CS/scripts.pory"
	walk_right
	step_end

# 159 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_MeowthApproachPikachu:
# 160 "data/maps/Route6CS/scripts.pory"
	walk_left
	step_end

# 163 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_JesseTakePikachu:
# 164 "data/maps/Route6CS/scripts.pory"
	walk_up
# 165 "data/maps/Route6CS/scripts.pory"
	face_right
	step_end

# 168 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_JamesTakePikachu:
# 169 "data/maps/Route6CS/scripts.pory"
	walk_diag_northeast
# 170 "data/maps/Route6CS/scripts.pory"
	face_up
	step_end

# 173 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_MeowthTakePikachu:
# 174 "data/maps/Route6CS/scripts.pory"
	walk_up
# 175 "data/maps/Route6CS/scripts.pory"
	face_left
	step_end

# 178 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_JesseExit:
# 179 "data/maps/Route6CS/scripts.pory"
	walk_right
# 179 "data/maps/Route6CS/scripts.pory"
	walk_right
# 179 "data/maps/Route6CS/scripts.pory"
	walk_right
# 179 "data/maps/Route6CS/scripts.pory"
	walk_right
# 179 "data/maps/Route6CS/scripts.pory"
	walk_right
	step_end

# 182 "data/maps/Route6CS/scripts.pory"
Route6CS_Movement_SafariBlock:
# 183 "data/maps/Route6CS/scripts.pory"
	walk_down
# 184 "data/maps/Route6CS/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route6CS/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route6CS/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route6CS/scripts.pory"
	walk_fast_left
	step_end

Route6CS_Text_GirafarigSign::
# 189 "data/maps/Route6CS/scripts.pory"
	.string "Girafarig the psychic giraffe pokemon$"

Route6CS_Text_UrsaringSign::
# 193 "data/maps/Route6CS/scripts.pory"
	.string "Ursaring the grateful bear pokemon$"

Route6CS_Text_MonfernoSign::
# 197 "data/maps/Route6CS/scripts.pory"
	.string "Monferno the monkey fire pokemon$"

Route6CS_Text_PiplupSign::
# 201 "data/maps/Route6CS/scripts.pory"
	.string "Piplup the baby penguin pokemon$"

Route6CS_Text_SavannaSign::
# 205 "data/maps/Route6CS/scripts.pory"
	.string "Scenes from the savanna! Rhyhorn,\n"
	.string "Hippopotas, and Luxray$"

Route6CS_Text_Jesse1::
# 209 "data/maps/Route6CS/scripts.pory"
	.string "We've got you now you god damned\n"
	.string "pikachu! After we've captured you\l"
	.string "you'll help us find and then destroy\l"
	.string "that boy who snuck into the church and\l"
	.string "embarressed us with the boss!$"

Route6CS_Text_Meowth1::
# 213 "data/maps/Route6CS/scripts.pory"
	.string "Hey! Not so fast! We've got you\n"
	.string "surrounded!$"

Route6CS_Text_Jesse2::
# 217 "data/maps/Route6CS/scripts.pory"
	.string "Next time we see that twerp his ass is\n"
	.string "toast! With this here pikachu we'll\l"
	.string "rough him up and win our favor back with\l"
	.string "our good boss1$"

Route6CS_Text_Meowth2::
# 221 "data/maps/Route6CS/scripts.pory"
	.string "Hey guys! Isn't that the same twerp\n"
	.string "right there?$"

Route6CS_Text_Jesse3::
# 225 "data/maps/Route6CS/scripts.pory"
	.string "Be quiet you don't know what you're\n"
	.string "saying! Lets all move out! He must be\l"
	.string "off this way$"

Route6CS_Text_Meowth3::
# 229 "data/maps/Route6CS/scripts.pory"
	.string "They think of me as the comic relief!$"

Route6CS_Text_SafariMan1::
# 233 "data/maps/Route6CS/scripts.pory"
	.string "I can't believe you're gone oh PIKACHU!$"

Route6CS_Text_SafariMan2::
# 237 "data/maps/Route6CS/scripts.pory"
	.string "You've got to help me find my PIKACHU!\n"
	.string "About this tall! Yellowish! Sparky thing\l"
	.string "that was just stolen by two wicked\l"
	.string "things!$"

Route6CS_Text_Test::
# 255 "data/maps/Route6CS/scripts.pory"
	.string "Just a Test Message srry$"
