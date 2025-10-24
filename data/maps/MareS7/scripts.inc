MareS7_MapScripts::
# 13 "data/maps/MareS7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS7/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS7_F
# 18 "data/maps/MareS7/scripts.pory"
	compare VAR_ULYSSES_STATE, 0
	goto_if_eq MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS7_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_CheckUlyssesChase
	return


MareS7_Script_Transition_IslaIthaca::
# 28 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 1
# 29 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 30 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_MareSubtropicum::
# 34 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 2
# 35 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 36 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaHerbaBona::
# 40 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 3
# 41 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 42 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaArida::
# 46 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 4
# 47 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 48 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_Transition_IslaIgnifera::
# 52 "data/maps/MareS7/scripts.pory"
	setvar VAR_TEMP_5, 5
# 53 "data/maps/MareS7/scripts.pory"
	special TransitionMapMusic
# 54 "data/maps/MareS7/scripts.pory"
	special ShowMapNamePopup
	return


MareS7_Script_CheckUlyssesChase::
# 58 "data/maps/MareS7/scripts.pory"
	checkitem ITEM_WEDDING_INVITATION_ULYSSES
# 59 "data/maps/MareS7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS7_Script_CheckUlyssesChase_2
MareS7_Script_CheckUlyssesChase_1:
	return

MareS7_Script_CheckUlyssesChase_2:
# 60 "data/maps/MareS7/scripts.pory"
	call MareS7_Script_SetupUlyssesChase
	goto MareS7_Script_CheckUlyssesChase_1


MareS7_Script_SetupUlyssesChase::
# 67 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_ULYSSES, 11, 30
# 68 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
# 70 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS1, 9, 28
# 71 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS1, MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT
# 73 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TAUROS2, 13, 32
# 74 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TAUROS2, MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT
# 76 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_PENELOPE, 11, 34
# 77 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_PENELOPE, MOVEMENT_TYPE_FACE_UP
# 79 "data/maps/MareS7/scripts.pory"
	setobjectxyperm LOCALID_MARES7_TELEMACHUS, 10, 34
# 80 "data/maps/MareS7/scripts.pory"
	setobjectmovementtype LOCALID_MARES7_TELEMACHUS, MOVEMENT_TYPE_FACE_DOWN
	return


MareS7_Script_Ulysses::
# 86 "data/maps/MareS7/scripts.pory"
	lock
# 87 "data/maps/MareS7/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 88 "data/maps/MareS7/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 89 "data/maps/MareS7/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/MareS7/scripts.pory"
	case 0, MareS7_Script_Ulysses_3
# 91 "data/maps/MareS7/scripts.pory"
	case 1, MareS7_Script_Ulysses_3
# 93 "data/maps/MareS7/scripts.pory"
	case 2, MareS7_Script_Ulysses_4
# 94 "data/maps/MareS7/scripts.pory"
	case 3, MareS7_Script_Ulysses_4
# 96 "data/maps/MareS7/scripts.pory"
	case 4, MareS7_Script_Ulysses_5
# 97 "data/maps/MareS7/scripts.pory"
	case 5, MareS7_Script_Ulysses_5
# 99 "data/maps/MareS7/scripts.pory"
	case 6, MareS7_Script_Ulysses_6
# 100 "data/maps/MareS7/scripts.pory"
	case 7, MareS7_Script_Ulysses_6
# 102 "data/maps/MareS7/scripts.pory"
	case 8, MareS7_Script_Ulysses_7
# 103 "data/maps/MareS7/scripts.pory"
	case 9, MareS7_Script_Ulysses_7
# 106 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness6
MareS7_Script_Ulysses_1:
# 108 "data/maps/MareS7/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 109 "data/maps/MareS7/scripts.pory"
	closemessage
# 110 "data/maps/MareS7/scripts.pory"
	release
	end

MareS7_Script_Ulysses_3:
# 92 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness1
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_4:
# 95 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness2
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_5:
# 98 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness3
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_6:
# 101 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness4
	goto MareS7_Script_Ulysses_1

MareS7_Script_Ulysses_7:
# 104 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_UlyssesMadness5
	goto MareS7_Script_Ulysses_1


MareS7_Script_Penelope::
# 115 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope1
# 116 "data/maps/MareS7/scripts.pory"
	faceplayer
# 117 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Penelope2
# 118 "data/maps/MareS7/scripts.pory"
	closemessage
# 119 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_Telemachus::
# 124 "data/maps/MareS7/scripts.pory"
	faceplayer
# 125 "data/maps/MareS7/scripts.pory"
	msgbox MareS7_Text_Telemachus
# 126 "data/maps/MareS7/scripts.pory"
	closemessage
# 127 "data/maps/MareS7/scripts.pory"
	unfaceplayer
	end


MareS7_Script_TaurosPush::
# 132 "data/maps/MareS7/scripts.pory"
	lock
# 134 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 135 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 137 "data/maps/MareS7/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER
# 138 "data/maps/MareS7/scripts.pory"
	waitmoncry
# 140 "data/maps/MareS7/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 141 "data/maps/MareS7/scripts.pory"
	waitmovement 0
# 143 "data/maps/MareS7/scripts.pory"
	release
	end


MareS7_Text_Penelope1::
# 147 "data/maps/MareS7/scripts.pory"
	.string "What ever shall I do? My poor husband,\n"
	.string "the resourceful and brilliant Ulysses,\l"
	.string "has gone insane! Look how he wanders\l"
	.string "round without sense while Tauros\l"
	.string "destroy our fields!$"

MareS7_Text_Penelope2::
# 154 "data/maps/MareS7/scripts.pory"
	.string "I'm so sorry but I must ask you to\n"
	.string "respect our privacy during this time of\l"
	.string "tragedy. Please leave, my husband is\l"
	.string "not well. Curse the madness of Ulysses!$"

MareS7_Text_UlyssesMadness6::
# 161 "data/maps/MareS7/scripts.pory"
	.string "...and viddy films I would! Where I was\n"
	.string "taken to, brothers, was like no cine I'd\l"
	.string "ever viddied before. I was bound up in a\l"
	.string "straightjacket, and my guliver was\l"
	.string "strapped to a headrest...$"

MareS7_Text_UlyssesMadness2::
# 165 "data/maps/MareS7/scripts.pory"
	.string "The spy coast on the deep road toward\n"
	.string "that narrow north...$"

MareS7_Text_UlyssesMadness3::
# 169 "data/maps/MareS7/scripts.pory"
	.string "Jar women, tomb of sand, the bitter\n"
	.string "summer guests, the mighty bread...$"

MareS7_Text_UlyssesMadness4::
# 173 "data/maps/MareS7/scripts.pory"
	.string "I am the eggman. You are the eggman. I\n"
	.string "am the walrus. Goo goo g'joob!$"

MareS7_Text_UlyssesMadness5::
# 177 "data/maps/MareS7/scripts.pory"
	.string "A is B and C is B and D is B but A is not C\n"
	.string "and A is not D and C is not D.$"

MareS7_Text_UlyssesMadness1::
# 181 "data/maps/MareS7/scripts.pory"
	.string "Jingle bells! Mermaid Man smells!\n"
	.string "Barnacle Boy laid an egg! The invisible\l"
	.string "boat mobile lost a wheel and...$"

MareS7_Text_Telemachus::
# 185 "data/maps/MareS7/scripts.pory"
	.string "I don't get it! What's wrong with pa?\n"
	.string "Why can't he stop the Tauros from\l"
	.string "hurting our farm?$"
