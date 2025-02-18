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
# 106 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 109 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 110 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 111 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryWest_3
# 113 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryWest_4
# 115 "data/maps/SilvanWoods/scripts.pory"
	case DIR_EAST, SilvanWoods_Script_DoFerryWest_5
# 118 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 119 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryWest_1:
# 121 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 122 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 124 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryW
# 125 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryW
# 126 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 128 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 129 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2W
# 130 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 132 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 29, 56
# 133 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_RIGHT
# 134 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 135 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 136 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkRight
# 137 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 139 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 140 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 142 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 143 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 145 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryWest_3:
# 112 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WN
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_4:
# 114 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WS
	goto SilvanWoods_Script_DoFerryWest_1

SilvanWoods_Script_DoFerryWest_5:
# 116 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1WE
	goto SilvanWoods_Script_DoFerryWest_1


SilvanWoods_Script_DoFerryEast::
# 150 "data/maps/SilvanWoods/scripts.pory"
	setflag FLAG_SILVAN_FERRY_ISWEST
# 152 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority 32, MAP_SILVAN_WOODS, 0
# 153 "data/maps/SilvanWoods/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS, 0
# 155 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 156 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 157 "data/maps/SilvanWoods/scripts.pory"
	removeobject 32
# 158 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat 32, MAP_SILVAN_WOODS
# 161 "data/maps/SilvanWoods/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 162 "data/maps/SilvanWoods/scripts.pory"
	switch VAR_RESULT
# 163 "data/maps/SilvanWoods/scripts.pory"
	case DIR_NORTH, SilvanWoods_Script_DoFerryEast_3
# 168 "data/maps/SilvanWoods/scripts.pory"
	case DIR_SOUTH, SilvanWoods_Script_DoFerryEast_4
# 170 "data/maps/SilvanWoods/scripts.pory"
	case DIR_WEST, SilvanWoods_Script_DoFerryEast_5
# 173 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryWest_Text_0
# 174 "data/maps/SilvanWoods/scripts.pory"
	closemessage
SilvanWoods_Script_DoFerryEast_1:
# 176 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 177 "data/maps/SilvanWoods/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 179 "data/maps/SilvanWoods/scripts.pory"
	applymovement 31, SilvanWoods_Movement_FerryE
# 180 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_FerryE
# 181 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 183 "data/maps/SilvanWoods/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 184 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry2E
# 185 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 187 "data/maps/SilvanWoods/scripts.pory"
	setobjectxyperm 32, 19, 56
# 188 "data/maps/SilvanWoods/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_FACE_LEFT
# 189 "data/maps/SilvanWoods/scripts.pory"
	addobject 32
# 190 "data/maps/SilvanWoods/scripts.pory"
	showobjectat 32, MAP_SILVAN_WOODS
# 191 "data/maps/SilvanWoods/scripts.pory"
	applymovement 32, Common_Movement_WalkLeft
# 192 "data/maps/SilvanWoods/scripts.pory"
	waitmovement 0
# 194 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_Ferryman4
# 195 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 197 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_SILVAN_WOODS
# 198 "data/maps/SilvanWoods/scripts.pory"
	resetobjectsubpriority 32, MAP_SILVAN_WOODS
# 200 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_3:
# 164 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Script_DoFerryEast_Text_0
# 165 "data/maps/SilvanWoods/scripts.pory"
	closemessage
# 166 "data/maps/SilvanWoods/scripts.pory"
	release
	end

SilvanWoods_Script_DoFerryEast_4:
# 169 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1ES
	goto SilvanWoods_Script_DoFerryEast_1

SilvanWoods_Script_DoFerryEast_5:
# 171 "data/maps/SilvanWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilvanWoods_Movement_PlayerFerry1EW
	goto SilvanWoods_Script_DoFerryEast_1


SilvanWoods_EventScript_Crystal::
# 206 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_CRYSTAL, SilvanWoods_Text_CrystalIntro, SilvanWoods_Text_CrystalLost
# 207 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_CrystalPost
# 208 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Noah::
# 213 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NOAH, SilvanWoods_Text_NoahIntro, SilvanWoods_Text_NoahLost
# 214 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NoahPost
# 215 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Fredrick::
# 220 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, SilvanWoods_Text_FredrickIntro, SilvanWoods_Text_FredrickLost
# 221 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FredrickPost
# 222 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Matt::
# 227 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MATT, SilvanWoods_Text_MattIntro, SilvanWoods_Text_MattLost
# 228 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MattPost
# 229 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Zander::
# 234 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, SilvanWoods_Text_ZanderIntro, SilvanWoods_Text_MattLost
# 235 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_ZanderPost
# 236 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Julia::
# 242 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JULIA, SilvanWoods_Text_JuliaIntro, SilvanWoods_Text_JuliaLost
# 243 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JuliaPost
# 244 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Rosa::
# 249 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_ROSA, SilvanWoods_Text_RosaIntro, SilvanWoods_Text_RosaLost
# 250 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RosaPost
# 251 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Mary::
# 256 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MaryIntro, SilvanWoods_Text_MaryLost
# 257 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MaryPost
# 258 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Molly::
# 263 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_MARY_AND_MOLLY, SilvanWoods_Text_MollyIntro, SilvanWoods_Text_MollyLost
# 264 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_MollyPost
# 265 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Leah::
# 270 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LEAH, SilvanWoods_Text_LeahIntro, SilvanWoods_Text_LeahLost
# 271 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LeahPost
# 272 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Daisy::
# 277 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DAISY, SilvanWoods_Text_DaisyIntro, SilvanWoods_Text_DaisyLost
# 278 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DaisyPost
# 279 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Kelsey::
# 284 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_KELSEY, SilvanWoods_Text_KelseyIntro, SilvanWoods_Text_KelseyLost
# 285 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_KelseyPost
# 286 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Felix::
# 291 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FELIX, SilvanWoods_Text_FelixIntro, SilvanWoods_Text_FelixLost
# 292 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FelixPost
# 293 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Violet::
# 298 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, SilvanWoods_Text_VioletIntro, SilvanWoods_Text_VioletLost
# 299 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_VioletPost
# 300 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ruby::
# 305 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_RubyIntro, SilvanWoods_Text_RubyLost
# 306 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_RubyPost
# 307 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jack::
# 312 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_RUBY_AND_JACK, SilvanWoods_Text_JackIntro, SilvanWoods_Text_JackLost
# 313 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JackPost
# 314 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Lester::
# 319 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_LESTER, SilvanWoods_Text_LesterIntro, SilvanWoods_Text_LesterLost
# 320 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_LesterPost
# 321 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Neville::
# 326 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_NEVILLE, SilvanWoods_Text_NevilleIntro, SilvanWoods_Text_NevilleLost
# 327 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_NevillePost
# 328 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Wang::
# 334 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_WANG, SilvanWoods_Text_WangIntro, SilvanWoods_Text_WangLost
# 335 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_WangPost
# 336 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Sally::
# 341 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_SallyIntro, SilvanWoods_Text_SallyLost
# 342 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SallyPost
# 343 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Ed::
# 348 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SALLY_AND_ED, SilvanWoods_Text_EdIntro, SilvanWoods_Text_EdLost
# 349 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_EdPost
# 350 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Jay::
# 355 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_JAY, SilvanWoods_Text_JayIntro, SilvanWoods_Text_JayLost
# 356 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_JayPost
# 357 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Foster::
# 362 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, SilvanWoods_Text_FosterIntro, SilvanWoods_Text_FosterLost
# 363 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_FosterPost
# 364 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Douggie::
# 369 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_DOUGGIE, SilvanWoods_Text_DouggieIntro, SilvanWoods_Text_DouggieLost
# 370 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_DouggiePost
# 371 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Smokey::
# 376 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_SMOKEY, SilvanWoods_Text_SmokeyIntro, SilvanWoods_Text_SmokeyLost
# 377 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_SmokeyPost
# 378 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Stoney::
# 383 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_STONEY, SilvanWoods_Text_StoneyIntro, SilvanWoods_Text_StoneyLost
# 384 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_StoneyPost
# 385 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


SilvanWoods_EventScript_Gary::
# 390 "data/maps/SilvanWoods/scripts.pory"
	trainerbattle_single TRAINER_GARY, SilvanWoods_Text_GaryIntro, SilvanWoods_Text_GaryLost
# 391 "data/maps/SilvanWoods/scripts.pory"
	msgbox SilvanWoods_Text_GaryPost
# 392 "data/maps/SilvanWoods/scripts.pory"
	closemessage
	end


# 396 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WN:
# 397 "data/maps/SilvanWoods/scripts.pory"
	walk_up
# 398 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 401 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WS:
# 402 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 403 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 406 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1WE:
# 407 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 407 "data/maps/SilvanWoods/scripts.pory"
	walk_right
	step_end

# 410 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1EW:
# 411 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 411 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry1ES:
# 415 "data/maps/SilvanWoods/scripts.pory"
	walk_down
# 416 "data/maps/SilvanWoods/scripts.pory"
	walk_left
	step_end

# 419 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryW:
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 420 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 421 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 424 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_FerryE:
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 425 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 426 "data/maps/SilvanWoods/scripts.pory"
	face_down
	step_end

# 429 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2W:
# 430 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 430 "data/maps/SilvanWoods/scripts.pory"
	walk_right
# 431 "data/maps/SilvanWoods/scripts.pory"
	face_left
	step_end

# 434 "data/maps/SilvanWoods/scripts.pory"
SilvanWoods_Movement_PlayerFerry2E:
# 435 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 435 "data/maps/SilvanWoods/scripts.pory"
	walk_left
# 436 "data/maps/SilvanWoods/scripts.pory"
	face_right
	step_end

SilvanWoods_Script_DoFerryWest_Text_0:
# 118 "data/maps/SilvanWoods/scripts.pory"
	.string "ERROR PLAYER FACE DIR$"

SilvanWoods_Script_DoFerryEast_Text_0:
# 164 "data/maps/SilvanWoods/scripts.pory"
	.string "Surfin?$"

SilvanWoods_Text_CrystalIntro::
# 439 "data/maps/SilvanWoods/scripts.pory"
	.string "What is the boiling point of semen?$"

SilvanWoods_Text_CrystalLost::
# 443 "data/maps/SilvanWoods/scripts.pory"
	.string "Your eyes are the same color as my shit!$"

SilvanWoods_Text_CrystalPost::
# 447 "data/maps/SilvanWoods/scripts.pory"
	.string "I lost my boyfriend somewhere in the\n"
	.string "woods.$"

SilvanWoods_Text_NoahIntro::
# 451 "data/maps/SilvanWoods/scripts.pory"
	.string "I don't do drugs, I'm just playing with\n"
	.string "bugs.$"

SilvanWoods_Text_NoahLost::
# 455 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you on pot?$"

SilvanWoods_Text_NoahPost::
# 459 "data/maps/SilvanWoods/scripts.pory"
	.string "Mommy said 'Don't do drugs'$"

SilvanWoods_Text_FredrickIntro::
# 463 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm teaching my boy how to hunt for\n"
	.string "bugs!$"

SilvanWoods_Text_FredrickLost::
# 467 "data/maps/SilvanWoods/scripts.pory"
	.string "You watching son?$"

SilvanWoods_Text_FredrickPost::
# 471 "data/maps/SilvanWoods/scripts.pory"
	.string "Be careful in the woods.$"

SilvanWoods_Text_MattIntro::
# 475 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_MattLost::
# 479 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_MattPost::
# 483 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_ZanderIntro::
# 487 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey dad watch me beat up this wimpy kid.$"

SilvanWoods_Text_ZanderLost::
# 491 "data/maps/SilvanWoods/scripts.pory"
	.string "You win, you win!$"

SilvanWoods_Text_ZanderPost::
# 495 "data/maps/SilvanWoods/scripts.pory"
	.string "My bug was not stronger.$"

SilvanWoods_Text_JuliaIntro::
# 499 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha I'm getting lit in the forest.$"

SilvanWoods_Text_JuliaLost::
# 503 "data/maps/SilvanWoods/scripts.pory"
	.string "You have no chill.$"

SilvanWoods_Text_JuliaPost::
# 507 "data/maps/SilvanWoods/scripts.pory"
	.string "Bro are you seeling weed?$"

SilvanWoods_Text_RosaIntro::
# 511 "data/maps/SilvanWoods/scripts.pory"
	.string "Let's see how you perform.$"

SilvanWoods_Text_RosaLost::
# 515 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't keep up.$"

SilvanWoods_Text_RosaPost::
# 519 "data/maps/SilvanWoods/scripts.pory"
	.string "I'd like to fall in love beneath the\n"
	.string "trees.$"

SilvanWoods_Text_MaryIntro::
# 523 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey watch it! This is where we like to\n"
	.string "play.$"

SilvanWoods_Text_MaryLost::
# 527 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh nevermind$"

SilvanWoods_Text_MaryPost::
# 531 "data/maps/SilvanWoods/scripts.pory"
	.string "You're free to walk this way.$"

SilvanWoods_Text_MollyIntro::
# 535 "data/maps/SilvanWoods/scripts.pory"
	.string "Who let you out of bed looking like\n"
	.string "that?$"

SilvanWoods_Text_MollyLost::
# 539 "data/maps/SilvanWoods/scripts.pory"
	.string "I was no match.$"

SilvanWoods_Text_MollyPost::
# 543 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm far too weak for you.$"

SilvanWoods_Text_LeahIntro::
# 547 "data/maps/SilvanWoods/scripts.pory"
	.string "I think you'll find I'm not like other\n"
	.string "girls.$"

SilvanWoods_Text_LeahLost::
# 551 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I still have a lot left to\n"
	.string "learn.$"

SilvanWoods_Text_LeahPost::
# 555 "data/maps/SilvanWoods/scripts.pory"
	.string "I love it here and feel at complete\n"
	.string "peace whenever I can walk among these\l"
	.string "trees.$"

SilvanWoods_Text_DaisyIntro::
# 559 "data/maps/SilvanWoods/scripts.pory"
	.string "Men don't like me. They say I'm too\n"
	.string "forward.$"

SilvanWoods_Text_DaisyLost::
# 563 "data/maps/SilvanWoods/scripts.pory"
	.string "I can't believe I'm such a dumb lolcow!$"

SilvanWoods_Text_DaisyPost::
# 567 "data/maps/SilvanWoods/scripts.pory"
	.string "I hear men like it when you squish your\n"
	.string "face. Maybe I'll share a pic with Agatha.$"

SilvanWoods_Text_KelseyIntro::
# 571 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm searching for a four leafed clover.$"

SilvanWoods_Text_KelseyLost::
# 575 "data/maps/SilvanWoods/scripts.pory"
	.string "Looks like I am in need of better luck.$"

SilvanWoods_Text_KelseyPost::
# 579 "data/maps/SilvanWoods/scripts.pory"
	.string "They say the four leaf clover is lucky.$"

SilvanWoods_Text_FelixIntro::
# 583 "data/maps/SilvanWoods/scripts.pory"
	.string "You will eat bugs and you will be happy.$"

SilvanWoods_Text_FelixLost::
# 587 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh dude now what will I have for\n"
	.string "dinner?$"

SilvanWoods_Text_FelixPost::
# 591 "data/maps/SilvanWoods/scripts.pory"
	.string "Crickets and worms are sources of\n"
	.string "protein.$"

SilvanWoods_Text_VioletIntro::
# 595 "data/maps/SilvanWoods/scripts.pory"
	.string "Each flower grows unique from all the\n"
	.string "rest.$"

SilvanWoods_Text_VioletLost::
# 599 "data/maps/SilvanWoods/scripts.pory"
	.string "No two roses are ever quite the same.$"

SilvanWoods_Text_VioletPost::
# 603 "data/maps/SilvanWoods/scripts.pory"
	.string "How many are the blooms that we call\n"
	.string "rose?$"

SilvanWoods_Text_RubyIntro::
# 607 "data/maps/SilvanWoods/scripts.pory"
	.string "I had suggested we go to the book\n"
	.string "depository but Jack insisted...$"

SilvanWoods_Text_RubyLost::
# 611 "data/maps/SilvanWoods/scripts.pory"
	.string "You can't say Silvan Woods has no\n"
	.string "welcome.$"

SilvanWoods_Text_RubyPost::
# 615 "data/maps/SilvanWoods/scripts.pory"
	.string "What do you mean? There was but one of\n"
	.string "us!$"

SilvanWoods_Text_JackIntro::
# 619 "data/maps/SilvanWoods/scripts.pory"
	.string "Are you aware of the Zapruder film?$"

SilvanWoods_Text_JackLost::
# 623 "data/maps/SilvanWoods/scripts.pory"
	.string "What's that? You say Mr. Oswald did it?$"

SilvanWoods_Text_JackPost::
# 627 "data/maps/SilvanWoods/scripts.pory"
	.string "Who was the man with the black\n"
	.string "umbrella?$"

SilvanWoods_Text_LesterIntro::
# 631 "data/maps/SilvanWoods/scripts.pory"
	.string "I had to take a rest after walking so\n"
	.string "far but there is nowhere great to sit.$"

SilvanWoods_Text_LesterLost::
# 635 "data/maps/SilvanWoods/scripts.pory"
	.string "Just goes to show the importance of\n"
	.string "health.$"

SilvanWoods_Text_LesterPost::
# 639 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh man I'm not sure I can make it out...$"

SilvanWoods_Text_NevilleIntro::
# 643 "data/maps/SilvanWoods/scripts.pory"
	.string "No insect has ever broken my heart.$"

SilvanWoods_Text_NevilleLost::
# 647 "data/maps/SilvanWoods/scripts.pory"
	.string "My bugs! They let me down!$"

SilvanWoods_Text_NevillePost::
# 651 "data/maps/SilvanWoods/scripts.pory"
	.string "Dissapointing is the only thing I have\n"
	.string "to say.$"

SilvanWoods_Text_WangIntro::
# 655 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey kid would you like to see my big\n"
	.string "worm?$"

SilvanWoods_Text_WangLost::
# 659 "data/maps/SilvanWoods/scripts.pory"
	.string "No need to cause a scene$"

SilvanWoods_Text_WangPost::
# 663 "data/maps/SilvanWoods/scripts.pory"
	.string "C'mon calm down. Besides it really was a\n"
	.string "monster worm!$"

SilvanWoods_Text_SallyIntro::
# 668 "data/maps/SilvanWoods/scripts.pory"
	.string "We walk out here as often as we can.$"

SilvanWoods_Text_SallyLost::
# 672 "data/maps/SilvanWoods/scripts.pory"
	.string "Video games are ruining the youth!$"

SilvanWoods_Text_SallyPost::
# 676 "data/maps/SilvanWoods/scripts.pory"
	.string "Back in my day we had no Pokemon and I\n"
	.string "don't like the way you kids trust them!$"

SilvanWoods_Text_EdIntro::
# 680 "data/maps/SilvanWoods/scripts.pory"
	.string "When I was young we stormed Normandy!$"

SilvanWoods_Text_EdLost::
# 684 "data/maps/SilvanWoods/scripts.pory"
	.string "Get off my lawn!$"

SilvanWoods_Text_EdPost::
# 688 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm sorry, who are you?$"

SilvanWoods_Text_JayIntro::
# 692 "data/maps/SilvanWoods/scripts.pory"
	.string "We aren't here to enjoy the woods\n"
	.string "instead we came out here to fight and\l"
	.string "get fucked up.$"

SilvanWoods_Text_JayLost::
# 696 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey bitch don't kill my vibe!$"

SilvanWoods_Text_JayPost::
# 700 "data/maps/SilvanWoods/scripts.pory"
	.string "Dude schools so hard, these teachers\n"
	.string "think that I should understand this\l"
	.string "complicated shit like traingles.$"

SilvanWoods_Text_FosterIntro::
# 704 "data/maps/SilvanWoods/scripts.pory"
	.string "Man have you ever just looked at your\n"
	.string "hands?$"

SilvanWoods_Text_FosterLost::
# 708 "data/maps/SilvanWoods/scripts.pory"
	.string "Did you steal my lighter?$"

SilvanWoods_Text_FosterPost::
# 712 "data/maps/SilvanWoods/scripts.pory"
	.string "I met this guy who told me that pig\n"
	.string "tastes just like human.$"

SilvanWoods_Text_DouggieIntro::
# 716 "data/maps/SilvanWoods/scripts.pory"
	.string "Haha! Dude, RIZZLAM! We're all\n"
	.string "RIZZLAMIC!$"

SilvanWoods_Text_DouggieLost::
# 720 "data/maps/SilvanWoods/scripts.pory"
	.string "You're honestly acting just like a\n"
	.string "bitch.$"

SilvanWoods_Text_DouggiePost::
# 724 "data/maps/SilvanWoods/scripts.pory"
	.string "I stole that kid's lighter wanna buy it?$"

SilvanWoods_Text_SmokeyIntro::
# 728 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh dude I just picked up some fire weed!$"

SilvanWoods_Text_SmokeyLost::
# 732 "data/maps/SilvanWoods/scripts.pory"
	.string "I was thinking about some crazy shit.$"

SilvanWoods_Text_SmokeyPost::
# 736 "data/maps/SilvanWoods/scripts.pory"
	.string "Just sitting here all day and smoking\n"
	.string "weed sometimes I worry I may have\l"
	.string "fucked up.$"

SilvanWoods_Text_StoneyIntro::
# 740 "data/maps/SilvanWoods/scripts.pory"
	.string "Uhh bro we're taking dabs under the\n"
	.string "trees.$"

SilvanWoods_Text_StoneyLost::
# 744 "data/maps/SilvanWoods/scripts.pory"
	.string "Dabbed out! I need to go eat a hot dog...$"

SilvanWoods_Text_StoneyPost::
# 748 "data/maps/SilvanWoods/scripts.pory"
	.string "It's pretty cool up here in the forest\n"
	.string "the weed's better but I still miss the\l"
	.string "beach.$"

SilvanWoods_Text_GaryIntro::
# 752 "data/maps/SilvanWoods/scripts.pory"
	.string "There is no man alive who outsmokes me.$"

SilvanWoods_Text_GaryLost::
# 756 "data/maps/SilvanWoods/scripts.pory"
	.string "I'm smoked out man, I can't take one\n"
	.string "more hit.$"

SilvanWoods_Text_GaryPost::
# 760 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok ok you've proved you aren't a bitch\n"
	.string "and we spent so long standing here\l"
	.string "fighting I might need to take another\l"
	.string "hit soon.$"

SilvanWoods_Text_ScottBlock::
# 764 "data/maps/SilvanWoods/scripts.pory"
	.string "Oh no this is not good I can't find Leaf!\n"
	.string "You haven't seen her recently have\l"
	.string "you? I know she must be somewhere in\l"
	.string "these woods. Will you please go find her\l"
	.string "and bring her here?$"

SilvanWoods_Text_Leaf1::
# 768 "data/maps/SilvanWoods/scripts.pory"
	.string "Hey {PLAYER}! There you are! Thanks\n"
	.string "for saving me again.$"

SilvanWoods_Text_ScottPass::
# 772 "data/maps/SilvanWoods/scripts.pory"
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
# 776 "data/maps/SilvanWoods/scripts.pory"
	.string "Ok that's fine but I want to see Mew.\n"
	.string "Well {PLAYER} don't spend all day\l"
	.string "lollygagging here in the woods. We'll\l"
	.string "wait for you in town down at my dad's\l"
	.string "Chronic Cannabis store.$"

SilvanWoods_Text_Ferryman1::
# 780 "data/maps/SilvanWoods/scripts.pory"
	.string "Have you come to sail across the river?$"

SilvanWoods_Text_Ferryman2::
# 784 "data/maps/SilvanWoods/scripts.pory"
	.string "I see. Enjoy your walk in Silva then.$"

SilvanWoods_Text_Ferryman3::
# 788 "data/maps/SilvanWoods/scripts.pory"
	.string "Perfect! Let us set out across at once!$"

SilvanWoods_Text_Ferryman4::
# 792 "data/maps/SilvanWoods/scripts.pory"
	.string "Come back anytime and have a nice day!$"
