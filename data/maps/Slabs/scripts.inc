Slabs_MapScripts::
# 11 "data/maps/Slabs/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Slabs_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Slabs_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/Slabs/scripts.pory"
	call Slabs_OnResume
	return


Slabs_OnResume::
# 24 "data/maps/Slabs/scripts.pory"
	compare VAR_SLABS_STATE, 1
	goto_if_eq Slabs_OnResume_2
Slabs_OnResume_1:
# 27 "data/maps/Slabs/scripts.pory"
	compare VAR_SLABS_STATE, 2
	goto_if_eq Slabs_OnResume_5
Slabs_OnResume_4:
	end

Slabs_OnResume_2:
# 25 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_HideBike1
	goto Slabs_OnResume_1

Slabs_OnResume_5:
# 28 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_HideBike1
# 29 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_HideBike2
	goto Slabs_OnResume_4


Slabs_EventScript_HideBike1::
# 35 "data/maps/Slabs/scripts.pory"
	setmetatile 32, 33, METATILE_Fallarbor_Slabs_GroundDefault, 0
# 36 "data/maps/Slabs/scripts.pory"
	setmetatile 33, 33, METATILE_Fallarbor_Slabs_GroundDefault, 0
	return


Slabs_EventScript_HideBike2::
# 41 "data/maps/Slabs/scripts.pory"
	setmetatile 32, 34, METATILE_Fallarbor_Slabs_GroundDefault, 0
# 42 "data/maps/Slabs/scripts.pory"
	setmetatile 33, 34, METATILE_Fallarbor_Slabs_GroundDefault, 0
	return


Slabs_EventScript_RivalTrigger::
# 47 "data/maps/Slabs/scripts.pory"
	lock
# 48 "data/maps/Slabs/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 49 "data/maps/Slabs/scripts.pory"
	waitmovement 0
# 50 "data/maps/Slabs/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 51 "data/maps/Slabs/scripts.pory"
	waitmovement 0
# 52 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_RivalBattle
# 53 "data/maps/Slabs/scripts.pory"
	release
	end


Slabs_EventScript_Rival::
# 59 "data/maps/Slabs/scripts.pory"
	lock
# 60 "data/maps/Slabs/scripts.pory"
	faceplayer
# 61 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_RivalBattle
# 62 "data/maps/Slabs/scripts.pory"
	release
	end


Slabs_EventScript_RivalBattle::
# 67 "data/maps/Slabs/scripts.pory"
	load_field_pic 16, 190, 98
# 68 "data/maps/Slabs/scripts.pory"
	msgbox Slabs_Text_Rival1
# 69 "data/maps/Slabs/scripts.pory"
	closemessage
# 70 "data/maps/Slabs/scripts.pory"
	destroy_field_pic 16
# 71 "data/maps/Slabs/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL5, Slabs_Text_RivalLost
# 72 "data/maps/Slabs/scripts.pory"
	load_field_pic 16, 190, 98
# 73 "data/maps/Slabs/scripts.pory"
	msgbox Slabs_Text_RivalPost
# 74 "data/maps/Slabs/scripts.pory"
	closemessage
# 75 "data/maps/Slabs/scripts.pory"
	destroy_field_pic 16
# 77 "data/maps/Slabs/scripts.pory"
	fadescreenswapbuffers 1
# 78 "data/maps/Slabs/scripts.pory"
	setflag FLAG_SLABS_HIDE_RIVAL
# 79 "data/maps/Slabs/scripts.pory"
	removeobject 1
# 81 "data/maps/Slabs/scripts.pory"
	setvar VAR_SLABS_STATE, 1
# 83 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_HideBike1
# 84 "data/maps/Slabs/scripts.pory"
	special DrawWholeMapView
# 85 "data/maps/Slabs/scripts.pory"
	fadescreenswapbuffers 0
	return


Slabs_EventScript_Bike::
# 90 "data/maps/Slabs/scripts.pory"
	lockall
# 91 "data/maps/Slabs/scripts.pory"
	finditem ITEM_ACRO_BIKE
# 92 "data/maps/Slabs/scripts.pory"
	setvar VAR_SLABS_STATE, 2
# 93 "data/maps/Slabs/scripts.pory"
	call Slabs_EventScript_HideBike2
# 94 "data/maps/Slabs/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/Slabs/scripts.pory"
	releaseall
	end


Slabs_Text_Rival1::
# 101 "data/maps/Slabs/scripts.pory"
	.string "What are you doing here? You pushed me\n"
	.string "to the outer fringes of society where\l"
	.string "I've started a succesful renegade\l"
	.string "bicycle repair shop I'll never let you\l"
	.string "take this from me too!$"

Slabs_Text_RivalLost::
# 105 "data/maps/Slabs/scripts.pory"
	.string "I can't even live my life here in peace$"

Slabs_Text_RivalPost::
# 109 "data/maps/Slabs/scripts.pory"
	.string "You've destroyed everything I ever had,\n"
	.string "taken everything I've ever loved away\l"
	.string "from me where can I turn$"
