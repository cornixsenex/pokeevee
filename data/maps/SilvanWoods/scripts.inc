SilvanWoods_MapScripts::
# 2 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/SilvanWoods/scripts.pory"
	map_script_2 VAR_ROUTE3_STATE, 0, SilvanWoods_OnWarp_ShowFight1
# 4 "data/maps/SilvanWoods/scripts.pory"
	map_script_2 VAR_ROUTE3_STATE, 1, SilvanWoods_OnWarp_ShowFight2
	.2byte 0


SilvanWoods_OnWarp_ShowFight1::
# 10 "data/maps/SilvanWoods/scripts.pory"
	addobject 35
# 11 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 35, MAP_SILVAN_WOODS
# 12 "data/maps/SilvanWoods/scripts.pory"
	addobject 36
# 13 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 36, MAP_SILVAN_WOODS
# 14 "data/maps/SilvanWoods/scripts.pory"
	addobject 37
# 15 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 37, MAP_SILVAN_WOODS
# 16 "data/maps/SilvanWoods/scripts.pory"
	addobject 38
# 17 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 38, MAP_SILVAN_WOODS
	end


SilvanWoods_OnWarp_ShowFight2::
# 22 "data/maps/SilvanWoods/scripts.pory"
	addobject 25
# 23 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 25, MAP_SILVAN_WOODS
# 24 "data/maps/SilvanWoods/scripts.pory"
	addobject 26
# 25 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 26, MAP_SILVAN_WOODS
# 26 "data/maps/SilvanWoods/scripts.pory"
	addobject 27
# 27 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 27, MAP_SILVAN_WOODS
# 28 "data/maps/SilvanWoods/scripts.pory"
	addobject 28
# 29 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 28, MAP_SILVAN_WOODS
	end


SilvanWoods_RivalTrigger1::
# 34 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 35 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 36 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 37 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_ROUTE3
# 38 "data/maps/SilvanWoods/scripts.pory"
	applymovement 34, SilvanWoods_Movement_RivalWalk
# 39 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 41 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_ROUTE3_STATE, 2
# 42 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_RivalTrigger2::
# 47 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 48 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 49 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerRival
# 50 "data/maps/SilvanWoods/scripts.pory"
	addobject 34
# 51 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 34, MAP_ROUTE3
# 52 "data/maps/SilvanWoods/scripts.pory"
	applymovement 34, SilvanWoods_Movement_RivalWalk
# 53 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 54 "data/maps/SilvanWoods/scripts.pory"
	removeobject 34
# 55 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_ROUTE3_STATE, 2
# 56 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_ScottTrigger::
# 61 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 62 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 63 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott1
# 65 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 66 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 67 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 69 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 70 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott2
# 71 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
# 73 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_ScottTriggerB::
# 79 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 80 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 81 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott1B
# 83 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 84 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 85 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 86 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 88 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 89 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott2B
# 90 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
# 92 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott2Trigger::
# 98 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 99 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 100 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 101 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepUp
# 102 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 103 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 104 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 106 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 107 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottPass
# 108 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 109 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 110 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 111 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 112 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 113 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit
# 114 "data/maps/SilvanWoods/scripts.pory"
	applymovement 40, SilvanWoods_Movement_ScottExit
# 115 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 117 "data/maps/SilvanWoods/scripts.pory"
	removeobject 40
# 118 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF1
# 119 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_SCOTT
# 120 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_ROUTE3_STATE, 5
# 121 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Crystal::
# 126 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 127 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 128 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 133 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 134 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 135 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 140 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 141 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 142 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 147 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 148 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 149 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 154 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 155 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 156 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 162 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 163 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 164 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 169 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 170 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 171 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 176 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 177 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 178 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 183 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 184 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 185 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 190 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 191 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 192 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 197 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 198 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 199 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 204 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 205 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 206 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 211 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 212 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 213 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 218 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 219 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 220 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 225 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 226 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 227 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 232 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 233 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 234 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 239 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 240 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 241 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 246 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 247 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 248 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 254 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 255 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 256 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 261 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 262 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 263 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 268 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 269 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 270 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 275 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 276 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 277 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 282 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 283 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 284 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 289 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 290 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 291 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 296 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 297 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 298 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 303 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 304 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 305 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 310 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 311 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 312 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_ROUTE3_STATE, 3
# 313 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 317 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerRival:
# 318 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 321 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_RivalWalk:
# 322 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 322 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 322 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 323 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 323 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 323 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 323 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 324 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 324 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 324 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 324 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 325 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 325 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 328 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott1:
# 329 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 329 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott2:
# 333 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 333 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 334 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 337 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerStepBack:
# 338 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott1B:
# 342 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 342 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 342 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 343 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 346 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott2B:
# 347 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 347 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 347 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 348 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 351 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerStepUp:
# 352 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 352 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 355 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit:
# 356 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 357 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 357 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 357 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 357 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 357 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

SilvanWoods_Text_CrystalIntro::
# 360 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 364 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 368 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 372 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 376 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 380 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 384 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 388 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 392 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 396 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 400 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 404 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 408 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 412 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 416 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 420 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 424 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 428 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 432 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 436 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 440 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 444 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 448 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 452 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 456 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 460 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 464 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 468 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 472 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 476 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 480 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 484 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 488 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 492 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 496 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 500 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 504 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 508 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 512 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 516 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 520 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 524 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 528 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 532 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 536 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 540 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 544 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 548 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 552 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 556 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 560 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 564 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 568 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 572 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 576 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 580 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 584 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 589 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 593 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 597 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 601 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 605 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 609 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 613 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 617 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 621 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 625 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 629 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 633 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 637 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 641 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 645 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 649 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 653 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 657 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 661 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 665 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 669 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 673 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 677 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 681 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 685 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no this is not good I can't find Leaf!\n"
	.string "You haven't seen her recently have\l"
	.string "you? I know she must be somewhere in\l"
	.string "these woods. Will you please go find her\l"
	.string "and bring her here?$"

SilvanWoods_Text_Leaf1::
# 689 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}! There you are! Thanks\n"
	.string "for saving me again.$"

SilvanWoods_Text_ScottPass::
# 693 "data/maps/SilvanWoods/scripts.pory"
	.string "This {RIVAL} who is stalking you\n"
	.string "sounds dangerous we should stay as a\l"
	.string "group. Anyways {PLAYER} we're quite\l"
	.string "near Saeclara. This path should lead us\l"
	.string "directly to Mew. I cannot speak for\l"
	.string "either of you but all this excitement\l"
	.string "makes me want a bowl. So once your safe\l"
	.string "in town you can find me poking some\l"
	.string "smot in my local weed shop. Come with me\l"
	.string "Leaf we'll smoke some Indica.$"

SilvanWoods_Text_Leaf2::
# 697 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok that's fine but I want to see Mew.\n"
	.string "Well {PLAYER} don't spend all day\l"
	.string "lollygagging here in the woods. We'll\l"
	.string "wait for you in town down at my dad's\l"
	.string "Chronic Cannabis store.$"
