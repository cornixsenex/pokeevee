Route126_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
	.byte 0

Route126_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

Route126_EventScript_Barry::
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Dean::
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Nikki::
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Brenda::
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Leonardo::
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Isobel::
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Sienna::
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Pablo::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route126_EventScript_RematchPablo
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
	release
	end

Route126_EventScript_RegisterPablo::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PABLO_1
	release
	end

Route126_EventScript_RematchPablo::
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
	end

