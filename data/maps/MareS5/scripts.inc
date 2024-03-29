MareS5_MapScripts::
	.byte 0


MareS5_EventScript_Argo::
# 14 "data/maps/MareS5/scripts.pory"
	lockall
# 15 "data/maps/MareS5/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 16 "data/maps/MareS5/scripts.pory"
	waitmovement 0
# 17 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoIntro1, MSGBOX_YESNO
# 18 "data/maps/MareS5/scripts.pory"
	closemessage
# 19 "data/maps/MareS5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS5_EventScript_Argo_2
# 23 "data/maps/MareS5/scripts.pory"
	msgbox MareS5_Text_ArgoFarewell
# 24 "data/maps/MareS5/scripts.pory"
	closemessage
MareS5_EventScript_Argo_1:
# 26 "data/maps/MareS5/scripts.pory"
	releaseall
	end

MareS5_EventScript_Argo_2:
# 20 "data/maps/MareS5/scripts.pory"
	warpsilent MAP_ARGO, 16, 9
# 21 "data/maps/MareS5/scripts.pory"
	waitstate
	goto MareS5_EventScript_Argo_1


MareS5_Text_ArgoIntro1::
# 31 "data/maps/MareS5/scripts.pory"
	.string "Ahoy matey! If you be lost at sea feel\n"
	.string "free to join us!\n"
	.string "Will you board Argo?$"

MareS5_Text_ArgoFarewell::
# 35 "data/maps/MareS5/scripts.pory"
	.string "Farewell! Calm winds and gentle seas to\n"
	.string "you.$"
