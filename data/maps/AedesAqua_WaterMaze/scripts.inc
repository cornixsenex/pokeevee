AedesAqua_WaterMaze_MapScripts::
	.byte 0


AedesAqua_WaterMaze_Script_ShowWaterStateA::
# 11 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 12 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	waitse
# 32 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	playse SE_EFFECTIVE
# 33 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	waitse
# 35 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	special DrawWholeMapView
	return


AedesAqua_WaterMaze_Script_ShowWaterStateB::
# 43 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	playse SE_M_HYDRO_PUMP
# 44 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	waitse
# 64 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	playse SE_EFFECTIVE
# 65 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	waitse
# 67 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	special DrawWholeMapView
	return


AedesAqua_WaterMaze_Script_WaterSwitchR::
# 75 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 76 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	closemessage
# 77 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AedesAqua_WaterMaze_Script_WaterSwitchR_3
AedesAqua_WaterMaze_Script_WaterSwitchR_1:
	end

AedesAqua_WaterMaze_Script_WaterSwitchR_2:
# 78 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	clearflag FLAG_TEMP_6
# 79 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	call AedesAqua_WaterMaze_Script_ShowWaterStateA
	goto AedesAqua_WaterMaze_Script_WaterSwitchR_1

AedesAqua_WaterMaze_Script_WaterSwitchR_3:
# 77 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesAqua_WaterMaze_Script_WaterSwitchR_2
	goto AedesAqua_WaterMaze_Script_WaterSwitchR_1


AedesAqua_WaterMaze_Script_WaterSwitchL::
# 85 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 86 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	closemessage
# 87 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AedesAqua_WaterMaze_Script_WaterSwitchL_3
AedesAqua_WaterMaze_Script_WaterSwitchL_1:
	end

AedesAqua_WaterMaze_Script_WaterSwitchL_2:
# 88 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	setflag FLAG_TEMP_6
# 89 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	call AedesAqua_WaterMaze_Script_ShowWaterStateB
	goto AedesAqua_WaterMaze_Script_WaterSwitchL_1

AedesAqua_WaterMaze_Script_WaterSwitchL_3:
# 87 "data/maps/AedesAqua_WaterMaze/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesAqua_WaterMaze_Script_WaterSwitchL_2
	goto AedesAqua_WaterMaze_Script_WaterSwitchL_1

