Route10_MapScripts::
	.byte 0


EliciusBeach_EventScript_Krabby::
	lock
	playmoncry SPECIES_KRABBY, 0
	setflag FLAG_ROUTE10_HIDE_KRABBY
	waitmoncry
	setwildbattle SPECIES_KRABBY, 25
	dowildbattle
	fadescreen 1
	removeobject 17
	fadescreen 0
	release
	return

