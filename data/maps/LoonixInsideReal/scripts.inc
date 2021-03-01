LoonixInsideReal_MapScripts::
	.byte 0


Watch_TV::
	lock
	msgbox Watch_TV_Text_0, MSGBOX_SIGN
	release
	end


Watch_TV_Text_0:
	.string "MEW has returned!$"
