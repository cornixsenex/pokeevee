AedesLux_1F_MapScripts::
# 32 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 56 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 68 "data/maps/AedesLux_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 34 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_AEDESLUX_TRIVIS, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/AedesLux_1F/scripts.pory"
	checktrainerflag TRAINER_SHEIK
	goto_if 0, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 45 "data/maps/AedesLux_1F/scripts.pory"
	checktrainerflag TRAINER_ZELDA
	goto_if 0, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 52 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_OpenPuzzle
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 35 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_TRIVIS, 0, 0
# 36 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_TRIVIS, MOVEMENT_TYPE_INVISIBLE
	goto AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 40 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 41 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 7, 39
# 42 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
	goto AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 46 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_ZELDA, 16, 11
# 47 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_ZELDA, MOVEMENT_TYPE_FACE_DOWN
# 49 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 57 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 58 "data/maps/AedesLux_1F/scripts.pory"
	checktrainerflag TRAINER_ZELDA
	goto_if 1, AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME_3
# 62 "data/maps/AedesLux_1F/scripts.pory"
	hideobjectat LOCALID_AEDESLUX_SHEIK, MAP_AEDES_LUX_1F
# 63 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 59 "data/maps/AedesLux_1F/scripts.pory"
	hideobjectat LOCALID_AEDESLUX_ZELDA, MAP_AEDES_LUX_1F
# 60 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_ZELDA
	return

AedesLux_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 69 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 1, AedesLux_Script_SolvedPuzzle
# 70 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 2, AedesLux_Script_SolvedPuzzle
# 71 "data/maps/AedesLux_1F/scripts.pory"
	map_script_2 VAR_TEMP_B, 3, AedesLux_Script_SolvedPuzzle
	.2byte 0


AedesLux_Script_Warp::
# 77 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_WarpSign, MSGBOX_YESNO
# 78 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_Warp_1
# 82 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_Warp_1:
# 79 "data/maps/AedesLux_1F/scripts.pory"
	warpsilent MAP_AEDES_LUX_1F, 17, 47
# 80 "data/maps/AedesLux_1F/scripts.pory"
	waitstate
	return


AedesLux_Script_SheikStairSceneR::
# 88 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 89 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 91 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 92 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 96 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 97 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 17, 36
# 98 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 99 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 101 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 103 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 2
# 105 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 106 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_SheikStairSceneL::
# 111 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 112 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 114 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 115 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 119 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 120 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 16, 36
# 121 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 122 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 124 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 126 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 2
# 128 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 129 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_HideSheikStairs::
# 134 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 135 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 137 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 138 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 142 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 143 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 0, 0
# 144 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_INVISIBLE
# 145 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 147 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 149 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 3
# 151 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 152 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_SheikBattle::
# 157 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 158 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 160 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 161 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 165 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 166 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 20, 31
# 167 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 168 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 170 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 172 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 173 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 175 "data/maps/AedesLux_1F/scripts.pory"
	delay 40
# 177 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 179 "data/maps/AedesLux_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_SHEIK, AedesAqua_MiniBossRoom_Text_DarkBrendanLost
# 181 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 182 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 183 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 0, 0
# 184 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_INVISIBLE
# 185 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 187 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 189 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 190 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_ZeldaTrigger1::
# 197 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 198 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 199 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger2::
# 205 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger3::
# 211 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 212 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 213 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger4::
# 219 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
# 220 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 221 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaScene::
# 227 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 228 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 230 "data/maps/AedesLux_1F/scripts.pory"
	load_field_pic FIELD_PIC_ZELDA, 190, 98
# 231 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_ZeldaPre
# 232 "data/maps/AedesLux_1F/scripts.pory"
	destroy_field_pic FIELD_PIC_ZELDA
# 233 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 235 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 237 "data/maps/AedesLux_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_ZELDA, AedesLux_Text_ZeldaLost
# 239 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 240 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_ZELDA
# 241 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_ZELDA, 0, 0
# 242 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_ZELDA, MOVEMENT_TYPE_INVISIBLE
# 243 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_ZELDA
# 245 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 4
	end


AedesLux_Script_Trivis::
# 252 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_Trivis
# 253 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 255 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 256 "data/maps/AedesLux_1F/scripts.pory"
	delay 40
# 258 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_TRIVIS
# 259 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_TRIVIS, 0, 0
# 260 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_TRIVIS, MOVEMENT_TYPE_INVISIBLE
# 261 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_TRIVIS
# 263 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 265 "data/maps/AedesLux_1F/scripts.pory"
	giveitem ITEM_TRIVIS_SAPIENTIAE
# 267 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_AEDESLUX_TRIVIS
# 268 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_SolvedPuzzle::
# 273 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 274 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 276 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 277 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 281 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_B
# 282 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_SolvedPuzzle_3
# 286 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_SolvedPuzzle_4
# 300 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_SolvedPuzzle_5
# 314 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_SolvedPuzzle_6
# 327 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_1
# 328 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_1:
# 332 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
	end

AedesLux_Script_SolvedPuzzle_3:
# 283 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_0
# 284 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_4:
# 288 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 289 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 290 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 291 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 292 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 293 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 295 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 297 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 299 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_5:
# 302 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 29, METATILE_MauvilleGym_StairsL, FALSE
# 303 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 29, METATILE_MauvilleGym_StairsR, FALSE
# 304 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 30, METATILE_MauvilleGym_StairsL, FALSE
# 305 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 30, METATILE_MauvilleGym_StairsR, FALSE
# 306 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 307 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 309 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 311 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3Flags
# 313 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 2
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_6:
# 316 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 18, METATILE_MauvilleGym_StairsL, FALSE
# 317 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 18, METATILE_MauvilleGym_StairsR, FALSE
# 318 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 19, METATILE_MauvilleGym_StairsL, FALSE
# 319 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 19, METATILE_MauvilleGym_StairsR, FALSE
# 320 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 321 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 323 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 325 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 3
	goto AedesLux_Script_SolvedPuzzle_1


AedesLux_Script_SetupPuzzle1Flags::
# 340 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 341 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 342 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 343 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 344 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_SetupPuzzle2Flags::
# 349 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 351 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 352 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 354 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 355 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 356 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	return


AedesLux_Script_SetupPuzzle3Flags::
# 361 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 362 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
	return


AedesLux_Script_SetupPuzzle3LFlags::
# 368 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 369 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 370 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 371 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 372 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 373 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 374 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 375 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 376 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 378 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 379 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 380 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 381 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 382 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	return


AedesLux_Script_SetupPuzzle3RFlags::
# 388 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 389 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 390 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 391 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 392 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 393 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 394 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 395 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 396 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 398 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 399 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	return


AedesLux_Script_PoleDanger::
# 406 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 407 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleCompleted::
# 412 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleCompleted
# 413 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleNothingHappened::
# 418 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_NothingHappened
# 419 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 426 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
AedesLux_Script_Puzzle1L_Pole1_1:
# 430 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 433 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 435 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 437 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_9
AedesLux_Script_Puzzle1L_Pole1_8:
# 469 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 427 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole1_1

AedesLux_Script_Puzzle1L_Pole1_5:
# 431 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 439 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 440 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_13
AedesLux_Script_Puzzle1L_Pole1_11:
# 443 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_18
AedesLux_Script_Puzzle1L_Pole1_16:
# 448 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_24
AedesLux_Script_Puzzle1L_Pole1_23:
# 452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_30
AedesLux_Script_Puzzle1L_Pole1_29:
# 456 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 458 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_34
AedesLux_Script_Puzzle1L_Pole1_32:
# 461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_38
AedesLux_Script_Puzzle1L_Pole1_21:
# 466 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_12:
# 441 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_13:
# 440 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_12
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_17:
# 444 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_18:
# 443 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_17
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_22:
# 449 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_24:
# 448 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_22
# 448 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_22
	goto AedesLux_Script_Puzzle1L_Pole1_23

AedesLux_Script_Puzzle1L_Pole1_30:
# 453 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole1_29

AedesLux_Script_Puzzle1L_Pole1_33:
# 459 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_34:
# 458 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_33
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_37:
# 462 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_38:
# 461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_37
	goto AedesLux_Script_Puzzle1L_Pole1_21


AedesLux_Script_Puzzle1L_Pole2::
# 475 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_2
AedesLux_Script_Puzzle1L_Pole2_1:
# 479 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_5
# 482 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole2_4:
# 484 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 486 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_9
AedesLux_Script_Puzzle1L_Pole2_8:
# 517 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole2_2:
# 476 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole2_1

AedesLux_Script_Puzzle1L_Pole2_5:
# 480 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole2_4

AedesLux_Script_Puzzle1L_Pole2_9:
# 488 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 489 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_13
AedesLux_Script_Puzzle1L_Pole2_11:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_18
AedesLux_Script_Puzzle1L_Pole2_16:
# 497 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_24
AedesLux_Script_Puzzle1L_Pole2_23:
# 501 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_30
AedesLux_Script_Puzzle1L_Pole2_29:
# 505 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 507 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_34
AedesLux_Script_Puzzle1L_Pole2_32:
# 511 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle1L_Pole2_21:
# 514 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole2_8

AedesLux_Script_Puzzle1L_Pole2_12:
# 490 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_13:
# 489 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_12
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_17:
# 493 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_18:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_17
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_22:
# 498 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole2_21

AedesLux_Script_Puzzle1L_Pole2_24:
# 497 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_22
# 497 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_22
	goto AedesLux_Script_Puzzle1L_Pole2_23

AedesLux_Script_Puzzle1L_Pole2_30:
# 502 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole2_29

AedesLux_Script_Puzzle1L_Pole2_33:
# 508 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole2_32

AedesLux_Script_Puzzle1L_Pole2_34:
# 507 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole2_33
	goto AedesLux_Script_Puzzle1L_Pole2_32


AedesLux_Script_Puzzle1L_Pole3::
# 523 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_2
AedesLux_Script_Puzzle1L_Pole3_1:
# 527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_5
# 530 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole3_4:
# 532 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 534 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_9
AedesLux_Script_Puzzle1L_Pole3_8:
# 560 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole3_2:
# 524 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole3_1

AedesLux_Script_Puzzle1L_Pole3_5:
# 528 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole3_4

AedesLux_Script_Puzzle1L_Pole3_9:
# 536 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 537 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole3_13
AedesLux_Script_Puzzle1L_Pole3_11:
# 542 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_19
AedesLux_Script_Puzzle1L_Pole3_18:
# 546 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_23
AedesLux_Script_Puzzle1L_Pole3_22:
# 550 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 552 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_26
AedesLux_Script_Puzzle1L_Pole3_16:
# 557 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole3_8

AedesLux_Script_Puzzle1L_Pole3_12:
# 538 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_13:
# 537 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_12
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_17:
# 543 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_19:
# 542 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_17
	goto AedesLux_Script_Puzzle1L_Pole3_18

AedesLux_Script_Puzzle1L_Pole3_23:
# 547 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole3_22

AedesLux_Script_Puzzle1L_Pole3_25:
# 553 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_26:
# 552 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole3_25
	goto AedesLux_Script_Puzzle1L_Pole3_16


AedesLux_Script_Puzzle1L_Pole4::
# 566 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_2
AedesLux_Script_Puzzle1L_Pole4_1:
# 570 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_5
# 573 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole4_4:
# 575 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 577 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_9
AedesLux_Script_Puzzle1L_Pole4_8:
# 608 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole4_2:
# 567 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole4_1

AedesLux_Script_Puzzle1L_Pole4_5:
# 571 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole4_4

AedesLux_Script_Puzzle1L_Pole4_9:
# 579 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 580 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_13
AedesLux_Script_Puzzle1L_Pole4_11:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_18
AedesLux_Script_Puzzle1L_Pole4_16:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_24
AedesLux_Script_Puzzle1L_Pole4_23:
# 592 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_30
AedesLux_Script_Puzzle1L_Pole4_29:
# 596 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 598 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_34
AedesLux_Script_Puzzle1L_Pole4_32:
# 602 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
AedesLux_Script_Puzzle1L_Pole4_21:
# 605 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole4_8

AedesLux_Script_Puzzle1L_Pole4_12:
# 581 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_13:
# 580 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_12
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_17:
# 584 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_18:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_17
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_22:
# 589 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole4_21

AedesLux_Script_Puzzle1L_Pole4_24:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_22
# 588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_22
	goto AedesLux_Script_Puzzle1L_Pole4_23

AedesLux_Script_Puzzle1L_Pole4_30:
# 593 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole4_29

AedesLux_Script_Puzzle1L_Pole4_33:
# 599 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole4_32

AedesLux_Script_Puzzle1L_Pole4_34:
# 598 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole4_33
	goto AedesLux_Script_Puzzle1L_Pole4_32


AedesLux_Script_Puzzle1L_Pole5::
# 614 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_2
AedesLux_Script_Puzzle1L_Pole5_1:
# 618 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_5
# 621 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole5_4:
# 623 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 625 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_9
AedesLux_Script_Puzzle1L_Pole5_8:
# 651 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole5_2:
# 615 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole5_1

AedesLux_Script_Puzzle1L_Pole5_5:
# 619 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole5_4

AedesLux_Script_Puzzle1L_Pole5_9:
# 627 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 628 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole5_13
AedesLux_Script_Puzzle1L_Pole5_11:
# 633 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_19
AedesLux_Script_Puzzle1L_Pole5_18:
# 637 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_23
AedesLux_Script_Puzzle1L_Pole5_22:
# 641 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 643 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_26
AedesLux_Script_Puzzle1L_Pole5_16:
# 648 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole5_8

AedesLux_Script_Puzzle1L_Pole5_12:
# 629 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_13:
# 628 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_12
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_17:
# 634 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_19:
# 633 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_17
	goto AedesLux_Script_Puzzle1L_Pole5_18

AedesLux_Script_Puzzle1L_Pole5_23:
# 638 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole5_22

AedesLux_Script_Puzzle1L_Pole5_25:
# 644 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_26:
# 643 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole5_25
	goto AedesLux_Script_Puzzle1L_Pole5_16


AedesLux_Script_Puzzle1R_Pole6::
# 659 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_2
AedesLux_Script_Puzzle1R_Pole6_1:
# 663 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_5
# 666 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole6_4:
# 668 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 670 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_9
AedesLux_Script_Puzzle1R_Pole6_8:
# 696 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole6_2:
# 660 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole6_1

AedesLux_Script_Puzzle1R_Pole6_5:
# 664 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole6_4

AedesLux_Script_Puzzle1R_Pole6_9:
# 672 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 673 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole6_13
AedesLux_Script_Puzzle1R_Pole6_11:
# 678 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_19
AedesLux_Script_Puzzle1R_Pole6_18:
# 682 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_23
AedesLux_Script_Puzzle1R_Pole6_22:
# 686 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 688 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_26
AedesLux_Script_Puzzle1R_Pole6_16:
# 693 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole6_8

AedesLux_Script_Puzzle1R_Pole6_12:
# 674 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_13:
# 673 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_12
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_17:
# 679 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_19:
# 678 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_17
	goto AedesLux_Script_Puzzle1R_Pole6_18

AedesLux_Script_Puzzle1R_Pole6_23:
# 683 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole6_22

AedesLux_Script_Puzzle1R_Pole6_25:
# 689 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_26:
# 688 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole6_25
	goto AedesLux_Script_Puzzle1R_Pole6_16


AedesLux_Script_Puzzle1R_Pole7::
# 702 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_2
AedesLux_Script_Puzzle1R_Pole7_1:
# 706 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_5
# 709 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole7_4:
# 711 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 713 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_9
AedesLux_Script_Puzzle1R_Pole7_8:
# 744 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole7_2:
# 703 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole7_1

AedesLux_Script_Puzzle1R_Pole7_5:
# 707 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole7_4

AedesLux_Script_Puzzle1R_Pole7_9:
# 715 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 716 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_13
AedesLux_Script_Puzzle1R_Pole7_11:
# 719 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_18
AedesLux_Script_Puzzle1R_Pole7_16:
# 724 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_24
AedesLux_Script_Puzzle1R_Pole7_23:
# 728 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_30
AedesLux_Script_Puzzle1R_Pole7_29:
# 732 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 734 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_34
AedesLux_Script_Puzzle1R_Pole7_32:
# 738 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
AedesLux_Script_Puzzle1R_Pole7_21:
# 741 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole7_8

AedesLux_Script_Puzzle1R_Pole7_12:
# 717 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_13:
# 716 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_12
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_17:
# 720 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_18:
# 719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_17
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_22:
# 725 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole7_21

AedesLux_Script_Puzzle1R_Pole7_24:
# 724 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_22
# 724 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_22
	goto AedesLux_Script_Puzzle1R_Pole7_23

AedesLux_Script_Puzzle1R_Pole7_30:
# 729 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole7_29

AedesLux_Script_Puzzle1R_Pole7_33:
# 735 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole7_32

AedesLux_Script_Puzzle1R_Pole7_34:
# 734 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole7_33
	goto AedesLux_Script_Puzzle1R_Pole7_32


AedesLux_Script_Puzzle1R_Pole8::
# 750 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_2
AedesLux_Script_Puzzle1R_Pole8_1:
# 754 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_5
# 757 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole8_4:
# 759 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 761 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_9
AedesLux_Script_Puzzle1R_Pole8_8:
# 793 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole8_2:
# 751 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole8_1

AedesLux_Script_Puzzle1R_Pole8_5:
# 755 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole8_4

AedesLux_Script_Puzzle1R_Pole8_9:
# 763 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 764 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_13
AedesLux_Script_Puzzle1R_Pole8_11:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_18
AedesLux_Script_Puzzle1R_Pole8_16:
# 772 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_24
AedesLux_Script_Puzzle1R_Pole8_23:
# 776 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_30
AedesLux_Script_Puzzle1R_Pole8_29:
# 780 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 782 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_34
AedesLux_Script_Puzzle1R_Pole8_32:
# 785 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_38
AedesLux_Script_Puzzle1R_Pole8_21:
# 790 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole8_8

AedesLux_Script_Puzzle1R_Pole8_12:
# 765 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_13:
# 764 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_12
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_17:
# 768 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_18:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_17
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_22:
# 773 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_24:
# 772 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_22
# 772 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_22
	goto AedesLux_Script_Puzzle1R_Pole8_23

AedesLux_Script_Puzzle1R_Pole8_30:
# 777 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole8_29

AedesLux_Script_Puzzle1R_Pole8_33:
# 783 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_34:
# 782 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole8_33
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_37:
# 786 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_38:
# 785 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole8_37
	goto AedesLux_Script_Puzzle1R_Pole8_21


AedesLux_Script_Puzzle1R_Pole9::
# 799 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_2
AedesLux_Script_Puzzle1R_Pole9_1:
# 803 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_5
# 806 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole9_4:
# 808 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 810 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_9
AedesLux_Script_Puzzle1R_Pole9_8:
# 841 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole9_2:
# 800 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole9_1

AedesLux_Script_Puzzle1R_Pole9_5:
# 804 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole9_4

AedesLux_Script_Puzzle1R_Pole9_9:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 813 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_13
AedesLux_Script_Puzzle1R_Pole9_11:
# 816 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_18
AedesLux_Script_Puzzle1R_Pole9_16:
# 821 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_24
AedesLux_Script_Puzzle1R_Pole9_23:
# 825 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_30
AedesLux_Script_Puzzle1R_Pole9_29:
# 829 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 831 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_34
AedesLux_Script_Puzzle1R_Pole9_32:
# 835 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
AedesLux_Script_Puzzle1R_Pole9_21:
# 838 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole9_8

AedesLux_Script_Puzzle1R_Pole9_12:
# 814 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_13:
# 813 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_12
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_17:
# 817 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_18:
# 816 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_17
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_22:
# 822 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole9_21

AedesLux_Script_Puzzle1R_Pole9_24:
# 821 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_22
# 821 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_22
	goto AedesLux_Script_Puzzle1R_Pole9_23

AedesLux_Script_Puzzle1R_Pole9_30:
# 826 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole9_29

AedesLux_Script_Puzzle1R_Pole9_33:
# 832 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole9_32

AedesLux_Script_Puzzle1R_Pole9_34:
# 831 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole9_33
	goto AedesLux_Script_Puzzle1R_Pole9_32


AedesLux_Script_Puzzle1R_PoleA::
# 847 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_2
AedesLux_Script_Puzzle1R_PoleA_1:
# 851 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_5
# 854 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_PoleA_4:
# 856 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 858 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_9
AedesLux_Script_Puzzle1R_PoleA_8:
# 884 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_PoleA_2:
# 848 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_PoleA_1

AedesLux_Script_Puzzle1R_PoleA_5:
# 852 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_PoleA_4

AedesLux_Script_Puzzle1R_PoleA_9:
# 860 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 861 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_PoleA_13
AedesLux_Script_Puzzle1R_PoleA_11:
# 866 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_19
AedesLux_Script_Puzzle1R_PoleA_18:
# 870 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_23
AedesLux_Script_Puzzle1R_PoleA_22:
# 874 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 876 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_26
AedesLux_Script_Puzzle1R_PoleA_16:
# 881 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_PoleA_8

AedesLux_Script_Puzzle1R_PoleA_12:
# 862 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_13:
# 861 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_12
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_17:
# 867 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_19:
# 866 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_17
	goto AedesLux_Script_Puzzle1R_PoleA_18

AedesLux_Script_Puzzle1R_PoleA_23:
# 871 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_PoleA_22

AedesLux_Script_Puzzle1R_PoleA_25:
# 877 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_26:
# 876 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_PoleA_25
	goto AedesLux_Script_Puzzle1R_PoleA_16


AedesLux_Script_Puzzle2L_Pole1::
# 893 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_2
AedesLux_Script_Puzzle2L_Pole1_1:
# 897 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_5
# 900 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole1_4:
# 902 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 904 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_9
AedesLux_Script_Puzzle2L_Pole1_8:
# 936 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole1_2:
# 894 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole1_1

AedesLux_Script_Puzzle2L_Pole1_5:
# 898 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole1_4

AedesLux_Script_Puzzle2L_Pole1_9:
# 906 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 907 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_13
AedesLux_Script_Puzzle2L_Pole1_11:
# 910 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_18
AedesLux_Script_Puzzle2L_Pole1_16:
# 915 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_24
AedesLux_Script_Puzzle2L_Pole1_23:
# 919 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_30
AedesLux_Script_Puzzle2L_Pole1_29:
# 923 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_34
AedesLux_Script_Puzzle2L_Pole1_32:
# 928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_39
AedesLux_Script_Puzzle2L_Pole1_21:
# 933 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole1_8

AedesLux_Script_Puzzle2L_Pole1_12:
# 908 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_13:
# 907 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_12
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_17:
# 911 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_18:
# 910 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_17
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_22:
# 916 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_24:
# 915 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_22
# 915 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_22
	goto AedesLux_Script_Puzzle2L_Pole1_23

AedesLux_Script_Puzzle2L_Pole1_30:
# 920 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole1_29

AedesLux_Script_Puzzle2L_Pole1_33:
# 926 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_34:
# 925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole1_33
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_37:
# 929 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_38:
# 928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole1_37
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_39:
# 928 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole1_38
	goto AedesLux_Script_Puzzle2L_Pole1_21


AedesLux_Script_Puzzle2L_Pole2::
# 942 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_2
AedesLux_Script_Puzzle2L_Pole2_1:
# 946 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_5
# 949 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole2_4:
# 951 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 953 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_9
AedesLux_Script_Puzzle2L_Pole2_8:
# 984 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole2_2:
# 943 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole2_1

AedesLux_Script_Puzzle2L_Pole2_5:
# 947 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole2_4

AedesLux_Script_Puzzle2L_Pole2_9:
# 955 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 956 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_13
AedesLux_Script_Puzzle2L_Pole2_11:
# 959 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_18
AedesLux_Script_Puzzle2L_Pole2_16:
# 964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_24
AedesLux_Script_Puzzle2L_Pole2_23:
# 968 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_30
AedesLux_Script_Puzzle2L_Pole2_29:
# 972 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 974 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_34
AedesLux_Script_Puzzle2L_Pole2_32:
# 978 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle2L_Pole2_21:
# 981 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole2_8

AedesLux_Script_Puzzle2L_Pole2_12:
# 957 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_13:
# 956 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_12
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_17:
# 960 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_18:
# 959 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_17
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_22:
# 965 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole2_21

AedesLux_Script_Puzzle2L_Pole2_24:
# 964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_22
# 964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_22
	goto AedesLux_Script_Puzzle2L_Pole2_23

AedesLux_Script_Puzzle2L_Pole2_30:
# 969 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole2_29

AedesLux_Script_Puzzle2L_Pole2_33:
# 975 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole2_32

AedesLux_Script_Puzzle2L_Pole2_34:
# 974 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole2_33
	goto AedesLux_Script_Puzzle2L_Pole2_32


AedesLux_Script_Puzzle2L_Pole3::
# 990 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_2
AedesLux_Script_Puzzle2L_Pole3_1:
# 994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_5
# 997 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole3_4:
# 999 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1001 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_9
AedesLux_Script_Puzzle2L_Pole3_8:
# 1027 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole3_2:
# 991 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole3_1

AedesLux_Script_Puzzle2L_Pole3_5:
# 995 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole3_4

AedesLux_Script_Puzzle2L_Pole3_9:
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1004 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole3_13
AedesLux_Script_Puzzle2L_Pole3_11:
# 1009 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_19
AedesLux_Script_Puzzle2L_Pole3_18:
# 1013 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_23
AedesLux_Script_Puzzle2L_Pole3_22:
# 1017 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_26
AedesLux_Script_Puzzle2L_Pole3_16:
# 1024 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole3_8

AedesLux_Script_Puzzle2L_Pole3_12:
# 1005 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_13:
# 1004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_12
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_17:
# 1010 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_19:
# 1009 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_17
	goto AedesLux_Script_Puzzle2L_Pole3_18

AedesLux_Script_Puzzle2L_Pole3_23:
# 1014 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole3_22

AedesLux_Script_Puzzle2L_Pole3_25:
# 1020 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_26:
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole3_25
	goto AedesLux_Script_Puzzle2L_Pole3_16


AedesLux_Script_Puzzle2L_Pole4::
# 1033 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_2
AedesLux_Script_Puzzle2L_Pole4_1:
# 1037 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_5
# 1040 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole4_4:
# 1042 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1044 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_9
AedesLux_Script_Puzzle2L_Pole4_8:
# 1076 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole4_2:
# 1034 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole4_1

AedesLux_Script_Puzzle2L_Pole4_5:
# 1038 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole4_4

AedesLux_Script_Puzzle2L_Pole4_9:
# 1046 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1047 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_13
AedesLux_Script_Puzzle2L_Pole4_11:
# 1050 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_18
AedesLux_Script_Puzzle2L_Pole4_16:
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_24
AedesLux_Script_Puzzle2L_Pole4_23:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_30
AedesLux_Script_Puzzle2L_Pole4_29:
# 1063 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1065 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_35
AedesLux_Script_Puzzle2L_Pole4_32:
# 1068 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_40
AedesLux_Script_Puzzle2L_Pole4_21:
# 1073 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole4_8

AedesLux_Script_Puzzle2L_Pole4_12:
# 1048 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_13:
# 1047 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_12
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_17:
# 1051 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_18:
# 1050 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_17
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_22:
# 1056 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_24:
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_22
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_22
	goto AedesLux_Script_Puzzle2L_Pole4_23

AedesLux_Script_Puzzle2L_Pole4_30:
# 1060 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole4_29

AedesLux_Script_Puzzle2L_Pole4_33:
# 1066 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_34:
# 1065 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_33
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_35:
# 1065 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole4_34
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_39:
# 1069 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_40:
# 1068 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_39
	goto AedesLux_Script_Puzzle2L_Pole4_21


AedesLux_Script_Puzzle2L_Pole5::
# 1082 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_2
AedesLux_Script_Puzzle2L_Pole5_1:
# 1086 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_5
# 1089 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole5_4:
# 1091 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1093 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_9
AedesLux_Script_Puzzle2L_Pole5_8:
# 1131 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole5_2:
# 1083 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole5_1

AedesLux_Script_Puzzle2L_Pole5_5:
# 1087 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole5_4

AedesLux_Script_Puzzle2L_Pole5_9:
# 1095 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_13
AedesLux_Script_Puzzle2L_Pole5_11:
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_18
AedesLux_Script_Puzzle2L_Pole5_16:
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_23
AedesLux_Script_Puzzle2L_Pole5_21:
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_29
AedesLux_Script_Puzzle2L_Pole5_28:
# 1111 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_37
AedesLux_Script_Puzzle2L_Pole5_36:
# 1115 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1117 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_41
AedesLux_Script_Puzzle2L_Pole5_39:
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_46
AedesLux_Script_Puzzle2L_Pole5_44:
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_50
AedesLux_Script_Puzzle2L_Pole5_26:
# 1128 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole5_8

AedesLux_Script_Puzzle2L_Pole5_12:
# 1097 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_13:
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_12
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_17:
# 1100 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_18:
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_17
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_22:
# 1103 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_23:
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_22
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_27:
# 1108 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_29:
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_27
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_27
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_27
	goto AedesLux_Script_Puzzle2L_Pole5_28

AedesLux_Script_Puzzle2L_Pole5_37:
# 1112 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole5_36

AedesLux_Script_Puzzle2L_Pole5_40:
# 1118 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_41:
# 1117 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole5_40
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_45:
# 1121 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_46:
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_45
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_49:
# 1124 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_50:
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_49
	goto AedesLux_Script_Puzzle2L_Pole5_26


AedesLux_Script_Puzzle2L_Pole6::
# 1137 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_2
AedesLux_Script_Puzzle2L_Pole6_1:
# 1141 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_5
# 1144 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole6_4:
# 1146 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1148 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_9
AedesLux_Script_Puzzle2L_Pole6_8:
# 1180 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole6_2:
# 1138 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole6_1

AedesLux_Script_Puzzle2L_Pole6_5:
# 1142 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole6_4

AedesLux_Script_Puzzle2L_Pole6_9:
# 1150 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_13
AedesLux_Script_Puzzle2L_Pole6_11:
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_18
AedesLux_Script_Puzzle2L_Pole6_16:
# 1159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_24
AedesLux_Script_Puzzle2L_Pole6_23:
# 1163 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_30
AedesLux_Script_Puzzle2L_Pole6_29:
# 1167 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_34
AedesLux_Script_Puzzle2L_Pole6_32:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_38
AedesLux_Script_Puzzle2L_Pole6_21:
# 1177 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole6_8

AedesLux_Script_Puzzle2L_Pole6_12:
# 1152 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_13:
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_12
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_17:
# 1155 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_18:
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_17
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_22:
# 1160 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_24:
# 1159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_22
# 1159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_22
	goto AedesLux_Script_Puzzle2L_Pole6_23

AedesLux_Script_Puzzle2L_Pole6_30:
# 1164 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole6_29

AedesLux_Script_Puzzle2L_Pole6_33:
# 1170 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_34:
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_33
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_37:
# 1173 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_38:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_37
	goto AedesLux_Script_Puzzle2L_Pole6_21


AedesLux_Script_Puzzle2L_Pole7::
# 1186 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_2
AedesLux_Script_Puzzle2L_Pole7_1:
# 1190 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_5
# 1193 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole7_4:
# 1195 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1197 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_9
AedesLux_Script_Puzzle2L_Pole7_8:
# 1229 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole7_2:
# 1187 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole7_1

AedesLux_Script_Puzzle2L_Pole7_5:
# 1191 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole7_4

AedesLux_Script_Puzzle2L_Pole7_9:
# 1199 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_13
AedesLux_Script_Puzzle2L_Pole7_11:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_18
AedesLux_Script_Puzzle2L_Pole7_16:
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_24
AedesLux_Script_Puzzle2L_Pole7_23:
# 1212 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_30
AedesLux_Script_Puzzle2L_Pole7_29:
# 1216 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_34
AedesLux_Script_Puzzle2L_Pole7_32:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_39
AedesLux_Script_Puzzle2L_Pole7_21:
# 1226 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole7_8

AedesLux_Script_Puzzle2L_Pole7_12:
# 1201 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_13:
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_12
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_17:
# 1204 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_18:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_17
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_22:
# 1209 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_24:
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_22
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_22
	goto AedesLux_Script_Puzzle2L_Pole7_23

AedesLux_Script_Puzzle2L_Pole7_30:
# 1213 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole7_29

AedesLux_Script_Puzzle2L_Pole7_33:
# 1219 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_34:
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_33
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_37:
# 1222 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_38:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole7_37
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_39:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_38
	goto AedesLux_Script_Puzzle2L_Pole7_21


AedesLux_Script_Puzzle2R_Pole8::
# 1237 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_2
AedesLux_Script_Puzzle2R_Pole8_1:
# 1241 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_5
# 1244 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole8_4:
# 1246 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1248 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_9
AedesLux_Script_Puzzle2R_Pole8_8:
# 1274 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole8_2:
# 1238 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole8_1

AedesLux_Script_Puzzle2R_Pole8_5:
# 1242 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole8_4

AedesLux_Script_Puzzle2R_Pole8_9:
# 1250 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1251 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole8_13
AedesLux_Script_Puzzle2R_Pole8_11:
# 1256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_19
AedesLux_Script_Puzzle2R_Pole8_18:
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_23
AedesLux_Script_Puzzle2R_Pole8_22:
# 1264 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_26
AedesLux_Script_Puzzle2R_Pole8_16:
# 1271 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole8_8

AedesLux_Script_Puzzle2R_Pole8_12:
# 1252 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_13:
# 1251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_12
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_17:
# 1257 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_19:
# 1256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_17
	goto AedesLux_Script_Puzzle2R_Pole8_18

AedesLux_Script_Puzzle2R_Pole8_23:
# 1261 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole8_22

AedesLux_Script_Puzzle2R_Pole8_25:
# 1267 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_26:
# 1266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole8_25
	goto AedesLux_Script_Puzzle2R_Pole8_16


AedesLux_Script_Puzzle2R_Pole9::
# 1280 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_2
AedesLux_Script_Puzzle2R_Pole9_1:
# 1284 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_5
# 1287 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole9_4:
# 1289 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1291 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_9
AedesLux_Script_Puzzle2R_Pole9_8:
# 1322 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole9_2:
# 1281 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole9_1

AedesLux_Script_Puzzle2R_Pole9_5:
# 1285 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole9_4

AedesLux_Script_Puzzle2R_Pole9_9:
# 1293 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1294 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_13
AedesLux_Script_Puzzle2R_Pole9_11:
# 1297 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_18
AedesLux_Script_Puzzle2R_Pole9_16:
# 1302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_24
AedesLux_Script_Puzzle2R_Pole9_23:
# 1306 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_30
AedesLux_Script_Puzzle2R_Pole9_29:
# 1310 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1312 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_35
AedesLux_Script_Puzzle2R_Pole9_32:
# 1316 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle2R_Pole9_21:
# 1319 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole9_8

AedesLux_Script_Puzzle2R_Pole9_12:
# 1295 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_13:
# 1294 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_12
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_17:
# 1298 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_18:
# 1297 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_17
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_22:
# 1303 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole9_21

AedesLux_Script_Puzzle2R_Pole9_24:
# 1302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_22
# 1302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_22
	goto AedesLux_Script_Puzzle2R_Pole9_23

AedesLux_Script_Puzzle2R_Pole9_30:
# 1307 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole9_29

AedesLux_Script_Puzzle2R_Pole9_33:
# 1313 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_34:
# 1312 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole9_33
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_35:
# 1312 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole9_34
	goto AedesLux_Script_Puzzle2R_Pole9_32


AedesLux_Script_Puzzle2R_PoleA::
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_2
AedesLux_Script_Puzzle2R_PoleA_1:
# 1332 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_5
# 1335 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleA_4:
# 1337 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1339 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_9
AedesLux_Script_Puzzle2R_PoleA_8:
# 1377 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleA_2:
# 1329 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleA_1

AedesLux_Script_Puzzle2R_PoleA_5:
# 1333 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleA_4

AedesLux_Script_Puzzle2R_PoleA_9:
# 1341 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1342 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_13
AedesLux_Script_Puzzle2R_PoleA_11:
# 1345 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_18
AedesLux_Script_Puzzle2R_PoleA_16:
# 1348 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_23
AedesLux_Script_Puzzle2R_PoleA_21:
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_29
AedesLux_Script_Puzzle2R_PoleA_28:
# 1357 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_37
AedesLux_Script_Puzzle2R_PoleA_36:
# 1361 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 1363 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_41
AedesLux_Script_Puzzle2R_PoleA_39:
# 1366 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_46
AedesLux_Script_Puzzle2R_PoleA_44:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_51
AedesLux_Script_Puzzle2R_PoleA_26:
# 1374 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleA_8

AedesLux_Script_Puzzle2R_PoleA_12:
# 1343 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_13:
# 1342 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_12
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_17:
# 1346 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_18:
# 1345 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_17
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_22:
# 1349 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_23:
# 1348 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_22
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_27:
# 1354 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_29:
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_27
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_27
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_27
	goto AedesLux_Script_Puzzle2R_PoleA_28

AedesLux_Script_Puzzle2R_PoleA_37:
# 1358 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleA_36

AedesLux_Script_Puzzle2R_PoleA_40:
# 1364 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_41:
# 1363 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_PoleA_40
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_45:
# 1367 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_46:
# 1366 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_45
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_49:
# 1370 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_50:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleA_49
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_51:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_50
	goto AedesLux_Script_Puzzle2R_PoleA_26


AedesLux_Script_Puzzle2R_PoleB::
# 1383 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_2
AedesLux_Script_Puzzle2R_PoleB_1:
# 1387 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_5
# 1390 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleB_4:
# 1392 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1394 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_9
AedesLux_Script_Puzzle2R_PoleB_8:
# 1426 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleB_2:
# 1384 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleB_1

AedesLux_Script_Puzzle2R_PoleB_5:
# 1388 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleB_4

AedesLux_Script_Puzzle2R_PoleB_9:
# 1396 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1397 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_13
AedesLux_Script_Puzzle2R_PoleB_11:
# 1400 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_18
AedesLux_Script_Puzzle2R_PoleB_16:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_24
AedesLux_Script_Puzzle2R_PoleB_23:
# 1409 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_30
AedesLux_Script_Puzzle2R_PoleB_29:
# 1413 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_35
AedesLux_Script_Puzzle2R_PoleB_32:
# 1418 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_41
AedesLux_Script_Puzzle2R_PoleB_21:
# 1423 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleB_8

AedesLux_Script_Puzzle2R_PoleB_12:
# 1398 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_13:
# 1397 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_12
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_17:
# 1401 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_18:
# 1400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_17
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_22:
# 1406 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_24:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_22
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_22
	goto AedesLux_Script_Puzzle2R_PoleB_23

AedesLux_Script_Puzzle2R_PoleB_30:
# 1410 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleB_29

AedesLux_Script_Puzzle2R_PoleB_33:
# 1416 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_34:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_33
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_35:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleB_34
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_39:
# 1419 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_40:
# 1418 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleB_39
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_41:
# 1418 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_40
	goto AedesLux_Script_Puzzle2R_PoleB_21


AedesLux_Script_Puzzle2R_PoleC::
# 1432 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_2
AedesLux_Script_Puzzle2R_PoleC_1:
# 1436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_5
# 1439 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleC_4:
# 1441 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1443 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_9
AedesLux_Script_Puzzle2R_PoleC_8:
# 1481 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleC_2:
# 1433 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleC_1

AedesLux_Script_Puzzle2R_PoleC_5:
# 1437 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleC_4

AedesLux_Script_Puzzle2R_PoleC_9:
# 1445 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1446 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_13
AedesLux_Script_Puzzle2R_PoleC_11:
# 1449 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_18
AedesLux_Script_Puzzle2R_PoleC_16:
# 1452 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_23
AedesLux_Script_Puzzle2R_PoleC_21:
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_29
AedesLux_Script_Puzzle2R_PoleC_28:
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_37
AedesLux_Script_Puzzle2R_PoleC_36:
# 1465 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_42
AedesLux_Script_Puzzle2R_PoleC_39:
# 1470 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_49
AedesLux_Script_Puzzle2R_PoleC_46:
# 1473 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_55
AedesLux_Script_Puzzle2R_PoleC_26:
# 1478 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleC_8

AedesLux_Script_Puzzle2R_PoleC_12:
# 1447 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_13:
# 1446 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_12
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_17:
# 1450 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_18:
# 1449 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_17
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_22:
# 1453 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_23:
# 1452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_22
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_27:
# 1458 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_29:
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_27
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_27
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_27
	goto AedesLux_Script_Puzzle2R_PoleC_28

AedesLux_Script_Puzzle2R_PoleC_37:
# 1462 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleC_36

AedesLux_Script_Puzzle2R_PoleC_40:
# 1468 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_41:
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_40
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_42:
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleC_41
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_47:
# 1471 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_48:
# 1470 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_47
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_49:
# 1470 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_48
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_53:
# 1474 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_54:
# 1473 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_53
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_55:
# 1473 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleC_54
	goto AedesLux_Script_Puzzle2R_PoleC_26


AedesLux_Script_Puzzle2R_PoleD::
# 1487 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_2
AedesLux_Script_Puzzle2R_PoleD_1:
# 1491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_5
# 1494 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleD_4:
# 1496 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1498 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_9
AedesLux_Script_Puzzle2R_PoleD_8:
# 1536 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleD_2:
# 1488 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleD_1

AedesLux_Script_Puzzle2R_PoleD_5:
# 1492 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleD_4

AedesLux_Script_Puzzle2R_PoleD_9:
# 1500 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1501 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_13
AedesLux_Script_Puzzle2R_PoleD_11:
# 1504 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_18
AedesLux_Script_Puzzle2R_PoleD_16:
# 1507 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_23
AedesLux_Script_Puzzle2R_PoleD_21:
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_29
AedesLux_Script_Puzzle2R_PoleD_28:
# 1516 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_37
AedesLux_Script_Puzzle2R_PoleD_36:
# 1520 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 1522 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_41
AedesLux_Script_Puzzle2R_PoleD_39:
# 1525 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_47
AedesLux_Script_Puzzle2R_PoleD_44:
# 1528 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_52
AedesLux_Script_Puzzle2R_PoleD_26:
# 1533 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleD_8

AedesLux_Script_Puzzle2R_PoleD_12:
# 1502 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_13:
# 1501 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_12
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_17:
# 1505 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_18:
# 1504 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_17
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_22:
# 1508 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_23:
# 1507 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_22
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_27:
# 1513 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_29:
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_27
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_27
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_27
	goto AedesLux_Script_Puzzle2R_PoleD_28

AedesLux_Script_Puzzle2R_PoleD_37:
# 1517 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleD_36

AedesLux_Script_Puzzle2R_PoleD_40:
# 1523 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_41:
# 1522 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_40
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_45:
# 1526 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_46:
# 1525 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_45
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_47:
# 1525 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_46
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_51:
# 1529 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_52:
# 1528 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_51
	goto AedesLux_Script_Puzzle2R_PoleD_26


AedesLux_Script_Puzzle2R_PoleE::
# 1542 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_2
AedesLux_Script_Puzzle2R_PoleE_1:
# 1546 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_5
# 1549 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleE_4:
# 1551 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1553 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_9
AedesLux_Script_Puzzle2R_PoleE_8:
# 1579 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleE_2:
# 1543 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleE_1

AedesLux_Script_Puzzle2R_PoleE_5:
# 1547 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleE_4

AedesLux_Script_Puzzle2R_PoleE_9:
# 1555 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1556 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleE_13
AedesLux_Script_Puzzle2R_PoleE_11:
# 1561 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_19
AedesLux_Script_Puzzle2R_PoleE_18:
# 1565 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_23
AedesLux_Script_Puzzle2R_PoleE_22:
# 1569 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_26
AedesLux_Script_Puzzle2R_PoleE_16:
# 1576 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleE_8

AedesLux_Script_Puzzle2R_PoleE_12:
# 1557 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_13:
# 1556 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_12
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_17:
# 1562 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_19:
# 1561 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_17
	goto AedesLux_Script_Puzzle2R_PoleE_18

AedesLux_Script_Puzzle2R_PoleE_23:
# 1566 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleE_22

AedesLux_Script_Puzzle2R_PoleE_25:
# 1572 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_26:
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleE_25
	goto AedesLux_Script_Puzzle2R_PoleE_16


AedesLux_Script_Puzzle2R_PoleF::
# 1585 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_2
AedesLux_Script_Puzzle2R_PoleF_1:
# 1589 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_5
# 1592 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleF_4:
# 1594 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1596 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_9
AedesLux_Script_Puzzle2R_PoleF_8:
# 1627 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleF_2:
# 1586 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleF_1

AedesLux_Script_Puzzle2R_PoleF_5:
# 1590 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleF_4

AedesLux_Script_Puzzle2R_PoleF_9:
# 1598 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1599 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_13
AedesLux_Script_Puzzle2R_PoleF_11:
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_18
AedesLux_Script_Puzzle2R_PoleF_16:
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_24
AedesLux_Script_Puzzle2R_PoleF_23:
# 1611 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_30
AedesLux_Script_Puzzle2R_PoleF_29:
# 1615 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_35
AedesLux_Script_Puzzle2R_PoleF_32:
# 1621 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
AedesLux_Script_Puzzle2R_PoleF_21:
# 1624 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleF_8

AedesLux_Script_Puzzle2R_PoleF_12:
# 1600 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_13:
# 1599 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_12
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_17:
# 1603 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_18:
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_17
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_22:
# 1608 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleF_21

AedesLux_Script_Puzzle2R_PoleF_24:
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_22
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_22
	goto AedesLux_Script_Puzzle2R_PoleF_23

AedesLux_Script_Puzzle2R_PoleF_30:
# 1612 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleF_29

AedesLux_Script_Puzzle2R_PoleF_33:
# 1618 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_34:
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleF_33
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_35:
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleF_34
	goto AedesLux_Script_Puzzle2R_PoleF_32


AedesLux_Script_Puzzle2R_Pole10::
# 1633 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_2
AedesLux_Script_Puzzle2R_Pole10_1:
# 1637 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_5
# 1640 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole10_4:
# 1642 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1644 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_9
AedesLux_Script_Puzzle2R_Pole10_8:
# 1682 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole10_2:
# 1634 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole10_1

AedesLux_Script_Puzzle2R_Pole10_5:
# 1638 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole10_4

AedesLux_Script_Puzzle2R_Pole10_9:
# 1646 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1647 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_13
AedesLux_Script_Puzzle2R_Pole10_11:
# 1650 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_18
AedesLux_Script_Puzzle2R_Pole10_16:
# 1653 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_23
AedesLux_Script_Puzzle2R_Pole10_21:
# 1658 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_29
AedesLux_Script_Puzzle2R_Pole10_28:
# 1662 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_37
AedesLux_Script_Puzzle2R_Pole10_36:
# 1666 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 1668 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_42
AedesLux_Script_Puzzle2R_Pole10_39:
# 1671 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_48
AedesLux_Script_Puzzle2R_Pole10_46:
# 1674 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_52
AedesLux_Script_Puzzle2R_Pole10_26:
# 1679 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole10_8

AedesLux_Script_Puzzle2R_Pole10_12:
# 1648 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_13:
# 1647 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_12
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_17:
# 1651 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_18:
# 1650 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_17
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_22:
# 1654 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_23:
# 1653 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_22
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_27:
# 1659 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_29:
# 1658 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_27
# 1658 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_27
# 1658 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_27
	goto AedesLux_Script_Puzzle2R_Pole10_28

AedesLux_Script_Puzzle2R_Pole10_37:
# 1663 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole10_36

AedesLux_Script_Puzzle2R_Pole10_40:
# 1669 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_41:
# 1668 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_40
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_42:
# 1668 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole10_41
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_47:
# 1672 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_48:
# 1671 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_Pole10_47
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_51:
# 1675 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_52:
# 1674 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_51
	goto AedesLux_Script_Puzzle2R_Pole10_26


AedesLux_Script_Puzzle2R_Pole11::
# 1688 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_2
AedesLux_Script_Puzzle2R_Pole11_1:
# 1692 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_5
# 1695 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole11_4:
# 1697 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1699 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_9
AedesLux_Script_Puzzle2R_Pole11_8:
# 1731 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole11_2:
# 1689 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole11_1

AedesLux_Script_Puzzle2R_Pole11_5:
# 1693 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole11_4

AedesLux_Script_Puzzle2R_Pole11_9:
# 1701 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1702 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_13
AedesLux_Script_Puzzle2R_Pole11_11:
# 1705 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_18
AedesLux_Script_Puzzle2R_Pole11_16:
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_24
AedesLux_Script_Puzzle2R_Pole11_23:
# 1714 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_30
AedesLux_Script_Puzzle2R_Pole11_29:
# 1718 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 1720 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_35
AedesLux_Script_Puzzle2R_Pole11_32:
# 1723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_41
AedesLux_Script_Puzzle2R_Pole11_21:
# 1728 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole11_8

AedesLux_Script_Puzzle2R_Pole11_12:
# 1703 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_13:
# 1702 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_12
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_17:
# 1706 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_18:
# 1705 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_17
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_22:
# 1711 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_24:
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_22
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_22
	goto AedesLux_Script_Puzzle2R_Pole11_23

AedesLux_Script_Puzzle2R_Pole11_30:
# 1715 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole11_29

AedesLux_Script_Puzzle2R_Pole11_33:
# 1721 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_34:
# 1720 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole11_33
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_35:
# 1720 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_34
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_39:
# 1724 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_40:
# 1723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole11_39
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_41:
# 1723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_40
	goto AedesLux_Script_Puzzle2R_Pole11_21


AedesLux_Script_Puzzle3L_Pole1::
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_2
AedesLux_Script_Puzzle3L_Pole1_1:
# 1743 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_5
# 1746 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole1_4:
# 1748 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1750 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_9
AedesLux_Script_Puzzle3L_Pole1_8:
# 1776 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole1_2:
# 1740 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole1_1

AedesLux_Script_Puzzle3L_Pole1_5:
# 1744 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole1_4

AedesLux_Script_Puzzle3L_Pole1_9:
# 1752 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1753 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole1_13
AedesLux_Script_Puzzle3L_Pole1_11:
# 1758 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_19
AedesLux_Script_Puzzle3L_Pole1_18:
# 1762 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_23
AedesLux_Script_Puzzle3L_Pole1_22:
# 1766 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 1768 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_26
AedesLux_Script_Puzzle3L_Pole1_16:
# 1773 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole1_8

AedesLux_Script_Puzzle3L_Pole1_12:
# 1754 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_13:
# 1753 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_12
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_17:
# 1759 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_19:
# 1758 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_17
	goto AedesLux_Script_Puzzle3L_Pole1_18

AedesLux_Script_Puzzle3L_Pole1_23:
# 1763 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole1_22

AedesLux_Script_Puzzle3L_Pole1_25:
# 1769 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_26:
# 1768 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole1_25
	goto AedesLux_Script_Puzzle3L_Pole1_16


AedesLux_Script_Puzzle3L_Pole2::
# 1782 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_2
AedesLux_Script_Puzzle3L_Pole2_1:
# 1786 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_5
# 1789 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole2_4:
# 1791 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1793 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_9
AedesLux_Script_Puzzle3L_Pole2_8:
# 1824 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole2_2:
# 1783 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole2_1

AedesLux_Script_Puzzle3L_Pole2_5:
# 1787 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole2_4

AedesLux_Script_Puzzle3L_Pole2_9:
# 1795 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1796 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_13
AedesLux_Script_Puzzle3L_Pole2_11:
# 1799 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_18
AedesLux_Script_Puzzle3L_Pole2_16:
# 1804 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_24
AedesLux_Script_Puzzle3L_Pole2_23:
# 1808 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_30
AedesLux_Script_Puzzle3L_Pole2_29:
# 1812 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 1814 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_34
AedesLux_Script_Puzzle3L_Pole2_32:
# 1818 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
AedesLux_Script_Puzzle3L_Pole2_21:
# 1821 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole2_8

AedesLux_Script_Puzzle3L_Pole2_12:
# 1797 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_13:
# 1796 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_12
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_17:
# 1800 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_18:
# 1799 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_17
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_22:
# 1805 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole2_21

AedesLux_Script_Puzzle3L_Pole2_24:
# 1804 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_22
# 1804 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_22
	goto AedesLux_Script_Puzzle3L_Pole2_23

AedesLux_Script_Puzzle3L_Pole2_30:
# 1809 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole2_29

AedesLux_Script_Puzzle3L_Pole2_33:
# 1815 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole2_32

AedesLux_Script_Puzzle3L_Pole2_34:
# 1814 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole2_33
	goto AedesLux_Script_Puzzle3L_Pole2_32


AedesLux_Script_Puzzle3L_Pole3::
# 1830 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_2
AedesLux_Script_Puzzle3L_Pole3_1:
# 1834 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_5
# 1837 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole3_4:
# 1839 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1841 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_9
AedesLux_Script_Puzzle3L_Pole3_8:
# 1867 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole3_2:
# 1831 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole3_1

AedesLux_Script_Puzzle3L_Pole3_5:
# 1835 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole3_4

AedesLux_Script_Puzzle3L_Pole3_9:
# 1843 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1844 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole3_13
AedesLux_Script_Puzzle3L_Pole3_11:
# 1849 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_19
AedesLux_Script_Puzzle3L_Pole3_18:
# 1853 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_23
AedesLux_Script_Puzzle3L_Pole3_22:
# 1857 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1859 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_26
AedesLux_Script_Puzzle3L_Pole3_16:
# 1864 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole3_8

AedesLux_Script_Puzzle3L_Pole3_12:
# 1845 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_13:
# 1844 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_12
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_17:
# 1850 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_19:
# 1849 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_17
	goto AedesLux_Script_Puzzle3L_Pole3_18

AedesLux_Script_Puzzle3L_Pole3_23:
# 1854 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole3_22

AedesLux_Script_Puzzle3L_Pole3_25:
# 1860 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_26:
# 1859 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole3_25
	goto AedesLux_Script_Puzzle3L_Pole3_16


AedesLux_Script_Puzzle3L_Pole4::
# 1873 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_2
AedesLux_Script_Puzzle3L_Pole4_1:
# 1877 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_5
# 1880 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole4_4:
# 1882 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1884 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_9
AedesLux_Script_Puzzle3L_Pole4_8:
# 1916 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole4_2:
# 1874 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole4_1

AedesLux_Script_Puzzle3L_Pole4_5:
# 1878 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole4_4

AedesLux_Script_Puzzle3L_Pole4_9:
# 1886 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1887 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_13
AedesLux_Script_Puzzle3L_Pole4_11:
# 1890 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_18
AedesLux_Script_Puzzle3L_Pole4_16:
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_24
AedesLux_Script_Puzzle3L_Pole4_23:
# 1899 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_30
AedesLux_Script_Puzzle3L_Pole4_29:
# 1903 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1905 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_34
AedesLux_Script_Puzzle3L_Pole4_32:
# 1908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_39
AedesLux_Script_Puzzle3L_Pole4_21:
# 1913 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole4_8

AedesLux_Script_Puzzle3L_Pole4_12:
# 1888 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_13:
# 1887 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_12
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_17:
# 1891 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_18:
# 1890 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_17
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_22:
# 1896 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_24:
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_22
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_22
	goto AedesLux_Script_Puzzle3L_Pole4_23

AedesLux_Script_Puzzle3L_Pole4_30:
# 1900 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole4_29

AedesLux_Script_Puzzle3L_Pole4_33:
# 1906 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_34:
# 1905 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole4_33
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_37:
# 1909 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_38:
# 1908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole4_37
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_39:
# 1908 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole4_38
	goto AedesLux_Script_Puzzle3L_Pole4_21


AedesLux_Script_Puzzle3L_Pole5::
# 1922 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_2
AedesLux_Script_Puzzle3L_Pole5_1:
# 1926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_5
# 1929 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole5_4:
# 1931 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1933 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_9
AedesLux_Script_Puzzle3L_Pole5_8:
# 1964 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole5_2:
# 1923 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole5_1

AedesLux_Script_Puzzle3L_Pole5_5:
# 1927 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole5_4

AedesLux_Script_Puzzle3L_Pole5_9:
# 1935 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1936 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_13
AedesLux_Script_Puzzle3L_Pole5_11:
# 1939 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_18
AedesLux_Script_Puzzle3L_Pole5_16:
# 1944 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_24
AedesLux_Script_Puzzle3L_Pole5_23:
# 1948 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_30
AedesLux_Script_Puzzle3L_Pole5_29:
# 1952 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1954 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_35
AedesLux_Script_Puzzle3L_Pole5_32:
# 1958 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle3L_Pole5_21:
# 1961 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole5_8

AedesLux_Script_Puzzle3L_Pole5_12:
# 1937 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_13:
# 1936 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_12
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_17:
# 1940 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_18:
# 1939 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_17
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_22:
# 1945 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole5_21

AedesLux_Script_Puzzle3L_Pole5_24:
# 1944 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_22
# 1944 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_22
	goto AedesLux_Script_Puzzle3L_Pole5_23

AedesLux_Script_Puzzle3L_Pole5_30:
# 1949 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole5_29

AedesLux_Script_Puzzle3L_Pole5_33:
# 1955 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_34:
# 1954 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole5_33
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_35:
# 1954 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole5_34
	goto AedesLux_Script_Puzzle3L_Pole5_32


AedesLux_Script_Puzzle3L_Pole6::
# 1970 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_2
AedesLux_Script_Puzzle3L_Pole6_1:
# 1974 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_5
# 1977 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole6_4:
# 1979 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1981 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_9
AedesLux_Script_Puzzle3L_Pole6_8:
# 2018 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole6_2:
# 1971 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole6_1

AedesLux_Script_Puzzle3L_Pole6_5:
# 1975 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole6_4

AedesLux_Script_Puzzle3L_Pole6_9:
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1984 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_13
AedesLux_Script_Puzzle3L_Pole6_11:
# 1987 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_18
AedesLux_Script_Puzzle3L_Pole6_16:
# 1990 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_23
AedesLux_Script_Puzzle3L_Pole6_21:
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_29
AedesLux_Script_Puzzle3L_Pole6_28:
# 1999 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_37
AedesLux_Script_Puzzle3L_Pole6_36:
# 2003 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2005 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_41
AedesLux_Script_Puzzle3L_Pole6_39:
# 2008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_47
AedesLux_Script_Puzzle3L_Pole6_44:
# 2012 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
AedesLux_Script_Puzzle3L_Pole6_26:
# 2015 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole6_8

AedesLux_Script_Puzzle3L_Pole6_12:
# 1985 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_13:
# 1984 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_12
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_17:
# 1988 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_18:
# 1987 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_17
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_22:
# 1991 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_23:
# 1990 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_22
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_27:
# 1996 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole6_26

AedesLux_Script_Puzzle3L_Pole6_29:
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_27
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_27
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_27
	goto AedesLux_Script_Puzzle3L_Pole6_28

AedesLux_Script_Puzzle3L_Pole6_37:
# 2000 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole6_36

AedesLux_Script_Puzzle3L_Pole6_40:
# 2006 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_41:
# 2005 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole6_40
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_45:
# 2009 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_46:
# 2008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole6_45
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_47:
# 2008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole6_46
	goto AedesLux_Script_Puzzle3L_Pole6_44


AedesLux_Script_Puzzle3L_Pole7::
# 2024 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_2
AedesLux_Script_Puzzle3L_Pole7_1:
# 2028 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_5
# 2031 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole7_4:
# 2033 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2035 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_9
AedesLux_Script_Puzzle3L_Pole7_8:
# 2072 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole7_2:
# 2025 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole7_1

AedesLux_Script_Puzzle3L_Pole7_5:
# 2029 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole7_4

AedesLux_Script_Puzzle3L_Pole7_9:
# 2037 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_13
AedesLux_Script_Puzzle3L_Pole7_11:
# 2041 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_18
AedesLux_Script_Puzzle3L_Pole7_16:
# 2044 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_23
AedesLux_Script_Puzzle3L_Pole7_21:
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_29
AedesLux_Script_Puzzle3L_Pole7_28:
# 2053 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_37
AedesLux_Script_Puzzle3L_Pole7_36:
# 2057 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_41
AedesLux_Script_Puzzle3L_Pole7_39:
# 2062 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_47
AedesLux_Script_Puzzle3L_Pole7_44:
# 2066 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle3L_Pole7_26:
# 2069 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole7_8

AedesLux_Script_Puzzle3L_Pole7_12:
# 2039 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_13:
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_12
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_17:
# 2042 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_18:
# 2041 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_17
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_22:
# 2045 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_23:
# 2044 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_22
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_27:
# 2050 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole7_26

AedesLux_Script_Puzzle3L_Pole7_29:
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_27
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_27
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_27
	goto AedesLux_Script_Puzzle3L_Pole7_28

AedesLux_Script_Puzzle3L_Pole7_37:
# 2054 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole7_36

AedesLux_Script_Puzzle3L_Pole7_40:
# 2060 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_41:
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole7_40
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_45:
# 2063 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_46:
# 2062 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole7_45
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_47:
# 2062 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole7_46
	goto AedesLux_Script_Puzzle3L_Pole7_44


AedesLux_Script_Puzzle3L_Pole8::
# 2078 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_2
AedesLux_Script_Puzzle3L_Pole8_1:
# 2082 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_5
# 2085 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole8_4:
# 2087 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2089 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_9
AedesLux_Script_Puzzle3L_Pole8_8:
# 2115 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole8_2:
# 2079 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole8_1

AedesLux_Script_Puzzle3L_Pole8_5:
# 2083 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole8_4

AedesLux_Script_Puzzle3L_Pole8_9:
# 2091 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2092 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole8_13
AedesLux_Script_Puzzle3L_Pole8_11:
# 2097 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_19
AedesLux_Script_Puzzle3L_Pole8_18:
# 2101 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_23
AedesLux_Script_Puzzle3L_Pole8_22:
# 2105 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_27
AedesLux_Script_Puzzle3L_Pole8_16:
# 2112 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole8_8

AedesLux_Script_Puzzle3L_Pole8_12:
# 2093 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_13:
# 2092 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_12
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_17:
# 2098 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_19:
# 2097 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_17
	goto AedesLux_Script_Puzzle3L_Pole8_18

AedesLux_Script_Puzzle3L_Pole8_23:
# 2102 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole8_22

AedesLux_Script_Puzzle3L_Pole8_25:
# 2108 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_26:
# 2107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole8_25
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_27:
# 2107 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole8_26
	goto AedesLux_Script_Puzzle3L_Pole8_16


AedesLux_Script_Puzzle3L_Pole9::
# 2121 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_2
AedesLux_Script_Puzzle3L_Pole9_1:
# 2125 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_5
# 2128 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole9_4:
# 2130 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2132 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_9
AedesLux_Script_Puzzle3L_Pole9_8:
# 2158 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole9_2:
# 2122 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole9_1

AedesLux_Script_Puzzle3L_Pole9_5:
# 2126 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole9_4

AedesLux_Script_Puzzle3L_Pole9_9:
# 2134 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2135 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole9_13
AedesLux_Script_Puzzle3L_Pole9_11:
# 2140 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_19
AedesLux_Script_Puzzle3L_Pole9_18:
# 2144 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_23
AedesLux_Script_Puzzle3L_Pole9_22:
# 2148 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_27
AedesLux_Script_Puzzle3L_Pole9_16:
# 2155 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole9_8

AedesLux_Script_Puzzle3L_Pole9_12:
# 2136 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_13:
# 2135 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_12
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_17:
# 2141 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_19:
# 2140 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_17
	goto AedesLux_Script_Puzzle3L_Pole9_18

AedesLux_Script_Puzzle3L_Pole9_23:
# 2145 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole9_22

AedesLux_Script_Puzzle3L_Pole9_25:
# 2151 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_26:
# 2150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole9_25
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_27:
# 2150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole9_26
	goto AedesLux_Script_Puzzle3L_Pole9_16


AedesLux_Script_Puzzle3R_PoleA::
# 2166 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_2
AedesLux_Script_Puzzle3R_PoleA_1:
# 2170 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_5
# 2173 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleA_4:
# 2175 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2177 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_9
AedesLux_Script_Puzzle3R_PoleA_8:
# 2209 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleA_2:
# 2167 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleA_1

AedesLux_Script_Puzzle3R_PoleA_5:
# 2171 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleA_4

AedesLux_Script_Puzzle3R_PoleA_9:
# 2179 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2180 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_13
AedesLux_Script_Puzzle3R_PoleA_11:
# 2183 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_18
AedesLux_Script_Puzzle3R_PoleA_16:
# 2188 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_24
AedesLux_Script_Puzzle3R_PoleA_23:
# 2192 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_30
AedesLux_Script_Puzzle3R_PoleA_29:
# 2196 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2198 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_35
AedesLux_Script_Puzzle3R_PoleA_32:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_41
AedesLux_Script_Puzzle3R_PoleA_21:
# 2206 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleA_8

AedesLux_Script_Puzzle3R_PoleA_12:
# 2181 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_13:
# 2180 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_12
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_17:
# 2184 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_18:
# 2183 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_17
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_22:
# 2189 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_24:
# 2188 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_22
# 2188 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_22
	goto AedesLux_Script_Puzzle3R_PoleA_23

AedesLux_Script_Puzzle3R_PoleA_30:
# 2193 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleA_29

AedesLux_Script_Puzzle3R_PoleA_33:
# 2199 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_34:
# 2198 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_33
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_35:
# 2198 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleA_34
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_39:
# 2202 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_40:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleA_39
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_41:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_40
	goto AedesLux_Script_Puzzle3R_PoleA_21


AedesLux_Script_Puzzle3R_PoleB::
# 2215 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_2
AedesLux_Script_Puzzle3R_PoleB_1:
# 2219 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_5
# 2222 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleB_4:
# 2224 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2226 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_9
AedesLux_Script_Puzzle3R_PoleB_8:
# 2264 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleB_2:
# 2216 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleB_1

AedesLux_Script_Puzzle3R_PoleB_5:
# 2220 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleB_4

AedesLux_Script_Puzzle3R_PoleB_9:
# 2228 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2229 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_13
AedesLux_Script_Puzzle3R_PoleB_11:
# 2232 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_18
AedesLux_Script_Puzzle3R_PoleB_16:
# 2235 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_23
AedesLux_Script_Puzzle3R_PoleB_21:
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_29
AedesLux_Script_Puzzle3R_PoleB_28:
# 2244 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_37
AedesLux_Script_Puzzle3R_PoleB_36:
# 2248 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2250 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_41
AedesLux_Script_Puzzle3R_PoleB_39:
# 2253 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_46
AedesLux_Script_Puzzle3R_PoleB_44:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_51
AedesLux_Script_Puzzle3R_PoleB_26:
# 2261 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleB_8

AedesLux_Script_Puzzle3R_PoleB_12:
# 2230 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_13:
# 2229 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_12
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_17:
# 2233 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_18:
# 2232 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_17
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_22:
# 2236 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_23:
# 2235 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_22
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_27:
# 2241 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_29:
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_27
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_27
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_27
	goto AedesLux_Script_Puzzle3R_PoleB_28

AedesLux_Script_Puzzle3R_PoleB_37:
# 2245 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleB_36

AedesLux_Script_Puzzle3R_PoleB_40:
# 2251 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_41:
# 2250 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_40
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_45:
# 2254 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_46:
# 2253 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_45
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_49:
# 2257 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_50:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_49
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_51:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_50
	goto AedesLux_Script_Puzzle3R_PoleB_26


AedesLux_Script_Puzzle3R_PoleC::
# 2270 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_2
AedesLux_Script_Puzzle3R_PoleC_1:
# 2274 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_5
# 2277 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleC_4:
# 2279 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2281 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_9
AedesLux_Script_Puzzle3R_PoleC_8:
# 2313 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleC_2:
# 2271 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleC_1

AedesLux_Script_Puzzle3R_PoleC_5:
# 2275 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleC_4

AedesLux_Script_Puzzle3R_PoleC_9:
# 2283 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2284 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_13
AedesLux_Script_Puzzle3R_PoleC_11:
# 2287 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_18
AedesLux_Script_Puzzle3R_PoleC_16:
# 2292 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_24
AedesLux_Script_Puzzle3R_PoleC_23:
# 2296 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_30
AedesLux_Script_Puzzle3R_PoleC_29:
# 2300 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 2302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_35
AedesLux_Script_Puzzle3R_PoleC_32:
# 2305 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_41
AedesLux_Script_Puzzle3R_PoleC_21:
# 2310 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleC_8

AedesLux_Script_Puzzle3R_PoleC_12:
# 2285 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_13:
# 2284 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_12
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_17:
# 2288 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_18:
# 2287 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_17
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_22:
# 2293 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_24:
# 2292 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_22
# 2292 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_22
	goto AedesLux_Script_Puzzle3R_PoleC_23

AedesLux_Script_Puzzle3R_PoleC_30:
# 2297 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleC_29

AedesLux_Script_Puzzle3R_PoleC_33:
# 2303 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_34:
# 2302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_33
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_35:
# 2302 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleC_34
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_39:
# 2306 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_40:
# 2305 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleC_39
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_41:
# 2305 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_40
	goto AedesLux_Script_Puzzle3R_PoleC_21


AedesLux_Script_Puzzle3R_PoleD::
# 2319 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_2
AedesLux_Script_Puzzle3R_PoleD_1:
# 2323 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_5
# 2326 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleD_4:
# 2328 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2330 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_9
AedesLux_Script_Puzzle3R_PoleD_8:
# 2367 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleD_2:
# 2320 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleD_1

AedesLux_Script_Puzzle3R_PoleD_5:
# 2324 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleD_4

AedesLux_Script_Puzzle3R_PoleD_9:
# 2332 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2333 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_13
AedesLux_Script_Puzzle3R_PoleD_11:
# 2336 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_18
AedesLux_Script_Puzzle3R_PoleD_16:
# 2339 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_23
AedesLux_Script_Puzzle3R_PoleD_21:
# 2344 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_29
AedesLux_Script_Puzzle3R_PoleD_28:
# 2348 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_37
AedesLux_Script_Puzzle3R_PoleD_36:
# 2352 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2354 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_41
AedesLux_Script_Puzzle3R_PoleD_39:
# 2357 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_47
AedesLux_Script_Puzzle3R_PoleD_44:
# 2361 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
AedesLux_Script_Puzzle3R_PoleD_26:
# 2364 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleD_8

AedesLux_Script_Puzzle3R_PoleD_12:
# 2334 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_13:
# 2333 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_12
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_17:
# 2337 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_18:
# 2336 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_17
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_22:
# 2340 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_23:
# 2339 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_22
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_27:
# 2345 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleD_26

AedesLux_Script_Puzzle3R_PoleD_29:
# 2344 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_27
# 2344 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_27
# 2344 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_27
	goto AedesLux_Script_Puzzle3R_PoleD_28

AedesLux_Script_Puzzle3R_PoleD_37:
# 2349 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleD_36

AedesLux_Script_Puzzle3R_PoleD_40:
# 2355 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_41:
# 2354 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_40
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_45:
# 2358 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_46:
# 2357 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleD_45
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_47:
# 2357 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_46
	goto AedesLux_Script_Puzzle3R_PoleD_44


AedesLux_Script_Puzzle3R_PoleE::
# 2373 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_2
AedesLux_Script_Puzzle3R_PoleE_1:
# 2377 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_5
# 2380 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleE_4:
# 2382 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2384 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_9
AedesLux_Script_Puzzle3R_PoleE_8:
# 2422 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleE_2:
# 2374 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleE_1

AedesLux_Script_Puzzle3R_PoleE_5:
# 2378 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleE_4

AedesLux_Script_Puzzle3R_PoleE_9:
# 2386 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2387 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_13
AedesLux_Script_Puzzle3R_PoleE_11:
# 2390 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_18
AedesLux_Script_Puzzle3R_PoleE_16:
# 2393 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_23
AedesLux_Script_Puzzle3R_PoleE_21:
# 2398 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_29
AedesLux_Script_Puzzle3R_PoleE_28:
# 2402 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_37
AedesLux_Script_Puzzle3R_PoleE_36:
# 2406 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_42
AedesLux_Script_Puzzle3R_PoleE_39:
# 2411 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_49
AedesLux_Script_Puzzle3R_PoleE_46:
# 2414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_55
AedesLux_Script_Puzzle3R_PoleE_26:
# 2419 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleE_8

AedesLux_Script_Puzzle3R_PoleE_12:
# 2388 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_13:
# 2387 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_12
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_17:
# 2391 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_18:
# 2390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_17
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_22:
# 2394 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_23:
# 2393 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_22
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_27:
# 2399 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_29:
# 2398 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_27
# 2398 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_27
# 2398 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_27
	goto AedesLux_Script_Puzzle3R_PoleE_28

AedesLux_Script_Puzzle3R_PoleE_37:
# 2403 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleE_36

AedesLux_Script_Puzzle3R_PoleE_40:
# 2409 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_41:
# 2408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleE_40
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_42:
# 2408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_41
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_47:
# 2412 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_48:
# 2411 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_47
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_49:
# 2411 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_48
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_53:
# 2415 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_54:
# 2414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleE_53
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_55:
# 2414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_54
	goto AedesLux_Script_Puzzle3R_PoleE_26


AedesLux_Script_Puzzle3R_PoleF::
# 2428 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_2
AedesLux_Script_Puzzle3R_PoleF_1:
# 2432 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_5
# 2435 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleF_4:
# 2437 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2439 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_9
AedesLux_Script_Puzzle3R_PoleF_8:
# 2477 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleF_2:
# 2429 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleF_1

AedesLux_Script_Puzzle3R_PoleF_5:
# 2433 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleF_4

AedesLux_Script_Puzzle3R_PoleF_9:
# 2441 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2442 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_13
AedesLux_Script_Puzzle3R_PoleF_11:
# 2445 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_18
AedesLux_Script_Puzzle3R_PoleF_16:
# 2448 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_23
AedesLux_Script_Puzzle3R_PoleF_21:
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_29
AedesLux_Script_Puzzle3R_PoleF_28:
# 2457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_37
AedesLux_Script_Puzzle3R_PoleF_36:
# 2461 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2463 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_41
AedesLux_Script_Puzzle3R_PoleF_39:
# 2466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_47
AedesLux_Script_Puzzle3R_PoleF_44:
# 2469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_52
AedesLux_Script_Puzzle3R_PoleF_26:
# 2474 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleF_8

AedesLux_Script_Puzzle3R_PoleF_12:
# 2443 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_13:
# 2442 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_12
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_17:
# 2446 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_18:
# 2445 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_17
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_22:
# 2449 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_23:
# 2448 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_22
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_27:
# 2454 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_29:
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_27
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_27
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_27
	goto AedesLux_Script_Puzzle3R_PoleF_28

AedesLux_Script_Puzzle3R_PoleF_37:
# 2458 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleF_36

AedesLux_Script_Puzzle3R_PoleF_40:
# 2464 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_41:
# 2463 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_40
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_45:
# 2467 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_46:
# 2466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleF_45
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_47:
# 2466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_46
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_51:
# 2470 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_52:
# 2469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_PoleF_51
	goto AedesLux_Script_Puzzle3R_PoleF_26


AedesLux_Script_Puzzle3R_Pole10::
# 2483 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_2
AedesLux_Script_Puzzle3R_Pole10_1:
# 2487 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_5
# 2490 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole10_4:
# 2492 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2494 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_9
AedesLux_Script_Puzzle3R_Pole10_8:
# 2525 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole10_2:
# 2484 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole10_1

AedesLux_Script_Puzzle3R_Pole10_5:
# 2488 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole10_4

AedesLux_Script_Puzzle3R_Pole10_9:
# 2496 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2497 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_13
AedesLux_Script_Puzzle3R_Pole10_11:
# 2500 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_18
AedesLux_Script_Puzzle3R_Pole10_16:
# 2505 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_24
AedesLux_Script_Puzzle3R_Pole10_23:
# 2509 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_30
AedesLux_Script_Puzzle3R_Pole10_29:
# 2513 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 2515 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_35
AedesLux_Script_Puzzle3R_Pole10_32:
# 2519 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
AedesLux_Script_Puzzle3R_Pole10_21:
# 2522 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole10_8

AedesLux_Script_Puzzle3R_Pole10_12:
# 2498 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_13:
# 2497 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_12
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_17:
# 2501 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_18:
# 2500 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_17
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_22:
# 2506 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole10_21

AedesLux_Script_Puzzle3R_Pole10_24:
# 2505 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_22
# 2505 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_22
	goto AedesLux_Script_Puzzle3R_Pole10_23

AedesLux_Script_Puzzle3R_Pole10_30:
# 2510 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole10_29

AedesLux_Script_Puzzle3R_Pole10_33:
# 2516 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_34:
# 2515 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole10_33
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_35:
# 2515 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_Pole10_34
	goto AedesLux_Script_Puzzle3R_Pole10_32


AedesLux_Script_Puzzle3R_Pole11::
# 2531 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_2
AedesLux_Script_Puzzle3R_Pole11_1:
# 2535 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_5
# 2538 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole11_4:
# 2540 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2542 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_9
AedesLux_Script_Puzzle3R_Pole11_8:
# 2568 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole11_2:
# 2532 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole11_1

AedesLux_Script_Puzzle3R_Pole11_5:
# 2536 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole11_4

AedesLux_Script_Puzzle3R_Pole11_9:
# 2544 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2545 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole11_13
AedesLux_Script_Puzzle3R_Pole11_11:
# 2550 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_19
AedesLux_Script_Puzzle3R_Pole11_18:
# 2554 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_23
AedesLux_Script_Puzzle3R_Pole11_22:
# 2558 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 2560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_27
AedesLux_Script_Puzzle3R_Pole11_16:
# 2565 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole11_8

AedesLux_Script_Puzzle3R_Pole11_12:
# 2546 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_13:
# 2545 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_12
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_17:
# 2551 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_19:
# 2550 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_17
	goto AedesLux_Script_Puzzle3R_Pole11_18

AedesLux_Script_Puzzle3R_Pole11_23:
# 2555 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole11_22

AedesLux_Script_Puzzle3R_Pole11_25:
# 2561 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_26:
# 2560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole11_25
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_27:
# 2560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_Pole11_26
	goto AedesLux_Script_Puzzle3R_Pole11_16


AedesLux_Script_Puzzle3R_Pole12::
# 2574 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_2
AedesLux_Script_Puzzle3R_Pole12_1:
# 2578 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_5
# 2581 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole12_4:
# 2583 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2585 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_9
AedesLux_Script_Puzzle3R_Pole12_8:
# 2611 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole12_2:
# 2575 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole12_1

AedesLux_Script_Puzzle3R_Pole12_5:
# 2579 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole12_4

AedesLux_Script_Puzzle3R_Pole12_9:
# 2587 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2588 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole12_13
AedesLux_Script_Puzzle3R_Pole12_11:
# 2593 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_19
AedesLux_Script_Puzzle3R_Pole12_18:
# 2597 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_23
AedesLux_Script_Puzzle3R_Pole12_22:
# 2601 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 2603 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_26
AedesLux_Script_Puzzle3R_Pole12_16:
# 2608 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole12_8

AedesLux_Script_Puzzle3R_Pole12_12:
# 2589 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_13:
# 2588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_12
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_17:
# 2594 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_12
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_19:
# 2593 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_17
	goto AedesLux_Script_Puzzle3R_Pole12_18

AedesLux_Script_Puzzle3R_Pole12_23:
# 2598 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole12_22

AedesLux_Script_Puzzle3R_Pole12_25:
# 2604 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_26:
# 2603 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole12_25
	goto AedesLux_Script_Puzzle3R_Pole12_16


AedesLux_Script_ResetPuzzle1::
# 2619 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2620 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1_1
# 2634 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1_1:
# 2622 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1_4
# 2627 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2628 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2629 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2630 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
# 2631 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1_4:
# 2623 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2624 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1L::
# 2640 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2641 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1L_1
# 2659 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1L_1:
# 2643 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1L_4
# 2648 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2649 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2650 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2651 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2652 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2653 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2654 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 2655 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2656 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1L_4:
# 2644 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2645 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1R::
# 2665 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2666 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1R_1
# 2684 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1R_1:
# 2668 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1R_4
# 2673 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2674 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2675 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2676 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2677 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2678 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2679 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 2680 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 2681 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1R_4:
# 2669 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2670 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2::
# 2690 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2691 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2_1
# 2705 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2_1:
# 2693 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2_4
# 2698 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2699 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2700 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2701 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 2702 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2_4:
# 2694 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2695 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2L::
# 2711 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2712 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2L_1
# 2732 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2L_1:
# 2714 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2L_4
# 2719 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2720 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2721 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2722 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 2723 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2724 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2725 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2726 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2727 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2728 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 2729 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2L_4:
# 2715 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2716 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2R::
# 2738 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2739 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2R_1
# 2762 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2R_1:
# 2741 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2R_4
# 2746 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2747 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2748 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2749 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2750 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2751 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2752 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2753 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2754 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2755 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2756 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 2757 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 2758 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 2759 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2R_4:
# 2742 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2743 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3L::
# 2768 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2769 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3L_1
# 2783 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3L_1:
# 2771 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3L_4
# 2776 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2777 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2778 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2779 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 2780 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3L_4:
# 2772 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2773 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3R::
# 2789 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2790 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3R_1
# 2804 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3R_1:
# 2792 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3R_4
# 2797 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2798 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2799 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2800 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
# 2801 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3R_4:
# 2793 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2794 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_UpdatePuzzle::
# 2811 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2812 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2814 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_A
# 2816 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_UpdatePuzzle_3
# 2818 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_UpdatePuzzle_4
# 2820 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_UpdatePuzzle_5
# 2822 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_UpdatePuzzle_6
# 2827 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_1
# 2828 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_UpdatePuzzle_1:
	return

AedesLux_Script_UpdatePuzzle_3:
# 2817 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_4:
# 2819 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_5:
# 2821 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_6:
# 2823 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_0
# 2824 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_DrawPuzzle1::
# 2838 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 2839 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 2840 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 2842 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle2::
# 2848 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle2
# 2849 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 2850 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 2852 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle3::
# 2858 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle3
# 2859 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 2860 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
# 2862 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle1L::
# 2868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 2874 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 2875 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 2876 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2877 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 2880 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 2885 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2886 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 2887 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 2890 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 2896 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 2897 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 2898 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2899 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 2902 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 2907 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2908 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 2909 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 2869 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2870 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 2871 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2872 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 2868 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 2881 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2882 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2883 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 2880 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 2891 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2892 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2893 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2894 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 2890 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 2903 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2904 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2905 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 2902 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
# 2916 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle1R_4
AedesLux_Script_DrawPuzzle1R_3:
# 2921 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2922 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor, FALSE
# 2923 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_1:
# 2926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_10
AedesLux_Script_DrawPuzzle1R_9:
# 2931 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2932 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor, FALSE
# 2933 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_7:
# 2936 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_16
AedesLux_Script_DrawPuzzle1R_15:
# 2942 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor, FALSE
# 2943 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor, FALSE
# 2944 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor, FALSE
# 2945 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_13:
# 2948 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_22
AedesLux_Script_DrawPuzzle1R_21:
# 2954 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor, FALSE
# 2955 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor, FALSE
# 2956 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor, FALSE
# 2957 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_19:
	return

AedesLux_Script_DrawPuzzle1R_2:
# 2917 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2918 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2919 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_1

AedesLux_Script_DrawPuzzle1R_4:
# 2916 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_2
	goto AedesLux_Script_DrawPuzzle1R_3

AedesLux_Script_DrawPuzzle1R_8:
# 2927 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2928 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2929 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_7

AedesLux_Script_DrawPuzzle1R_10:
# 2926 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_8
	goto AedesLux_Script_DrawPuzzle1R_9

AedesLux_Script_DrawPuzzle1R_14:
# 2937 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2938 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2939 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2940 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_13

AedesLux_Script_DrawPuzzle1R_16:
# 2936 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_14
	goto AedesLux_Script_DrawPuzzle1R_15

AedesLux_Script_DrawPuzzle1R_20:
# 2949 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2950 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2951 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2952 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_19

AedesLux_Script_DrawPuzzle1R_22:
# 2948 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle1R_20
	goto AedesLux_Script_DrawPuzzle1R_21


AedesLux_Script_DrawPuzzle2L::
# 2965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_4
AedesLux_Script_DrawPuzzle2L_3:
# 2971 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall, TRUE
# 2972 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall, TRUE
# 2973 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2974 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_1:
# 2977 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_10
AedesLux_Script_DrawPuzzle2L_9:
# 2983 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall, TRUE
# 2984 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall, TRUE
# 2985 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2986 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_7:
# 2989 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_16
AedesLux_Script_DrawPuzzle2L_15:
# 2994 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2995 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor, FALSE
# 2996 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_13:
# 2999 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_22
AedesLux_Script_DrawPuzzle2L_21:
# 3005 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor, FALSE
# 3006 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor, FALSE
# 3007 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor, FALSE
# 3008 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_19:
# 3011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_28
AedesLux_Script_DrawPuzzle2L_27:
# 3016 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3017 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3018 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_25:
# 3021 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_34
AedesLux_Script_DrawPuzzle2L_33:
# 3026 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3027 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor, FALSE
# 3028 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_31:
# 3031 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_40
AedesLux_Script_DrawPuzzle2L_39:
# 3037 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor, FALSE
# 3038 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor, FALSE
# 3039 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor, FALSE
# 3040 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_37:
	return

AedesLux_Script_DrawPuzzle2L_2:
# 2966 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2967 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2968 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2969 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_1

AedesLux_Script_DrawPuzzle2L_4:
# 2965 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_2
	goto AedesLux_Script_DrawPuzzle2L_3

AedesLux_Script_DrawPuzzle2L_8:
# 2978 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2979 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2980 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2981 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_7

AedesLux_Script_DrawPuzzle2L_10:
# 2977 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle2L_8
	goto AedesLux_Script_DrawPuzzle2L_9

AedesLux_Script_DrawPuzzle2L_14:
# 2990 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2991 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2992 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_13

AedesLux_Script_DrawPuzzle2L_16:
# 2989 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_14
	goto AedesLux_Script_DrawPuzzle2L_15

AedesLux_Script_DrawPuzzle2L_20:
# 3000 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3001 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3002 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3003 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_19

AedesLux_Script_DrawPuzzle2L_22:
# 2999 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_20
	goto AedesLux_Script_DrawPuzzle2L_21

AedesLux_Script_DrawPuzzle2L_26:
# 3012 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3013 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3014 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_25

AedesLux_Script_DrawPuzzle2L_28:
# 3011 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_26
	goto AedesLux_Script_DrawPuzzle2L_27

AedesLux_Script_DrawPuzzle2L_32:
# 3022 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3023 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3024 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_31

AedesLux_Script_DrawPuzzle2L_34:
# 3021 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_32
	goto AedesLux_Script_DrawPuzzle2L_33

AedesLux_Script_DrawPuzzle2L_38:
# 3032 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3033 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3034 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3035 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_37

AedesLux_Script_DrawPuzzle2L_40:
# 3031 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_38
	goto AedesLux_Script_DrawPuzzle2L_39


AedesLux_Script_DrawPuzzle2R::
# 3047 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_4
AedesLux_Script_DrawPuzzle2R_3:
# 3053 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall, TRUE
# 3054 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall, TRUE
# 3055 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3056 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_1:
# 3059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_10
AedesLux_Script_DrawPuzzle2R_9:
# 3065 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall, TRUE
# 3066 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall, TRUE
# 3067 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3068 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_7:
# 3071 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_16
AedesLux_Script_DrawPuzzle2R_15:
# 3077 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall, TRUE
# 3078 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol, TRUE
# 3079 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3080 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_13:
# 3083 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_22
AedesLux_Script_DrawPuzzle2R_21:
# 3088 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3089 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3090 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_19:
# 3093 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_28
AedesLux_Script_DrawPuzzle2R_27:
# 3098 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3099 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor, FALSE
# 3100 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_25:
# 3103 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_34
AedesLux_Script_DrawPuzzle2R_33:
# 3109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor, FALSE
# 3110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor, FALSE
# 3111 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor, FALSE
# 3112 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_31:
# 3115 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_40
AedesLux_Script_DrawPuzzle2R_39:
# 3120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3122 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_37:
# 3125 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_46
AedesLux_Script_DrawPuzzle2R_45:
# 3130 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3131 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor, FALSE
# 3132 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_43:
# 3135 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle2R_52
AedesLux_Script_DrawPuzzle2R_51:
# 3141 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor, FALSE
# 3142 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3143 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor, FALSE
# 3144 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_49:
# 3147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_58
AedesLux_Script_DrawPuzzle2R_57:
# 3153 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3154 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3155 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3156 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_55:
# 3159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_64
AedesLux_Script_DrawPuzzle2R_63:
# 3165 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor, FALSE
# 3166 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor, FALSE
# 3167 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor, FALSE
# 3168 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_61:
	return

AedesLux_Script_DrawPuzzle2R_2:
# 3048 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3049 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3050 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3051 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_1

AedesLux_Script_DrawPuzzle2R_4:
# 3047 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_2
	goto AedesLux_Script_DrawPuzzle2R_3

AedesLux_Script_DrawPuzzle2R_8:
# 3060 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3061 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3062 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3063 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_7

AedesLux_Script_DrawPuzzle2R_10:
# 3059 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_8
	goto AedesLux_Script_DrawPuzzle2R_9

AedesLux_Script_DrawPuzzle2R_14:
# 3072 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3073 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 3074 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3075 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_13

AedesLux_Script_DrawPuzzle2R_16:
# 3071 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_14
	goto AedesLux_Script_DrawPuzzle2R_15

AedesLux_Script_DrawPuzzle2R_20:
# 3084 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3085 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3086 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_19

AedesLux_Script_DrawPuzzle2R_22:
# 3083 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_20
	goto AedesLux_Script_DrawPuzzle2R_21

AedesLux_Script_DrawPuzzle2R_26:
# 3094 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3095 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3096 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_25

AedesLux_Script_DrawPuzzle2R_28:
# 3093 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_26
	goto AedesLux_Script_DrawPuzzle2R_27

AedesLux_Script_DrawPuzzle2R_32:
# 3104 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3105 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3106 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3107 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_31

AedesLux_Script_DrawPuzzle2R_34:
# 3103 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_32
	goto AedesLux_Script_DrawPuzzle2R_33

AedesLux_Script_DrawPuzzle2R_38:
# 3116 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3117 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3118 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_37

AedesLux_Script_DrawPuzzle2R_40:
# 3115 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_38
	goto AedesLux_Script_DrawPuzzle2R_39

AedesLux_Script_DrawPuzzle2R_44:
# 3126 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3127 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3128 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_43

AedesLux_Script_DrawPuzzle2R_46:
# 3125 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_44
	goto AedesLux_Script_DrawPuzzle2R_45

AedesLux_Script_DrawPuzzle2R_50:
# 3136 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3137 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3138 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3139 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_49

AedesLux_Script_DrawPuzzle2R_52:
# 3135 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_50
	goto AedesLux_Script_DrawPuzzle2R_51

AedesLux_Script_DrawPuzzle2R_56:
# 3148 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 3149 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3150 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3151 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_55

AedesLux_Script_DrawPuzzle2R_58:
# 3147 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_56
	goto AedesLux_Script_DrawPuzzle2R_57

AedesLux_Script_DrawPuzzle2R_62:
# 3160 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3161 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3162 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3163 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_61

AedesLux_Script_DrawPuzzle2R_64:
# 3159 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_62
	goto AedesLux_Script_DrawPuzzle2R_63


AedesLux_Script_DrawPuzzle3L::
# 3175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle3L_4
AedesLux_Script_DrawPuzzle3L_3:
# 3181 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall, TRUE
# 3182 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall, TRUE
# 3183 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3184 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle3L_1:
# 3187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_10
AedesLux_Script_DrawPuzzle3L_9:
# 3192 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3193 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3194 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_7:
# 3197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle3L_16
AedesLux_Script_DrawPuzzle3L_15:
# 3202 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3203 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3204 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_13:
# 3207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_22
AedesLux_Script_DrawPuzzle3L_21:
# 3212 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3213 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3214 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_19:
# 3217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_28
AedesLux_Script_DrawPuzzle3L_27:
# 3223 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor, FALSE
# 3224 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3225 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor, FALSE
# 3226 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_25:
# 3229 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_34
AedesLux_Script_DrawPuzzle3L_33:
# 3235 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor, FALSE
# 3236 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3237 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor, FALSE
# 3238 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_31:
# 3241 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_40
AedesLux_Script_DrawPuzzle3L_39:
# 3246 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3247 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor, FALSE
# 3248 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_37:
# 3251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_46
AedesLux_Script_DrawPuzzle3L_45:
# 3257 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor, FALSE
# 3258 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor, FALSE
# 3259 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor, FALSE
# 3260 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_43:
	return

AedesLux_Script_DrawPuzzle3L_2:
# 3176 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3177 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3178 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3179 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_1

AedesLux_Script_DrawPuzzle3L_4:
# 3175 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_2
	goto AedesLux_Script_DrawPuzzle3L_3

AedesLux_Script_DrawPuzzle3L_8:
# 3188 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3189 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3190 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_7

AedesLux_Script_DrawPuzzle3L_10:
# 3187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_8
	goto AedesLux_Script_DrawPuzzle3L_9

AedesLux_Script_DrawPuzzle3L_14:
# 3198 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3199 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3200 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_13

AedesLux_Script_DrawPuzzle3L_16:
# 3197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_14
	goto AedesLux_Script_DrawPuzzle3L_15

AedesLux_Script_DrawPuzzle3L_20:
# 3208 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3209 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3210 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_19

AedesLux_Script_DrawPuzzle3L_22:
# 3207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_20
	goto AedesLux_Script_DrawPuzzle3L_21

AedesLux_Script_DrawPuzzle3L_26:
# 3218 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3219 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3220 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3221 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_25

AedesLux_Script_DrawPuzzle3L_28:
# 3217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_26
	goto AedesLux_Script_DrawPuzzle3L_27

AedesLux_Script_DrawPuzzle3L_32:
# 3230 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3231 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3232 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3233 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_31

AedesLux_Script_DrawPuzzle3L_34:
# 3229 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_32
	goto AedesLux_Script_DrawPuzzle3L_33

AedesLux_Script_DrawPuzzle3L_38:
# 3242 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3243 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3244 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_37

AedesLux_Script_DrawPuzzle3L_40:
# 3241 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle3L_38
	goto AedesLux_Script_DrawPuzzle3L_39

AedesLux_Script_DrawPuzzle3L_44:
# 3252 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3253 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3254 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3255 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_43

AedesLux_Script_DrawPuzzle3L_46:
# 3251 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle3L_44
	goto AedesLux_Script_DrawPuzzle3L_45


AedesLux_Script_DrawPuzzle3R::
# 3267 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_4
AedesLux_Script_DrawPuzzle3R_3:
# 3273 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner, TRUE
# 3274 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3275 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3276 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow, FALSE
AedesLux_Script_DrawPuzzle3R_1:
# 3279 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_10
AedesLux_Script_DrawPuzzle3R_9:
# 3284 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3285 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor, FALSE
# 3286 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_7:
# 3289 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_16
AedesLux_Script_DrawPuzzle3R_15:
# 3295 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor, FALSE
# 3296 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor, FALSE
# 3297 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor, FALSE
# 3298 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_13:
# 3301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_22
AedesLux_Script_DrawPuzzle3R_21:
# 3306 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3307 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor, FALSE
# 3308 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_19:
# 3311 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_28
AedesLux_Script_DrawPuzzle3R_27:
# 3316 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3317 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor, FALSE
# 3318 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_25:
# 3321 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_34
AedesLux_Script_DrawPuzzle3R_33:
# 3326 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3327 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor, FALSE
# 3328 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_31:
# 3331 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_40
AedesLux_Script_DrawPuzzle3R_39:
# 3337 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor, FALSE
# 3338 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor, FALSE
# 3339 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor, FALSE
# 3340 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_37:
# 3343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_46
AedesLux_Script_DrawPuzzle3R_45:
# 3349 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor, FALSE
# 3350 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor, FALSE
# 3351 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor, FALSE
# 3352 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_43:
# 3355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_52
AedesLux_Script_DrawPuzzle3R_51:
# 3361 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3362 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3363 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor, FALSE
# 3364 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_49:
# 3367 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_58
AedesLux_Script_DrawPuzzle3R_57:
# 3372 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3373 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor, FALSE
# 3374 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_55:
	return

AedesLux_Script_DrawPuzzle3R_2:
# 3268 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner_Electric_TopLeft, TRUE
# 3269 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow_Electric_TopRight, TRUE
# 3270 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3271 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_1

AedesLux_Script_DrawPuzzle3R_4:
# 3267 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_2
	goto AedesLux_Script_DrawPuzzle3R_3

AedesLux_Script_DrawPuzzle3R_8:
# 3280 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3281 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3282 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_7

AedesLux_Script_DrawPuzzle3R_10:
# 3279 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_8
	goto AedesLux_Script_DrawPuzzle3R_9

AedesLux_Script_DrawPuzzle3R_14:
# 3290 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3291 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3292 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3293 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_13

AedesLux_Script_DrawPuzzle3R_16:
# 3289 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_14
	goto AedesLux_Script_DrawPuzzle3R_15

AedesLux_Script_DrawPuzzle3R_20:
# 3302 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3303 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3304 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_19

AedesLux_Script_DrawPuzzle3R_22:
# 3301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_20
	goto AedesLux_Script_DrawPuzzle3R_21

AedesLux_Script_DrawPuzzle3R_26:
# 3312 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3313 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3314 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_25

AedesLux_Script_DrawPuzzle3R_28:
# 3311 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_26
	goto AedesLux_Script_DrawPuzzle3R_27

AedesLux_Script_DrawPuzzle3R_32:
# 3322 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3323 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3324 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_31

AedesLux_Script_DrawPuzzle3R_34:
# 3321 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle3R_32
	goto AedesLux_Script_DrawPuzzle3R_33

AedesLux_Script_DrawPuzzle3R_38:
# 3332 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3333 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3334 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3335 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_37

AedesLux_Script_DrawPuzzle3R_40:
# 3331 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_38
	goto AedesLux_Script_DrawPuzzle3R_39

AedesLux_Script_DrawPuzzle3R_44:
# 3344 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3345 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3346 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3347 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_43

AedesLux_Script_DrawPuzzle3R_46:
# 3343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_44
	goto AedesLux_Script_DrawPuzzle3R_45

AedesLux_Script_DrawPuzzle3R_50:
# 3356 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 3357 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3358 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3359 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_49

AedesLux_Script_DrawPuzzle3R_52:
# 3355 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_50
	goto AedesLux_Script_DrawPuzzle3R_51

AedesLux_Script_DrawPuzzle3R_56:
# 3368 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3369 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3370 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_55

AedesLux_Script_DrawPuzzle3R_58:
# 3367 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_DrawPuzzle3R_56
	goto AedesLux_Script_DrawPuzzle3R_57


AedesLux_Script_CheckSolvePuzzle1::
# 3382 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 3393 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 3384 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_8
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 3383 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 3386 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle1_12
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_8:
# 3385 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_11:
# 3388 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_16
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_12:
# 3387 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_15:
# 3390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle1_19
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_16:
# 3389 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle1_15
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_19:
# 3391 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_CheckSolvePuzzle2::
# 3400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle2_4
AedesLux_Script_CheckSolvePuzzle2_1:
	return

AedesLux_Script_CheckSolvePuzzle2_2:
# 3419 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_3:
# 3402 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle2_8
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_4:
# 3401 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle2_3
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_7:
# 3404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle2_12
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_8:
# 3403 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle2_7
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_11:
# 3406 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle2_16
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_12:
# 3405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle2_11
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_15:
# 3408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle2_20
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_16:
# 3407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle2_15
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_19:
# 3410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle2_24
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_20:
# 3409 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle2_19
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_23:
# 3412 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle2_28
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_24:
# 3411 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle2_23
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_27:
# 3414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle2_32
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_28:
# 3413 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle2_27
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_31:
# 3416 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle2_2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_32:
# 3415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle2_31
	goto AedesLux_Script_CheckSolvePuzzle2_1


AedesLux_Script_CheckSolvePuzzle3::
# 3426 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle3_4
AedesLux_Script_CheckSolvePuzzle3_1:
	return

AedesLux_Script_CheckSolvePuzzle3_2:
# 3446 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_3:
# 3428 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle3_8
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_4:
# 3427 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle3_3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_7:
# 3430 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle3_12
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_8:
# 3429 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle3_7
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_11:
# 3432 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle3_16
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_12:
# 3431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle3_11
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_15:
# 3434 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle3_20
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_16:
# 3433 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle3_15
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_19:
# 3436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle3_24
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_20:
# 3435 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle3_19
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_23:
# 3438 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle3_28
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_24:
# 3437 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle3_23
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_27:
# 3440 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle3_32
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_28:
# 3439 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle3_27
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_31:
# 3442 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle3_35
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_32:
# 3441 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle3_31
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_35:
# 3443 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_CheckSolvePuzzle3_2
	goto AedesLux_Script_CheckSolvePuzzle3_1


AedesLux_Script_ClearAllFlags::
# 3452 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 3453 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 3454 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 3455 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 3456 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 3457 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 3458 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 3459 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 3460 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 3461 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 3462 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 3463 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 3464 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 3465 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 3466 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 3467 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 3468 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 3469 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 3470 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 3471 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 3472 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
	return


AedesLux_Script_SetAllFlags::
# 3477 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 3478 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 3479 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 3480 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 3481 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 3482 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 3483 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
# 3484 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
# 3485 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 3486 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 3487 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
# 3488 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 3489 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
# 3490 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
# 3491 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
# 3492 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 3493 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 3494 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 3495 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_13
# 3496 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_14
# 3497 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_15
	return


AedesLux_Script_OpenPuzzle::
# 3503 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 4
# 3505 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetAllFlags
# 3506 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 3507 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 3508 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 3509 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 3510 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 3511 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
	return


AedesLux_Script_SolvedPuzzle_Text_0:
# 283 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B = 0$"

AedesLux_Script_SolvedPuzzle_Text_1:
# 327 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B OOB$"

AedesLux_Script_UpdatePuzzle_Text_0:
# 2823 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A = 3$"

AedesLux_Script_UpdatePuzzle_Text_1:
# 2827 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB$"

AedesLux_Text_NothingHappened::
# 3515 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 3519 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 3523 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 3527 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 3531 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"

AedesLux_Text_PoleCompleted::
# 3535 "data/maps/AedesLux_1F/scripts.pory"
	.string "The switch seems stuck in place.$"

AedesLux_Text_ZeldaPre::
# 3539 "data/maps/AedesLux_1F/scripts.pory"
	.string "I am Zelda, the princess of Hyrule. The\n"
	.string "Green Hero trusted me to protect the\l"
	.string "Trivis Sapientiae. You will never take\l"
	.string "it, as long as I draw breath!$"

AedesLux_Text_ZeldaLost::
# 3546 "data/maps/AedesLux_1F/scripts.pory"
	.string "I am beaten...Hyrule, I have failed you...$"
