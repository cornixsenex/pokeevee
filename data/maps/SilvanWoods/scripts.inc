SilvanWoods_MapScripts::
# 21 "data/maps/SilvanWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_SilvanWoods
# 24 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/SilvanWoods/scripts.pory"
	case 1, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 27 "data/maps/SilvanWoods/scripts.pory"
	case 2, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 29 "data/maps/SilvanWoods/scripts.pory"
	case 3, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 33 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 36 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryEast
	return

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 26 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SilvanWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 34 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_ShowFerryWest
	return


SilvanWoods_Script_SilvanWoodsTransition::
# 44 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 1
# 45 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_LowerRioDracoTransition::
# 49 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 2
# 50 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_SilvaProfundaTransition::
# 54 "data/maps/SilvanWoods/scripts.pory"
	setvar VAR_TEMP_5, 3
# 55 "data/maps/SilvanWoods/scripts.pory"
	special ShowMapNamePopup
	return


SilvanWoods_Script_ShowFerryEast::
# 59 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 29, 56
# 60 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 30, 56
# 62 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
	return


SilvanWoods_Script_ShowFerryWest::
# 68 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 31, 19, 56
# 69 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 18, 56
# 71 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
	return


SilvanWoods_Script_Ferryman::
# 77 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman1, MSGBOX_YESNO
# 78 "data/maps/SilvanWoods/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilvanWoods_Script_Ferryman_1
# 81 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman2, MSGBOX_DEFAULT
# 82 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	return

SilvanWoods_Script_Ferryman_1:
# 79 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerry
	return


SilvanWoods_Script_DoFerry::
# 88 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman3, MSGBOX_DEFAULT
# 89 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 90 "data/maps/SilvanWoods/scripts.pory"
	goto_if_set FLAG_SILVAN_FERRY_ISWEST, SilvanWoods_Script_DoFerry_1
# 93 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryEast
	return

SilvanWoods_Script_DoFerry_1:
# 91 "data/maps/SilvanWoods/scripts.pory"
	call SilvanWoods_Script_DoFerryWest
	return


SilvanWoods_Script_DoFerryWest::
# 98 "data/maps/SilvanWoods/scripts.pory"
	clearflag FLAG_SILVAN_FERRY_ISWEST
# 100 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 101 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 103 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 104 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 108 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 109 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 112 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 114 "data/maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 117 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 118 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 120 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 121 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 123 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 124 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 125 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 127 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 128 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 129 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 131 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 132 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 133 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 134 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 135 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 136 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 138 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 139 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 141 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 142 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 144 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 111 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 113 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 115 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 149 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 151 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 152 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 154 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 155 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 156 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 159 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 160 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 161 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 166 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 168 "data/maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryEast_5
# 171 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 172 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 174 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 175 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 177 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 178 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 179 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 181 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 182 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 183 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 185 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 186 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 187 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 188 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 189 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 190 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 192 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 193 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 195 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 196 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 198 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 162 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 163 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 164 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 167 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 169 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_EventScript_Crystal::
# 204 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 205 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 206 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 211 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 212 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 213 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 218 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 219 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 220 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 225 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 226 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 227 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 232 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 233 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 234 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 240 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 241 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 242 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 247 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 248 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 249 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 254 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 255 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 256 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 261 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 262 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 263 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 268 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 269 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 270 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 275 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 276 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 277 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 282 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 283 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 284 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 289 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 290 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 291 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 296 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 297 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 298 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 303 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 304 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 305 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 310 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 311 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 312 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 317 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 318 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 319 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 324 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 325 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 326 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 332 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 333 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 334 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 339 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 340 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 341 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 346 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 347 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 348 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 353 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 354 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 355 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 360 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 361 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 362 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 367 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 368 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 369 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 374 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 375 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 376 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 381 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 382 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 383 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 388 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 389 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 390 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 394 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 395 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 396 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 399 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 400 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 401 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 404 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 405 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 405 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 408 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 409 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 409 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 412 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 413 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 414 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 417 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 418 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 419 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 422 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 423 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 424 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 427 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 428 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 428 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 429 "data/maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 432 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 433 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 433 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 434 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 117 "data/maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 162 "data/maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Text_CrystalIntro::
# 437 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 441 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 445 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 449 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 453 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 457 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 461 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 465 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 469 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 473 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 477 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 481 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 485 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 489 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 493 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 497 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 501 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 505 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 509 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 513 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 517 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 521 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 525 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 529 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 533 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 537 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 541 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 545 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 549 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 553 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 557 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 561 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 565 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 569 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 573 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 577 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 581 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 585 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 589 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 593 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 597 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 601 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 605 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 609 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 613 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 617 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 621 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 625 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 629 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 633 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 637 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 641 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 645 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 649 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 653 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 657 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 661 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 666 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 670 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 674 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 678 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 682 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 686 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 690 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 694 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 698 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 702 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 706 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 710 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 714 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 718 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 722 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 726 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 730 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 734 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 738 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 742 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 746 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 750 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 754 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 758 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 762 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no this is not good I can't find Leaf!\n"
	.string "You haven't seen her recently have\l"
	.string "you? I know she must be somewhere in\l"
	.string "these woods. Will you please go find her\l"
	.string "and bring her here?$"

SilvanWoods_Text_Leaf1::
# 766 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}! There you are! Thanks\n"
	.string "for saving me again.$"

SilvanWoods_Text_ScottPass::
# 770 "data/maps/SilvanWoods/scripts.pory"
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
# 774 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok that's fine but I want to see Mew.\n"
	.string "Well {PLAYER} don't spend all day\l"
	.string "lollygagging here in the woods. We'll\l"
	.string "wait for you in town down at my dad's\l"
	.string "Chronic Cannabis store.$"

SilvanWoods_Text_Ferryman1::
# 778 "data/maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 782 "data/maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 786 "data/maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 790 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"
