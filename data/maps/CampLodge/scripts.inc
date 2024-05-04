CampLodge_MapScripts::
# 3 "data/maps/CampLodge/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CampLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CampLodge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/CampLodge/scripts.pory"
	call CampLodge_OnTransition
	return


CampLodge_OnTransition::
# 11 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 1
	goto_if_eq CampLodge_OnTransition_2
# 11 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 3
	goto_if_eq CampLodge_OnTransition_2
CampLodge_OnTransition_1:
# 15 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 2
	goto_if_eq CampLodge_OnTransition_7
# 15 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 3
	goto_if_eq CampLodge_OnTransition_7
CampLodge_OnTransition_6:
	end

CampLodge_OnTransition_2:
# 12 "data/maps/CampLodge/scripts.pory"
	setobjectxyperm 3, 9, 2
# 13 "data/maps/CampLodge/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	goto CampLodge_OnTransition_1

CampLodge_OnTransition_7:
# 16 "data/maps/CampLodge/scripts.pory"
	setobjectxyperm 4, 10, 2
# 17 "data/maps/CampLodge/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	goto CampLodge_OnTransition_6


CampLodge_EventScript_Eurykleia::
# 24 "data/maps/CampLodge/scripts.pory"
	faceplayer
# 25 "data/maps/CampLodge/scripts.pory"
	checktrainerflag TRAINER_EURYKLEIA
	goto_if 0, CampLodge_EventScript_Eurykleia_2
# 44 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Eurykleia
# 45 "data/maps/CampLodge/scripts.pory"
	closemessage
CampLodge_EventScript_Eurykleia_1:
	end

CampLodge_EventScript_Eurykleia_2:
# 26 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_EurykleiaIntro
# 27 "data/maps/CampLodge/scripts.pory"
	closemessage
# 28 "data/maps/CampLodge/scripts.pory"
	trainerbattle_no_intro TRAINER_EURYKLEIA, CampLodge_Text_EurykleiaLost
# 29 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_EurykleiaPost
# 30 "data/maps/CampLodge/scripts.pory"
	closemessage
# 31 "data/maps/CampLodge/scripts.pory"
	applymovement 3, CampLodge_Movement_EurykleiaRetreat
# 32 "data/maps/CampLodge/scripts.pory"
	waitmovement 0
# 33 "data/maps/CampLodge/scripts.pory"
	setobjectxyperm 3, 9, 2
# 34 "data/maps/CampLodge/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 0
	goto_if_eq CampLodge_EventScript_Eurykleia_5
# 37 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 2
	goto_if_eq CampLodge_EventScript_Eurykleia_6
# 40 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Error
# 41 "data/maps/CampLodge/scripts.pory"
	closemessage
	goto CampLodge_EventScript_Eurykleia_1

CampLodge_EventScript_Eurykleia_5:
# 36 "data/maps/CampLodge/scripts.pory"
	setvar VAR_CAMPLODGE, 1
	goto CampLodge_EventScript_Eurykleia_1

CampLodge_EventScript_Eurykleia_6:
# 38 "data/maps/CampLodge/scripts.pory"
	setvar VAR_CAMPLODGE, 3
	goto CampLodge_EventScript_Eurykleia_1


CampLodge_EventScript_Eumaeus::
# 51 "data/maps/CampLodge/scripts.pory"
	faceplayer
# 52 "data/maps/CampLodge/scripts.pory"
	checktrainerflag TRAINER_EUMAEUS
	goto_if 0, CampLodge_EventScript_Eumaeus_2
# 71 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Eumaeus
# 72 "data/maps/CampLodge/scripts.pory"
	closemessage
CampLodge_EventScript_Eumaeus_1:
	end

CampLodge_EventScript_Eumaeus_2:
# 53 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_EumaeusIntro
# 54 "data/maps/CampLodge/scripts.pory"
	closemessage
# 55 "data/maps/CampLodge/scripts.pory"
	trainerbattle_no_intro TRAINER_EUMAEUS, CampLodge_Text_EumaeusLost
# 56 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_EumaeusPost
# 57 "data/maps/CampLodge/scripts.pory"
	closemessage
# 58 "data/maps/CampLodge/scripts.pory"
	applymovement 4, CampLodge_Movement_EumaeusRetreat
# 59 "data/maps/CampLodge/scripts.pory"
	waitmovement 0
# 60 "data/maps/CampLodge/scripts.pory"
	setobjectxyperm 4, 10, 2
# 61 "data/maps/CampLodge/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 62 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 0
	goto_if_eq CampLodge_EventScript_Eumaeus_5
# 64 "data/maps/CampLodge/scripts.pory"
	compare VAR_CAMPLODGE, 1
	goto_if_eq CampLodge_EventScript_Eumaeus_6
# 67 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Error
# 68 "data/maps/CampLodge/scripts.pory"
	closemessage
	goto CampLodge_EventScript_Eumaeus_1

CampLodge_EventScript_Eumaeus_5:
# 63 "data/maps/CampLodge/scripts.pory"
	setvar VAR_CAMPLODGE, 2
	goto CampLodge_EventScript_Eumaeus_1

CampLodge_EventScript_Eumaeus_6:
# 65 "data/maps/CampLodge/scripts.pory"
	setvar VAR_CAMPLODGE, 3
	goto CampLodge_EventScript_Eumaeus_1


CampLodge_EventScript_Antikleia::
# 78 "data/maps/CampLodge/scripts.pory"
	faceplayer
# 79 "data/maps/CampLodge/scripts.pory"
	checktrainerflag TRAINER_ANTIKLEIA
	goto_if 0, CampLodge_EventScript_Antikleia_2
# 87 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Antikleia
# 88 "data/maps/CampLodge/scripts.pory"
	closemessage
CampLodge_EventScript_Antikleia_1:
	end

CampLodge_EventScript_Antikleia_2:
# 80 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_AntikleiaIntro
# 81 "data/maps/CampLodge/scripts.pory"
	closemessage
# 82 "data/maps/CampLodge/scripts.pory"
	trainerbattle_no_intro TRAINER_ANTIKLEIA, CampLodge_Text_AntikleiaLost
# 83 "data/maps/CampLodge/scripts.pory"
	setflag FLAG_BADGE03_GET
# 84 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_AntikleiaPost
# 85 "data/maps/CampLodge/scripts.pory"
	closemessage
	goto CampLodge_EventScript_Antikleia_1


CampLodge_EventScript_Laertes::
# 94 "data/maps/CampLodge/scripts.pory"
	faceplayer
# 95 "data/maps/CampLodge/scripts.pory"
	checktrainerflag TRAINER_LAERTES
	goto_if 0, CampLodge_EventScript_Laertes_2
# 105 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Laertes
# 106 "data/maps/CampLodge/scripts.pory"
	closemessage
CampLodge_EventScript_Laertes_1:
	end

CampLodge_EventScript_Laertes_2:
# 96 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_LaertesIntro
# 97 "data/maps/CampLodge/scripts.pory"
	closemessage
# 98 "data/maps/CampLodge/scripts.pory"
	trainerbattle_no_intro TRAINER_LAERTES, CampLodge_Text_LaertesLost
# 99 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_LaertesPost
# 100 "data/maps/CampLodge/scripts.pory"
	closemessage
# 101 "data/maps/CampLodge/scripts.pory"
	giveitem ITEM_HM06
# 102 "data/maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_ExplainRockSmash
# 103 "data/maps/CampLodge/scripts.pory"
	closemessage
	goto CampLodge_EventScript_Laertes_1


# 112 "data/maps/CampLodge/scripts.pory"
CampLodge_Movement_EurykleiaRetreat:
# 113 "data/maps/CampLodge/scripts.pory"
	walk_up
# 113 "data/maps/CampLodge/scripts.pory"
	walk_up
# 113 "data/maps/CampLodge/scripts.pory"
	walk_up
# 113 "data/maps/CampLodge/scripts.pory"
	walk_up
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 114 "data/maps/CampLodge/scripts.pory"
	walk_right
# 115 "data/maps/CampLodge/scripts.pory"
	face_left
	step_end

# 118 "data/maps/CampLodge/scripts.pory"
CampLodge_Movement_EumaeusRetreat:
# 119 "data/maps/CampLodge/scripts.pory"
	walk_up
# 119 "data/maps/CampLodge/scripts.pory"
	walk_up
# 119 "data/maps/CampLodge/scripts.pory"
	walk_up
# 119 "data/maps/CampLodge/scripts.pory"
	walk_up
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 120 "data/maps/CampLodge/scripts.pory"
	walk_left
# 121 "data/maps/CampLodge/scripts.pory"
	face_right
	step_end

CampLodge_Text_EurykleiaIntro::
# 125 "data/maps/CampLodge/scripts.pory"
	.string "I'm the troop leader of these lady\l"
	.string "scouts. Teaching the wisdom passed\l"
	.string "down from grandma. To learn from her,\l"
	.string "first you must battle me!$"

CampLodge_Text_EurykleiaLost::
# 129 "data/maps/CampLodge/scripts.pory"
	.string "You impress me.$"

CampLodge_Text_EurykleiaPost::
# 133 "data/maps/CampLodge/scripts.pory"
	.string "Our elder is waiting.$"

CampLodge_Text_Eurykleia::
# 137 "data/maps/CampLodge/scripts.pory"
	.string "I only wait here to watch you battle.$"

CampLodge_Text_EumaeusIntro::
# 141 "data/maps/CampLodge/scripts.pory"
	.string "I'm the leader in here! I've learned the\l"
	.string "most and I posses the strength to beat\l"
	.string "you now!$"

CampLodge_Text_EumaeusLost::
# 145 "data/maps/CampLodge/scripts.pory"
	.string "I've been one upped.$"

CampLodge_Text_EumaeusPost::
# 149 "data/maps/CampLodge/scripts.pory"
	.string "Our elder is waiting.$"

CampLodge_Text_Eumaeus::
# 153 "data/maps/CampLodge/scripts.pory"
	.string "I only wait here to watch you battle.$"

CampLodge_Text_AntikleiaIntro::
# 157 "data/maps/CampLodge/scripts.pory"
	.string "For twenty years I've watched over this\l"
	.string "house as our headmistress, now answer\l"
	.string "me straight. What gives you any right to\l"
	.string "come to me?$"

CampLodge_Text_AntikleiaLost::
# 161 "data/maps/CampLodge/scripts.pory"
	.string "Your skill surpasses mine even with age$"

CampLodge_Text_AntikleiaPost::
# 165 "data/maps/CampLodge/scripts.pory"
	.string "Accept this gift and my message of\l"
	.string "love. Women may not beat men in\l"
	.string "strength at arms but armies fight and\l"
	.string "die before our breasts. To tame the\l"
	.string "world indeed you need their strength\l"
	.string "but theirs is nothing without our\l"
	.string "support.$"

CampLodge_Text_Antikleia::
# 169 "data/maps/CampLodge/scripts.pory"
	.string "You have the wisdom, and the strength\l"
	.string "at heart to smash every stone that\l"
	.string "blocks your path but without the power\l"
	.string "taught by our men you'll find your\l"
	.string "Pokemon will cannot break through.$"

CampLodge_Text_LaertesIntro::
# 173 "data/maps/CampLodge/scripts.pory"
	.string "While in my youth I shattered many\l"
	.string "rocks and now in my old age I teach the\l"
	.string "boys to break them just as I was taught\l"
	.string "myself. Now let's find out if you have\l"
	.string "what it takes to be my disciple. Prepare\l"
	.string "yourself!$"

CampLodge_Text_LaertesLost::
# 177 "data/maps/CampLodge/scripts.pory"
	.string "If I were in my youth I would have won$"

CampLodge_Text_LaertesPost::
# 181 "data/maps/CampLodge/scripts.pory"
	.string "You've shown you are ready to learn\l"
	.string "from me.$"

CampLodge_Text_ExplainRockSmash::
# 185 "data/maps/CampLodge/scripts.pory"
	.string "This Hidden Move contains the move\l"
	.string "Rock Smash. You can use it to break\l"
	.string "rocks in your path. Be sure to use the\l"
	.string "move responsibly and know without the\l"
	.string "girls you can't succeed.$"

CampLodge_Text_Laertes::
# 189 "data/maps/CampLodge/scripts.pory"
	.string "Without the knowledge and love of\l"
	.string "women you'll find your Pokemon cannot\l"
	.string "obey.$"

CampLodge_Text_Error::
# 193 "data/maps/CampLodge/scripts.pory"
	.string "Big TIME error$"
