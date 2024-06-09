BigIslandS_MapScripts::
# 11 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
# 19 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
# 20 "data/maps/BigIslandS/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BigIslandS_OnResume_2
BigIslandS_OnResume_1:
	end

BigIslandS_OnResume_2:
# 21 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_TryRemoveHoOh
	goto BigIslandS_OnResume_1


BigIslandS_Script_TryRemoveHoOh::
# 27 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
	return


BigIslandS_Script_IgnisGrunt::
# 32 "data/maps/BigIslandS/scripts.pory"
	lock
# 33 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 34 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 38 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 35 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 36 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 45 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 46 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 48 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Script_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Script_IgnisGrunt2Lost
# 50 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 51 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 52 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 54 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 55 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 57 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 58 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 59 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 61 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 63 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 70 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 71 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 74 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 75 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 77 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 78 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 80 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 81 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 83 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 84 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 90 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 91 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 92 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 93 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 95 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 96 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 97 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 98 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


BigIslandS_Script_TestGiveHammer::
# 104 "data/maps/BigIslandS/scripts.pory"
	lock
# 105 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 106 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 107 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_Prometheus::
# 112 "data/maps/BigIslandS/scripts.pory"
	lock
# 113 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1, MSGBOX_DEFAULT
# 114 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 115 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_BreakableRock::
# 120 "data/maps/BigIslandS/scripts.pory"
	lockall
# 121 "data/maps/BigIslandS/scripts.pory"
	checkitem ITEM_BIG_HAMMER, 1
# 122 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandS_Script_BreakableRock_2
# 131 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CantSmashRock
BigIslandS_Script_BreakableRock_1:
	end

BigIslandS_Script_BreakableRock_2:
# 123 "data/maps/BigIslandS/scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 124 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BigIslandS_Script_BreakableRock_5
# 127 "data/maps/BigIslandS/scripts.pory"
	call EventScript_HammerRockSmashTrigger
# 128 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HoOh
	goto BigIslandS_Script_BreakableRock_1

BigIslandS_Script_BreakableRock_5:
# 125 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CancelSmash
	goto BigIslandS_Script_BreakableRock_1


BigIslandS_Script_HoOh::
# 138 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 139 "data/maps/BigIslandS/scripts.pory"
	waitse
# 140 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 141 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 142 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 143 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 146 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus2, MSGBOX_DEFAULT
# 147 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 150 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 151 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BigIslandS_Script_HoOh_2
BigIslandS_Script_HoOh_1:
# 155 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandS_Script_HoOh_5
BigIslandS_Script_HoOh_4:
# 159 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne BigIslandS_Script_HoOh_8
# 162 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
BigIslandS_Script_HoOh_7:
# 164 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 167 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
# 168 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 3, 46, 9
# 169 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 170 "data/maps/BigIslandS/scripts.pory"
	addobject 3
# 171 "data/maps/BigIslandS/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_S
# 173 "data/maps/BigIslandS/scripts.pory"
	applymovement 3, BigIslandS_Movement_HoOhApproach
# 174 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 177 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 178 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 179 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 180 "data/maps/BigIslandS/scripts.pory"
	setwildbattle SPECIES_HO_OH, 13
# 181 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 182 "data/maps/BigIslandS/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 183 "data/maps/BigIslandS/scripts.pory"
	waitstate
# 186 "data/maps/BigIslandS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 189 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 190 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 195 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus3, MSGBOX_DEFAULT
# 196 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 199 "data/maps/BigIslandS/scripts.pory"
	fadescreen 1
# 200 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_ARGO_STATE, 6
# 201 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_PROMETHEUS
# 202 "data/maps/BigIslandS/scripts.pory"
	removeobject 1
# 203 "data/maps/BigIslandS/scripts.pory"
	fadescreen 0
# 205 "data/maps/BigIslandS/scripts.pory"
	releaseall
	end

BigIslandS_Script_HoOh_2:
# 152 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 153 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_1

BigIslandS_Script_HoOh_5:
# 156 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 157 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_4

BigIslandS_Script_HoOh_8:
# 160 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto BigIslandS_Script_HoOh_7


# 210 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 211 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_HoOhApproach:
# 215 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 215 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 215 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 215 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 215 "data/maps/BigIslandS/scripts.pory"
	walk_down
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 70 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 219 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 227 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Script_IgnisGrunt1Lost::
# 232 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Script_IgnisGrunt2Lost::
# 237 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 242 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"

BigIslandS_Text_Prometheus1::
# 246 "data/maps/BigIslandS/scripts.pory"
	.string "What's this? You're not one of those\n"
	.string "savages who chained me to this rock to\l"
	.string "tortue me in retribution for my refusal\l"
	.string "to serve them as some fortune teller.\l"
	.string "No, you're just a boy. Have pity on this\l"
	.string "old poor tortured soul imprisoned on\l"
	.string "this rock and forced to serve the dark\l"
	.string "witch Medea. Alas! These wicked chains\l"
	.string "gnaw my skin raw and soon I fear the\l"
	.string "mighty bird will come to torture me\l"
	.string "again with burning breath. Young man I\l"
	.string "beg you free me from this rock and I will\l"
	.string "tell what lies in your future.$"

BigIslandS_Text_Prometheus2::
# 250 "data/maps/BigIslandS/scripts.pory"
	.string "Beware young friend for we are not yet\n"
	.string "free. Prepare to meet a mighty foe.\l"
	.string "Defend us now or else surely perish.$"

BigIslandS_Text_Prometheus3::
# 254 "data/maps/BigIslandS/scripts.pory"
	.string "My lad! You've done it! You remind me of\n"
	.string "the mighty hero Heracles. I will reward\l"
	.string "your courage with a prophesy.\l"
	.string "In search of Colchis' cave a hidden\l"
	.string "path\l"
	.string "Eluding their keen sight Shiny Mareep\l"
	.string "So far away lost in shadowy night\l"
	.string "A SPEAROW released took off graceful\l"
	.string "flight\l"
	.string "Revealing secrets kept by cavern walls\l"
	.string "Thus by the SPEAROW's flight the truth\l"
	.string "was shown\l"
	.string "How Jason and his crew found paths\l"
	.string "unknown.\l"
	.string "I must be going now. I'm free at last to\l"
	.string "return home. May God above bless you.$"
