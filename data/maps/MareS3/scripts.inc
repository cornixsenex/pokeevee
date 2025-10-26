MareS3_MapScripts::
# 17 "data/maps/MareS3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS3_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


MareS3_Script_Transition_MareTranquillum::
# 31 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 1
# 32 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_MareSubtropicum::
# 37 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 2
# 38 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_Transition_IslaHerbaBona::
# 43 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_5, 3
# 44 "data/maps/MareS3/scripts.pory"
	special TransitionMapMusic
# 45 "data/maps/MareS3/scripts.pory"
	special ShowMapNamePopup
	return


MareS3_Script_ShowLotusEaters::
# 49 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_ULYSSES, 29, 60
# 50 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_ULYSSES, MOVEMENT_TYPE_WANDER_AROUND
# 51 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD1, 29, 56
# 52 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD1, MOVEMENT_TYPE_WANDER_AROUND
# 53 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD2, 31, 58
# 54 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD2, MOVEMENT_TYPE_WANDER_AROUND
# 55 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD3, 33, 61
# 56 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD3, MOVEMENT_TYPE_WANDER_AROUND
# 57 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD4, 31, 64
# 58 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD4, MOVEMENT_TYPE_WANDER_AROUND
# 59 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD5, 27, 63
# 60 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD5, MOVEMENT_TYPE_WANDER_AROUND
# 61 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD6, 26, 60
# 62 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD6, MOVEMENT_TYPE_WANDER_AROUND
# 63 "data/maps/MareS3/scripts.pory"
	setobjectxyperm LOCALID_MARES3_LOTUSHEAD7, 27, 57
# 64 "data/maps/MareS3/scripts.pory"
	setobjectmovementtype LOCALID_MARES3_LOTUSHEAD7, MOVEMENT_TYPE_WANDER_AROUND
	return


MareS3_Script_Ulysses::
	return


MareS3_Script_LotusHead1::
# 74 "data/maps/MareS3/scripts.pory"
	setvar VAR_TEMP_A, 1
# 75 "data/maps/MareS3/scripts.pory"
	call MareS3_Script_LotusHead
	return


MareS3_Script_LotusHead::
# 80 "data/maps/MareS3/scripts.pory"
	faceplayer
# 82 "data/maps/MareS3/scripts.pory"
	msgbox MareS3_Text_LotusHeadIntro
	return


MareS3_Text_LotusHeadIntro::
# 87 "data/maps/MareS3/scripts.pory"
	.string "Hey man, you seem, like, really stressed\n"
	.string "out. This is Isla Herba Bona, man.\l"
	.string "Nobody should have any worries around\l"
	.string "here, man. You wanna, like, eat some\l"
	.string "Lotus and take your mind off things?$"
