Aldeon_Leaf_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Aldeon_Leaf_House_OnTransition
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 2, Aldeon_Leaf_House_IntroScene
	.2byte 0


Aldeon_Leaf_House_IntroScene::
	setvar VAR_ROUTE1_STATE, 3
	lockall
	applymovement 1, Common_Movement_FaceRight
	applymovement 2, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf1
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player1
	load_field_pic 4, 190, 98
	msgbox Aldeon_Leaf_House_Text_Leaf1
	waitmovement 0
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad1
	closemessage
	destroy_field_pic 5
	applymovement 2, Aldeon_Leaf_House_Movement_Leaf2
	applymovement OBJ_EVENT_ID_PLAYER, Aldeon_Leaf_House_Movement_Player2
	waitmovement 0
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad2
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox Aldeon_Leaf_House_Text_Leaf2
	waitmovement 0
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad3
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox Aldeon_Leaf_House_Text_Leaf3
	waitmovement 0
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad4
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Aldeon_Leaf_House_Text_Leaf4
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad5
	destroy_field_pic 5
	load_field_pic 4, 190, 98
	msgbox Aldeon_Leaf_House_Text_Leaf5
	destroy_field_pic 4
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad6
	destroy_field_pic 5
	additem ITEM_POKE_BALL, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox Aldeon_Leaf_House_Text_DexBallGet
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad7
	destroy_field_pic 5
	closemessage
	applymovement 1, Aldeon_Movement_DadStepDown
	applymovement 2, Aldeon_Movement_LeafStepDown
	waitmovement 0
	applymovement 1, Aldeon_Movement_DadExit
	applymovement 2, Aldeon_Movement_DadExit
	waitmovement 0
	removeobject 1
	removeobject 2
	setflag FLAG_MEW_NOTDONE
	clearflag FLAG_HIDE_GRANDMASCABIN_MEW
	releaseall
	end


Aldeon_Leaf_House_OnTransition::
	compare VAR_ROUTE1_STATE, 2
	goto_if_eq Aldeon_Leaf_House_OnTransition_2
Aldeon_Leaf_House_OnTransition_1:
	end

Aldeon_Leaf_House_OnTransition_2:
	setobjectxyperm 1, 11, 6
	setobjectxyperm 2, 5, 2
	goto Aldeon_Leaf_House_OnTransition_1


Aldeon_Leaf_House_EventScript_ScottBed::
	lockall
	msgbox Aldeon_Leaf_House_Text_ScottBed, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_EventScript_ScottBed_2
Aldeon_Leaf_House_EventScript_ScottBed_1:
	releaseall
	end

Aldeon_Leaf_House_EventScript_ScottBed_2:
	closemessage
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_EventScript_ScottBed_4
	playfanfare MUS_HEAL
	fadescreen 1
	waitfanfare
	fadescreen 0
	goto Aldeon_Leaf_House_EventScript_ScottBed_1

Aldeon_Leaf_House_EventScript_ScottBed_4:
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_EventScript_ScottBed_1


Aldeon_Leaf_House_Movement_Leaf1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	face_down
	step_end

Aldeon_Leaf_House_Movement_Player1:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	face_down
	step_end

Aldeon_Leaf_House_Movement_Leaf2:
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Aldeon_Leaf_House_Movement_Player2:
	walk_right
	walk_right
	walk_right
	walk_down
	face_left
	step_end

Aldeon_Movement_DadStepDown:
	walk_down
	face_right
	step_end

Aldeon_Movement_LeafStepDown:
	walk_down
	walk_left
	walk_left
	step_end

Aldeon_Movement_DadExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Aldeon_Leaf_House_Text_Leaf1::
	.string "Daddy there's someone I want you to\n"
	.string "meet.$"

Aldeon_Leaf_House_Text_Dad1::
	.string "He's come at a most unexpected time. I\n"
	.string "think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
	.string "You seem allright\n"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boydriend or...?$"

Aldeon_Leaf_House_Text_Leaf2::
	.string "A friend. Young master {PLAYER} here\n"
	.string "rescued me from a viscious incel who\l"
	.string "tried to assualt me.$"

Aldeon_Leaf_House_Text_Dad3::
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Leaf3::
	.string "Daddy, I'm fine. All thanks to\n"
	.string "{PLAYER} here {RIVAL} ran away.$"

Aldeon_Leaf_House_Text_Dad4::
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Leaf4::
	.string "The legendary Mew?$"

Aldeon_Leaf_House_Text_Dad5::
	.string "The very same. At first I hardly\n"
	.string "thought the news was true, and I\l"
	.string "assumed it was propaganda to\l"
	.string "celebrate the party's victory but\l"
	.string "earlier as I was walking home I saw her\l"
	.string "flying south with my own eyes.$"

Aldeon_Leaf_House_Text_Leaf5::
	.string "If this is true, then we should go at\n"
	.string "once!$"

Aldeon_Leaf_House_Text_Dad6::
	.string "Of course we must! To think such things\n"
	.string "were only myths last week. Not in two\l"
	.string "thousand years has this happened. So\l"
	.string "{PLAYER} I'm sure you'll be going with\l"
	.string "Leaf? Before we go she'll need a\l"
	.string "Pokemon and you should go let your own\l"
	.string "family know, but first take this for\l"
	.string "saving my daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
	.string "{PLAYER} recieved 5 PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
	.string "Those Pokeballs belonged to my father.\n"
	.string "The road to Bulbus Town should not be\l"
	.string "hard. We'll wait for you down at my Club\l"
	.string "in town you'll recognize it by the big\l"
	.string "red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"

Aldeon_Leaf_House_Text_ScottBed::
	.string "It's Scott's Bed. Would you like to take\n"
	.string "a rest?$"
