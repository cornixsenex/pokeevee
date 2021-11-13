PyramidInside5F_MapScripts::
	.byte 0


PyramidInside5F_EventScript_Indy::
	lock
	msgbox PyramidInside5F_Text_IndyIntro
	closemessage
	fadescreen 1
	removeobject 1
	setflag FLAG_PYRAMIDS_INDY
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
	setvar VAR_ARDOR_UNI, 2
	fadescreen 0
	release
	end


PyramidInside5F_Text_IndyIntro::
	.string "I knew you were coming...say not a word\n"
	.string "before we battle. I must test your\l"
	.string "strength.$"
