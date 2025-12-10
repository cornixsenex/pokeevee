MareS3_MapScripts::
# 17 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MareS3/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS3_F
# 21 "data/maps/MareS3/scripts.pory"
	compare VAR_ULYSSES_STATE, 2
	goto_if_eq MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_8
# 26 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_9
# 27 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_A
# 28 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_B
	return

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ShowLotusEaters
	goto MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME:
# 33 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 37 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 41 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 45 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 49 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 53 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 57 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19
	return

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 34 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD1, MAP_MARE_S3
# 35 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 38 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD2, MAP_MARE_S3
# 39 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 42 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD3, MAP_MARE_S3
# 43 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 46 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD4, MAP_MARE_S3
# 47 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 50 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD5, MAP_MARE_S3
# 51 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 54 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD6, MAP_MARE_S3
# 55 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19:
# 58 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD7, MAP_MARE_S3
# 59 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Script_Transition_MareTranquillum::
# 68 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 69 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 70 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_MareSubtropicum::
# 74 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 75 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 76 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_IslaHerbaBona::
# 80 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 3
# 81 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 82 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_ShowLotusEaters::
# 86 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 29, 60
# 87 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
# 88 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 29, 56
# 89 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_WANDER_AROUND
# 90 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 31, 58
# 91 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_WANDER_AROUND
# 92 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 33, 61
# 93 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_WANDER_AROUND
# 94 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 31, 64
# 95 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_WANDER_AROUND
# 96 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 27, 63
# 97 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_WANDER_AROUND
# 98 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 26, 60
# 99 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_WANDER_AROUND
# 100 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 27, 57
# 101 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_WANDER_AROUND
	return


MareS3_Script_Ulysses::
# 106 "data/maps/MareS3/scripts.pory"
	faceplayer
# 107 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_Ulysses_4
MareS3_Script_Ulysses_2:
# 208 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesLotus
# 209 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 210 "data/maps/MareS3/scripts.pory"
	closemessage
# 211 "data/maps/MareS3/scripts.pory"
	unfaceplayer
	end

MareS3_Script_Ulysses_1:
# 111 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit1
# 112 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 113 "data/maps/MareS3/scripts.pory"
	closemessage
# 115 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 116 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 117 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 118 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 119 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
# 120 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 121 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 122 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 123 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
# 124 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 125 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 126 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 127 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 128 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 130 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 131 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 133 "data/maps/MareS3/scripts.pory"
	faceplayer
# 135 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 136 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 137 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 138 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit2
# 139 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 140 "data/maps/MareS3/scripts.pory"
	closemessage
# 142 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 143 "data/maps/MareS3/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/MareS3/scripts.pory"
	case DIR_NORTH, MareS3_Script_Ulysses_18
# 146 "data/maps/MareS3/scripts.pory"
	case DIR_SOUTH, MareS3_Script_Ulysses_19
# 148 "data/maps/MareS3/scripts.pory"
	case DIR_WEST, MareS3_Script_Ulysses_20
# 150 "data/maps/MareS3/scripts.pory"
	case DIR_EAST, MareS3_Script_Ulysses_21
MareS3_Script_Ulysses_16:
# 153 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 155 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 156 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 158 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 159 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit3
# 161 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 162 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 164 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit4
# 166 "data/maps/MareS3/scripts.pory"
	faceplayer
# 168 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit5
# 169 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 170 "data/maps/MareS3/scripts.pory"
	closemessage
# 172 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 173 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_ne MareS3_Script_Ulysses_23
# 178 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp2
# 179 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 180 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkLeft3
# 181 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 182 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp4
MareS3_Script_Ulysses_22:
# 184 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 186 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_ULYSSES
# 187 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 0, 0
# 188 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 189 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_ULYSSES
# 191 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 192 "data/maps/MareS3/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/MareS3/scripts.pory"
	case DIR_NORTH, MareS3_Script_Ulysses_28
# 195 "data/maps/MareS3/scripts.pory"
	case DIR_EAST, MareS3_Script_Ulysses_29
# 197 "data/maps/MareS3/scripts.pory"
	case DIR_SOUTH, MareS3_Script_Ulysses_30
# 199 "data/maps/MareS3/scripts.pory"
	case DIR_WEST, MareS3_Script_Ulysses_31
MareS3_Script_Ulysses_26:
# 203 "data/maps/MareS3/scripts.pory"
	setvar VAR_ULYSSES_STATE, 3
	end

MareS3_Script_Ulysses_3:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_Ulysses_8
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_4:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_Ulysses_3
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_7:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_Ulysses_12
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_8:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_Ulysses_7
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_11:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_Ulysses_1
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_12:
# 109 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_Ulysses_11
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_18:
# 145 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_19:
# 147 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_20:
# 149 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_21:
# 151 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_23:
# 174 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkLeft3
# 175 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 176 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp7
	goto MareS3_Script_Ulysses_22

MareS3_Script_Ulysses_28:
# 194 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_8
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_29:
# 196 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_9
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_30:
# 198 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_A
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_31:
# 200 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_B
	goto MareS3_Script_Ulysses_26


MareS3_Script_LotusHead1::
# 217 "data/maps/MareS3/scripts.pory"
	faceplayer
# 218 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
# 219 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead2::
# 223 "data/maps/MareS3/scripts.pory"
	faceplayer
# 224 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_2
# 225 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead3::
# 229 "data/maps/MareS3/scripts.pory"
	faceplayer
# 230 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_3
# 231 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead4::
# 235 "data/maps/MareS3/scripts.pory"
	faceplayer
# 236 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_4
# 237 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead5::
# 241 "data/maps/MareS3/scripts.pory"
	faceplayer
# 242 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_5
# 243 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead6::
# 247 "data/maps/MareS3/scripts.pory"
	faceplayer
# 248 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_6
# 249 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead7::
# 253 "data/maps/MareS3/scripts.pory"
	faceplayer
# 254 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_7
# 255 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 261 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro, MSGBOX_YESNO
# 263 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS3_Script_LotusHead_1
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MareS3_Script_LotusHead_7
MareS3_Script_LotusHead_4:
# 271 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadPre
# 272 "data/maps/MareS3/scripts.pory"
	closemessage
# 273 "data/maps/MareS3/scripts.pory"
	trainerbattle_no_intro TRAINER_LOTUS_HEAD, MareS3_Text_LotusHeadLost
# 274 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_HideLotusHeads
	end

MareS3_Script_LotusHead_1:
# 264 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ResetLotusHeads
	return

MareS3_Script_LotusHead_5:
# 269 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_6:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MareS3_Script_LotusHead_11
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_7:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_2, MareS3_Script_LotusHead_6
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_10:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_5, MareS3_Script_LotusHead_15
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_11:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_4, MareS3_Script_LotusHead_10
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_14:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_7, MareS3_Script_LotusHead_5
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_15:
# 268 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_6, MareS3_Script_LotusHead_14
	goto MareS3_Script_LotusHead_4


MareS3_Script_HideLotusHeads::
# 281 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_HideLotusHeads_2
MareS3_Script_HideLotusHeads_1:
# 287 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_HideLotusHeads_5
MareS3_Script_HideLotusHeads_4:
# 293 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_HideLotusHeads_8
MareS3_Script_HideLotusHeads_7:
# 299 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_HideLotusHeads_11
MareS3_Script_HideLotusHeads_10:
# 305 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_HideLotusHeads_14
MareS3_Script_HideLotusHeads_13:
# 311 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_HideLotusHeads_17
MareS3_Script_HideLotusHeads_16:
# 317 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_HideLotusHeads_20
MareS3_Script_HideLotusHeads_19:
	return

MareS3_Script_HideLotusHeads_2:
# 282 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 283 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 284 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_INVISIBLE
# 285 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_Script_HideLotusHeads_1

MareS3_Script_HideLotusHeads_5:
# 288 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 289 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 290 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_INVISIBLE
# 291 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_Script_HideLotusHeads_4

MareS3_Script_HideLotusHeads_8:
# 294 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 295 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 296 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_INVISIBLE
# 297 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_Script_HideLotusHeads_7

MareS3_Script_HideLotusHeads_11:
# 300 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 301 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 302 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_INVISIBLE
# 303 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_Script_HideLotusHeads_10

MareS3_Script_HideLotusHeads_14:
# 306 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 307 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 308 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_INVISIBLE
# 309 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_Script_HideLotusHeads_13

MareS3_Script_HideLotusHeads_17:
# 312 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 313 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 314 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_INVISIBLE
# 315 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_Script_HideLotusHeads_16

MareS3_Script_HideLotusHeads_20:
# 318 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 319 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
# 320 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_INVISIBLE
# 321 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	goto MareS3_Script_HideLotusHeads_19


MareS3_Script_ResetLotusHeads::
# 328 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusReset
# 330 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 331 "data/maps/MareS3/scripts.pory"
	lockall
# 332 "data/maps/MareS3/scripts.pory"
	playfanfare MUS_HEAL
# 333 "data/maps/MareS3/scripts.pory"
	waitfanfare
# 334 "data/maps/MareS3/scripts.pory"
	special HealPlayerParty
# 335 "data/maps/MareS3/scripts.pory"
	callnative UpdateFollowingPokemon
# 337 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ClearLotusHeadFlags
# 339 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_RemoveLotusHeads
# 341 "data/maps/MareS3/scripts.pory"
	callnative ResetLotusHeads
# 343 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_AddLotusHeads
# 346 "data/maps/MareS3/scripts.pory"
	releaseall
# 347 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 349 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_ClearLotusHeadFlags::
# 353 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_1
# 354 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_2
# 355 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_3
# 356 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_4
# 357 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_5
# 358 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_6
# 359 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_7
	return


MareS3_Script_RemoveLotusHeads::
# 364 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 365 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 366 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 367 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 368 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 369 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 370 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 371 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 372 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 373 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 374 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 375 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 376 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 377 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
	return


MareS3_Script_AddLotusHeads::
# 382 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
# 383 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
# 384 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
# 385 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
# 386 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
# 387 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
# 388 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Text_LotusHeadIntro::
# 392 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"

MareS3_Text_LotusHeadPre::
# 396 "data/maps/MareS3/scripts.pory"
	.string "What are you man, some kind of nark?$"

MareS3_Text_LotusHeadLost::
# 400 "data/maps/MareS3/scripts.pory"
	.string "You really killed the vibe, man. I'm\n"
	.string "outta here!$"

MareS3_Text_LotusReset::
# 404 "data/maps/MareS3/scripts.pory"
	.string "Here you go, man. Make sure you eat,\n"
	.string "like, the whole thing, man.$"

MareS3_Text_UlyssesLotus::
# 408 "data/maps/MareS3/scripts.pory"
	.string "Hey man, I know, I know, I'm just about\n"
	.string "to leave for that wedding thing man,\l"
	.string "but I'm just chilling out for a bit dig?\l"
	.string "Hey, have you tried that Lotus stuff,\l"
	.string "man? It's far out, man! That reminds me\l"
	.string "man, I gotta go get some more here\l"
	.string "soon...$"

MareS3_Text_UlyssesExit1::
# 412 "data/maps/MareS3/scripts.pory"
	.string "Oh, hey man, I was just looking for you.\n"
	.string "Let's go score some more Lotus, man.$"

MareS3_Text_UlyssesExit2::
# 416 "data/maps/MareS3/scripts.pory"
	.string "Hey, man! Where'd everybody go, man?\n"
	.string "You just don't get it, man. I need that\l"
	.string "Lotus, man! Uhh! I don't feel so good...I\l"
	.string "think I'm gonna be sick...$"

MareS3_Text_UlyssesExit3::
# 420 "data/maps/MareS3/scripts.pory"
	.string "Hurk... hurk... BLAAARRRGH!$"

MareS3_Text_UlyssesExit4::
# 424 "data/maps/MareS3/scripts.pory"
	.string "Hurk... hurk... BLAAARRRGH... splat!$"

MareS3_Text_UlyssesExit5::
# 428 "data/maps/MareS3/scripts.pory"
	.string "How terrible! My stomach's been\n"
	.string "relieved, but now I feel a deep burning\l"
	.string "headache. I'm sorry you had to witness\l"
	.string "that, {PLAYER}, but now I am feeling\l"
	.string "myself again and will leave for\l"
	.string "Menelaus' wedding.$"
