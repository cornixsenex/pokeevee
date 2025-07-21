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
# 156 "data/maps/MareS9/scripts.pory"
	faceplayer
# 157 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 159 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Aeneas_1
# 186 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral1
# 187 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 189 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 190 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa_Funeral1
# 191 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 192 "data/maps/MareS9/scripts.pory"
	closemessage
# 193 "data/maps/MareS9/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 195 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 196 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_ExclamationMark
# 197 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 198 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 200 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceRight
# 201 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceRight
# 202 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 203 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 205 "data/maps/MareS9/scripts.pory"
	special SpawnCameraObject
# 206 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_MoveCameraToFuneral
# 207 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 209 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 210 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa_Funeral2
# 211 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 212 "data/maps/MareS9/scripts.pory"
	closemessage
# 214 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 215 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 34, 19
# 216 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_UP
# 217 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 219 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp
# 220 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 221 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceDown
# 222 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 223 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 224 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 226 "data/maps/MareS9/scripts.pory"
	delay 40
# 227 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Movement_SetInvisible
# 228 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 229 "data/maps/MareS9/scripts.pory"
	playse SE_FALL
# 230 "data/maps/MareS9/scripts.pory"
	delay 60
# 231 "data/maps/MareS9/scripts.pory"
	playse SE_M_DIVE
# 232 "data/maps/MareS9/scripts.pory"
	delay 60
# 234 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 235 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 236 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 237 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 239 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_CAMERA, MareS9_Movement_ReturnCameraFromFuneral
# 240 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 241 "data/maps/MareS9/scripts.pory"
	special RemoveCameraObject
# 243 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 244 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceDown
# 245 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 246 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 247 "data/maps/MareS9/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 249 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 250 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral2
# 251 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 252 "data/maps/MareS9/scripts.pory"
	closemessage
# 254 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_ExclamationMark
# 255 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_BEROE, Common_Movement_FaceRight
# 257 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 259 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 260 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe_Funeral1
# 261 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 263 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 264 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral3
# 266 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceRight
# 267 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_FAUSTULUS, Common_Movement_FaceLeft
# 268 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 269 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Funeral4
	return

MareS9_Script_Aeneas_1:
# 160 "data/maps/MareS9/scripts.pory"
	goto_if_set FLAG_MARES9_AENEAS_INTROD, MareS9_Script_Aeneas_4
# 171 "data/maps/MareS9/scripts.pory"
	setflag FLAG_MARES9_AENEAS_INTROD
# 172 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help1, MSGBOX_YESNO
# 173 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_10
# 176 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 177 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 178 "data/maps/MareS9/scripts.pory"
	closemessage
# 179 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_4:
# 161 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_Help2, MSGBOX_YESNO
# 162 "data/maps/MareS9/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS9_Script_Aeneas_7
# 165 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_NoHelp
# 166 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 167 "data/maps/MareS9/scripts.pory"
	closemessage
# 168 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	return

MareS9_Script_Aeneas_7:
# 163 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return

MareS9_Script_Aeneas_10:
# 174 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_DidoScene
	return


MareS9_Script_Ascanius::
# 302 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius1
# 303 "data/maps/MareS9/scripts.pory"
	faceplayer
# 304 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Ascanius2
# 305 "data/maps/MareS9/scripts.pory"
	closemessage
# 306 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Romulus::
# 311 "data/maps/MareS9/scripts.pory"
	faceplayer
# 312 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Romulus
# 313 "data/maps/MareS9/scripts.pory"
	closemessage
# 314 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Remus::
# 319 "data/maps/MareS9/scripts.pory"
	faceplayer
# 320 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Remus
# 321 "data/maps/MareS9/scripts.pory"
	closemessage
# 322 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS9_Script_Faustulus::
# 327 "data/maps/MareS9/scripts.pory"
	faceplayer
# 328 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Faustulus_2
# 330 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Faustulus_3
# 333 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus3
MareS9_Script_Faustulus_1:
# 335 "data/maps/MareS9/scripts.pory"
	closemessage
# 336 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Faustulus_2:
# 329 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus1
	goto MareS9_Script_Faustulus_1

MareS9_Script_Faustulus_3:
# 331 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Faustulus2
	goto MareS9_Script_Faustulus_1


MareS9_Script_Beroe::
# 341 "data/maps/MareS9/scripts.pory"
	faceplayer
# 342 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Beroe_2
# 344 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 1
	goto_if_eq MareS9_Script_Beroe_3
# 347 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe3
MareS9_Script_Beroe_1:
# 349 "data/maps/MareS9/scripts.pory"
	closemessage
# 350 "data/maps/MareS9/scripts.pory"
	call Common_Script_Unfaceplayer
	end

MareS9_Script_Beroe_2:
# 343 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe1
	goto MareS9_Script_Beroe_1

MareS9_Script_Beroe_3:
# 345 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Beroe2
	goto MareS9_Script_Beroe_1


MareS9_Script_Tyrian1::
# 355 "data/maps/MareS9/scripts.pory"
	faceplayer
# 357 "data/maps/MareS9/scripts.pory"
	compare VAR_AENEID_STATE, 0
	goto_if_eq MareS9_Script_Tyrian1_1
# 364 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer1
# 365 "data/maps/MareS9/scripts.pory"
	closemessage
# 366 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceUp
# 367 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 368 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return

MareS9_Script_Tyrian1_1:
# 358 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianTowerBlock
# 359 "data/maps/MareS9/scripts.pory"
	closemessage
# 360 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_FaceDown
# 361 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	return


MareS9_Script_Tyrian2::
# 373 "data/maps/MareS9/scripts.pory"
	faceplayer
# 374 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TyrianFixer2
# 375 "data/maps/MareS9/scripts.pory"
	closemessage
# 376 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_FaceLeft
# 377 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 378 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	return


MareS9_Script_DidoScene::
# 383 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_Aeneas_DidoSceneStart
# 384 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 385 "data/maps/MareS9/scripts.pory"
	closemessage
# 387 "data/maps/MareS9/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 388 "data/maps/MareS9/scripts.pory"
	switch VAR_RESULT
# 389 "data/maps/MareS9/scripts.pory"
	case DIR_NORTH, MareS9_Script_DidoScene_3
# 397 "data/maps/MareS9/scripts.pory"
	case DIR_SOUTH, MareS9_Script_DidoScene_4
# 407 "data/maps/MareS9/scripts.pory"
	case DIR_WEST, MareS9_Script_DidoScene_5
# 415 "data/maps/MareS9/scripts.pory"
	case DIR_EAST, MareS9_Script_DidoScene_6
# 423 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Script_DidoScene_Text_0
# 424 "data/maps/MareS9/scripts.pory"
	closemessage
	end

MareS9_Script_DidoScene_1:
# 428 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, MareS9_Movement_BeginDidoScene
# 429 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, MareS9_Movement_BeginDidoScene
# 430 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 432 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceLeft
# 433 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 434 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 436 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 437 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_EnterTown
# 438 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 440 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_TYRIAN, 190, 98
# 441 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_MakeWay
# 442 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_TYRIAN
# 443 "data/maps/MareS9/scripts.pory"
	closemessage
# 445 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_ExclamationMark
# 446 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 447 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 448 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_FaceDown
# 449 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 450 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 452 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 453 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 454 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 455 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 456 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 457 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 22, 55
# 458 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 21, 56
# 459 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 23, 56
# 460 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN1, 23, 54
# 461 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN2, 21, 54
# 462 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_FACE_DOWN
# 463 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN1, MOVEMENT_TYPE_FACE_DOWN
# 464 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN2, MOVEMENT_TYPE_FACE_DOWN
# 465 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_FACE_DOWN
# 466 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_FACE_DOWN
# 467 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_ELISSA
# 468 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 469 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 470 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN3
# 471 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN4
# 473 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp6
# 474 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp6
# 475 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp6
# 476 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp6
# 477 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp6
# 478 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 480 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_ExclamationMark
# 481 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 483 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight4
# 484 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight4
# 485 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight4
# 486 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 487 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 488 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_FaceUp
# 489 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_FaceUp
# 490 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 492 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 493 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa1
# 494 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 496 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 497 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_AeneasToElissa
# 498 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 500 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 501 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa2
# 502 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceLeft
# 503 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 505 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa3
# 506 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 507 "data/maps/MareS9/scripts.pory"
	closemessage
# 509 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp2
# 510 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp2
# 511 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 512 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight
# 513 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 514 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkRight3
# 515 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkRight3
# 516 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 517 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN1, Common_Movement_WalkUp4
# 518 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN2, Common_Movement_WalkUp4
# 519 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 521 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN1
# 522 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN2
# 523 "data/maps/MareS9/scripts.pory"
	call MareS9_Script_ShowTyriansFixingPristis
# 524 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN1
# 525 "data/maps/MareS9/scripts.pory"
	addobject LOCALID_MARES9_TYRIAN2
# 527 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_FaceUp
# 528 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 529 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 530 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa4
# 531 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 532 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 533 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Aeneas_GoWithElissa
# 534 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 535 "data/maps/MareS9/scripts.pory"
	load_field_pic FIELD_PIC_ELISSA, 190, 98
# 536 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_Elissa5
# 537 "data/maps/MareS9/scripts.pory"
	destroy_field_pic FIELD_PIC_ELISSA
# 538 "data/maps/MareS9/scripts.pory"
	closemessage
# 540 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 541 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight
# 542 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight
# 543 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight
# 544 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 545 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkUp2
# 546 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkUp2
# 547 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkUp3
# 548 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkUp3
# 549 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 550 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight7
# 551 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_ELISSA, Common_Movement_WalkRight7
# 552 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN3, Common_Movement_WalkRight7
# 553 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_TYRIAN4, Common_Movement_WalkRight7
# 554 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 556 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_AENEAS
# 557 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_ELISSA
# 558 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN3
# 559 "data/maps/MareS9/scripts.pory"
	removeobject LOCALID_MARES9_TYRIAN4
# 560 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_AENEAS, 0, 0
# 561 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_AENEAS, MOVEMENT_TYPE_INVISIBLE
# 562 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_ELISSA, 0, 0
# 563 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_ELISSA, MOVEMENT_TYPE_INVISIBLE
# 564 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN3, 0, 0
# 565 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN3, MOVEMENT_TYPE_INVISIBLE
# 566 "data/maps/MareS9/scripts.pory"
	setobjectxyperm LOCALID_MARES9_TYRIAN4, 0, 0
# 567 "data/maps/MareS9/scripts.pory"
	setobjectmovementtype LOCALID_MARES9_TYRIAN4, MOVEMENT_TYPE_INVISIBLE
# 569 "data/maps/MareS9/scripts.pory"
	setvar VAR_AENEID_STATE, 1
# 570 "data/maps/MareS9/scripts.pory"
	release
	end

MareS9_Script_DidoScene_3:
# 390 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 391 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 392 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 393 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 394 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 395 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 396 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_4:
# 398 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 399 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 400 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 401 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 402 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 403 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 404 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 405 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 406 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_5:
# 408 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 409 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 410 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 411 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 412 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight
# 413 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 414 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1

MareS9_Script_DidoScene_6:
# 416 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkDown
# 417 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 418 "data/maps/MareS9/scripts.pory"
	waitmovement 0
# 419 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_MARES9_AENEAS, Common_Movement_WalkRight2
# 420 "data/maps/MareS9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 421 "data/maps/MareS9/scripts.pory"
	waitmovement 0
	goto MareS9_Script_DidoScene_1


# 574 "data/maps/MareS9/scripts.pory"
MareS9_Movement_BeginDidoScene:
# 575 "data/maps/MareS9/scripts.pory"
	walk_right
# 575 "data/maps/MareS9/scripts.pory"
	walk_right
# 575 "data/maps/MareS9/scripts.pory"
	walk_right
# 575 "data/maps/MareS9/scripts.pory"
	walk_right
# 575 "data/maps/MareS9/scripts.pory"
	walk_right
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
# 576 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

# 579 "data/maps/MareS9/scripts.pory"
MareS9_Movement_MoveCameraToFuneral:
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 580 "data/maps/MareS9/scripts.pory"
	walk_right
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
# 581 "data/maps/MareS9/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/MareS9/scripts.pory"
MareS9_Movement_ReturnCameraFromFuneral:
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 585 "data/maps/MareS9/scripts.pory"
	walk_left
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
# 586 "data/maps/MareS9/scripts.pory"
	walk_down
	step_end

MareS9_Script_DidoScene_Text_0:
# 423 "data/maps/MareS9/scripts.pory"
	.string "ERROR: GetPlayer\nFacingDirection OOB$"

MareS9_Text_Aeneas_Help1::
# 595 "data/maps/MareS9/scripts.pory"
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
# 632 "data/maps/MareS9/scripts.pory"
	.string "I understand. Your path is yours to\n"
	.string "choose. We'll find some other way to fix\l"
	.string "Pristis and sail to glory and Hesperia,\l"
	.string "but if you change your mind, come speak\l"
	.string "with me.$"

MareS9_Text_Aeneas_Help2::
# 640 "data/maps/MareS9/scripts.pory"
	.string "Young friend, have you come to help fix\n"
	.string "Pristis?$"

MareS9_Text_Aeneas_EnterTown::
# 646 "data/maps/MareS9/scripts.pory"
	.string "This island is more inhabited than I\n"
	.string "thought at first. I think we should\l"
	.string "split up to search for the parts and...$"

MareS9_Text_MakeWay::
# 652 "data/maps/MareS9/scripts.pory"
	.string "Make way for Queen Tyrii, Elissa!$"

MareS9_Script_Aeneas_DidoSceneStart::
# 656 "data/maps/MareS9/scripts.pory"
	.string "Then let's head into town and try to\n"
	.string "find the parts and labor we need to set\l"
	.string "sail.$"

MareS9_Text_Elissa1::
# 664 "data/maps/MareS9/scripts.pory"
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
# 679 "data/maps/MareS9/scripts.pory"
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
# 695 "data/maps/MareS9/scripts.pory"
	.string "And in peace you will find all that you\n"
	.string "seek! My name is Elissa, I am the queen\l"
	.string "of Turris Saltus and the Tyrians. My\l"
	.string "handmaidens will swiftly fix your ship\l"
	.string "and resupply your voyage on the sea.\l"
	.string "These thing I offer you freely, for I\l"
	.string "desire nothing in return, except to see\l"
	.string "your princely face brought to smile.$"

MareS9_Text_Elissa3::
# 706 "data/maps/MareS9/scripts.pory"
	.string "You two, go to his ship. Spare no\n"
	.string "expense. Set her afloat as strong as\l"
	.string "newly built.$"

MareS9_Text_Elissa4::
# 711 "data/maps/MareS9/scripts.pory"
	.string "Tell me, Aeneas, prince, will you join me\n"
	.string "atop Turris Saltus? We might enjoy the\l"
	.string "pleasant things in life. Good food, fine\l"
	.string "wine, and breathtaking views would\l"
	.string "accompany our conversation on my\l"
	.string "queenly couch. For I would have you tell\l"
	.string "of your journey, which interests me as\l"
	.string "much as you, fine prince.$"

MareS9_Text_Aeneas_GoWithElissa::
# 721 "data/maps/MareS9/scripts.pory"
	.string "Most gracious queen, your offer I\n"
	.string "accept. I will go with you, and must bow\l"
	.string "my head, to give my greatest thanks...$"

MareS9_Text_Elissa5::
# 727 "data/maps/MareS9/scripts.pory"
	.string "Smile, don't bow! Now come Aeneas,\n"
	.string "prince, there's much to say, to see, to\l"
	.string "do, to feel, just you and I.$"

MareS9_Text_Ascanius1::
# 733 "data/maps/MareS9/scripts.pory"
	.string "Romulus! Remus! Stop running around!$"

MareS9_Text_Ascanius2::
# 737 "data/maps/MareS9/scripts.pory"
	.string "Even shipwrecked parenting's such a\n"
	.string "chore.$"

MareS9_Text_Romulus::
# 741 "data/maps/MareS9/scripts.pory"
	.string "I am the older twin. That mean's I'm\n"
	.string "first!$"

MareS9_Text_Remus::
# 745 "data/maps/MareS9/scripts.pory"
	.string "I am the faster twin. That mean's I'm\n"
	.string "best!$"

MareS9_Text_Faustulus1::
# 750 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas all madays maserve. Island\n"
	.string "way off kafigure maknow. Big town\l"
	.string "kafound kadestine taknowya$"

MareS9_Text_Faustulus2::
# 757 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaaroundna good mafeelna.\n"
	.string "Soon kareturn mahope.$"

MareS9_Text_Faustulus3::
# 763 "data/maps/MareS9/scripts.pory"
	.string "Ka-Aeneas kaback magladya. Kaaround\n"
	.string "safe mafeelna.$"

MareS9_Text_Beroe1::
# 770 "data/maps/MareS9/scripts.pory"
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
# 783 "data/maps/MareS9/scripts.pory"
	.string "Oh great, Aeneas has gone off again and\n"
	.string "sent these savages to fix Pristis. I\l"
	.string "doubt they know how to tie their own\l"
	.string "shoes let alone repair ships. This thing\l"
	.string "will sink the minute we set sail! You\l"
	.string "mark my words.$"

MareS9_Text_Beroe3::
# 792 "data/maps/MareS9/scripts.pory"
	.string "Fantastic, now Aeneas thinks the boat\n"
	.string "is seaworthy again and cannot wait to\l"
	.string "sail from this beachhead into some new\l"
	.string "unkown danger. I swear that's all he\l"
	.string "does! He takes a bad picture and makes\l"
	.string "it worse!$"

MareS9_Text_TyrianTowerBlock::
# 800 "data/maps/MareS9/scripts.pory"
	.string "Turris Saltus, home of the Tyrians and\n"
	.string "our most noble queen, fair Elissa, is not\l"
	.string "open to visitors. Goodbye.$"

MareS9_Text_TyrianFixer1::
# 806 "data/maps/MareS9/scripts.pory"
	.string "Don't worry, I've fixed ships like this\n"
	.string "before.$"

MareS9_Text_TyrianFixer2::
# 810 "data/maps/MareS9/scripts.pory"
	.string "I don't love fixing boats, but it's my\n"
	.string "job. When the Queen says 'do this' it is\l"
	.string "performed.$"

MareS9_Text_Aeneas_Funeral1::
# 815 "data/maps/MareS9/scripts.pory"
	.string "Pristis has been repaired and a fair\n"
	.string "wind is blowing to cast us off of this\l"
	.string "shore. Thank you, my lad, for reminding\l"
	.string "me of my sacred duty. Now...$"

MareS9_Text_Elissa_Funeral1::
# 822 "data/maps/MareS9/scripts.pory"
	.string "Aeneas! Pig!$"

MareS9_Text_Elissa_Funeral2::
# 826 "data/maps/MareS9/scripts.pory"
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
# 863 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Beroe_Funeral1::
# 868 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral3::
# 873 "data/maps/MareS9/scripts.pory"
	.string "$"

MareS9_Text_Aeneas_Funeral4::
# 878 "data/maps/MareS9/scripts.pory"
	.string "$"
