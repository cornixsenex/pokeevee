MareS7_MapScripts::
# 15 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MareS7_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 34 "data/maps/MareS7/scripts.pory"
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
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_CheckUlyssesChase
	goto MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_ShowUlyssesSaveTelemachus
	return

MareS7_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 31 "data/maps/MareS7/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, Common_Script_FacePlayerUp
	.2byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/MareS7/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 1, MareS7_Script_UlyssesSaveTelemachus
	.2byte 0


MareS7_Script_Transition_IslaIthaca::
# 44 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 45 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 50 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 51 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 52 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 56 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 57 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 58 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 62 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 63 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 64 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 68 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 69 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 70 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_CheckUlyssesChase::
# 74 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 75 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_CheckUlyssesChase_2
MareS7_Script_CheckUlyssesChase_1:
	return

MareS7_Script_CheckUlyssesChase_2:
# 76 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	goto MareS7_Script_CheckUlyssesChase_1


MareS7_Script_SetupUlyssesChase::
# 83 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 30
# 84 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 86 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS1, 9, 28
# 87 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 89 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS2, 13, 32
# 90 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS2, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 92 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 11, 34
# 93 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_UP
# 95 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 34
# 96 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_UP
	return


MareS7_Script_ShowUlyssesSaveTelemachus::
# 102 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 33
# 103 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_RIGHT
# 105 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 33
# 106 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_FACE_LEFT
# 108 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 12, 33
# 109 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_DOWN
	return


MareS7_Script_Ulysses::
# 115 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 116 "data/maps/MareS7/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 117 "data/maps/MareS7/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_Ulysses_3
# 119 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_Ulysses_3
# 121 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_Ulysses_4
# 122 "data/maps/MareS7/scripts.pory"
	case 3, MareS7_Script_Ulysses_4
# 124 "data/maps/MareS7/scripts.pory"
	case 4, MareS7_Script_Ulysses_5
# 125 "data/maps/MareS7/scripts.pory"
	case 5, MareS7_Script_Ulysses_5
# 127 "data/maps/MareS7/scripts.pory"
	case 6, MareS7_Script_Ulysses_6
# 128 "data/maps/MareS7/scripts.pory"
	case 7, MareS7_Script_Ulysses_6
# 130 "data/maps/MareS7/scripts.pory"
	case 8, MareS7_Script_Ulysses_7
# 131 "data/maps/MareS7/scripts.pory"
	case 9, MareS7_Script_Ulysses_7
# 134 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness6
MareS7_Script_Ulysses_1:
# 136 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 137 "data/maps/MareS7/scripts.pory"
	closemessage
	end

MareS7_Script_Ulysses_3:
# 120 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness1
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_4:
# 123 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness2
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_5:
# 126 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness3
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_6:
# 129 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness4
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_7:
# 132 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness5
	goto MareS7_Script_Ulysses_1


MareS7_Script_Penelope::
# 142 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_PENELOPE, Common_Movement_ExclamationMark
# 143 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 144 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_PENELOPE, 190, 98
# 145 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope1
# 146 "data/maps/MareS7/scripts.pory"
	faceplayer
# 147 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope2
# 148 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_PENELOPE
# 149 "data/maps/MareS7/scripts.pory"
	closemessage
# 150 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_Telemachus::
# 155 "data/maps/MareS7/scripts.pory"
	faceplayer
# 156 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Telemachus
# 157 "data/maps/MareS7/scripts.pory"
	closemessage
# 158 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_TaurosPush::
# 163 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_A, CheckWhichTaurosPush
# 164 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_A
# 166 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_TaurosPush_3
# 169 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_TaurosPush_4
# 174 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_TaurosPush_5
# 179 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
MareS7_Script_TaurosPush_1:
# 182 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 183 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 185 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_B, CheckTaurosPushDirection
# 186 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_B
# 188 "data/maps/MareS7/scripts.pory"
	case DIR_EAST, MareS7_Script_TaurosPush_9
# 198 "data/maps/MareS7/scripts.pory"
	case DIR_WEST, MareS7_Script_TaurosPush_10
# 208 "data/maps/MareS7/scripts.pory"
	case DIR_NORTH, MareS7_Script_TaurosPush_11
# 211 "data/maps/MareS7/scripts.pory"
	case DIR_SOUTH, MareS7_Script_TaurosPush_12
# 214 "data/maps/MareS7/scripts.pory"
	case 67, MareS7_Script_TaurosPush_13
# 216 "data/maps/MareS7/scripts.pory"
	case 69, MareS7_Script_TaurosPush_14
# 219 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_3
MareS7_Script_TaurosPush_7:
# 222 "data/maps/MareS7/scripts.pory"
	release
	end

MareS7_Script_TaurosPush_3:
# 167 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_4:
# 170 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 171 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 172 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_5:
# 175 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 176 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 177 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_9:
# 189 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_16
# 194 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkRight
# 195 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 196 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_10:
# 199 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_19
# 204 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkLeft
# 205 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 206 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_11:
# 209 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 210 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_12:
# 212 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 213 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_13:
# 215 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_1
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_14:
# 217 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_2
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_16:
# 190 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkRight
# 191 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 192 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_19:
# 200 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkLeft
# 201 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 202 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7


MareS7_Script_TaurosTelemachus::
# 228 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_A, CheckWhichTaurosTelemachusPush
# 229 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_A
# 231 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_TaurosTelemachus_3
# 237 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_TaurosTelemachus_4
# 242 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_TaurosTelemachus_5
# 247 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
MareS7_Script_TaurosTelemachus_1:
# 250 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 251 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 253 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_ExclamationMark
# 254 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosTelemachus_8
# 259 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq MareS7_Script_TaurosTelemachus_9
# 263 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosTelemachus_Text_0
# 264 "data/maps/MareS7/scripts.pory"
	closemessage
	end

MareS7_Script_TaurosTelemachus_3:
# 232 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 233 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 234 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 235 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_4:
# 238 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_ExclamationMark
# 239 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 240 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_5:
# 243 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_ExclamationMark
# 244 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 245 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_1

MareS7_Script_TaurosTelemachus_7:
# 268 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 269 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus1
# 270 "data/maps/MareS7/scripts.pory"
	setvar VAR_ULYSSES_STATE, 1
# 271 "data/maps/MareS7/scripts.pory"
	warpsilent MAP_MARE_S7, 11, 34
	return

MareS7_Script_TaurosTelemachus_8:
# 257 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceUp
# 258 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_7

MareS7_Script_TaurosTelemachus_9:
# 260 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceDown
# 261 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosTelemachus_7


MareS7_Script_UlyssesSaveTelemachus::
# 276 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 277 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus2
# 279 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_ULYSSES, Common_Movement_FaceDown
# 280 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_FaceDown
# 281 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 283 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesSaveTelemachus3
# 285 "data/maps/MareS7/scripts.pory"
	warpsilent MAP_CASA_ULYSSIS, 7, 8
	return


MareS7_Script_TaurosPush_Text_0:
# 167 "data/maps/MareS7/scripts.pory"
	.string "ERROR CheckWhichTaurosPush OOB$"

MareS7_Script_TaurosPush_Text_1:
# 215 "data/maps/MareS7/scripts.pory"
	.string "ERROR 67 \nNo Valid Push Direction sin collision$"

MareS7_Script_TaurosPush_Text_2:
# 217 "data/maps/MareS7/scripts.pory"
	.string "ERROR 69 CheckTaurosPushDirection$"

MareS7_Script_TaurosPush_Text_3:
# 219 "data/maps/MareS7/scripts.pory"
	.string "ERROR VAR_TEMP_B default switch$"

MareS7_Script_TaurosTelemachus_Text_0:
# 263 "data/maps/MareS7/scripts.pory"
	.string "ERROR VAR_TEMP_A OOB in Ulysses Face$"

MareS7_Text_Penelope1::
# 288 "data/maps/MareS7/scripts.pory"
	.string "What ever shall I do? My poor husband,\n"
	.string "the resourceful and brilliant Ulysses,\l"
	.string "has gone insane! Look how he wanders\l"
	.string "round without sense while Tauros\l"
	.string "destroy our fields!$"

MareS7_Text_Penelope2::
# 295 "data/maps/MareS7/scripts.pory"
	.string "I'm so sorry but I must ask you to\n"
	.string "respect our privacy during this time of\l"
	.string "tragedy. Please leave, my husband is\l"
	.string "not well. Curse the madness of Ulysses!$"

MareS7_Text_UlyssesMadness6::
# 302 "data/maps/MareS7/scripts.pory"
	.string "...and viddy films I would! Where I was\n"
	.string "taken to, brothers, was like no cine I'd\l"
	.string "ever viddied before. I was bound up in a\l"
	.string "straightjacket, and my guliver was\l"
	.string "strapped to a headrest...$"

MareS7_Text_UlyssesMadness2::
# 306 "data/maps/MareS7/scripts.pory"
	.string "The spy coast on the deep road toward\n"
	.string "that narrow north...$"

MareS7_Text_UlyssesMadness3::
# 310 "data/maps/MareS7/scripts.pory"
	.string "Jar women, tomb of sand, the bitter\n"
	.string "summer guests, the mighty bread...$"

MareS7_Text_UlyssesMadness4::
# 314 "data/maps/MareS7/scripts.pory"
	.string "I am the eggman. You are the eggman. I\n"
	.string "am the walrus. Goo goo g'joob!$"

MareS7_Text_UlyssesMadness5::
# 318 "data/maps/MareS7/scripts.pory"
	.string "A is B and C is B and D is B but A is not C\n"
	.string "and A is not D and C is not D.$"

MareS7_Text_UlyssesMadness1::
# 322 "data/maps/MareS7/scripts.pory"
	.string "Jingle bells! Mermaid Man smells!\n"
	.string "Barnacle Boy laid an egg! The invisible\l"
	.string "boat mobile lost a wheel and...$"

MareS7_Text_Telemachus::
# 326 "data/maps/MareS7/scripts.pory"
	.string "I don't get it! What's wrong with pa?\n"
	.string "Why can't he stop the Tauros from\l"
	.string "hurting our farm?$"

MareS7_Text_UlyssesSaveTelemachus1::
# 330 "data/maps/MareS7/scripts.pory"
	.string "No! Telemachus!$"

MareS7_Text_UlyssesSaveTelemachus2::
# 334 "data/maps/MareS7/scripts.pory"
	.string "My darling son, are you OK? You're not\n"
	.string "injured? That was nearly catastrophe!$"

MareS7_Text_UlyssesSaveTelemachus3::
# 339 "data/maps/MareS7/scripts.pory"
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
