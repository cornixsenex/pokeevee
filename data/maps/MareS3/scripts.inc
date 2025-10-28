MareS3_MapScripts::
# 16 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/MareS3/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS3_F
# 20 "data/maps/MareS3/scripts.pory"
	compare VAR_ULYSSES_STATE, 2
	goto_if_eq MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ShowLotusEaters
	return

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME:
# 27 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 31 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 35 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 39 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 43 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 47 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 51 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19
	return

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 28 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD1, MAP_MARE_S3
# 29 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 32 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD2, MAP_MARE_S3
# 33 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 36 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD3, MAP_MARE_S3
# 37 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 40 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD4, MAP_MARE_S3
# 41 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 44 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD5, MAP_MARE_S3
# 45 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 48 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD6, MAP_MARE_S3
# 49 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19:
# 52 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD7, MAP_MARE_S3
# 53 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Script_Transition_MareTranquillum::
# 62 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 63 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 64 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_MareSubtropicum::
# 68 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 69 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 70 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_IslaHerbaBona::
# 74 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 3
# 75 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 76 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_ShowLotusEaters::
# 80 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 29, 60
# 81 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
# 82 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 29, 56
# 83 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_WANDER_AROUND
# 84 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 31, 58
# 85 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_WANDER_AROUND
# 86 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 33, 61
# 87 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_WANDER_AROUND
# 88 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 31, 64
# 89 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_WANDER_AROUND
# 90 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 27, 63
# 91 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_WANDER_AROUND
# 92 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 26, 60
# 93 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_WANDER_AROUND
# 94 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 27, 57
# 95 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_WANDER_AROUND
	return


MareS3_Script_Ulysses::
# 100 "data/maps/MareS3/scripts.pory"
	faceplayer
# 101 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_Ulysses_3
	return

MareS3_Script_Ulysses_1:
# 105 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit1
# 106 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 107 "data/maps/MareS3/scripts.pory"
	closemessage
# 109 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 110 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 111 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 112 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 113 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
# 114 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 115 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 116 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 117 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
# 118 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 119 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 120 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 121 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 122 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 124 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 125 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 127 "data/maps/MareS3/scripts.pory"
	faceplayer
# 129 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 130 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 131 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 132 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit2
# 133 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 134 "data/maps/MareS3/scripts.pory"
	closemessage
# 136 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 137 "data/maps/MareS3/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/MareS3/scripts.pory"
	case DIR_NORTH, MareS3_Script_Ulysses_17
# 140 "data/maps/MareS3/scripts.pory"
	case DIR_SOUTH, MareS3_Script_Ulysses_18
# 142 "data/maps/MareS3/scripts.pory"
	case DIR_WEST, MareS3_Script_Ulysses_19
# 144 "data/maps/MareS3/scripts.pory"
	case DIR_EAST, MareS3_Script_Ulysses_20
MareS3_Script_Ulysses_15:
# 147 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 149 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 150 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 152 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 153 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit3
# 155 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 156 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 158 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit4
# 160 "data/maps/MareS3/scripts.pory"
	faceplayer
# 162 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit5
# 163 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 164 "data/maps/MareS3/scripts.pory"
	closemessage
	return

MareS3_Script_Ulysses_2:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_Ulysses_7
	return

MareS3_Script_Ulysses_3:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_Ulysses_2
	return

MareS3_Script_Ulysses_6:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_Ulysses_11
	return

MareS3_Script_Ulysses_7:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_Ulysses_6
	return

MareS3_Script_Ulysses_10:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_Ulysses_1
	return

MareS3_Script_Ulysses_11:
# 103 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_Ulysses_10
	return

MareS3_Script_Ulysses_17:
# 139 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
	goto MareS3_Script_Ulysses_15

MareS3_Script_Ulysses_18:
# 141 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
	goto MareS3_Script_Ulysses_15

MareS3_Script_Ulysses_19:
# 143 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
	goto MareS3_Script_Ulysses_15

MareS3_Script_Ulysses_20:
# 145 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
	goto MareS3_Script_Ulysses_15


MareS3_Script_LotusHead1::
# 173 "data/maps/MareS3/scripts.pory"
	faceplayer
# 174 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
# 175 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead2::
# 179 "data/maps/MareS3/scripts.pory"
	faceplayer
# 180 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_2
# 181 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead3::
# 185 "data/maps/MareS3/scripts.pory"
	faceplayer
# 186 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_3
# 187 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead4::
# 191 "data/maps/MareS3/scripts.pory"
	faceplayer
# 192 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_4
# 193 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead5::
# 197 "data/maps/MareS3/scripts.pory"
	faceplayer
# 198 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_5
# 199 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead6::
# 203 "data/maps/MareS3/scripts.pory"
	faceplayer
# 204 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_6
# 205 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead7::
# 209 "data/maps/MareS3/scripts.pory"
	faceplayer
# 210 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_7
# 211 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 217 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro, MSGBOX_YESNO
# 219 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS3_Script_LotusHead_1
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MareS3_Script_LotusHead_7
MareS3_Script_LotusHead_4:
# 227 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadPre
# 228 "data/maps/MareS3/scripts.pory"
	closemessage
# 229 "data/maps/MareS3/scripts.pory"
	trainerbattle_no_intro TRAINER_TEST_BATTLE, MareS3_Text_LotusHeadLost
# 230 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_HideLotusHeads
	end

MareS3_Script_LotusHead_1:
# 220 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ResetLotusHeads
	return

MareS3_Script_LotusHead_5:
# 225 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_6:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MareS3_Script_LotusHead_11
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_7:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_2, MareS3_Script_LotusHead_6
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_10:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_5, MareS3_Script_LotusHead_15
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_11:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_4, MareS3_Script_LotusHead_10
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_14:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_7, MareS3_Script_LotusHead_5
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_15:
# 224 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_6, MareS3_Script_LotusHead_14
	goto MareS3_Script_LotusHead_4


MareS3_Script_HideLotusHeads::
# 237 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_HideLotusHeads_2
MareS3_Script_HideLotusHeads_1:
# 243 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_HideLotusHeads_5
MareS3_Script_HideLotusHeads_4:
# 249 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_HideLotusHeads_8
MareS3_Script_HideLotusHeads_7:
# 255 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_HideLotusHeads_11
MareS3_Script_HideLotusHeads_10:
# 261 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_HideLotusHeads_14
MareS3_Script_HideLotusHeads_13:
# 267 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_HideLotusHeads_17
MareS3_Script_HideLotusHeads_16:
# 273 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_HideLotusHeads_20
MareS3_Script_HideLotusHeads_19:
	return

MareS3_Script_HideLotusHeads_2:
# 238 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 239 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 240 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_INVISIBLE
# 241 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_Script_HideLotusHeads_1

MareS3_Script_HideLotusHeads_5:
# 244 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 245 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 246 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_INVISIBLE
# 247 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_Script_HideLotusHeads_4

MareS3_Script_HideLotusHeads_8:
# 250 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 251 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 252 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_INVISIBLE
# 253 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_Script_HideLotusHeads_7

MareS3_Script_HideLotusHeads_11:
# 256 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 257 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 258 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_INVISIBLE
# 259 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_Script_HideLotusHeads_10

MareS3_Script_HideLotusHeads_14:
# 262 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 263 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 264 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_INVISIBLE
# 265 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_Script_HideLotusHeads_13

MareS3_Script_HideLotusHeads_17:
# 268 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 269 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 270 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_INVISIBLE
# 271 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_Script_HideLotusHeads_16

MareS3_Script_HideLotusHeads_20:
# 274 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 275 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
# 276 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_INVISIBLE
# 277 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	goto MareS3_Script_HideLotusHeads_19


MareS3_Script_ResetLotusHeads::
# 284 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusReset
# 286 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 287 "data/maps/MareS3/scripts.pory"
	lockall
# 288 "data/maps/MareS3/scripts.pory"
	playfanfare MUS_HEAL
# 289 "data/maps/MareS3/scripts.pory"
	waitfanfare
# 290 "data/maps/MareS3/scripts.pory"
	special HealPlayerParty
# 291 "data/maps/MareS3/scripts.pory"
	callnative UpdateFollowingPokemon
# 293 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ClearLotusHeadFlags
# 295 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_RemoveLotusHeads
# 297 "data/maps/MareS3/scripts.pory"
	callnative ResetLotusHeads
# 299 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_AddLotusHeads
# 302 "data/maps/MareS3/scripts.pory"
	releaseall
# 303 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 305 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_ClearLotusHeadFlags::
# 309 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_1
# 310 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_2
# 311 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_3
# 312 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_4
# 313 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_5
# 314 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_6
# 315 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_7
	return


MareS3_Script_RemoveLotusHeads::
# 320 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 321 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 322 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 323 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 324 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 325 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 326 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 327 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 328 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 329 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 330 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 331 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 332 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 333 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
	return


MareS3_Script_AddLotusHeads::
# 338 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
# 339 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
# 340 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
# 341 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
# 342 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
# 343 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
# 344 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Text_LotusHeadIntro::
# 348 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"

MareS3_Text_LotusHeadPre::
# 352 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusHeadLost::
# 356 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusReset::
# 360 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_UlyssesExit1::
# 364 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_UlyssesExit2::
# 368 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_UlyssesExit3::
# 372 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_UlyssesExit4::
# 376 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_UlyssesExit5::
# 380 "data/maps/MareS3/scripts.pory"
	.string "$"
