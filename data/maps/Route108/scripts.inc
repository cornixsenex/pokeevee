Route108_MapScripts::
	.byte 0

Route108_EventScript_Jerome::
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew::
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara::
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy::
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina::
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRematch::
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

