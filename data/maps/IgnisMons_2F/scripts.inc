IgnisMons_2F_MapScripts::
# 3 "data/maps/IgnisMons_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

IgnisMons_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers
	return


IgnisMons_2F_Script_SetBarriers::
# 10 "data/maps/IgnisMons_2F/scripts.pory"
	switch VAR_IGNISMONS_STATE
# 11 "data/maps/IgnisMons_2F/scripts.pory"
	case 0, IgnisMons_2F_Script_SetBarriers_3
# 13 "data/maps/IgnisMons_2F/scripts.pory"
	case 1, IgnisMons_2F_Script_SetBarriers_4
# 15 "data/maps/IgnisMons_2F/scripts.pory"
	case 2, IgnisMons_2F_Script_SetBarriers_5
# 17 "data/maps/IgnisMons_2F/scripts.pory"
	case 3, IgnisMons_2F_Script_SetBarriers_6
# 20 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
IgnisMons_2F_Script_SetBarriers_1:
	end

IgnisMons_2F_Script_SetBarriers_3:
# 12 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Init
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_4:
# 14 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_5:
# 16 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
	goto IgnisMons_2F_Script_SetBarriers_1

IgnisMons_2F_Script_SetBarriers_6:
# 18 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
	goto IgnisMons_2F_Script_SetBarriers_1


IgnisMons_2F_Script_SetBarriers_Init::
# 26 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowRed
# 27 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowBlue
# 28 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_ShowGreen
	return


IgnisMons_2F_Script_RedButton::
# 34 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 35 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 1
	goto_if_ne IgnisMons_2F_Script_RedButton_2
IgnisMons_2F_Script_RedButton_1:
# 41 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_RedButton_2:
# 36 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 1
# 37 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 38 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Red
# 39 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_RedButton_1


IgnisMons_2F_Script_BlueButton::
# 46 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 47 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 2
	goto_if_ne IgnisMons_2F_Script_BlueButton_2
IgnisMons_2F_Script_BlueButton_1:
# 53 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_BlueButton_2:
# 48 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 2
# 49 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 50 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Blue
# 51 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_BlueButton_1


IgnisMons_2F_Script_GreenButton::
# 58 "data/maps/IgnisMons_2F/scripts.pory"
	lockall
# 59 "data/maps/IgnisMons_2F/scripts.pory"
	compare VAR_IGNISMONS_STATE, 3
	goto_if_ne IgnisMons_2F_Script_GreenButton_2
IgnisMons_2F_Script_GreenButton_1:
# 65 "data/maps/IgnisMons_2F/scripts.pory"
	releaseall
	end

IgnisMons_2F_Script_GreenButton_2:
# 60 "data/maps/IgnisMons_2F/scripts.pory"
	setvar VAR_IGNISMONS_STATE, 3
# 61 "data/maps/IgnisMons_2F/scripts.pory"
	playse SE_PIN
# 62 "data/maps/IgnisMons_2F/scripts.pory"
	call IgnisMons_2F_Script_SetBarriers_Green
# 63 "data/maps/IgnisMons_2F/scripts.pory"
	special DrawWholeMapView
	goto IgnisMons_2F_Script_GreenButton_1

