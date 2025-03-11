ViaMagnaTerminal_Peccadum_MapScripts::
	.byte 0


ViaMagnaTerminal_Peccadum_Script_BikeCheck::
# 5 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	lockall
# 6 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 7 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ViaMagnaTerminal_Peccadum_Script_BikeCheck_2
# 10 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 11 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	setvar VAR_TEMP_0, 1
ViaMagnaTerminal_Peccadum_Script_BikeCheck_1:
	end

ViaMagnaTerminal_Peccadum_Script_BikeCheck_2:
# 8 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	call ViaMagnaTerminal_Peccadum_Script_NoBike
	goto ViaMagnaTerminal_Peccadum_Script_BikeCheck_1


ViaMagnaTerminal_Peccadum_Script_NoBike::
# 17 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	lockall
# 18 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 19 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	waitmovement 0
# 20 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	msgbox ViaMagnaTerminal_Text_NoBike
# 21 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	closemessage
# 22 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight2
# 23 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	waitmovement 0
# 24 "data//maps/ViaMagnaTerminal_Peccadum/scripts.pory"
	releaseall
	end

