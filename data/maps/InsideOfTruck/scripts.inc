InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, InsideofTruck_OnFrame
	.byte 0

InsideOfTruck_OnLoad:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_OnResume:
	setstepcallback STEP_CB_TRUCK
	end

InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, InsideOfTruck_EventScript_SetIntroFlagsMale
	goto_if_eq VAR_RESULT, FEMALE, InsideOfTruck_EventScript_SetIntroFlagsFemale
	end

InsideOfTruck_EventScript_SetIntroFlagsMale::
	setdynamicwarp MAP_URBIA_TRUCK_DEPOT, 5, 4
	releaseall
	end

InsideOfTruck_EventScript_SetIntroFlagsFemale::
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_Text_BoxPrintedWithMonLogo, MSGBOX_SIGN
	end

InsideofTruck_OnFrame::
    map_script_2 VAR_TEMP_1, 0, InsideOfTruck_Script_Arrival
    .2byte 0

InsideOfTruck_Script_Arrival::
    setvar VAR_TEMP_1, 1
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
    waitmovement 0
	msgbox InsideOfTruck_Text_Arrival, MSGBOX_DEFAULT
    closemessage
    end

InsideOfTruck_Text_BoxPrintedWithMonLogo:
	.string "The box is printed with UKTC.\p"
	.string "It must belong to the United\n"
	.string "Kashmir Truck Company.$"

InsideOfTruck_Text_Arrival:
	.string "We're here! Now let's get you inside.\n"
	.string "Hurry! We can't let anyone see you\l"
	.string "with us.$"
