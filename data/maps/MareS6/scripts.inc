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
# 448 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice
# 449 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 450 "data/maps/MareS6/scripts.pory"
	closemessage
# 451 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 452 "data/maps/MareS6/scripts.pory"
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
# 414 "data/maps/MareS6/scripts.pory"
	waitstate
# 416 "data/maps/MareS6/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MareS6_Script_UlyssesShades_8
# 426 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckSelectedMonValidSacrifice
# 428 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_UlyssesShades_11
# 433 "data/maps/MareS6/scripts.pory"
	special BufferMonNickname
# 434 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 435 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SacrificeNotValid
# 436 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice
# 437 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 438 "data/maps/MareS6/scripts.pory"
	closemessage
# 440 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 441 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_8:
# 417 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 418 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_NoToSacrifice, MSGBOX_DEFAULT
# 419 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 420 "data/maps/MareS6/scripts.pory"
	closemessage
# 421 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 422 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	end

MareS6_Script_UlyssesShades_11:
# 429 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesSacrificeScene
	return


MareS6_Script_UlyssesSacrificeScene::
# 458 "data/maps/MareS6/scripts.pory"
	special BufferMonNickname
# 459 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GiveSacrifice
# 460 "data/maps/MareS6/scripts.pory"
	special ReleaseChosenMon
# 461 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 462 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice1
# 463 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 464 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 465 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice2
# 466 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 467 "data/maps/MareS6/scripts.pory"
	closemessage
# 468 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 469 "data/maps/MareS6/scripts.pory"
	delay 60
# 470 "data/maps/MareS6/scripts.pory"
	playse SE_M_DIVE
# 471 "data/maps/MareS6/scripts.pory"
	delay 120
# 472 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 473 "data/maps/MareS6/scripts.pory"
	faceplayer
# 474 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesSacrifice3
# 475 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 476 "data/maps/MareS6/scripts.pory"
	closemessage
# 478 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 479 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq MareS6_Script_UlyssesSacrificeScene_2
# 484 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 485 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 486 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
MareS6_Script_UlyssesSacrificeScene_1:
# 488 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 489 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown2
# 490 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 491 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight4
# 492 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 493 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 494 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 495 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight3
# 496 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 498 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 499 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 500 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 501 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 503 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 14
	end

MareS6_Script_UlyssesSacrificeScene_2:
# 480 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown
# 481 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 482 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
	goto MareS6_Script_UlyssesSacrificeScene_1


MareS6_Script_Shinx::
# 512 "data/maps/MareS6/scripts.pory"
	faceplayer
# 514 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SHINX, Common_Movement_ExclamationMark
# 515 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 517 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SHINX, CRY_MODE_ENCOUNTER
# 518 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 520 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 521 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 523 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 524 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Shinx_1
	return

MareS6_Script_Shinx_1:
# 525 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 526 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Shinx_3
# 533 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 534 "data/maps/MareS6/scripts.pory"
	closemessage
# 536 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 538 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 539 "data/maps/MareS6/scripts.pory"
	waitse
# 541 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SHINX
# 542 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SHINX, 0, 0
# 543 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SHINX, MOVEMENT_TYPE_INVISIBLE
# 544 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SHINX
# 546 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 547 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 49, 45
# 548 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 549 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 550 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Shinx_8
# 552 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Shinx_9
# 554 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Shinx_10
# 556 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Shinx_11
MareS6_Script_Shinx_11:
# 558 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Shinx_6:
# 560 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 562 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 564 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorRestored
# 565 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 566 "data/maps/MareS6/scripts.pory"
	closemessage
# 568 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 570 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SAILOR
# 571 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SAILOR, 0, 0
# 572 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
# 573 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SAILOR
# 575 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 577 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SHINXSAILOR
# 579 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Shinx_3:
# 527 "data/maps/MareS6/scripts.pory"
	closemessage
# 528 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Shinx_8:
# 551 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_9:
# 553 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Shinx_6

MareS6_Script_Shinx_10:
# 555 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Shinx_6


MareS6_Script_Turtwig::
# 588 "data/maps/MareS6/scripts.pory"
	faceplayer
# 590 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TURTWIG, Common_Movement_ExclamationMark
# 591 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 593 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_ENCOUNTER
# 594 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 596 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
# 597 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 599 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 600 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Turtwig_1
	return

MareS6_Script_Turtwig_1:
# 601 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 602 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Turtwig_3
# 609 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 610 "data/maps/MareS6/scripts.pory"
	closemessage
# 612 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 614 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 615 "data/maps/MareS6/scripts.pory"
	waitse
# 617 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TURTWIG
# 618 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TURTWIG, 0, 0
# 619 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TURTWIG, MOVEMENT_TYPE_INVISIBLE
# 620 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TURTWIG
# 622 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 623 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 52, 46
# 624 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 625 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 626 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Turtwig_8
# 628 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Turtwig_9
# 630 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Turtwig_10
# 632 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Turtwig_11
MareS6_Script_Turtwig_11:
# 634 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Turtwig_6:
# 636 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 638 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 640 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperRestored
# 641 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 642 "data/maps/MareS6/scripts.pory"
	closemessage
# 644 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 646 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_CAMPER
# 647 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_CAMPER, 0, 0
# 648 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
# 649 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_CAMPER
# 651 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 653 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TURTWIGCAMPER
# 655 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Turtwig_3:
# 603 "data/maps/MareS6/scripts.pory"
	closemessage
# 604 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Turtwig_8:
# 627 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_9:
# 629 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Turtwig_6

MareS6_Script_Turtwig_10:
# 631 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_CAMPER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Turtwig_6


MareS6_Script_Torchic::
# 664 "data/maps/MareS6/scripts.pory"
	faceplayer
# 666 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_TORCHIC, Common_Movement_ExclamationMark
# 667 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 669 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_ENCOUNTER
# 670 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 672 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TORCHIC
# 673 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 675 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 676 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Torchic_1
	return

MareS6_Script_Torchic_1:
# 677 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 678 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Torchic_3
# 685 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 686 "data/maps/MareS6/scripts.pory"
	closemessage
# 688 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 690 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 691 "data/maps/MareS6/scripts.pory"
	waitse
# 693 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_TORCHIC
# 694 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_TORCHIC, 0, 0
# 695 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_TORCHIC, MOVEMENT_TYPE_INVISIBLE
# 696 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_TORCHIC
# 698 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 699 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 56, 45
# 700 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 701 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 702 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Torchic_8
# 704 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Torchic_9
# 706 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Torchic_10
# 708 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Torchic_11
MareS6_Script_Torchic_11:
# 710 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Torchic_6:
# 712 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 714 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 716 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_Man3Restored
# 717 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 718 "data/maps/MareS6/scripts.pory"
	closemessage
# 720 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 722 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_MAN3
# 723 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_MAN3, 0, 0
# 724 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
# 725 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_MAN3
# 727 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 729 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_TORCHICMAN3
# 731 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Torchic_3:
# 679 "data/maps/MareS6/scripts.pory"
	closemessage
# 680 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Torchic_8:
# 703 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_9:
# 705 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Torchic_6

MareS6_Script_Torchic_10:
# 707 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_MAN3, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Torchic_6


MareS6_Script_Snubbull::
# 740 "data/maps/MareS6/scripts.pory"
	faceplayer
# 742 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_SNUBBULL, Common_Movement_ExclamationMark
# 743 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 745 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_SNUBBULL, CRY_MODE_ENCOUNTER
# 746 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 748 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SNUBBULL
# 749 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 751 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 752 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Snubbull_1
	return

MareS6_Script_Snubbull_1:
# 753 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 754 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Snubbull_3
# 761 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 762 "data/maps/MareS6/scripts.pory"
	closemessage
# 764 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 766 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 767 "data/maps/MareS6/scripts.pory"
	waitse
# 769 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_SNUBBULL
# 770 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_SNUBBULL, 0, 0
# 771 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_SNUBBULL, MOVEMENT_TYPE_INVISIBLE
# 772 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_SNUBBULL
# 774 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 775 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 58, 43
# 776 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 777 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 778 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Snubbull_8
# 780 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Snubbull_9
# 782 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Snubbull_10
# 784 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Snubbull_11
MareS6_Script_Snubbull_11:
# 786 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Snubbull_6:
# 788 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 790 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 792 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_OldMan2Restored
# 793 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 794 "data/maps/MareS6/scripts.pory"
	closemessage
# 796 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 798 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_OLDMAN2
# 799 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_OLDMAN2, 0, 0
# 800 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
# 801 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_OLDMAN2
# 803 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 805 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2
# 807 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Snubbull_3:
# 755 "data/maps/MareS6/scripts.pory"
	closemessage
# 756 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Snubbull_8:
# 779 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_9:
# 781 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Snubbull_6

MareS6_Script_Snubbull_10:
# 783 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_OLDMAN2, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Snubbull_6


MareS6_Script_Poochyena::
# 816 "data/maps/MareS6/scripts.pory"
	faceplayer
# 818 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_POOCHYENA, Common_Movement_ExclamationMark
# 819 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 821 "data/maps/MareS6/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 822 "data/maps/MareS6/scripts.pory"
	waitmoncry
# 824 "data/maps/MareS6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_POOCHYENA
# 825 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 827 "data/maps/MareS6/scripts.pory"
	checkitem ITEM_PINA_FRUIT
# 828 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_Poochyena_1
	return

MareS6_Script_Poochyena_1:
# 829 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 830 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MareS6_Script_Poochyena_3
# 837 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
# 838 "data/maps/MareS6/scripts.pory"
	closemessage
# 840 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 842 "data/maps/MareS6/scripts.pory"
	playse MUS_HEAL
# 843 "data/maps/MareS6/scripts.pory"
	waitse
# 845 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_POOCHYENA
# 846 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_POOCHYENA, 0, 0
# 847 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_POOCHYENA, MOVEMENT_TYPE_INVISIBLE
# 848 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_POOCHYENA
# 850 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 851 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 59, 45
# 852 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 853 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 854 "data/maps/MareS6/scripts.pory"
	case DIR_SOUTH, MareS6_Script_Poochyena_8
# 856 "data/maps/MareS6/scripts.pory"
	case DIR_EAST, MareS6_Script_Poochyena_9
# 858 "data/maps/MareS6/scripts.pory"
	case DIR_WEST, MareS6_Script_Poochyena_10
# 860 "data/maps/MareS6/scripts.pory"
	case DIR_NORTH, MareS6_Script_Poochyena_11
MareS6_Script_Poochyena_11:
# 862 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_DOWN
MareS6_Script_Poochyena_6:
# 864 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 866 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 868 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerRestored
# 869 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_GenericRestored
# 870 "data/maps/MareS6/scripts.pory"
	closemessage
# 872 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 874 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_HIKER
# 875 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_HIKER, 0, 0
# 876 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
# 877 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_HIKER
# 879 "data/maps/MareS6/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 881 "data/maps/MareS6/scripts.pory"
	setflag FLAG_MARES6_RESTORED_POOCHYENAHIKER
# 883 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_CheckAllRestored
	end

MareS6_Script_Poochyena_3:
# 831 "data/maps/MareS6/scripts.pory"
	closemessage
# 832 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Poochyena_8:
# 855 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_UP
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_9:
# 857 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_LEFT
	goto MareS6_Script_Poochyena_6

MareS6_Script_Poochyena_10:
# 859 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_HIKER, MOVEMENT_TYPE_FACE_RIGHT
	goto MareS6_Script_Poochyena_6


MareS6_Script_CheckAllRestored::
# 892 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SHINXSAILOR, MareS6_Script_CheckAllRestored_4
MareS6_Script_CheckAllRestored_1:
	return

MareS6_Script_CheckAllRestored_2:
# 899 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 12
# 900 "data/maps/MareS6/scripts.pory"
	removeitem ITEM_PINA_FRUIT
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_3:
# 894 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TORCHICMAN3, MareS6_Script_CheckAllRestored_8
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_4:
# 893 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_TURTWIGCAMPER, MareS6_Script_CheckAllRestored_3
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_7:
# 896 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_POOCHYENAHIKER, MareS6_Script_CheckAllRestored_2
	goto MareS6_Script_CheckAllRestored_1

MareS6_Script_CheckAllRestored_8:
# 895 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_MARES6_RESTORED_SNUBBULLOLDMAN2, MareS6_Script_CheckAllRestored_7
	goto MareS6_Script_CheckAllRestored_1


MareS6_Script_AfterPenTrigger::
# 907 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 908 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 910 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 911 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 913 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 914 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 915 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 917 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 918 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAfterPen
# 919 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 920 "data/maps/MareS6/scripts.pory"
	closemessage
# 921 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkRight
# 922 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 923 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 924 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 925 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 926 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 927 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 13
	end


MareS6_Script_PinaFruitTree::
# 934 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_3
# 936 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaTree
	return


MareS6_Script_PinaTree::
# 942 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, CheckHeadbutt
# 943 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_2
# 951 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_TreeIsHeadbuttable
MareS6_Script_PinaTree_1:
# 953 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_PinaTree_2:
# 945 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_WantToHeadbutt, MSGBOX_YESNO
# 946 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS6_Script_PinaTree_5
	goto MareS6_Script_PinaTree_1

MareS6_Script_PinaTree_5:
# 947 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_HeadbuttTree
	goto MareS6_Script_PinaTree_1


MareS6_Script_FruitFan::
# 959 "data/maps/MareS6/scripts.pory"
	faceplayer
# 961 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_lt MareS6_Script_FruitFan_2
# 965 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_FruitFan_3
# 970 "data/maps/MareS6/scripts.pory"
	checktrainerflag TRAINER_PINA_FRUIT_FAN
	goto_if 0, MareS6_Script_FruitFan_7
# 975 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 13
	goto_if_lt MareS6_Script_FruitFan_10
# 978 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost2
MareS6_Script_FruitFan_1:
# 982 "data/maps/MareS6/scripts.pory"
	closemessage
# 983 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_FruitFan_2:
# 962 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan1
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_3:
# 966 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FruitFan2
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_7:
# 971 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPre
# 972 "data/maps/MareS6/scripts.pory"
	closemessage
# 973 "data/maps/MareS6/scripts.pory"
	trainerbattle_no_intro TRAINER_PINA_FRUIT_FAN, MareS6_Text_PinaFruitFanLost
	goto MareS6_Script_FruitFan_1

MareS6_Script_FruitFan_10:
# 976 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFanPost
	goto MareS6_Script_FruitFan_1


MareS6_Script_HeadbuttTree::
# 990 "data/maps/MareS6/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 991 "data/maps/MareS6/scripts.pory"
	buffermovename STR_VAR_2, MOVE_HEADBUTT
# 993 "data/maps/MareS6/scripts.pory"
	msgbox Text_MonUsedFieldMove
# 994 "data/maps/MareS6/scripts.pory"
	closemessage
# 996 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, IsMonFollower
# 998 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MareS6_Script_HeadbuttTree_2
MareS6_Script_HeadbuttTree_1:
# 1005 "data/maps/MareS6/scripts.pory"
	playse SE_M_HEADBUTT
# 1006 "data/maps/MareS6/scripts.pory"
	waitse
# 1008 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS6_Script_HeadbuttTree_7
MareS6_Script_HeadbuttTree_6:
# 1012 "data/maps/MareS6/scripts.pory"
	setwildbattle SPECIES_EXEGGCUTE, 7
# 1013 "data/maps/MareS6/scripts.pory"
	dowildbattle
MareS6_Script_HeadbuttTree_4:
# 1016 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_TEMP_3
# 1018 "data/maps/MareS6/scripts.pory"
	releaseall
	end

MareS6_Script_HeadbuttTree_2:
# 999 "data/maps/MareS6/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1000 "data/maps/MareS6/scripts.pory"
	call EventScript_FollowerFieldMove
# 1001 "data/maps/MareS6/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1002 "data/maps/MareS6/scripts.pory"
	updatefollowingmon
	goto MareS6_Script_HeadbuttTree_1

MareS6_Script_HeadbuttTree_5:
# 1009 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_PinaFruit
	goto MareS6_Script_HeadbuttTree_4

MareS6_Script_HeadbuttTree_7:
# 1008 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_Script_HeadbuttTree_5
	goto MareS6_Script_HeadbuttTree_6


MareS6_Script_PinaFruit::
# 1025 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1026 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 1028 "data/maps/MareS6/scripts.pory"
	playse SE_FALL
# 1029 "data/maps/MareS6/scripts.pory"
	waitse
# 1031 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmNoFruitL, FALSE
# 1032 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmNoFruitC, FALSE
# 1033 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmNoFruitR, FALSE
# 1034 "data/maps/MareS6/scripts.pory"
	special DrawWholeMapView
# 1036 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_PinaFruitFell
# 1037 "data/maps/MareS6/scripts.pory"
	closemessage
# 1039 "data/maps/MareS6/scripts.pory"
	giveitem ITEM_PINA_FRUIT
# 1040 "data/maps/MareS6/scripts.pory"
	closemessage
# 1042 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 9
	return


MareS6_Script_Sailor::
# 1048 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1049 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_SailorPostRestored
# 1050 "data/maps/MareS6/scripts.pory"
	closemessage
# 1051 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Camper::
# 1055 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1056 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_CamperPostRestored
# 1057 "data/maps/MareS6/scripts.pory"
	closemessage
# 1058 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_Hiker::
# 1062 "data/maps/MareS6/scripts.pory"
	faceplayer
# 1063 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_HikerPostRestored
# 1064 "data/maps/MareS6/scripts.pory"
	closemessage
# 1065 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	return


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 244 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 1069 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 1073 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walker\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 1077 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 1081 "data/maps/MareS6/scripts.pory"
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
# 1085 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 1089 "data/maps/MareS6/scripts.pory"
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
# 1105 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 1111 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"

MareS6_Text_MeetsGaze::
# 1118 "data/maps/MareS6/scripts.pory"
	.string "{STR_VAR_1} meets your gaze with\n"
	.string "quiet understanding.$"

MareS6_Text_UsePinaFruit::
# 1122 "data/maps/MareS6/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "some of the Piña fruit?$"

MareS6_Text_WantToHeadbutt::
# 1126 "data/maps/MareS6/scripts.pory"
	.string "It's a large, formidable tree. Would you\n"
	.string "like to use Headbutt?$"

MareS6_Text_TreeIsHeadbuttable::
# 1130 "data/maps/MareS6/scripts.pory"
	.string "There's a large, formidable tree that\n"
	.string "looks like it can be headbutted!$"

MareS6_Text_PinaFruitFell::
# 1134 "data/maps/MareS6/scripts.pory"
	.string "The fruit fell down from the tree!$"

MareS6_Text_FruitFan1::
# 1138 "data/maps/MareS6/scripts.pory"
	.string "This piña tree is preparing to bloom!\n"
	.string "How do I know? I can talk to the trees.$"

MareS6_Text_FruitFan2::
# 1143 "data/maps/MareS6/scripts.pory"
	.string "The piña tree has borne fruit! Do you\n"
	.string "know how rare that is? Sometimes not\l"
	.string "even one tree on the whole island will\l"
	.string "fruit all year!$"

MareS6_Text_PinaFruitFanPre::
# 1149 "data/maps/MareS6/scripts.pory"
	.string "The piña fruit! What have you done with\n"
	.string "it? That should belong to the men and\l"
	.string "women of the island in common, not for\l"
	.string "some foreign child to steal! You'll pay\l"
	.string "for this!$"

MareS6_Text_PinaFruitFanLost::
# 1156 "data/maps/MareS6/scripts.pory"
	.string "You are a villain and you are a thief.$"

MareS6_Text_PinaFruitFanPost::
# 1160 "data/maps/MareS6/scripts.pory"
	.string "Well, now the piña fruit is yours. I hope\n"
	.string "you at least put that rare fruit to\l"
	.string "good use.$"

MareS6_Text_PinaFruitFanPost2::
# 1165 "data/maps/MareS6/scripts.pory"
	.string "Another fruit will grow another day, and\n"
	.string "I will make sure that no one steals it.$"

MareS6_Text_PlayerGaveMoly::
# 1170 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} some of\n"
	.string "the piña fruit.$"

MareS6_Text_SailorRestored::
# 1174 "data/maps/MareS6/scripts.pory"
	.string "What terrible dreams I've suffered of\n"
	.string "late! I dreamt my ship had crashed and I\l"
	.string "had washed ashore upon some cursed\l"
	.string "island of Shinx.$"

MareS6_Text_CamperRestored::
# 1180 "data/maps/MareS6/scripts.pory"
	.string "All the merit badges I earned could not\n"
	.string "Save me from Circe's curse. I'm in your\l"
	.string "debt.$"

MareS6_Text_Man3Restored::
# 1185 "data/maps/MareS6/scripts.pory"
	.string "We came to save the town from Circe but\n"
	.string "in the end we ourselves needed saving.$"

MareS6_Text_OldMan2Restored::
# 1190 "data/maps/MareS6/scripts.pory"
	.string "I've lived a long time. Never in my days\n"
	.string "have I seen people turned to Pokemon.$"

MareS6_Text_HikerRestored::
# 1195 "data/maps/MareS6/scripts.pory"
	.string "It feels such a relief to be brought\n"
	.string "back into my old body again. I feared\l"
	.string "I'd be stuck as a Pokemon for good!$"

MareS6_Text_GenericRestored::
# 1201 "data/maps/MareS6/scripts.pory"
	.string "Thank you for saving me. I'm heading\n"
	.string "home!$"

MareS6_Text_UlyssesDuringPen::
# 1205 "data/maps/MareS6/scripts.pory"
	.string "Hurry {PLAYER}! Save them with the\n"
	.string "piña fruit.$"

MareS6_Text_UlyssesAfterPen::
# 1209 "data/maps/MareS6/scripts.pory"
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
# 1224 "data/maps/MareS6/scripts.pory"
	.string "It feels so calming to gaze at the sea.\n"
	.string "I had feared I would never get the\l"
	.string "chance to see her again while I had\l"
	.string "been cursed.$"

MareS6_Text_CamperPostRestored::
# 1230 "data/maps/MareS6/scripts.pory"
	.string "I'm glad to be back home. I try to tell\n"
	.string "myself that it was all just a bad dream\l"
	.string "but I have lost that rash, impulsive\l"
	.string "drive to dive headfirst into danger. I\l"
	.string "fear I'll be hesitant if danger returns.$"

MareS6_Text_HikerPostRestored::
# 1238 "data/maps/MareS6/scripts.pory"
	.string "They say the air gets thinner as you\n"
	.string "climb. That may be true, but one thing is\l"
	.string "for sure. Climbing brings peace of mind,\l"
	.string "and heals all hurts.$"

MareS6_Text_UlyssesShadesIntro1::
# 1244 "data/maps/MareS6/scripts.pory"
	.string "The western sea, the boundary between\n"
	.string "this living world of men, and the\l"
	.string "unknown, undying lands where the sun\l"
	.string "never sets.$"

MareS6_Text_UlyssesShadesIntro2::
# 1250 "data/maps/MareS6/scripts.pory"
	.string "I fear my passage to those western\n"
	.string "shores we all must reach, after our\l"
	.string "lives are done, will be hindered by my\l"
	.string "accursed soul. I must make myself clean\l"
	.string "from suffering under the witch's curse\l"
	.string "with sacrifice.$"

MareS6_Text_UlyssesShadesIntro3::
# 1258 "data/maps/MareS6/scripts.pory"
	.string "Oh, {PLAYER}! I'm glad you didn't\n"
	.string "forget me.$"

MareS6_Text_UlyssesBringSacrifice::
# 1262 "data/maps/MareS6/scripts.pory"
	.string "Did you bring me something to\n"
	.string "sacrifice?$"

MareS6_Text_NoToSacrifice::
# 1266 "data/maps/MareS6/scripts.pory"
	.string "You must bring me a Pokemon to throw\n"
	.string "into the ocean to please the powers who\l"
	.string "guard the way to the undying lands from\l"
	.string "those who have impure souls, like\l"
	.string "myself. Until then I will remain on these\l"
	.string "shores, I will not leave until I've\l"
	.string "sacrificed.$"

MareS6_Text_SacrificeNotValid::
# 1275 "data/maps/MareS6/scripts.pory"
	.string "I'm sorry, {PLAYER}, but\n"
	.string "{STR_VAR_1} is not a proper Pokemon\l"
	.string "to sacrifice.$"

MareS6_Text_GiveSacrifice::
# 1279 "data/maps/MareS6/scripts.pory"
	.string "{PLAYER} gave {STR_VAR_1} to\n"
	.string "Ulysses!\p"
	.string "Bye Bye {STR_VAR_1}!$"

MareS6_Text_UlyssesSacrifice1::
# 1283 "data/maps/MareS6/scripts.pory"
	.string "Yes, perfect, {STR_VAR_1} will make\n"
	.string "an excellent sacrifice.$"

MareS6_Text_UlyssesSacrifice2::
# 1287 "data/maps/MareS6/scripts.pory"
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
# 1298 "data/maps/MareS6/scripts.pory"
	.string "It is done, let us be gone from this\n"
	.string "place. I am quite ready to set sail again\l"
	.string "and, at long last, arrive at Nestor's\l"
	.string "home to attend my brother's joyous\l"
	.string "wedding.$"
