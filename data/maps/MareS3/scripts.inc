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


MareS3_Script_LotusHead2::
# 111 "data/maps/MareS3/scripts.pory"
	faceplayer
# 112 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_2
# 113 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead3::
# 117 "data/maps/MareS3/scripts.pory"
	faceplayer
# 118 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_3
# 119 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead4::
# 123 "data/maps/MareS3/scripts.pory"
	faceplayer
# 124 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_4
# 125 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead5::
# 129 "data/maps/MareS3/scripts.pory"
	faceplayer
# 130 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_5
# 131 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead6::
# 135 "data/maps/MareS3/scripts.pory"
	faceplayer
# 136 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_6
# 137 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead7::
# 141 "data/maps/MareS3/scripts.pory"
	faceplayer
# 142 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_7
# 143 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 149 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro, MSGBOX_YESNO
# 151 "data/maps/MareS3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MareS3_Script_LotusHead_1
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_1, MareS3_Script_LotusHead_7
MareS3_Script_LotusHead_4:
# 159 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadPre
# 160 "data/maps/MareS3/scripts.pory"
	closemessage
# 161 "data/maps/MareS3/scripts.pory"
	trainerbattle_no_intro TRAINER_TEST_BATTLE, MareS3_Text_LotusHeadLost
# 162 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_HideLotusHeads
	end

MareS3_Script_LotusHead_1:
# 152 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ResetLotusHeads
	return

MareS3_Script_LotusHead_5:
# 157 "data/maps/MareS3/scripts.pory"
	setflag FLAG_TEMP_1
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_6:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_3, MareS3_Script_LotusHead_11
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_7:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_2, MareS3_Script_LotusHead_6
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_10:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_5, MareS3_Script_LotusHead_15
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_11:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_4, MareS3_Script_LotusHead_10
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_14:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_7, MareS3_Script_LotusHead_5
	goto MareS3_Script_LotusHead_4

MareS3_Script_LotusHead_15:
# 156 "data/maps/MareS3/scripts.pory"
	goto_if_unset FLAG_TEMP_6, MareS3_Script_LotusHead_14
	goto MareS3_Script_LotusHead_4


MareS3_Script_HideLotusHeads::
# 169 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MareS3_Script_HideLotusHeads_2
MareS3_Script_HideLotusHeads_1:
# 175 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_2, MareS3_Script_HideLotusHeads_5
MareS3_Script_HideLotusHeads_4:
# 181 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_3, MareS3_Script_HideLotusHeads_8
MareS3_Script_HideLotusHeads_7:
# 187 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_4, MareS3_Script_HideLotusHeads_11
MareS3_Script_HideLotusHeads_10:
# 193 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_5, MareS3_Script_HideLotusHeads_14
MareS3_Script_HideLotusHeads_13:
# 199 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_6, MareS3_Script_HideLotusHeads_17
MareS3_Script_HideLotusHeads_16:
# 205 "data/maps/MareS3/scripts.pory"
	goto_if_set FLAG_TEMP_7, MareS3_Script_HideLotusHeads_20
MareS3_Script_HideLotusHeads_19:
	return

MareS3_Script_HideLotusHeads_2:
# 170 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 171 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 172 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_INVISIBLE
# 173 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
	goto MareS3_Script_HideLotusHeads_1

MareS3_Script_HideLotusHeads_5:
# 176 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 177 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 178 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_INVISIBLE
# 179 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
	goto MareS3_Script_HideLotusHeads_4

MareS3_Script_HideLotusHeads_8:
# 182 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 183 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 184 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_INVISIBLE
# 185 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
	goto MareS3_Script_HideLotusHeads_7

MareS3_Script_HideLotusHeads_11:
# 188 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 189 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 190 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_INVISIBLE
# 191 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
	goto MareS3_Script_HideLotusHeads_10

MareS3_Script_HideLotusHeads_14:
# 194 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 195 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 196 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_INVISIBLE
# 197 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
	goto MareS3_Script_HideLotusHeads_13

MareS3_Script_HideLotusHeads_17:
# 200 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 201 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 202 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_INVISIBLE
# 203 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
	goto MareS3_Script_HideLotusHeads_16

MareS3_Script_HideLotusHeads_20:
# 206 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 207 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
# 208 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_INVISIBLE
# 209 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	goto MareS3_Script_HideLotusHeads_19


MareS3_Script_ResetLotusHeads::
# 216 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusReset
# 218 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 219 "data/maps/MareS3/scripts.pory"
	lockall
# 220 "data/maps/MareS3/scripts.pory"
	playfanfare MUS_HEAL
# 221 "data/maps/MareS3/scripts.pory"
	waitfanfare
# 222 "data/maps/MareS3/scripts.pory"
	special HealPlayerParty
# 223 "data/maps/MareS3/scripts.pory"
	callnative UpdateFollowingPokemon
# 225 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_ClearLotusHeadFlags
# 227 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_RemoveLotusHeads
# 229 "data/maps/MareS3/scripts.pory"
	callnative ResetLotusHeads
# 231 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_AddLotusHeads
# 234 "data/maps/MareS3/scripts.pory"
	releaseall
# 235 "data/maps/MareS3/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 237 "data/maps/MareS3/scripts.pory"
	closemessage
	end


MareS3_Script_ClearLotusHeadFlags::
# 244 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_1
# 245 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_2
# 246 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_3
# 247 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_4
# 248 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_5
# 249 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_6
# 250 "data/maps/MareS3/scripts.pory"
	clearflag FLAG_TEMP_7
	return


MareS3_Script_RemoveLotusHeads::
# 255 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD1
# 256 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD2
# 257 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD3
# 258 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD4
# 259 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD5
# 260 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD6
# 261 "data/maps/MareS3/scripts.pory"
	removeobject LOCALID_MARES3_LOTUSHEAD7
# 262 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 0, 0
# 263 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 0, 0
# 264 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 0, 0
# 265 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 0, 0
# 266 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 0, 0
# 267 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 0, 0
# 268 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 0, 0
	return


MareS3_Script_AddLotusHeads::
# 273 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD1
# 274 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD2
# 275 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD3
# 276 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD4
# 277 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD5
# 278 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD6
# 279 "data/maps/MareS3/scripts.pory"
	addobject LOCALID_MARES3_LOTUSHEAD7
	return


MareS3_Text_LotusHeadIntro::
# 283 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"

MareS3_Text_LotusHeadPre::
# 287 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusHeadLost::
# 291 "data/maps/MareS3/scripts.pory"
	.string "$"

MareS3_Text_LotusReset::
# 295 "data/maps/MareS3/scripts.pory"
	.string "$"
