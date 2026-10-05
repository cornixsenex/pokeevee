MareS6_MapScripts::
# 18 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 70 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS6_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6_F
# 21 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 24 "data/maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 26 "data/maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 28 "data/maps/MareS6/scripts.pory"
	case 4, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 32 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 36 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 5
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 40 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 6
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 44 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 10
	goto_if_gt MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 48 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 54 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 58 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_28
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 64 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 23 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 29 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 33 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesWithFisherman
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 37 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 41 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 45 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInPen
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 44 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 49 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesShades
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 55 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowSailorRestored
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
# 59 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowCamperRestored
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 65 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowHikerRestored
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD:
# 72 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2
MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 76 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_lt MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 73 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowMolyFruit
	goto MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 77 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_LockCirceDoor
	return


MareS6_Script_Transition_IslaPina::
# 84 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 85 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 86 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 90 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 91 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 92 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 96 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 97 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 98 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 103 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 104 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 105 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 109 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 110 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 112 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 117 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 118 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 123 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 124 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesInPen::
# 129 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 58, 40
# 130 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowUlyssesShades::
# 135 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 13, 65
# 136 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowSailorRestored::
# 142 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 77, 59
# 143 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	return


MareS6_Script_ShowCamperRestored::
# 148 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 76, 71
# 149 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowHikerRestored::
# 154 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 53, 67
# 155 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
	return


MareS6_Script_ShowMolyFruit::
# 160 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmFruitL, FALSE
# 161 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmFruitC, FALSE
# 162 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmFruitR, FALSE
	return


MareS6_Script_LockCirceDoor::
# 167 "data/maps/MareS6/scripts.pory"
	setmetatile 63, 42, METATILE_General_Door, TRUE
	return


MareS6_Script_Fisherman::
# 172 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 174 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 179 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 184 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 190 "data/maps/MareS6/scripts.pory"
	faceplayer
# 191 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 193 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 194 "data/maps/MareS6/scripts.pory"
	closemessage
# 195 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 175 "data/maps/MareS6/scripts.pory"
	faceplayer
# 176 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 180 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 181 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 185 "data/maps/MareS6/scripts.pory"
	faceplayer
# 186 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 201 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_2
MareS6_Script_Ulysses_1:
# 205 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 11
	goto_if_eq MareS6_Script_Ulysses_5
MareS6_Script_Ulysses_4:
# 209 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_eq MareS6_Script_Ulysses_8
MareS6_Script_Ulysses_7:
# 213 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_eq MareS6_Script_Ulysses_10
	return

MareS6_Script_Ulysses_2:
# 202 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Ulysses_1

MareS6_Script_Ulysses_5:
# 206 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesDuringPen
	goto MareS6_Script_Ulysses_4

MareS6_Script_Ulysses_8:
# 210 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAfterPen
	goto MareS6_Script_Ulysses_7

MareS6_Script_Ulysses_10:
# 214 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesShades
	return


MareS6_Script_UlyssesEtFishermanScene::
# 220 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 221 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 223 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 224 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 225 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 226 "data/maps/MareS6/scripts.pory"
	closemessage
# 228 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 229 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 231 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 238 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 239 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 241 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 244 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 245 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 232 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 233 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 234 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 235 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 248 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 250 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 251 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 252 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 253 "data/maps/MareS6/scripts.pory"
	closemessage
# 255 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 256 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 260 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 261 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 262 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 263 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 265 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 266 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 267 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 269 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 270 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 272 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 240 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 242 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 257 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 258 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 278 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 279 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 280 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 284 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 285 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 286 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 290 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 291 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 292 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 296 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 297 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 298 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 299 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 300 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 301 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 302 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 303 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 304 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 305 "data/maps/MareS6/scripts.pory"
	closemessage
# 307 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 308 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 310 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 311 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 312 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 314 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 320 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 321 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 322 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 326 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 327 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 328 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 332 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 333 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 334 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 335 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 336 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 337 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 338 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 339 "data/maps/MareS6/scripts.pory"
	closemessage
# 341 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 342 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 344 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 345 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 346 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 347 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 348 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 349 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 350 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 351 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 352 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 353 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 354 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 355 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 356 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 357 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 359 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_UlyssesDuringPen::
# 365 "data/maps/MareS6/scripts.pory"
	faceplayer
# 366 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 367 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesDuringPen
# 368 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 369 "data/maps/MareS6/scripts.pory"
	closemessage
# 370 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end


MareS6_Script_UlyssesAfterPen::
# 375 "data/maps/MareS6/scripts.pory"
	faceplayer
# 376 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 377 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAfterPen
# 378 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 379 "data/maps/MareS6/scripts.pory"
	closemessage
# 380 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 381 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq MareS6_Script_UlyssesAfterPen_2
MareS6_Script_UlyssesAfterPen_1:
# 385 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight2
# 386 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 387 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 388 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 389 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 390 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 391 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 13
	end

MareS6_Script_UlyssesAfterPen_2:
# 382 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 383 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesAfterPen_1


MareS6_Script_UlyssesShades::
# 397 "data/maps/MareS6/scripts.pory"
	goto_if_unset FLAG_ULYSSES_SHADES_INTROD, MareS6_Script_UlyssesShades_2
# 403 "data/maps/MareS6/scripts.pory"
	faceplayer
# 404 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 405 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesShadesIntro3
MareS6_Script_UlyssesShades_1:
# 409 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesBringSacrifice, MSGBOX_YESNO
# 410 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_UlyssesShades_5
# 447 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice
# 448 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 449 "data/maps/MareS6/scripts.pory"
	closemessage
# 450 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 451 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_2:
# 398 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 399 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesShadesIntro1
# 400 "data/maps/MareS6/scripts.pory"
	faceplayer
# 401 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesShadesIntro2
	goto MareS6_Script_UlyssesShades_1

MareS6_Script_UlyssesShades_5:
# 411 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 412 "data/maps/MareS6/scripts.pory"
	closemessage
# 413 "data/maps/MareS6/scripts.pory"
	special ChoosePartyMon
# 415 "data/maps/MareS6/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MareS6_Script_UlyssesShades_8
# 425 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckSelectedMonValidSacrifice
# 427 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_UlyssesShades_11
# 432 "data/maps/MareS6/scripts.pory"
	special BufferMonNickname
# 433 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 434 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SacrificeNotValid
# 435 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice
# 436 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 437 "data/maps/MareS6/scripts.pory"
	closemessage
# 439 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 440 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_8:
# 416 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 417 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice, MSGBOX_DEFAULT
# 418 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 419 "data/maps/MareS6/scripts.pory"
	closemessage
# 420 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 421 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_11:
# 428 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesSacrificeScene
	return


MareS6_Script_UlyssesSacrificeScene::
# 457 "data/maps/MareS6/scripts.pory"
	special BufferMonNickname
# 458 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GiveSacrifice
# 459 "data/maps/MareS6/scripts.pory"
	special ReleaseChosenMon
# 460 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 461 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice1
# 462 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 463 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 464 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice2
# 465 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 466 "data/maps/MareS6/scripts.pory"
	closemessage
# 467 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 468 "data/maps/MareS6/scripts.pory"
	delay 60
# 469 "data/maps/MareS6/scripts.pory"
	playse SE_M_DIVE
# 470 "data/maps/MareS6/scripts.pory"
	delay 120
# 471 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 472 "data/maps/MareS6/scripts.pory"
	faceplayer
# 473 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice3
# 474 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 475 "data/maps/MareS6/scripts.pory"
	closemessage
# 477 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 478 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq MareS6_Script_UlyssesSacrificeScene_2
# 483 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 484 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 485 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
MareS6_Script_UlyssesSacrificeScene_1:
# 487 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 488 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown2
# 489 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 490 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight4
# 491 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 492 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 493 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 494 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight3
# 495 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 498 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 499 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 500 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 502 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 14
	end

MareS6_Script_UlyssesSacrificeScene_2:
# 479 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 480 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 481 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
	goto MareS6_Script_UlyssesSacrificeScene_1


MareS6_Script_Shinx::
# 511 "data/maps/MareS6/scripts.pory"
	faceplayer
# 513 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SHINX, Common_Movement_ExclamationMark
# 514 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 516 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SHINX, CRY_MODE_ENCOUNTER
# 517 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 519 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 520 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 522 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 523 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Shinx_1
	return

MareS6_Script_Shinx_1:
# 524 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 525 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Shinx_3
# 532 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 533 "data/maps/MareS6/scripts.pory"
	closemessage
# 535 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 537 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 538 "data/maps/MareS6/scripts.pory"
	waitse
# 540 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SHINX
# 541 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SHINX, 0, 0
# 542 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SHINX, MOVEMENT_TYPE_INVISIBLE
# 543 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SHINX
# 545 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 546 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 49, 45
# 547 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 548 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 549 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Shinx_8
# 551 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Shinx_9
# 553 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Shinx_10
# 555 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Shinx_11
MareS6_Script_Shinx_11:
# 557 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Shinx_6:
# 559 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 561 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 563 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorRestored
# 564 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 565 "data/maps/MareS6/scripts.pory"
	closemessage
# 567 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 569 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 570 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 0, 0
# 571 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
# 572 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 574 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 576 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SHINXSAILOR
# 578 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Shinx_3:
# 526 "data/maps/MareS6/scripts.pory"
	closemessage
# 527 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Shinx_8:
# 550 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_9:
# 552 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_10:
# 554 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Shinx_6


MareS6_Script_Turtwig::
# 587 "data/maps/MareS6/scripts.pory"
	faceplayer
# 589 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TURTWIG, Common_Movement_ExclamationMark
# 590 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 592 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_ENCOUNTER
# 593 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 595 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
# 596 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 598 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 599 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Turtwig_1
	return

MareS6_Script_Turtwig_1:
# 600 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 601 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Turtwig_3
# 608 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 609 "data/maps/MareS6/scripts.pory"
	closemessage
# 611 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 613 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 614 "data/maps/MareS6/scripts.pory"
	waitse
# 616 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TURTWIG
# 617 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TURTWIG, 0, 0
# 618 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TURTWIG, MOVEMENT_TYPE_INVISIBLE
# 619 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TURTWIG
# 621 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 622 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 52, 46
# 623 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 624 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 625 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Turtwig_8
# 627 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Turtwig_9
# 629 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Turtwig_10
# 631 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Turtwig_11
MareS6_Script_Turtwig_11:
# 633 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Turtwig_6:
# 635 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 637 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 639 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperRestored
# 640 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 641 "data/maps/MareS6/scripts.pory"
	closemessage
# 643 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 645 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 646 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 0, 0
# 647 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
# 648 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 650 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 652 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TURTWIGCAMPER
# 654 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Turtwig_3:
# 602 "data/maps/MareS6/scripts.pory"
	closemessage
# 603 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Turtwig_8:
# 626 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_9:
# 628 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_10:
# 630 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Turtwig_6


MareS6_Script_Torchic::
# 663 "data/maps/MareS6/scripts.pory"
	faceplayer
# 665 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TORCHIC, Common_Movement_ExclamationMark
# 666 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 668 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 669 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 671 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 672 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 674 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 675 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Torchic_1
	return

MareS6_Script_Torchic_1:
# 676 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 677 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Torchic_3
# 684 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 685 "data/maps/MareS6/scripts.pory"
	closemessage
# 687 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 689 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 690 "data/maps/MareS6/scripts.pory"
	waitse
# 692 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TORCHIC
# 693 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TORCHIC, 0, 0
# 694 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TORCHIC, MOVEMENT_TYPE_INVISIBLE
# 695 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TORCHIC
# 697 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 698 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 56, 45
# 699 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 700 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 701 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Torchic_8
# 703 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Torchic_9
# 705 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Torchic_10
# 707 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Torchic_11
MareS6_Script_Torchic_11:
# 709 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Torchic_6:
# 711 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 713 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 715 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_Man3Restored
# 716 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 717 "data/maps/MareS6/scripts.pory"
	closemessage
# 719 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 721 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 722 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 0, 0
# 723 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
# 724 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 726 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 728 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TORCHICMAN3
# 730 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Torchic_3:
# 678 "data/maps/MareS6/scripts.pory"
	closemessage
# 679 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Torchic_8:
# 702 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_9:
# 704 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_10:
# 706 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Torchic_6


MareS6_Script_Snubbull::
# 739 "data/maps/MareS6/scripts.pory"
	faceplayer
# 741 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SNUBBULL, Common_Movement_ExclamationMark
# 742 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 744 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SNUBBULL, CRY_MODE_ENCOUNTER
# 745 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 747 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNUBBULL
# 748 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 750 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 751 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Snubbull_1
	return

MareS6_Script_Snubbull_1:
# 752 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 753 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Snubbull_3
# 760 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 761 "data/maps/MareS6/scripts.pory"
	closemessage
# 763 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 765 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 766 "data/maps/MareS6/scripts.pory"
	waitse
# 768 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SNUBBULL
# 769 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SNUBBULL, 0, 0
# 770 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SNUBBULL, MOVEMENT_TYPE_INVISIBLE
# 771 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SNUBBULL
# 773 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 774 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 58, 43
# 775 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 776 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 777 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Snubbull_8
# 779 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Snubbull_9
# 781 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Snubbull_10
# 783 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Snubbull_11
MareS6_Script_Snubbull_11:
# 785 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Snubbull_6:
# 787 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 789 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 791 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_OldMan2Restored
# 792 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 793 "data/maps/MareS6/scripts.pory"
	closemessage
# 795 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 797 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 798 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 0, 0
# 799 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
# 800 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 802 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 804 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2
# 806 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Snubbull_3:
# 754 "data/maps/MareS6/scripts.pory"
	closemessage
# 755 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Snubbull_8:
# 778 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_9:
# 780 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_10:
# 782 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Snubbull_6


MareS6_Script_Poochyena::
# 815 "data/maps/MareS6/scripts.pory"
	faceplayer
# 817 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_POOCHYENA, Common_Movement_ExclamationMark
# 818 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 820 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 821 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 823 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHYENA
# 824 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 826 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 827 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Poochyena_1
	return

MareS6_Script_Poochyena_1:
# 828 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 829 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Poochyena_3
# 836 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 837 "data/maps/MareS6/scripts.pory"
	closemessage
# 839 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 841 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 842 "data/maps/MareS6/scripts.pory"
	waitse
# 844 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_POOCHYENA
# 845 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_POOCHYENA, 0, 0
# 846 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_POOCHYENA, MOVEMENT_TYPE_INVISIBLE
# 847 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_POOCHYENA
# 849 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 850 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 59, 45
# 851 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 852 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 853 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Poochyena_8
# 855 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Poochyena_9
# 857 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Poochyena_10
# 859 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Poochyena_11
MareS6_Script_Poochyena_11:
# 861 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Poochyena_6:
# 863 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 865 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 867 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerRestored
# 868 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 869 "data/maps/MareS6/scripts.pory"
	closemessage
# 871 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 873 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 874 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 0, 0
# 875 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
# 876 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 878 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 880 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_POOCHYENAHIKER
# 882 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Poochyena_3:
# 830 "data/maps/MareS6/scripts.pory"
	closemessage
# 831 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Poochyena_8:
# 854 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_9:
# 856 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_10:
# 858 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Poochyena_6


MareS6_Script_CheckAllRestored::
# 891 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_Script_CheckAllRestored_4
MareS6_Script_CheckAllRestored_1:
	return

MareS6_Script_CheckAllRestored_2:
# 898 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 12
# 899 "data/maps/MareS6/scripts.pory"
	removeitem ITEM_PINA_FRUIT
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_3:
# 893 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TORCHICMAN3, MareS6_Script_CheckAllRestored_8
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_4:
# 892 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_Script_CheckAllRestored_3
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_7:
# 895 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_Script_CheckAllRestored_2
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_8:
# 894 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2, MareS6_Script_CheckAllRestored_7
	goto MareS6_Script_CheckAllRestored_1


MareS6_Script_AfterPenTrigger::
# 906 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 907 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 909 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 910 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 912 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 913 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 914 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 916 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 917 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAfterPen
# 918 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 919 "data/maps/MareS6/scripts.pory"
	closemessage
# 920 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 921 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 922 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 923 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 924 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 925 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 926 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 13
	end


MareS6_Script_PinaFruitTree::
# 933 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 935 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 941 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 942 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 950 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 952 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 944 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 945 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 946 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 958 "data/maps/MareS6/scripts.pory"
	faceplayer
# 960 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 964 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 969 "data/maps/MareS6/scripts.pory"
	checktrainerflag TRAINER_PINA_FRUIT_FAN
	goto_if 0, MareS6_Script_FruitFan_7
# 974 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_Script_FruitFan_10
# 977 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost2
MareS6_Script_FruitFan_1:
# 981 "data/maps/MareS6/scripts.pory"
	closemessage
# 982 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_FruitFan_2:
# 961 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 965 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_7:
# 970 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPre
# 971 "data/maps/MareS6/scripts.pory"
	closemessage
# 972 "data/maps/MareS6/scripts.pory"
	trainerbattle_no_intro TRAINER_PINA_FRUIT_FAN, MareS6_Text_PinaFruitFanLost
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_10:
# 975 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 989 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 990 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 992 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 993 "data/maps/MareS6/scripts.pory"
	closemessage
# 995 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, IsMonFollower
# 997 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 1004 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 1005 "data/maps/MareS6/scripts.pory"
	waitse
# 1007 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 1011 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
# 1012 "data/maps/MareS6/scripts.pory"
	dowildbattle
MareS6_Script_HeadbuttTree_4:
# 1015 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
# 1017 "data/maps/MareS6/scripts.pory"
	releaseall
	end

MareS6_Script_HeadbuttTree_2:
# 998 "data/maps/MareS6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 999 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
# 1000 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1001 "data/maps/MareS6/scripts.pory"
	updatefollowingmon
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 1008 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 1007 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 1024 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1025 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 1027 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 1028 "data/maps/MareS6/scripts.pory"
	waitse
# 1030 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 1031 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 1032 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 1033 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 1035 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 1036 "data/maps/MareS6/scripts.pory"
	closemessage
# 1038 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 1039 "data/maps/MareS6/scripts.pory"
	closemessage
# 1041 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_Sailor::
# 1047 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1048 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorPostRestored
# 1049 "data/maps/MareS6/scripts.pory"
	closemessage
# 1050 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Camper::
# 1054 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1055 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperPostRestored
# 1056 "data/maps/MareS6/scripts.pory"
	closemessage
# 1057 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Hiker::
# 1061 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1062 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerPostRestored
# 1063 "data/maps/MareS6/scripts.pory"
	closemessage
# 1064 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 244 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 1068 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 1072 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walker\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 1076 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 1080 "data/maps/MareS6/scripts.pory"
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
# 1084 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 1088 "data/maps/MareS6/scripts.pory"
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
# 1104 "data/maps/MareS6/scripts.pory"
	.string "This jungle is more dangerous than I\n"
	.string "had expected, but we cannot turn back.\l"
	.string "Let's muscle our way to the witch's lair!$"

MareS6_Text_UlyssesAntePortam::
# 1110 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 1117 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 1121 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 1125 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 1129 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 1133 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 1137 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 1142 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_PinaFruitFanPre::
# 1148 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PinaFruitFanLost::
# 1155 "data/maps/MareS6/scripts.pory"
	.string "You are a villain and you are a thief.$"

MareS6_Text_PinaFruitFanPost::
# 1159 "data/maps/MareS6/scripts.pory"
	.string "Well, now the piña fruit is yours. I hope\n"
	.string "you at least put that rare fruit to\l"
	.string "good use.$"

MareS6_Text_PinaFruitFanPost2::
# 1164 "data/maps/MareS6/scripts.pory"
	.string "Another fruit will grow another day, and\n"
	.string "I will make sure that no one steals it.$"

MareS6_Text_PlayerGaveMoly::
# 1169 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"

MareS6_Text_SailorRestored::
# 1173 "data/maps/MareS6/scripts.pory"
	.string "What terrible dreams I've suffered of\n"
	.string "late! I dreamt my ship had crashed and I\l"
	.string "had washed ashore upon some cursed\l"
	.string "island of Shinx.$"

MareS6_Text_CamperRestored::
# 1179 "data/maps/MareS6/scripts.pory"
	.string "All the merit badges I earned could not\n"
	.string "Save me from Circe's curse. I'm in your\l"
	.string "debt.$"

MareS6_Text_Man3Restored::
# 1184 "data/maps/MareS6/scripts.pory"
	.string "We came to save the town from Circe but\n"
	.string "in the end we ourselves needed saving.$"

MareS6_Text_OldMan2Restored::
# 1189 "data/maps/MareS6/scripts.pory"
	.string "I've lived a long time. Never in my days\n"
	.string "have I seen people turned to Pokemon.$"

MareS6_Text_HikerRestored::
# 1194 "data/maps/MareS6/scripts.pory"
	.string "It feels such a relief to be brought\n"
	.string "back into my old body again. I feared\l"
	.string "I'd be stuck as a Pokemon for good!$"

MareS6_Text_GenericRestored::
# 1200 "data/maps/MareS6/scripts.pory"
	.string "Thank you for saving me. I'm heading\n"
	.string "home!$"

MareS6_Text_UlyssesDuringPen::
# 1204 "data/maps/MareS6/scripts.pory"
	.string "Hurry {PLAYER}! Save them with the\n"
	.string "piña fruit.$"

MareS6_Text_UlyssesAfterPen::
# 1208 "data/maps/MareS6/scripts.pory"
	.string "We did it {PLAYER}! We saved the\n"
	.string "townspeople. Now finally we can depart\l"
	.string "this place, however, even since being\l"
	.string "restored to my human body I feel\l"
	.string "unclean like one who still reeks of the\l"
	.string "witch's curse. I must be purified before\l"
	.string "I set out on the road to Nestor's house\l"
	.string "again. I must appease the powers who\l"
	.string "govern the turbulent seas and the\l"
	.string "endless skies by making sacrifice upon\l"
	.string "the shores. Meet me at the island's\l"
	.string "westernmost point and bring me a\l"
	.string "suitable sacrifice.$"

MareS6_Text_SailorPostRestored::
# 1223 "data/maps/MareS6/scripts.pory"
	.string "It feels so calming to gaze at the sea.\n"
	.string "I had feared I would never get the\l"
	.string "chance to see her again while I had\l"
	.string "been cursed.$"

MareS6_Text_CamperPostRestored::
# 1229 "data/maps/MareS6/scripts.pory"
	.string "I'm glad to be back home. I try to tell\n"
	.string "myself that it was all just a bad dream\l"
	.string "but I have lost that rash, impulsive\l"
	.string "drive to dive headfirst into danger. I\l"
	.string "fear I'll be hesitant if danger returns.$"

MareS6_Text_HikerPostRestored::
# 1237 "data/maps/MareS6/scripts.pory"
	.string "They say the air gets thinner as you\n"
	.string "climb. That may be true, but one thing is\l"
	.string "for sure. Climbing brings peace of mind,\l"
	.string "and heals all hurts.$"

MareS6_Text_UlyssesShadesIntro1::
# 1243 "data/maps/MareS6/scripts.pory"
	.string "The western sea, the boundary between\n"
	.string "this living world of men, and the\l"
	.string "unknown, undying lands where the sun\l"
	.string "never sets.$"

MareS6_Text_UlyssesShadesIntro2::
# 1249 "data/maps/MareS6/scripts.pory"
	.string "I fear my passage to those western\n"
	.string "shores we all must reach, after our\l"
	.string "lives are done, will be hindered by my\l"
	.string "accursed soul. I must make myself clean\l"
	.string "from suffering under the witch's curse\l"
	.string "with sacrifice.$"

MareS6_Text_UlyssesShadesIntro3::
# 1257 "data/maps/MareS6/scripts.pory"
	.string "Oh, {PLAYER}! I'm glad you didn't\n"
	.string "forget me.$"

MareS6_Text_UlyssesBringSacrifice::
# 1261 "data/maps/MareS6/scripts.pory"
	.string "Did you bring me something to\n"
	.string "sacrifice?$"

MareS6_Text_NoToSacrifice::
# 1265 "data/maps/MareS6/scripts.pory"
	.string "You must bring me a Pokemon to throw\n"
	.string "into the ocean to please the powers who\l"
	.string "guard the way to the undying lands from\l"
	.string "those who have impure souls, like\l"
	.string "myself. Until then I will remain on these\l"
	.string "shores, I will not leave until I've\l"
	.string "sacrificed.$"

MareS6_Text_SacrificeNotValid::
# 1274 "data/maps/MareS6/scripts.pory"
	.string "I'm sorry, {PLAYER}, but\n"
	.string "{STR_VAR_1} is not a proper Pokemon\l"
	.string "to sacrifice.$"

MareS6_Text_GiveSacrifice::
# 1278 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} to\n"
	.string "Ulysses!\p"
	.string "Bye Bye {STR_VAR_1}!$"

MareS6_Text_UlyssesSacrifice1::
# 1282 "data/maps/MareS6/scripts.pory"
	.string "Yes, perfect, {STR_VAR_1} will make\n"
	.string "an excellent sacrifice.$"

MareS6_Text_UlyssesSacrifice2::
# 1286 "data/maps/MareS6/scripts.pory"
	.string "Now hear me, you powers beyond the sea,\n"
	.string "Ulysses, ever your faithful servant,\l"
	.string "have brought you {STR_VAR_1} and\l"
	.string "offer you it's life in exchange for your\l"
	.string "purification of my soul, recently\l"
	.string "tormented by the evil witch's curse.\l"
	.string "{STR_VAR_1}! I cast you into the\l"
	.string "sea! May your death be pleasing to\l"
	.string "those who guard the westward path to\l"
	.string "the undying lands.$"

MareS6_Text_UlyssesSacrifice3::
# 1297 "data/maps/MareS6/scripts.pory"
	.string "It is done, let us be gone from this\n"
	.string "place. I am quite ready to set sail again\l"
	.string "and, at long last, arrive at Nestor's\l"
	.string "home to attend my brother's joyous\l"
	.string "wedding.$"
