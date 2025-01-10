ArtCanvas_MapScripts::
# 3 "data//maps/ArtCanvas/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ArtCanvas_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data//maps/ArtCanvas/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArtCanvas_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ArtCanvas_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/ArtCanvas/scripts.pory"
	call ArtCanvas_EventScript_OnResume
	return

ArtCanvas_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data//maps/ArtCanvas/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 0, ArtCanvas_EventScript_Intro
# 9 "data//maps/ArtCanvas/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 100, ArtCanvas_EventScript_Intro
# 11 "data//maps/ArtCanvas/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, ArtCanvas_EventScript_Outro
# 12 "data//maps/ArtCanvas/scripts.pory"
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, ArtCanvas_EventScript_Outro
	.2byte 0


ArtCanvas_EventScript_OnResume::
# 18 "data//maps/ArtCanvas/scripts.pory"
	setstepcallback STEP_CB_CANVAS
	end


ArtCanvas_EventScript_Intro::
# 23 "data//maps/ArtCanvas/scripts.pory"
	lock
# 24 "data//maps/ArtCanvas/scripts.pory"
	msgbox ArtCanvas_Text_Intro
# 25 "data//maps/ArtCanvas/scripts.pory"
	closemessage
# 26 "data//maps/ArtCanvas/scripts.pory"
	compare VAR_CANVAS_STEP_COUNTER, 0
	goto_if_eq ArtCanvas_EventScript_Intro_2
# 29 "data//maps/ArtCanvas/scripts.pory"
	setvar VAR_CANVAS_STEP_COUNTER, 101
ArtCanvas_EventScript_Intro_1:
# 31 "data//maps/ArtCanvas/scripts.pory"
	release
	end

ArtCanvas_EventScript_Intro_2:
# 27 "data//maps/ArtCanvas/scripts.pory"
	setvar VAR_CANVAS_STEP_COUNTER, 1
	goto ArtCanvas_EventScript_Intro_1


ArtCanvas_EventScript_Outro::
# 36 "data//maps/ArtCanvas/scripts.pory"
	lock
# 37 "data//maps/ArtCanvas/scripts.pory"
	msgbox ArtCanvas_Text_Outro
# 38 "data//maps/ArtCanvas/scripts.pory"
	closemessage
# 39 "data//maps/ArtCanvas/scripts.pory"
	compare VAR_CANVAS_STEP_COUNTER, 17
	goto_if_eq ArtCanvas_EventScript_Outro_2
# 42 "data//maps/ArtCanvas/scripts.pory"
	warpsilent MAP_ARDOR_UNI_ART_CLASS, 5, 3
ArtCanvas_EventScript_Outro_1:
# 44 "data//maps/ArtCanvas/scripts.pory"
	waitstate
# 45 "data//maps/ArtCanvas/scripts.pory"
	release
	end

ArtCanvas_EventScript_Outro_2:
# 40 "data//maps/ArtCanvas/scripts.pory"
	warpsilent MAP_ARDOR_UNI_ART_CLASS, 7, 3
	goto ArtCanvas_EventScript_Outro_1


ArtCanvas_Text_Intro::
# 49 "data//maps/ArtCanvas/scripts.pory"
	.string "Iam est tempus pingere. Fiat ars!$"

ArtCanvas_Text_Outro::
# 54 "data//maps/ArtCanvas/scripts.pory"
	.string "Pictura tua pulchra est.$"
