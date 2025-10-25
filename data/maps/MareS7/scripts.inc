MareS7_MapScripts::
# 15 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
# 20 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_CheckUlyssesChase
	return


MareS7_Script_Transition_IslaIthaca::
# 30 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 31 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 32 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 36 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 37 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 38 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 42 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 43 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 44 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 48 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 49 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 50 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 54 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 55 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 56 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_CheckUlyssesChase::
# 60 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 61 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_CheckUlyssesChase_2
MareS7_Script_CheckUlyssesChase_1:
	return

MareS7_Script_CheckUlyssesChase_2:
# 62 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	goto MareS7_Script_CheckUlyssesChase_1


MareS7_Script_SetupUlyssesChase::
# 69 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 30
# 70 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT
# 72 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS1, 9, 28
# 73 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 75 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS2, 13, 32
# 76 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS2, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 78 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 11, 34
# 79 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_UP
# 81 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 34
# 82 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_UP
	return


MareS7_Script_Ulysses::
# 88 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 89 "data/maps/MareS7/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 90 "data/maps/MareS7/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_Ulysses_3
# 92 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_Ulysses_3
# 94 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_Ulysses_4
# 95 "data/maps/MareS7/scripts.pory"
	case 3, MareS7_Script_Ulysses_4
# 97 "data/maps/MareS7/scripts.pory"
	case 4, MareS7_Script_Ulysses_5
# 98 "data/maps/MareS7/scripts.pory"
	case 5, MareS7_Script_Ulysses_5
# 100 "data/maps/MareS7/scripts.pory"
	case 6, MareS7_Script_Ulysses_6
# 101 "data/maps/MareS7/scripts.pory"
	case 7, MareS7_Script_Ulysses_6
# 103 "data/maps/MareS7/scripts.pory"
	case 8, MareS7_Script_Ulysses_7
# 104 "data/maps/MareS7/scripts.pory"
	case 9, MareS7_Script_Ulysses_7
# 107 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness6
MareS7_Script_Ulysses_1:
# 109 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 110 "data/maps/MareS7/scripts.pory"
	closemessage
	end

MareS7_Script_Ulysses_3:
# 93 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness1
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_4:
# 96 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness2
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_5:
# 99 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness3
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_6:
# 102 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness4
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_7:
# 105 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness5
	goto MareS7_Script_Ulysses_1


MareS7_Script_Penelope::
# 115 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_PENELOPE, Common_Movement_ExclamationMark
# 116 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 117 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope1
# 118 "data/maps/MareS7/scripts.pory"
	faceplayer
# 119 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope2
# 120 "data/maps/MareS7/scripts.pory"
	closemessage
# 121 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_Telemachus::
# 126 "data/maps/MareS7/scripts.pory"
	faceplayer
# 127 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Telemachus
# 128 "data/maps/MareS7/scripts.pory"
	closemessage
# 129 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_TaurosPush::
# 134 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_A, CheckWhichTaurosPush
# 135 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_A
# 137 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_TaurosPush_3
# 140 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_TaurosPush_4
# 145 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_TaurosPush_5
# 150 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
MareS7_Script_TaurosPush_1:
# 153 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 154 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 156 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_B, CheckTaurosPushDirection
# 157 "data/maps/MareS7/scripts.pory"
	switch VAR_TEMP_B
# 159 "data/maps/MareS7/scripts.pory"
	case DIR_EAST, MareS7_Script_TaurosPush_9
# 169 "data/maps/MareS7/scripts.pory"
	case DIR_WEST, MareS7_Script_TaurosPush_10
# 179 "data/maps/MareS7/scripts.pory"
	case DIR_NORTH, MareS7_Script_TaurosPush_11
# 182 "data/maps/MareS7/scripts.pory"
	case DIR_SOUTH, MareS7_Script_TaurosPush_12
# 185 "data/maps/MareS7/scripts.pory"
	case 67, MareS7_Script_TaurosPush_13
# 187 "data/maps/MareS7/scripts.pory"
	case 69, MareS7_Script_TaurosPush_14
# 190 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_3
MareS7_Script_TaurosPush_7:
# 193 "data/maps/MareS7/scripts.pory"
	release
	end

MareS7_Script_TaurosPush_3:
# 138 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_4:
# 141 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 142 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_ExclamationMark
# 143 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_5:
# 146 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 147 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_ExclamationMark
# 148 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_1

MareS7_Script_TaurosPush_9:
# 160 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_16
# 165 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkRight
# 166 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 167 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_10:
# 170 "data/maps/MareS7/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MareS7_Script_TaurosPush_19
# 175 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS2, Common_Movement_WalkLeft
# 176 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 177 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_11:
# 180 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 181 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_12:
# 183 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 184 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_13:
# 186 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_1
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_14:
# 188 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Script_TaurosPush_Text_2
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_16:
# 161 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkRight
# 162 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 163 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7

MareS7_Script_TaurosPush_19:
# 171 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TAUROS1, Common_Movement_WalkLeft
# 172 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 173 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	goto MareS7_Script_TaurosPush_7


MareS7_Script_TaurosTelemachus::
# 198 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_MARES7_TELEMACHUS, Common_Movement_ExclamationMark
# 199 "data/maps/MareS7/scripts.pory"
	waitmovement 0
	return


MareS7_Script_TaurosPush_Text_0:
# 138 "data/maps/MareS7/scripts.pory"
	.string "ERROR CheckWhichTaurosPush OOB$"

MareS7_Script_TaurosPush_Text_1:
# 186 "data/maps/MareS7/scripts.pory"
	.string "ERROR 67 \nNo Valid Push Direction sin collision$"

MareS7_Script_TaurosPush_Text_2:
# 188 "data/maps/MareS7/scripts.pory"
	.string "ERROR 69 CheckTaurosPushDirection$"

MareS7_Script_TaurosPush_Text_3:
# 190 "data/maps/MareS7/scripts.pory"
	.string "ERROR VAR_TEMP_B default switch$"

MareS7_Text_Penelope1::
# 202 "data/maps/MareS7/scripts.pory"
	.string "What ever shall I do? My poor husband,\n"
	.string "the resourceful and brilliant Ulysses,\l"
	.string "has gone insane! Look how he wanders\l"
	.string "round without sense while Tauros\l"
	.string "destroy our fields!$"

MareS7_Text_Penelope2::
# 209 "data/maps/MareS7/scripts.pory"
	.string "I'm so sorry but I must ask you to\n"
	.string "respect our privacy during this time of\l"
	.string "tragedy. Please leave, my husband is\l"
	.string "not well. Curse the madness of Ulysses!$"

MareS7_Text_UlyssesMadness6::
# 216 "data/maps/MareS7/scripts.pory"
	.string "...and viddy films I would! Where I was\n"
	.string "taken to, brothers, was like no cine I'd\l"
	.string "ever viddied before. I was bound up in a\l"
	.string "straightjacket, and my guliver was\l"
	.string "strapped to a headrest...$"

MareS7_Text_UlyssesMadness2::
# 220 "data/maps/MareS7/scripts.pory"
	.string "The spy coast on the deep road toward\n"
	.string "that narrow north...$"

MareS7_Text_UlyssesMadness3::
# 224 "data/maps/MareS7/scripts.pory"
	.string "Jar women, tomb of sand, the bitter\n"
	.string "summer guests, the mighty bread...$"

MareS7_Text_UlyssesMadness4::
# 228 "data/maps/MareS7/scripts.pory"
	.string "I am the eggman. You are the eggman. I\n"
	.string "am the walrus. Goo goo g'joob!$"

MareS7_Text_UlyssesMadness5::
# 232 "data/maps/MareS7/scripts.pory"
	.string "A is B and C is B and D is B but A is not C\n"
	.string "and A is not D and C is not D.$"

MareS7_Text_UlyssesMadness1::
# 236 "data/maps/MareS7/scripts.pory"
	.string "Jingle bells! Mermaid Man smells!\n"
	.string "Barnacle Boy laid an egg! The invisible\l"
	.string "boat mobile lost a wheel and...$"

MareS7_Text_Telemachus::
# 240 "data/maps/MareS7/scripts.pory"
	.string "I don't get it! What's wrong with pa?\n"
	.string "Why can't he stop the Tauros from\l"
	.string "hurting our farm?$"
