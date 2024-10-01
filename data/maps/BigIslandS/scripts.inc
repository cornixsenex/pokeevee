BigIslandS_MapScripts::
# 14 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 15 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_OnResume::
# 22 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
# 23 "data/maps/BigIslandS/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BigIslandS_OnResume_2
BigIslandS_OnResume_1:
	end

BigIslandS_OnResume_2:
# 24 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_TryRemoveHoOh
	goto BigIslandS_OnResume_1


BigIslandS_Script_TryRemoveHoOh::
# 30 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
	return


BigIslandS_Script_IgnisGrunt::
# 35 "data/maps/BigIslandS/scripts.pory"
	lock
# 36 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 37 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 41 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 38 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 39 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 48 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 49 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 51 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Script_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Script_IgnisGrunt2Lost
# 53 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 54 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 55 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 57 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 58 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 60 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 61 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 62 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 64 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 66 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 73 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 74 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 77 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 78 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 80 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 81 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 83 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 84 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 86 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 87 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 93 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 94 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 95 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 96 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 98 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 99 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 101 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


BigIslandS_Script_TestGiveHammer::
# 107 "data/maps/BigIslandS/scripts.pory"
	lock
# 108 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 109 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 110 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_Prometheus::
# 115 "data/maps/BigIslandS/scripts.pory"
	lock
# 116 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1, MSGBOX_DEFAULT
# 117 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 118 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_BreakableRock::
# 123 "data/maps/BigIslandS/scripts.pory"
	lockall
# 124 "data/maps/BigIslandS/scripts.pory"
	checkitem ITEM_BIG_HAMMER, 1
# 125 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandS_Script_BreakableRock_2
# 134 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CantSmashRock
BigIslandS_Script_BreakableRock_1:
	end

BigIslandS_Script_BreakableRock_2:
# 126 "data/maps/BigIslandS/scripts.pory"
	msgbox Text_WantToSmash, MSGBOX_YESNO
# 127 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BigIslandS_Script_BreakableRock_5
# 130 "data/maps/BigIslandS/scripts.pory"
	call EventScript_HammerRockSmashTrigger
# 131 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HoOh
	goto BigIslandS_Script_BreakableRock_1

BigIslandS_Script_BreakableRock_5:
# 128 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CancelSmash
	goto BigIslandS_Script_BreakableRock_1


BigIslandS_Script_HoOh::
# 141 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 142 "data/maps/BigIslandS/scripts.pory"
	waitse
# 143 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 144 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 145 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 146 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 149 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus2, MSGBOX_DEFAULT
# 150 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 153 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 154 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BigIslandS_Script_HoOh_2
BigIslandS_Script_HoOh_1:
# 158 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandS_Script_HoOh_5
BigIslandS_Script_HoOh_4:
# 162 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne BigIslandS_Script_HoOh_8
# 165 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
BigIslandS_Script_HoOh_7:
# 167 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 170 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
# 171 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 3, 46, 9
# 172 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 173 "data/maps/BigIslandS/scripts.pory"
	addobject 3
# 174 "data/maps/BigIslandS/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_S
# 176 "data/maps/BigIslandS/scripts.pory"
	applymovement 3, BigIslandS_Movement_HoOhApproach
# 177 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 180 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 181 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 182 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 183 "data/maps/BigIslandS/scripts.pory"
	setwildbattle SPECIES_HO_OH, 13
# 184 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 185 "data/maps/BigIslandS/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 186 "data/maps/BigIslandS/scripts.pory"
	waitstate
# 189 "data/maps/BigIslandS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 192 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 193 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 198 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus3, MSGBOX_DEFAULT
# 199 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 202 "data/maps/BigIslandS/scripts.pory"
	fadescreen 1
# 203 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_ARGO_STATE, 6
# 204 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_PROMETHEUS
# 205 "data/maps/BigIslandS/scripts.pory"
	removeobject 1
# 206 "data/maps/BigIslandS/scripts.pory"
	fadescreen 0
# 208 "data/maps/BigIslandS/scripts.pory"
	releaseall
	end

BigIslandS_Script_HoOh_2:
# 155 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 156 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_1

BigIslandS_Script_HoOh_5:
# 159 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 160 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_4

BigIslandS_Script_HoOh_8:
# 163 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto BigIslandS_Script_HoOh_7


BigIslandS_Script_MonkeyTrigger::
# 219 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 221 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 222 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 223 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
# 225 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 226 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 227 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 228 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 231 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 232 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 233 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 234 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 236 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 238 "data/maps/BigIslandS/scripts.pory"
	fadescreen 1
# 240 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_S
# 241 "data/maps/BigIslandS/scripts.pory"
	removeobject 6
# 242 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_S
# 243 "data/maps/BigIslandS/scripts.pory"
	removeobject 7
# 244 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 8, MAP_BIG_ISLAND_S
# 245 "data/maps/BigIslandS/scripts.pory"
	removeobject 8
# 247 "data/maps/BigIslandS/scripts.pory"
	fadescreen 0
	end


# 252 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 253 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

# 256 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_HoOhApproach:
# 257 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 257 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 257 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 257 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 257 "data/maps/BigIslandS/scripts.pory"
	walk_down
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 73 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 261 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 269 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Script_IgnisGrunt1Lost::
# 274 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Script_IgnisGrunt2Lost::
# 279 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 284 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"

BigIslandS_Text_Prometheus1::
# 288 "data/maps/BigIslandS/scripts.pory"
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
# 292 "data/maps/BigIslandS/scripts.pory"
	.string "Beware young friend for we are not yet\n"
	.string "free. Prepare to meet a mighty foe.\l"
	.string "Defend us now or else surely perish.$"

BigIslandS_Text_Prometheus3::
# 296 "data/maps/BigIslandS/scripts.pory"
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
