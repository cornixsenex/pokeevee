MareS9_MapScripts::
# 12 "data/maps/MareS9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS9/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS9_F
# 16 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid0
	goto MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid1
	return


MareS9_Script_Transition_MareTropicum::
# 29 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 3
# 30 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 31 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_MareSubtropicum::
# 35 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 2
# 36 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 37 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaHesperia::
# 41 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 4
# 42 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 43 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_Tropicana::
# 47 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 5
# 48 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaTropica::
# 53 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 1
# 54 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_SetupAeneid0::
# 61 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 62 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 19, 36
# 65 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 67 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 68 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 16, 36
# 71 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_FACE_DOWN
# 73 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 74 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 76 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 77 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 79 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 80 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 82 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 34, 32
# 83 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
	return


MareS9_Script_SetupAeneid1::
# 89 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 90 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 91 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
	return


MareS9_Script_ShowTyriansFixingPristis::
# 100 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 15, 37
# 101 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 103 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 16, 36
# 104 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 106 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 107 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 109 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 19, 36
# 110 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_LOOK_AROUND
# 112 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 113 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 115 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 116 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 118 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 119 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
	return


MareS9_Script_Aeneas::
# 127 "data/maps/MareS9/scripts.pory"
	faceplayer
# 128 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 130 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Aeneas_1
	return

MareS9_Script_Aeneas_1:
# 131 "data/maps/MareS9/scripts.pory"
	goto_if_set FLAG_MARES9_AENEAS_INTROD, MareS9_Script_Aeneas_3
# 142 "data/maps/MareS9/scripts.pory"
	setflag FLAG_MARES9_AENEAS_INTROD
# 143 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help1, MSGBOX_YESNO
# 144 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_9
# 147 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 148 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 149 "data/maps/MareS9/scripts.pory"
	closemessage
# 150 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_3:
# 132 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help2, MSGBOX_YESNO
# 133 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_6
# 136 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 137 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 138 "data/maps/MareS9/scripts.pory"
	closemessage
# 139 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_6:
# 134 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return

MareS9_Script_Aeneas_9:
# 145 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return


MareS9_Script_Ascanius::
# 158 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius1
# 159 "data/maps/MareS9/scripts.pory"
	faceplayer
# 160 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius2
# 161 "data/maps/MareS9/scripts.pory"
	closemessage
# 162 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Romulus::
# 167 "data/maps/MareS9/scripts.pory"
	faceplayer
# 168 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Romulus
# 169 "data/maps/MareS9/scripts.pory"
	closemessage
# 170 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Remus::
# 175 "data/maps/MareS9/scripts.pory"
	faceplayer
# 176 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Remus
# 177 "data/maps/MareS9/scripts.pory"
	closemessage
# 178 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Faustulus::
# 183 "data/maps/MareS9/scripts.pory"
	faceplayer
# 184 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Faustulus_2
# 186 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Faustulus_3
# 189 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus3
MareS9_Script_Faustulus_1:
# 191 "data/maps/MareS9/scripts.pory"
	closemessage
# 192 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Faustulus_2:
# 185 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus1
	goto MareS9_Script_Faustulus_1

MareS9_Script_Faustulus_3:
# 187 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus2
	goto MareS9_Script_Faustulus_1


MareS9_Script_Beroe::
# 197 "data/maps/MareS9/scripts.pory"
	faceplayer
# 198 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Beroe_2
# 200 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Beroe_3
# 203 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe3
MareS9_Script_Beroe_1:
# 205 "data/maps/MareS9/scripts.pory"
	closemessage
# 206 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Beroe_2:
# 199 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe1
	goto MareS9_Script_Beroe_1

MareS9_Script_Beroe_3:
# 201 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe2
	goto MareS9_Script_Beroe_1


MareS9_Script_Tyrian1::
# 211 "data/maps/MareS9/scripts.pory"
	faceplayer
# 213 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Tyrian1_1
# 220 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer1
# 221 "data/maps/MareS9/scripts.pory"
	closemessage
# 222 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceUp
# 223 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 224 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

MareS9_Script_Tyrian1_1:
# 214 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianTowerBlock
# 215 "data/maps/MareS9/scripts.pory"
	closemessage
# 216 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceDown
# 217 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	return


MareS9_Script_Tyrian2::
# 229 "data/maps/MareS9/scripts.pory"
	faceplayer
# 230 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer2
# 231 "data/maps/MareS9/scripts.pory"
	closemessage
# 232 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_FaceLeft
# 233 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 234 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


MareS9_Script_DidoScene::
# 239 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_DidoSceneStart
# 240 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 241 "data/maps/MareS9/scripts.pory"
	closemessage
# 243 "data/maps/MareS9/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 244 "data/maps/MareS9/scripts.pory"
	switch VAR_RESULT
# 245 "data/maps/MareS9/scripts.pory"
	case DIR_NORTH, MareS9_Script_DidoScene_3
# 253 "data/maps/MareS9/scripts.pory"
	case DIR_SOUTH, MareS9_Script_DidoScene_4
# 263 "data/maps/MareS9/scripts.pory"
	case DIR_WEST, MareS9_Script_DidoScene_5
# 271 "data/maps/MareS9/scripts.pory"
	case DIR_EAST, MareS9_Script_DidoScene_6
# 279 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_DidoScene_Text_0
# 280 "data/maps/MareS9/scripts.pory"
	closemessage
	end

MareS9_Script_DidoScene_1:
# 284 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, MareS9_Movement_BeginDidoScene
# 285 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_BeginDidoScene
# 286 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 288 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 289 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 290 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 292 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 293 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_EnterTown
# 294 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 296 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_TYRIAN, 190, 98
# 297 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_MakeWay
# 298 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_TYRIAN
# 299 "data/maps/MareS9/scripts.pory"
	closemessage
# 301 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 302 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 303 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 304 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 305 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 306 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 308 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 309 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 310 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 311 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 312 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 313 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 22, 55
# 314 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 21, 56
# 315 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 23, 56
# 316 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 23, 54
# 317 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 21, 54
# 318 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 319 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
# 320 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_FACE_DOWN
# 321 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_FACE_DOWN
# 322 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_FACE_DOWN
# 323 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 324 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 325 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 326 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN3
# 327 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN4
# 329 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp6
# 330 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp6
# 331 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp6
# 332 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp6
# 333 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp6
# 334 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 336 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 337 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 339 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight4
# 340 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight4
# 341 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight4
# 342 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 343 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 344 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_FaceUp
# 345 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_FaceUp
# 346 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 348 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 349 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa1
# 350 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 352 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 353 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_AeneasToElissa
# 354 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 356 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 357 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa2
# 358 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceLeft
# 359 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 361 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa3
# 362 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 363 "data/maps/MareS9/scripts.pory"
	closemessage
# 365 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp2
# 366 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp2
# 367 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 368 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight
# 369 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 370 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkRight3
# 371 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight3
# 372 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 373 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp4
# 374 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp4
# 375 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 377 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 378 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 379 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 380 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 381 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 383 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 384 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 385 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 386 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa4
# 387 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 388 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 389 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_GoWithElissa
# 390 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 391 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 392 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa5
# 393 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 394 "data/maps/MareS9/scripts.pory"
	closemessage
# 396 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 397 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight
# 398 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight
# 399 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight
# 400 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 401 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp2
# 402 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp2
# 403 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp3
# 404 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp3
# 405 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 406 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight7
# 407 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight7
# 408 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight7
# 409 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight7
# 410 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 412 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 413 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 414 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 415 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 416 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 417 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 418 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 419 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 420 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 0, 0
# 421 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_INVISIBLE
# 422 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 0, 0
# 423 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_INVISIBLE
# 425 "data/maps/MareS9/scripts.pory"
	setvar VAR_AENEID_STATE, 1
# 426 "data/maps/MareS9/scripts.pory"
	release
	end

MareS9_Script_DidoScene_3:
# 246 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 247 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 248 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 249 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 250 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 251 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 252 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_4:
# 254 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 255 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 256 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 257 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 258 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 259 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 260 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 261 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 262 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_5:
# 264 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 265 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 266 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 267 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 268 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 269 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 270 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_6:
# 272 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 273 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 274 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 275 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight2
# 276 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 277 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1


# 430 "data/maps/MareS9/scripts.pory"
MareS9_Movement_BeginDidoScene:
# 431 "data/maps/MareS9/scripts.pory"
	walk_right
# 431 "data/maps/MareS9/scripts.pory"
	walk_right
# 431 "data/maps/MareS9/scripts.pory"
	walk_right
# 431 "data/maps/MareS9/scripts.pory"
	walk_right
# 431 "data/maps/MareS9/scripts.pory"
	walk_right
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
# 432 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

MareS9_Script_DidoScene_Text_0:
# 279 "data/maps/MareS9/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

MareS9_Text_Aeneas_Help1::
# 441 "data/maps/MareS9/scripts.pory"
	.string "My manly pride prevents me from crying\n"
	.string "but honesty compels me to admit that\l"
	.string "we are stranded here. Oh, pardon me, my\l"
	.string "manners must have slipped my mind. My\l"
	.string "name is Aeneas. I am a man of Troy who\l"
	.string "set sail long ago to found a new city on\l"
	.string "the Isla Hesperia. We were five ships,\l"
	.string "and twenty seven strong, when first we\l"
	.string "set sail for Lavinian shores, but we\l"
	.string "have had a rough going at sea. A mighty\l"
	.string "storm broke two of our proud ships,\l"
	.string "another sank at Scylla Charybdis, a\l"
	.string "fourth was burned by the sunburned\l"
	.string "island, and now our final ship, the swift\l"
	.string "Pristis, has run aground after\l"
	.string "Palinurus, our late helmsman, threw\l"
	.string "himself from the deck. My father, and my\l"
	.string "wife, and my best friend, have all died\l"
	.string "on this journey I command. Now we have\l"
	.string "made landfall and some would have us\l"
	.string "give up our quest for Hesperia and\l"
	.string "settle here, but I will not give up! It\l"
	.string "has been prophesied ! I am to found the\l"
	.string "city which will come to rule the world.\l"
	.string "The fortune teller, Princess Cassandra,\l"
	.string "foresaw my city on Hesperia. If we quit\l"
	.string "now then all was lost in vain, then my\l"
	.string "dear father, and my tender wife, and all\l"
	.string "the rest, were killed, and nothing\l"
	.string "gained. We must persist, but right now\l"
	.string "the Pristis is not sea worthy. We must\l"
	.string "make repairs! Although I neither\l"
	.string "knowledge nor parts, perhaps we can\l"
	.string "acquire both in town. Tell me, young\l"
	.string "friend, will you not win glory and join\l"
	.string "our quest to found a new city?$"

MareS9_Text_Aeneas_NoHelp::
# 478 "data/maps/MareS9/scripts.pory"
	.string "I understand. Your path is yours to\n"
	.string "choose. We'll find some other way to fix\l"
	.string "Pristis and sail to glory and Hesperia,\l"
	.string "but if you change your mind, come speak\l"
	.string "with me.$"

MareS9_Text_Aeneas_Help2::
# 486 "data/maps/MareS9/scripts.pory"
	.string "Young friend, have you come to help fix\n"
	.string "Pristis?$"

MareS9_Text_Aeneas_EnterTown::
# 492 "data/maps/MareS9/scripts.pory"
	.string "This island is more inhabited than I\n"
	.string "thought at first. I think we should\l"
	.string "split up to search for the parts and...$"

MareS9_Text_MakeWay::
# 498 "data/maps/MareS9/scripts.pory"
	.string "Make way for Queen Tyrii, Elissa!$"

MareS9_Script_Aeneas_DidoSceneStart::
# 502 "data/maps/MareS9/scripts.pory"
	.string "Then let's head into town and try to\n"
	.string "find the parts and labor we need to set\l"
	.string "sail.$"

MareS9_Text_Elissa1::
# 510 "data/maps/MareS9/scripts.pory"
	.string "What's this? A stranger has come to our\n"
	.string "land? Someone unknown to us, that much\l"
	.string "is sure, but how, and why, as well are\l"
	.string "quickly guessed. Either a merchant,\l"
	.string "pirate criminal, or else a pilgrim\l"
	.string "scattered by the waves. Your coat too\l"
	.string "clean, and brow too nobly held, to be\l"
	.string "the kind of scum who comes to steal,\l"
	.string "too aged, too honest, and too insecure,\l"
	.string "to be part of the guild, so you must be a\l"
	.string "traveller who, by the winds of fate, was\l"
	.string "blown off course for us to meet you\l"
	.string "here. Tell us, pilgrim, does our guess\l"
	.string "find it's mark?$"

MareS9_Text_AeneasToElissa::
# 525 "data/maps/MareS9/scripts.pory"
	.string "Indeed, fair queen, I mean not to\n"
	.string "intrude. My name is Aeneas, and I am\l"
	.string "lost. Some time ago I was a prince of\l"
	.string "Troy who set off in search of Hesperia\l"
	.string "where fate and prophesy have promised\l"
	.string "me a mighty city is mine too create. A\l"
	.string "wicked storm, the perils of the sea, and\l"
	.string "my late helmsman have left me\l"
	.string "shipwrecked, my fleet destroyed, and my\l"
	.string "best men drowned. I come before you to\l"
	.string "bargain, else beg, the parts and labor\l"
	.string "needed to repair my last surviving boat,\l"
	.string "now washed ashore by chance on your\l"
	.string "island. We come in peace.$"

MareS9_Text_Elissa2::
# 541 "data/maps/MareS9/scripts.pory"
	.string "And in peace you will find all that you\n"
	.string "seek! My name is Elissa, I am the queen\l"
	.string "of Turris Saltus and the Tyrians. My\l"
	.string "handmaidens will swiftly fix your ship\l"
	.string "and resupply your voyage on the sea.\l"
	.string "These thing I offer you freely, for I\l"
	.string "desire nothing in return, except to see\l"
	.string "your princely face brought to smile.$"

MareS9_Text_Elissa3::
# 552 "data/maps/MareS9/scripts.pory"
	.string "You two, go to his ship. Spare no\n"
	.string "expense. Set her afloat as strong as\l"
	.string "newly built.$"

MareS9_Text_Elissa4::
# 557 "data/maps/MareS9/scripts.pory"
	.string "Tell me, Aeneas, prince, will you join me\n"
	.string "atop Turris Saltus? We might enjoy the\l"
	.string "pleasant things in life. Good food, fine\l"
	.string "wine, and breathtaking views would\l"
	.string "accompany our conversation on my\l"
	.string "queenly couch. For I would have you tell\l"
	.string "of your journey, which interests me as\l"
	.string "much as you, fine prince.$"

MareS9_Text_Aeneas_GoWithElissa::
# 567 "data/maps/MareS9/scripts.pory"
	.string "Most gracious queen, your offer I\n"
	.string "accept. I will go with you, and must bow\l"
	.string "my head, to give my greatest thanks...$"

MareS9_Text_Elissa5::
# 573 "data/maps/MareS9/scripts.pory"
	.string "Smile, don't bow! Now come Aeneas,\n"
	.string "prince, there's much to say, to see, to\l"
	.string "do, to feel, just you and I.$"

MareS9_Text_Ascanius1::
# 579 "data/maps/MareS9/scripts.pory"
	.string "Romulus! Remus! Stop running around!$"

MareS9_Text_Ascanius2::
# 583 "data/maps/MareS9/scripts.pory"
	.string "Even shipwrecked parenting's such a\n"
	.string "chore.$"

MareS9_Text_Romulus::
# 587 "data/maps/MareS9/scripts.pory"
	.string "I am the older twin. That mean's I'm\n"
	.string "first!$"

MareS9_Text_Remus::
# 591 "data/maps/MareS9/scripts.pory"
	.string "I am the faster twin. That mean's I'm\n"
	.string "best!$"

MareS9_Text_Faustulus1::
# 596 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas all madays maserve. Island\n"
	.string "way off kafigure maknow. Big town\l"
	.string "kafound kadestine taknowya$"

MareS9_Text_Faustulus2::
# 603 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaaroundna good mafeelna.\n"
	.string "Soon kareturn mahope.$"

MareS9_Text_Faustulus3::
# 609 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaback magladya. Kaaround\n"
	.string "safe mafeelna.$"

MareS9_Text_Beroe1::
# 616 "data/maps/MareS9/scripts.pory"
	.string "It seems like all we do is fall from one\n"
	.string "disaster to another! We have been at\l"
	.string "sea for months and finally when we land\l"
	.string "on shores where no one tries to get us\l"
	.string "killed Aeneas wants to leave ASAP! We're\l"
	.string "better off staying here, where it's\l"
	.string "safe, than casting off again to search\l"
	.string "in vain for some island. I'm not sure it\l"
	.string "exists!$"

MareS9_Text_Beroe2::
# 629 "data/maps/MareS9/scripts.pory"
	.string "Oh great, Aeneas has gone off again and\n"
	.string "sent these savages to fix Pristis. I\l"
	.string "doubt they know how to tie their own\l"
	.string "shoes let alone repair ships. This thing\l"
	.string "will sink the minute we set sail! You\l"
	.string "mark my words.$"

MareS9_Text_Beroe3::
# 638 "data/maps/MareS9/scripts.pory"
	.string "Fantastic, now Aeneas thinks the boat\n"
	.string "is seaworthy again and cannot wait to\l"
	.string "sail from this beachhead into some new\l"
	.string "unkown danger. I swear that's all he\l"
	.string "does! He takes a bad picture and makes\l"
	.string "it worse!$"

MareS9_Text_TyrianTowerBlock::
# 646 "data/maps/MareS9/scripts.pory"
	.string "Turris Saltus, home of the Tyrians and\n"
	.string "our most noble queen, fair Elissa, is not\l"
	.string "open to visitors. Goodbye.$"

MareS9_Text_TyrianFixer1::
# 652 "data/maps/MareS9/scripts.pory"
	.string "Don't worry, I've fixed ships like this\n"
	.string "before.$"

MareS9_Text_TyrianFixer2::
# 656 "data/maps/MareS9/scripts.pory"
	.string "I don't love fixing boats, but it's my\n"
	.string "job. When the Queen says 'do this' it is\l"
	.string "performed.$"
