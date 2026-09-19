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
# 81 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_Warp_1:
# 79 "data/maps/AedesLux_1F/scripts.pory"
	warpsilent MAP_AEDES_LUX_1F, 17, 47
	return


AedesLux_Script_SheikStairSceneR::
# 87 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 90 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 91 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 95 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 96 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 17, 36
# 97 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 100 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 102 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 2
# 104 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 105 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_SheikStairSceneL::
# 110 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 111 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 113 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 118 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 119 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 16, 36
# 120 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 121 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 123 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 125 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 2
# 127 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 128 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_HideSheikStairs::
# 133 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 134 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 136 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 137 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 139 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 141 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 142 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 0, 0
# 143 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_INVISIBLE
# 144 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 146 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 148 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 3
# 150 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 151 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_SheikBattle::
# 156 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 157 "data/maps/AedesLux_1F/scripts.pory"
	lockall
# 159 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 160 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 162 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 164 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 165 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 20, 31
# 166 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_FACE_DOWN
# 167 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 169 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 171 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 172 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/AedesLux_1F/scripts.pory"
	delay 40
# 176 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 178 "data/maps/AedesLux_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_SHEIK, AedesAqua_MiniBossRoom_Text_DarkBrendanLost
# 180 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 181 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_SHEIK
# 182 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_SHEIK, 0, 0
# 183 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_SHEIK, MOVEMENT_TYPE_INVISIBLE
# 184 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_SHEIK
# 186 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 188 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 189 "data/maps/AedesLux_1F/scripts.pory"
	releaseall
	end


AedesLux_Script_ZeldaTrigger1::
# 196 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 197 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 198 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger2::
# 204 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger3::
# 210 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 211 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaTrigger4::
# 218 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
# 219 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ZeldaScene
	return


AedesLux_Script_ZeldaScene::
# 226 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 227 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 229 "data/maps/AedesLux_1F/scripts.pory"
	load_field_pic FIELD_PIC_ZELDA, 190, 98
# 230 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_ZeldaPre
# 231 "data/maps/AedesLux_1F/scripts.pory"
	destroy_field_pic FIELD_PIC_ZELDA
# 232 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 234 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 236 "data/maps/AedesLux_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_ZELDA, AedesLux_Text_ZeldaLost
# 238 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 239 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_ZELDA
# 240 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_ZELDA, 0, 0
# 241 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_ZELDA, MOVEMENT_TYPE_INVISIBLE
# 242 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_ZELDA
# 244 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 4
	end


AedesLux_Script_Trivis::
# 251 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_BossRoom_Text_Trivis
# 252 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 254 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 255 "data/maps/AedesLux_1F/scripts.pory"
	delay 40
# 257 "data/maps/AedesLux_1F/scripts.pory"
	removeobject LOCALID_AEDESLUX_TRIVIS
# 258 "data/maps/AedesLux_1F/scripts.pory"
	setobjectxyperm LOCALID_AEDESLUX_TRIVIS, 0, 0
# 259 "data/maps/AedesLux_1F/scripts.pory"
	setobjectmovementtype LOCALID_AEDESLUX_TRIVIS, MOVEMENT_TYPE_INVISIBLE
# 260 "data/maps/AedesLux_1F/scripts.pory"
	addobject LOCALID_AEDESLUX_TRIVIS
# 262 "data/maps/AedesLux_1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 264 "data/maps/AedesLux_1F/scripts.pory"
	giveitem ITEM_TRIVIS_SAPIENTIAE
# 266 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_AEDESLUX_TRIVIS
# 267 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_SolvedPuzzle::
# 272 "data/maps/AedesLux_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 273 "data/maps/AedesLux_1F/scripts.pory"
	waitmovement 0
# 275 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_EFFECTIVE
# 276 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 280 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_B
# 281 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_SolvedPuzzle_3
# 285 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_SolvedPuzzle_4
# 299 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_SolvedPuzzle_5
# 313 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_SolvedPuzzle_6
# 326 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_1
# 327 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_1:
# 331 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
	end

AedesLux_Script_SolvedPuzzle_3:
# 282 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_SolvedPuzzle_Text_0
# 283 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_SolvedPuzzle_4:
# 287 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 40, METATILE_MauvilleGym_StairsL, FALSE
# 288 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 40, METATILE_MauvilleGym_StairsR, FALSE
# 289 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 41, METATILE_MauvilleGym_StairsL, FALSE
# 290 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 41, METATILE_MauvilleGym_StairsR, FALSE
# 291 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 292 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 294 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 296 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 298 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_5:
# 301 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 29, METATILE_MauvilleGym_StairsL, FALSE
# 302 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 29, METATILE_MauvilleGym_StairsR, FALSE
# 303 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 30, METATILE_MauvilleGym_StairsL, FALSE
# 304 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 30, METATILE_MauvilleGym_StairsR, FALSE
# 305 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 306 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 308 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 310 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3Flags
# 312 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 2
	goto AedesLux_Script_SolvedPuzzle_1

AedesLux_Script_SolvedPuzzle_6:
# 315 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 18, METATILE_MauvilleGym_StairsL, FALSE
# 316 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 18, METATILE_MauvilleGym_StairsR, FALSE
# 317 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 19, METATILE_MauvilleGym_StairsL, FALSE
# 318 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 19, METATILE_MauvilleGym_StairsR, FALSE
# 319 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 16, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 320 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 17, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 322 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
# 324 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 3
	goto AedesLux_Script_SolvedPuzzle_1


AedesLux_Script_SetupPuzzle1Flags::
# 339 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 340 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 341 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 342 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 343 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	return


AedesLux_Script_SetupPuzzle2Flags::
# 348 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_ClearAllFlags
# 350 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 351 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 353 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 354 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 355 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	return


AedesLux_Script_SetupPuzzle3Flags::
# 360 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 361 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
	return


AedesLux_Script_SetupPuzzle3LFlags::
# 367 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 368 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 369 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 370 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 371 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 372 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 373 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 374 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 375 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 377 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 378 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 379 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 380 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 381 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	return


AedesLux_Script_SetupPuzzle3RFlags::
# 387 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 388 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 389 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 390 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 391 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 392 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 393 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 394 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 395 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 397 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 398 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	return


AedesLux_Script_PoleDanger::
# 405 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleDanger
# 406 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleCompleted::
# 411 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleCompleted
# 412 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_PoleNothingHappened::
# 417 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_NothingHappened
# 418 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_Puzzle1L_Pole1::
# 425 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_2
AedesLux_Script_Puzzle1L_Pole1_1:
# 429 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_5
# 432 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole1_4:
# 434 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 436 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole1_9
AedesLux_Script_Puzzle1L_Pole1_8:
# 468 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole1_2:
# 426 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole1_1

AedesLux_Script_Puzzle1L_Pole1_5:
# 430 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole1_4

AedesLux_Script_Puzzle1L_Pole1_9:
# 438 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 439 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_13
AedesLux_Script_Puzzle1L_Pole1_11:
# 442 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole1_18
AedesLux_Script_Puzzle1L_Pole1_16:
# 447 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_24
AedesLux_Script_Puzzle1L_Pole1_23:
# 451 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole1_30
AedesLux_Script_Puzzle1L_Pole1_29:
# 455 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_34
AedesLux_Script_Puzzle1L_Pole1_32:
# 460 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_38
AedesLux_Script_Puzzle1L_Pole1_21:
# 465 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole1_8

AedesLux_Script_Puzzle1L_Pole1_12:
# 440 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_13:
# 439 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_12
	goto AedesLux_Script_Puzzle1L_Pole1_11

AedesLux_Script_Puzzle1L_Pole1_17:
# 443 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_18:
# 442 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_17
	goto AedesLux_Script_Puzzle1L_Pole1_16

AedesLux_Script_Puzzle1L_Pole1_22:
# 448 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_24:
# 447 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole1_22
# 447 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole1_22
	goto AedesLux_Script_Puzzle1L_Pole1_23

AedesLux_Script_Puzzle1L_Pole1_30:
# 452 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole1_29

AedesLux_Script_Puzzle1L_Pole1_33:
# 458 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_34:
# 457 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole1_33
	goto AedesLux_Script_Puzzle1L_Pole1_32

AedesLux_Script_Puzzle1L_Pole1_37:
# 461 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole1_21

AedesLux_Script_Puzzle1L_Pole1_38:
# 460 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole1_37
	goto AedesLux_Script_Puzzle1L_Pole1_21


AedesLux_Script_Puzzle1L_Pole2::
# 474 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_2
AedesLux_Script_Puzzle1L_Pole2_1:
# 478 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_5
# 481 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole2_4:
# 483 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 485 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole2_9
AedesLux_Script_Puzzle1L_Pole2_8:
# 516 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole2_2:
# 475 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole2_1

AedesLux_Script_Puzzle1L_Pole2_5:
# 479 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole2_4

AedesLux_Script_Puzzle1L_Pole2_9:
# 487 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 488 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_13
AedesLux_Script_Puzzle1L_Pole2_11:
# 491 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole2_18
AedesLux_Script_Puzzle1L_Pole2_16:
# 496 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_24
AedesLux_Script_Puzzle1L_Pole2_23:
# 500 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole2_30
AedesLux_Script_Puzzle1L_Pole2_29:
# 504 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 506 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_34
AedesLux_Script_Puzzle1L_Pole2_32:
# 510 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle1L_Pole2_21:
# 513 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole2_8

AedesLux_Script_Puzzle1L_Pole2_12:
# 489 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_13:
# 488 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_12
	goto AedesLux_Script_Puzzle1L_Pole2_11

AedesLux_Script_Puzzle1L_Pole2_17:
# 492 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_18:
# 491 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_17
	goto AedesLux_Script_Puzzle1L_Pole2_16

AedesLux_Script_Puzzle1L_Pole2_22:
# 497 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole2_21

AedesLux_Script_Puzzle1L_Pole2_24:
# 496 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole2_22
# 496 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole2_22
	goto AedesLux_Script_Puzzle1L_Pole2_23

AedesLux_Script_Puzzle1L_Pole2_30:
# 501 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole2_29

AedesLux_Script_Puzzle1L_Pole2_33:
# 507 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole2_32

AedesLux_Script_Puzzle1L_Pole2_34:
# 506 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole2_33
	goto AedesLux_Script_Puzzle1L_Pole2_32


AedesLux_Script_Puzzle1L_Pole3::
# 522 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_2
AedesLux_Script_Puzzle1L_Pole3_1:
# 526 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_5
# 529 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole3_4:
# 531 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 533 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole3_9
AedesLux_Script_Puzzle1L_Pole3_8:
# 559 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole3_2:
# 523 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole3_1

AedesLux_Script_Puzzle1L_Pole3_5:
# 527 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole3_4

AedesLux_Script_Puzzle1L_Pole3_9:
# 535 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 536 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1L_Pole3_13
AedesLux_Script_Puzzle1L_Pole3_11:
# 541 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_19
AedesLux_Script_Puzzle1L_Pole3_18:
# 545 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle1L_Pole3_23
AedesLux_Script_Puzzle1L_Pole3_22:
# 549 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 551 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_26
AedesLux_Script_Puzzle1L_Pole3_16:
# 556 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole3_8

AedesLux_Script_Puzzle1L_Pole3_12:
# 537 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_13:
# 536 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_12
	goto AedesLux_Script_Puzzle1L_Pole3_11

AedesLux_Script_Puzzle1L_Pole3_17:
# 542 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_19:
# 541 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole3_17
	goto AedesLux_Script_Puzzle1L_Pole3_18

AedesLux_Script_Puzzle1L_Pole3_23:
# 546 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole3_22

AedesLux_Script_Puzzle1L_Pole3_25:
# 552 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle1L_Pole3_16

AedesLux_Script_Puzzle1L_Pole3_26:
# 551 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole3_25
	goto AedesLux_Script_Puzzle1L_Pole3_16


AedesLux_Script_Puzzle1L_Pole4::
# 565 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_2
AedesLux_Script_Puzzle1L_Pole4_1:
# 569 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_5
# 572 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole4_4:
# 574 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 576 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole4_9
AedesLux_Script_Puzzle1L_Pole4_8:
# 607 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole4_2:
# 566 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole4_1

AedesLux_Script_Puzzle1L_Pole4_5:
# 570 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole4_4

AedesLux_Script_Puzzle1L_Pole4_9:
# 578 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 579 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_13
AedesLux_Script_Puzzle1L_Pole4_11:
# 582 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole4_18
AedesLux_Script_Puzzle1L_Pole4_16:
# 587 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_24
AedesLux_Script_Puzzle1L_Pole4_23:
# 591 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole4_30
AedesLux_Script_Puzzle1L_Pole4_29:
# 595 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 597 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_34
AedesLux_Script_Puzzle1L_Pole4_32:
# 601 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
AedesLux_Script_Puzzle1L_Pole4_21:
# 604 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole4_8

AedesLux_Script_Puzzle1L_Pole4_12:
# 580 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_13:
# 579 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_12
	goto AedesLux_Script_Puzzle1L_Pole4_11

AedesLux_Script_Puzzle1L_Pole4_17:
# 583 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_18:
# 582 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_17
	goto AedesLux_Script_Puzzle1L_Pole4_16

AedesLux_Script_Puzzle1L_Pole4_22:
# 588 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole4_21

AedesLux_Script_Puzzle1L_Pole4_24:
# 587 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole4_22
# 587 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole4_22
	goto AedesLux_Script_Puzzle1L_Pole4_23

AedesLux_Script_Puzzle1L_Pole4_30:
# 592 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole4_29

AedesLux_Script_Puzzle1L_Pole4_33:
# 598 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle1L_Pole4_32

AedesLux_Script_Puzzle1L_Pole4_34:
# 597 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle1L_Pole4_33
	goto AedesLux_Script_Puzzle1L_Pole4_32


AedesLux_Script_Puzzle1L_Pole5::
# 613 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_2
AedesLux_Script_Puzzle1L_Pole5_1:
# 617 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_5
# 620 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1L_Pole5_4:
# 622 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 624 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1L_Pole5_9
AedesLux_Script_Puzzle1L_Pole5_8:
# 650 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1L_Pole5_2:
# 614 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1L_Pole5_1

AedesLux_Script_Puzzle1L_Pole5_5:
# 618 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1L_Pole5_4

AedesLux_Script_Puzzle1L_Pole5_9:
# 626 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 627 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1L_Pole5_13
AedesLux_Script_Puzzle1L_Pole5_11:
# 632 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_19
AedesLux_Script_Puzzle1L_Pole5_18:
# 636 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle1L_Pole5_23
AedesLux_Script_Puzzle1L_Pole5_22:
# 640 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 642 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_26
AedesLux_Script_Puzzle1L_Pole5_16:
# 647 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1L_Pole5_8

AedesLux_Script_Puzzle1L_Pole5_12:
# 628 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_13:
# 627 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_12
	goto AedesLux_Script_Puzzle1L_Pole5_11

AedesLux_Script_Puzzle1L_Pole5_17:
# 633 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_19:
# 632 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle1L_Pole5_17
	goto AedesLux_Script_Puzzle1L_Pole5_18

AedesLux_Script_Puzzle1L_Pole5_23:
# 637 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1L_Pole5_22

AedesLux_Script_Puzzle1L_Pole5_25:
# 643 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle1L_Pole5_16

AedesLux_Script_Puzzle1L_Pole5_26:
# 642 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle1L_Pole5_25
	goto AedesLux_Script_Puzzle1L_Pole5_16


AedesLux_Script_Puzzle1R_Pole6::
# 658 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_2
AedesLux_Script_Puzzle1R_Pole6_1:
# 662 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_5
# 665 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole6_4:
# 667 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 669 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole6_9
AedesLux_Script_Puzzle1R_Pole6_8:
# 695 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole6_2:
# 659 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole6_1

AedesLux_Script_Puzzle1R_Pole6_5:
# 663 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole6_4

AedesLux_Script_Puzzle1R_Pole6_9:
# 671 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 672 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole6_13
AedesLux_Script_Puzzle1R_Pole6_11:
# 677 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_19
AedesLux_Script_Puzzle1R_Pole6_18:
# 681 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole6_23
AedesLux_Script_Puzzle1R_Pole6_22:
# 685 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 687 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_26
AedesLux_Script_Puzzle1R_Pole6_16:
# 692 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole6_8

AedesLux_Script_Puzzle1R_Pole6_12:
# 673 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_13:
# 672 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_12
	goto AedesLux_Script_Puzzle1R_Pole6_11

AedesLux_Script_Puzzle1R_Pole6_17:
# 678 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_19:
# 677 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole6_17
	goto AedesLux_Script_Puzzle1R_Pole6_18

AedesLux_Script_Puzzle1R_Pole6_23:
# 682 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole6_22

AedesLux_Script_Puzzle1R_Pole6_25:
# 688 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole6_16

AedesLux_Script_Puzzle1R_Pole6_26:
# 687 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole6_25
	goto AedesLux_Script_Puzzle1R_Pole6_16


AedesLux_Script_Puzzle1R_Pole7::
# 701 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_2
AedesLux_Script_Puzzle1R_Pole7_1:
# 705 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_5
# 708 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole7_4:
# 710 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 712 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole7_9
AedesLux_Script_Puzzle1R_Pole7_8:
# 743 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole7_2:
# 702 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole7_1

AedesLux_Script_Puzzle1R_Pole7_5:
# 706 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole7_4

AedesLux_Script_Puzzle1R_Pole7_9:
# 714 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 715 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_13
AedesLux_Script_Puzzle1R_Pole7_11:
# 718 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole7_18
AedesLux_Script_Puzzle1R_Pole7_16:
# 723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_24
AedesLux_Script_Puzzle1R_Pole7_23:
# 727 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole7_30
AedesLux_Script_Puzzle1R_Pole7_29:
# 731 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 733 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_34
AedesLux_Script_Puzzle1R_Pole7_32:
# 737 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
AedesLux_Script_Puzzle1R_Pole7_21:
# 740 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole7_8

AedesLux_Script_Puzzle1R_Pole7_12:
# 716 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_13:
# 715 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_12
	goto AedesLux_Script_Puzzle1R_Pole7_11

AedesLux_Script_Puzzle1R_Pole7_17:
# 719 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_18:
# 718 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_17
	goto AedesLux_Script_Puzzle1R_Pole7_16

AedesLux_Script_Puzzle1R_Pole7_22:
# 724 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole7_21

AedesLux_Script_Puzzle1R_Pole7_24:
# 723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole7_22
# 723 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole7_22
	goto AedesLux_Script_Puzzle1R_Pole7_23

AedesLux_Script_Puzzle1R_Pole7_30:
# 728 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole7_29

AedesLux_Script_Puzzle1R_Pole7_33:
# 734 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole7_32

AedesLux_Script_Puzzle1R_Pole7_34:
# 733 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole7_33
	goto AedesLux_Script_Puzzle1R_Pole7_32


AedesLux_Script_Puzzle1R_Pole8::
# 749 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_2
AedesLux_Script_Puzzle1R_Pole8_1:
# 753 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_5
# 756 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole8_4:
# 758 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 760 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole8_9
AedesLux_Script_Puzzle1R_Pole8_8:
# 792 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole8_2:
# 750 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole8_1

AedesLux_Script_Puzzle1R_Pole8_5:
# 754 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole8_4

AedesLux_Script_Puzzle1R_Pole8_9:
# 762 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 763 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_13
AedesLux_Script_Puzzle1R_Pole8_11:
# 766 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole8_18
AedesLux_Script_Puzzle1R_Pole8_16:
# 771 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_24
AedesLux_Script_Puzzle1R_Pole8_23:
# 775 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole8_30
AedesLux_Script_Puzzle1R_Pole8_29:
# 779 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 781 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_34
AedesLux_Script_Puzzle1R_Pole8_32:
# 784 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_38
AedesLux_Script_Puzzle1R_Pole8_21:
# 789 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole8_8

AedesLux_Script_Puzzle1R_Pole8_12:
# 764 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_13:
# 763 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_12
	goto AedesLux_Script_Puzzle1R_Pole8_11

AedesLux_Script_Puzzle1R_Pole8_17:
# 767 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_18:
# 766 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_17
	goto AedesLux_Script_Puzzle1R_Pole8_16

AedesLux_Script_Puzzle1R_Pole8_22:
# 772 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_24:
# 771 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole8_22
# 771 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole8_22
	goto AedesLux_Script_Puzzle1R_Pole8_23

AedesLux_Script_Puzzle1R_Pole8_30:
# 776 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole8_29

AedesLux_Script_Puzzle1R_Pole8_33:
# 782 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_34:
# 781 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle1R_Pole8_33
	goto AedesLux_Script_Puzzle1R_Pole8_32

AedesLux_Script_Puzzle1R_Pole8_37:
# 785 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole8_21

AedesLux_Script_Puzzle1R_Pole8_38:
# 784 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole8_37
	goto AedesLux_Script_Puzzle1R_Pole8_21


AedesLux_Script_Puzzle1R_Pole9::
# 798 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_2
AedesLux_Script_Puzzle1R_Pole9_1:
# 802 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_5
# 805 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_Pole9_4:
# 807 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 809 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_Pole9_9
AedesLux_Script_Puzzle1R_Pole9_8:
# 840 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_Pole9_2:
# 799 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_Pole9_1

AedesLux_Script_Puzzle1R_Pole9_5:
# 803 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_Pole9_4

AedesLux_Script_Puzzle1R_Pole9_9:
# 811 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 812 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_13
AedesLux_Script_Puzzle1R_Pole9_11:
# 815 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_Pole9_18
AedesLux_Script_Puzzle1R_Pole9_16:
# 820 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_24
AedesLux_Script_Puzzle1R_Pole9_23:
# 824 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle1R_Pole9_30
AedesLux_Script_Puzzle1R_Pole9_29:
# 828 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 830 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_34
AedesLux_Script_Puzzle1R_Pole9_32:
# 834 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
AedesLux_Script_Puzzle1R_Pole9_21:
# 837 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_Pole9_8

AedesLux_Script_Puzzle1R_Pole9_12:
# 813 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_13:
# 812 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_12
	goto AedesLux_Script_Puzzle1R_Pole9_11

AedesLux_Script_Puzzle1R_Pole9_17:
# 816 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_18:
# 815 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_17
	goto AedesLux_Script_Puzzle1R_Pole9_16

AedesLux_Script_Puzzle1R_Pole9_22:
# 821 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle1R_Pole9_21

AedesLux_Script_Puzzle1R_Pole9_24:
# 820 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle1R_Pole9_22
# 820 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_Pole9_22
	goto AedesLux_Script_Puzzle1R_Pole9_23

AedesLux_Script_Puzzle1R_Pole9_30:
# 825 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_Pole9_29

AedesLux_Script_Puzzle1R_Pole9_33:
# 831 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_Pole9_32

AedesLux_Script_Puzzle1R_Pole9_34:
# 830 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle1R_Pole9_33
	goto AedesLux_Script_Puzzle1R_Pole9_32


AedesLux_Script_Puzzle1R_PoleA::
# 846 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_2
AedesLux_Script_Puzzle1R_PoleA_1:
# 850 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_5
# 853 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle1R_PoleA_4:
# 855 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 857 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle1R_PoleA_9
AedesLux_Script_Puzzle1R_PoleA_8:
# 883 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle1R_PoleA_2:
# 847 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle1R_PoleA_1

AedesLux_Script_Puzzle1R_PoleA_5:
# 851 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle1R_PoleA_4

AedesLux_Script_Puzzle1R_PoleA_9:
# 859 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 860 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle1R_PoleA_13
AedesLux_Script_Puzzle1R_PoleA_11:
# 865 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_19
AedesLux_Script_Puzzle1R_PoleA_18:
# 869 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle1R_PoleA_23
AedesLux_Script_Puzzle1R_PoleA_22:
# 873 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 875 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_26
AedesLux_Script_Puzzle1R_PoleA_16:
# 880 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle1R_PoleA_8

AedesLux_Script_Puzzle1R_PoleA_12:
# 861 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_13:
# 860 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_12
	goto AedesLux_Script_Puzzle1R_PoleA_11

AedesLux_Script_Puzzle1R_PoleA_17:
# 866 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_19:
# 865 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle1R_PoleA_17
	goto AedesLux_Script_Puzzle1R_PoleA_18

AedesLux_Script_Puzzle1R_PoleA_23:
# 870 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle1R_PoleA_22

AedesLux_Script_Puzzle1R_PoleA_25:
# 876 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle1R_PoleA_16

AedesLux_Script_Puzzle1R_PoleA_26:
# 875 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle1R_PoleA_25
	goto AedesLux_Script_Puzzle1R_PoleA_16


AedesLux_Script_Puzzle2L_Pole1::
# 892 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_2
AedesLux_Script_Puzzle2L_Pole1_1:
# 896 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_5
# 899 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole1_4:
# 901 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 903 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole1_9
AedesLux_Script_Puzzle2L_Pole1_8:
# 935 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole1_2:
# 893 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole1_1

AedesLux_Script_Puzzle2L_Pole1_5:
# 897 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole1_4

AedesLux_Script_Puzzle2L_Pole1_9:
# 905 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 906 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_13
AedesLux_Script_Puzzle2L_Pole1_11:
# 909 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole1_18
AedesLux_Script_Puzzle2L_Pole1_16:
# 914 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_24
AedesLux_Script_Puzzle2L_Pole1_23:
# 918 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole1_30
AedesLux_Script_Puzzle2L_Pole1_29:
# 922 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 924 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_34
AedesLux_Script_Puzzle2L_Pole1_32:
# 927 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_39
AedesLux_Script_Puzzle2L_Pole1_21:
# 932 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole1_8

AedesLux_Script_Puzzle2L_Pole1_12:
# 907 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_13:
# 906 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_12
	goto AedesLux_Script_Puzzle2L_Pole1_11

AedesLux_Script_Puzzle2L_Pole1_17:
# 910 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_18:
# 909 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_17
	goto AedesLux_Script_Puzzle2L_Pole1_16

AedesLux_Script_Puzzle2L_Pole1_22:
# 915 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_24:
# 914 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole1_22
# 914 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole1_22
	goto AedesLux_Script_Puzzle2L_Pole1_23

AedesLux_Script_Puzzle2L_Pole1_30:
# 919 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole1_29

AedesLux_Script_Puzzle2L_Pole1_33:
# 925 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_34:
# 924 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole1_33
	goto AedesLux_Script_Puzzle2L_Pole1_32

AedesLux_Script_Puzzle2L_Pole1_37:
# 928 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_38:
# 927 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole1_37
	goto AedesLux_Script_Puzzle2L_Pole1_21

AedesLux_Script_Puzzle2L_Pole1_39:
# 927 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole1_38
	goto AedesLux_Script_Puzzle2L_Pole1_21


AedesLux_Script_Puzzle2L_Pole2::
# 941 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_2
AedesLux_Script_Puzzle2L_Pole2_1:
# 945 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_5
# 948 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole2_4:
# 950 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 952 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole2_9
AedesLux_Script_Puzzle2L_Pole2_8:
# 983 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole2_2:
# 942 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole2_1

AedesLux_Script_Puzzle2L_Pole2_5:
# 946 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole2_4

AedesLux_Script_Puzzle2L_Pole2_9:
# 954 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 955 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_13
AedesLux_Script_Puzzle2L_Pole2_11:
# 958 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole2_18
AedesLux_Script_Puzzle2L_Pole2_16:
# 963 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_24
AedesLux_Script_Puzzle2L_Pole2_23:
# 967 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole2_30
AedesLux_Script_Puzzle2L_Pole2_29:
# 971 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 973 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_34
AedesLux_Script_Puzzle2L_Pole2_32:
# 977 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle2L_Pole2_21:
# 980 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole2_8

AedesLux_Script_Puzzle2L_Pole2_12:
# 956 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_13:
# 955 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_12
	goto AedesLux_Script_Puzzle2L_Pole2_11

AedesLux_Script_Puzzle2L_Pole2_17:
# 959 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_18:
# 958 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_17
	goto AedesLux_Script_Puzzle2L_Pole2_16

AedesLux_Script_Puzzle2L_Pole2_22:
# 964 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole2_21

AedesLux_Script_Puzzle2L_Pole2_24:
# 963 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole2_22
# 963 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole2_22
	goto AedesLux_Script_Puzzle2L_Pole2_23

AedesLux_Script_Puzzle2L_Pole2_30:
# 968 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole2_29

AedesLux_Script_Puzzle2L_Pole2_33:
# 974 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole2_32

AedesLux_Script_Puzzle2L_Pole2_34:
# 973 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole2_33
	goto AedesLux_Script_Puzzle2L_Pole2_32


AedesLux_Script_Puzzle2L_Pole3::
# 989 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_2
AedesLux_Script_Puzzle2L_Pole3_1:
# 993 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_5
# 996 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole3_4:
# 998 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1000 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole3_9
AedesLux_Script_Puzzle2L_Pole3_8:
# 1026 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole3_2:
# 990 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole3_1

AedesLux_Script_Puzzle2L_Pole3_5:
# 994 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole3_4

AedesLux_Script_Puzzle2L_Pole3_9:
# 1002 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole3_13
AedesLux_Script_Puzzle2L_Pole3_11:
# 1008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_19
AedesLux_Script_Puzzle2L_Pole3_18:
# 1012 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle2L_Pole3_23
AedesLux_Script_Puzzle2L_Pole3_22:
# 1016 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1018 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_26
AedesLux_Script_Puzzle2L_Pole3_16:
# 1023 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole3_8

AedesLux_Script_Puzzle2L_Pole3_12:
# 1004 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_13:
# 1003 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_12
	goto AedesLux_Script_Puzzle2L_Pole3_11

AedesLux_Script_Puzzle2L_Pole3_17:
# 1009 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_19:
# 1008 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole3_17
	goto AedesLux_Script_Puzzle2L_Pole3_18

AedesLux_Script_Puzzle2L_Pole3_23:
# 1013 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole3_22

AedesLux_Script_Puzzle2L_Pole3_25:
# 1019 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle2L_Pole3_16

AedesLux_Script_Puzzle2L_Pole3_26:
# 1018 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole3_25
	goto AedesLux_Script_Puzzle2L_Pole3_16


AedesLux_Script_Puzzle2L_Pole4::
# 1032 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_2
AedesLux_Script_Puzzle2L_Pole4_1:
# 1036 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_5
# 1039 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole4_4:
# 1041 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1043 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole4_9
AedesLux_Script_Puzzle2L_Pole4_8:
# 1075 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole4_2:
# 1033 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole4_1

AedesLux_Script_Puzzle2L_Pole4_5:
# 1037 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole4_4

AedesLux_Script_Puzzle2L_Pole4_9:
# 1045 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1046 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_13
AedesLux_Script_Puzzle2L_Pole4_11:
# 1049 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole4_18
AedesLux_Script_Puzzle2L_Pole4_16:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_24
AedesLux_Script_Puzzle2L_Pole4_23:
# 1058 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole4_30
AedesLux_Script_Puzzle2L_Pole4_29:
# 1062 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_35
AedesLux_Script_Puzzle2L_Pole4_32:
# 1067 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_40
AedesLux_Script_Puzzle2L_Pole4_21:
# 1072 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole4_8

AedesLux_Script_Puzzle2L_Pole4_12:
# 1047 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_13:
# 1046 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_12
	goto AedesLux_Script_Puzzle2L_Pole4_11

AedesLux_Script_Puzzle2L_Pole4_17:
# 1050 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_18:
# 1049 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_17
	goto AedesLux_Script_Puzzle2L_Pole4_16

AedesLux_Script_Puzzle2L_Pole4_22:
# 1055 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_24:
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole4_22
# 1054 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole4_22
	goto AedesLux_Script_Puzzle2L_Pole4_23

AedesLux_Script_Puzzle2L_Pole4_30:
# 1059 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole4_29

AedesLux_Script_Puzzle2L_Pole4_33:
# 1065 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_34:
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_33
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_35:
# 1064 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole4_34
	goto AedesLux_Script_Puzzle2L_Pole4_32

AedesLux_Script_Puzzle2L_Pole4_39:
# 1068 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole4_21

AedesLux_Script_Puzzle2L_Pole4_40:
# 1067 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole4_39
	goto AedesLux_Script_Puzzle2L_Pole4_21


AedesLux_Script_Puzzle2L_Pole5::
# 1081 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_2
AedesLux_Script_Puzzle2L_Pole5_1:
# 1085 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_5
# 1088 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole5_4:
# 1090 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1092 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole5_9
AedesLux_Script_Puzzle2L_Pole5_8:
# 1130 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole5_2:
# 1082 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole5_1

AedesLux_Script_Puzzle2L_Pole5_5:
# 1086 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole5_4

AedesLux_Script_Puzzle2L_Pole5_9:
# 1094 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1095 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_13
AedesLux_Script_Puzzle2L_Pole5_11:
# 1098 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_18
AedesLux_Script_Puzzle2L_Pole5_16:
# 1101 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole5_23
AedesLux_Script_Puzzle2L_Pole5_21:
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_29
AedesLux_Script_Puzzle2L_Pole5_28:
# 1110 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole5_37
AedesLux_Script_Puzzle2L_Pole5_36:
# 1114 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1116 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_41
AedesLux_Script_Puzzle2L_Pole5_39:
# 1119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_46
AedesLux_Script_Puzzle2L_Pole5_44:
# 1122 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_50
AedesLux_Script_Puzzle2L_Pole5_26:
# 1127 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole5_8

AedesLux_Script_Puzzle2L_Pole5_12:
# 1096 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_13:
# 1095 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_12
	goto AedesLux_Script_Puzzle2L_Pole5_11

AedesLux_Script_Puzzle2L_Pole5_17:
# 1099 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_18:
# 1098 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_17
	goto AedesLux_Script_Puzzle2L_Pole5_16

AedesLux_Script_Puzzle2L_Pole5_22:
# 1102 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_23:
# 1101 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_22
	goto AedesLux_Script_Puzzle2L_Pole5_21

AedesLux_Script_Puzzle2L_Pole5_27:
# 1107 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_29:
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole5_27
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole5_27
# 1106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole5_27
	goto AedesLux_Script_Puzzle2L_Pole5_28

AedesLux_Script_Puzzle2L_Pole5_37:
# 1111 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole5_36

AedesLux_Script_Puzzle2L_Pole5_40:
# 1117 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_41:
# 1116 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle2L_Pole5_40
	goto AedesLux_Script_Puzzle2L_Pole5_39

AedesLux_Script_Puzzle2L_Pole5_45:
# 1120 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_46:
# 1119 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_45
	goto AedesLux_Script_Puzzle2L_Pole5_44

AedesLux_Script_Puzzle2L_Pole5_49:
# 1123 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole5_26

AedesLux_Script_Puzzle2L_Pole5_50:
# 1122 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole5_49
	goto AedesLux_Script_Puzzle2L_Pole5_26


AedesLux_Script_Puzzle2L_Pole6::
# 1136 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_2
AedesLux_Script_Puzzle2L_Pole6_1:
# 1140 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_5
# 1143 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole6_4:
# 1145 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1147 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole6_9
AedesLux_Script_Puzzle2L_Pole6_8:
# 1179 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole6_2:
# 1137 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole6_1

AedesLux_Script_Puzzle2L_Pole6_5:
# 1141 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole6_4

AedesLux_Script_Puzzle2L_Pole6_9:
# 1149 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1150 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_13
AedesLux_Script_Puzzle2L_Pole6_11:
# 1153 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole6_18
AedesLux_Script_Puzzle2L_Pole6_16:
# 1158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_24
AedesLux_Script_Puzzle2L_Pole6_23:
# 1162 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole6_30
AedesLux_Script_Puzzle2L_Pole6_29:
# 1166 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 1168 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_34
AedesLux_Script_Puzzle2L_Pole6_32:
# 1171 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_38
AedesLux_Script_Puzzle2L_Pole6_21:
# 1176 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole6_8

AedesLux_Script_Puzzle2L_Pole6_12:
# 1151 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_13:
# 1150 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_12
	goto AedesLux_Script_Puzzle2L_Pole6_11

AedesLux_Script_Puzzle2L_Pole6_17:
# 1154 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_18:
# 1153 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_17
	goto AedesLux_Script_Puzzle2L_Pole6_16

AedesLux_Script_Puzzle2L_Pole6_22:
# 1159 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_24:
# 1158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole6_22
# 1158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole6_22
	goto AedesLux_Script_Puzzle2L_Pole6_23

AedesLux_Script_Puzzle2L_Pole6_30:
# 1163 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole6_29

AedesLux_Script_Puzzle2L_Pole6_33:
# 1169 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_34:
# 1168 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_33
	goto AedesLux_Script_Puzzle2L_Pole6_32

AedesLux_Script_Puzzle2L_Pole6_37:
# 1172 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle2L_Pole6_21

AedesLux_Script_Puzzle2L_Pole6_38:
# 1171 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole6_37
	goto AedesLux_Script_Puzzle2L_Pole6_21


AedesLux_Script_Puzzle2L_Pole7::
# 1185 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_2
AedesLux_Script_Puzzle2L_Pole7_1:
# 1189 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_5
# 1192 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2L_Pole7_4:
# 1194 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1196 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2L_Pole7_9
AedesLux_Script_Puzzle2L_Pole7_8:
# 1228 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2L_Pole7_2:
# 1186 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2L_Pole7_1

AedesLux_Script_Puzzle2L_Pole7_5:
# 1190 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2L_Pole7_4

AedesLux_Script_Puzzle2L_Pole7_9:
# 1198 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1199 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_13
AedesLux_Script_Puzzle2L_Pole7_11:
# 1202 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2L_Pole7_18
AedesLux_Script_Puzzle2L_Pole7_16:
# 1207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_24
AedesLux_Script_Puzzle2L_Pole7_23:
# 1211 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle2L_Pole7_30
AedesLux_Script_Puzzle2L_Pole7_29:
# 1215 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 1217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_34
AedesLux_Script_Puzzle2L_Pole7_32:
# 1220 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_39
AedesLux_Script_Puzzle2L_Pole7_21:
# 1225 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2L_Pole7_8

AedesLux_Script_Puzzle2L_Pole7_12:
# 1200 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_13:
# 1199 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_12
	goto AedesLux_Script_Puzzle2L_Pole7_11

AedesLux_Script_Puzzle2L_Pole7_17:
# 1203 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_18:
# 1202 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_17
	goto AedesLux_Script_Puzzle2L_Pole7_16

AedesLux_Script_Puzzle2L_Pole7_22:
# 1208 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_24:
# 1207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle2L_Pole7_22
# 1207 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle2L_Pole7_22
	goto AedesLux_Script_Puzzle2L_Pole7_23

AedesLux_Script_Puzzle2L_Pole7_30:
# 1212 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2L_Pole7_29

AedesLux_Script_Puzzle2L_Pole7_33:
# 1218 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_34:
# 1217 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_33
	goto AedesLux_Script_Puzzle2L_Pole7_32

AedesLux_Script_Puzzle2L_Pole7_37:
# 1221 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_38:
# 1220 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle2L_Pole7_37
	goto AedesLux_Script_Puzzle2L_Pole7_21

AedesLux_Script_Puzzle2L_Pole7_39:
# 1220 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle2L_Pole7_38
	goto AedesLux_Script_Puzzle2L_Pole7_21


AedesLux_Script_Puzzle2R_Pole8::
# 1236 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_2
AedesLux_Script_Puzzle2R_Pole8_1:
# 1240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_5
# 1243 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole8_4:
# 1245 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1247 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole8_9
AedesLux_Script_Puzzle2R_Pole8_8:
# 1273 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole8_2:
# 1237 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole8_1

AedesLux_Script_Puzzle2R_Pole8_5:
# 1241 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole8_4

AedesLux_Script_Puzzle2R_Pole8_9:
# 1249 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1250 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole8_13
AedesLux_Script_Puzzle2R_Pole8_11:
# 1255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_19
AedesLux_Script_Puzzle2R_Pole8_18:
# 1259 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole8_23
AedesLux_Script_Puzzle2R_Pole8_22:
# 1263 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 1265 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_26
AedesLux_Script_Puzzle2R_Pole8_16:
# 1270 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole8_8

AedesLux_Script_Puzzle2R_Pole8_12:
# 1251 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_13:
# 1250 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_12
	goto AedesLux_Script_Puzzle2R_Pole8_11

AedesLux_Script_Puzzle2R_Pole8_17:
# 1256 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_19:
# 1255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole8_17
	goto AedesLux_Script_Puzzle2R_Pole8_18

AedesLux_Script_Puzzle2R_Pole8_23:
# 1260 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole8_22

AedesLux_Script_Puzzle2R_Pole8_25:
# 1266 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole8_16

AedesLux_Script_Puzzle2R_Pole8_26:
# 1265 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole8_25
	goto AedesLux_Script_Puzzle2R_Pole8_16


AedesLux_Script_Puzzle2R_Pole9::
# 1279 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_2
AedesLux_Script_Puzzle2R_Pole9_1:
# 1283 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_5
# 1286 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole9_4:
# 1288 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1290 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole9_9
AedesLux_Script_Puzzle2R_Pole9_8:
# 1321 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole9_2:
# 1280 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole9_1

AedesLux_Script_Puzzle2R_Pole9_5:
# 1284 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole9_4

AedesLux_Script_Puzzle2R_Pole9_9:
# 1292 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1293 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_13
AedesLux_Script_Puzzle2R_Pole9_11:
# 1296 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole9_18
AedesLux_Script_Puzzle2R_Pole9_16:
# 1301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_24
AedesLux_Script_Puzzle2R_Pole9_23:
# 1305 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_Pole9_30
AedesLux_Script_Puzzle2R_Pole9_29:
# 1309 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 1311 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_35
AedesLux_Script_Puzzle2R_Pole9_32:
# 1315 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle2R_Pole9_21:
# 1318 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole9_8

AedesLux_Script_Puzzle2R_Pole9_12:
# 1294 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_13:
# 1293 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_12
	goto AedesLux_Script_Puzzle2R_Pole9_11

AedesLux_Script_Puzzle2R_Pole9_17:
# 1297 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_18:
# 1296 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_17
	goto AedesLux_Script_Puzzle2R_Pole9_16

AedesLux_Script_Puzzle2R_Pole9_22:
# 1302 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_Pole9_21

AedesLux_Script_Puzzle2R_Pole9_24:
# 1301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle2R_Pole9_22
# 1301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole9_22
	goto AedesLux_Script_Puzzle2R_Pole9_23

AedesLux_Script_Puzzle2R_Pole9_30:
# 1306 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole9_29

AedesLux_Script_Puzzle2R_Pole9_33:
# 1312 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_34:
# 1311 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole9_33
	goto AedesLux_Script_Puzzle2R_Pole9_32

AedesLux_Script_Puzzle2R_Pole9_35:
# 1311 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole9_34
	goto AedesLux_Script_Puzzle2R_Pole9_32


AedesLux_Script_Puzzle2R_PoleA::
# 1327 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_2
AedesLux_Script_Puzzle2R_PoleA_1:
# 1331 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_5
# 1334 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleA_4:
# 1336 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1338 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleA_9
AedesLux_Script_Puzzle2R_PoleA_8:
# 1376 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleA_2:
# 1328 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleA_1

AedesLux_Script_Puzzle2R_PoleA_5:
# 1332 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleA_4

AedesLux_Script_Puzzle2R_PoleA_9:
# 1340 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1341 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_13
AedesLux_Script_Puzzle2R_PoleA_11:
# 1344 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_18
AedesLux_Script_Puzzle2R_PoleA_16:
# 1347 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleA_23
AedesLux_Script_Puzzle2R_PoleA_21:
# 1352 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_29
AedesLux_Script_Puzzle2R_PoleA_28:
# 1356 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleA_37
AedesLux_Script_Puzzle2R_PoleA_36:
# 1360 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 1362 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_41
AedesLux_Script_Puzzle2R_PoleA_39:
# 1365 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_46
AedesLux_Script_Puzzle2R_PoleA_44:
# 1368 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_51
AedesLux_Script_Puzzle2R_PoleA_26:
# 1373 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleA_8

AedesLux_Script_Puzzle2R_PoleA_12:
# 1342 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_13:
# 1341 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_12
	goto AedesLux_Script_Puzzle2R_PoleA_11

AedesLux_Script_Puzzle2R_PoleA_17:
# 1345 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_18:
# 1344 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_17
	goto AedesLux_Script_Puzzle2R_PoleA_16

AedesLux_Script_Puzzle2R_PoleA_22:
# 1348 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_23:
# 1347 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_22
	goto AedesLux_Script_Puzzle2R_PoleA_21

AedesLux_Script_Puzzle2R_PoleA_27:
# 1353 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_29:
# 1352 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleA_27
# 1352 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleA_27
# 1352 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleA_27
	goto AedesLux_Script_Puzzle2R_PoleA_28

AedesLux_Script_Puzzle2R_PoleA_37:
# 1357 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleA_36

AedesLux_Script_Puzzle2R_PoleA_40:
# 1363 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_41:
# 1362 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle2R_PoleA_40
	goto AedesLux_Script_Puzzle2R_PoleA_39

AedesLux_Script_Puzzle2R_PoleA_45:
# 1366 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_46:
# 1365 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_45
	goto AedesLux_Script_Puzzle2R_PoleA_44

AedesLux_Script_Puzzle2R_PoleA_49:
# 1369 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_50:
# 1368 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleA_49
	goto AedesLux_Script_Puzzle2R_PoleA_26

AedesLux_Script_Puzzle2R_PoleA_51:
# 1368 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleA_50
	goto AedesLux_Script_Puzzle2R_PoleA_26


AedesLux_Script_Puzzle2R_PoleB::
# 1382 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_2
AedesLux_Script_Puzzle2R_PoleB_1:
# 1386 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_5
# 1389 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleB_4:
# 1391 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1393 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleB_9
AedesLux_Script_Puzzle2R_PoleB_8:
# 1425 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleB_2:
# 1383 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleB_1

AedesLux_Script_Puzzle2R_PoleB_5:
# 1387 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleB_4

AedesLux_Script_Puzzle2R_PoleB_9:
# 1395 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1396 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_13
AedesLux_Script_Puzzle2R_PoleB_11:
# 1399 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleB_18
AedesLux_Script_Puzzle2R_PoleB_16:
# 1404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_24
AedesLux_Script_Puzzle2R_PoleB_23:
# 1408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_30
AedesLux_Script_Puzzle2R_PoleB_29:
# 1412 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 1414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_35
AedesLux_Script_Puzzle2R_PoleB_32:
# 1417 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_41
AedesLux_Script_Puzzle2R_PoleB_21:
# 1422 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleB_8

AedesLux_Script_Puzzle2R_PoleB_12:
# 1397 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_13:
# 1396 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_12
	goto AedesLux_Script_Puzzle2R_PoleB_11

AedesLux_Script_Puzzle2R_PoleB_17:
# 1400 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_18:
# 1399 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleB_17
	goto AedesLux_Script_Puzzle2R_PoleB_16

AedesLux_Script_Puzzle2R_PoleB_22:
# 1405 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_24:
# 1404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleB_22
# 1404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleB_22
	goto AedesLux_Script_Puzzle2R_PoleB_23

AedesLux_Script_Puzzle2R_PoleB_30:
# 1409 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleB_29

AedesLux_Script_Puzzle2R_PoleB_33:
# 1415 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_34:
# 1414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_33
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_35:
# 1414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleB_34
	goto AedesLux_Script_Puzzle2R_PoleB_32

AedesLux_Script_Puzzle2R_PoleB_39:
# 1418 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_40:
# 1417 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleB_39
	goto AedesLux_Script_Puzzle2R_PoleB_21

AedesLux_Script_Puzzle2R_PoleB_41:
# 1417 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleB_40
	goto AedesLux_Script_Puzzle2R_PoleB_21


AedesLux_Script_Puzzle2R_PoleC::
# 1431 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_2
AedesLux_Script_Puzzle2R_PoleC_1:
# 1435 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_5
# 1438 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleC_4:
# 1440 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1442 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleC_9
AedesLux_Script_Puzzle2R_PoleC_8:
# 1480 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleC_2:
# 1432 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleC_1

AedesLux_Script_Puzzle2R_PoleC_5:
# 1436 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleC_4

AedesLux_Script_Puzzle2R_PoleC_9:
# 1444 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1445 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_13
AedesLux_Script_Puzzle2R_PoleC_11:
# 1448 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_18
AedesLux_Script_Puzzle2R_PoleC_16:
# 1451 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleC_23
AedesLux_Script_Puzzle2R_PoleC_21:
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_29
AedesLux_Script_Puzzle2R_PoleC_28:
# 1460 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleC_37
AedesLux_Script_Puzzle2R_PoleC_36:
# 1464 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 1466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_42
AedesLux_Script_Puzzle2R_PoleC_39:
# 1469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_49
AedesLux_Script_Puzzle2R_PoleC_46:
# 1472 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_55
AedesLux_Script_Puzzle2R_PoleC_26:
# 1477 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleC_8

AedesLux_Script_Puzzle2R_PoleC_12:
# 1446 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_13:
# 1445 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_12
	goto AedesLux_Script_Puzzle2R_PoleC_11

AedesLux_Script_Puzzle2R_PoleC_17:
# 1449 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_18:
# 1448 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_17
	goto AedesLux_Script_Puzzle2R_PoleC_16

AedesLux_Script_Puzzle2R_PoleC_22:
# 1452 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_23:
# 1451 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_22
	goto AedesLux_Script_Puzzle2R_PoleC_21

AedesLux_Script_Puzzle2R_PoleC_27:
# 1457 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_29:
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleC_27
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleC_27
# 1456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleC_27
	goto AedesLux_Script_Puzzle2R_PoleC_28

AedesLux_Script_Puzzle2R_PoleC_37:
# 1461 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleC_36

AedesLux_Script_Puzzle2R_PoleC_40:
# 1467 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_41:
# 1466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_40
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_42:
# 1466 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle2R_PoleC_41
	goto AedesLux_Script_Puzzle2R_PoleC_39

AedesLux_Script_Puzzle2R_PoleC_47:
# 1470 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_48:
# 1469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_47
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_49:
# 1469 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleC_48
	goto AedesLux_Script_Puzzle2R_PoleC_46

AedesLux_Script_Puzzle2R_PoleC_53:
# 1473 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_54:
# 1472 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleC_53
	goto AedesLux_Script_Puzzle2R_PoleC_26

AedesLux_Script_Puzzle2R_PoleC_55:
# 1472 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleC_54
	goto AedesLux_Script_Puzzle2R_PoleC_26


AedesLux_Script_Puzzle2R_PoleD::
# 1486 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_2
AedesLux_Script_Puzzle2R_PoleD_1:
# 1490 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_5
# 1493 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleD_4:
# 1495 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1497 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleD_9
AedesLux_Script_Puzzle2R_PoleD_8:
# 1535 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleD_2:
# 1487 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleD_1

AedesLux_Script_Puzzle2R_PoleD_5:
# 1491 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleD_4

AedesLux_Script_Puzzle2R_PoleD_9:
# 1499 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1500 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_13
AedesLux_Script_Puzzle2R_PoleD_11:
# 1503 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_18
AedesLux_Script_Puzzle2R_PoleD_16:
# 1506 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle2R_PoleD_23
AedesLux_Script_Puzzle2R_PoleD_21:
# 1511 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_29
AedesLux_Script_Puzzle2R_PoleD_28:
# 1515 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_PoleD_37
AedesLux_Script_Puzzle2R_PoleD_36:
# 1519 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 1521 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_41
AedesLux_Script_Puzzle2R_PoleD_39:
# 1524 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_47
AedesLux_Script_Puzzle2R_PoleD_44:
# 1527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_52
AedesLux_Script_Puzzle2R_PoleD_26:
# 1532 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleD_8

AedesLux_Script_Puzzle2R_PoleD_12:
# 1501 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_13:
# 1500 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_12
	goto AedesLux_Script_Puzzle2R_PoleD_11

AedesLux_Script_Puzzle2R_PoleD_17:
# 1504 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_18:
# 1503 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_17
	goto AedesLux_Script_Puzzle2R_PoleD_16

AedesLux_Script_Puzzle2R_PoleD_22:
# 1507 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_23:
# 1506 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_22
	goto AedesLux_Script_Puzzle2R_PoleD_21

AedesLux_Script_Puzzle2R_PoleD_27:
# 1512 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_29:
# 1511 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle2R_PoleD_27
# 1511 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleD_27
# 1511 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleD_27
	goto AedesLux_Script_Puzzle2R_PoleD_28

AedesLux_Script_Puzzle2R_PoleD_37:
# 1516 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleD_36

AedesLux_Script_Puzzle2R_PoleD_40:
# 1522 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_41:
# 1521 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_40
	goto AedesLux_Script_Puzzle2R_PoleD_39

AedesLux_Script_Puzzle2R_PoleD_45:
# 1525 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_46:
# 1524 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_45
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_47:
# 1524 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_PoleD_46
	goto AedesLux_Script_Puzzle2R_PoleD_44

AedesLux_Script_Puzzle2R_PoleD_51:
# 1528 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_PoleD_26

AedesLux_Script_Puzzle2R_PoleD_52:
# 1527 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleD_51
	goto AedesLux_Script_Puzzle2R_PoleD_26


AedesLux_Script_Puzzle2R_PoleE::
# 1541 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_2
AedesLux_Script_Puzzle2R_PoleE_1:
# 1545 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_5
# 1548 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleE_4:
# 1550 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1552 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleE_9
AedesLux_Script_Puzzle2R_PoleE_8:
# 1578 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleE_2:
# 1542 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleE_1

AedesLux_Script_Puzzle2R_PoleE_5:
# 1546 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleE_4

AedesLux_Script_Puzzle2R_PoleE_9:
# 1554 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1555 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleE_13
AedesLux_Script_Puzzle2R_PoleE_11:
# 1560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_19
AedesLux_Script_Puzzle2R_PoleE_18:
# 1564 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleE_23
AedesLux_Script_Puzzle2R_PoleE_22:
# 1568 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 1570 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_26
AedesLux_Script_Puzzle2R_PoleE_16:
# 1575 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleE_8

AedesLux_Script_Puzzle2R_PoleE_12:
# 1556 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_13:
# 1555 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_12
	goto AedesLux_Script_Puzzle2R_PoleE_11

AedesLux_Script_Puzzle2R_PoleE_17:
# 1561 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_19:
# 1560 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleE_17
	goto AedesLux_Script_Puzzle2R_PoleE_18

AedesLux_Script_Puzzle2R_PoleE_23:
# 1565 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleE_22

AedesLux_Script_Puzzle2R_PoleE_25:
# 1571 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleE_16

AedesLux_Script_Puzzle2R_PoleE_26:
# 1570 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleE_25
	goto AedesLux_Script_Puzzle2R_PoleE_16


AedesLux_Script_Puzzle2R_PoleF::
# 1584 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_2
AedesLux_Script_Puzzle2R_PoleF_1:
# 1588 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_5
# 1591 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_PoleF_4:
# 1593 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1595 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_PoleF_9
AedesLux_Script_Puzzle2R_PoleF_8:
# 1626 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_PoleF_2:
# 1585 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_PoleF_1

AedesLux_Script_Puzzle2R_PoleF_5:
# 1589 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_PoleF_4

AedesLux_Script_Puzzle2R_PoleF_9:
# 1597 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1598 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_13
AedesLux_Script_Puzzle2R_PoleF_11:
# 1601 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_PoleF_18
AedesLux_Script_Puzzle2R_PoleF_16:
# 1606 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_24
AedesLux_Script_Puzzle2R_PoleF_23:
# 1610 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_PoleF_30
AedesLux_Script_Puzzle2R_PoleF_29:
# 1614 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 1616 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_35
AedesLux_Script_Puzzle2R_PoleF_32:
# 1620 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
AedesLux_Script_Puzzle2R_PoleF_21:
# 1623 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_PoleF_8

AedesLux_Script_Puzzle2R_PoleF_12:
# 1599 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_13:
# 1598 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_12
	goto AedesLux_Script_Puzzle2R_PoleF_11

AedesLux_Script_Puzzle2R_PoleF_17:
# 1602 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_18:
# 1601 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_17
	goto AedesLux_Script_Puzzle2R_PoleF_16

AedesLux_Script_Puzzle2R_PoleF_22:
# 1607 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_PoleF_21

AedesLux_Script_Puzzle2R_PoleF_24:
# 1606 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle2R_PoleF_22
# 1606 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_PoleF_22
	goto AedesLux_Script_Puzzle2R_PoleF_23

AedesLux_Script_Puzzle2R_PoleF_30:
# 1611 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_PoleF_29

AedesLux_Script_Puzzle2R_PoleF_33:
# 1617 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_34:
# 1616 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_PoleF_33
	goto AedesLux_Script_Puzzle2R_PoleF_32

AedesLux_Script_Puzzle2R_PoleF_35:
# 1616 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_PoleF_34
	goto AedesLux_Script_Puzzle2R_PoleF_32


AedesLux_Script_Puzzle2R_Pole10::
# 1632 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_2
AedesLux_Script_Puzzle2R_Pole10_1:
# 1636 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_5
# 1639 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole10_4:
# 1641 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1643 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole10_9
AedesLux_Script_Puzzle2R_Pole10_8:
# 1681 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole10_2:
# 1633 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole10_1

AedesLux_Script_Puzzle2R_Pole10_5:
# 1637 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole10_4

AedesLux_Script_Puzzle2R_Pole10_9:
# 1645 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1646 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_13
AedesLux_Script_Puzzle2R_Pole10_11:
# 1649 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_18
AedesLux_Script_Puzzle2R_Pole10_16:
# 1652 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole10_23
AedesLux_Script_Puzzle2R_Pole10_21:
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_29
AedesLux_Script_Puzzle2R_Pole10_28:
# 1661 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole10_37
AedesLux_Script_Puzzle2R_Pole10_36:
# 1665 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 1667 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_42
AedesLux_Script_Puzzle2R_Pole10_39:
# 1670 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_48
AedesLux_Script_Puzzle2R_Pole10_46:
# 1673 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_52
AedesLux_Script_Puzzle2R_Pole10_26:
# 1678 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole10_8

AedesLux_Script_Puzzle2R_Pole10_12:
# 1647 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_13:
# 1646 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_12
	goto AedesLux_Script_Puzzle2R_Pole10_11

AedesLux_Script_Puzzle2R_Pole10_17:
# 1650 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_18:
# 1649 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_17
	goto AedesLux_Script_Puzzle2R_Pole10_16

AedesLux_Script_Puzzle2R_Pole10_22:
# 1653 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_23:
# 1652 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_22
	goto AedesLux_Script_Puzzle2R_Pole10_21

AedesLux_Script_Puzzle2R_Pole10_27:
# 1658 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_29:
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole10_27
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole10_27
# 1657 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole10_27
	goto AedesLux_Script_Puzzle2R_Pole10_28

AedesLux_Script_Puzzle2R_Pole10_37:
# 1662 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole10_36

AedesLux_Script_Puzzle2R_Pole10_40:
# 1668 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_41:
# 1667 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_40
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_42:
# 1667 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle2R_Pole10_41
	goto AedesLux_Script_Puzzle2R_Pole10_39

AedesLux_Script_Puzzle2R_Pole10_47:
# 1671 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_48:
# 1670 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle2R_Pole10_47
	goto AedesLux_Script_Puzzle2R_Pole10_46

AedesLux_Script_Puzzle2R_Pole10_51:
# 1674 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole10_26

AedesLux_Script_Puzzle2R_Pole10_52:
# 1673 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole10_51
	goto AedesLux_Script_Puzzle2R_Pole10_26


AedesLux_Script_Puzzle2R_Pole11::
# 1687 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_2
AedesLux_Script_Puzzle2R_Pole11_1:
# 1691 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_5
# 1694 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle2R_Pole11_4:
# 1696 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1698 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle2R_Pole11_9
AedesLux_Script_Puzzle2R_Pole11_8:
# 1730 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle2R_Pole11_2:
# 1688 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle2R_Pole11_1

AedesLux_Script_Puzzle2R_Pole11_5:
# 1692 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle2R_Pole11_4

AedesLux_Script_Puzzle2R_Pole11_9:
# 1700 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1701 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_13
AedesLux_Script_Puzzle2R_Pole11_11:
# 1704 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle2R_Pole11_18
AedesLux_Script_Puzzle2R_Pole11_16:
# 1709 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_24
AedesLux_Script_Puzzle2R_Pole11_23:
# 1713 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle2R_Pole11_30
AedesLux_Script_Puzzle2R_Pole11_29:
# 1717 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 1719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_35
AedesLux_Script_Puzzle2R_Pole11_32:
# 1722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_41
AedesLux_Script_Puzzle2R_Pole11_21:
# 1727 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle2R_Pole11_8

AedesLux_Script_Puzzle2R_Pole11_12:
# 1702 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_13:
# 1701 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_12
	goto AedesLux_Script_Puzzle2R_Pole11_11

AedesLux_Script_Puzzle2R_Pole11_17:
# 1705 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_18:
# 1704 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_17
	goto AedesLux_Script_Puzzle2R_Pole11_16

AedesLux_Script_Puzzle2R_Pole11_22:
# 1710 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_24:
# 1709 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle2R_Pole11_22
# 1709 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle2R_Pole11_22
	goto AedesLux_Script_Puzzle2R_Pole11_23

AedesLux_Script_Puzzle2R_Pole11_30:
# 1714 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle2R_Pole11_29

AedesLux_Script_Puzzle2R_Pole11_33:
# 1720 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_34:
# 1719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle2R_Pole11_33
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_35:
# 1719 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_34
	goto AedesLux_Script_Puzzle2R_Pole11_32

AedesLux_Script_Puzzle2R_Pole11_39:
# 1723 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_40:
# 1722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle2R_Pole11_39
	goto AedesLux_Script_Puzzle2R_Pole11_21

AedesLux_Script_Puzzle2R_Pole11_41:
# 1722 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle2R_Pole11_40
	goto AedesLux_Script_Puzzle2R_Pole11_21


AedesLux_Script_Puzzle3L_Pole1::
# 1738 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_2
AedesLux_Script_Puzzle3L_Pole1_1:
# 1742 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_5
# 1745 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole1_4:
# 1747 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1749 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole1_9
AedesLux_Script_Puzzle3L_Pole1_8:
# 1775 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole1_2:
# 1739 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole1_1

AedesLux_Script_Puzzle3L_Pole1_5:
# 1743 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole1_4

AedesLux_Script_Puzzle3L_Pole1_9:
# 1751 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1752 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole1_13
AedesLux_Script_Puzzle3L_Pole1_11:
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_19
AedesLux_Script_Puzzle3L_Pole1_18:
# 1761 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole1_23
AedesLux_Script_Puzzle3L_Pole1_22:
# 1765 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 1767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_26
AedesLux_Script_Puzzle3L_Pole1_16:
# 1772 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole1_8

AedesLux_Script_Puzzle3L_Pole1_12:
# 1753 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_13:
# 1752 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_12
	goto AedesLux_Script_Puzzle3L_Pole1_11

AedesLux_Script_Puzzle3L_Pole1_17:
# 1758 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_19:
# 1757 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole1_17
	goto AedesLux_Script_Puzzle3L_Pole1_18

AedesLux_Script_Puzzle3L_Pole1_23:
# 1762 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole1_22

AedesLux_Script_Puzzle3L_Pole1_25:
# 1768 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole1_16

AedesLux_Script_Puzzle3L_Pole1_26:
# 1767 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole1_25
	goto AedesLux_Script_Puzzle3L_Pole1_16


AedesLux_Script_Puzzle3L_Pole2::
# 1781 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_2
AedesLux_Script_Puzzle3L_Pole2_1:
# 1785 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_5
# 1788 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole2_4:
# 1790 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1792 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole2_9
AedesLux_Script_Puzzle3L_Pole2_8:
# 1823 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole2_2:
# 1782 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole2_1

AedesLux_Script_Puzzle3L_Pole2_5:
# 1786 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole2_4

AedesLux_Script_Puzzle3L_Pole2_9:
# 1794 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1795 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_13
AedesLux_Script_Puzzle3L_Pole2_11:
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole2_18
AedesLux_Script_Puzzle3L_Pole2_16:
# 1803 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_24
AedesLux_Script_Puzzle3L_Pole2_23:
# 1807 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole2_30
AedesLux_Script_Puzzle3L_Pole2_29:
# 1811 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 1813 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_34
AedesLux_Script_Puzzle3L_Pole2_32:
# 1817 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
AedesLux_Script_Puzzle3L_Pole2_21:
# 1820 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole2_8

AedesLux_Script_Puzzle3L_Pole2_12:
# 1796 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_13:
# 1795 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_12
	goto AedesLux_Script_Puzzle3L_Pole2_11

AedesLux_Script_Puzzle3L_Pole2_17:
# 1799 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_18:
# 1798 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_17
	goto AedesLux_Script_Puzzle3L_Pole2_16

AedesLux_Script_Puzzle3L_Pole2_22:
# 1804 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole2_21

AedesLux_Script_Puzzle3L_Pole2_24:
# 1803 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole2_22
# 1803 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole2_22
	goto AedesLux_Script_Puzzle3L_Pole2_23

AedesLux_Script_Puzzle3L_Pole2_30:
# 1808 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole2_29

AedesLux_Script_Puzzle3L_Pole2_33:
# 1814 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole2_32

AedesLux_Script_Puzzle3L_Pole2_34:
# 1813 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole2_33
	goto AedesLux_Script_Puzzle3L_Pole2_32


AedesLux_Script_Puzzle3L_Pole3::
# 1829 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_2
AedesLux_Script_Puzzle3L_Pole3_1:
# 1833 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_5
# 1836 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole3_4:
# 1838 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1840 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole3_9
AedesLux_Script_Puzzle3L_Pole3_8:
# 1866 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole3_2:
# 1830 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole3_1

AedesLux_Script_Puzzle3L_Pole3_5:
# 1834 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole3_4

AedesLux_Script_Puzzle3L_Pole3_9:
# 1842 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1843 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole3_13
AedesLux_Script_Puzzle3L_Pole3_11:
# 1848 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_19
AedesLux_Script_Puzzle3L_Pole3_18:
# 1852 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole3_23
AedesLux_Script_Puzzle3L_Pole3_22:
# 1856 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 1858 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_26
AedesLux_Script_Puzzle3L_Pole3_16:
# 1863 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole3_8

AedesLux_Script_Puzzle3L_Pole3_12:
# 1844 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_13:
# 1843 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_12
	goto AedesLux_Script_Puzzle3L_Pole3_11

AedesLux_Script_Puzzle3L_Pole3_17:
# 1849 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_19:
# 1848 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole3_17
	goto AedesLux_Script_Puzzle3L_Pole3_18

AedesLux_Script_Puzzle3L_Pole3_23:
# 1853 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole3_22

AedesLux_Script_Puzzle3L_Pole3_25:
# 1859 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole3_16

AedesLux_Script_Puzzle3L_Pole3_26:
# 1858 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole3_25
	goto AedesLux_Script_Puzzle3L_Pole3_16


AedesLux_Script_Puzzle3L_Pole4::
# 1872 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_2
AedesLux_Script_Puzzle3L_Pole4_1:
# 1876 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_5
# 1879 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole4_4:
# 1881 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1883 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole4_9
AedesLux_Script_Puzzle3L_Pole4_8:
# 1915 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole4_2:
# 1873 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole4_1

AedesLux_Script_Puzzle3L_Pole4_5:
# 1877 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole4_4

AedesLux_Script_Puzzle3L_Pole4_9:
# 1885 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1886 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_13
AedesLux_Script_Puzzle3L_Pole4_11:
# 1889 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole4_18
AedesLux_Script_Puzzle3L_Pole4_16:
# 1894 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_24
AedesLux_Script_Puzzle3L_Pole4_23:
# 1898 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole4_30
AedesLux_Script_Puzzle3L_Pole4_29:
# 1902 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 1904 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_34
AedesLux_Script_Puzzle3L_Pole4_32:
# 1907 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_39
AedesLux_Script_Puzzle3L_Pole4_21:
# 1912 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole4_8

AedesLux_Script_Puzzle3L_Pole4_12:
# 1887 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_13:
# 1886 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_12
	goto AedesLux_Script_Puzzle3L_Pole4_11

AedesLux_Script_Puzzle3L_Pole4_17:
# 1890 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_18:
# 1889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_17
	goto AedesLux_Script_Puzzle3L_Pole4_16

AedesLux_Script_Puzzle3L_Pole4_22:
# 1895 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_24:
# 1894 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole4_22
# 1894 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole4_22
	goto AedesLux_Script_Puzzle3L_Pole4_23

AedesLux_Script_Puzzle3L_Pole4_30:
# 1899 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole4_29

AedesLux_Script_Puzzle3L_Pole4_33:
# 1905 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_34:
# 1904 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, AedesLux_Script_Puzzle3L_Pole4_33
	goto AedesLux_Script_Puzzle3L_Pole4_32

AedesLux_Script_Puzzle3L_Pole4_37:
# 1908 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_38:
# 1907 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole4_37
	goto AedesLux_Script_Puzzle3L_Pole4_21

AedesLux_Script_Puzzle3L_Pole4_39:
# 1907 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole4_38
	goto AedesLux_Script_Puzzle3L_Pole4_21


AedesLux_Script_Puzzle3L_Pole5::
# 1921 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_2
AedesLux_Script_Puzzle3L_Pole5_1:
# 1925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_5
# 1928 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole5_4:
# 1930 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1932 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole5_9
AedesLux_Script_Puzzle3L_Pole5_8:
# 1963 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole5_2:
# 1922 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole5_1

AedesLux_Script_Puzzle3L_Pole5_5:
# 1926 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole5_4

AedesLux_Script_Puzzle3L_Pole5_9:
# 1934 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1935 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_13
AedesLux_Script_Puzzle3L_Pole5_11:
# 1938 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole5_18
AedesLux_Script_Puzzle3L_Pole5_16:
# 1943 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_24
AedesLux_Script_Puzzle3L_Pole5_23:
# 1947 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole5_30
AedesLux_Script_Puzzle3L_Pole5_29:
# 1951 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_35
AedesLux_Script_Puzzle3L_Pole5_32:
# 1957 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
AedesLux_Script_Puzzle3L_Pole5_21:
# 1960 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole5_8

AedesLux_Script_Puzzle3L_Pole5_12:
# 1936 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_13:
# 1935 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_12
	goto AedesLux_Script_Puzzle3L_Pole5_11

AedesLux_Script_Puzzle3L_Pole5_17:
# 1939 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_18:
# 1938 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_17
	goto AedesLux_Script_Puzzle3L_Pole5_16

AedesLux_Script_Puzzle3L_Pole5_22:
# 1944 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole5_21

AedesLux_Script_Puzzle3L_Pole5_24:
# 1943 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole5_22
# 1943 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole5_22
	goto AedesLux_Script_Puzzle3L_Pole5_23

AedesLux_Script_Puzzle3L_Pole5_30:
# 1948 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole5_29

AedesLux_Script_Puzzle3L_Pole5_33:
# 1954 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_34:
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole5_33
	goto AedesLux_Script_Puzzle3L_Pole5_32

AedesLux_Script_Puzzle3L_Pole5_35:
# 1953 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole5_34
	goto AedesLux_Script_Puzzle3L_Pole5_32


AedesLux_Script_Puzzle3L_Pole6::
# 1969 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_2
AedesLux_Script_Puzzle3L_Pole6_1:
# 1973 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_5
# 1976 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole6_4:
# 1978 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 1980 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole6_9
AedesLux_Script_Puzzle3L_Pole6_8:
# 2017 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole6_2:
# 1970 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole6_1

AedesLux_Script_Puzzle3L_Pole6_5:
# 1974 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole6_4

AedesLux_Script_Puzzle3L_Pole6_9:
# 1982 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_13
AedesLux_Script_Puzzle3L_Pole6_11:
# 1986 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_18
AedesLux_Script_Puzzle3L_Pole6_16:
# 1989 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole6_23
AedesLux_Script_Puzzle3L_Pole6_21:
# 1994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_29
AedesLux_Script_Puzzle3L_Pole6_28:
# 1998 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole6_37
AedesLux_Script_Puzzle3L_Pole6_36:
# 2002 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_41
AedesLux_Script_Puzzle3L_Pole6_39:
# 2007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_47
AedesLux_Script_Puzzle3L_Pole6_44:
# 2011 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
AedesLux_Script_Puzzle3L_Pole6_26:
# 2014 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole6_8

AedesLux_Script_Puzzle3L_Pole6_12:
# 1984 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_13:
# 1983 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_12
	goto AedesLux_Script_Puzzle3L_Pole6_11

AedesLux_Script_Puzzle3L_Pole6_17:
# 1987 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_18:
# 1986 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_17
	goto AedesLux_Script_Puzzle3L_Pole6_16

AedesLux_Script_Puzzle3L_Pole6_22:
# 1990 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_23:
# 1989 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_22
	goto AedesLux_Script_Puzzle3L_Pole6_21

AedesLux_Script_Puzzle3L_Pole6_27:
# 1995 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole6_26

AedesLux_Script_Puzzle3L_Pole6_29:
# 1994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole6_27
# 1994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole6_27
# 1994 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole6_27
	goto AedesLux_Script_Puzzle3L_Pole6_28

AedesLux_Script_Puzzle3L_Pole6_37:
# 1999 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole6_36

AedesLux_Script_Puzzle3L_Pole6_40:
# 2005 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_41:
# 2004 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_3, AedesLux_Script_Puzzle3L_Pole6_40
	goto AedesLux_Script_Puzzle3L_Pole6_39

AedesLux_Script_Puzzle3L_Pole6_45:
# 2008 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_46:
# 2007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole6_45
	goto AedesLux_Script_Puzzle3L_Pole6_44

AedesLux_Script_Puzzle3L_Pole6_47:
# 2007 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole6_46
	goto AedesLux_Script_Puzzle3L_Pole6_44


AedesLux_Script_Puzzle3L_Pole7::
# 2023 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_2
AedesLux_Script_Puzzle3L_Pole7_1:
# 2027 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_5
# 2030 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole7_4:
# 2032 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2034 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole7_9
AedesLux_Script_Puzzle3L_Pole7_8:
# 2071 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole7_2:
# 2024 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole7_1

AedesLux_Script_Puzzle3L_Pole7_5:
# 2028 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole7_4

AedesLux_Script_Puzzle3L_Pole7_9:
# 2036 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2037 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_13
AedesLux_Script_Puzzle3L_Pole7_11:
# 2040 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_18
AedesLux_Script_Puzzle3L_Pole7_16:
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole7_23
AedesLux_Script_Puzzle3L_Pole7_21:
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_29
AedesLux_Script_Puzzle3L_Pole7_28:
# 2052 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole7_37
AedesLux_Script_Puzzle3L_Pole7_36:
# 2056 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2058 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_41
AedesLux_Script_Puzzle3L_Pole7_39:
# 2061 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_47
AedesLux_Script_Puzzle3L_Pole7_44:
# 2065 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
AedesLux_Script_Puzzle3L_Pole7_26:
# 2068 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole7_8

AedesLux_Script_Puzzle3L_Pole7_12:
# 2038 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_13:
# 2037 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_12
	goto AedesLux_Script_Puzzle3L_Pole7_11

AedesLux_Script_Puzzle3L_Pole7_17:
# 2041 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_18:
# 2040 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_17
	goto AedesLux_Script_Puzzle3L_Pole7_16

AedesLux_Script_Puzzle3L_Pole7_22:
# 2044 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_23:
# 2043 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_22
	goto AedesLux_Script_Puzzle3L_Pole7_21

AedesLux_Script_Puzzle3L_Pole7_27:
# 2049 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole7_26

AedesLux_Script_Puzzle3L_Pole7_29:
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole7_27
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole7_27
# 2048 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole7_27
	goto AedesLux_Script_Puzzle3L_Pole7_28

AedesLux_Script_Puzzle3L_Pole7_37:
# 2053 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole7_36

AedesLux_Script_Puzzle3L_Pole7_40:
# 2059 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_41:
# 2058 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, AedesLux_Script_Puzzle3L_Pole7_40
	goto AedesLux_Script_Puzzle3L_Pole7_39

AedesLux_Script_Puzzle3L_Pole7_45:
# 2062 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_46:
# 2061 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole7_45
	goto AedesLux_Script_Puzzle3L_Pole7_44

AedesLux_Script_Puzzle3L_Pole7_47:
# 2061 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole7_46
	goto AedesLux_Script_Puzzle3L_Pole7_44


AedesLux_Script_Puzzle3L_Pole8::
# 2077 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_2
AedesLux_Script_Puzzle3L_Pole8_1:
# 2081 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_5
# 2084 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole8_4:
# 2086 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2088 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole8_9
AedesLux_Script_Puzzle3L_Pole8_8:
# 2114 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole8_2:
# 2078 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole8_1

AedesLux_Script_Puzzle3L_Pole8_5:
# 2082 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole8_4

AedesLux_Script_Puzzle3L_Pole8_9:
# 2090 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2091 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3L_Pole8_13
AedesLux_Script_Puzzle3L_Pole8_11:
# 2096 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_19
AedesLux_Script_Puzzle3L_Pole8_18:
# 2100 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_8, AedesLux_Script_Puzzle3L_Pole8_23
AedesLux_Script_Puzzle3L_Pole8_22:
# 2104 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_27
AedesLux_Script_Puzzle3L_Pole8_16:
# 2111 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole8_8

AedesLux_Script_Puzzle3L_Pole8_12:
# 2092 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_13:
# 2091 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_12
	goto AedesLux_Script_Puzzle3L_Pole8_11

AedesLux_Script_Puzzle3L_Pole8_17:
# 2097 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_19:
# 2096 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole8_17
	goto AedesLux_Script_Puzzle3L_Pole8_18

AedesLux_Script_Puzzle3L_Pole8_23:
# 2101 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole8_22

AedesLux_Script_Puzzle3L_Pole8_25:
# 2107 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_26:
# 2106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_4, AedesLux_Script_Puzzle3L_Pole8_25
	goto AedesLux_Script_Puzzle3L_Pole8_16

AedesLux_Script_Puzzle3L_Pole8_27:
# 2106 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole8_26
	goto AedesLux_Script_Puzzle3L_Pole8_16


AedesLux_Script_Puzzle3L_Pole9::
# 2120 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_2
AedesLux_Script_Puzzle3L_Pole9_1:
# 2124 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_5
# 2127 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3L_Pole9_4:
# 2129 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2131 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3L_Pole9_9
AedesLux_Script_Puzzle3L_Pole9_8:
# 2157 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3L_Pole9_2:
# 2121 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3L_Pole9_1

AedesLux_Script_Puzzle3L_Pole9_5:
# 2125 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3L_Pole9_4

AedesLux_Script_Puzzle3L_Pole9_9:
# 2133 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2134 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3L_Pole9_13
AedesLux_Script_Puzzle3L_Pole9_11:
# 2139 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_19
AedesLux_Script_Puzzle3L_Pole9_18:
# 2143 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_9, AedesLux_Script_Puzzle3L_Pole9_23
AedesLux_Script_Puzzle3L_Pole9_22:
# 2147 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2149 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_27
AedesLux_Script_Puzzle3L_Pole9_16:
# 2154 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3L_Pole9_8

AedesLux_Script_Puzzle3L_Pole9_12:
# 2135 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_13:
# 2134 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_12
	goto AedesLux_Script_Puzzle3L_Pole9_11

AedesLux_Script_Puzzle3L_Pole9_17:
# 2140 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_19:
# 2139 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_Puzzle3L_Pole9_17
	goto AedesLux_Script_Puzzle3L_Pole9_18

AedesLux_Script_Puzzle3L_Pole9_23:
# 2144 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3L_Pole9_22

AedesLux_Script_Puzzle3L_Pole9_25:
# 2150 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_26:
# 2149 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_7, AedesLux_Script_Puzzle3L_Pole9_25
	goto AedesLux_Script_Puzzle3L_Pole9_16

AedesLux_Script_Puzzle3L_Pole9_27:
# 2149 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_5, AedesLux_Script_Puzzle3L_Pole9_26
	goto AedesLux_Script_Puzzle3L_Pole9_16


AedesLux_Script_Puzzle3R_PoleA::
# 2165 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_2
AedesLux_Script_Puzzle3R_PoleA_1:
# 2169 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_5
# 2172 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleA_4:
# 2174 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2176 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleA_9
AedesLux_Script_Puzzle3R_PoleA_8:
# 2208 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleA_2:
# 2166 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleA_1

AedesLux_Script_Puzzle3R_PoleA_5:
# 2170 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleA_4

AedesLux_Script_Puzzle3R_PoleA_9:
# 2178 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2179 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_13
AedesLux_Script_Puzzle3R_PoleA_11:
# 2182 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleA_18
AedesLux_Script_Puzzle3R_PoleA_16:
# 2187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_24
AedesLux_Script_Puzzle3R_PoleA_23:
# 2191 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleA_30
AedesLux_Script_Puzzle3R_PoleA_29:
# 2195 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_35
AedesLux_Script_Puzzle3R_PoleA_32:
# 2200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_41
AedesLux_Script_Puzzle3R_PoleA_21:
# 2205 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleA_8

AedesLux_Script_Puzzle3R_PoleA_12:
# 2180 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_13:
# 2179 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_12
	goto AedesLux_Script_Puzzle3R_PoleA_11

AedesLux_Script_Puzzle3R_PoleA_17:
# 2183 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_18:
# 2182 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_17
	goto AedesLux_Script_Puzzle3R_PoleA_16

AedesLux_Script_Puzzle3R_PoleA_22:
# 2188 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_24:
# 2187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleA_22
# 2187 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleA_22
	goto AedesLux_Script_Puzzle3R_PoleA_23

AedesLux_Script_Puzzle3R_PoleA_30:
# 2192 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleA_29

AedesLux_Script_Puzzle3R_PoleA_33:
# 2198 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_34:
# 2197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_33
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_35:
# 2197 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleA_34
	goto AedesLux_Script_Puzzle3R_PoleA_32

AedesLux_Script_Puzzle3R_PoleA_39:
# 2201 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_40:
# 2200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleA_39
	goto AedesLux_Script_Puzzle3R_PoleA_21

AedesLux_Script_Puzzle3R_PoleA_41:
# 2200 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleA_40
	goto AedesLux_Script_Puzzle3R_PoleA_21


AedesLux_Script_Puzzle3R_PoleB::
# 2214 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_2
AedesLux_Script_Puzzle3R_PoleB_1:
# 2218 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_5
# 2221 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleB_4:
# 2223 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2225 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleB_9
AedesLux_Script_Puzzle3R_PoleB_8:
# 2263 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleB_2:
# 2215 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleB_1

AedesLux_Script_Puzzle3R_PoleB_5:
# 2219 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleB_4

AedesLux_Script_Puzzle3R_PoleB_9:
# 2227 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2228 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_13
AedesLux_Script_Puzzle3R_PoleB_11:
# 2231 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_18
AedesLux_Script_Puzzle3R_PoleB_16:
# 2234 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleB_23
AedesLux_Script_Puzzle3R_PoleB_21:
# 2239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_29
AedesLux_Script_Puzzle3R_PoleB_28:
# 2243 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleB_37
AedesLux_Script_Puzzle3R_PoleB_36:
# 2247 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2249 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_41
AedesLux_Script_Puzzle3R_PoleB_39:
# 2252 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_46
AedesLux_Script_Puzzle3R_PoleB_44:
# 2255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_51
AedesLux_Script_Puzzle3R_PoleB_26:
# 2260 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleB_8

AedesLux_Script_Puzzle3R_PoleB_12:
# 2229 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_13:
# 2228 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_12
	goto AedesLux_Script_Puzzle3R_PoleB_11

AedesLux_Script_Puzzle3R_PoleB_17:
# 2232 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_18:
# 2231 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_17
	goto AedesLux_Script_Puzzle3R_PoleB_16

AedesLux_Script_Puzzle3R_PoleB_22:
# 2235 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_23:
# 2234 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_22
	goto AedesLux_Script_Puzzle3R_PoleB_21

AedesLux_Script_Puzzle3R_PoleB_27:
# 2240 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_29:
# 2239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleB_27
# 2239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleB_27
# 2239 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleB_27
	goto AedesLux_Script_Puzzle3R_PoleB_28

AedesLux_Script_Puzzle3R_PoleB_37:
# 2244 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleB_36

AedesLux_Script_Puzzle3R_PoleB_40:
# 2250 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_41:
# 2249 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_40
	goto AedesLux_Script_Puzzle3R_PoleB_39

AedesLux_Script_Puzzle3R_PoleB_45:
# 2253 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_46:
# 2252 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_45
	goto AedesLux_Script_Puzzle3R_PoleB_44

AedesLux_Script_Puzzle3R_PoleB_49:
# 2256 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_50:
# 2255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleB_49
	goto AedesLux_Script_Puzzle3R_PoleB_26

AedesLux_Script_Puzzle3R_PoleB_51:
# 2255 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleB_50
	goto AedesLux_Script_Puzzle3R_PoleB_26


AedesLux_Script_Puzzle3R_PoleC::
# 2269 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_2
AedesLux_Script_Puzzle3R_PoleC_1:
# 2273 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_5
# 2276 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleC_4:
# 2278 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2280 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleC_9
AedesLux_Script_Puzzle3R_PoleC_8:
# 2312 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleC_2:
# 2270 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleC_1

AedesLux_Script_Puzzle3R_PoleC_5:
# 2274 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleC_4

AedesLux_Script_Puzzle3R_PoleC_9:
# 2282 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2283 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_13
AedesLux_Script_Puzzle3R_PoleC_11:
# 2286 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleC_18
AedesLux_Script_Puzzle3R_PoleC_16:
# 2291 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_24
AedesLux_Script_Puzzle3R_PoleC_23:
# 2295 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleC_30
AedesLux_Script_Puzzle3R_PoleC_29:
# 2299 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 2301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_35
AedesLux_Script_Puzzle3R_PoleC_32:
# 2304 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_41
AedesLux_Script_Puzzle3R_PoleC_21:
# 2309 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleC_8

AedesLux_Script_Puzzle3R_PoleC_12:
# 2284 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_13:
# 2283 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_12
	goto AedesLux_Script_Puzzle3R_PoleC_11

AedesLux_Script_Puzzle3R_PoleC_17:
# 2287 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_18:
# 2286 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_17
	goto AedesLux_Script_Puzzle3R_PoleC_16

AedesLux_Script_Puzzle3R_PoleC_22:
# 2292 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_24:
# 2291 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleC_22
# 2291 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleC_22
	goto AedesLux_Script_Puzzle3R_PoleC_23

AedesLux_Script_Puzzle3R_PoleC_30:
# 2296 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleC_29

AedesLux_Script_Puzzle3R_PoleC_33:
# 2302 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_34:
# 2301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_33
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_35:
# 2301 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleC_34
	goto AedesLux_Script_Puzzle3R_PoleC_32

AedesLux_Script_Puzzle3R_PoleC_39:
# 2305 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_40:
# 2304 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleC_39
	goto AedesLux_Script_Puzzle3R_PoleC_21

AedesLux_Script_Puzzle3R_PoleC_41:
# 2304 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleC_40
	goto AedesLux_Script_Puzzle3R_PoleC_21


AedesLux_Script_Puzzle3R_PoleD::
# 2318 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_2
AedesLux_Script_Puzzle3R_PoleD_1:
# 2322 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_5
# 2325 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleD_4:
# 2327 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2329 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleD_9
AedesLux_Script_Puzzle3R_PoleD_8:
# 2366 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleD_2:
# 2319 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleD_1

AedesLux_Script_Puzzle3R_PoleD_5:
# 2323 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleD_4

AedesLux_Script_Puzzle3R_PoleD_9:
# 2331 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2332 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_13
AedesLux_Script_Puzzle3R_PoleD_11:
# 2335 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_18
AedesLux_Script_Puzzle3R_PoleD_16:
# 2338 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleD_23
AedesLux_Script_Puzzle3R_PoleD_21:
# 2343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_29
AedesLux_Script_Puzzle3R_PoleD_28:
# 2347 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleD_37
AedesLux_Script_Puzzle3R_PoleD_36:
# 2351 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_41
AedesLux_Script_Puzzle3R_PoleD_39:
# 2356 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_47
AedesLux_Script_Puzzle3R_PoleD_44:
# 2360 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
AedesLux_Script_Puzzle3R_PoleD_26:
# 2363 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleD_8

AedesLux_Script_Puzzle3R_PoleD_12:
# 2333 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_13:
# 2332 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_12
	goto AedesLux_Script_Puzzle3R_PoleD_11

AedesLux_Script_Puzzle3R_PoleD_17:
# 2336 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_18:
# 2335 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_17
	goto AedesLux_Script_Puzzle3R_PoleD_16

AedesLux_Script_Puzzle3R_PoleD_22:
# 2339 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_23:
# 2338 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_22
	goto AedesLux_Script_Puzzle3R_PoleD_21

AedesLux_Script_Puzzle3R_PoleD_27:
# 2344 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleD_26

AedesLux_Script_Puzzle3R_PoleD_29:
# 2343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleD_27
# 2343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleD_27
# 2343 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleD_27
	goto AedesLux_Script_Puzzle3R_PoleD_28

AedesLux_Script_Puzzle3R_PoleD_37:
# 2348 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleD_36

AedesLux_Script_Puzzle3R_PoleD_40:
# 2354 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_41:
# 2353 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_40
	goto AedesLux_Script_Puzzle3R_PoleD_39

AedesLux_Script_Puzzle3R_PoleD_45:
# 2357 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_46:
# 2356 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleD_45
	goto AedesLux_Script_Puzzle3R_PoleD_44

AedesLux_Script_Puzzle3R_PoleD_47:
# 2356 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleD_46
	goto AedesLux_Script_Puzzle3R_PoleD_44


AedesLux_Script_Puzzle3R_PoleE::
# 2372 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_2
AedesLux_Script_Puzzle3R_PoleE_1:
# 2376 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_5
# 2379 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleE_4:
# 2381 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2383 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleE_9
AedesLux_Script_Puzzle3R_PoleE_8:
# 2421 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleE_2:
# 2373 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleE_1

AedesLux_Script_Puzzle3R_PoleE_5:
# 2377 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleE_4

AedesLux_Script_Puzzle3R_PoleE_9:
# 2385 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2386 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_13
AedesLux_Script_Puzzle3R_PoleE_11:
# 2389 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_18
AedesLux_Script_Puzzle3R_PoleE_16:
# 2392 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleE_23
AedesLux_Script_Puzzle3R_PoleE_21:
# 2397 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_29
AedesLux_Script_Puzzle3R_PoleE_28:
# 2401 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleE_37
AedesLux_Script_Puzzle3R_PoleE_36:
# 2405 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_42
AedesLux_Script_Puzzle3R_PoleE_39:
# 2410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_49
AedesLux_Script_Puzzle3R_PoleE_46:
# 2413 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_55
AedesLux_Script_Puzzle3R_PoleE_26:
# 2418 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleE_8

AedesLux_Script_Puzzle3R_PoleE_12:
# 2387 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_13:
# 2386 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_12
	goto AedesLux_Script_Puzzle3R_PoleE_11

AedesLux_Script_Puzzle3R_PoleE_17:
# 2390 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_18:
# 2389 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_17
	goto AedesLux_Script_Puzzle3R_PoleE_16

AedesLux_Script_Puzzle3R_PoleE_22:
# 2393 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_23:
# 2392 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_22
	goto AedesLux_Script_Puzzle3R_PoleE_21

AedesLux_Script_Puzzle3R_PoleE_27:
# 2398 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_29:
# 2397 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleE_27
# 2397 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleE_27
# 2397 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleE_27
	goto AedesLux_Script_Puzzle3R_PoleE_28

AedesLux_Script_Puzzle3R_PoleE_37:
# 2402 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleE_36

AedesLux_Script_Puzzle3R_PoleE_40:
# 2408 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_41:
# 2407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_PoleE_40
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_42:
# 2407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_41
	goto AedesLux_Script_Puzzle3R_PoleE_39

AedesLux_Script_Puzzle3R_PoleE_47:
# 2411 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_48:
# 2410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_47
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_49:
# 2410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_PoleE_48
	goto AedesLux_Script_Puzzle3R_PoleE_46

AedesLux_Script_Puzzle3R_PoleE_53:
# 2414 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_54:
# 2413 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleE_53
	goto AedesLux_Script_Puzzle3R_PoleE_26

AedesLux_Script_Puzzle3R_PoleE_55:
# 2413 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleE_54
	goto AedesLux_Script_Puzzle3R_PoleE_26


AedesLux_Script_Puzzle3R_PoleF::
# 2427 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_2
AedesLux_Script_Puzzle3R_PoleF_1:
# 2431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_5
# 2434 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_PoleF_4:
# 2436 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2438 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_PoleF_9
AedesLux_Script_Puzzle3R_PoleF_8:
# 2476 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_PoleF_2:
# 2428 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_PoleF_1

AedesLux_Script_Puzzle3R_PoleF_5:
# 2432 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_PoleF_4

AedesLux_Script_Puzzle3R_PoleF_9:
# 2440 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2441 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_13
AedesLux_Script_Puzzle3R_PoleF_11:
# 2444 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_18
AedesLux_Script_Puzzle3R_PoleF_16:
# 2447 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq AedesLux_Script_Puzzle3R_PoleF_23
AedesLux_Script_Puzzle3R_PoleF_21:
# 2452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_29
AedesLux_Script_Puzzle3R_PoleF_28:
# 2456 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_PoleF_37
AedesLux_Script_Puzzle3R_PoleF_36:
# 2460 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2462 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_41
AedesLux_Script_Puzzle3R_PoleF_39:
# 2465 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_47
AedesLux_Script_Puzzle3R_PoleF_44:
# 2468 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_52
AedesLux_Script_Puzzle3R_PoleF_26:
# 2473 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_PoleF_8

AedesLux_Script_Puzzle3R_PoleF_12:
# 2442 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_13:
# 2441 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_12
	goto AedesLux_Script_Puzzle3R_PoleF_11

AedesLux_Script_Puzzle3R_PoleF_17:
# 2445 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_18:
# 2444 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_17
	goto AedesLux_Script_Puzzle3R_PoleF_16

AedesLux_Script_Puzzle3R_PoleF_22:
# 2448 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_23:
# 2447 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_22
	goto AedesLux_Script_Puzzle3R_PoleF_21

AedesLux_Script_Puzzle3R_PoleF_27:
# 2453 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_29:
# 2452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_Puzzle3R_PoleF_27
# 2452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_Puzzle3R_PoleF_27
# 2452 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_PoleF_27
	goto AedesLux_Script_Puzzle3R_PoleF_28

AedesLux_Script_Puzzle3R_PoleF_37:
# 2457 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_PoleF_36

AedesLux_Script_Puzzle3R_PoleF_40:
# 2463 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_41:
# 2462 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_40
	goto AedesLux_Script_Puzzle3R_PoleF_39

AedesLux_Script_Puzzle3R_PoleF_45:
# 2466 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_46:
# 2465 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_D, AedesLux_Script_Puzzle3R_PoleF_45
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_47:
# 2465 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_B, AedesLux_Script_Puzzle3R_PoleF_46
	goto AedesLux_Script_Puzzle3R_PoleF_44

AedesLux_Script_Puzzle3R_PoleF_51:
# 2469 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_PoleF_26

AedesLux_Script_Puzzle3R_PoleF_52:
# 2468 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_PoleF_51
	goto AedesLux_Script_Puzzle3R_PoleF_26


AedesLux_Script_Puzzle3R_Pole10::
# 2482 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_2
AedesLux_Script_Puzzle3R_Pole10_1:
# 2486 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_5
# 2489 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole10_4:
# 2491 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2493 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole10_9
AedesLux_Script_Puzzle3R_Pole10_8:
# 2524 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole10_2:
# 2483 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole10_1

AedesLux_Script_Puzzle3R_Pole10_5:
# 2487 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole10_4

AedesLux_Script_Puzzle3R_Pole10_9:
# 2495 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2496 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_13
AedesLux_Script_Puzzle3R_Pole10_11:
# 2499 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole10_18
AedesLux_Script_Puzzle3R_Pole10_16:
# 2504 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_24
AedesLux_Script_Puzzle3R_Pole10_23:
# 2508 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole10_30
AedesLux_Script_Puzzle3R_Pole10_29:
# 2512 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 2514 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_35
AedesLux_Script_Puzzle3R_Pole10_32:
# 2518 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
AedesLux_Script_Puzzle3R_Pole10_21:
# 2521 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole10_8

AedesLux_Script_Puzzle3R_Pole10_12:
# 2497 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_13:
# 2496 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_12
	goto AedesLux_Script_Puzzle3R_Pole10_11

AedesLux_Script_Puzzle3R_Pole10_17:
# 2500 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_18:
# 2499 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_17
	goto AedesLux_Script_Puzzle3R_Pole10_16

AedesLux_Script_Puzzle3R_Pole10_22:
# 2505 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole10_21

AedesLux_Script_Puzzle3R_Pole10_24:
# 2504 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole10_22
# 2504 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole10_22
	goto AedesLux_Script_Puzzle3R_Pole10_23

AedesLux_Script_Puzzle3R_Pole10_30:
# 2509 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole10_29

AedesLux_Script_Puzzle3R_Pole10_33:
# 2515 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_34:
# 2514 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole10_33
	goto AedesLux_Script_Puzzle3R_Pole10_32

AedesLux_Script_Puzzle3R_Pole10_35:
# 2514 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_C, AedesLux_Script_Puzzle3R_Pole10_34
	goto AedesLux_Script_Puzzle3R_Pole10_32


AedesLux_Script_Puzzle3R_Pole11::
# 2530 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_2
AedesLux_Script_Puzzle3R_Pole11_1:
# 2534 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_5
# 2537 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole11_4:
# 2539 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2541 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole11_9
AedesLux_Script_Puzzle3R_Pole11_8:
# 2567 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole11_2:
# 2531 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole11_1

AedesLux_Script_Puzzle3R_Pole11_5:
# 2535 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole11_4

AedesLux_Script_Puzzle3R_Pole11_9:
# 2543 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2544 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole11_13
AedesLux_Script_Puzzle3R_Pole11_11:
# 2549 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_19
AedesLux_Script_Puzzle3R_Pole11_18:
# 2553 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_11, AedesLux_Script_Puzzle3R_Pole11_23
AedesLux_Script_Puzzle3R_Pole11_22:
# 2557 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 2559 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_27
AedesLux_Script_Puzzle3R_Pole11_16:
# 2564 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole11_8

AedesLux_Script_Puzzle3R_Pole11_12:
# 2545 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_13:
# 2544 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_12
	goto AedesLux_Script_Puzzle3R_Pole11_11

AedesLux_Script_Puzzle3R_Pole11_17:
# 2550 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_19:
# 2549 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_Puzzle3R_Pole11_17
	goto AedesLux_Script_Puzzle3R_Pole11_18

AedesLux_Script_Puzzle3R_Pole11_23:
# 2554 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole11_22

AedesLux_Script_Puzzle3R_Pole11_25:
# 2560 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_26:
# 2559 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_E, AedesLux_Script_Puzzle3R_Pole11_25
	goto AedesLux_Script_Puzzle3R_Pole11_16

AedesLux_Script_Puzzle3R_Pole11_27:
# 2559 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_A, AedesLux_Script_Puzzle3R_Pole11_26
	goto AedesLux_Script_Puzzle3R_Pole11_16


AedesLux_Script_Puzzle3R_Pole12::
# 2573 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_2
AedesLux_Script_Puzzle3R_Pole12_1:
# 2577 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_5
# 2580 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOff
AedesLux_Script_Puzzle3R_Pole12_4:
# 2582 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleSwitch, MSGBOX_YESNO
# 2584 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_ne AedesLux_Script_Puzzle3R_Pole12_9
AedesLux_Script_Puzzle3R_Pole12_8:
# 2610 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_Puzzle3R_Pole12_2:
# 2574 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleCompleted
	goto AedesLux_Script_Puzzle3R_Pole12_1

AedesLux_Script_Puzzle3R_Pole12_5:
# 2578 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Text_PoleOn
	goto AedesLux_Script_Puzzle3R_Pole12_4

AedesLux_Script_Puzzle3R_Pole12_9:
# 2586 "data/maps/AedesLux_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 2587 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq AedesLux_Script_Puzzle3R_Pole12_13
AedesLux_Script_Puzzle3R_Pole12_11:
# 2592 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_19
AedesLux_Script_Puzzle3R_Pole12_18:
# 2596 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_12, AedesLux_Script_Puzzle3R_Pole12_23
AedesLux_Script_Puzzle3R_Pole12_22:
# 2600 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 2602 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_26
AedesLux_Script_Puzzle3R_Pole12_16:
# 2607 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_UpdatePuzzle
	goto AedesLux_Script_Puzzle3R_Pole12_8

AedesLux_Script_Puzzle3R_Pole12_12:
# 2588 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleDanger
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_13:
# 2587 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_12
	goto AedesLux_Script_Puzzle3R_Pole12_11

AedesLux_Script_Puzzle3R_Pole12_17:
# 2593 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_12
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_19:
# 2592 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_Puzzle3R_Pole12_17
	goto AedesLux_Script_Puzzle3R_Pole12_18

AedesLux_Script_Puzzle3R_Pole12_23:
# 2597 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_PoleNothingHappened
	goto AedesLux_Script_Puzzle3R_Pole12_22

AedesLux_Script_Puzzle3R_Pole12_25:
# 2603 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
	goto AedesLux_Script_Puzzle3R_Pole12_16

AedesLux_Script_Puzzle3R_Pole12_26:
# 2602 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_F, AedesLux_Script_Puzzle3R_Pole12_25
	goto AedesLux_Script_Puzzle3R_Pole12_16


AedesLux_Script_ResetPuzzle1::
# 2618 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2619 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1_1
# 2633 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1_1:
# 2621 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1_4
# 2626 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2627 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2628 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2629 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle1Flags
# 2630 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1_4:
# 2622 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2623 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1L::
# 2639 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2640 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1L_1
# 2658 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1L_1:
# 2642 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1L_4
# 2647 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2648 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2649 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2650 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2651 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2652 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2653 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 2654 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2655 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1L_4:
# 2643 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2644 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle1R::
# 2664 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2665 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle1R_1
# 2683 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle1R_1:
# 2667 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 0
	goto_if_ne AedesLux_Script_ResetPuzzle1R_4
# 2672 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2673 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2674 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2675 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 2676 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2677 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2678 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 2679 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 2680 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	return

AedesLux_Script_ResetPuzzle1R_4:
# 2668 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2669 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2::
# 2689 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2690 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2_1
# 2704 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2_1:
# 2692 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2_4
# 2697 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2698 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2699 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2700 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle2Flags
# 2701 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2_4:
# 2693 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2694 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2L::
# 2710 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2711 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2L_1
# 2731 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2L_1:
# 2713 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2L_4
# 2718 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2719 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2720 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2721 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 2722 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 2723 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 2724 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 2725 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 2726 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 2727 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 2728 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2L_4:
# 2714 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2715 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle2R::
# 2737 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2738 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle2R_1
# 2761 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle2R_1:
# 2740 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_ne AedesLux_Script_ResetPuzzle2R_4
# 2745 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2746 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2747 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2748 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 2749 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 2750 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 2751 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 2752 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 2753 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 2754 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 2755 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 2756 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 2757 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 2758 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	return

AedesLux_Script_ResetPuzzle2R_4:
# 2741 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2742 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3L::
# 2767 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2768 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3L_1
# 2782 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3L_1:
# 2770 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3L_4
# 2775 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2776 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2777 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2778 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3LFlags
# 2779 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3L_4:
# 2771 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2772 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_ResetPuzzle3R::
# 2788 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_ResetPuzzle, MSGBOX_YESNO
# 2789 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AedesLux_Script_ResetPuzzle3R_1
# 2803 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return

AedesLux_Script_ResetPuzzle3R_1:
# 2791 "data/maps/AedesLux_1F/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_ne AedesLux_Script_ResetPuzzle3R_4
# 2796 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
# 2797 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2798 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2799 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetupPuzzle3RFlags
# 2800 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	return

AedesLux_Script_ResetPuzzle3R_4:
# 2792 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesTerra_Text_CantReset
# 2793 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	return


AedesLux_Script_UpdatePuzzle::
# 2810 "data/maps/AedesLux_1F/scripts.pory"
	playse SE_M_THUNDERBOLT2
# 2811 "data/maps/AedesLux_1F/scripts.pory"
	waitse
# 2813 "data/maps/AedesLux_1F/scripts.pory"
	switch VAR_TEMP_A
# 2815 "data/maps/AedesLux_1F/scripts.pory"
	case 0, AedesLux_Script_UpdatePuzzle_3
# 2817 "data/maps/AedesLux_1F/scripts.pory"
	case 1, AedesLux_Script_UpdatePuzzle_4
# 2819 "data/maps/AedesLux_1F/scripts.pory"
	case 2, AedesLux_Script_UpdatePuzzle_5
# 2821 "data/maps/AedesLux_1F/scripts.pory"
	case 3, AedesLux_Script_UpdatePuzzle_6
# 2826 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_1
# 2827 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end

AedesLux_Script_UpdatePuzzle_1:
	return

AedesLux_Script_UpdatePuzzle_3:
# 2816 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_4:
# 2818 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_5:
# 2820 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3
	goto AedesLux_Script_UpdatePuzzle_1

AedesLux_Script_UpdatePuzzle_6:
# 2822 "data/maps/AedesLux_1F/scripts.pory"
	msgbox AedesLux_Script_UpdatePuzzle_Text_0
# 2823 "data/maps/AedesLux_1F/scripts.pory"
	closemessage
	end


AedesLux_Script_DrawPuzzle1::
# 2837 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle1
# 2838 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 2839 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 2841 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle2::
# 2847 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle2
# 2848 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 2849 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 2851 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle3::
# 2857 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_CheckSolvePuzzle3
# 2858 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 2859 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
# 2861 "data/maps/AedesLux_1F/scripts.pory"
	special DrawWholeMapView
	return


AedesLux_Script_DrawPuzzle1L::
# 2867 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_4
AedesLux_Script_DrawPuzzle1L_3:
# 2873 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall, TRUE
# 2874 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol, TRUE
# 2875 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2876 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_1:
# 2879 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle1L_10
AedesLux_Script_DrawPuzzle1L_9:
# 2884 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2885 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor, FALSE
# 2886 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_7:
# 2889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_16
AedesLux_Script_DrawPuzzle1L_15:
# 2895 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall, TRUE
# 2896 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall, TRUE
# 2897 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2898 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle1L_13:
# 2901 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_22
AedesLux_Script_DrawPuzzle1L_21:
# 2906 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2907 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor, FALSE
# 2908 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1L_19:
	return

AedesLux_Script_DrawPuzzle1L_2:
# 2868 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2869 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 41, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 2870 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2871 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_1

AedesLux_Script_DrawPuzzle1L_4:
# 2867 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle1L_2
	goto AedesLux_Script_DrawPuzzle1L_3

AedesLux_Script_DrawPuzzle1L_8:
# 2880 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2881 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2882 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_7

AedesLux_Script_DrawPuzzle1L_10:
# 2879 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle1L_8
	goto AedesLux_Script_DrawPuzzle1L_9

AedesLux_Script_DrawPuzzle1L_14:
# 2890 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 41, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2891 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 41, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2892 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2893 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 42, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1L_13

AedesLux_Script_DrawPuzzle1L_16:
# 2889 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle1L_14
	goto AedesLux_Script_DrawPuzzle1L_15

AedesLux_Script_DrawPuzzle1L_20:
# 2902 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2903 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2904 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1L_19

AedesLux_Script_DrawPuzzle1L_22:
# 2901 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle1L_20
	goto AedesLux_Script_DrawPuzzle1L_21


AedesLux_Script_DrawPuzzle1R::
# 2915 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle1R_4
AedesLux_Script_DrawPuzzle1R_3:
# 2920 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2921 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor, FALSE
# 2922 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_1:
# 2925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_10
AedesLux_Script_DrawPuzzle1R_9:
# 2930 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole, TRUE
# 2931 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor, FALSE
# 2932 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle1R_7:
# 2935 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_16
AedesLux_Script_DrawPuzzle1R_15:
# 2941 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor, FALSE
# 2942 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor, FALSE
# 2943 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor, FALSE
# 2944 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_13:
# 2947 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_22
AedesLux_Script_DrawPuzzle1R_21:
# 2953 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor, FALSE
# 2954 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor, FALSE
# 2955 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor, FALSE
# 2956 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle1R_19:
	return

AedesLux_Script_DrawPuzzle1R_2:
# 2916 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 42, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2917 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 43, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2918 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 44, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_1

AedesLux_Script_DrawPuzzle1R_4:
# 2915 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle1R_2
	goto AedesLux_Script_DrawPuzzle1R_3

AedesLux_Script_DrawPuzzle1R_8:
# 2926 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 45, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 2927 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 46, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2928 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 47, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle1R_7

AedesLux_Script_DrawPuzzle1R_10:
# 2925 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle1R_8
	goto AedesLux_Script_DrawPuzzle1R_9

AedesLux_Script_DrawPuzzle1R_14:
# 2936 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2937 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2938 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2939 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_13

AedesLux_Script_DrawPuzzle1R_16:
# 2935 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle1R_14
	goto AedesLux_Script_DrawPuzzle1R_15

AedesLux_Script_DrawPuzzle1R_20:
# 2948 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 47, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 2949 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 47, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 2950 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 48, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 2951 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 48, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle1R_19

AedesLux_Script_DrawPuzzle1R_22:
# 2947 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle1R_20
	goto AedesLux_Script_DrawPuzzle1R_21


AedesLux_Script_DrawPuzzle2L::
# 2964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_4
AedesLux_Script_DrawPuzzle2L_3:
# 2970 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall, TRUE
# 2971 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall, TRUE
# 2972 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2973 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_1:
# 2976 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_10
AedesLux_Script_DrawPuzzle2L_9:
# 2982 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall, TRUE
# 2983 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall, TRUE
# 2984 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 2985 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2L_7:
# 2988 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle2L_16
AedesLux_Script_DrawPuzzle2L_15:
# 2993 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 2994 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor, FALSE
# 2995 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_13:
# 2998 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_22
AedesLux_Script_DrawPuzzle2L_21:
# 3004 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor, FALSE
# 3005 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor, FALSE
# 3006 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor, FALSE
# 3007 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_19:
# 3010 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle2L_28
AedesLux_Script_DrawPuzzle2L_27:
# 3015 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3016 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3017 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_25:
# 3020 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_34
AedesLux_Script_DrawPuzzle2L_33:
# 3025 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3026 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor, FALSE
# 3027 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2L_31:
# 3030 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_40
AedesLux_Script_DrawPuzzle2L_39:
# 3036 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor, FALSE
# 3037 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor, FALSE
# 3038 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor, FALSE
# 3039 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2L_37:
	return

AedesLux_Script_DrawPuzzle2L_2:
# 2965 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2966 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2967 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2968 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_1

AedesLux_Script_DrawPuzzle2L_4:
# 2964 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle2L_2
	goto AedesLux_Script_DrawPuzzle2L_3

AedesLux_Script_DrawPuzzle2L_8:
# 2977 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 2978 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 2979 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 2980 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 13, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_7

AedesLux_Script_DrawPuzzle2L_10:
# 2976 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle2L_8
	goto AedesLux_Script_DrawPuzzle2L_9

AedesLux_Script_DrawPuzzle2L_14:
# 2989 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 2990 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 2991 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_13

AedesLux_Script_DrawPuzzle2L_16:
# 2988 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_14
	goto AedesLux_Script_DrawPuzzle2L_15

AedesLux_Script_DrawPuzzle2L_20:
# 2999 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3000 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3001 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3002 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_19

AedesLux_Script_DrawPuzzle2L_22:
# 2998 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle2L_20
	goto AedesLux_Script_DrawPuzzle2L_21

AedesLux_Script_DrawPuzzle2L_26:
# 3011 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 34, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3012 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3013 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 36, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_25

AedesLux_Script_DrawPuzzle2L_28:
# 3010 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle2L_26
	goto AedesLux_Script_DrawPuzzle2L_27

AedesLux_Script_DrawPuzzle2L_32:
# 3021 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3022 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3023 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2L_31

AedesLux_Script_DrawPuzzle2L_34:
# 3020 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_32
	goto AedesLux_Script_DrawPuzzle2L_33

AedesLux_Script_DrawPuzzle2L_38:
# 3031 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3032 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3033 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3034 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2L_37

AedesLux_Script_DrawPuzzle2L_40:
# 3030 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle2L_38
	goto AedesLux_Script_DrawPuzzle2L_39


AedesLux_Script_DrawPuzzle2R::
# 3046 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle2R_4
AedesLux_Script_DrawPuzzle2R_3:
# 3052 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall, TRUE
# 3053 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall, TRUE
# 3054 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3055 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_1:
# 3058 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_10
AedesLux_Script_DrawPuzzle2R_9:
# 3064 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall, TRUE
# 3065 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall, TRUE
# 3066 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3067 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_7:
# 3070 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_16
AedesLux_Script_DrawPuzzle2R_15:
# 3076 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall, TRUE
# 3077 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol, TRUE
# 3078 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3079 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_13:
# 3082 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_22
AedesLux_Script_DrawPuzzle2R_21:
# 3087 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3088 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3089 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_19:
# 3092 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_28
AedesLux_Script_DrawPuzzle2R_27:
# 3097 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3098 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor, FALSE
# 3099 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_25:
# 3102 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_34
AedesLux_Script_DrawPuzzle2R_33:
# 3108 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor, FALSE
# 3109 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor, FALSE
# 3110 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor, FALSE
# 3111 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_31:
# 3114 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_40
AedesLux_Script_DrawPuzzle2R_39:
# 3119 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3120 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3121 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_37:
# 3124 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_46
AedesLux_Script_DrawPuzzle2R_45:
# 3129 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3130 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor, FALSE
# 3131 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle2R_43:
# 3134 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle2R_52
AedesLux_Script_DrawPuzzle2R_51:
# 3140 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor, FALSE
# 3141 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3142 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor, FALSE
# 3143 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_49:
# 3146 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_58
AedesLux_Script_DrawPuzzle2R_57:
# 3152 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3153 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3154 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3155 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle2R_55:
# 3158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_64
AedesLux_Script_DrawPuzzle2R_63:
# 3164 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor, FALSE
# 3165 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor, FALSE
# 3166 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor, FALSE
# 3167 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle2R_61:
	return

AedesLux_Script_DrawPuzzle2R_2:
# 3047 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3048 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3049 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3050 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_1

AedesLux_Script_DrawPuzzle2R_4:
# 3046 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle2R_2
	goto AedesLux_Script_DrawPuzzle2R_3

AedesLux_Script_DrawPuzzle2R_8:
# 3059 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3060 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 30, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3061 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3062 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_7

AedesLux_Script_DrawPuzzle2R_10:
# 3058 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle2R_8
	goto AedesLux_Script_DrawPuzzle2R_9

AedesLux_Script_DrawPuzzle2R_14:
# 3071 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 30, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3072 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 30, METATILE_MauvilleGym_WallSymbol_Electric_TopRight, TRUE
# 3073 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3074 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 31, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_13

AedesLux_Script_DrawPuzzle2R_16:
# 3070 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle2R_14
	goto AedesLux_Script_DrawPuzzle2R_15

AedesLux_Script_DrawPuzzle2R_20:
# 3083 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3084 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 32, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3085 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 33, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_19

AedesLux_Script_DrawPuzzle2R_22:
# 3082 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle2R_20
	goto AedesLux_Script_DrawPuzzle2R_21

AedesLux_Script_DrawPuzzle2R_26:
# 3093 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 31, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3094 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 32, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3095 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 33, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_25

AedesLux_Script_DrawPuzzle2R_28:
# 3092 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_26
	goto AedesLux_Script_DrawPuzzle2R_27

AedesLux_Script_DrawPuzzle2R_32:
# 3103 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 33, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3104 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 33, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3105 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 34, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3106 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 34, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_31

AedesLux_Script_DrawPuzzle2R_34:
# 3102 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle2R_32
	goto AedesLux_Script_DrawPuzzle2R_33

AedesLux_Script_DrawPuzzle2R_38:
# 3115 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 34, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3116 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 35, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3117 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 36, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_37

AedesLux_Script_DrawPuzzle2R_40:
# 3114 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_38
	goto AedesLux_Script_DrawPuzzle2R_39

AedesLux_Script_DrawPuzzle2R_44:
# 3125 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 34, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3126 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 35, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3127 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 36, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle2R_43

AedesLux_Script_DrawPuzzle2R_46:
# 3124 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_44
	goto AedesLux_Script_DrawPuzzle2R_45

AedesLux_Script_DrawPuzzle2R_50:
# 3135 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3136 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3137 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3138 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_49

AedesLux_Script_DrawPuzzle2R_52:
# 3134 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle2R_50
	goto AedesLux_Script_DrawPuzzle2R_51

AedesLux_Script_DrawPuzzle2R_56:
# 3147 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 3148 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 36, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3149 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3150 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 37, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_55

AedesLux_Script_DrawPuzzle2R_58:
# 3146 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle2R_56
	goto AedesLux_Script_DrawPuzzle2R_57

AedesLux_Script_DrawPuzzle2R_62:
# 3159 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 36, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3160 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 36, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3161 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 37, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3162 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 37, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle2R_61

AedesLux_Script_DrawPuzzle2R_64:
# 3158 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle2R_62
	goto AedesLux_Script_DrawPuzzle2R_63


AedesLux_Script_DrawPuzzle3L::
# 3174 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_DrawPuzzle3L_4
AedesLux_Script_DrawPuzzle3L_3:
# 3180 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall, TRUE
# 3181 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall, TRUE
# 3182 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3183 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow, FALSE
AedesLux_Script_DrawPuzzle3L_1:
# 3186 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_10
AedesLux_Script_DrawPuzzle3L_9:
# 3191 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3192 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3193 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_7:
# 3196 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_DrawPuzzle3L_16
AedesLux_Script_DrawPuzzle3L_15:
# 3201 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3202 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3203 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_13:
# 3206 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_22
AedesLux_Script_DrawPuzzle3L_21:
# 3211 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole, TRUE
# 3212 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3213 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_19:
# 3216 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_28
AedesLux_Script_DrawPuzzle3L_27:
# 3222 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor, FALSE
# 3223 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3224 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor, FALSE
# 3225 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_25:
# 3228 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_34
AedesLux_Script_DrawPuzzle3L_33:
# 3234 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor, FALSE
# 3235 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3236 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor, FALSE
# 3237 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_31:
# 3240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_40
AedesLux_Script_DrawPuzzle3L_39:
# 3245 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3246 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor, FALSE
# 3247 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3L_37:
# 3250 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_46
AedesLux_Script_DrawPuzzle3L_45:
# 3256 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor, FALSE
# 3257 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor, FALSE
# 3258 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor, FALSE
# 3259 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3L_43:
	return

AedesLux_Script_DrawPuzzle3L_2:
# 3175 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 17, METATILE_MauvilleGym_Wall_Electric_TopLeft, TRUE
# 3176 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 17, METATILE_MauvilleGym_Wall_Electric_TopRight, TRUE
# 3177 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3178 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 18, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_1

AedesLux_Script_DrawPuzzle3L_4:
# 3174 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_DrawPuzzle3L_2
	goto AedesLux_Script_DrawPuzzle3L_3

AedesLux_Script_DrawPuzzle3L_8:
# 3187 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 18, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3188 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 19, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3189 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 20, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_7

AedesLux_Script_DrawPuzzle3L_10:
# 3186 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_DrawPuzzle3L_8
	goto AedesLux_Script_DrawPuzzle3L_9

AedesLux_Script_DrawPuzzle3L_14:
# 3197 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3198 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3199 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 4, 23, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_13

AedesLux_Script_DrawPuzzle3L_16:
# 3196 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_DrawPuzzle3L_14
	goto AedesLux_Script_DrawPuzzle3L_15

AedesLux_Script_DrawPuzzle3L_20:
# 3207 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 21, METATILE_MauvilleGym_FloorLeftShadow_Pole_Electric, TRUE
# 3208 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 22, METATILE_MauvilleGym_FloorLeftShadow_ElectricV, TRUE
# 3209 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 10, 23, METATILE_MauvilleGym_FloorCornerShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_19

AedesLux_Script_DrawPuzzle3L_22:
# 3206 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_20
	goto AedesLux_Script_DrawPuzzle3L_21

AedesLux_Script_DrawPuzzle3L_26:
# 3217 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3218 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3219 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 5, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3220 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 6, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_25

AedesLux_Script_DrawPuzzle3L_28:
# 3216 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_DrawPuzzle3L_26
	goto AedesLux_Script_DrawPuzzle3L_27

AedesLux_Script_DrawPuzzle3L_32:
# 3229 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3230 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 23, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3231 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 8, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3232 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 9, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_31

AedesLux_Script_DrawPuzzle3L_34:
# 3228 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_DrawPuzzle3L_32
	goto AedesLux_Script_DrawPuzzle3L_33

AedesLux_Script_DrawPuzzle3L_38:
# 3241 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 24, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3242 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 25, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3243 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 7, 26, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3L_37

AedesLux_Script_DrawPuzzle3L_40:
# 3240 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_DrawPuzzle3L_38
	goto AedesLux_Script_DrawPuzzle3L_39

AedesLux_Script_DrawPuzzle3L_44:
# 3251 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 23, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3252 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 23, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3253 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 11, 24, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3254 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 12, 24, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3L_43

AedesLux_Script_DrawPuzzle3L_46:
# 3250 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_DrawPuzzle3L_44
	goto AedesLux_Script_DrawPuzzle3L_45


AedesLux_Script_DrawPuzzle3R::
# 3266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_4
AedesLux_Script_DrawPuzzle3R_3:
# 3272 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner, TRUE
# 3273 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow, FALSE
# 3274 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3275 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow, FALSE
AedesLux_Script_DrawPuzzle3R_1:
# 3278 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_DrawPuzzle3R_10
AedesLux_Script_DrawPuzzle3R_9:
# 3283 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole, TRUE
# 3284 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor, FALSE
# 3285 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_7:
# 3288 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_16
AedesLux_Script_DrawPuzzle3R_15:
# 3294 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor, FALSE
# 3295 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor, FALSE
# 3296 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor, FALSE
# 3297 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_13:
# 3300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_22
AedesLux_Script_DrawPuzzle3R_21:
# 3305 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3306 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor, FALSE
# 3307 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_19:
# 3310 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_28
AedesLux_Script_DrawPuzzle3R_27:
# 3315 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3316 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor, FALSE
# 3317 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_25:
# 3320 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_34
AedesLux_Script_DrawPuzzle3R_33:
# 3325 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3326 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor, FALSE
# 3327 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_31:
# 3330 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_40
AedesLux_Script_DrawPuzzle3R_39:
# 3336 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor, FALSE
# 3337 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor, FALSE
# 3338 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor, FALSE
# 3339 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_37:
# 3342 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_46
AedesLux_Script_DrawPuzzle3R_45:
# 3348 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor, FALSE
# 3349 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor, FALSE
# 3350 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor, FALSE
# 3351 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_43:
# 3354 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_52
AedesLux_Script_DrawPuzzle3R_51:
# 3360 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3361 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow, FALSE
# 3362 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor, FALSE
# 3363 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor, FALSE
AedesLux_Script_DrawPuzzle3R_49:
# 3366 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_58
AedesLux_Script_DrawPuzzle3R_57:
# 3371 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole, TRUE
# 3372 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor, FALSE
# 3373 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, FALSE
AedesLux_Script_DrawPuzzle3R_55:
	return

AedesLux_Script_DrawPuzzle3R_2:
# 3267 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 19, METATILE_MauvilleGym_WallCorner_Electric_TopLeft, TRUE
# 3268 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 19, METATILE_MauvilleGym_FloorLeftShadow_Electric_TopRight, TRUE
# 3269 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 20, METATILE_MauvilleGym_FloorTopShadow_Electric_BottomLeft, TRUE
# 3270 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 20, METATILE_MauvilleGym_FloorCornerShadow_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_1

AedesLux_Script_DrawPuzzle3R_4:
# 3266 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_DrawPuzzle3R_2
	goto AedesLux_Script_DrawPuzzle3R_3

AedesLux_Script_DrawPuzzle3R_8:
# 3279 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 20, METATILE_MauvilleGym_FloorTopShadow_Pole_Electric, TRUE
# 3280 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3281 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_7

AedesLux_Script_DrawPuzzle3R_10:
# 3278 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_DrawPuzzle3R_8
	goto AedesLux_Script_DrawPuzzle3R_9

AedesLux_Script_DrawPuzzle3R_14:
# 3289 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 19, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3290 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 19, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3291 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 20, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3292 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 20, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_13

AedesLux_Script_DrawPuzzle3R_16:
# 3288 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_DrawPuzzle3R_14
	goto AedesLux_Script_DrawPuzzle3R_15

AedesLux_Script_DrawPuzzle3R_20:
# 3301 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3302 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3303 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 22, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_19

AedesLux_Script_DrawPuzzle3R_22:
# 3300 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_20
	goto AedesLux_Script_DrawPuzzle3R_21

AedesLux_Script_DrawPuzzle3R_26:
# 3311 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 20, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3312 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 21, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3313 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 25, 22, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_25

AedesLux_Script_DrawPuzzle3R_28:
# 3310 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_26
	goto AedesLux_Script_DrawPuzzle3R_27

AedesLux_Script_DrawPuzzle3R_32:
# 3321 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3322 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3323 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 19, 25, METATILE_MauvilleGym_Floor_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_31

AedesLux_Script_DrawPuzzle3R_34:
# 3320 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_DrawPuzzle3R_32
	goto AedesLux_Script_DrawPuzzle3R_33

AedesLux_Script_DrawPuzzle3R_38:
# 3331 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3332 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3333 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 20, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3334 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 21, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_37

AedesLux_Script_DrawPuzzle3R_40:
# 3330 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_DrawPuzzle3R_38
	goto AedesLux_Script_DrawPuzzle3R_39

AedesLux_Script_DrawPuzzle3R_44:
# 3343 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 22, METATILE_MauvilleGym_Floor_Electric_TopLeft, FALSE
# 3344 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 22, METATILE_MauvilleGym_Floor_Electric_TopRight, FALSE
# 3345 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 23, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3346 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 24, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_43

AedesLux_Script_DrawPuzzle3R_46:
# 3342 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_DrawPuzzle3R_44
	goto AedesLux_Script_DrawPuzzle3R_45

AedesLux_Script_DrawPuzzle3R_50:
# 3355 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopLeft, FALSE
# 3356 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 22, METATILE_MauvilleGym_FloorTopShadow_Electric_TopRight, FALSE
# 3357 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 26, 23, METATILE_MauvilleGym_Floor_Electric_BottomLeft, TRUE
# 3358 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 27, 23, METATILE_MauvilleGym_Floor_Electric_BottomRight, TRUE
	goto AedesLux_Script_DrawPuzzle3R_49

AedesLux_Script_DrawPuzzle3R_52:
# 3354 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_DrawPuzzle3R_50
	goto AedesLux_Script_DrawPuzzle3R_51

AedesLux_Script_DrawPuzzle3R_56:
# 3367 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 23, METATILE_MauvilleGym_Floor_Pole_Electric, TRUE
# 3368 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 24, METATILE_MauvilleGym_Floor_ElectricV, TRUE
# 3369 "data/maps/AedesLux_1F/scripts.pory"
	setmetatile 28, 25, METATILE_MauvilleGym_FloorLeftShadow_PoleTop, TRUE
	goto AedesLux_Script_DrawPuzzle3R_55

AedesLux_Script_DrawPuzzle3R_58:
# 3366 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_DrawPuzzle3R_56
	goto AedesLux_Script_DrawPuzzle3R_57


AedesLux_Script_CheckSolvePuzzle1::
# 3381 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle1_4
AedesLux_Script_CheckSolvePuzzle1_1:
	return

AedesLux_Script_CheckSolvePuzzle1_2:
# 3392 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_3:
# 3383 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle1_8
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_4:
# 3382 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle1_3
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_7:
# 3385 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle1_12
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_8:
# 3384 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle1_7
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_11:
# 3387 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle1_16
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_12:
# 3386 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle1_11
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_15:
# 3389 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle1_19
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_16:
# 3388 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle1_15
	goto AedesLux_Script_CheckSolvePuzzle1_1

AedesLux_Script_CheckSolvePuzzle1_19:
# 3390 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle1_2
	goto AedesLux_Script_CheckSolvePuzzle1_1


AedesLux_Script_CheckSolvePuzzle2::
# 3399 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle2_4
AedesLux_Script_CheckSolvePuzzle2_1:
	return

AedesLux_Script_CheckSolvePuzzle2_2:
# 3418 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_3:
# 3401 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle2_8
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_4:
# 3400 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle2_3
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_7:
# 3403 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle2_12
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_8:
# 3402 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle2_7
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_11:
# 3405 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle2_16
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_12:
# 3404 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle2_11
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_15:
# 3407 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle2_20
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_16:
# 3406 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle2_15
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_19:
# 3409 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle2_24
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_20:
# 3408 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle2_19
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_23:
# 3411 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle2_28
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_24:
# 3410 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle2_23
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_27:
# 3413 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle2_32
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_28:
# 3412 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle2_27
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_31:
# 3415 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle2_2
	goto AedesLux_Script_CheckSolvePuzzle2_1

AedesLux_Script_CheckSolvePuzzle2_32:
# 3414 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle2_31
	goto AedesLux_Script_CheckSolvePuzzle2_1


AedesLux_Script_CheckSolvePuzzle3::
# 3425 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, AedesLux_Script_CheckSolvePuzzle3_4
AedesLux_Script_CheckSolvePuzzle3_1:
	return

AedesLux_Script_CheckSolvePuzzle3_2:
# 3445 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_B, 3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_3:
# 3427 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, AedesLux_Script_CheckSolvePuzzle3_8
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_4:
# 3426 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, AedesLux_Script_CheckSolvePuzzle3_3
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_7:
# 3429 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, AedesLux_Script_CheckSolvePuzzle3_12
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_8:
# 3428 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, AedesLux_Script_CheckSolvePuzzle3_7
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_11:
# 3431 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_7, AedesLux_Script_CheckSolvePuzzle3_16
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_12:
# 3430 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, AedesLux_Script_CheckSolvePuzzle3_11
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_15:
# 3433 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_9, AedesLux_Script_CheckSolvePuzzle3_20
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_16:
# 3432 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_8, AedesLux_Script_CheckSolvePuzzle3_15
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_19:
# 3435 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_B, AedesLux_Script_CheckSolvePuzzle3_24
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_20:
# 3434 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_A, AedesLux_Script_CheckSolvePuzzle3_19
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_23:
# 3437 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_D, AedesLux_Script_CheckSolvePuzzle3_28
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_24:
# 3436 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_C, AedesLux_Script_CheckSolvePuzzle3_23
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_27:
# 3439 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_F, AedesLux_Script_CheckSolvePuzzle3_32
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_28:
# 3438 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_E, AedesLux_Script_CheckSolvePuzzle3_27
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_31:
# 3441 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_11, AedesLux_Script_CheckSolvePuzzle3_35
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_32:
# 3440 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, AedesLux_Script_CheckSolvePuzzle3_31
	goto AedesLux_Script_CheckSolvePuzzle3_1

AedesLux_Script_CheckSolvePuzzle3_35:
# 3442 "data/maps/AedesLux_1F/scripts.pory"
	goto_if_set FLAG_TEMP_12, AedesLux_Script_CheckSolvePuzzle3_2
	goto AedesLux_Script_CheckSolvePuzzle3_1


AedesLux_Script_ClearAllFlags::
# 3451 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_1
# 3452 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_2
# 3453 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 3454 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_4
# 3455 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_5
# 3456 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_6
# 3457 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_7
# 3458 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_8
# 3459 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_9
# 3460 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_A
# 3461 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_B
# 3462 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_C
# 3463 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_D
# 3464 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_E
# 3465 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_F
# 3466 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_10
# 3467 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_11
# 3468 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_12
# 3469 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_13
# 3470 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_14
# 3471 "data/maps/AedesLux_1F/scripts.pory"
	clearflag FLAG_TEMP_15
	return


AedesLux_Script_SetAllFlags::
# 3476 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 3477 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 3478 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 3479 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_4
# 3480 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_5
# 3481 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_6
# 3482 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_7
# 3483 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_8
# 3484 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_9
# 3485 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_A
# 3486 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_B
# 3487 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_C
# 3488 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_D
# 3489 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_E
# 3490 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_F
# 3491 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 3492 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_11
# 3493 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_12
# 3494 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_13
# 3495 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_14
# 3496 "data/maps/AedesLux_1F/scripts.pory"
	setflag FLAG_TEMP_15
	return


AedesLux_Script_OpenPuzzle::
# 3502 "data/maps/AedesLux_1F/scripts.pory"
	setvar VAR_TEMP_A, 4
# 3504 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_SetAllFlags
# 3505 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1L
# 3506 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle1R
# 3507 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2L
# 3508 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle2R
# 3509 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3L
# 3510 "data/maps/AedesLux_1F/scripts.pory"
	call AedesLux_Script_DrawPuzzle3R
	return


AedesLux_Script_SolvedPuzzle_Text_0:
# 282 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B = 0$"

AedesLux_Script_SolvedPuzzle_Text_1:
# 326 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_B OOB$"

AedesLux_Script_UpdatePuzzle_Text_0:
# 2822 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A = 3$"

AedesLux_Script_UpdatePuzzle_Text_1:
# 2826 "data/maps/AedesLux_1F/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB$"

AedesLux_Text_NothingHappened::
# 3514 "data/maps/AedesLux_1F/scripts.pory"
	.string "Nothing happened...$"

AedesLux_Text_PoleSwitch::
# 3518 "data/maps/AedesLux_1F/scripts.pory"
	.string "Would you like to flip the switch?$"

AedesLux_Text_PoleOn::
# 3522 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole is glowing with electricity.$"

AedesLux_Text_PoleOff::
# 3526 "data/maps/AedesLux_1F/scripts.pory"
	.string "The pole seems to be deactivated.$"

AedesLux_Text_PoleDanger::
# 3530 "data/maps/AedesLux_1F/scripts.pory"
	.string "This seems dangerous. Better leave it\n"
	.string "alone for now!$"

AedesLux_Text_PoleCompleted::
# 3534 "data/maps/AedesLux_1F/scripts.pory"
	.string "The switch seems stuck in place.$"

AedesLux_Text_ZeldaPre::
# 3538 "data/maps/AedesLux_1F/scripts.pory"
	.string "I am Zelda, the princess of Hyrule. The\n"
	.string "Green Hero trusted me to protect the\l"
	.string "Trivis Sapientiae. You will never take\l"
	.string "it, as long as I draw breath!$"

AedesLux_Text_ZeldaLost::
# 3545 "data/maps/AedesLux_1F/scripts.pory"
	.string "I am beaten...Hyrule, I have failed you...$"
