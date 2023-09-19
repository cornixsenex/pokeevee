MareS5_MapScripts::
	.byte 0


MareS5_EventScript_Argo::
	lockall
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
	msgbox MareS5_Text_ArgoFarewell
	closemessage
MareS5_EventScript_Argo_1:
	releaseall
	end

MareS5_EventScript_Argo_2:
	warpsilent MAP_ARGO, 16, 9
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_Text_ArgoIntro1::
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"
