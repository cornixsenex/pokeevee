MareS6_MapScripts::
# 17 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 69 "data/maps/MareS6/scripts.pory"
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
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 43 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 10
	goto_if_gt MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 47 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 53 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 57 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 63 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
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

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 40 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 44 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInPen
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 43 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 48 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesShades
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 54 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowSailorRestored
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 58 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowCamperRestored
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 64 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowHikerRestored
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD:
# 71 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2
MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 75 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_lt MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 72 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowMolyFruit
	goto MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 76 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_LockCirceDoor
	return


MareS6_Script_Transition_IslaPina::
# 83 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 84 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 85 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 89 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 90 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 91 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 95 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 96 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 97 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 102 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 103 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 104 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 108 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 109 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 111 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 116 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 117 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 122 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 123 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesInPen::
# 128 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 58, 40
# 129 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowUlyssesShades::
# 134 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 13, 65
# 135 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowSailorRestored::
# 141 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 77, 59
# 142 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	return


MareS6_Script_ShowCamperRestored::
# 147 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 76, 71
# 148 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowHikerRestored::
# 153 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 53, 67
# 154 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowMolyFruit::
# 159 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmFruitL, FALSE
# 160 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmFruitC, FALSE
# 161 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmFruitR, FALSE
	return


MareS6_Script_LockCirceDoor::
# 166 "data/maps/MareS6/scripts.pory"
	setmetatile 63, 42, METATILE_General_Door, TRUE
	return


MareS6_Script_Fisherman::
# 171 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 173 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 178 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 183 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 189 "data/maps/MareS6/scripts.pory"
	faceplayer
# 190 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 192 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 193 "data/maps/MareS6/scripts.pory"
	closemessage
# 194 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 174 "data/maps/MareS6/scripts.pory"
	faceplayer
# 175 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 179 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 180 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 184 "data/maps/MareS6/scripts.pory"
	faceplayer
# 185 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 200 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_2
MareS6_Script_Ulysses_1:
# 204 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 11
	goto_if_eq MareS6_Script_Ulysses_5
MareS6_Script_Ulysses_4:
# 208 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_eq MareS6_Script_Ulysses_8
MareS6_Script_Ulysses_7:
# 212 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_eq MareS6_Script_Ulysses_10
	return

MareS6_Script_Ulysses_2:
# 201 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Ulysses_1

MareS6_Script_Ulysses_5:
# 205 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesDuringPen
	goto MareS6_Script_Ulysses_4

MareS6_Script_Ulysses_8:
# 209 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAfterPen
	goto MareS6_Script_Ulysses_7

MareS6_Script_Ulysses_10:
# 213 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesShades
	return


MareS6_Script_UlyssesEtFishermanScene::
# 219 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 220 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 222 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 223 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 224 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 225 "data/maps/MareS6/scripts.pory"
	closemessage
# 227 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 228 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 230 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 237 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 238 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 240 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 243 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 244 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 231 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 232 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 233 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 234 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 247 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 249 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 250 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 251 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 252 "data/maps/MareS6/scripts.pory"
	closemessage
# 254 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 255 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 259 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 260 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 261 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 262 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 264 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 265 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 266 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 268 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 269 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 271 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 239 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 241 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 256 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 257 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 277 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 278 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 279 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 283 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 284 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 285 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 289 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 290 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 291 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 295 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 296 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 297 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 298 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 299 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 300 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 301 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 302 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 303 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 304 "data/maps/MareS6/scripts.pory"
	closemessage
# 306 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 307 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 309 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 310 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 311 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 313 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 319 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 320 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 321 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 325 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 326 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 327 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 331 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 332 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 333 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 334 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 335 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 336 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 337 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 338 "data/maps/MareS6/scripts.pory"
	closemessage
# 340 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 341 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 343 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 344 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 345 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 346 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 347 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 348 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 349 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 350 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 351 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 352 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 353 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 354 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 355 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 356 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 358 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_UlyssesDuringPen::
# 364 "data/maps/MareS6/scripts.pory"
	faceplayer
# 365 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 366 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesDuringPen
# 367 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 368 "data/maps/MareS6/scripts.pory"
	closemessage
# 369 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end


MareS6_Script_UlyssesAfterPen::
# 374 "data/maps/MareS6/scripts.pory"
	faceplayer
# 375 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 376 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAfterPen
# 377 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 378 "data/maps/MareS6/scripts.pory"
	closemessage
# 379 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 380 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq MareS6_Script_UlyssesAfterPen_2
MareS6_Script_UlyssesAfterPen_1:
# 384 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight2
# 385 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 386 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 387 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 388 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 389 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 390 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 13
	end

MareS6_Script_UlyssesAfterPen_2:
# 381 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 382 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesAfterPen_1


MareS6_Script_UlyssesShades::
# 396 "data/maps/MareS6/scripts.pory"
	goto_if_unset FLAG_ULYSSES_SHADES_INTROD, MareS6_Script_UlyssesShades_2
# 402 "data/maps/MareS6/scripts.pory"
	faceplayer
# 403 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
MareS6_Script_UlyssesShades_1:
# 407 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesBringSacrifice, MSGBOX_YESNO
# 408 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_UlyssesShades_5
	return

MareS6_Script_UlyssesShades_2:
# 397 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 398 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesShadesIntro1
# 399 "data/maps/MareS6/scripts.pory"
	faceplayer
# 400 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesShadesIntro2
	goto MareS6_Script_UlyssesShades_1

MareS6_Script_UlyssesShades_5:
# 409 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 410 "data/maps/MareS6/scripts.pory"
	closemessage
# 411 "data/maps/MareS6/scripts.pory"
	special ChoosePartyMon
# 412 "data/maps/MareS6/scripts.pory"
	waitstate
# 414 "data/maps/MareS6/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MareS6_Script_UlyssesShades_7
# 425 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckSelectedMonValidSacrifice
# 426 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_UlyssesShades_10
# 431 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 432 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SacrificeNotValid
# 433 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 434 "data/maps/MareS6/scripts.pory"
	closemessage
# 436 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 437 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_7:
# 415 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 416 "data/maps/MareS6/scripts.pory"
	msgbox BigIslandN_Text_DeclineReleaseSpearow, MSGBOX_DEFAULT
# 417 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 418 "data/maps/MareS6/scripts.pory"
	closemessage
# 419 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 420 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_10:
# 427 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesSacrificeScene
	return


MareS6_Script_UlyssesSacrificeScene::
	return


MareS6_Script_Shinx::
# 453 "data/maps/MareS6/scripts.pory"
	faceplayer
# 455 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SHINX, Common_Movement_ExclamationMark
# 456 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SHINX, CRY_MODE_ENCOUNTER
# 459 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 461 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 462 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 464 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 465 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Shinx_1
	return

MareS6_Script_Shinx_1:
# 466 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 467 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Shinx_3
# 474 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 475 "data/maps/MareS6/scripts.pory"
	closemessage
# 477 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 479 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 480 "data/maps/MareS6/scripts.pory"
	waitse
# 482 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SHINX
# 483 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SHINX, 0, 0
# 484 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SHINX, MOVEMENT_TYPE_INVISIBLE
# 485 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SHINX
# 487 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 488 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 49, 45
# 489 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 490 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 491 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Shinx_8
# 493 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Shinx_9
# 495 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Shinx_10
# 497 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Shinx_11
MareS6_Script_Shinx_11:
# 499 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Shinx_6:
# 501 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 503 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 505 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorRestored
# 506 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 507 "data/maps/MareS6/scripts.pory"
	closemessage
# 509 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 511 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 512 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 0, 0
# 513 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
# 514 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 516 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 518 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SHINXSAILOR
# 520 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Shinx_3:
# 468 "data/maps/MareS6/scripts.pory"
	closemessage
# 469 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Shinx_8:
# 492 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_9:
# 494 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_10:
# 496 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Shinx_6


MareS6_Script_Turtwig::
# 529 "data/maps/MareS6/scripts.pory"
	faceplayer
# 531 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TURTWIG, Common_Movement_ExclamationMark
# 532 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 534 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_ENCOUNTER
# 535 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 537 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
# 538 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 540 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 541 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Turtwig_1
	return

MareS6_Script_Turtwig_1:
# 542 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 543 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Turtwig_3
# 550 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 551 "data/maps/MareS6/scripts.pory"
	closemessage
# 553 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 555 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 556 "data/maps/MareS6/scripts.pory"
	waitse
# 558 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TURTWIG
# 559 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TURTWIG, 0, 0
# 560 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TURTWIG, MOVEMENT_TYPE_INVISIBLE
# 561 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TURTWIG
# 563 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 564 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 52, 46
# 565 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 566 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 567 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Turtwig_8
# 569 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Turtwig_9
# 571 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Turtwig_10
# 573 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Turtwig_11
MareS6_Script_Turtwig_11:
# 575 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Turtwig_6:
# 577 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 579 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 581 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperRestored
# 582 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 583 "data/maps/MareS6/scripts.pory"
	closemessage
# 585 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 587 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 588 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 0, 0
# 589 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
# 590 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 592 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 594 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TURTWIGCAMPER
# 596 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Turtwig_3:
# 544 "data/maps/MareS6/scripts.pory"
	closemessage
# 545 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Turtwig_8:
# 568 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_9:
# 570 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_10:
# 572 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Turtwig_6


MareS6_Script_Torchic::
# 605 "data/maps/MareS6/scripts.pory"
	faceplayer
# 607 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TORCHIC, Common_Movement_ExclamationMark
# 608 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 610 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 611 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 613 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 614 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 616 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 617 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Torchic_1
	return

MareS6_Script_Torchic_1:
# 618 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 619 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Torchic_3
# 626 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 627 "data/maps/MareS6/scripts.pory"
	closemessage
# 629 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 631 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 632 "data/maps/MareS6/scripts.pory"
	waitse
# 634 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TORCHIC
# 635 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TORCHIC, 0, 0
# 636 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TORCHIC, MOVEMENT_TYPE_INVISIBLE
# 637 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TORCHIC
# 639 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 640 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 56, 45
# 641 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 642 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 643 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Torchic_8
# 645 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Torchic_9
# 647 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Torchic_10
# 649 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Torchic_11
MareS6_Script_Torchic_11:
# 651 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Torchic_6:
# 653 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 655 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 657 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_Man3Restored
# 658 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 659 "data/maps/MareS6/scripts.pory"
	closemessage
# 661 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 663 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 664 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 0, 0
# 665 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
# 666 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 668 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 670 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TORCHICMAN3
# 672 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Torchic_3:
# 620 "data/maps/MareS6/scripts.pory"
	closemessage
# 621 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Torchic_8:
# 644 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_9:
# 646 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_10:
# 648 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Torchic_6


MareS6_Script_Snubbull::
# 681 "data/maps/MareS6/scripts.pory"
	faceplayer
# 683 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SNUBBULL, Common_Movement_ExclamationMark
# 684 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 686 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SNUBBULL, CRY_MODE_ENCOUNTER
# 687 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 689 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNUBBULL
# 690 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 692 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 693 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Snubbull_1
	return

MareS6_Script_Snubbull_1:
# 694 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 695 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Snubbull_3
# 702 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 703 "data/maps/MareS6/scripts.pory"
	closemessage
# 705 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 707 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 708 "data/maps/MareS6/scripts.pory"
	waitse
# 710 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SNUBBULL
# 711 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SNUBBULL, 0, 0
# 712 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SNUBBULL, MOVEMENT_TYPE_INVISIBLE
# 713 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SNUBBULL
# 715 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 716 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 58, 43
# 717 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 718 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 719 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Snubbull_8
# 721 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Snubbull_9
# 723 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Snubbull_10
# 725 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Snubbull_11
MareS6_Script_Snubbull_11:
# 727 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Snubbull_6:
# 729 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 731 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 733 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_OldMan2Restored
# 734 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 735 "data/maps/MareS6/scripts.pory"
	closemessage
# 737 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 739 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 740 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 0, 0
# 741 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
# 742 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 744 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 746 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2
# 748 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Snubbull_3:
# 696 "data/maps/MareS6/scripts.pory"
	closemessage
# 697 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Snubbull_8:
# 720 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_9:
# 722 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_10:
# 724 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Snubbull_6


MareS6_Script_Poochyena::
# 757 "data/maps/MareS6/scripts.pory"
	faceplayer
# 759 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_POOCHYENA, Common_Movement_ExclamationMark
# 760 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 762 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 763 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 765 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHYENA
# 766 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 768 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 769 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Poochyena_1
	return

MareS6_Script_Poochyena_1:
# 770 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 771 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Poochyena_3
# 778 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 779 "data/maps/MareS6/scripts.pory"
	closemessage
# 781 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 783 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 784 "data/maps/MareS6/scripts.pory"
	waitse
# 786 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_POOCHYENA
# 787 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_POOCHYENA, 0, 0
# 788 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_POOCHYENA, MOVEMENT_TYPE_INVISIBLE
# 789 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_POOCHYENA
# 791 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 792 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 59, 45
# 793 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 794 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 795 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Poochyena_8
# 797 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Poochyena_9
# 799 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Poochyena_10
# 801 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Poochyena_11
MareS6_Script_Poochyena_11:
# 803 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Poochyena_6:
# 805 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 807 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 809 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerRestored
# 810 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 811 "data/maps/MareS6/scripts.pory"
	closemessage
# 813 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 815 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 816 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 0, 0
# 817 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
# 818 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 820 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 822 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_POOCHYENAHIKER
# 824 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Poochyena_3:
# 772 "data/maps/MareS6/scripts.pory"
	closemessage
# 773 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Poochyena_8:
# 796 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_9:
# 798 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_10:
# 800 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Poochyena_6


MareS6_Script_CheckAllRestored::
# 833 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_Script_CheckAllRestored_4
MareS6_Script_CheckAllRestored_1:
	return

MareS6_Script_CheckAllRestored_2:
# 840 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 12
# 841 "data/maps/MareS6/scripts.pory"
	removeitem ITEM_PINA_FRUIT
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_3:
# 835 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TORCHICMAN3, MareS6_Script_CheckAllRestored_8
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_4:
# 834 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_Script_CheckAllRestored_3
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_7:
# 837 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_Script_CheckAllRestored_2
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_8:
# 836 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2, MareS6_Script_CheckAllRestored_7
	goto MareS6_Script_CheckAllRestored_1


MareS6_Script_AfterPenTrigger::
# 848 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 849 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 851 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 852 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 854 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 855 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 856 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 858 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 859 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAfterPen
# 860 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 861 "data/maps/MareS6/scripts.pory"
	closemessage
# 862 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 863 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 864 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 865 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 866 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 867 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 868 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 13
	end


MareS6_Script_PinaFruitTree::
# 875 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 877 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 883 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 884 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 892 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 894 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 886 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 887 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 888 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 900 "data/maps/MareS6/scripts.pory"
	faceplayer
# 902 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 906 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 911 "data/maps/MareS6/scripts.pory"
	checktrainerflag TRAINER_PINA_FRUIT_FAN
	goto_if 0, MareS6_Script_FruitFan_7
# 916 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_Script_FruitFan_10
# 919 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost2
MareS6_Script_FruitFan_1:
# 923 "data/maps/MareS6/scripts.pory"
	closemessage
# 924 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_FruitFan_2:
# 903 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 907 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_7:
# 912 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPre
# 913 "data/maps/MareS6/scripts.pory"
	closemessage
# 914 "data/maps/MareS6/scripts.pory"
	trainerbattle_no_intro TRAINER_PINA_FRUIT_FAN, MareS6_Text_PinaFruitFanLost
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_10:
# 917 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 931 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 932 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 934 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 935 "data/maps/MareS6/scripts.pory"
	closemessage
# 937 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, IsMonFollower
# 939 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 946 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 947 "data/maps/MareS6/scripts.pory"
	waitse
# 949 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 953 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
# 954 "data/maps/MareS6/scripts.pory"
	dowildbattle
MareS6_Script_HeadbuttTree_4:
# 957 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
# 959 "data/maps/MareS6/scripts.pory"
	releaseall
	end

MareS6_Script_HeadbuttTree_2:
# 940 "data/maps/MareS6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 941 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
# 942 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 943 "data/maps/MareS6/scripts.pory"
	updatefollowingmon
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 950 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 949 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 966 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 967 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 969 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 970 "data/maps/MareS6/scripts.pory"
	waitse
# 972 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 973 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 974 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 975 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 977 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 978 "data/maps/MareS6/scripts.pory"
	closemessage
# 980 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 981 "data/maps/MareS6/scripts.pory"
	closemessage
# 983 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_Sailor::
# 989 "data/maps/MareS6/scripts.pory"
	faceplayer
# 990 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorPostRestored
# 991 "data/maps/MareS6/scripts.pory"
	closemessage
# 992 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Camper::
# 996 "data/maps/MareS6/scripts.pory"
	faceplayer
# 997 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperPostRestored
# 998 "data/maps/MareS6/scripts.pory"
	closemessage
# 999 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Hiker::
# 1003 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1004 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerPostRestored
# 1005 "data/maps/MareS6/scripts.pory"
	closemessage
# 1006 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 243 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 1010 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 1014 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walker\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 1018 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 1022 "data/maps/MareS6/scripts.pory"
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
# 1026 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 1030 "data/maps/MareS6/scripts.pory"
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
# 1046 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 1052 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 1059 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 1063 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 1067 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 1071 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 1075 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 1079 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 1084 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_PinaFruitFanPre::
# 1090 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PinaFruitFanLost::
# 1097 "data/maps/MareS6/scripts.pory"
	.string "You are a villain and you are a thief.$"

MareS6_Text_PinaFruitFanPost::
# 1101 "data/maps/MareS6/scripts.pory"
	.string "Well, now the piña fruit is yours. I hope\n"
	.string "you at least put that rare fruit to\l"
	.string "good use.$"

MareS6_Text_PinaFruitFanPost2::
# 1106 "data/maps/MareS6/scripts.pory"
	.string "Another fruit will grow another day, and\n"
	.string "I will make sure that no one steals it.$"

MareS6_Text_PlayerGaveMoly::
# 1111 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"

MareS6_Text_SailorRestored::
# 1115 "data/maps/MareS6/scripts.pory"
	.string "What terrible dreams I've suffered of\n"
	.string "late! I dreamt my ship had crashed and I\l"
	.string "had washed ashore upon some cursed\l"
	.string "island of Shinx.$"

MareS6_Text_CamperRestored::
# 1121 "data/maps/MareS6/scripts.pory"
	.string "All the merit badges I earned could not\n"
	.string "Save me from Circe's curse. I'm in your\l"
	.string "debt.$"

MareS6_Text_Man3Restored::
# 1126 "data/maps/MareS6/scripts.pory"
	.string "We came to save the town from Circe but\n"
	.string "in the end we ourselves needed saving.$"

MareS6_Text_OldMan2Restored::
# 1131 "data/maps/MareS6/scripts.pory"
	.string "I've lived a long time. Never in my days\n"
	.string "have I seen people turned to Pokemon.$"

MareS6_Text_HikerRestored::
# 1136 "data/maps/MareS6/scripts.pory"
	.string "It feels such a relief to be brought\n"
	.string "back into my old body again. I feared\l"
	.string "I'd be stuck as a Pokemon for good!$"

MareS6_Text_GenericRestored::
# 1142 "data/maps/MareS6/scripts.pory"
	.string "Thank you for saving me. I'm heading\n"
	.string "home!$"

MareS6_Text_UlyssesDuringPen::
# 1146 "data/maps/MareS6/scripts.pory"
	.string "Hurry {PLAYER}! Save them with the\n"
	.string "piña fruit.$"

MareS6_Text_UlyssesAfterPen::
# 1150 "data/maps/MareS6/scripts.pory"
	.string "We did it {PLAYER}! We saved the\n"
	.string "townspeople. Now finally we can depart\l"
	.string "this place, however, even since being\l"
	.string "restored to my human body I feel\l"
	.string "unclean like one who still reeks of the\l"
	.string "witch's curse. I must be purified before\l"
	.string "I set out on the road to Nestor's house\l"
	.string "again. I must appease the powers who\l"
	.string "govern the turbulant seas and the\l"
	.string "endless skies by making sacrifice upon\l"
	.string "the shores. Meet me at the island's\l"
	.string "westernmost point and bring me a\l"
	.string "suitable sacrifice.$"

MareS6_Text_SailorPostRestored::
# 1165 "data/maps/MareS6/scripts.pory"
	.string "It feels so calming to gaze at the sea.\n"
	.string "I had feared I would never get the\l"
	.string "chance to see her again while I had\l"
	.string "been cursed.$"

MareS6_Text_CamperPostRestored::
# 1171 "data/maps/MareS6/scripts.pory"
	.string "I'm glad to be back home. I try to tell\n"
	.string "myself that it was all just a bad dream\l"
	.string "but I have lost that rash, impulsive\l"
	.string "drive to dive headfirst into danger. I\l"
	.string "fear I'll be hesitant if danger returns.$"

MareS6_Text_HikerPostRestored::
# 1179 "data/maps/MareS6/scripts.pory"
	.string "They say the air gets thinner as you\n"
	.string "climb. That may be true, but one thing is\l"
	.string "for sure. Climbing brings peace of mind,\l"
	.string "and heals all hurts.$"

MareS6_Text_UlyssesShadesIntro1::
# 1185 "data/maps/MareS6/scripts.pory"
	.string "$"

MareS6_Text_UlyssesShadesIntro2::
# 1189 "data/maps/MareS6/scripts.pory"
	.string "$"

MareS6_Text_UlyssesBringSacrifice::
# 1193 "data/maps/MareS6/scripts.pory"
	.string "$"

MareS6_Text_SacrificeNotValid::
# 1197 "data/maps/MareS6/scripts.pory"
	.string "$"
