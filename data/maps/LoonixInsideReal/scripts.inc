LoonixInsideReal_MapScripts::
	.byte 0


Watch_TV::
	lock
	msgbox Watch_TV_Text_0, MSGBOX_SIGN
	release
	end


LoonixInsideReal_EventScript_Statue::
	lock
	msgbox LoonixInsideReal_EventScript_Statue_Text_0
	release
	end


LoonixInsideReal_EventScript_Junk::
	lock
	msgbox LoonixInsideReal_EventScript_Junk_Text_0
	release
	end


LoonixInsideReal_EventScript_Special::
	lock
	showmonpic SPECIES_KRABBY, 10, 3
	msgbox LoonixInsideReal_EventScript_Special_Text_0
	hidemonpic
	release
	end


Watch_TV_Text_0:
	.string "MEW has returned!$"

LoonixInsideReal_EventScript_Statue_Text_0:
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_EventScript_Junk_Text_0:
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_EventScript_Special_Text_0:
	.string "What's for dinner?$"
