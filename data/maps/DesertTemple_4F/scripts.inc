DesertTemple_4F_MapScripts::
	.byte 0


DesertTemple_4F_EventScript_Trigger1::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_1, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger1_2
DesertTemple_4F_EventScript_Trigger1_1:
	end

DesertTemple_4F_EventScript_Trigger1_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger1_1


DesertTemple_4F_EventScript_Trigger2::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_2, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger2_2
DesertTemple_4F_EventScript_Trigger2_1:
	end

DesertTemple_4F_EventScript_Trigger2_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger2_1


DesertTemple_4F_EventScript_Trigger3::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_3, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger3_2
DesertTemple_4F_EventScript_Trigger3_1:
	end

DesertTemple_4F_EventScript_Trigger3_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger3_1


DesertTemple_4F_EventScript_Trigger4::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_4, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger4_2
DesertTemple_4F_EventScript_Trigger4_1:
	end

DesertTemple_4F_EventScript_Trigger4_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger4_1


DesertTemple_4F_EventScript_Trigger5::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_5, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger5_2
DesertTemple_4F_EventScript_Trigger5_1:
	end

DesertTemple_4F_EventScript_Trigger5_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger5_1


DesertTemple_4F_EventScript_Trigger6::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_6, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger6_2
DesertTemple_4F_EventScript_Trigger6_1:
	end

DesertTemple_4F_EventScript_Trigger6_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger6_1


DesertTemple_4F_EventScript_Trigger7::
	call DesertTemple_4F_EventScript_ClearAllVars
	setvar VAR_TEMP_7, 1
	specialvar VAR_RESULT, IsDesertTemple4FSolved
	compare VAR_RESULT, TRUE
	goto_if_eq DesertTemple_4F_EventScript_Trigger7_2
DesertTemple_4F_EventScript_Trigger7_1:
	end

DesertTemple_4F_EventScript_Trigger7_2:
	call DesertTemple_4F_EventScript_ClearPuzzle
	goto DesertTemple_4F_EventScript_Trigger7_1


DesertTemple_4F_EventScript_ClearAllVars::
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	setvar VAR_TEMP_3, 0
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_5, 0
	setvar VAR_TEMP_6, 0
	setvar VAR_TEMP_7, 0
	return


DesertTemple_4F_EventScript_SetAllVars::
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, 1
	setvar VAR_TEMP_3, 1
	setvar VAR_TEMP_4, 1
	setvar VAR_TEMP_5, 1
	setvar VAR_TEMP_6, 1
	setvar VAR_TEMP_7, 1
	return


DesertTemple_4F_EventScript_ClearPuzzle::
	setflag FLAG_TEMP_1
	call DesertTemple_4F_EventScript_SetAllVars
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	removeobject 5
	waitmovement 0
	return

