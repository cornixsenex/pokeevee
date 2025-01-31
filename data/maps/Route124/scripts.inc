Route124_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_OnTransition
	.byte 0

Route124_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

Route124_EventScript_HuntersHouseSign::
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
	end

Route124_EventScript_Spencer::
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Roland::
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Jenny::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchJenny
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterJenny::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RematchJenny::
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Grace::
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Chad::
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Lila::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchLila
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterLila::
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RematchLila::
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Roy::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route124_EventScript_RematchRoy
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RegisterRoy::
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
	release
	end

Route124_EventScript_RematchRoy::
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
	end

Route124_EventScript_Isabella::
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end

Route124_Text_HuntersHouse:
	.string "HUNTER'S HOUSE$"

