Loonix_MapScripts::
	.byte 0


Loonix_Sign::
	lock
	msgbox Loonix_Sign_Text_0, MSGBOX_SIGN
	release
	end


Small_Loonix_Sign::
	lock
	msgbox Small_Loonix_Sign_Text_0, MSGBOX_SIGN
	release
	end


Loonix_Sign_Text_0:
	.string "Loonix Rules!$"

Small_Loonix_Sign_Text_0:
	.string "Wood sign eh?$"
