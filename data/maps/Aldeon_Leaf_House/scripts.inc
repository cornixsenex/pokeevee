Aldeon_Leaf_House_MapScripts::
# 4 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_eq Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Aldeon_Leaf_House_Script_ShowLeafScene
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 15, Aldeon_Leaf_House_IntroScene
	.2byte 0


Aldeon_Leaf_House_Script_ShowLeafScene::
	return


Aldeon_Leaf_House_IntroScene::
# 21 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 22 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 23 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 24 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 25 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf1
# 26 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player1
# 27 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 28 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf1
# 29 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 30 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 31 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 32 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad1
# 33 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 34 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 35 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf2
# 36 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player2
# 37 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 38 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 39 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad2
# 40 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 41 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 42 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf2
# 43 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 44 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 45 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 46 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad3
# 47 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 48 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 49 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3
# 50 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 51 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 52 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 53 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad4
# 54 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 55 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 56 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 57 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 58 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4
# 59 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 60 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 61 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad5
# 62 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 63 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 64 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf5
# 65 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 66 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 67 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad6
# 68 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 69 "data/maps/Aldeon_Leaf_House/scripts.pory"
	additem ITEM_POKE_BALL, 5
# 70 "data/maps/Aldeon_Leaf_House/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_DexBallGet
# 72 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 5, 190, 98
# 73 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Dad7
# 74 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 5
# 75 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 76 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Movement_DadStepDown
# 77 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Movement_LeafStepDown
# 78 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 79 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Movement_DadExit
# 80 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Movement_DadExit
# 81 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 82 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 1
# 83 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 2
# 84 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setflag FLAG_MEW_NOTDONE
# 85 "data/maps/Aldeon_Leaf_House/scripts.pory"
	clearflag FLAG_HIDE_GRANDMASCABIN_MEW
# 86 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_EventScript_ScottBed::
# 91 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 92 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_ScottBed, MSGBOX_YESNO
# 93 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_EventScript_ScottBed_2
Aldeon_Leaf_House_EventScript_ScottBed_1:
# 104 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_EventScript_ScottBed_2:
# 94 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 95 "data/maps/Aldeon_Leaf_House/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_EventScript_ScottBed_4
# 98 "data/maps/Aldeon_Leaf_House/scripts.pory"
	playfanfare MUS_HEAL
# 99 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 1
# 100 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitfanfare
# 101 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 0
	goto Aldeon_Leaf_House_EventScript_ScottBed_1

Aldeon_Leaf_House_EventScript_ScottBed_4:
# 96 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_EventScript_ScottBed_1


# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf1:
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 112 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 112 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 113 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 113 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 114 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 117 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player1:
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 121 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 121 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 122 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 123 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 126 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf2:
# 127 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 127 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 128 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 128 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 129 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 132 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player2:
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 134 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 135 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 138 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadStepDown:
# 139 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 140 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 143 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_LeafStepDown:
# 144 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 145 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 145 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
	step_end

# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadExit:
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

Aldeon_Leaf_House_Text_Leaf1::
# 152 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy there's someone I want you to\n"
	.string "meet.$"

Aldeon_Leaf_House_Text_Dad1::
# 156 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "He's come at a most unexpected time. I\n"
	.string "think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
# 160 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "You seem allright\n"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boyfriend or...?$"

Aldeon_Leaf_House_Text_Leaf2::
# 164 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "A friend. Young master {PLAYER} here\n"
	.string "rescued me from a viscious incel who\l"
	.string "tried to assualt me.$"

Aldeon_Leaf_House_Text_Dad3::
# 168 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Leaf3::
# 172 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, I'm fine. All thanks to\n"
	.string "{PLAYER} here {RIVAL} ran away.$"

Aldeon_Leaf_House_Text_Dad4::
# 176 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Leaf4::
# 180 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The legendary Mew?$"

Aldeon_Leaf_House_Text_Dad5::
# 184 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. At first I hardly\n"
	.string "thought the news was true, and I\l"
	.string "assumed it was propaganda to celebrate\l"
	.string "the party's victory but earlier as I was\l"
	.string "walking home I saw her flying south with\l"
	.string "my own eyes.$"

Aldeon_Leaf_House_Text_Leaf5::
# 188 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "If this is true, then we should go at\n"
	.string "once!$"

Aldeon_Leaf_House_Text_Dad6::
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Of course we must! To think such things\n"
	.string "were only myths last week. Not in two\l"
	.string "thousand years has this happened. So\l"
	.string "{PLAYER} I'm sure you'll be going with\l"
	.string "Leaf? Before we go she'll need a\l"
	.string "Pokemon and you should go let your own\l"
	.string "family know, but first take this for\l"
	.string "saving my daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
# 196 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "{PLAYER} recieved 5 PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Those Pokeballs belonged to my father.\n"
	.string "The road to Bulbus Town should not be\l"
	.string "hard. We'll wait for you down at my Club\l"
	.string "in town you'll recognize it by the big\l"
	.string "red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"

Aldeon_Leaf_House_Text_ScottBed::
# 204 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "It's Scott's Bed. Would you like to take\n"
	.string "a rest?$"
