MareS9_MapScripts::
# 12 "data/maps/MareS9/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS9_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/MareS9/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS9_F
	return


MareS9_Script_Transition_MareTropicum::
# 19 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 3
# 20 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 21 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_MareSubtropicum::
# 25 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 2
# 26 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 27 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaHesperia::
# 31 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 4
# 32 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 33 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_Tropicana::
# 37 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 5
# 38 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 39 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_Transition_IslaTropica::
# 43 "data/maps/MareS9/scripts.pory"
	setvar VAR_TEMP_5, 1
# 44 "data/maps/MareS9/scripts.pory"
	special TransitionMapMusic
# 45 "data/maps/MareS9/scripts.pory"
	special ShowMapNamePopup
	return


MareS9_Script_TestSign::
# 52 "data/maps/MareS9/scripts.pory"
	lock
# 53 "data/maps/MareS9/scripts.pory"
	msgbox MareS9_Text_TestSign, MSGBOX_SIGN
# 54 "data/maps/MareS9/scripts.pory"
	release
	end


MareS9_Text_TestSign::
# 58 "data/maps/MareS9/scripts.pory"
	.string "abcdefghijklmnopqrstuvwxyz\n"
	.string "abcdefghijklmnopqrstuvwxyz\l"
	.string "abcdefghijklmnopqrstuvwxyz\l"
	.string "abcdefghijklmnopqrstuvwxyz\l"
	.string "abcdefghijklmnopqrstuvwxyz\l"
	.string "abcdefghijklmnopqrstuvwxyz$"
