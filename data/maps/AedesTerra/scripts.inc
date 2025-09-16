AedesTerra_MapScripts::
	.byte 0


AedesTerra_Script_ResetPuzzle4::
# 15 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 16 "data/maps/AedesTerra/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesTerra_Script_ResetPuzzle4_2
AedesTerra_Script_ResetPuzzle4_1:
	end

AedesTerra_Script_ResetPuzzle4_2:
# 17 "data/maps/AedesTerra/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesTerra_Script_ResetPuzzle4_4
# 23 "data/maps/AedesTerra/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 24 "data/maps/AedesTerra/scripts.pory"
	closemessage
	goto AedesTerra_Script_ResetPuzzle4_1

AedesTerra_Script_ResetPuzzle4_4:
# 18 "data/maps/AedesTerra/scripts.pory"
	closemessage
# 19 "data/maps/AedesTerra/scripts.pory"
	removeobject LOCALID_AEDESTERRA_CROSS4
# 20 "data/maps/AedesTerra/scripts.pory"
	setobjectxyperm LOCALID_AEDESTERRA_CROSS4, 8, 35
# 21 "data/maps/AedesTerra/scripts.pory"
	addobject LOCALID_AEDESTERRA_CROSS4
	goto AedesTerra_Script_ResetPuzzle4_1


AedesTerra_Text_ResetPuzzle::
# 30 "data/maps/AedesTerra/scripts.pory"
	.string "Would you like to reset the puzzle?$"

AedesTerra_Text_CantReset::
# 34 "data/maps/AedesTerra/scripts.pory"
	.string "Nothing happened...$"
