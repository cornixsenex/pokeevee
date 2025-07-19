TurrisSaltus1F_MapScripts::
# 3 "data/maps/TurrisSaltus1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/TurrisSaltus1F/scripts.pory"
	compare VAR_TURRIS_SALTUS_STATE, 1
	goto_if_lt TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TurrisSaltus1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus1F_Script_ShowDoorGuard
	return


TurrisSaltus1F_Script_ShowDoorGuard::
# 14 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD1, 19, 13
# 15 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD1, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD2, 20, 13
# 17 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD2, MOVEMENT_TYPE_FACE_DOWN
	return


TurrisSaltus1F_Script_DoorGuard::
# 24 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardPre
# 25 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 26 "data/maps/TurrisSaltus1F/scripts.pory"
	trainerbattle_two_trainers TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus1F_Text_DoorGuard1Lost, TRAINER_TYRIAN_HANDMAIDEN, TurrisSaltus1F_Text_DoorGuard2Lost
# 28 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardPost
# 30 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_FaceRight
# 31 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_FaceLeft
# 32 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/TurrisSaltus1F/scripts.pory"
	msgbox TurrisSaltus1F_Text_DoorGuardExit
# 35 "data/maps/TurrisSaltus1F/scripts.pory"
	closemessage
# 37 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_WalkUp2
# 38 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_WalkUp2
# 39 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD1, Common_Movement_WalkLeft9
# 41 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_DOORGUARD2, Common_Movement_WalkLeft9
# 42 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/TurrisSaltus1F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS1F_DOORGUARD1
# 45 "data/maps/TurrisSaltus1F/scripts.pory"
	removeobject LOCALID_TURRISSALTUS1F_DOORGUARD2
# 46 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD1, 0, 0
# 47 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectxyperm LOCALID_TURRISSALTUS1F_DOORGUARD2 0, 0
# 48 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD1, MOVEMENT_TYPE_INVISIBLE
# 49 "data/maps/TurrisSaltus1F/scripts.pory"
	setobjectmovementtype LOCALID_TURRISSALTUS1F_DOORGUARD2, MOVEMENT_TYPE_INVISIBLE
# 50 "data/maps/TurrisSaltus1F/scripts.pory"
	addobject LOCALID_TURRISSALTUS1F_DOORGUARD1
# 51 "data/maps/TurrisSaltus1F/scripts.pory"
	addobject LOCALID_TURRISSALTUS1F_DOORGUARD2
# 53 "data/maps/TurrisSaltus1F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 55 "data/maps/TurrisSaltus1F/scripts.pory"
	release
	end


TurrisSaltus1F_Script_Tyrian1::
	return


TurrisSaltus1F_Script_Tyrian2::
	return


TurrisSaltus1F_Script_Tyrian3::
	return


TurrisSaltus1F_Script_Tyrian4::
	return


TurrisSaltus1F_Script_Trigger_Tyrian1A::
# 79 "data/maps/TurrisSaltus1F/scripts.pory"
	lockall
# 81 "data/maps/TurrisSaltus1F/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 83 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_TURRISSALTUS1F_TYRIAN1, Common_Movement_ExclamationMark
# 84 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/TurrisSaltus1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 87 "data/maps/TurrisSaltus1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/TurrisSaltus1F/scripts.pory"
	call TurrisSaltus_Script_HandmaidenBattle
	return


TurrisSaltus_Script_HandmaidenBattle::
# 98 "data/maps/TurrisSaltus1F/scripts.pory"
	addvar VAR_TURRIS_SALTUS_STATE, 1
# 100 "data/maps/TurrisSaltus1F/scripts.pory"
	releaseall
	end


TurrisSaltus1F_Script_Trigger_Tyrian1B::
	return


TurrisSaltus1F_Script_Trigger_Tyrian2A::
	return


TurrisSaltus1F_Script_Trigger_Tyrian2B::
	return


TurrisSaltus1F_Script_Trigger_Tyrian3A::
	return


TurrisSaltus1F_Script_Trigger_Tyrian3B::
	return


TurrisSaltus1F_Script_Trigger_Tyrian4A::
	return


TurrisSaltus1F_Script_Trigger_Tyrian4B::
	return


TurrisSaltus1F_Text_DoorGuardPre::
# 132 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Halt!\p"
	.string "Stop right there!\p"
	.string "This tower is private property of the\n"
	.string "Tyrian Maidens.\p"
	.string "Since you were not invited by our queen,\n"
	.string "but somehow managed to gain entrance\l"
	.string "here, we must kill you.\p"
	.string "A dead man tells no tales.$"

TurrisSaltus1F_Text_DoorGuard1Lost::
# 140 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Defeated...how?$"

TurrisSaltus1F_Text_DoorGuard2Lost::
# 144 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "We have failed you our queen!$"

TurrisSaltus1F_Text_DoorGuardPost::
# 148 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "You will pay for attacking our tower.$"

TurrisSaltus1F_Text_DoorGuardExit::
# 152 "data/maps/TurrisSaltus1F/scripts.pory"
	.string "Come, sister, let's arouse the tower\n"
	.string "guard.$"
