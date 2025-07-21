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
# 20 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_eq MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid0
	goto MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid1
	goto MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_SetupAeneid2
	return


MareS9_Script_Transition_MareTropicum::
# 33 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 3
# 34 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 35 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_MareSubtropicum::
# 39 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 41 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaHesperia::
# 45 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 4
# 46 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 47 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_Tropicana::
# 51 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 5
# 52 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 53 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaTropica::
# 57 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 1
# 58 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 59 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_SetupAeneid0::
# 65 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 66 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 68 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 19, 36
# 69 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 71 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 72 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 16, 36
# 75 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_FACE_DOWN
# 77 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 78 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 80 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 81 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 83 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 84 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 86 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 34, 32
# 87 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
	return


MareS9_Script_SetupAeneid1::
# 93 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 94 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 95 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
	return


MareS9_Script_SetupAeneid2::
# 101 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 102 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 104 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 105 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 107 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 108 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 110 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 111 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
# 113 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 16, 36
# 114 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 116 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 15, 37
# 117 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_FACE_UP
# 119 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 17, 36
# 120 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
	return


MareS9_Script_ShowTyriansFixingPristis::
# 126 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_PRISTIS, 15, 36
# 127 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_PRISTIS, MOVEMENT_TYPE_FACE_DOWN
# 129 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 15, 37
# 130 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
# 132 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 16, 36
# 133 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 135 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 18, 36
# 136 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_FACE_DOWN
# 138 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 19, 36
# 139 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_LOOK_AROUND
# 141 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 16, 40
# 142 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_LOOK_AROUND
# 144 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 14, 41
# 145 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 147 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 38
# 148 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_WALK_DOWN_AND_UP
	return


MareS9_Script_Aeneas::
# 155 "data/maps/MareS9/scripts.pory"
	faceplayer
# 156 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 158 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Aeneas_1
# 185 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral1
# 186 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 188 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 189 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa_Funeral1
# 190 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 191 "data/maps/MareS9/scripts.pory"
	closemessage
# 192 "data/maps/MareS9/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 194 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 195 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_ExclamationMark
# 196 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 197 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 199 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceRight
# 200 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceRight
# 201 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 202 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 204 "data/maps/MareS9/scripts.pory"
	lockall
# 206 "data/maps/MareS9/scripts.pory"
	special SpawnCameraObject
# 207 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_MoveCameraToFuneral
# 208 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 210 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 211 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 212 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 15, 40
# 213 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 40
# 214 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 215 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_FACE_UP
# 216 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 217 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 218 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_FaceUp
# 219 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 221 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 222 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa_Funeral2
# 223 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 224 "data/maps/MareS9/scripts.pory"
	closemessage
# 226 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 227 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 34, 19
# 228 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_UP
# 229 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 231 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp
# 232 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 233 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceDown
# 234 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 235 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 236 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 238 "data/maps/MareS9/scripts.pory"
	delay 40
# 239 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Movement_SetInvisible
# 240 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 241 "data/maps/MareS9/scripts.pory"
	playse SE_FALL
# 242 "data/maps/MareS9/scripts.pory"
	delay 60
# 243 "data/maps/MareS9/scripts.pory"
	playse SE_M_DIVE
# 244 "data/maps/MareS9/scripts.pory"
	delay 60
# 246 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 247 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 248 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 249 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 251 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_ReturnCameraFromFuneral
# 252 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 253 "data/maps/MareS9/scripts.pory"
	special RemoveCameraObject
# 255 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 256 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceDown
# 257 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 258 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 259 "data/maps/MareS9/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 261 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 262 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral2
# 263 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 264 "data/maps/MareS9/scripts.pory"
	closemessage
# 266 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_ExclamationMark
# 267 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 268 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_FaceRight
# 269 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 271 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 272 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral1
# 273 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 275 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 276 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral3
# 278 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceRight
# 279 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceLeft
# 280 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 281 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral4
# 282 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 284 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 285 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral1
# 286 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 288 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 289 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral5
# 290 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 291 "data/maps/MareS9/scripts.pory"
	closemessage
# 293 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 294 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 295 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkDown
# 296 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 297 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceLeft
# 298 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 300 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 301 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral2
# 302 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 303 "data/maps/MareS9/scripts.pory"
	closemessage
# 305 "data/maps/MareS9/scripts.pory"
	trainerbattle_no_intro TRAINER_FAUSTULUS, MareS9_Text_FaustulusLost
# 307 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 308 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral3
# 309 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 310 "data/maps/MareS9/scripts.pory"
	closemessage
# 312 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 313 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceUp
# 314 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 316 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 317 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral6
# 318 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 320 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 321 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral2
# 322 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 324 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 325 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 327 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 328 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral7
# 329 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 330 "data/maps/MareS9/scripts.pory"
	closemessage
# 333 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_WalkUp
# 334 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 335 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_BEROE
# 336 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 0, 0
# 337 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_INVISIBLE
# 338 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_BEROE
# 340 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 341 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkLeft
# 342 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 343 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 344 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 345 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 346 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 347 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 348 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp2
# 349 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp2
# 350 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp2
# 351 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 352 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 353 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 0, 0
# 354 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_INVISIBLE
# 355 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 356 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 357 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 358 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 359 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ASCANIUS
# 360 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 0, 0
# 361 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_INVISIBLE
# 362 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ASCANIUS
# 363 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 364 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 365 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 366 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 0, 0
# 367 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_INVISIBLE
# 368 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 388 "data/maps/MareS9/scripts.pory"
	releaseall
	end

MareS9_Script_Aeneas_1:
# 159 "data/maps/MareS9/scripts.pory"
	goto_if_set FLAG_MARES9_AENEAS_INTROD, MareS9_Script_Aeneas_4
# 170 "data/maps/MareS9/scripts.pory"
	setflag FLAG_MARES9_AENEAS_INTROD
# 171 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help1, MSGBOX_YESNO
# 172 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_10
# 175 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 176 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 177 "data/maps/MareS9/scripts.pory"
	closemessage
# 178 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_4:
# 160 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help2, MSGBOX_YESNO
# 161 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_7
# 164 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 165 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 166 "data/maps/MareS9/scripts.pory"
	closemessage
# 167 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_7:
# 162 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return

MareS9_Script_Aeneas_10:
# 173 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return


MareS9_Script_Ascanius::
# 394 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius1
# 395 "data/maps/MareS9/scripts.pory"
	faceplayer
# 396 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius2
# 397 "data/maps/MareS9/scripts.pory"
	closemessage
# 398 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Romulus::
# 403 "data/maps/MareS9/scripts.pory"
	faceplayer
# 404 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Romulus
# 405 "data/maps/MareS9/scripts.pory"
	closemessage
# 406 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Remus::
# 411 "data/maps/MareS9/scripts.pory"
	faceplayer
# 412 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Remus
# 413 "data/maps/MareS9/scripts.pory"
	closemessage
# 414 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Faustulus::
# 419 "data/maps/MareS9/scripts.pory"
	faceplayer
# 420 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Faustulus_2
# 422 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Faustulus_3
# 425 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus3
MareS9_Script_Faustulus_1:
# 427 "data/maps/MareS9/scripts.pory"
	closemessage
# 428 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Faustulus_2:
# 421 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus1
	goto MareS9_Script_Faustulus_1

MareS9_Script_Faustulus_3:
# 423 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus2
	goto MareS9_Script_Faustulus_1


MareS9_Script_Beroe::
# 433 "data/maps/MareS9/scripts.pory"
	faceplayer
# 434 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Beroe_2
# 436 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Beroe_3
# 439 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe3
MareS9_Script_Beroe_1:
# 441 "data/maps/MareS9/scripts.pory"
	closemessage
# 442 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Beroe_2:
# 435 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe1
	goto MareS9_Script_Beroe_1

MareS9_Script_Beroe_3:
# 437 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe2
	goto MareS9_Script_Beroe_1


MareS9_Script_Tyrian1::
# 447 "data/maps/MareS9/scripts.pory"
	faceplayer
# 449 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Tyrian1_1
# 456 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer1
# 457 "data/maps/MareS9/scripts.pory"
	closemessage
# 458 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceUp
# 459 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 460 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

MareS9_Script_Tyrian1_1:
# 450 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianTowerBlock
# 451 "data/maps/MareS9/scripts.pory"
	closemessage
# 452 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceDown
# 453 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	return


MareS9_Script_Tyrian2::
# 465 "data/maps/MareS9/scripts.pory"
	faceplayer
# 466 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer2
# 467 "data/maps/MareS9/scripts.pory"
	closemessage
# 468 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_FaceLeft
# 469 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 470 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


MareS9_Script_DidoScene::
# 475 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_DidoSceneStart
# 476 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 477 "data/maps/MareS9/scripts.pory"
	closemessage
# 479 "data/maps/MareS9/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 480 "data/maps/MareS9/scripts.pory"
	switch VAR_RESULT
# 481 "data/maps/MareS9/scripts.pory"
	case DIR_NORTH, MareS9_Script_DidoScene_3
# 489 "data/maps/MareS9/scripts.pory"
	case DIR_SOUTH, MareS9_Script_DidoScene_4
# 499 "data/maps/MareS9/scripts.pory"
	case DIR_WEST, MareS9_Script_DidoScene_5
# 507 "data/maps/MareS9/scripts.pory"
	case DIR_EAST, MareS9_Script_DidoScene_6
# 515 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_DidoScene_Text_0
# 516 "data/maps/MareS9/scripts.pory"
	closemessage
	end

MareS9_Script_DidoScene_1:
# 520 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, MareS9_Movement_BeginDidoScene
# 521 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_BeginDidoScene
# 522 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 524 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 525 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 526 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 528 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 529 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_EnterTown
# 530 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 532 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_TYRIAN, 190, 98
# 533 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_MakeWay
# 534 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_TYRIAN
# 535 "data/maps/MareS9/scripts.pory"
	closemessage
# 537 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 538 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 539 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 540 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 541 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 542 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 544 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 545 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 546 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 547 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 548 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 549 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 22, 55
# 550 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 21, 56
# 551 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 23, 56
# 552 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 23, 54
# 553 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 21, 54
# 554 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 555 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
# 556 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_FACE_DOWN
# 557 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_FACE_DOWN
# 558 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_FACE_DOWN
# 559 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 560 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 561 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 562 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN3
# 563 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN4
# 565 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp6
# 566 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp6
# 567 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp6
# 568 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp6
# 569 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp6
# 570 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 572 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 573 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 575 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight4
# 576 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight4
# 577 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight4
# 578 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 579 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 580 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_FaceUp
# 581 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_FaceUp
# 582 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 584 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 585 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa1
# 586 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 588 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 589 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_AeneasToElissa
# 590 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 592 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 593 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa2
# 594 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceLeft
# 595 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa3
# 598 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 599 "data/maps/MareS9/scripts.pory"
	closemessage
# 601 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp2
# 602 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp2
# 603 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 604 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight
# 605 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 606 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkRight3
# 607 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight3
# 608 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 609 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp4
# 610 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp4
# 611 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 613 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 614 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 615 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 616 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 617 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 619 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 620 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 621 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 622 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa4
# 623 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 624 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 625 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_GoWithElissa
# 626 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 627 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 628 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa5
# 629 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 630 "data/maps/MareS9/scripts.pory"
	closemessage
# 632 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 633 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight
# 634 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight
# 635 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight
# 636 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 637 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp2
# 638 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp2
# 639 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp3
# 640 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp3
# 641 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 642 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight7
# 643 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight7
# 644 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight7
# 645 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight7
# 646 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 648 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 649 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 650 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 651 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 652 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 653 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 654 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 655 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 656 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 0, 0
# 657 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_INVISIBLE
# 658 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 0, 0
# 659 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_INVISIBLE
# 661 "data/maps/MareS9/scripts.pory"
	setvar VAR_AENEID_STATE, 1
# 662 "data/maps/MareS9/scripts.pory"
	release
	end

MareS9_Script_DidoScene_3:
# 482 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 483 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 484 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 485 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 486 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 487 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 488 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_4:
# 490 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 491 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 492 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 493 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 494 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 495 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 496 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 497 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 498 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_5:
# 500 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 501 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 502 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 503 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 504 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 505 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 506 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_6:
# 508 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 509 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 510 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 511 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight2
# 512 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 513 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1


# 666 "data/maps/MareS9/scripts.pory"
MareS9_Movement_BeginDidoScene:
# 667 "data/maps/MareS9/scripts.pory"
	walk_right
# 667 "data/maps/MareS9/scripts.pory"
	walk_right
# 667 "data/maps/MareS9/scripts.pory"
	walk_right
# 667 "data/maps/MareS9/scripts.pory"
	walk_right
# 667 "data/maps/MareS9/scripts.pory"
	walk_right
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
# 668 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 671 "data/maps/MareS9/scripts.pory"
MareS9_Movement_MoveCameraToFuneral:
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 672 "data/maps/MareS9/scripts.pory"
	walk_right
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
# 673 "data/maps/MareS9/scripts.pory"
	walk_up
	step_end

# 676 "data/maps/MareS9/scripts.pory"
MareS9_Movement_ReturnCameraFromFuneral:
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 677 "data/maps/MareS9/scripts.pory"
	walk_left
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
# 678 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

MareS9_Script_DidoScene_Text_0:
# 515 "data/maps/MareS9/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

MareS9_Text_Aeneas_Help1::
# 687 "data/maps/MareS9/scripts.pory"
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
# 724 "data/maps/MareS9/scripts.pory"
	.string "I understand. Your path is yours to\n"
	.string "choose. We'll find some other way to fix\l"
	.string "Pristis and sail to glory and Hesperia,\l"
	.string "but if you change your mind, come speak\l"
	.string "with me.$"

MareS9_Text_Aeneas_Help2::
# 732 "data/maps/MareS9/scripts.pory"
	.string "Young friend, have you come to help fix\n"
	.string "Pristis?$"

MareS9_Text_Aeneas_EnterTown::
# 738 "data/maps/MareS9/scripts.pory"
	.string "This island is more inhabited than I\n"
	.string "thought at first. I think we should\l"
	.string "split up to search for the parts and...$"

MareS9_Text_MakeWay::
# 744 "data/maps/MareS9/scripts.pory"
	.string "Make way for Queen Tyrii, Elissa!$"

MareS9_Script_Aeneas_DidoSceneStart::
# 748 "data/maps/MareS9/scripts.pory"
	.string "Then let's head into town and try to\n"
	.string "find the parts and labor we need to set\l"
	.string "sail.$"

MareS9_Text_Elissa1::
# 756 "data/maps/MareS9/scripts.pory"
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
# 771 "data/maps/MareS9/scripts.pory"
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
# 787 "data/maps/MareS9/scripts.pory"
	.string "And in peace you will find all that you\n"
	.string "seek! My name is Elissa, I am the queen\l"
	.string "of Turris Saltus and the Tyrians. My\l"
	.string "handmaidens will swiftly fix your ship\l"
	.string "and resupply your voyage on the sea.\l"
	.string "These thing I offer you freely, for I\l"
	.string "desire nothing in return, except to see\l"
	.string "your princely face brought to smile.$"

MareS9_Text_Elissa3::
# 798 "data/maps/MareS9/scripts.pory"
	.string "You two, go to his ship. Spare no\n"
	.string "expense. Set her afloat as strong as\l"
	.string "newly built.$"

MareS9_Text_Elissa4::
# 803 "data/maps/MareS9/scripts.pory"
	.string "Tell me, Aeneas, prince, will you join me\n"
	.string "atop Turris Saltus? We might enjoy the\l"
	.string "pleasant things in life. Good food, fine\l"
	.string "wine, and breathtaking views would\l"
	.string "accompany our conversation on my\l"
	.string "queenly couch. For I would have you tell\l"
	.string "of your journey, which interests me as\l"
	.string "much as you, fine prince.$"

MareS9_Text_Aeneas_GoWithElissa::
# 813 "data/maps/MareS9/scripts.pory"
	.string "Most gracious queen, your offer I\n"
	.string "accept. I will go with you, and must bow\l"
	.string "my head, to give my greatest thanks...$"

MareS9_Text_Elissa5::
# 819 "data/maps/MareS9/scripts.pory"
	.string "Smile, don't bow! Now come Aeneas,\n"
	.string "prince, there's much to say, to see, to\l"
	.string "do, to feel, just you and I.$"

MareS9_Text_Ascanius1::
# 825 "data/maps/MareS9/scripts.pory"
	.string "Romulus! Remus! Stop running around!$"

MareS9_Text_Ascanius2::
# 829 "data/maps/MareS9/scripts.pory"
	.string "Even shipwrecked parenting's such a\n"
	.string "chore.$"

MareS9_Text_Romulus::
# 833 "data/maps/MareS9/scripts.pory"
	.string "I am the older twin. That mean's I'm\n"
	.string "first!$"

MareS9_Text_Remus::
# 837 "data/maps/MareS9/scripts.pory"
	.string "I am the faster twin. That mean's I'm\n"
	.string "best!$"

MareS9_Text_Faustulus1::
# 842 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas all madays maserve. Island\n"
	.string "way off kafigure maknow. Big town\l"
	.string "kafound kadestine taknowya$"

MareS9_Text_Faustulus2::
# 849 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaaroundna good mafeelna.\n"
	.string "Soon kareturn mahope.$"

MareS9_Text_Faustulus3::
# 855 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaback magladya. Kaaround\n"
	.string "safe mafeelna.$"

MareS9_Text_Beroe1::
# 862 "data/maps/MareS9/scripts.pory"
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
# 875 "data/maps/MareS9/scripts.pory"
	.string "Oh great, Aeneas has gone off again and\n"
	.string "sent these savages to fix Pristis. I\l"
	.string "doubt they know how to tie their own\l"
	.string "shoes let alone repair ships. This thing\l"
	.string "will sink the minute we set sail! You\l"
	.string "mark my words.$"

MareS9_Text_Beroe3::
# 884 "data/maps/MareS9/scripts.pory"
	.string "Fantastic, now Aeneas thinks the boat\n"
	.string "is seaworthy again and cannot wait to\l"
	.string "sail from this beachhead into some new\l"
	.string "unkown danger. I swear that's all he\l"
	.string "does! He takes a bad picture and makes\l"
	.string "it worse!$"

MareS9_Text_TyrianTowerBlock::
# 892 "data/maps/MareS9/scripts.pory"
	.string "Turris Saltus, home of the Tyrians and\n"
	.string "our most noble queen, fair Elissa, is not\l"
	.string "open to visitors. Goodbye.$"

MareS9_Text_TyrianFixer1::
# 898 "data/maps/MareS9/scripts.pory"
	.string "Don't worry, I've fixed ships like this\n"
	.string "before.$"

MareS9_Text_TyrianFixer2::
# 902 "data/maps/MareS9/scripts.pory"
	.string "I don't love fixing boats, but it's my\n"
	.string "job. When the Queen says 'do this' it is\l"
	.string "performed.$"

MareS9_Text_Aeneas_Funeral1::
# 907 "data/maps/MareS9/scripts.pory"
	.string "Pristis has been repaired and a fair\n"
	.string "wind is blowing to cast us off of this\l"
	.string "shore. Thank you, my lad, for reminding\l"
	.string "me of my sacred duty. Now...$"

MareS9_Text_Elissa_Funeral1::
# 914 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! Pig!$"

MareS9_Text_Elissa_Funeral2::
# 918 "data/maps/MareS9/scripts.pory"
	.string "Traitor! Liar! Abuser of my love! Look\n"
	.string "at wretched Elissa! Once a queen\l"
	.string "pursued by multitudes of rich suitors, I\l"
	.string "had resolved to live a virgin's life when\l"
	.string "I found all of them sorely lacking, all\l"
	.string "suitors, except one, Aeneas Prince. Yes,\l"
	.string "prince I called you once. Prince, and\l"
	.string "darling, and every other title gained by\l"
	.string "love were yours, but now revoked by\l"
	.string "treachery. You left our marriage bed\l"
	.string "for sailor's cot! What shall I do? Should\l"
	.string "poor Elissa be a sad widow to infidelity,\l"
	.string "a second rate bride to a lesser man, or\l"
	.string "follow you across the seven seas like\l"
	.string "carrion birds behind a grim army,\l"
	.string "unwanted, hated, but lingering there\l"
	.string "close enough to consume th'abandoned\l"
	.string "dead. Before Turris Saltus was beaten\l"
	.string "down, when the Tyrians were a proud\l"
	.string "people, I might have imagined a hot\l"
	.string "pursuit of mighty ships, and women\l"
	.string "dressed for war, chasing you down until\l"
	.string "you were cornered and made to endure\l"
	.string "but a fraction of the pain you brought\l"
	.string "to me and my people, but such revenge is\l"
	.string "impossible now. Therefore, left with no\l"
	.string "choice, I must now die. Farewell cruel\l"
	.string "world, goodbye Turris Saltus, adieu my\l"
	.string "Tyrians. No bon voyage for you, Aeneas\l"
	.string "Pig! I swear upon the marriage bed you\l"
	.string "inhumanely scorned that I will torment\l"
	.string "you from Tartarus, for not even the\l"
	.string "endless void of death can compass the\l"
	.string "bounds of eternal rage!$"

MareS9_Text_Aeneas_Funeral2::
# 955 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Beroe_Funeral1::
# 960 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral3::
# 965 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral4::
# 970 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Faustulus_Funeral1::
# 975 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral5::
# 980 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Faustulus_Funeral2::
# 985 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_FaustulusLost::
# 990 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Faustulus_Funeral3::
# 995 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral6::
# 1000 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Beroe_Funeral2::
# 1005 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral7::
# 1010 "data/maps/MareS9/scripts.pory"
	.string "$"
