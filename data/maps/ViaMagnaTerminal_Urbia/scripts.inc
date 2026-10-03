ViaMagnaTerminal_Urbia_MapScripts::
	.byte 0


ViaMagnaTerminal_Urbia_Script_BikeCheck::
# 6 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	lockall
# 7 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 8 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaMagnaTerminal_Urbia_Script_BikeCheck_2
# 11 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 12 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	setvar VAR_TEMP_0, 1
ViaMagnaTerminal_Urbia_Script_BikeCheck_1:
	end

ViaMagnaTerminal_Urbia_Script_BikeCheck_2:
# 9 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	call ViaMagnaTerminal_Urbia_Script_NoBike
	goto ViaMagnaTerminal_Urbia_Script_BikeCheck_1


ViaMagnaTerminal_Urbia_Script_BikeClear::
# 18 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	lockall
# 19 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 20 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	setvar VAR_TEMP_0, 0
# 21 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	releaseall
	end


ViaMagnaTerminal_Urbia_Script_NoBike::
# 26 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	lockall
# 27 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 28 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	waitmovement 0
# 29 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	msgbox ViaMagnaTerminal_Text_NoBike
# 30 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	closemessage
# 31 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown2
# 32 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	waitmovement 0
# 33 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	releaseall
	end


ViaMagnaTerminal_Text_NoBike::
# 37 "data/maps/ViaMagnaTerminal_Urbia/scripts.pory"
	.string "Stop right there! Via Magna is only for\n"
	.string "bicycles. Pedestrians aren't allowed.$"
