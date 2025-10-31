MareS7_MapScripts::
# 15 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 37 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS7_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 42 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MareS7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
# 20 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 1
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 28 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 3
	goto_if_ne MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 32 "data/maps/MareS7/scripts.pory"
	goto_if_set FLAG_ISLAARIDA_HIDEPRISONERS, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_CheckUlyssesChase
	goto MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_ShowUlyssesSaveTelemachus
	goto MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_HideAridaUlysses
	goto MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 33 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_ShowPolyphemusDancing
	return

MareS7_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 39 "data/maps/MareS7/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, Common_Script_FacePlayerUp
	.2byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 44 "data/maps/MareS7/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, MareS7_Script_UlyssesSaveTelemachus
	.2byte 0


MareS7_Script_Transition_IslaIthaca::
# 52 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 53 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 54 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 58 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 59 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 60 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 64 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 65 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 66 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 70 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 71 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 72 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 76 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 77 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 78 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_CheckUlyssesChase::
# 82 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 83 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_CheckUlyssesChase_2
MareS7_Script_CheckUlyssesChase_1:
	return

MareS7_Script_CheckUlyssesChase_2:
# 84 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	goto MareS7_Script_CheckUlyssesChase_1


MareS7_Script_SetupUlyssesChase::
# 91 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 30
# 92 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 94 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS1, 9, 28
# 95 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 97 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS2, 13, 32
# 98 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS2, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 100 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 11, 34
# 101 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_UP
# 103 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 34
# 104 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_UP
	return


MareS7_Script_ShowUlyssesSaveTelemachus::
# 110 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 33
# 111 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_RIGHT
# 113 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 33
# 114 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_FACE_LEFT
# 116 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 12, 33
# 117 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_DOWN
	return


MareS7_Script_HideAridaUlysses::
# 122 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ARIDAULYSSES, 0, 0
# 123 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ARIDAULYSSES, MOVEMENT_TYPE_INVISIBLE
	return


MareS7_Script_ShowPolyphemusDancing::
# 128 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_POLYPHEMUS, 47, 59
# 129 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_POLYPHEMUS, MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN
	return


MareS7_Script_Ulysses::
# 135 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 136 "data/maps/MareS7/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 137 "data/maps/MareS7/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_Ulysses_3
# 139 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_Ulysses_3
# 141 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_Ulysses_4
# 142 "data/maps/MareS7/scripts.pory"
	case 3, MareS7_Script_Ulysses_4
# 144 "data/maps/MareS7/scripts.pory"
	case 4, MareS7_Script_Ulysses_5
# 145 "data/maps/MareS7/scripts.pory"
	case 5, MareS7_Script_Ulysses_5
# 147 "data/maps/MareS7/scripts.pory"
	case 6, MareS7_Script_Ulysses_6
# 148 "data/maps/MareS7/scripts.pory"
	case 7, MareS7_Script_Ulysses_6
# 150 "data/maps/MareS7/scripts.pory"
	case 8, MareS7_Script_Ulysses_7
# 151 "data/maps/MareS7/scripts.pory"
	case 9, MareS7_Script_Ulysses_7
# 154 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness6
MareS7_Script_Ulysses_1:
# 156 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 157 "data/maps/MareS7/scripts.pory"
	closemessage
	end

MareS7_Script_Ulysses_3:
# 140 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness1
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_4:
# 143 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness2
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_5:
# 146 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness3
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_6:
# 149 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness4
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_7:
# 152 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness5
	goto MareS7_Script_Ulysses_1


MareS7_Script_Penelope::
# 162 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_PENELOPE, Common_Movement_ExclamationMark
# 163 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 164 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 165 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope1
# 166 "data/maps/MareS7/scripts.pory"
	faceplayer
# 167 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope2
# 168 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 169 "data/maps/MareS7/scripts.pory"
	closemessage
# 170 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_Telemachus::
# 175 "data/maps/MareS7/scripts.pory"
	faceplayer
# 176 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Telemachus
# 177 "data/maps/MareS7/scripts.pory"
	closemessage
# 178 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_TaurosPush::
# 183 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_A, CheckWhichTaurosPush
# 184 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_A
# 186 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_TaurosPush_3
# 189 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_TaurosPush_4
# 194 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_TaurosPush_5
# 199 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
MareS7_Script_TaurosPush_1:
# 202 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 203 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 205 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_B, CheckTaurosPushDirection
# 206 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_B
# 208 "data/maps/MareS7/scripts.pory"
	case DIR_EAST, MareS7_Script_TaurosPush_9
# 218 "data/maps/MareS7/scripts.pory"
	case DIR_WEST, MareS7_Script_TaurosPush_10
# 228 "data/maps/MareS7/scripts.pory"
	case DIR_NORTH, MareS7_Script_TaurosPush_11
# 231 "data/maps/MareS7/scripts.pory"
	case DIR_SOUTH, MareS7_Script_TaurosPush_12
# 234 "data/maps/MareS7/scripts.pory"
	case 67, MareS7_Script_TaurosPush_13
# 236 "data/maps/MareS7/scripts.pory"
	case 69, MareS7_Script_TaurosPush_14
# 239 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_3
MareS7_Script_TaurosPush_7:
# 242 "data/maps/MareS7/scripts.pory"
	release
	end

MareS7_Script_TaurosPush_3:
# 187 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_4:
# 190 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 191 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 192 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_5:
# 195 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 196 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 197 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_9:
# 209 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_16
# 214 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkRight
# 215 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 216 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_10:
# 219 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_19
# 224 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkLeft
# 225 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 226 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_11:
# 229 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 230 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_12:
# 232 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 233 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_13:
# 235 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_1
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_14:
# 237 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_2
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_16:
# 210 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkRight
# 211 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 212 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_19:
# 220 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkLeft
# 221 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 222 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7


MareS7_Script_TaurosTelemachus::
# 248 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_A, CheckWhichTaurosTelemachusPush
# 249 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_A
# 251 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_TaurosTelemachus_3
# 257 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_TaurosTelemachus_4
# 262 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_TaurosTelemachus_5
# 267 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
MareS7_Script_TaurosTelemachus_1:
# 270 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 271 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 273 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_ExclamationMark
# 274 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 276 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosTelemachus_8
# 279 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq MareS7_Script_TaurosTelemachus_9
# 283 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosTelemachus_Text_0
# 284 "data/maps/MareS7/scripts.pory"
	closemessage
	end

MareS7_Script_TaurosTelemachus_3:
# 252 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 253 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 254 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 255 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_4:
# 258 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_ExclamationMark
# 259 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 260 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_5:
# 263 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_ExclamationMark
# 264 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 265 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_7:
# 288 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 289 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus1
# 290 "data/maps/MareS7/scripts.pory"
	setvar VAR_ULYSSES_STATE, 1
# 291 "data/maps/MareS7/scripts.pory"
	warpsilent MAP_MARE_S7, 11, 34
	return

MareS7_Script_TaurosTelemachus_8:
# 277 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceUp
# 278 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_7

MareS7_Script_TaurosTelemachus_9:
# 280 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceDown
# 281 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_7


MareS7_Script_UlyssesSaveTelemachus::
# 296 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 297 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus2
# 299 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceDown
# 300 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_FaceDown
# 301 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 303 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus3
# 305 "data/maps/MareS7/scripts.pory"
	warpsilent MAP_CASA_ULYSSIS, 7, 8
	return


MareS7_Script_Polyphemus::
# 310 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 3
	goto_if_lt MareS7_Script_Polyphemus_2
# 314 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 3
	goto_if_eq MareS7_Script_Polyphemus_3
# 381 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_PolyphemusDancing
# 382 "data/maps/MareS7/scripts.pory"
	closemessage
MareS7_Script_Polyphemus_1:
	end

MareS7_Script_Polyphemus_2:
# 311 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_PolyphemusBeforeUlysses
# 312 "data/maps/MareS7/scripts.pory"
	closemessage
	goto MareS7_Script_Polyphemus_1

MareS7_Script_Polyphemus_3:
# 316 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_PolyphemusDuringUlysses
# 318 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_LOTUS_LEAF
# 320 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_Polyphemus_7
	goto MareS7_Script_Polyphemus_1

MareS7_Script_Polyphemus_7:
# 321 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_PolyphemusGiveLotus, MSGBOX_YESNO
# 322 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_Polyphemus_9
	goto MareS7_Script_Polyphemus_1

MareS7_Script_Polyphemus_9:
# 324 "data/maps/MareS7/scripts.pory"
	removeitem ITEM_LOTUS_LEAF, 1
# 325 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_GavePolyphemusLotus
# 326 "data/maps/MareS7/scripts.pory"
	closemessage
# 327 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_POLYPHEMUS, Common_Movement_ExclamationMark
# 328 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 330 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_PolyphemusLotus1
# 331 "data/maps/MareS7/scripts.pory"
	closemessage
# 333 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_POLYPHEMUS, Common_Movement_WalkDown2
# 334 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown2
# 335 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 336 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 337 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_POLYPHEMUS, Common_Movement_FaceLeft
# 338 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 339 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_POLYPHEMUS, Common_Movement_WalkLeft6
# 340 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 341 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_POLYPHEMUS, Common_Movement_WalkDown
# 342 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 343 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_POLYPHEMUS, MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN
# 345 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 346 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 347 "data/maps/MareS7/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 348 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_HidePrisoners
# 349 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_ARIDAULYSSES
# 350 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ARIDAULYSSES, 53, 58
# 351 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ARIDAULYSSES, MOVEMENT_TYPE_FACE_DOWN
# 352 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_ARIDAULYSSES
# 353 "data/maps/MareS7/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 355 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 356 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesAfterPolyphemus
# 357 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 358 "data/maps/MareS7/scripts.pory"
	closemessage
# 360 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ARIDAULYSSES, Common_Movement_WalkRight3
# 361 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 362 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ARIDAULYSSES, Common_Movement_WalkDown3
# 363 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 364 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ARIDAULYSSES, Common_Movement_WalkRight5
# 365 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 367 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_ARIDAULYSSES
# 368 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ARIDAULYSSES, 0, 0
# 369 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ARIDAULYSSES, MOVEMENT_TYPE_INVISIBLE
# 370 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_ARIDAULYSSES
# 372 "data/maps/MareS7/scripts.pory"
	setvar VAR_ULYSSES_STATE, 4
# 374 "data/maps/MareS7/scripts.pory"
	setflag FLAG_ISLAARIDA_HIDEPRISONERS
	goto MareS7_Script_Polyphemus_1


MareS7_Script_HidePrisoners::
# 388 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_PRISONER1
# 389 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_PRISONER2
# 390 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_PRISONER3
# 391 "data/maps/MareS7/scripts.pory"
	removeobject LOCALID_MARES7_PRISONER4
# 393 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PRISONER1, 0, 0
# 394 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PRISONER2, 0, 0
# 395 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PRISONER3, 0, 0
# 396 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PRISONER4, 0, 0
# 398 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PRISONER1, MOVEMENT_TYPE_INVISIBLE
# 399 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PRISONER2, MOVEMENT_TYPE_INVISIBLE
# 400 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PRISONER3, MOVEMENT_TYPE_INVISIBLE
# 401 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PRISONER4, MOVEMENT_TYPE_INVISIBLE
# 403 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_PRISONER1
# 404 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_PRISONER2
# 405 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_PRISONER3
# 406 "data/maps/MareS7/scripts.pory"
	addobject LOCALID_MARES7_PRISONER4
	return


MareS7_Script_TaurosPush_Text_0:
# 187 "data/maps/MareS7/scripts.pory"
	.string "ERROR CheckWhichTaurosPush OOB$"

MareS7_Script_TaurosPush_Text_1:
# 235 "data/maps/MareS7/scripts.pory"
	.string "ERROR 67 \nNo Valid Push Direction sin collision$"

MareS7_Script_TaurosPush_Text_2:
# 237 "data/maps/MareS7/scripts.pory"
	.string "ERROR 69 CheckTaurosPushDirection$"

MareS7_Script_TaurosPush_Text_3:
# 239 "data/maps/MareS7/scripts.pory"
	.string "ERROR VAR_TEMP_B default switch$"

MareS7_Script_TaurosTelemachus_Text_0:
# 283 "data/maps/MareS7/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB in Ulysses Face$"

MareS7_Text_Penelope1::
# 410 "data/maps/MareS7/scripts.pory"
	.string "What ever shall I do? My poor husband,\n"
	.string "the resourceful and brilliant Ulysses,\l"
	.string "has gone insane! Look how he wanders\l"
	.string "round without sense while Tauros\l"
	.string "destroy our fields!$"

MareS7_Text_Penelope2::
# 417 "data/maps/MareS7/scripts.pory"
	.string "I'm so sorry but I must ask you to\n"
	.string "respect our privacy during this time of\l"
	.string "tragedy. Please leave, my husband is\l"
	.string "not well. Curse the madness of Ulysses!$"

MareS7_Text_UlyssesMadness6::
# 424 "data/maps/MareS7/scripts.pory"
	.string "...and viddy films I would! Where I was\n"
	.string "taken to, brothers, was like no cine I'd\l"
	.string "ever viddied before. I was bound up in a\l"
	.string "straightjacket, and my guliver was\l"
	.string "strapped to a headrest...$"

MareS7_Text_UlyssesMadness2::
# 428 "data/maps/MareS7/scripts.pory"
	.string "The spy coast on the deep road toward\n"
	.string "that narrow north...$"

MareS7_Text_UlyssesMadness3::
# 432 "data/maps/MareS7/scripts.pory"
	.string "Jar women, tomb of sand, the bitter\n"
	.string "summer guests, the mighty bread...$"

MareS7_Text_UlyssesMadness4::
# 436 "data/maps/MareS7/scripts.pory"
	.string "I am the eggman. You are the eggman. I\n"
	.string "am the walrus. Goo goo g'joob!$"

MareS7_Text_UlyssesMadness5::
# 440 "data/maps/MareS7/scripts.pory"
	.string "A is B and C is B and D is B but A is not C\n"
	.string "and A is not D and C is not D.$"

MareS7_Text_UlyssesMadness1::
# 444 "data/maps/MareS7/scripts.pory"
	.string "Jingle bells! Mermaid Man smells!\n"
	.string "Barnacle Boy laid an egg! The invisible\l"
	.string "boat mobile lost a wheel and...$"

MareS7_Text_Telemachus::
# 448 "data/maps/MareS7/scripts.pory"
	.string "I don't get it! What's wrong with pa?\n"
	.string "Why can't he stop the Tauros from\l"
	.string "hurting our farm?$"

MareS7_Text_UlyssesSaveTelemachus1::
# 452 "data/maps/MareS7/scripts.pory"
	.string "No! Telemachus!$"

MareS7_Text_UlyssesSaveTelemachus2::
# 456 "data/maps/MareS7/scripts.pory"
	.string "My darling son, are you OK? You're not\n"
	.string "injured? That was nearly catastrophe!$"

MareS7_Text_UlyssesSaveTelemachus3::
# 461 "data/maps/MareS7/scripts.pory"
	.string "Oh! Hello...uhh I uhh...didn't see you\n"
	.string "there. Wow! I uhh.. I'm feeling just like\l"
	.string "myself again! Yeah, that's right! I've\l"
	.string "been miraculously healed of my former\l"
	.string "condition, now I'm thinking straight and\l"
	.string "seeing clearly. Praise to the divine!\l"
	.string "But where are my manners, you are our\l"
	.string "guest on out family home, Isla Ithaca.\l"
	.string "We should all head inside. Please, come\l"
	.string "with me.$"

MareS7_Text_PolyphemusBeforeUlysses::
# 471 "data/maps/MareS7/scripts.pory"
	.string "Me Polyphemus! This Polyphemus Island!\n"
	.string "You leave now before Polyphemus get\l"
	.string "angry!$"

MareS7_Text_PolyphemusDuringUlysses::
# 475 "data/maps/MareS7/scripts.pory"
	.string "You puny intruder! Me Polyphemus! This\n"
	.string "Polyphemus Island! You lucky\l"
	.string "Polyphemus pen all full other intruders.\l"
	.string "You leave now before Polyphemus get\l"
	.string "angry!$"

MareS7_Text_PolyphemusGiveLotus::
# 479 "data/maps/MareS7/scripts.pory"
	.string "$"

MareS7_Text_GavePolyphemusLotus::
# 483 "data/maps/MareS7/scripts.pory"
	.string "$"

MareS7_Text_PolyphemusLotus1::
# 487 "data/maps/MareS7/scripts.pory"
	.string "$"

MareS7_Text_UlyssesAfterPolyphemus::
# 491 "data/maps/MareS7/scripts.pory"
	.string "$"

MareS7_Text_PolyphemusDancing::
# 495 "data/maps/MareS7/scripts.pory"
	.string "$"
