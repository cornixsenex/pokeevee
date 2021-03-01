LoonixBeach_MapScripts::
	.byte 0


LoonixBeach_EventScript_Trainer_Skoob::
	trainerbattle_single TRAINER_KIYO, LoonixBeach_EventScript_Trainer_Skoob_Text_0, LoonixBeach_EventScript_Trainer_Skoob_Text_1
	msgbox LoonixBeach_EventScript_Trainer_Skoob_Text_2, MSGBOX_AUTOCLOSE
	end


LoonixBeach_EventScript_Trainer_Skoob_Text_0:
	.string "Dude...weed!$"

LoonixBeach_EventScript_Trainer_Skoob_Text_1:
	.string "Weed, dude.$"

LoonixBeach_EventScript_Trainer_Skoob_Text_2:
	.string "Man you got a light?$"
