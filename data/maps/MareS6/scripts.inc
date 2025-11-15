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
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 48 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowMolyFruit
	return


MareS6_Script_Transition_IslaPina::
# 55 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 56 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 57 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 61 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 62 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 63 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 67 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 68 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 69 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 74 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 75 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 76 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 80 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 81 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 83 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 88 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 89 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 94 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 95 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowMolyFruit::
# 100 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmFruitL, FALSE
# 101 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmFruitC, FALSE
# 102 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmFruitR, FALSE
	return


MareS6_Script_Fisherman::
# 107 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 109 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 114 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 119 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 125 "data/maps/MareS6/scripts.pory"
	faceplayer
# 126 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 128 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 129 "data/maps/MareS6/scripts.pory"
	closemessage
# 130 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 110 "data/maps/MareS6/scripts.pory"
	faceplayer
# 111 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 115 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 116 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 120 "data/maps/MareS6/scripts.pory"
	faceplayer
# 121 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 136 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_1
	return

MareS6_Script_Ulysses_1:
# 137 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	return


MareS6_Script_UlyssesEtFishermanScene::
# 145 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 146 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 148 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 149 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 150 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 151 "data/maps/MareS6/scripts.pory"
	closemessage
# 153 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 154 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 156 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 163 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 164 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 166 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 169 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 170 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 157 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 158 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 159 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 160 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 173 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 175 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 176 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 177 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 178 "data/maps/MareS6/scripts.pory"
	closemessage
# 180 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 181 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 185 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 186 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 187 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 188 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 190 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 191 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 192 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 194 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 195 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 197 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 165 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 167 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 182 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 183 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 203 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 204 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 205 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 209 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 210 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 211 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 215 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 216 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 217 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 221 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 222 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 223 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 224 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 225 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 226 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 227 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 228 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 229 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 230 "data/maps/MareS6/scripts.pory"
	closemessage
# 232 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 233 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 235 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 236 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 237 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 239 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 245 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 246 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 247 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 251 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 252 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 253 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 257 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 258 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 259 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 260 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 261 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 262 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 263 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 264 "data/maps/MareS6/scripts.pory"
	closemessage
# 266 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 267 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 269 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 270 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 271 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 272 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 273 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 274 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 275 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 276 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 277 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 278 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 279 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 280 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 281 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 282 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 284 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_Shinx::
# 293 "data/maps/MareS6/scripts.pory"
	faceplayer
# 295 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SHINX, Common_Movement_ExclamationMark
# 296 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 298 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SHINX, CRY_MODE_ENCOUNTER
# 299 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 301 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 302 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 304 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 305 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Shinx_1
	return

MareS6_Script_Shinx_1:
# 306 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 307 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Shinx_3
	return

MareS6_Script_Shinx_3:
# 308 "data/maps/MareS6/scripts.pory"
	closemessage
# 309 "data/maps/MareS6/scripts.pory"
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
# 343 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 345 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 350 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
# 352 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 353 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 361 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 363 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 355 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 356 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 357 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 369 "data/maps/MareS6/scripts.pory"
	faceplayer
# 371 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 375 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 380 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan3
MareS6_Script_FruitFan_1:
# 382 "data/maps/MareS6/scripts.pory"
	closemessage
# 383 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return

MareS6_Script_FruitFan_2:
# 372 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 376 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 390 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 391 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 393 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 395 "data/maps/MareS6/scripts.pory"
	isfollowerfieldmoveuser VAR_0x8004
# 397 "data/maps/MareS6/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 401 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 402 "data/maps/MareS6/scripts.pory"
	waitse
# 404 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 408 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
MareS6_Script_HeadbuttTree_4:
# 411 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
	end

MareS6_Script_HeadbuttTree_2:
# 398 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 405 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 404 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 419 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 420 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 422 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 423 "data/maps/MareS6/scripts.pory"
	waitse
# 425 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 426 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 427 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 428 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 430 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 431 "data/maps/MareS6/scripts.pory"
	closemessage
# 433 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 434 "data/maps/MareS6/scripts.pory"
	closemessage
# 436 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 169 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 442 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 446 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walked\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 450 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 454 "data/maps/MareS6/scripts.pory"
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
# 458 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 462 "data/maps/MareS6/scripts.pory"
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
# 478 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 484 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 491 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 495 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 499 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 503 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 507 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 511 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 516 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_FruitFan3::
# 522 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PlayerGaveMoly::
# 529 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"
