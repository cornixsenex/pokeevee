Urbia_TruckDepot_MapScripts::
# 5 "data//maps/Urbia_TruckDepot/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Urbia_TruckDepot_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 9 "data//maps/Urbia_TruckDepot/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Urbia_TruckDepot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Urbia_TruckDepot_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data//maps/Urbia_TruckDepot/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Urbia_TruckDepot_Script_TryTurnPlayer
	.2byte 0

Urbia_TruckDepot_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/Urbia_TruckDepot/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, Urbia_TruckDepot_Script_ArrivalScene
	.2byte 0


Urbia_TruckDepot_Script_TryTurnPlayer::
# 15 "data//maps/Urbia_TruckDepot/scripts.pory"
	goto_if_set FLAG_PECCADUM_TRUCK_READY, Urbia_TruckDepot_Script_TryTurnPlayer_2
Urbia_TruckDepot_Script_TryTurnPlayer_1:
# 17 "data//maps/Urbia_TruckDepot/scripts.pory"
	setvar VAR_TEMP_1, 1
	end

Urbia_TruckDepot_Script_TryTurnPlayer_2:
# 16 "data//maps/Urbia_TruckDepot/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto Urbia_TruckDepot_Script_TryTurnPlayer_1


Urbia_TruckDepot_Script_ArrivalScene::
# 22 "data//maps/Urbia_TruckDepot/scripts.pory"
	setvar VAR_TEMP_1, 2
# 23 "data//maps/Urbia_TruckDepot/scripts.pory"
	goto_if_set FLAG_PECCADUM_TRUCK_READY, Urbia_TruckDepot_Script_ArrivalScene_1
	return

Urbia_TruckDepot_Script_ArrivalScene_1:
# 24 "data//maps/Urbia_TruckDepot/scripts.pory"
	msgbox Urbia_TruckDepot_Text_Arrival1
# 25 "data//maps/Urbia_TruckDepot/scripts.pory"
	msgbox Urbia_TruckDepot_Text_Arrival2
# 26 "data//maps/Urbia_TruckDepot/scripts.pory"
	closemessage
	return


Urbia_TruckDepot_Script_Secretary::
# 31 "data//maps/Urbia_TruckDepot/scripts.pory"
	lock
# 32 "data//maps/Urbia_TruckDepot/scripts.pory"
	goto_if_set FLAG_PECCADUM_TRUCK_READY, Urbia_TruckDepot_Script_Secretary_2
# 35 "data//maps/Urbia_TruckDepot/scripts.pory"
	msgbox Peccadum_TruckDepot_Text_Welcome
Urbia_TruckDepot_Script_Secretary_1:
# 37 "data//maps/Urbia_TruckDepot/scripts.pory"
	closemessage
# 38 "data//maps/Urbia_TruckDepot/scripts.pory"
	release
	end

Urbia_TruckDepot_Script_Secretary_2:
# 33 "data//maps/Urbia_TruckDepot/scripts.pory"
	msgbox Urbia_TruckDepot_Text_Arrival2
	goto Urbia_TruckDepot_Script_Secretary_1


Urbia_TruckDepot_Text_Arrival1::
# 42 "data//maps/Urbia_TruckDepot/scripts.pory"
	.string "Welcome to Urbia. I am afraid there's\n"
	.string "nothing more that we can do for you.\l"
	.string "Tell nobody how you arrived in town or\l"
	.string "how you departed from Peccadum. I hope\l"
	.string "you find success and happiness.$"

Urbia_TruckDepot_Text_Arrival2::
# 46 "data//maps/Urbia_TruckDepot/scripts.pory"
	.string "Now get out of here! Quick! We don't\n"
	.string "know you!$"
