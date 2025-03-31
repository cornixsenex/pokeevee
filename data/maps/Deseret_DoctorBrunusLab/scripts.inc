Deseret_DoctorBrunusLab_MapScripts::
	.byte 0


Deseret_DoctorBrunusLab_Script_Girafarig::
# 6 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	lock
# 7 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	faceplayer
# 8 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	playmoncry SPECIES_GIRAFARIG, CRY_MODE_ENCOUNTER
# 9 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	waitmoncry
# 10 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 11 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	waitmovement 0
# 12 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	release
	end


Deseret_DoctorBrunusLab_Script_DoctorBrunus::
# 17 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	lock
# 18 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	faceplayer
# 19 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	checkitem ITEM_GO_GOGGLES, 1
# 20 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Deseret_DoctorBrunusLab_Script_DoctorBrunus_2
# 23 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	call Deseret_DoctorBrunusLab_Script_DoctorBrunus1
Deseret_DoctorBrunusLab_Script_DoctorBrunus_1:
# 25 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 26 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	waitmovement 0
# 27 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	closemessage
# 28 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	release
	end

Deseret_DoctorBrunusLab_Script_DoctorBrunus_2:
# 21 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	call Deseret_DoctorBrunusLab_Script_DoctorBrunus2
	goto Deseret_DoctorBrunusLab_Script_DoctorBrunus_1


Deseret_DoctorBrunusLab_Script_DoctorBrunus2::
# 34 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus3
	return


Deseret_DoctorBrunusLab_Script_DoctorBrunus1::
# 41 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus1
# 42 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	closemessage
# 43 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 45 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	msgbox Deseret_DoctorBrunusLab_Text_DoctorBrunus2
	return


Deseret_DoctorBrunusLab_Text_DoctorBrunus1::
# 49 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "They called me crazy! All those stuffy\n"
	.string "men locked up inside their university\l"
	.string "afraid to dream, to break those rules\l"
	.string "they learned. Obsessed with maintaining\l"
	.string "the status quo! But I am the clever\l"
	.string "Doctor Brunus! I have invented\l"
	.string "something of my own! Something brand\l"
	.string "new! Something they'll never have!\l"
	.string "Young lad, come here. I want to give to\l"
	.string "you the fruits my ten year's labor\l"
	.string "finally bore.$"

Deseret_DoctorBrunusLab_Text_DoctorBrunus2::
# 53 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "For too long have our eyes been\n"
	.string "buffeted by puny grains of sand in the\l"
	.string "desert. No more! With those goggles you\l"
	.string "can traverse the desert wastes without\l"
	.string "blinding yourself. Wear them with pride.\l"
	.string "Wear them with distinction among those\l"
	.string "short sighted fools at Ardens.$"

Deseret_DoctorBrunusLab_Text_DoctorBrunus3::
# 57 "data//maps/Deseret_DoctorBrunusLab/scripts.pory"
	.string "Well, look at that! Those goggles do\n"
	.string "look sharp. Be sure to mention they\l"
	.string "were invented by Doctor Brunus when\l"
	.string "those college fools inevitably ask\l"
	.string "where they are from. Doctor Brunus must\l"
	.string "now get back to work creating new\l"
	.string "inventions for mankind. Come back\l"
	.string "sometime and I will share with you the\l"
	.string "fruits of my pioneering labor.$"
