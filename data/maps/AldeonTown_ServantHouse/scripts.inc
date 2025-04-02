AldeonTown_ServantHouse_MapScripts::
	.byte 0


AldeonTown_ServantHouse_Script_Servant::
# 6 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	lock
# 7 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	faceplayer
# 9 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 10 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	switch VAR_RESULT
# 11 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 1, AldeonTown_ServantHouse_Script_Servant_3
# 12 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 2, AldeonTown_ServantHouse_Script_Servant_3
# 14 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 3, AldeonTown_ServantHouse_Script_Servant_4
# 15 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 4, AldeonTown_ServantHouse_Script_Servant_4
# 17 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 5, AldeonTown_ServantHouse_Script_Servant_5
# 18 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 6, AldeonTown_ServantHouse_Script_Servant_5
# 20 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 7, AldeonTown_ServantHouse_Script_Servant_6
# 21 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	case 8, AldeonTown_ServantHouse_Script_Servant_6
# 24 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant5, MSGBOX_DEFAULT
AldeonTown_ServantHouse_Script_Servant_1:
# 26 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 27 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 28 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 29 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	release
	end

AldeonTown_ServantHouse_Script_Servant_3:
# 13 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant1, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_4:
# 16 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant2, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_5:
# 19 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant3, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_6:
# 22 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant4, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_1


AldeonTown_ServantHouse_Text_Servant1::
# 34 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Here house me entire life me servin'.$"

AldeonTown_ServantHouse_Text_Servant2::
# 38 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Before master's birthin' mighty Atreus\n"
	.string "here me servin' way back before\l"
	.string "Republic nosin' around.$"

AldeonTown_ServantHouse_Text_Servant3::
# 43 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Master Menelaus some time being gone.\n"
	.string "Family missin' him I think.$"

AldeonTown_ServantHouse_Text_Servant4::
# 48 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Not here but way back in island home me\n"
	.string "birthin'.$"

AldeonTown_ServantHouse_Text_Servant5::
# 53 "data//maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Good man Master Agamemnon being and\n"
	.string "kind master but recently not seemin'\l"
	.string "well. Indoors shuttin' like this Master\l"
	.string "Atreus never be doin'. Master Menelaus\l"
	.string "returnin' soon me hopin'.$"
