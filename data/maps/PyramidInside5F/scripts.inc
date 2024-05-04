PyramidInside5F_MapScripts::
	.byte 0


PyramidInside5F_EventScript_Indy::
# 6 "data/maps/PyramidInside5F/scripts.pory"
	lock
# 7 "data/maps/PyramidInside5F/scripts.pory"
	msgbox PyramidInside5F_Text_IndyIntro
# 8 "data/maps/PyramidInside5F/scripts.pory"
	closemessage
# 13 "data/maps/PyramidInside5F/scripts.pory"
	fadescreen 1
# 14 "data/maps/PyramidInside5F/scripts.pory"
	removeobject 1
# 15 "data/maps/PyramidInside5F/scripts.pory"
	setflag FLAG_PYRAMIDS_INDY
# 16 "data/maps/PyramidInside5F/scripts.pory"
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
# 17 "data/maps/PyramidInside5F/scripts.pory"
	setvar VAR_INDY_STATE, 1
# 18 "data/maps/PyramidInside5F/scripts.pory"
	setflag FLAG_FRAT_LEAF
# 19 "data/maps/PyramidInside5F/scripts.pory"
	fadescreen 0
# 20 "data/maps/PyramidInside5F/scripts.pory"
	release
	end


PyramidInside5F_Text_IndyIntro::
# 24 "data/maps/PyramidInside5F/scripts.pory"
	.string "I knew you were coming...say not a word\l"
	.string "before we battle. I must test your\l"
	.string "strength.$"
