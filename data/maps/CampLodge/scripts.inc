CampLodge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CampLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CampLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call CampLodge_OnTransition
	return


CampLodge_OnTransition::
	compare VAR_CAMPLODGE, 1
	goto_if_eq CampLodge_OnTransition_2
	compare VAR_CAMPLODGE, 3
	goto_if_eq CampLodge_OnTransition_2
CampLodge_OnTransition_1:
	compare VAR_CAMPLODGE, 2
	goto_if_eq CampLodge_OnTransition_7
	compare VAR_CAMPLODGE, 3
	goto_if_eq CampLodge_OnTransition_7
CampLodge_OnTransition_6:
	end

CampLodge_OnTransition_2:
	setobjectxyperm 3, 9, 2
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	goto CampLodge_OnTransition_1

CampLodge_OnTransition_7:
	setobjectxyperm 4, 10, 2
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto CampLodge_OnTransition_6


CampLodge_EventScript_Eurykleia::
	faceplayer
	checktrainerflag TRAINER_EURYKLEIA
	goto_if 0, CampLodge_EventScript_Eurykleia_2
	msgbox CampLodge_Text_Eurykleia
	closemessage
CampLodge_EventScript_Eurykleia_1:
	end

CampLodge_EventScript_Eurykleia_2:
	msgbox CampLodge_Text_EurykleiaIntro
	closemessage
	trainerbattle_no_intro TRAINER_EURYKLEIA, CampLodge_Text_EurykleiaLost
	msgbox CampLodge_Text_EurykleiaPost
	closemessage
	applymovement 3, CampLodge_Movement_EurykleiaRetreat
	waitmovement 0
	setobjectxyperm 3, 9, 2
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	compare VAR_CAMPLODGE, 0
	goto_if_eq CampLodge_EventScript_Eurykleia_5
	compare VAR_CAMPLODGE, 2
	goto_if_eq CampLodge_EventScript_Eurykleia_6
	msgbox CampLodge_Text_Error
	closemessage
	goto CampLodge_EventScript_Eurykleia_1

CampLodge_EventScript_Eurykleia_5:
	setvar VAR_CAMPLODGE, 1
	goto CampLodge_EventScript_Eurykleia_1

CampLodge_EventScript_Eurykleia_6:
	setvar VAR_CAMPLODGE, 3
	goto CampLodge_EventScript_Eurykleia_1


CampLodge_EventScript_Eumaeus::
	faceplayer
	checktrainerflag TRAINER_EUMAEUS
	goto_if 0, CampLodge_EventScript_Eumaeus_2
	msgbox CampLodge_Text_Eumaeus
	closemessage
CampLodge_EventScript_Eumaeus_1:
	end

CampLodge_EventScript_Eumaeus_2:
	msgbox CampLodge_Text_EumaeusIntro
	closemessage
	trainerbattle_no_intro TRAINER_EUMAEUS, CampLodge_Text_EumaeusLost
	msgbox CampLodge_Text_EumaeusPost
	closemessage
	applymovement 4, CampLodge_Movement_EumaeusRetreat
	waitmovement 0
	setobjectxyperm 4, 10, 2
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	compare VAR_CAMPLODGE, 0
	goto_if_eq CampLodge_EventScript_Eumaeus_5
	compare VAR_CAMPLODGE, 1
	goto_if_eq CampLodge_EventScript_Eumaeus_6
	msgbox CampLodge_Text_Error
	closemessage
	goto CampLodge_EventScript_Eumaeus_1

CampLodge_EventScript_Eumaeus_5:
	setvar VAR_CAMPLODGE, 2
	goto CampLodge_EventScript_Eumaeus_1

CampLodge_EventScript_Eumaeus_6:
	setvar VAR_CAMPLODGE, 3
	goto CampLodge_EventScript_Eumaeus_1


CampLodge_EventScript_Antikleia::
	faceplayer
	checktrainerflag TRAINER_ANTIKLEIA
	goto_if 0, CampLodge_EventScript_Antikleia_2
	msgbox CampLodge_Text_Antikleia
	closemessage
CampLodge_EventScript_Antikleia_1:
	end

CampLodge_EventScript_Antikleia_2:
	msgbox CampLodge_Text_AntikleiaIntro
	closemessage
	trainerbattle_no_intro TRAINER_ANTIKLEIA, CampLodge_Text_AntikleiaLost
	setflag FLAG_BADGE03_GET
	msgbox CampLodge_Text_AntikleiaPost
	closemessage
	goto CampLodge_EventScript_Antikleia_1


CampLodge_EventScript_Laertes::
	faceplayer
	checktrainerflag TRAINER_LAERTES
	goto_if 0, CampLodge_EventScript_Laertes_2
	msgbox CampLodge_Text_Laertes
CampLodge_EventScript_Laertes_1:
	end

CampLodge_EventScript_Laertes_2:
	msgbox CampLodge_Text_LaertesIntro
	closemessage
	trainerbattle_no_intro TRAINER_LAERTES, CampLodge_Text_LaertesLost
	msgbox CampLodge_Text_LaertesPost
	closemessage
	giveitem ITEM_HM06
	msgbox CampLodge_Text_ExplainRockSmash
	closemessage
	goto CampLodge_EventScript_Laertes_1


CampLodge_Movement_EurykleiaRetreat:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_left
	step_end

CampLodge_Movement_EumaeusRetreat:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_right
	step_end

CampLodge_Text_EurykleiaIntro::
	.string "I'm the troop leader of these lady\n"
	.string "scouts. Teaching the wisdom passed\l"
	.string "down from grandma. To learn from her,\l"
	.string "first you must battle me!$"

CampLodge_Text_EurykleiaLost::
	.string "You impress me.$"

CampLodge_Text_EurykleiaPost::
	.string "Our elder is waiting.$"

CampLodge_Text_Eurykleia::
	.string "I only wait here to watch you battle.$"

CampLodge_Text_EumaeusIntro::
	.string "I'm the leader in here! I've learned the\n"
	.string "most and I posses the strength to\l"
	.string "beat you now!$"

CampLodge_Text_EumaeusLost::
	.string "I've been one upped.$"

CampLodge_Text_EumaeusPost::
	.string "Our elder is waiting.$"

CampLodge_Text_Eumaeus::
	.string "I only wait here to watch you battle.$"

CampLodge_Text_AntikleiaIntro::
	.string "For twenty years I've watched over this\n"
	.string "house as our headmistress, now answer\l"
	.string "me straight. What gives you any right\l"
	.string "to come to me?$"

CampLodge_Text_AntikleiaLost::
	.string "Your skill surpasses mine even with age$"

CampLodge_Text_AntikleiaPost::
	.string "Accept this gift and my message of\n"
	.string "love. Women may not beat men in\l"
	.string "strength at arms but armies fight and\l"
	.string "die before our breasts. To tame the\l"
	.string "world indeed you need their strength\l"
	.string "but theirs is nothing without our\l"
	.string "support.$"

CampLodge_Text_Antikleia::
	.string "You have the wisdom, and the strength\n"
	.string "at heart to smash every stone that\l"
	.string "blocks your path but without the power\l"
	.string "taught by our men you'll find your\l"
	.string "Pokemon will cannot break through.$"

CampLodge_Text_LaertesIntro::
	.string "While in my youth I shattered many\n"
	.string "rocks and now in my old age I teach the\l"
	.string "boys to break them just as I was\l"
	.string "taught myself. Now let's find out if you\l"
	.string "have what it takes to be my disciple.\l"
	.string "Prepare yourself!$"

CampLodge_Text_LaertesLost::
	.string "If I were in my youth I would have won$"

CampLodge_Text_LaertesPost::
	.string "You've shown you are ready to learn\n"
	.string "from me.$"

CampLodge_Text_ExplainRockSmash::
	.string "This Hidden Move contains the move\n"
	.string "Rock Smash. You can use it to break\l"
	.string "rocks in your path. Be sure to use the\l"
	.string "move responsibly and know without the\l"
	.string "girls you can't succeed.$"

CampLodge_Text_Laertes::
	.string "Without the knowledge and love of\n"
	.string "women you'll find your Pokemon cannot\l"
	.string "obey.$"

CampLodge_Text_Error::
	.string "Big TIME error$"
