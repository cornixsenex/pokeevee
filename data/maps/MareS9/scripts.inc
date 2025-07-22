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
# 205 "data/maps/MareS9/scripts.pory"
	fadenewbgm MUS_CREDITS
# 207 "data/maps/MareS9/scripts.pory"
	special SpawnCameraObject
# 208 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_MoveCameraToFuneral
# 209 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 211 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 212 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 213 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 15, 40
# 214 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 17, 40
# 215 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 216 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_FACE_UP
# 217 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 218 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 219 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_FaceUp
# 220 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 222 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 223 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa_Funeral2
# 224 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 225 "data/maps/MareS9/scripts.pory"
	closemessage
# 227 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 228 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 34, 19
# 229 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_UP
# 230 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 232 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp
# 233 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 234 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceDown
# 235 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 236 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 237 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 239 "data/maps/MareS9/scripts.pory"
	delay 40
# 240 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Movement_SetInvisible
# 241 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 242 "data/maps/MareS9/scripts.pory"
	playse SE_FALL
# 243 "data/maps/MareS9/scripts.pory"
	delay 60
# 244 "data/maps/MareS9/scripts.pory"
	playse SE_M_DIVE
# 245 "data/maps/MareS9/scripts.pory"
	delay 120
# 247 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 248 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 249 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 250 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 251 "data/maps/MareS9/scripts.pory"
	fadenewbgm MUS_RG_FUCHSIA
# 253 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_ReturnCameraFromFuneral
# 254 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 255 "data/maps/MareS9/scripts.pory"
	special RemoveCameraObject
# 257 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 258 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceDown
# 259 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 260 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 261 "data/maps/MareS9/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 263 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 264 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral2
# 265 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 266 "data/maps/MareS9/scripts.pory"
	closemessage
# 268 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_ExclamationMark
# 269 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 270 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_FaceRight
# 271 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 273 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 274 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral1
# 275 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 277 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 278 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral3
# 280 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceRight
# 281 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceLeft
# 282 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 283 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral4
# 284 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 286 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_ExclamationMark
# 287 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 288 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 289 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral1
# 290 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 291 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 292 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 294 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 295 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral5
# 296 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 297 "data/maps/MareS9/scripts.pory"
	closemessage
# 299 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 300 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkDown
# 301 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 302 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceLeft
# 303 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 305 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 306 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral2
# 307 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 308 "data/maps/MareS9/scripts.pory"
	closemessage
# 310 "data/maps/MareS9/scripts.pory"
	trainerbattle_no_intro TRAINER_FAUSTULUS, MareS9_Text_FaustulusLost
# 312 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 313 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus_Funeral3
# 314 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 315 "data/maps/MareS9/scripts.pory"
	closemessage
# 317 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 318 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceUp
# 319 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 321 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 322 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral6
# 323 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 325 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_ExclamationMark
# 326 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 327 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 328 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_Text_0
# 330 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 331 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 333 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral2
# 334 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 336 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 337 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral7
# 338 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 340 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 341 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral3
# 342 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 344 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 345 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral8
# 346 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 347 "data/maps/MareS9/scripts.pory"
	closemessage
# 350 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_WalkUp
# 351 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 352 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_BEROE
# 353 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_BEROE, 0, 0
# 354 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_BEROE, MOVEMENT_TYPE_INVISIBLE
# 355 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_BEROE
# 357 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 358 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkLeft
# 359 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 360 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 361 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp
# 362 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 363 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkLeft
# 364 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 365 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ROMULUS, Common_Movement_WalkUp2
# 366 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp2
# 367 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp2
# 368 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 369 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ROMULUS
# 370 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ROMULUS, 0, 0
# 371 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ROMULUS, MOVEMENT_TYPE_INVISIBLE
# 372 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ROMULUS
# 373 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ASCANIUS, Common_Movement_WalkUp
# 374 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 375 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 376 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ASCANIUS
# 377 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ASCANIUS, 0, 0
# 378 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ASCANIUS, MOVEMENT_TYPE_INVISIBLE
# 379 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ASCANIUS
# 380 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_REMUS, Common_Movement_WalkUp
# 381 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 382 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_REMUS
# 383 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_REMUS, 0, 0
# 384 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_REMUS, MOVEMENT_TYPE_INVISIBLE
# 385 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_REMUS
# 387 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 388 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 389 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 390 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 391 "data/maps/MareS9/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_MARE_S9
# 393 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkLeft2
# 394 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 395 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_WalkUp
# 396 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 397 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_FAUSTULUS
# 398 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_FAUSTULUS, 0, 0
# 399 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_FAUSTULUS, MOVEMENT_TYPE_INVISIBLE
# 400 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_FAUSTULUS
# 402 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 403 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 404 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkLeft
# 405 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 406 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp
# 407 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 408 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 409 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 410 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 411 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_AENEAS
# 413 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 414 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral8
# 415 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 416 "data/maps/MareS9/scripts.pory"
	closemessage
# 418 "data/maps/MareS9/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 419 "data/maps/MareS9/scripts.pory"
	playbgm MUS_SAILING, FALSE
# 420 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis1
# 421 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 422 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, Common_Movement_ExclamationMark
# 423 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 427 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis2
# 428 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 429 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, Common_Movement_ExclamationMark
# 430 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 434 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, MareS9_Movement_Pristis3
# 435 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 436 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_PRISTIS, Common_Movement_ExclamationMark
# 437 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 456 "data/maps/MareS9/scripts.pory"
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
# 462 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius1
# 463 "data/maps/MareS9/scripts.pory"
	faceplayer
# 464 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius2
# 465 "data/maps/MareS9/scripts.pory"
	closemessage
# 466 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Romulus::
# 471 "data/maps/MareS9/scripts.pory"
	faceplayer
# 472 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Romulus
# 473 "data/maps/MareS9/scripts.pory"
	closemessage
# 474 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Remus::
# 479 "data/maps/MareS9/scripts.pory"
	faceplayer
# 480 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Remus
# 481 "data/maps/MareS9/scripts.pory"
	closemessage
# 482 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Faustulus::
# 487 "data/maps/MareS9/scripts.pory"
	faceplayer
# 488 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Faustulus_2
# 490 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Faustulus_3
# 493 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus3
MareS9_Script_Faustulus_1:
# 495 "data/maps/MareS9/scripts.pory"
	closemessage
# 496 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Faustulus_2:
# 489 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus1
	goto MareS9_Script_Faustulus_1

MareS9_Script_Faustulus_3:
# 491 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus2
	goto MareS9_Script_Faustulus_1


MareS9_Script_Beroe::
# 501 "data/maps/MareS9/scripts.pory"
	faceplayer
# 502 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Beroe_2
# 504 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Beroe_3
# 507 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe3
MareS9_Script_Beroe_1:
# 509 "data/maps/MareS9/scripts.pory"
	closemessage
# 510 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Beroe_2:
# 503 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe1
	goto MareS9_Script_Beroe_1

MareS9_Script_Beroe_3:
# 505 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe2
	goto MareS9_Script_Beroe_1


MareS9_Script_Tyrian1::
# 515 "data/maps/MareS9/scripts.pory"
	faceplayer
# 517 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Tyrian1_1
# 524 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer1
# 525 "data/maps/MareS9/scripts.pory"
	closemessage
# 526 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceUp
# 527 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 528 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

MareS9_Script_Tyrian1_1:
# 518 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianTowerBlock
# 519 "data/maps/MareS9/scripts.pory"
	closemessage
# 520 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceDown
# 521 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	return


MareS9_Script_Tyrian2::
# 533 "data/maps/MareS9/scripts.pory"
	faceplayer
# 534 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer2
# 535 "data/maps/MareS9/scripts.pory"
	closemessage
# 536 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_FaceLeft
# 537 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 538 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


MareS9_Script_DidoScene::
# 543 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_DidoSceneStart
# 544 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 545 "data/maps/MareS9/scripts.pory"
	closemessage
# 547 "data/maps/MareS9/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 548 "data/maps/MareS9/scripts.pory"
	switch VAR_RESULT
# 549 "data/maps/MareS9/scripts.pory"
	case DIR_NORTH, MareS9_Script_DidoScene_3
# 557 "data/maps/MareS9/scripts.pory"
	case DIR_SOUTH, MareS9_Script_DidoScene_4
# 567 "data/maps/MareS9/scripts.pory"
	case DIR_WEST, MareS9_Script_DidoScene_5
# 575 "data/maps/MareS9/scripts.pory"
	case DIR_EAST, MareS9_Script_DidoScene_6
# 583 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_DidoScene_Text_0
# 584 "data/maps/MareS9/scripts.pory"
	closemessage
	end

MareS9_Script_DidoScene_1:
# 588 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, MareS9_Movement_BeginDidoScene
# 589 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_BeginDidoScene
# 590 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 592 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 593 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 594 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 596 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 597 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_EnterTown
# 598 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 600 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_TYRIAN, 190, 98
# 601 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_MakeWay
# 602 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_TYRIAN
# 603 "data/maps/MareS9/scripts.pory"
	closemessage
# 605 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 606 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 607 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 608 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 609 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 610 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 612 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 613 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 614 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 615 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 616 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 617 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 22, 55
# 618 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 21, 56
# 619 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 23, 56
# 620 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 23, 54
# 621 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 21, 54
# 622 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 623 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
# 624 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_FACE_DOWN
# 625 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_FACE_DOWN
# 626 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_FACE_DOWN
# 627 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 628 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 629 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 630 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN3
# 631 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN4
# 633 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp6
# 634 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp6
# 635 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp6
# 636 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp6
# 637 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp6
# 638 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 640 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 641 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 643 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight4
# 644 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight4
# 645 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight4
# 646 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 647 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 648 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_FaceUp
# 649 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_FaceUp
# 650 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 652 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 653 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa1
# 654 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 656 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 657 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_AeneasToElissa
# 658 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 660 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 661 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa2
# 662 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceLeft
# 663 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 665 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa3
# 666 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 667 "data/maps/MareS9/scripts.pory"
	closemessage
# 669 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp2
# 670 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp2
# 671 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 672 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight
# 673 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 674 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkRight3
# 675 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight3
# 676 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 677 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp4
# 678 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp4
# 679 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 681 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 682 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 683 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 684 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 685 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 687 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 688 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 689 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 690 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa4
# 691 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 692 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 693 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_GoWithElissa
# 694 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 695 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 696 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa5
# 697 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 698 "data/maps/MareS9/scripts.pory"
	closemessage
# 700 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 701 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight
# 702 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight
# 703 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight
# 704 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 705 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp2
# 706 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp2
# 707 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp3
# 708 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp3
# 709 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 710 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight7
# 711 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight7
# 712 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight7
# 713 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight7
# 714 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 716 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 717 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 718 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 719 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 720 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 721 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 722 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 723 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 724 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 0, 0
# 725 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_INVISIBLE
# 726 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 0, 0
# 727 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_INVISIBLE
# 729 "data/maps/MareS9/scripts.pory"
	setvar VAR_AENEID_STATE, 1
# 730 "data/maps/MareS9/scripts.pory"
	release
	end

MareS9_Script_DidoScene_3:
# 550 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 551 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 552 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 553 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 554 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 555 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 556 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_4:
# 558 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 559 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 560 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 561 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 562 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 563 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 564 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 565 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 566 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_5:
# 568 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 569 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 570 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 571 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 572 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 573 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 574 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_6:
# 576 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 577 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 578 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 579 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight2
# 580 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 581 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1


# 734 "data/maps/MareS9/scripts.pory"
MareS9_Movement_BeginDidoScene:
# 735 "data/maps/MareS9/scripts.pory"
	walk_right
# 735 "data/maps/MareS9/scripts.pory"
	walk_right
# 735 "data/maps/MareS9/scripts.pory"
	walk_right
# 735 "data/maps/MareS9/scripts.pory"
	walk_right
# 735 "data/maps/MareS9/scripts.pory"
	walk_right
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
# 736 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 739 "data/maps/MareS9/scripts.pory"
MareS9_Movement_MoveCameraToFuneral:
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 740 "data/maps/MareS9/scripts.pory"
	walk_right
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
# 741 "data/maps/MareS9/scripts.pory"
	walk_up
	step_end

# 744 "data/maps/MareS9/scripts.pory"
MareS9_Movement_ReturnCameraFromFuneral:
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 745 "data/maps/MareS9/scripts.pory"
	walk_left
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
# 746 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 749 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis1:
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 750 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 751 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 752 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 753 "data/maps/MareS9/scripts.pory"
	walk_faster_left
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 754 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 755 "data/maps/MareS9/scripts.pory"
	walk_faster_right
# 756 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 756 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 756 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 757 "data/maps/MareS9/scripts.pory"
	walk_faster_down
	step_end

# 760 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis2:
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
# 761 "data/maps/MareS9/scripts.pory"
	walk_faster_down
	step_end

# 764 "data/maps/MareS9/scripts.pory"
MareS9_Movement_Pristis3:
# 765 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 765 "data/maps/MareS9/scripts.pory"
	walk_faster_up
# 765 "data/maps/MareS9/scripts.pory"
	walk_faster_up
	step_end

MareS9_Script_Aeneas_Text_0:
# 328 "data/maps/MareS9/scripts.pory"
	.string "Aeneas!$"

MareS9_Script_DidoScene_Text_0:
# 583 "data/maps/MareS9/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

MareS9_Text_Aeneas_Help1::
# 774 "data/maps/MareS9/scripts.pory"
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
# 811 "data/maps/MareS9/scripts.pory"
	.string "I understand. Your path is yours to\n"
	.string "choose. We'll find some other way to fix\l"
	.string "Pristis and sail to glory and Hesperia,\l"
	.string "but if you change your mind, come speak\l"
	.string "with me.$"

MareS9_Text_Aeneas_Help2::
# 819 "data/maps/MareS9/scripts.pory"
	.string "Young friend, have you come to help fix\n"
	.string "Pristis?$"

MareS9_Text_Aeneas_EnterTown::
# 825 "data/maps/MareS9/scripts.pory"
	.string "This island is more inhabited than I\n"
	.string "thought at first. I think we should\l"
	.string "split up to search for the parts and...$"

MareS9_Text_MakeWay::
# 831 "data/maps/MareS9/scripts.pory"
	.string "Make way for Queen Tyrii, Elissa!$"

MareS9_Script_Aeneas_DidoSceneStart::
# 835 "data/maps/MareS9/scripts.pory"
	.string "Then let's head into town and try to\n"
	.string "find the parts and labor we need to set\l"
	.string "sail.$"

MareS9_Text_Elissa1::
# 843 "data/maps/MareS9/scripts.pory"
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
# 858 "data/maps/MareS9/scripts.pory"
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
# 874 "data/maps/MareS9/scripts.pory"
	.string "And in peace you will find all that you\n"
	.string "seek! My name is Elissa, I am the queen\l"
	.string "of Turris Saltus and the Tyrians. My\l"
	.string "handmaidens will swiftly fix your ship\l"
	.string "and resupply your voyage on the sea.\l"
	.string "These thing I offer you freely, for I\l"
	.string "desire nothing in return, except to see\l"
	.string "your princely face brought to smile.$"

MareS9_Text_Elissa3::
# 885 "data/maps/MareS9/scripts.pory"
	.string "You two, go to his ship. Spare no\n"
	.string "expense. Set her afloat as strong as\l"
	.string "newly built.$"

MareS9_Text_Elissa4::
# 890 "data/maps/MareS9/scripts.pory"
	.string "Tell me, Aeneas, prince, will you join me\n"
	.string "atop Turris Saltus? We might enjoy the\l"
	.string "pleasant things in life. Good food, fine\l"
	.string "wine, and breathtaking views would\l"
	.string "accompany our conversation on my\l"
	.string "queenly couch. For I would have you tell\l"
	.string "of your journey, which interests me as\l"
	.string "much as you, fine prince.$"

MareS9_Text_Aeneas_GoWithElissa::
# 900 "data/maps/MareS9/scripts.pory"
	.string "Most gracious queen, your offer I\n"
	.string "accept. I will go with you, and must bow\l"
	.string "my head, to give my greatest thanks...$"

MareS9_Text_Elissa5::
# 906 "data/maps/MareS9/scripts.pory"
	.string "Smile, don't bow! Now come Aeneas,\n"
	.string "prince, there's much to say, to see, to\l"
	.string "do, to feel, just you and I.$"

MareS9_Text_Ascanius1::
# 912 "data/maps/MareS9/scripts.pory"
	.string "Romulus! Remus! Stop running around!$"

MareS9_Text_Ascanius2::
# 916 "data/maps/MareS9/scripts.pory"
	.string "Even shipwrecked parenting's such a\n"
	.string "chore.$"

MareS9_Text_Romulus::
# 920 "data/maps/MareS9/scripts.pory"
	.string "I am the older twin. That mean's I'm\n"
	.string "first!$"

MareS9_Text_Remus::
# 924 "data/maps/MareS9/scripts.pory"
	.string "I am the faster twin. That mean's I'm\n"
	.string "best!$"

MareS9_Text_Faustulus1::
# 929 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas all madays maserve. Island\n"
	.string "way off kafigure maknow. Big town\l"
	.string "kafound kadestine taknowya$"

MareS9_Text_Faustulus2::
# 936 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaaroundna good mafeelna.\n"
	.string "Soon kareturn mahope.$"

MareS9_Text_Faustulus3::
# 942 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaback magladya. Kaaround\n"
	.string "safe mafeelna.$"

MareS9_Text_Beroe1::
# 949 "data/maps/MareS9/scripts.pory"
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
# 962 "data/maps/MareS9/scripts.pory"
	.string "Oh great, Aeneas has gone off again and\n"
	.string "sent these savages to fix Pristis. I\l"
	.string "doubt they know how to tie their own\l"
	.string "shoes let alone repair ships. This thing\l"
	.string "will sink the minute we set sail! You\l"
	.string "mark my words.$"

MareS9_Text_Beroe3::
# 971 "data/maps/MareS9/scripts.pory"
	.string "Fantastic, now Aeneas thinks the boat\n"
	.string "is seaworthy again and cannot wait to\l"
	.string "sail from this beachhead into some new\l"
	.string "unkown danger. I swear that's all he\l"
	.string "does! He takes a bad picture and makes\l"
	.string "it worse!$"

MareS9_Text_TyrianTowerBlock::
# 979 "data/maps/MareS9/scripts.pory"
	.string "Turris Saltus, home of the Tyrians and\n"
	.string "our most noble queen, fair Elissa, is not\l"
	.string "open to visitors. Goodbye.$"

MareS9_Text_TyrianFixer1::
# 985 "data/maps/MareS9/scripts.pory"
	.string "Don't worry, I've fixed ships like this\n"
	.string "before.$"

MareS9_Text_TyrianFixer2::
# 989 "data/maps/MareS9/scripts.pory"
	.string "I don't love fixing boats, but it's my\n"
	.string "job. When the Queen says 'do this' it is\l"
	.string "performed.$"

MareS9_Text_Aeneas_Funeral1::
# 994 "data/maps/MareS9/scripts.pory"
	.string "Pristis has been repaired and a fair\n"
	.string "wind is blowing to cast us off of this\l"
	.string "shore. Thank you, my lad, for reminding\l"
	.string "me of my sacred duty. Now...$"

MareS9_Text_Elissa_Funeral1::
# 1001 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! Pig!$"

MareS9_Text_Elissa_Funeral2::
# 1005 "data/maps/MareS9/scripts.pory"
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
# 1042 "data/maps/MareS9/scripts.pory"
	.string "In light of the most dreadful loss we\n"
	.string "have suffered we ought to hold a\l"
	.string "funeral to celebrate the dead before\l"
	.string "we leave.$"

MareS9_Text_Beroe_Funeral1::
# 1049 "data/maps/MareS9/scripts.pory"
	.string "That woman, did you love her, Aeneas?$"

MareS9_Text_Aeneas_Funeral3::
# 1054 "data/maps/MareS9/scripts.pory"
	.string "What woman? This is for my dead father,\n"
	.string "best friend, and sailors lost while on\l"
	.string "our quest. We dedicate this funeral to\l"
	.string "them, and in their honor hold these\l"
	.string "funeral games to celebrate the lives of\l"
	.string "those who died. The first event will be\l"
	.string "trainer battles. Our new friend,\l"
	.string "{PLAYER}, will fight to win his place\l"
	.string "among our crew...$"

MareS9_Text_Aeneas_Funeral4::
# 1066 "data/maps/MareS9/scripts.pory"
	.string "against you, Faustulus. If you prevail,\n"
	.string "I will grant you freedom, and let you\l"
	.string "freely choose to stay with us as a full\l"
	.string "and equal crew member, or to pursue\l"
	.string "your pleasures as a free man in\l"
	.string "whatever way would seem best to you.$"

MareS9_Text_Faustulus_Funeral1::
# 1076 "data/maps/MareS9/scripts.pory"
	.string "Mafree man be? Too kind Ka-are! Gladly\n"
	.string "will mafight. Honor ma-is$"

MareS9_Text_Aeneas_Funeral5::
# 1080 "data/maps/MareS9/scripts.pory"
	.string "Look to your arms, and let the best man\n"
	.string "win!$"

MareS9_Text_Faustulus_Funeral2::
# 1085 "data/maps/MareS9/scripts.pory"
	.string "Personalna but tadefeat meneed\n"
	.string "kaplease and mafreedom makeya.$"

MareS9_Text_FaustulusLost::
# 1090 "data/maps/MareS9/scripts.pory"
	.string "Mastrongna!$"

MareS9_Text_Faustulus_Funeral3::
# 1095 "data/maps/MareS9/scripts.pory"
	.string "Tathank maplace taremind. Kaslave\n"
	.string "maonly be.$"

MareS9_Text_Aeneas_Funeral6::
# 1100 "data/maps/MareS9/scripts.pory"
	.string "Well fought, {PLAYER}! Your victory\n"
	.string "pleases me and all the souls of our lost\l"
	.string "companions. By virtue of your glorious\l"
	.string "triumph I name you one of proud Aeneas'\l"
	.string "men and welcome you to join our noble\l"
	.string "quest. Now, let the games continue!\l"
	.string "Next we will have a footrace from here\l"
	.string "to...$"

MareS9_Text_Beroe_Funeral2::
# 1111 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! We did not cross the\n"
	.string "unforgiving seas, navigate Scylla\l"
	.string "Charybdis, escape Isla Solata, or\l"
	.string "sacrifice the flower of our youth for\l"
	.string "you to play games on some savage\l"
	.string "island! Have you forgot the prophesy\l"
	.string "Kassandra told of you? Mighty Aeneas,\l"
	.string "father of the kings who one day will\l"
	.string "rule all the world from the great city\l"
	.string "you are destined to create, let not\l"
	.string "those hero's deaths have been in vain.\l"
	.string "We should set sail while the winds favor\l"
	.string "us, while we still have our strenghth,\l"
	.string "and while our ship, freshly repaired, is\l"
	.string "eager for the surf.$"

MareS9_Text_Aeneas_Funeral7::
# 1129 "data/maps/MareS9/scripts.pory"
	.string "These games are a solumn tradition to\n"
	.string "honor the dead...$"

MareS9_Text_Beroe_Funeral3::
# 1135 "data/maps/MareS9/scripts.pory"
	.string "I will burn the ship to ashes if you will\n"
	.string "not swiftly depart!$"

MareS9_Text_Aeneas_Funeral8::
# 1141 "data/maps/MareS9/scripts.pory"
	.string "You'd burn the ship? Let's not be hasty\n"
	.string "now! There is much reason to your\l"
	.string "argument. The wind is fair, our party\l"
	.string "full of strength, and proud Pristis\l"
	.string "repaired, and not aflame. Let us be off!\l"
	.string "Assemble! To the boat!$"
