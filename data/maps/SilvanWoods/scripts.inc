SilvanWoods_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_ROUTE3_STATE, 0, SilvanWoods_OnWarp_ShowFight1
	map_script_2 VAR_ROUTE3_STATE, 1, SilvanWoods_OnWarp_ShowFight2
	.2byte 0


SilvanWoods_OnWarp_ShowFight1::
	addobject 35
	showobjectat 35, MAP_SILVAN_WOODS
	addobject 36
	showobjectat 36, MAP_SILVAN_WOODS
	addobject 37
	showobjectat 37, MAP_SILVAN_WOODS
	addobject 38
	showobjectat 38, MAP_SILVAN_WOODS
	end


SilvanWoods_OnWarp_ShowFight2::
	addobject 25
	showobjectat 25, MAP_SILVAN_WOODS
	addobject 26
	showobjectat 26, MAP_SILVAN_WOODS
	addobject 27
	showobjectat 27, MAP_SILVAN_WOODS
	addobject 28
	showobjectat 28, MAP_SILVAN_WOODS
	end


SilvanWoods_RivalTrigger1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	addobject 34
	showobjectat 34, MAP_ROUTE3
	applymovement 34, SilvanWoods_Movement_RivalWalk
	waitmovement 0
	removeobject 34
	setvar VAR_ROUTE3_STATE, 2
	releaseall
	end


SilvanWoods_RivalTrigger2::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerRival
	addobject 34
	showobjectat 34, MAP_ROUTE3
	applymovement 34, SilvanWoods_Movement_RivalWalk
	waitmovement 0
	removeobject 34
	setvar VAR_ROUTE3_STATE, 2
	releaseall
	end


SilvanWoods_EventScript_Crystal::
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
	msgbox SilvanWoods_Text_CrystalPost
	closemessage
	end


SilvanWoods_EventScript_Noah::
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
	msgbox SilvanWoods_Text_NoahPost
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
	msgbox SilvanWoods_Text_FredrickPost
	closemessage
	end


SilvanWoods_EventScript_Matt::
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
	msgbox SilvanWoods_Text_MattPost
	closemessage
	end


SilvanWoods_Movement_PlayerRival:
	walk_left
	step_end

SilvanWoods_Movement_RivalWalk:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

SilvanWoods_Text_CrystalIntro::
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
	.string "My bug was not stronger.$"
