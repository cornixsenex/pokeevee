ArtCanvas_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ArtCanvas_MapScripts_MAP_SCRIPT_ON_RESUME
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ArtCanvas_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ArtCanvas_MapScripts_MAP_SCRIPT_ON_RESUME:
	call ArtCanvas_EventScript_OnResume
	return

ArtCanvas_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CANVAS_STEP_COUNTER, 0, ArtCanvas_EventScript_Intro
	map_script_2 VAR_CANVAS_STEP_COUNTER, 100, ArtCanvas_EventScript_Intro
	map_script_2 VAR_CANVAS_STEP_COUNTER, 17, ArtCanvas_EventScript_Outro
	map_script_2 VAR_CANVAS_STEP_COUNTER, 117, ArtCanvas_EventScript_Outro
	.2byte 0


ArtCanvas_EventScript_OnResume::
	setstepcallback STEP_CB_CANVAS
	end


ArtCanvas_EventScript_Intro::
	lock
	msgbox ArtCanvas_Text_Intro
	closemessage
	compare VAR_CANVAS_STEP_COUNTER, 0
	goto_if_eq ArtCanvas_EventScript_Intro_2
	setvar VAR_CANVAS_STEP_COUNTER, 101
ArtCanvas_EventScript_Intro_1:
	release
	end

ArtCanvas_EventScript_Intro_2:
	setvar VAR_CANVAS_STEP_COUNTER, 1
	goto ArtCanvas_EventScript_Intro_1


ArtCanvas_EventScript_Outro::
	lock
	msgbox ArtCanvas_Text_Outro
	closemessage
	compare VAR_CANVAS_STEP_COUNTER, 17
	goto_if_eq ArtCanvas_EventScript_Outro_2
	warpsilent MAP_ARDOR_UNI_ART_CLASS, 5, 3
ArtCanvas_EventScript_Outro_1:
	waitstate
	release
	end

ArtCanvas_EventScript_Outro_2:
	warpsilent MAP_ARDOR_UNI_ART_CLASS, 7, 3
	goto ArtCanvas_EventScript_Outro_1


ArtCanvas_Text_Intro::
	.string "Iam est tempus pingere. Fiat ars!$"

ArtCanvas_Text_Outro::
	.string "Pictura tua pulchra est.$"
