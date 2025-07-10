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
# 73 "data/maps/BigIslandS/scripts.pory"
	setstepcallback STEP_CB_ASH
# 74 "data/maps/BigIslandS/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BigIslandS_OnResume_2
BigIslandS_OnResume_1:
# 77 "data/maps/BigIslandS/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq BigIslandS_OnResume_5
BigIslandS_OnResume_4:
	end

BigIslandS_OnResume_2:
# 75 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_TryRemoveHoOh
	goto BigIslandS_OnResume_1

BigIslandS_OnResume_5:
# 78 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 79 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
# 80 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_WANDER_AROUND
	goto BigIslandS_OnResume_4


BigIslandS_Script_TryRemoveHoOh::
# 86 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
	return


BigIslandS_Script_IgnisGrunt::
# 91 "data/maps/BigIslandS/scripts.pory"
	lock
# 92 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 93 "data/maps/BigIslandS/scripts.pory"
	compare VAR_ARGO_STATE, 3
	goto_if_lt BigIslandS_Script_IgnisGrunt_2
# 97 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_IgnisGruntFight
BigIslandS_Script_IgnisGrunt_1:
	end

BigIslandS_Script_IgnisGrunt_2:
# 94 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntBlock, MSGBOX_DEFAULT
# 95 "data/maps/BigIslandS/scripts.pory"
	closemessage
	goto BigIslandS_Script_IgnisGrunt_1


BigIslandS_Script_IgnisGruntFight::
# 104 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_IgnisGrunt1Pre, MSGBOX_DEFAULT
# 105 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 107 "data/maps/BigIslandS/scripts.pory"
	trainerbattle_two_trainers TRAINER_IGNIS_GRUNT_2, BigIslandS_Text_IgnisGrunt1Lost, TRAINER_IGNIS_GRUNT_3, BigIslandS_Text_IgnisGrunt2Lost
# 109 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 110 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 111 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 113 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_IgnisGruntPost, MSGBOX_DEFAULT
# 114 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 116 "data/maps/BigIslandS/scripts.pory"
	applymovement 4, BigIslandS_Movement_IgnisGruntClear
# 117 "data/maps/BigIslandS/scripts.pory"
	applymovement 5, BigIslandS_Movement_IgnisGruntClear
# 118 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 120 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideIgnisGrunts
# 122 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_IGNISGRUNTS
	end


BigIslandS_Script_HideIgnisGrunts::
# 129 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Script_HideIgnisGrunts_Text_0
# 130 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 133 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 58, 36
# 134 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 136 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 59, 36
# 137 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 139 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 4, MAP_BIG_ISLAND_S
# 140 "data/maps/BigIslandS/scripts.pory"
	removeobject 4
# 142 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 5, MAP_BIG_ISLAND_S
# 143 "data/maps/BigIslandS/scripts.pory"
	removeobject 5
	end


BigIslandS_Script_ShowIgnisGrunts::
# 149 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 4, 55, 37
# 150 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
# 151 "data/maps/BigIslandS/scripts.pory"
	addobject 4
# 152 "data/maps/BigIslandS/scripts.pory"
	showobjectat 4, MAP_BIG_ISLAND_S
# 154 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 5, 56, 37
# 155 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 156 "data/maps/BigIslandS/scripts.pory"
	addobject 5
# 157 "data/maps/BigIslandS/scripts.pory"
	showobjectat 5, MAP_BIG_ISLAND_S
	return


BigIslandS_Script_TestGiveHammer::
# 163 "data/maps/BigIslandS/scripts.pory"
	lock
# 164 "data/maps/BigIslandS/scripts.pory"
	faceplayer
# 165 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_BIG_HAMMER
# 166 "data/maps/BigIslandS/scripts.pory"
	release
	end


BigIslandS_Script_Prometheus::
# 171 "data/maps/BigIslandS/scripts.pory"
	lock
# 172 "data/maps/BigIslandS/scripts.pory"
	goto_if_unset FLAG_PROMETHEUS_INTROD, BigIslandS_Script_Prometheus_2
# 176 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1b, MSGBOX_DEFAULT
BigIslandS_Script_Prometheus_1:
# 178 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 179 "data/maps/BigIslandS/scripts.pory"
	release
	end

BigIslandS_Script_Prometheus_2:
# 173 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_PROMETHEUS_INTROD
# 174 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus1, MSGBOX_DEFAULT
	goto BigIslandS_Script_Prometheus_1


BigIslandS_Script_BreakableRock::
# 184 "data/maps/BigIslandS/scripts.pory"
	lockall
# 185 "data/maps/BigIslandS/scripts.pory"
	checkitem ITEM_BIG_HAMMER, 1
# 186 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BigIslandS_Script_BreakableRock_2
# 195 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CantBreakRock
BigIslandS_Script_BreakableRock_1:
	end

BigIslandS_Script_BreakableRock_2:
# 187 "data/maps/BigIslandS/scripts.pory"
	msgbox Text_WantToBreak, MSGBOX_YESNO
# 188 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BigIslandS_Script_BreakableRock_5
# 191 "data/maps/BigIslandS/scripts.pory"
	call EventScript_HammerRockSmashTrigger
# 192 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HoOh
	goto BigIslandS_Script_BreakableRock_1

BigIslandS_Script_BreakableRock_5:
# 189 "data/maps/BigIslandS/scripts.pory"
	call EventScript_CancelSmash
	goto BigIslandS_Script_BreakableRock_1


BigIslandS_Script_HoOh::
# 202 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/BigIslandS/scripts.pory"
	waitse
# 204 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 205 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 206 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 207 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 210 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus2, MSGBOX_DEFAULT
# 211 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 214 "data/maps/BigIslandS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 215 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq BigIslandS_Script_HoOh_2
BigIslandS_Script_HoOh_1:
# 219 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq BigIslandS_Script_HoOh_5
BigIslandS_Script_HoOh_4:
# 223 "data/maps/BigIslandS/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne BigIslandS_Script_HoOh_8
# 226 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
BigIslandS_Script_HoOh_7:
# 228 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 231 "data/maps/BigIslandS/scripts.pory"
	removeobject 3
# 232 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 3, 46, 9
# 233 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 234 "data/maps/BigIslandS/scripts.pory"
	addobject 3
# 235 "data/maps/BigIslandS/scripts.pory"
	showobjectat 3, MAP_BIG_ISLAND_S
# 237 "data/maps/BigIslandS/scripts.pory"
	applymovement 3, BigIslandS_Movement_HoOhApproach
# 238 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 241 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 242 "data/maps/BigIslandS/scripts.pory"
	delay 40
# 243 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 244 "data/maps/BigIslandS/scripts.pory"
	setwildbattle SPECIES_HO_OH, 13
# 245 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 246 "data/maps/BigIslandS/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 247 "data/maps/BigIslandS/scripts.pory"
	waitstate
# 250 "data/maps/BigIslandS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 253 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 254 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 259 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus3, MSGBOX_DEFAULT
# 260 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 262 "data/maps/BigIslandS/scripts.pory"
	giveitem ITEM_OSTRACON
# 264 "data/maps/BigIslandS/scripts.pory"
	msgbox BigIslandS_Text_Prometheus4, MSGBOX_DEFAULT
# 265 "data/maps/BigIslandS/scripts.pory"
	closemessage
# 269 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 1
# 270 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_ARGO_STATE, 6
# 271 "data/maps/BigIslandS/scripts.pory"
	setflag FLAG_BIGISLAND_S_HIDE_PROMETHEUS
# 272 "data/maps/BigIslandS/scripts.pory"
	removeobject 1
# 273 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 0
# 275 "data/maps/BigIslandS/scripts.pory"
	releaseall
	end

BigIslandS_Script_HoOh_2:
# 216 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 217 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_1

BigIslandS_Script_HoOh_5:
# 220 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 221 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
	goto BigIslandS_Script_HoOh_4

BigIslandS_Script_HoOh_8:
# 224 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	goto BigIslandS_Script_HoOh_7


BigIslandS_Script_HideMonkeys::
# 283 "data/maps/BigIslandS/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 284 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 285 "data/maps/BigIslandS/scripts.pory"
	playmoncry SPECIES_INFERNAPE, CRY_MODE_NORMAL
# 287 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 288 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 289 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 290 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 293 "data/maps/BigIslandS/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 294 "data/maps/BigIslandS/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 295 "data/maps/BigIslandS/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 296 "data/maps/BigIslandS/scripts.pory"
	waitmovement 0
# 298 "data/maps/BigIslandS/scripts.pory"
	waitmoncry
# 300 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 1
# 302 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 6, MAP_BIG_ISLAND_S
# 303 "data/maps/BigIslandS/scripts.pory"
	removeobject 6
# 304 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 7, MAP_BIG_ISLAND_S
# 305 "data/maps/BigIslandS/scripts.pory"
	removeobject 7
# 306 "data/maps/BigIslandS/scripts.pory"
	hideobjectat 8, MAP_BIG_ISLAND_S
# 307 "data/maps/BigIslandS/scripts.pory"
	removeobject 8
# 309 "data/maps/BigIslandS/scripts.pory"
	fadescreenswapbuffers 0
# 311 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 312 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 6, 64, 24
# 313 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 314 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 7, 65, 24
# 315 "data/maps/BigIslandS/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_INVISIBLE
# 316 "data/maps/BigIslandS/scripts.pory"
	setobjectxyperm 8, 65, 24
	return


BigIslandS_Script_MonkeyTrigger::
# 322 "data/maps/BigIslandS/scripts.pory"
	setvar VAR_TEMP_2, 1
# 323 "data/maps/BigIslandS/scripts.pory"
	call BigIslandS_Script_HideMonkeys
	end


# 327 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_IgnisGruntClear:
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
# 328 "data/maps/BigIslandS/scripts.pory"
	walk_up
	step_end

# 331 "data/maps/BigIslandS/scripts.pory"
BigIslandS_Movement_HoOhApproach:
# 332 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 332 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 332 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 332 "data/maps/BigIslandS/scripts.pory"
	walk_down
# 332 "data/maps/BigIslandS/scripts.pory"
	walk_down
	step_end

BigIslandS_Script_HideIgnisGrunts_Text_0:
# 129 "data/maps/BigIslandS/scripts.pory"
	.string "HIDE IGNIS GRUNTS$"

BigIslandS_Text_IgnisGruntBlock::
# 336 "data/maps/BigIslandS/scripts.pory"
	.string "Onlyay ativenay ignisay areay\n"
	.string "elcomeway erehay.$"

BigIslandS_Script_IgnisGrunt1Pre::
# 344 "data/maps/BigIslandS/scripts.pory"
	.string "Owhay isay isthat outsideray?\n"
	.string "Ehay ustmay ebay erehay otay avesay\l"
	.string "ishay ittleay iendfray.\l"
	.string "Owhay areday ouyay ytray otay orcefay\l"
	.string "ouryay ayway insideay?\l"
	.string "Eway illway efendday ouray acredsay\l"
	.string "ountaintopmay.$"

BigIslandS_Text_IgnisGrunt1Lost::
# 349 "data/maps/BigIslandS/scripts.pory"
	.string "Eway oonsay illway ebay avengeday.$"

BigIslandS_Text_IgnisGrunt2Lost::
# 354 "data/maps/BigIslandS/scripts.pory"
	.string "Ouyay onway isthay oneay.$"

BigIslandS_Text_IgnisGruntPost::
# 359 "data/maps/BigIslandS/scripts.pory"
	.string "Eway ustmay elltay Edeamay ofay isthay\n"
	.string "efeatday.$"

BigIslandS_Text_Prometheus1::
# 363 "data/maps/BigIslandS/scripts.pory"
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
# 367 "data/maps/BigIslandS/scripts.pory"
	.string "Young man I beg you free me from this\n"
	.string "rock and I will tell what lies in your\l"
	.string "future.$"

BigIslandS_Text_Prometheus2::
# 371 "data/maps/BigIslandS/scripts.pory"
	.string "Beware young friend for we are not yet\n"
	.string "free. Prepare to meet a mighty foe.\l"
	.string "Defend us now or else surely perish.$"

BigIslandS_Text_Prometheus3::
# 375 "data/maps/BigIslandS/scripts.pory"
	.string "My lad! You've done it! You remind me of\n"
	.string "the mighty hero Heracles. I will reward\l"
	.string "your courage with a prophesy. Take\l"
	.string "this.$"

BigIslandS_Text_Prometheus4::
# 379 "data/maps/BigIslandS/scripts.pory"
	.string "You fate's carved on the Ostracon. I\n"
	.string "must be going now. I'm free at last to\l"
	.string "return home. May God above bless you.$"
