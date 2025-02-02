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
# 26 "data/maps/BigIslandS/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq BigIslandS_OnResume_5
BigIslandS_OnResume_4:
	end

BigIslandS_OnResume_2:
# 24 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_TryRemoveHoOh
	goto BigIslandS_OnResume_1

BigIslandS_OnResume_5:
# 27 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 28 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 29 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	goto BigIslandS_OnResume_4


BigIslandS_Script_TryRemoveHoOh::
# 35 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
	return


BigIslandS_Script_IgnisGrunt::
# 40 "data/maps/BigIslandS/scripts.pory"
	lock
# 41 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 42 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 46 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 43 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 44 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 53 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 54 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 56 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Text_IgnisGrunt2Lost
# 58 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 59 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 60 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 62 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 63 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 65 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 66 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 67 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 69 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 71 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 78 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 79 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 82 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 83 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 85 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 86 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 88 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 89 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 91 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 92 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 98 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 99 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 101 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 103 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 104 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 106 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


BigIslandS_Script_TestGiveHammer::
# 112 "data/maps/BigIslandS/scripts.pory"
	lock
# 113 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 114 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 115 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_Prometheus::
# 120 "data/maps/BigIslandS/scripts.pory"
	lock
# 121 "data/maps/BigIslandS/scripts.pory"
	goto_if_unset FLAG_PROMETHEUS_INTROD, BigIslandS_Script_Prometheus_2
# 125 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1b, MSGBOX_DEFAULT
BigIslandS_Script_Prometheus_1:
# 127 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 128 "data/maps/BigIslandS/scripts.pory"
	release
	end

BigIslandS_Script_Prometheus_2:
# 122 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_PROMETHEUS_INTROD
# 123 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1, MSGBOX_DEFAULT
	goto BigIslandS_Script_Prometheus_1


BigIslandS_Script_BreakableRock::
# 133 "data/maps/BigIslandS/scripts.pory"
	lockall
# 134 "data/maps/BigIslandS/scripts.pory"
	checkitem ITEM_BIG_HAMMER, 1
# 135 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandS_Script_BreakableRock_2
# 144 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CantBreakRock
BigIslandS_Script_BreakableRock_1:
	end

BigIslandS_Script_BreakableRock_2:
# 136 "data/maps/BigIslandS/scripts.pory"
	msgbox Text_WantToBreak, MSGBOX_YESNO
# 137 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BigIslandS_Script_BreakableRock_5
# 140 "data/maps/BigIslandS/scripts.pory"
	call EventScript_HammerRockSmashTrigger
# 141 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HoOh
	goto BigIslandS_Script_BreakableRock_1

BigIslandS_Script_BreakableRock_5:
# 138 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CancelSmash
	goto BigIslandS_Script_BreakableRock_1


BigIslandS_Script_HoOh::
# 151 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 152 "data/maps/BigIslandS/scripts.pory"
	waitse
# 153 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 154 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 155 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 156 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 159 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus2, MSGBOX_DEFAULT
# 160 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 163 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 164 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BigIslandS_Script_HoOh_2
BigIslandS_Script_HoOh_1:
# 168 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandS_Script_HoOh_5
BigIslandS_Script_HoOh_4:
# 172 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne BigIslandS_Script_HoOh_8
# 175 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
BigIslandS_Script_HoOh_7:
# 177 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 180 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
# 181 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 3, 46, 9
# 182 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/maps/BigIslandS/scripts.pory"
	addobject 3
# 184 "data/maps/BigIslandS/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_S
# 186 "data/maps/BigIslandS/scripts.pory"
	applymovement 3, BigIslandS_Movement_HoOhApproach
# 187 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 190 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 191 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 192 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 193 "data/maps/BigIslandS/scripts.pory"
	setwildbattle SPECIES_HO_OH, 13
# 194 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 195 "data/maps/BigIslandS/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 196 "data/maps/BigIslandS/scripts.pory"
	waitstate
# 199 "data/maps/BigIslandS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 203 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 208 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus3, MSGBOX_DEFAULT
# 209 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 211 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_OSTRACON
# 213 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus4, MSGBOX_DEFAULT
# 214 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 218 "data/maps/BigIslandS/scripts.pory"
	fadescreen 1
# 219 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_ARGO_STATE, 6
# 220 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_PROMETHEUS
# 221 "data/maps/BigIslandS/scripts.pory"
	removeobject 1
# 222 "data/maps/BigIslandS/scripts.pory"
	fadescreen 0
# 224 "data/maps/BigIslandS/scripts.pory"
	releaseall
	end

BigIslandS_Script_HoOh_2:
# 165 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 166 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_1

BigIslandS_Script_HoOh_5:
# 169 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 170 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_4

BigIslandS_Script_HoOh_8:
# 173 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto BigIslandS_Script_HoOh_7


BigIslandS_Script_HideMonkeys::
# 232 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 233 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 234 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
# 236 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 237 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 238 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 239 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 242 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 243 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 244 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 245 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 247 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 249 "data/maps/BigIslandS/scripts.pory"
	fadescreen 1
# 251 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_S
# 252 "data/maps/BigIslandS/scripts.pory"
	removeobject 6
# 253 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_S
# 254 "data/maps/BigIslandS/scripts.pory"
	removeobject 7
# 255 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 8, MAP_BIG_ISLAND_S
# 256 "data/maps/BigIslandS/scripts.pory"
	removeobject 8
# 258 "data/maps/BigIslandS/scripts.pory"
	fadescreen 0
# 260 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 261 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 6, 64, 24
# 262 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 263 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 7, 65, 24
# 264 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 265 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 8, 65, 24
	return


BigIslandS_Script_MonkeyTrigger::
# 271 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 272 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideMonkeys
	end


# 276 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 277 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

# 280 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_HoOhApproach:
# 281 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 281 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 281 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 281 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 281 "data/maps/BigIslandS/scripts.pory"
	walk_down
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 78 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 285 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 293 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Text_IgnisGrunt1Lost::
# 298 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Text_IgnisGrunt2Lost::
# 303 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 308 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"

BigIslandS_Text_Prometheus1::
# 312 "data/maps/BigIslandS/scripts.pory"
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

BigIslandS_Text_Prometheus1b::
# 316 "data/maps/BigIslandS/scripts.pory"
	.string "Young man I beg you free me from this\n"
	.string "rock and I will tell what lies in your\l"
	.string "future.$"

BigIslandS_Text_Prometheus2::
# 320 "data/maps/BigIslandS/scripts.pory"
	.string "Beware young friend for we are not yet\n"
	.string "free. Prepare to meet a mighty foe.\l"
	.string "Defend us now or else surely perish.$"

BigIslandS_Text_Prometheus3::
# 324 "data/maps/BigIslandS/scripts.pory"
	.string "My lad! You've done it! You remind me of\n"
	.string "the mighty hero Heracles. I will reward\l"
	.string "your courage with a prophesy. Take\l"
	.string "this.$"

BigIslandS_Text_Prometheus4::
# 328 "data/maps/BigIslandS/scripts.pory"
	.string "You fate's carved on the Ostracon. I\n"
	.string "must be going now. I'm free at last to\l"
	.string "return home. May God above bless you.$"
