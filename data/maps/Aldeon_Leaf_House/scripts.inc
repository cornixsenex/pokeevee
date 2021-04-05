Aldeon_Leaf_House_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Aldeon_Leaf_House_OnTransition
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE1_STATE, 2, Aldeon_Leaf_House_OnWarp
	.2byte 0


Aldeon_Leaf_House_OnWarp::
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
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	additem ITEM_POKE_BALL, 5
	playfanfare MUS_OBTAIN_ITEM
	msgbox Aldeon_Leaf_House_Text_DexBallGet
	load_field_pic 5, 190, 98
	msgbox Aldeon_Leaf_House_Text_Dad7
	destroy_field_pic 5
	closemessage
	applymovement 1, Aldeon_Movement_DadExit
	applymovement 2, Aldeon_Movement_DadExit
	waitmovement 0
	removeobject 1
	removeobject 2
	setflag FLAG_MEW_NOTDONE
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

Aldeon_Movement_DadExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Aldeon_Leaf_House_Text_Leaf1::
	.string "Daddy there's someon I want you to\n"
	.string "meet.$"

Aldeon_Leaf_House_Text_Dad1::
	.string "I think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
	.string "You seem allright\p"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boydriend or...?$"

Aldeon_Leaf_House_Text_Leaf2::
	.string "A friend.\p"
	.string "Young master {PLAYER} here rescued\n"
	.string "me from a viscious incel who tried to\l"
	.string "assualt me.$"

Aldeon_Leaf_House_Text_Dad3::
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Leaf3::
	.string "Daddy, I'm fine. All thanks to\n"
	.string "{PLAYER} here {RIVAL} ran away.$"

Aldeon_Leaf_House_Text_Dad4::
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes to share our table here most any\l"
	.string "day. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Leaf4::
	.string "The legendary Pokemon?$"

Aldeon_Leaf_House_Text_Dad5::
	.string "That's right\p"
	.string "Mew has returned to Saeclara City. At\n"
	.string "first I hardly thought the news was\l"
	.string "true, and I assumed it was Propaganda\l"
	.string "to celebrate the party's vixtory but\l"
	.string "earlier I met down on the road an older\l"
	.string "sir I have know from my youth who swore\l"
	.string "to me that he had just seen Mew as he\l"
	.string "had journeyed north from Saeclara.$"

Aldeon_Leaf_House_Text_Leaf5::
	.string "If this is true, then we should go see\n"
	.string "Mew!$"

Aldeon_Leaf_House_Text_Dad6::
	.string "Of course we must! Such things were\n"
	.string "only myths...last week I would have said\l"
	.string "you were crazy to claim the existence\l"
	.string "much less return of mythic Pokemon\l"
	.string "from the fabels. Not in two thousand\l"
	.string "years has this happened, so {PLAYER}\l"
	.string "I'm sure you'll be goiong with Leaf?\l"
	.string "Before we go she'll need a Pokemon and\l"
	.string "you should go let your own family know,\l"
	.string "but first take this for saving my\l"
	.string "daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
	.string "{PLAYER} recieved the PokeDex and 5\n"
	.string "PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
	.string "That Pokedex belonged to my father who\n"
	.string "gave it to me when I was a lad. I've got\l"
	.string "a much nicer one I use now but I think\l"
	.string "it will suit you very well. I've also\l"
	.string "given you five Pokeballs so that you\l"
	.string "can better protect yourself. The road\l"
	.string "to Bulbus Town should not be hard. I\l"
	.string "run the The Chronic Cannabis Centers,\l"
	.string "now that the shops are opening back up\l"
	.string "I've expanded across most of the\l"
	.string "state. We'll wait for you down at my\l"
	.string "Club in town you'll recognize it by it's\l"
	.string "big red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"
