Route106_MapScripts::
	.byte 0

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Elliot::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRematch::
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ned::
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"

