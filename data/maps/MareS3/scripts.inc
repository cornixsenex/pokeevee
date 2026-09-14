MareS3_MapScripts::
# 17 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/MareS3/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS3_F
# 21 "data/maps/MareS3/scripts.pory"
	compare VAR_ULYSSES_STATE, 2
	goto_if_eq MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ShowLotusEaters
	return

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME:
# 28 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 32 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 36 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 40 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 44 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 48 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17
MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16:
# 52 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19
	return

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 29 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD1, MAP_MARE_S3
# 30 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_1

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 33 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD2, MAP_MARE_S3
# 34 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_4

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 37 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD3, MAP_MARE_S3
# 38 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_7

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 41 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD4, MAP_MARE_S3
# 42 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_10

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 45 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD5, MAP_MARE_S3
# 46 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_13

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_17:
# 49 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD6, MAP_MARE_S3
# 50 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_16

MareS3_MapScripts_MAP_SCRIPT_ON_RESUME_19:
# 53 "data/maps/MareS3/scripts.pory"
	hideobjectat LOCALID_MARES3_LOTUSHEAD7, MAP_MARE_S3
# 54 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Script_Transition_MareTranquillum::
# 63 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 64 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 65 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_MareSubtropicum::
# 69 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 70 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 71 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_IslaHerbaBona::
# 75 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 3
# 76 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 77 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_ShowLotusEaters::
# 81 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 29, 60
# 82 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
# 83 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 29, 56
# 84 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_WANDER_AROUND
# 85 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 31, 58
# 86 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_WANDER_AROUND
# 87 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 33, 61
# 88 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_WANDER_AROUND
# 89 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 31, 64
# 90 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_WANDER_AROUND
# 91 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 27, 63
# 92 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_WANDER_AROUND
# 93 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 26, 60
# 94 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_WANDER_AROUND
# 95 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 27, 57
# 96 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_WANDER_AROUND
	return


MareS3_Script_Ulysses::
# 101 "data/maps/MareS3/scripts.pory"
	faceplayer
# 102 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_Ulysses_4
MareS3_Script_Ulysses_2:
# 203 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesLotus
# 204 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 205 "data/maps/MareS3/scripts.pory"
	closemessage
# 206 "data/maps/MareS3/scripts.pory"
	unfaceplayer
	end

MareS3_Script_Ulysses_1:
# 106 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit1
# 107 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 108 "data/maps/MareS3/scripts.pory"
	closemessage
# 110 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 111 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 112 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 113 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 114 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
# 115 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 116 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 117 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 118 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
# 119 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 120 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
# 121 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 122 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
# 123 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 125 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 126 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 128 "data/maps/MareS3/scripts.pory"
	faceplayer
# 130 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 131 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 132 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 133 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit2
# 134 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 135 "data/maps/MareS3/scripts.pory"
	closemessage
# 137 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 138 "data/maps/MareS3/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/MareS3/scripts.pory"
	case DIR_NORTH, MareS3_Script_Ulysses_18
# 141 "data/maps/MareS3/scripts.pory"
	case DIR_SOUTH, MareS3_Script_Ulysses_19
# 143 "data/maps/MareS3/scripts.pory"
	case DIR_WEST, MareS3_Script_Ulysses_20
# 145 "data/maps/MareS3/scripts.pory"
	case DIR_EAST, MareS3_Script_Ulysses_21
MareS3_Script_Ulysses_16:
# 148 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 150 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 151 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 153 "data/maps/MareS3/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 154 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit3
# 156 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_ExclamationMark
# 157 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 159 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit4
# 161 "data/maps/MareS3/scripts.pory"
	faceplayer
# 163 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_UlyssesExit5
# 164 "data/maps/MareS3/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 165 "data/maps/MareS3/scripts.pory"
	closemessage
# 167 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 168 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_ne MareS3_Script_Ulysses_23
# 173 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp2
# 174 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 175 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkLeft3
# 176 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 177 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp4
MareS3_Script_Ulysses_22:
# 179 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 181 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_ULYSSES
# 182 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 0, 0
# 183 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 184 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_ULYSSES
# 186 "data/maps/MareS3/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 187 "data/maps/MareS3/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/MareS3/scripts.pory"
	case DIR_NORTH, MareS3_Script_Ulysses_28
# 190 "data/maps/MareS3/scripts.pory"
	case DIR_EAST, MareS3_Script_Ulysses_29
# 192 "data/maps/MareS3/scripts.pory"
	case DIR_SOUTH, MareS3_Script_Ulysses_30
# 194 "data/maps/MareS3/scripts.pory"
	case DIR_WEST, MareS3_Script_Ulysses_31
MareS3_Script_Ulysses_26:
# 198 "data/maps/MareS3/scripts.pory"
	setvar VAR_ULYSSES_STATE, 3
	end

MareS3_Script_Ulysses_3:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_Ulysses_8
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_4:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_Ulysses_3
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_7:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_Ulysses_12
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_8:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_Ulysses_7
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_11:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_Ulysses_1
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_12:
# 104 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_Ulysses_11
	goto MareS3_Script_Ulysses_2

MareS3_Script_Ulysses_18:
# 140 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceUp
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_19:
# 142 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceDown
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_20:
# 144 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceLeft
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_21:
# 146 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_FaceRight
	goto MareS3_Script_Ulysses_16

MareS3_Script_Ulysses_23:
# 169 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkLeft3
# 170 "data/maps/MareS3/scripts.pory"
	waitmovement 0
# 171 "data/maps/MareS3/scripts.pory"
	applymovement LOCALID_MARES3_ULYSSES, Common_Movement_WalkUp7
	goto MareS3_Script_Ulysses_22

MareS3_Script_Ulysses_28:
# 189 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_8
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_29:
# 191 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_9
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_30:
# 193 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_A
	goto MareS3_Script_Ulysses_26

MareS3_Script_Ulysses_31:
# 195 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_B
	goto MareS3_Script_Ulysses_26


MareS3_Script_ToxicOrbNorth::
# 212 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_8, MareS3_Script_ToxicOrbNorth_1
	return

MareS3_Script_ToxicOrbNorth_1:
# 213 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_8
# 214 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ToxicOrb
	return


MareS3_Script_ToxicOrbEast::
# 219 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_9, MareS3_Script_ToxicOrbEast_1
	return

MareS3_Script_ToxicOrbEast_1:
# 220 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_9
# 221 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ToxicOrb
	return


MareS3_Script_ToxicOrbSouth::
# 226 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_A, MareS3_Script_ToxicOrbSouth_1
	return

MareS3_Script_ToxicOrbSouth_1:
# 227 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_A
# 228 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ToxicOrb
	return


MareS3_Script_ToxicOrbWest::
# 233 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_B, MareS3_Script_ToxicOrbWest_1
	return

MareS3_Script_ToxicOrbWest_1:
# 234 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_B
# 235 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ToxicOrb
	return


MareS3_Script_ToxicOrb::
# 240 "data/maps/MareS3/scripts.pory"
	giveitem ITEM_TOXIC_ORB
	end


MareS3_Script_LotusHead1::
# 245 "data/maps/MareS3/scripts.pory"
	faceplayer
# 246 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
# 247 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead2::
# 251 "data/maps/MareS3/scripts.pory"
	faceplayer
# 252 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_2
# 253 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead3::
# 257 "data/maps/MareS3/scripts.pory"
	faceplayer
# 258 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_3
# 259 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead4::
# 263 "data/maps/MareS3/scripts.pory"
	faceplayer
# 264 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_4
# 265 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead5::
# 269 "data/maps/MareS3/scripts.pory"
	faceplayer
# 270 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_5
# 271 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead6::
# 275 "data/maps/MareS3/scripts.pory"
	faceplayer
# 276 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_6
# 277 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead7::
# 281 "data/maps/MareS3/scripts.pory"
	faceplayer
# 282 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_7
# 283 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 289 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro, MSGBOX_YESNO
# 291 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS3_Script_LotusHead_1
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MareS3_Script_LotusHead_7
MareS3_Script_LotusHead_4:
# 299 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadPre
# 300 "data/maps/MareS3/scripts.pory"
	closemessage
# 301 "data/maps/MareS3/scripts.pory"
	trainerbattle_no_intro TRAINER_LOTUS_HEAD, MareS3_Text_LotusHeadLost
# 302 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_HideLotusHeads
	end

MareS3_Script_LotusHead_1:
# 292 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ResetLotusHeads
	return

MareS3_Script_LotusHead_5:
# 297 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_6:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MareS3_Script_LotusHead_11
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_7:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_2, MareS3_Script_LotusHead_6
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_10:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_5, MareS3_Script_LotusHead_15
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_11:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_4, MareS3_Script_LotusHead_10
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_14:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_7, MareS3_Script_LotusHead_5
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_15:
# 296 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_6, MareS3_Script_LotusHead_14
	goto MareS3_Script_LotusHead_4


MareS3_Script_HideLotusHeads::
# 309 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_HideLotusHeads_2
MareS3_Script_HideLotusHeads_1:
# 315 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_HideLotusHeads_5
MareS3_Script_HideLotusHeads_4:
# 321 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_HideLotusHeads_8
MareS3_Script_HideLotusHeads_7:
# 327 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_HideLotusHeads_11
MareS3_Script_HideLotusHeads_10:
# 333 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_HideLotusHeads_14
MareS3_Script_HideLotusHeads_13:
# 339 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_HideLotusHeads_17
MareS3_Script_HideLotusHeads_16:
# 345 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_HideLotusHeads_20
MareS3_Script_HideLotusHeads_19:
	return

MareS3_Script_HideLotusHeads_2:
# 310 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 311 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 312 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_INVISIBLE
# 313 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_Script_HideLotusHeads_1

MareS3_Script_HideLotusHeads_5:
# 316 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 317 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 318 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_INVISIBLE
# 319 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_Script_HideLotusHeads_4

MareS3_Script_HideLotusHeads_8:
# 322 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 323 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 324 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_INVISIBLE
# 325 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_Script_HideLotusHeads_7

MareS3_Script_HideLotusHeads_11:
# 328 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 329 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 330 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_INVISIBLE
# 331 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_Script_HideLotusHeads_10

MareS3_Script_HideLotusHeads_14:
# 334 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 335 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 336 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_INVISIBLE
# 337 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_Script_HideLotusHeads_13

MareS3_Script_HideLotusHeads_17:
# 340 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 341 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 342 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_INVISIBLE
# 343 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_Script_HideLotusHeads_16

MareS3_Script_HideLotusHeads_20:
# 346 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 347 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
# 348 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_INVISIBLE
# 349 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	goto MareS3_Script_HideLotusHeads_19


MareS3_Script_ResetLotusHeads::
# 356 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusReset
# 358 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 359 "data/maps/MareS3/scripts.pory"
	lockall
# 360 "data/maps/MareS3/scripts.pory"
	playfanfare MUS_HEAL
# 361 "data/maps/MareS3/scripts.pory"
	waitfanfare
# 362 "data/maps/MareS3/scripts.pory"
	special HealPlayerParty
# 363 "data/maps/MareS3/scripts.pory"
	callnative UpdateFollowingPokemon
# 365 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ClearLotusHeadFlags
# 367 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_RemoveLotusHeads
# 369 "data/maps/MareS3/scripts.pory"
	callnative ResetLotusHeads
# 371 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_AddLotusHeads
# 374 "data/maps/MareS3/scripts.pory"
	releaseall
# 375 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 377 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_ClearLotusHeadFlags::
# 381 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_1
# 382 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_2
# 383 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_3
# 384 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_4
# 385 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_5
# 386 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_6
# 387 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_7
	return


MareS3_Script_RemoveLotusHeads::
# 392 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 393 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 394 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 395 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 396 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 397 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 398 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 399 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 400 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 401 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 402 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 403 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 404 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 405 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
	return


MareS3_Script_AddLotusHeads::
# 410 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
# 411 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
# 412 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
# 413 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
# 414 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
# 415 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
# 416 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Text_LotusHeadIntro::
# 420 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"

MareS3_Text_LotusHeadPre::
# 424 "data/maps/MareS3/scripts.pory"
	.string "What are you man, some kind of nark?$"

MareS3_Text_LotusHeadLost::
# 428 "data/maps/MareS3/scripts.pory"
	.string "You really killed the vibe, man. I'm\n"
	.string "outta here!$"

MareS3_Text_LotusReset::
# 432 "data/maps/MareS3/scripts.pory"
	.string "Here you go, man. Make sure you eat,\n"
	.string "like, the whole thing, man.$"

MareS3_Text_UlyssesLotus::
# 436 "data/maps/MareS3/scripts.pory"
	.string "Hey man, I know, I know, I'm just about\n"
	.string "to leave for that wedding thing man,\l"
	.string "but I'm just chilling out for a bit dig?\l"
	.string "Hey, have you tried that Lotus stuff,\l"
	.string "man? It's far out, man! That reminds me\l"
	.string "man, I gotta go get some more here\l"
	.string "soon...$"

MareS3_Text_UlyssesExit1::
# 440 "data/maps/MareS3/scripts.pory"
	.string "Oh, hey man, I was just looking for you.\n"
	.string "Let's go score some more Lotus, man.$"

MareS3_Text_UlyssesExit2::
# 444 "data/maps/MareS3/scripts.pory"
	.string "Hey, man! Where'd everybody go, man?\n"
	.string "You just don't get it, man. I need that\l"
	.string "Lotus, man! Uhh! I don't feel so good...I\l"
	.string "think I'm gonna be sick...$"

MareS3_Text_UlyssesExit3::
# 448 "data/maps/MareS3/scripts.pory"
	.string "Hurk... hurk... BLAAARRRGH!$"

MareS3_Text_UlyssesExit4::
# 452 "data/maps/MareS3/scripts.pory"
	.string "Hurk... hurk... BLAAARRRGH... splat!$"

MareS3_Text_UlyssesExit5::
# 456 "data/maps/MareS3/scripts.pory"
	.string "How terrible! My stomach's been\n"
	.string "relieved, but now I feel a deep burning\l"
	.string "headache. I'm sorry you had to witness\l"
	.string "that, {PLAYER}, but now I am feeling\l"
	.string "myself again and will leave for\l"
	.string "Menelaus' wedding.$"
