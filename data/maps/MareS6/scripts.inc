MareS6_MapScripts::
# 17 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 45 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS6_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6_F
# 20 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/MareS6/scripts.pory"
	case 4, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 31 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 35 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 5
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 39 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 6
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesWithFisherman
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 36 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 40 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD:
# 47 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2
MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 51 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_lt MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 48 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowMolyFruit
	goto MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 52 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_LockCirceDoor
	return


MareS6_Script_Transition_IslaPina::
# 59 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 60 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 61 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 65 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 66 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 67 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 71 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 72 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 73 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 78 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 79 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 80 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 84 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 85 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 87 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 92 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 93 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 98 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 99 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowMolyFruit::
# 104 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmFruitL, FALSE
# 105 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmFruitC, FALSE
# 106 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmFruitR, FALSE
	return


MareS6_Script_LockCirceDoor::
# 111 "data/maps/MareS6/scripts.pory"
	setmetatile 63, 42, METATILE_General_Door, TRUE
	return


MareS6_Script_Fisherman::
# 116 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 118 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 123 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 128 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 134 "data/maps/MareS6/scripts.pory"
	faceplayer
# 135 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 137 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 138 "data/maps/MareS6/scripts.pory"
	closemessage
# 139 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 119 "data/maps/MareS6/scripts.pory"
	faceplayer
# 120 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 124 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 125 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 129 "data/maps/MareS6/scripts.pory"
	faceplayer
# 130 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 145 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_1
	return

MareS6_Script_Ulysses_1:
# 146 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	return


MareS6_Script_UlyssesEtFishermanScene::
# 154 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 155 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 157 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 158 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 159 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 160 "data/maps/MareS6/scripts.pory"
	closemessage
# 162 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 163 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 165 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 172 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 173 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 175 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 178 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 179 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 166 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 167 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 168 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 169 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 182 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 184 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 185 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 186 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 187 "data/maps/MareS6/scripts.pory"
	closemessage
# 189 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 190 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 194 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 195 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 196 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 197 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 199 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 200 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 201 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 203 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 204 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 206 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 174 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 176 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 191 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 192 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 212 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 213 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 214 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 218 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 219 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 220 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 224 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 225 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 226 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 230 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 231 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 232 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 233 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 234 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 235 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 236 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 237 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 238 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 239 "data/maps/MareS6/scripts.pory"
	closemessage
# 241 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 242 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 244 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 245 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 246 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 248 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 254 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 255 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 260 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 261 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 262 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 266 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 267 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 268 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 269 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 270 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 271 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 272 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 273 "data/maps/MareS6/scripts.pory"
	closemessage
# 275 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 276 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 278 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 279 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 280 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 281 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 282 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 283 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 284 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 285 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 286 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 287 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 288 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 289 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 290 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 291 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 293 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_Shinx::
# 302 "data/maps/MareS6/scripts.pory"
	faceplayer
# 304 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SHINX, Common_Movement_ExclamationMark
# 305 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 307 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SHINX, CRY_MODE_ENCOUNTER
# 308 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 310 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 311 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 313 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 314 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Shinx_1
	return

MareS6_Script_Shinx_1:
# 315 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 316 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Shinx_3
# 323 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 324 "data/maps/MareS6/scripts.pory"
	closemessage
# 326 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 328 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 329 "data/maps/MareS6/scripts.pory"
	waitse
# 331 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SHINX
# 332 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SHINX, 0, 0
# 333 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SHINX, MOVEMENT_TYPE_INVISIBLE
# 334 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SHINX
# 336 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 337 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 49, 45
# 338 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 339 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 340 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Shinx_8
# 342 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Shinx_9
# 344 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Shinx_10
# 346 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Shinx_11
MareS6_Script_Shinx_11:
# 348 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Shinx_6:
# 350 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 352 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 354 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorRestored
# 355 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 356 "data/maps/MareS6/scripts.pory"
	closemessage
# 358 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 360 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 361 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 0, 0
# 362 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
# 363 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 365 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 367 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SHINXSAILOR
# 369 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Shinx_3:
# 317 "data/maps/MareS6/scripts.pory"
	closemessage
# 318 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Shinx_8:
# 341 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_9:
# 343 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_10:
# 345 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Shinx_6


MareS6_Script_Turtwig::
# 378 "data/maps/MareS6/scripts.pory"
	faceplayer
# 380 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TURTWIG, Common_Movement_ExclamationMark
# 381 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 383 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_ENCOUNTER
# 384 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 386 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
# 387 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 389 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 390 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Turtwig_1
	return

MareS6_Script_Turtwig_1:
# 391 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 392 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Turtwig_3
# 399 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 400 "data/maps/MareS6/scripts.pory"
	closemessage
# 402 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 404 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 405 "data/maps/MareS6/scripts.pory"
	waitse
# 407 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TURTWIG
# 408 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TURTWIG, 0, 0
# 409 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TURTWIG, MOVEMENT_TYPE_INVISIBLE
# 410 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TURTWIG
# 412 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 413 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 52, 46
# 414 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 415 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 416 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Turtwig_8
# 418 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Turtwig_9
# 420 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Turtwig_10
# 422 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Turtwig_11
MareS6_Script_Turtwig_11:
# 424 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Turtwig_6:
# 426 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 428 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 430 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperRestored
# 431 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 432 "data/maps/MareS6/scripts.pory"
	closemessage
# 434 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 436 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 437 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 0, 0
# 438 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
# 439 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 441 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 443 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TURTWIGCAMPER
# 445 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Turtwig_3:
# 393 "data/maps/MareS6/scripts.pory"
	closemessage
# 394 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Turtwig_8:
# 417 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_9:
# 419 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_10:
# 421 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Turtwig_6


MareS6_Script_Torchic::
# 454 "data/maps/MareS6/scripts.pory"
	faceplayer
# 456 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TORCHIC, Common_Movement_ExclamationMark
# 457 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 459 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 460 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 462 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 463 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 465 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 466 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Torchic_1
	return

MareS6_Script_Torchic_1:
# 467 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 468 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Torchic_3
# 475 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 476 "data/maps/MareS6/scripts.pory"
	closemessage
# 478 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 480 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 481 "data/maps/MareS6/scripts.pory"
	waitse
# 483 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TORCHIC
# 484 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TORCHIC, 0, 0
# 485 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TORCHIC, MOVEMENT_TYPE_INVISIBLE
# 486 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TORCHIC
# 488 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 489 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 56, 45
# 490 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 491 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 492 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Torchic_8
# 494 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Torchic_9
# 496 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Torchic_10
# 498 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Torchic_11
MareS6_Script_Torchic_11:
# 500 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Torchic_6:
# 502 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 504 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 506 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_Man3Restored
# 507 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 508 "data/maps/MareS6/scripts.pory"
	closemessage
# 510 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 512 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 513 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 0, 0
# 514 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
# 515 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 517 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 519 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TORCHICMAN3
# 521 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Torchic_3:
# 469 "data/maps/MareS6/scripts.pory"
	closemessage
# 470 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Torchic_8:
# 493 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_9:
# 495 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_10:
# 497 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Torchic_6


MareS6_Script_Snubbull::
# 530 "data/maps/MareS6/scripts.pory"
	faceplayer
# 532 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SNUBBULL, Common_Movement_ExclamationMark
# 533 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 535 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SNUBBULL, CRY_MODE_ENCOUNTER
# 536 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 538 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNUBBULL
# 539 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 541 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 542 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Snubbull_1
	return

MareS6_Script_Snubbull_1:
# 543 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 544 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Snubbull_3
# 551 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 552 "data/maps/MareS6/scripts.pory"
	closemessage
# 554 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 556 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 557 "data/maps/MareS6/scripts.pory"
	waitse
# 559 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SNUBBULL
# 560 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SNUBBULL, 0, 0
# 561 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SNUBBULL, MOVEMENT_TYPE_INVISIBLE
# 562 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SNUBBULL
# 564 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 565 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 58, 43
# 566 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 567 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 568 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Snubbull_8
# 570 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Snubbull_9
# 572 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Snubbull_10
# 574 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Snubbull_11
MareS6_Script_Snubbull_11:
# 576 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Snubbull_6:
# 578 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 580 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 582 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_OldMan2Restored
# 583 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 584 "data/maps/MareS6/scripts.pory"
	closemessage
# 586 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 588 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 589 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 0, 0
# 590 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
# 591 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 593 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 595 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2
# 597 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Snubbull_3:
# 545 "data/maps/MareS6/scripts.pory"
	closemessage
# 546 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Snubbull_8:
# 569 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_9:
# 571 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_10:
# 573 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Snubbull_6


MareS6_Script_Poochyena::
# 606 "data/maps/MareS6/scripts.pory"
	faceplayer
# 608 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_POOCHYENA, Common_Movement_ExclamationMark
# 609 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 611 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 612 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 614 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHYENA
# 615 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 617 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 618 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Poochyena_1
	return

MareS6_Script_Poochyena_1:
# 619 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 620 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Poochyena_3
# 627 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 628 "data/maps/MareS6/scripts.pory"
	closemessage
# 630 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 632 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 633 "data/maps/MareS6/scripts.pory"
	waitse
# 635 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_POOCHYENA
# 636 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_POOCHYENA, 0, 0
# 637 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_POOCHYENA, MOVEMENT_TYPE_INVISIBLE
# 638 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_POOCHYENA
# 640 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 641 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 59, 45
# 642 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 643 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 644 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Poochyena_8
# 646 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Poochyena_9
# 648 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Poochyena_10
# 650 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Poochyena_11
MareS6_Script_Poochyena_11:
# 652 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Poochyena_6:
# 654 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 656 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 658 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerRestored
# 659 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 660 "data/maps/MareS6/scripts.pory"
	closemessage
# 662 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 664 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 665 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 0, 0
# 666 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
# 667 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 669 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 671 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_POOCHYENAHIKER
# 673 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Poochyena_3:
# 621 "data/maps/MareS6/scripts.pory"
	closemessage
# 622 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Poochyena_8:
# 645 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_9:
# 647 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_10:
# 649 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Poochyena_6


MareS6_Script_CheckAllRestored::
# 682 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_Script_CheckAllRestored_4
MareS6_Script_CheckAllRestored_1:
	return

MareS6_Script_CheckAllRestored_2:
# 688 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 12
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_3:
# 684 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TORCHICMAN3, MareS6_Script_CheckAllRestored_8
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_4:
# 683 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_Script_CheckAllRestored_3
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_7:
# 686 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_Script_CheckAllRestored_2
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_8:
# 685 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2, MareS6_Script_CheckAllRestored_7
	goto MareS6_Script_CheckAllRestored_1


MareS6_Script_PinaFruitTree::
# 696 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 698 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 704 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 705 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 713 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 715 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 707 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 708 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 709 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 721 "data/maps/MareS6/scripts.pory"
	faceplayer
# 723 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 727 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 732 "data/maps/MareS6/scripts.pory"
	checktrainerflag TRAINER_PINA_FRUIT_FAN
	goto_if 0, MareS6_Script_FruitFan_7
# 737 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_Script_FruitFan_10
# 740 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost2
MareS6_Script_FruitFan_1:
# 744 "data/maps/MareS6/scripts.pory"
	closemessage
# 745 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_FruitFan_2:
# 724 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 728 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_7:
# 733 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPre
# 734 "data/maps/MareS6/scripts.pory"
	closemessage
# 735 "data/maps/MareS6/scripts.pory"
	trainerbattle_no_intro TRAINER_PINA_FRUIT_FAN, MareS6_Text_PinaFruitFanLost
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_10:
# 738 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 752 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 753 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 755 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 756 "data/maps/MareS6/scripts.pory"
	closemessage
# 758 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, IsMonFollower
# 760 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 767 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 768 "data/maps/MareS6/scripts.pory"
	waitse
# 770 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 774 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
# 775 "data/maps/MareS6/scripts.pory"
	dowildbattle
MareS6_Script_HeadbuttTree_4:
# 778 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
# 780 "data/maps/MareS6/scripts.pory"
	releaseall
	end

MareS6_Script_HeadbuttTree_2:
# 761 "data/maps/MareS6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 762 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
# 763 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 764 "data/maps/MareS6/scripts.pory"
	updatefollowingmon
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 771 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 770 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 787 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 788 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 790 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 791 "data/maps/MareS6/scripts.pory"
	waitse
# 793 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 794 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 795 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 796 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 798 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 799 "data/maps/MareS6/scripts.pory"
	closemessage
# 801 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 802 "data/maps/MareS6/scripts.pory"
	closemessage
# 804 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 178 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 810 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 814 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walker\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 818 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 822 "data/maps/MareS6/scripts.pory"
	.string "Now losing people is an unfortunate\n"
	.string "part of life out here on Isla Pina, but\l"
	.string "nothing like this. We must have lost\l"
	.string "half a dozen just this month. We sent\l"
	.string "out a search party, all strong men like\l"
	.string "yourself, but we haven't seen them\l"
	.string "since. We all know it must be that crazy\l"
	.string "old witch who lives out in the woods but\l"
	.string "the way I see it there's nothing we can\l"
	.string "do about it.$"

MareS6_Text_UlyssesResponseToFisherman::
# 826 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 830 "data/maps/MareS6/scripts.pory"
	.string "My goodness, {PLAYER}, am I glad to\n"
	.string "see you! I washed ashore and these\l"
	.string "good people of the island gave me food,\l"
	.string "water, and clothes. I was about to leave\l"
	.string "when I just learned an evil witch, who\l"
	.string "lives out in the woods, is kidnapping\l"
	.string "the people who live here. After the\l"
	.string "hospitality they showed to this\l"
	.string "stranger in his time of great need, it\l"
	.string "wouldn't be right for me to leave now\l"
	.string "without paying them back by finding\l"
	.string "this murderous witch and saving the\l"
	.string "island. Let's head for the jungle and\l"
	.string "search for the secret lair of the witch.\l"
	.string "I'll meet you there!$"

MareS6_Text_UlyssesJungle::
# 846 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 852 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 859 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 863 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 867 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 871 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 875 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 879 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 884 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_PinaFruitFanPre::
# 890 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PinaFruitFanLost::
# 897 "data/maps/MareS6/scripts.pory"
	.string "You are a villain and you are a thief.$"

MareS6_Text_PinaFruitFanPost::
# 901 "data/maps/MareS6/scripts.pory"
	.string "Well, now the piña fruit is yours. I hope\n"
	.string "you at least put that rare fruit to\l"
	.string "good use.$"

MareS6_Text_PinaFruitFanPost2::
# 906 "data/maps/MareS6/scripts.pory"
	.string "Another fruit will grow another day, and\n"
	.string "I will make sure that no one steals it.$"

MareS6_Text_PlayerGaveMoly::
# 911 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"

MareS6_Text_SailorRestored::
# 915 "data/maps/MareS6/scripts.pory"
	.string "What terrible dreams I've suffered of\n"
	.string "late! I dreamt my ship had crashed and I\l"
	.string "had washed ashore upon some cursed\l"
	.string "island of Shinx.$"

MareS6_Text_CamperRestored::
# 921 "data/maps/MareS6/scripts.pory"
	.string "All the merit badges I earned could not\n"
	.string "Save me from Circe's curse. I'm in your\l"
	.string "debt.$"

MareS6_Text_Man3Restored::
# 926 "data/maps/MareS6/scripts.pory"
	.string "We came to save the town from Circe but\n"
	.string "in the end we ourselves needed saving.$"

MareS6_Text_OldMan2Restored::
# 931 "data/maps/MareS6/scripts.pory"
	.string "I've lived a long time. Never in my days\n"
	.string "have I seen people turned to Pokemon.$"

MareS6_Text_HikerRestored::
# 936 "data/maps/MareS6/scripts.pory"
	.string "It feels such a relief to be brought\n"
	.string "back into my old body again. I feared\l"
	.string "I'd be stuck as a Pokemon for good!$"

MareS6_Text_GenericRestored::
# 942 "data/maps/MareS6/scripts.pory"
	.string "Thank you for saving me. I'm heading\n"
	.string "home!$"
