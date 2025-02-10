SilvanWoods_MapScripts::
# 10 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	.2byte 0


SilvanWoods_EventScript_ScottTrigger::
# 17 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 18 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 19 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 20 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott1
# 21 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 22 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 23 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 25 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 26 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott2
# 27 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
# 29 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_ScottTriggerB::
# 35 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 36 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 37 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott1B
# 39 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 40 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 41 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottBlock
# 42 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 43 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 44 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 45 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_Scott2B
# 46 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepBack
# 48 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Scott2Trigger::
# 54 "data/maps/SilvanWoods/scripts.pory"
	lockall
# 55 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 56 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerStepUp
# 58 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 59 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf1
# 60 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 62 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 5, 190, 98
# 63 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ScottPass
# 64 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 5
# 65 "data/maps/SilvanWoods/scripts.pory"
	load_field_pic 4, 190, 98
# 66 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Leaf2
# 67 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 68 "data/maps/SilvanWoods/scripts.pory"
	destroy_field_pic 4
# 69 "data/maps/SilvanWoods/scripts.pory"
	applymovement 9, SilvanWoods_Movement_ScottExit
# 70 "data/maps/SilvanWoods/scripts.pory"
	applymovement 40, SilvanWoods_Movement_ScottExit
# 71 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/SilvanWoods/scripts.pory"
	removeobject 9
# 73 "data/maps/SilvanWoods/scripts.pory"
	removeobject 40
# 74 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_LEAF1
# 75 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_HIDE_SILVANWOODS_SCOTT
# 76 "data/maps/SilvanWoods/scripts.pory"
	releaseall
	end


SilvanWoods_EventScript_Crystal::
# 81 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 82 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 83 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 88 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 89 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 90 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 95 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 96 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 97 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 102 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 103 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 104 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 109 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 110 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 111 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 117 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 118 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 119 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 124 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 125 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 126 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 131 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 132 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 133 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 138 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 139 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 140 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 145 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 146 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 147 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 152 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 153 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 154 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 159 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 160 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 161 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 166 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 167 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 168 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 173 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 174 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 175 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 180 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 181 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 182 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 187 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 188 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 189 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 194 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 195 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 196 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 201 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 202 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 203 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 209 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 210 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 211 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 216 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 217 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 218 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 223 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 224 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 225 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 230 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 231 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 232 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 237 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 238 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 239 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 244 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 245 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 246 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 251 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 252 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 253 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 258 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 259 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 260 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 265 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 266 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 267 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 271 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerRival:
# 272 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_RivalWalk:
# 276 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 276 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 276 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 277 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 277 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 277 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 277 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 278 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 278 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 278 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 278 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 279 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 279 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 282 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott1:
# 283 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 283 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 286 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott2:
# 287 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 287 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 288 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 291 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerStepBack:
# 292 "data/maps/SilvanWoods/scripts.pory"
	walk_down
	step_end

# 295 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott1B:
# 296 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 296 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 296 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 297 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

# 300 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_Scott2B:
# 301 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 301 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 301 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 302 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 305 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerStepUp:
# 306 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 306 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

# 309 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_ScottExit:
# 310 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 311 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 311 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 311 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 311 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 311 "data/maps/SilvanWoods/scripts.pory"
	walk_up
	step_end

SilvanWoods_Text_CrystalIntro::
# 314 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 318 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 322 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 326 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 330 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 334 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 338 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 342 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 346 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 350 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 354 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 358 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 362 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 366 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 370 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 374 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 378 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 382 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 386 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 390 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 394 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 398 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 402 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 406 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 410 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 414 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 418 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 422 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 426 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 430 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 434 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 438 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 442 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 446 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 450 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 454 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 458 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 462 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 466 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 470 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 474 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 478 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 482 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 486 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 490 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 494 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 498 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 502 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 506 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 510 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 514 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 518 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 522 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 526 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 530 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 534 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 538 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 543 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 547 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 551 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 555 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 559 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 563 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 567 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 571 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 575 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 579 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 583 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 587 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 591 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 595 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 599 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 603 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 607 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 611 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 615 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 619 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 623 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 627 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 631 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 635 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 639 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no this is not good I can't find Leaf!\n"
	.string "You haven't seen her recently have\l"
	.string "you? I know she must be somewhere in\l"
	.string "these woods. Will you please go find her\l"
	.string "and bring her here?$"

SilvanWoods_Text_Leaf1::
# 643 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}! There you are! Thanks\n"
	.string "for saving me again.$"

SilvanWoods_Text_ScottPass::
# 647 "data/maps/SilvanWoods/scripts.pory"
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
# 651 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok that's fine but I want to see Mew.\n"
	.string "Well {PLAYER} don't spend all day\l"
	.string "lollygagging here in the woods. We'll\l"
	.string "wait for you in town down at my dad's\l"
	.string "Chronic Cannabis store.$"
