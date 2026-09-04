SubMareCave_MapScripts::
	.byte 0


SubMareCave_Script_Panel::
# 5 "data/maps/SubMareCave/scripts.pory"
	msgbox AedesAqua_Text_WaterControl, MSGBOX_YESNO
# 6 "data/maps/SubMareCave/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SubMareCave_Script_Panel_2
SubMareCave_Script_Panel_1:
# 15 "data/maps/SubMareCave/scripts.pory"
	closemessage
	end

SubMareCave_Script_Panel_2:
# 7 "data/maps/SubMareCave/scripts.pory"
	goto_if_unset FLAG_SUBMARE_HIDESUBS, SubMareCave_Script_Panel_4
# 12 "data/maps/SubMareCave/scripts.pory"
	msgbox AedesAqua_Text_WaterControlNoEffect
	goto SubMareCave_Script_Panel_1

SubMareCave_Script_Panel_4:
# 8 "data/maps/SubMareCave/scripts.pory"
	playse SE_EFFECTIVE
# 9 "data/maps/SubMareCave/scripts.pory"
	waitse
# 10 "data/maps/SubMareCave/scripts.pory"
	setflag FLAG_SUBMARE_HIDESUBS
	goto SubMareCave_Script_Panel_1

