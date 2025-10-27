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
	return


MareS3_Script_LotusHead1::
# 105 "data/maps/MareS3/scripts.pory"
	faceplayer
# 106 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
# 107 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 113 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro, MSGBOX_YESNO
# 115 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS3_Script_LotusHead_1
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MareS3_Script_LotusHead_7
MareS3_Script_LotusHead_4:
# 123 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadPre
# 124 "data/maps/MareS3/scripts.pory"
	closemessage
# 125 "data/maps/MareS3/scripts.pory"
	trainerbattle_no_intro TRAINER_TEST_BATTLE, MareS3_Text_LotusHeadLost
# 126 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_HideLotusHeads
	end

MareS3_Script_LotusHead_1:
# 116 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ResetLotusHeads
	return

MareS3_Script_LotusHead_5:
# 121 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_6:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MareS3_Script_LotusHead_11
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_7:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_2, MareS3_Script_LotusHead_6
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_10:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_5, MareS3_Script_LotusHead_15
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_11:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_4, MareS3_Script_LotusHead_10
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_14:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_7, MareS3_Script_LotusHead_5
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_15:
# 120 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_6, MareS3_Script_LotusHead_14
	goto MareS3_Script_LotusHead_4


MareS3_Script_HideLotusHeads::
# 133 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_HideLotusHeads_2
MareS3_Script_HideLotusHeads_1:
# 139 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_HideLotusHeads_5
MareS3_Script_HideLotusHeads_4:
# 145 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_HideLotusHeads_8
MareS3_Script_HideLotusHeads_7:
# 151 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_HideLotusHeads_11
MareS3_Script_HideLotusHeads_10:
# 157 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_HideLotusHeads_14
MareS3_Script_HideLotusHeads_13:
# 163 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_HideLotusHeads_17
MareS3_Script_HideLotusHeads_16:
# 169 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_HideLotusHeads_20
MareS3_Script_HideLotusHeads_19:
	return

MareS3_Script_HideLotusHeads_2:
# 134 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 135 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 136 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_INVISIBLE
# 137 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_Script_HideLotusHeads_1

MareS3_Script_HideLotusHeads_5:
# 140 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 141 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 142 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_INVISIBLE
# 143 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_Script_HideLotusHeads_4

MareS3_Script_HideLotusHeads_8:
# 146 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 147 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 148 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_INVISIBLE
# 149 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_Script_HideLotusHeads_7

MareS3_Script_HideLotusHeads_11:
# 152 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 153 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 154 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_INVISIBLE
# 155 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_Script_HideLotusHeads_10

MareS3_Script_HideLotusHeads_14:
# 158 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 159 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 160 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_INVISIBLE
# 161 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_Script_HideLotusHeads_13

MareS3_Script_HideLotusHeads_17:
# 164 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 165 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 166 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_INVISIBLE
# 167 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_Script_HideLotusHeads_16

MareS3_Script_HideLotusHeads_20:
# 170 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 171 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
# 172 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_INVISIBLE
# 173 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	goto MareS3_Script_HideLotusHeads_19


MareS3_Script_ResetLotusHeads::
# 180 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusReset
# 182 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/MareS3/scripts.pory"
	playfanfare MUS_HEAL
# 184 "data/maps/MareS3/scripts.pory"
	waitfanfare
# 185 "data/maps/MareS3/scripts.pory"
	special HealPlayerParty
# 186 "data/maps/MareS3/scripts.pory"
	callnative UpdateFollowingPokemon
# 188 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ClearLotusHeadFlags
# 190 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_RemoveLotusHeads
# 192 "data/maps/MareS3/scripts.pory"
	callnative ResetLotusHeads
# 194 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 196 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_ClearLotusHeadFlags::
# 200 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_1
# 201 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_2
# 202 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_3
# 203 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_4
# 204 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_5
# 205 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_6
# 206 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_7
	return


MareS3_Script_RemoveLotusHeads::
# 211 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 212 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 213 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 214 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 215 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 216 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 217 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Script_AddLotusHeads::
# 222 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
# 223 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
# 224 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
# 225 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
# 226 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
# 227 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
# 228 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Text_LotusHeadIntro::
# 232 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"

MareS3_Text_LotusHeadPre::
# 236 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusHeadLost::
# 240 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusReset::
# 244 "data/maps/MareS3/scripts.pory"
	.string "$"
