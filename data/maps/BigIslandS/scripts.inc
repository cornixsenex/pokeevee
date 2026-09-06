BigIslandS_MapScripts::
# 22 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data/maps/BigIslandS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_BigIslandS_F
# 26 "data/maps/BigIslandS/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BigIslandS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/BigIslandS/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 28 "data/maps/BigIslandS/scripts.pory"
	doweather
	return

BigIslandS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 34 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_OnResume
	return


BigIslandS_Script_Transition_MareOriens::
# 42 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 4
# 43 "data/maps/BigIslandS/scripts.pory"
	special TransitionMapMusic
# 44 "data/maps/BigIslandS/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandS_Script_Transition_MareSubtropicum::
# 48 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 3
# 49 "data/maps/BigIslandS/scripts.pory"
	special TransitionMapMusic
# 50 "data/maps/BigIslandS/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandS_Script_Transition_IslaIgnifera::
# 54 "data/maps/BigIslandS/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq BigIslandS_Script_Transition_IslaIgnifera_2
BigIslandS_Script_Transition_IslaIgnifera_1:
# 58 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 2
# 59 "data/maps/BigIslandS/scripts.pory"
	special TransitionMapMusic
# 60 "data/maps/BigIslandS/scripts.pory"
	special ShowMapNamePopup
	return

BigIslandS_Script_Transition_IslaIgnifera_2:
# 55 "data/maps/BigIslandS/scripts.pory"
	setweather WEATHER_NONE
# 56 "data/maps/BigIslandS/scripts.pory"
	doweather
	goto BigIslandS_Script_Transition_IslaIgnifera_1


BigIslandS_Script_Transition_IgnisMons::
# 64 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_5, 1
# 65 "data/maps/BigIslandS/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 66 "data/maps/BigIslandS/scripts.pory"
	doweather
# 67 "data/maps/BigIslandS/scripts.pory"
	special TransitionMapMusic
# 68 "data/maps/BigIslandS/scripts.pory"
	special ShowMapNamePopup
	return


BigIslandS_OnResume::
# 72 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
# 73 "data/maps/BigIslandS/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BigIslandS_OnResume_2
BigIslandS_OnResume_1:
# 76 "data/maps/BigIslandS/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq BigIslandS_OnResume_5
BigIslandS_OnResume_4:
	end

BigIslandS_OnResume_2:
# 74 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_TryRemoveHoOh
	goto BigIslandS_OnResume_1

BigIslandS_OnResume_5:
# 77 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 78 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 79 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	goto BigIslandS_OnResume_4


BigIslandS_Script_TryRemoveHoOh::
# 85 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
	return


BigIslandS_Script_IgnisGrunt::
# 90 "data/maps/BigIslandS/scripts.pory"
	lock
# 91 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 92 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 96 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 93 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 94 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 103 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 104 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 106 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Text_IgnisGrunt2Lost
# 108 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 109 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 110 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 112 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 113 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 115 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 116 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 117 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 119 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 121 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 128 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 129 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 132 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 133 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 135 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 136 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 138 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 139 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 141 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 142 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 148 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 149 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 150 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 151 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 153 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 154 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 155 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 156 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


BigIslandS_Script_TestGiveHammer::
# 162 "data/maps/BigIslandS/scripts.pory"
	lock
# 163 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 164 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 165 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_Prometheus::
# 170 "data/maps/BigIslandS/scripts.pory"
	lock
# 171 "data/maps/BigIslandS/scripts.pory"
	goto_if_unset FLAG_PROMETHEUS_INTROD, BigIslandS_Script_Prometheus_2
# 175 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1b, MSGBOX_DEFAULT
BigIslandS_Script_Prometheus_1:
# 177 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 178 "data/maps/BigIslandS/scripts.pory"
	release
	end

BigIslandS_Script_Prometheus_2:
# 172 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_PROMETHEUS_INTROD
# 173 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1, MSGBOX_DEFAULT
	goto BigIslandS_Script_Prometheus_1


BigIslandS_Script_BreakableRock::
# 183 "data/maps/BigIslandS/scripts.pory"
	lockall
# 184 "data/maps/BigIslandS/scripts.pory"
	checkitem ITEM_BIG_HAMMER, 1
# 185 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandS_Script_BreakableRock_2
# 194 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CantBreakRock
BigIslandS_Script_BreakableRock_1:
	end

BigIslandS_Script_BreakableRock_2:
# 186 "data/maps/BigIslandS/scripts.pory"
	msgbox Text_WantToBreak, MSGBOX_YESNO
# 187 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BigIslandS_Script_BreakableRock_5
# 190 "data/maps/BigIslandS/scripts.pory"
	call EventScript_HammerRockSmashTrigger
# 191 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HoOh
	goto BigIslandS_Script_BreakableRock_1

BigIslandS_Script_BreakableRock_5:
# 188 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CancelSmash
	goto BigIslandS_Script_BreakableRock_1


BigIslandS_Script_HoOh::
# 201 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 202 "data/maps/BigIslandS/scripts.pory"
	waitse
# 203 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 204 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 205 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 206 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 209 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus2, MSGBOX_DEFAULT
# 210 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 213 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 214 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BigIslandS_Script_HoOh_2
BigIslandS_Script_HoOh_1:
# 218 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandS_Script_HoOh_5
BigIslandS_Script_HoOh_4:
# 222 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne BigIslandS_Script_HoOh_8
# 225 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
BigIslandS_Script_HoOh_7:
# 227 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 230 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
# 231 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 3, 46, 9
# 232 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 233 "data/maps/BigIslandS/scripts.pory"
	addobject 3
# 234 "data/maps/BigIslandS/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_S
# 236 "data/maps/BigIslandS/scripts.pory"
	applymovement 3, BigIslandS_Movement_HoOhApproach
# 237 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 240 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 241 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 242 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 243 "data/maps/BigIslandS/scripts.pory"
	setwildbattle SPECIES_HO_OH, 13
# 244 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 245 "data/maps/BigIslandS/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 246 "data/maps/BigIslandS/scripts.pory"
	waitstate
# 249 "data/maps/BigIslandS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 252 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 253 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 258 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus3, MSGBOX_DEFAULT
# 259 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 261 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_OSTRACON
# 263 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus4, MSGBOX_DEFAULT
# 264 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 268 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 1
# 269 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_ARGO_STATE, 6
# 270 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_PROMETHEUS
# 271 "data/maps/BigIslandS/scripts.pory"
	removeobject 1
# 272 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 0
# 274 "data/maps/BigIslandS/scripts.pory"
	releaseall
	end

BigIslandS_Script_HoOh_2:
# 215 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 216 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_1

BigIslandS_Script_HoOh_5:
# 219 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 220 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_4

BigIslandS_Script_HoOh_8:
# 223 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto BigIslandS_Script_HoOh_7


BigIslandS_Script_HideMonkeys::
# 282 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 283 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 284 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
# 286 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 287 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 288 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 289 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 292 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 293 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 294 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 295 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 297 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 299 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 1
# 301 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_S
# 302 "data/maps/BigIslandS/scripts.pory"
	removeobject 6
# 303 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_S
# 304 "data/maps/BigIslandS/scripts.pory"
	removeobject 7
# 305 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 8, MAP_BIG_ISLAND_S
# 306 "data/maps/BigIslandS/scripts.pory"
	removeobject 8
# 308 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 0
# 310 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 311 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 6, 64, 24
# 312 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 313 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 7, 65, 24
# 314 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 315 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 8, 65, 24
	return


BigIslandS_Script_MonkeyTrigger::
# 321 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_2, 1
# 322 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideMonkeys
	end


# 326 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 327 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

# 330 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_HoOhApproach:
# 331 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 331 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 331 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 331 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 331 "data/maps/BigIslandS/scripts.pory"
	walk_down
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 128 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 335 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 343 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Text_IgnisGrunt1Lost::
# 348 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Text_IgnisGrunt2Lost::
# 353 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 358 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"

BigIslandS_Text_Prometheus1::
# 362 "data/maps/BigIslandS/scripts.pory"
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
# 366 "data/maps/BigIslandS/scripts.pory"
	.string "Young man I beg you free me from this\n"
	.string "rock and I will tell what lies in your\l"
	.string "future.$"

BigIslandS_Text_Prometheus2::
# 370 "data/maps/BigIslandS/scripts.pory"
	.string "Beware young friend for we are not yet\n"
	.string "free. Prepare to meet a mighty foe.\l"
	.string "Defend us now or else surely perish.$"

BigIslandS_Text_Prometheus3::
# 374 "data/maps/BigIslandS/scripts.pory"
	.string "My lad! You've done it! You remind me of\n"
	.string "the mighty hero Heracles. I will reward\l"
	.string "your courage with a prophesy. Take\l"
	.string "this.$"

BigIslandS_Text_Prometheus4::
# 378 "data/maps/BigIslandS/scripts.pory"
	.string "You fate's carved on the Ostracon. I\n"
	.string "must be going now. I'm free at last to\l"
	.string "return home. May God above bless you.$"
