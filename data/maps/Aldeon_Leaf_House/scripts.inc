Aldeon_Leaf_House_MapScripts::
# 2 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Aldeon_Leaf_House_OnTransition
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_ROUTE1_STATE, 2, Aldeon_Leaf_House_IntroScene
	.2byte 0


Aldeon_Leaf_House_IntroScene::
# 11 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setvar VAR_ROUTE1_STATE, 3
# 12 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 13 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 14 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 15 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 16 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf1
# 17 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player1
# 18 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 19 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf1
# 20 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 21 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 22 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 23 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad1
# 24 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 25 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 26 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf2
# 27 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player2
# 28 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 29 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 30 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad2
# 31 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 32 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 33 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf2
# 34 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 35 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 36 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 37 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad3
# 38 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 39 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 40 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3
# 41 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 42 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 43 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 44 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad4
# 45 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 46 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 47 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 48 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 49 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4
# 50 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 51 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 52 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad5
# 53 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 54 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 55 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf5
# 56 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 57 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 58 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad6
# 59 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 60 "data/maps/Aldeon_Leaf_House/scripts.pory"
	additem ITEM_POKE_BALL, 5
# 61 "data/maps/Aldeon_Leaf_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 62 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_DexBallGet
# 63 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 64 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad7
# 65 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 66 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 67 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Movement_DadStepDown
# 68 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Movement_LeafStepDown
# 69 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 70 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Movement_DadExit
# 71 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Movement_DadExit
# 72 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 73 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 1
# 74 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 2
# 75 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setflag FLAG_MEW_NOTDONE
# 76 "data/maps/Aldeon_Leaf_House/scripts.pory"
	clearflag FLAG_HIDE_GRANDMASCABIN_MEW
# 77 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_OnTransition::
# 82 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_ROUTE1_STATE, 2
	goto_if_eq Aldeon_Leaf_House_OnTransition_2
Aldeon_Leaf_House_OnTransition_1:
	end

Aldeon_Leaf_House_OnTransition_2:
# 83 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 1, 11, 6
# 84 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 2, 5, 2
	goto Aldeon_Leaf_House_OnTransition_1


Aldeon_Leaf_House_EventScript_ScottBed::
# 90 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 91 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_ScottBed, MSGBOX_YESNO
# 92 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_EventScript_ScottBed_2
Aldeon_Leaf_House_EventScript_ScottBed_1:
# 103 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_EventScript_ScottBed_2:
# 93 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 94 "data/maps/Aldeon_Leaf_House/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_EventScript_ScottBed_4
# 97 "data/maps/Aldeon_Leaf_House/scripts.pory"
	playfanfare MUS_HEAL
# 98 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 1
# 99 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitfanfare
# 100 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 0
	goto Aldeon_Leaf_House_EventScript_ScottBed_1

Aldeon_Leaf_House_EventScript_ScottBed_4:
# 95 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_EventScript_ScottBed_1


# 108 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf1:
# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 112 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 112 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 113 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 116 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player1:
# 117 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 121 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 122 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 125 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf2:
# 126 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 126 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 127 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 127 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 128 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 131 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player2:
# 132 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 132 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 132 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 134 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 137 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadStepDown:
# 138 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 139 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 142 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_LeafStepDown:
# 143 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 144 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 144 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadExit:
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

Aldeon_Leaf_House_Text_Leaf1::
# 151 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy there's someone I want you to\n"
	.string "meet.$"

Aldeon_Leaf_House_Text_Dad1::
# 155 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "He's come at a most unexpected time. I\n"
	.string "think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
# 159 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "You seem allright\n"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boyfriend or...?$"

Aldeon_Leaf_House_Text_Leaf2::
# 163 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "A friend. Young master {PLAYER} here\n"
	.string "rescued me from a viscious incel who\l"
	.string "tried to assualt me.$"

Aldeon_Leaf_House_Text_Dad3::
# 167 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Leaf3::
# 171 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, I'm fine. All thanks to\n"
	.string "{PLAYER} here {RIVAL} ran away.$"

Aldeon_Leaf_House_Text_Dad4::
# 175 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Leaf4::
# 179 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The legendary Mew?$"

Aldeon_Leaf_House_Text_Dad5::
# 183 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. At first I hardly\n"
	.string "thought the news was true, and I\l"
	.string "assumed it was propaganda to celebrate\l"
	.string "the party's victory but earlier as I was\l"
	.string "walking home I saw her flying south with\l"
	.string "my own eyes.$"

Aldeon_Leaf_House_Text_Leaf5::
# 187 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "If this is true, then we should go at\n"
	.string "once!$"

Aldeon_Leaf_House_Text_Dad6::
# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Of course we must! To think such things\n"
	.string "were only myths last week. Not in two\l"
	.string "thousand years has this happened. So\l"
	.string "{PLAYER} I'm sure you'll be going with\l"
	.string "Leaf? Before we go she'll need a\l"
	.string "Pokemon and you should go let your own\l"
	.string "family know, but first take this for\l"
	.string "saving my daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
# 195 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "{PLAYER} recieved 5 PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
# 199 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Those Pokeballs belonged to my father.\n"
	.string "The road to Bulbus Town should not be\l"
	.string "hard. We'll wait for you down at my Club\l"
	.string "in town you'll recognize it by the big\l"
	.string "red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"

Aldeon_Leaf_House_Text_ScottBed::
# 203 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "It's Scott's Bed. Would you like to take\n"
	.string "a rest?$"
