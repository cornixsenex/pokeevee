ViaMagnaTerminal_Robustica_MapScripts::
	.byte 0


ViaMagnaTerminal_Robustica_Script_BikeCheck::
# 7 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	lockall
# 8 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 9 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaMagnaTerminal_Robustica_Script_BikeCheck_2
# 12 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 13 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	setvar VAR_TEMP_0, 1
ViaMagnaTerminal_Robustica_Script_BikeCheck_1:
	end

ViaMagnaTerminal_Robustica_Script_BikeCheck_2:
# 10 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	call ViaMagnaTerminal_Robustica_Script_NoBike
	goto ViaMagnaTerminal_Robustica_Script_BikeCheck_1


ViaMagnaTerminal_Robustica_Script_NoBike::
# 19 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	lockall
# 20 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 21 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	waitmovement 0
# 22 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	msgbox ViaMagnaTerminal_Text_NoBike
# 23 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	closemessage
# 24 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft2
# 25 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	waitmovement 0
# 26 "data//maps/ViaMagnaTerminal_Robustica/scripts.pory"
	releaseall
	end

