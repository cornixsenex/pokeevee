Route107_MapScripts::
	.byte 0

Route107_EventScript_Darrin::
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Tony::
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
	release
	end

Route107_EventScript_TonyRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
	release
	end

Route107_EventScript_TonyRematch::
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Denise::
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Beth::
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Lisa::
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Ray::
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end

Route107_EventScript_Camron::
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end

