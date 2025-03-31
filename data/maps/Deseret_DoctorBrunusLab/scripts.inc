Deseret_DoctorBrunusLab_MapScripts::
	.byte 0


Deseret_DoctorBrunusLab_Script_DoctorBrunus::
# 8 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	lock
# 9 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	faceplayer
# 10 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	checkitem ITEM_GO_GOGGLES, 1
# 11 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Deseret_DoctorBrunusLab_Script_DoctorBrunus_2
# 14 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	call Deseret_DoctorBrunusLab_Script_DoctorBrunus1
Deseret_DoctorBrunusLab_Script_DoctorBrunus_1:
# 16 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 17 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	waitmovement 0
# 18 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	closemessage
# 19 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	release
	end

Deseret_DoctorBrunusLab_Script_DoctorBrunus_2:
# 12 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	call Deseret_DoctorBrunusLab_Script_DoctorBrunus2
	goto Deseret_DoctorBrunusLab_Script_DoctorBrunus_1


Deseret_DoctorBrunusLab_Script_DoctorBrunus2::
# 25 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus3
	return


Deseret_DoctorBrunusLab_Script_DoctorBrunus1::
# 32 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus1
# 33 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	closemessage
# 34 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 36 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus2
	return


Deseret_DoctorBrunusLab_Text_DoctorBrunus1::
# 40 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "$"

Deseret_DoctorBrunusLab_Text_DoctorBrunus2::
# 44 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "$"

Deseret_DoctorBrunusLab_Text_DoctorBrunus3::
# 48 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "$"
