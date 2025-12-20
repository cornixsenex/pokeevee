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
	return

MareS6_Script_Shinx_3:
# 317 "data/maps/MareS6/scripts.pory"
	closemessage
# 318 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end


MareS6_Script_Turtwig::
	return


MareS6_Script_Torchic::
	return


MareS6_Script_Snubbull::
	return


MareS6_Script_Poochyena::
	return


MareS6_Script_PinaFruitTree::
# 357 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 359 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 365 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 366 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 374 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 376 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 368 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 369 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 370 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 382 "data/maps/MareS6/scripts.pory"
	faceplayer
# 384 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 388 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 393 "data/maps/MareS6/scripts.pory"
	checktrainerflag TRAINER_PINA_FRUIT_FAN
	goto_if 0, MareS6_Script_FruitFan_7
# 398 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost
MareS6_Script_FruitFan_1:
# 401 "data/maps/MareS6/scripts.pory"
	closemessage
# 402 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_FruitFan_2:
# 385 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 389 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_7:
# 394 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPre
# 395 "data/maps/MareS6/scripts.pory"
	closemessage
# 396 "data/maps/MareS6/scripts.pory"
	trainerbattle_no_intro TRAINER_PINA_FRUIT_FAN, MareS6_Text_PinaFruitFanLost
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 410 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 411 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 413 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 414 "data/maps/MareS6/scripts.pory"
	closemessage
# 416 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, IsMonFollower
# 418 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 425 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 426 "data/maps/MareS6/scripts.pory"
	waitse
# 428 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 432 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
# 433 "data/maps/MareS6/scripts.pory"
	dowildbattle
MareS6_Script_HeadbuttTree_4:
# 436 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
# 438 "data/maps/MareS6/scripts.pory"
	releaseall
	end

MareS6_Script_HeadbuttTree_2:
# 419 "data/maps/MareS6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 420 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
# 421 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 422 "data/maps/MareS6/scripts.pory"
	updatefollowingmon
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 429 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 428 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 445 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 446 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 448 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 449 "data/maps/MareS6/scripts.pory"
	waitse
# 451 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 452 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 453 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 454 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 456 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 457 "data/maps/MareS6/scripts.pory"
	closemessage
# 459 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 460 "data/maps/MareS6/scripts.pory"
	closemessage
# 462 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 178 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 468 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 472 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walker\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 476 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 480 "data/maps/MareS6/scripts.pory"
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
# 484 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 488 "data/maps/MareS6/scripts.pory"
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
# 504 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 510 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 517 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 521 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 525 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 529 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 533 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 537 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 542 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_PinaFruitFanPre::
# 548 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PinaFruitFanLost::
# 555 "data/maps/MareS6/scripts.pory"
	.string "You are a villain and you are a thief.$"

MareS6_Text_PinaFruitFanPost::
# 559 "data/maps/MareS6/scripts.pory"
	.string "$"

MareS6_Text_PlayerGaveMoly::
# 563 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"
