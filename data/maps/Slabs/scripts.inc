Slabs_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Slabs_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Slabs_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Slabs_OnResume
	return


Slabs_OnResume::
	compare VAR_SLABS_STATE, 1
	goto_if_eq Slabs_OnResume_2
Slabs_OnResume_1:
	compare VAR_SLABS_STATE, 2
	goto_if_eq Slabs_OnResume_5
Slabs_OnResume_4:
	end

Slabs_OnResume_2:
	call Slabs_EventScript_HideBike1
	goto Slabs_OnResume_1

Slabs_OnResume_5:
	call Slabs_EventScript_HideBike1
	call Slabs_EventScript_HideBike2
	goto Slabs_OnResume_4


Slabs_EventScript_HideBike1::
	setmetatile 32, 33, METATILE_Fallarbor_Slabs_GroundDefault, 0
	setmetatile 33, 33, METATILE_Fallarbor_Slabs_GroundDefault, 0
	return


Slabs_EventScript_HideBike2::
	setmetatile 32, 34, METATILE_Fallarbor_Slabs_GroundDefault, 0
	setmetatile 33, 34, METATILE_Fallarbor_Slabs_GroundDefault, 0
	return


Slabs_EventScript_RivalTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	call Slabs_EventScript_RivalBattle
	release
	end


Slabs_EventScript_Rival::
	lock
	faceplayer
	call Slabs_EventScript_RivalBattle
	release
	end


Slabs_EventScript_RivalBattle::
	load_field_pic 16, 190, 98
	msgbox Slabs_Text_Rival1
	closemessage
	destroy_field_pic 16
	setvar VAR_MUGSHOT_ID, MUGSHOT_BLUE
	trainerbattle_no_intro TRAINER_RIVAL5, Slabs_Text_RivalLost
	load_field_pic 16, 190, 98
	msgbox Slabs_Text_RivalPost
	closemessage
	destroy_field_pic 16
	fadescreen 1
	setflag FLAG_SLABS_HIDE_RIVAL
	removeobject 1
	setvar VAR_SLABS_STATE, 1
	call Slabs_EventScript_HideBike1
	special DrawWholeMapView
	fadescreen 0
	return


Slabs_EventScript_Bike::
	lockall
	finditem ITEM_MACH_BIKE
	setvar VAR_SLABS_STATE, 2
	call Slabs_EventScript_HideBike2
	special DrawWholeMapView
	releaseall
	end


Slabs_Text_Rival1::
	.string "What are you doing here? You pushed me\n"
	.string "to the outer fringes of society where\l"
	.string "I've started a succesful renegade\l"
	.string "bicycle repair shop I'll never let you\l"
	.string "take this from me too!$"

Slabs_Text_RivalLost::
	.string "I can't even live my life here in peace$"

Slabs_Text_RivalPost::
	.string "You've destroyed everything I ever had,\n"
	.string "taken everything I've ever loved away\l"
	.string "from me where can I turn$"
