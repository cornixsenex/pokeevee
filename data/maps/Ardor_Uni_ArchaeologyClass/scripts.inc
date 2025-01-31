Ardor_Uni_ArchaeologyClass_MapScripts::
# 7 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_OnTransition
	return

Ardor_Uni_ArchaeologyClass_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	map_script_2 VAR_INDY_STATE, 0, Ardor_Uni_ArchaeologyClass_EventScript_FaceTA
# 14 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	map_script_2 VAR_INDY_STATE, 1, Ardor_Uni_ArchaeologyClass_EventScript_DoIndyReveal
	.2byte 0


Ardor_Uni_ArchaeologyClass_OnTransition::
# 23 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	switch VAR_INDY_STATE
# 24 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 0, Ardor_Uni_ArchaeologyClass_OnTransition_3
# 27 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 1, Ardor_Uni_ArchaeologyClass_OnTransition_4
# 30 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 2, Ardor_Uni_ArchaeologyClass_OnTransition_5
# 32 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 3, Ardor_Uni_ArchaeologyClass_OnTransition_6
# 36 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
# 37 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
Ardor_Uni_ArchaeologyClass_OnTransition_1:
	end

Ardor_Uni_ArchaeologyClass_OnTransition_3:
# 25 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
# 26 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_SetupTA
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_4:
# 28 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
# 29 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	clearflag FLAG_CLASS_LEAF
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_5:
# 31 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1

Ardor_Uni_ArchaeologyClass_OnTransition_6:
# 33 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels
# 34 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
	goto Ardor_Uni_ArchaeologyClass_OnTransition_1


Ardor_Uni_ArchaeologyClass_EventScript_FaceTA::
# 43 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	turnobject 6, DIR_SOUTH
	end


Ardor_Uni_ArchaeologyClass_EventScript_TA::
# 48 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	lock
# 49 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	faceplayer
# 50 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	switch VAR_INDY_STATE
# 51 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 0, Ardor_Uni_ArchaeologyClass_EventScript_TA_3
# 77 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 1, Ardor_Uni_ArchaeologyClass_EventScript_TA_4
# 81 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 2, Ardor_Uni_ArchaeologyClass_EventScript_TA_5
# 85 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	case 3, Ardor_Uni_ArchaeologyClass_EventScript_TA_6
# 90 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_EventScript_TA_Text_1
# 91 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
Ardor_Uni_ArchaeologyClass_EventScript_TA_1:
# 93 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	release
	end

Ardor_Uni_ArchaeologyClass_EventScript_TA_3:
# 53 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_ARCHAEOLOGY
	goto_if 1, Ardor_Uni_ArchaeologyClass_EventScript_TA_9
# 57 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	checkitem ITEM_ANCIENT_LAMP
# 58 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_ArchaeologyClass_EventScript_TA_14
Ardor_Uni_ArchaeologyClass_EventScript_TA_13:
# 61 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	goto_if_set FLAG_ARDOR_ARCHAEOLOGY_INTRO, Ardor_Uni_ArchaeologyClass_EventScript_TA_17
# 67 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_ClassBegin
# 68 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 69 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_ClassBegun
# 70 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 71 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_ARDOR_ARCHAEOLOGY_INTRO
Ardor_Uni_ArchaeologyClass_EventScript_TA_8:
# 75 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 76 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_1

Ardor_Uni_ArchaeologyClass_EventScript_TA_4:
# 79 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_TAInDesk
# 80 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_1

Ardor_Uni_ArchaeologyClass_EventScript_TA_5:
# 83 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_TARebel
# 84 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_1

Ardor_Uni_ArchaeologyClass_EventScript_TA_6:
# 87 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_EventScript_TA_Text_0
# 88 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_1

Ardor_Uni_ArchaeologyClass_EventScript_TA_9:
# 54 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_ClassFinished
# 55 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_8

Ardor_Uni_ArchaeologyClass_EventScript_TA_12:
# 59 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_TATest
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_8

Ardor_Uni_ArchaeologyClass_EventScript_TA_14:
# 58 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	goto_if_set FLAG_ARDOR_ARCHAEOLOGY_INTRO, Ardor_Uni_ArchaeologyClass_EventScript_TA_12
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_13

Ardor_Uni_ArchaeologyClass_EventScript_TA_17:
# 63 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_ClassBegun
# 64 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_ArchaeologyClass_EventScript_TA_8


Ardor_Uni_ArchaeologyClass_EventScript_TATest::
# 98 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_FoundLamp
# 99 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 100 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeitem ITEM_ANCIENT_LAMP
# 101 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_TABattleIntro
# 102 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 103 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_ARCHAEOLOGY, Ardor_Uni_ArchaeologyClass_Text_TABattleLost
# 104 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 105 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_ClassFinished
# 106 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_ArchaeologyClass_EventScript_SetupTA::
# 111 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setobjectxyperm 6, 6, 3
# 112 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_CLASS_LEAF
# 113 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_CLASS_INDY
	return


Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents::
# 117 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_ARCHAELOGY_CLASS_HIDESTUDENTS
# 118 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 1
# 119 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 2
# 120 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 3
# 121 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 4
# 122 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 5
# 123 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 6
# 124 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 7
# 125 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 8
# 126 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 9
	return


Ardor_Uni_ArchaeologyClass_EventScript_RemoveRebels::
# 131 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
# 132 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 11
# 133 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 12
	return


Ardor_Uni_ArchaeologyClass_EventScript_AddRebels::
# 138 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setvar VAR_INDY_STATE, 3
# 139 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	clearflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
# 140 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	addobject 11
# 141 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	showobjectat 11, MAP_ARDOR_UNI_ARCHAEOLOGY_CLASS
# 142 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	addobject 12
# 143 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	showobjectat 12, MAP_ARDOR_UNI_ARCHAEOLOGY_CLASS
	return


Ardor_Uni_ArchaeologyClass_EventScript_DoIndyReveal::
# 148 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	lockall
# 149 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 150 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 151 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ardor_Uni_ArchaeologyClass_Movement_PlayerApproachCutscene
# 152 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 153 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_Cutscene
# 154 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	releaseall
	end


Ardor_Uni_ArchaeologyClass_EventScript_Cutscene::
# 159 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 160 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 161 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 8, 190, 98
# 162 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy1
# 163 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 8
# 164 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 165 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 4, 190, 98
# 166 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf1
# 167 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 168 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 4
# 169 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 8, 190, 98
# 170 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy2
# 171 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 8
# 172 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 174 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 4, 190, 98
# 175 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf2
# 176 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 177 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 4
# 178 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 179 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 180 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_StudentApproach1
# 181 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 182 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Student1
# 183 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 184 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 185 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 4, Ardor_Uni_ArchaeologyClass_Movement_StudentApproach2
# 186 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 187 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Student2
# 188 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 8, 190, 98
# 189 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy3
# 190 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 8
# 191 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 192 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_StudentReturn
# 193 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 4, Ardor_Uni_ArchaeologyClass_Movement_StudentReturn
# 194 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 195 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 8, 190, 98
# 196 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy4
# 197 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 8
# 198 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 200 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RebelReveal
# 201 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 202 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy5
# 203 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
# 204 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 206 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 4, 190, 98
# 207 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf3
# 208 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 209 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 4
# 211 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 212 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy6
# 213 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
# 214 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 216 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 4, 190, 98
# 217 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf4
# 218 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 219 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 4
# 221 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 222 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 224 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 225 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy7
# 226 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 227 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
# 229 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 4, 190, 98
# 230 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Leaf5
# 231 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 232 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 4
# 234 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 235 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_Indy8
# 236 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 237 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
	return


Ardor_Uni_ArchaeologyClass_EventScript_RebelReveal::
# 243 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 2, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 244 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 1, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 245 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 246 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_RemoveStudents
# 247 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_AddRebels
# 248 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 12, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 249 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 11, Ardor_Uni_ArchaeologyClass_Movement_Spin
# 250 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 251 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 12, Common_Movement_FaceDown
	return


Ardor_Uni_ArchaeologyClass_EventScript_Maxie::
# 256 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	lock
# 257 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	faceplayer
# 258 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 259 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Ardor_Uni_ArchaeologyClass_EventScript_Maxie_2
# 269 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieNeedFlash
# 270 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 271 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1:
# 273 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	release
	end

Ardor_Uni_ArchaeologyClass_EventScript_Maxie_2:
# 260 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieAsk, MSGBOX_YESNO
# 261 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_ArchaeologyClass_EventScript_Maxie_5
# 264 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieWait
# 265 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 266 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
	goto Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1

Ardor_Uni_ArchaeologyClass_EventScript_Maxie_5:
# 262 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	call Ardor_Uni_ArchaeologyClass_EventScript_BeginAttack
	goto Ardor_Uni_ArchaeologyClass_EventScript_Maxie_1


Ardor_Uni_ArchaeologyClass_EventScript_BeginAttack::
# 278 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setvar VAR_INDY_STATE, 4
# 279 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	clearflag FLAG_PYRAMIDS_HIDEMAXIE
# 280 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieBeginAttack
# 281 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 282 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
# 283 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	applymovement 11, Ardor_Uni_ArchaeologyClass_Movement_Rebel1Exit
# 284 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	waitmovement 0
# 285 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 11
# 286 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	load_field_pic 9, 190, 98
# 287 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	msgbox Ardor_Uni_ArchaeologyClass_Text_MaxieExit
# 288 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	closemessage
# 289 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	destroy_field_pic 9
# 290 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	fadescreen 1
# 291 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	removeobject 12
# 292 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	setflag FLAG_ARCHAELOGY_CLASS_HIDEREBELS
# 293 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	fadescreen 0
	return


# 297 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_Spin:
# 298 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_left
# 299 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_up
# 300 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_right
# 301 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_down
# 302 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_left
# 303 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_up
# 304 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_down
# 305 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_left
# 306 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_up
	step_end

# 309 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_StudentApproach1:
# 310 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_right
# 311 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 311 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 312 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_right
	step_end

# 315 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_StudentApproach2:
# 316 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_diag_northeast
# 317 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 318 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_left
	step_end

# 321 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_StudentReturn:
# 322 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
# 322 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
# 323 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_left
# 324 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	face_up
	step_end

# 327 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_Rebel1Exit:
# 328 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_right
# 328 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_right
# 328 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_right
# 328 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_right
# 329 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
# 329 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
# 329 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
# 329 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_down
	step_end

# 332 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
Ardor_Uni_ArchaeologyClass_Movement_PlayerApproachCutscene:
# 333 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 333 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 333 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
# 334 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_diag_northwest
# 335 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	walk_up
	step_end

Ardor_Uni_ArchaeologyClass_EventScript_TA_Text_0:
# 87 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "VAR_INDY_STATE is 3 rn$"

Ardor_Uni_ArchaeologyClass_EventScript_TA_Text_1:
# 90 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "VAR_INDY_STATE is over 3 in TA switcheroo$"

Ardor_Uni_ArchaeologyClass_Text_Indy1::
# 338 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Now please sit down so our class may\n"
	.string "begin$"

Ardor_Uni_ArchaeologyClass_Text_Leaf1::
# 342 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "I've just told you, we're not here for\n"
	.string "the class. We need your help to...$"

Ardor_Uni_ArchaeologyClass_Text_Indy2::
# 346 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Now is not the time! My patience is\n"
	.string "grown thin. This is a school! If you will\l"
	.string "not obey I'll get the dean.$"

Ardor_Uni_ArchaeologyClass_Text_Leaf2::
# 350 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "I'll not sit down, we need you general.\n"
	.string "Some years ago you fought with my\l"
	.string "father and now he begs your help to\l"
	.string "fight again. The Rockets have...$"

Ardor_Uni_ArchaeologyClass_Text_Student1::
# 354 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "She knows not what she says!$"

Ardor_Uni_ArchaeologyClass_Text_Student2::
# 358 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Just say the word and we'll take care of\n"
	.string "her!$"

Ardor_Uni_ArchaeologyClass_Text_Indy3::
# 362 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Be quiet and both of you go sit down.$"

Ardor_Uni_ArchaeologyClass_Text_Indy4::
# 366 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Our time has come now we must show\n"
	.string "ourselves.$"

Ardor_Uni_ArchaeologyClass_Text_Indy5::
# 370 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "I hope you will forgive us our disguise\n"
	.string "and please allow us an introduction. My\l"
	.string "name truly is Magnus Maximus, I am the\l"
	.string "leader of this rebel band. When we were\l"
	.string "forced to hide from the Rockets I took\l"
	.string "up that disguise to lie in wait. As fate\l"
	.string "would have it I had asked for\l"
	.string "{PLAYER} to meet me here with the\l"
	.string "intention of recruiting him into our\l"
	.string "rebel band but he was here for me.$"

Ardor_Uni_ArchaeologyClass_Text_Leaf3::
# 374 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "So you'll do it!$"

Ardor_Uni_ArchaeologyClass_Text_Indy6::
# 378 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "It is our only purpose to destroy the\n"
	.string "Rocket Party and retake our land. Now\l"
	.string "tell me girl who is your father and what\l"
	.string "is our need of urgent action now?$"

Ardor_Uni_ArchaeologyClass_Text_Leaf4::
# 382 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "My father served with you in the great\n"
	.string "war and we have travelled far, from\l"
	.string "Clara's Church to bring you the most\l"
	.string "tragic horrid news. The Rockets have\l"
	.string "imprisoned Mew itself$"

Ardor_Uni_ArchaeologyClass_Text_Indy7::
# 386 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Impossible!$"

Ardor_Uni_ArchaeologyClass_Text_Leaf5::
# 390 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "{PLAYER} saw it for himself$"

Ardor_Uni_ArchaeologyClass_Text_Indy8::
# 394 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "That certainly explains the urgency. We\n"
	.string "must make our attack quickly before\l"
	.string "they end the universe with this evil.\l"
	.string "But still attacking now would be\l"
	.string "foolish. We need many allies if we shall\l"
	.string "win. Many of our best men are being held\l"
	.string "in a Rocket prison deep underground.\l"
	.string "With your help {PLAYER} we'll need to\l"
	.string "free those men. The prison is inside the\l"
	.string "labyrinth which only heroes can exit\l"
	.string "alive. Many foul creatures and a wicked\l"
	.string "maze mean certain death to most who\l"
	.string "travel there. I knew one day I'd need to\l"
	.string "free those men and in my disguise as\l"
	.string "the professor I made many daring trips\l"
	.string "to the cave. I know the way to their\l"
	.string "filthy prison and I will guide you\l"
	.string "through the labyrinth. However once we\l"
	.string "commonece the attack there will be no\l"
	.string "chance for us to turn back. When you\l"
	.string "are ready {PLAYER} we shall depart.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieAsk::
# 398 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Are you ready to start the battle\n"
	.string "{PLAYER}?$"

Ardor_Uni_ArchaeologyClass_Text_MaxieWait::
# 402 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "We'll wait for you to be fully prepared.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieNeedFlash::
# 406 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "I'm sorry {PLAYER} you're not ready to\n"
	.string "go. Before we travel to the depths of\l"
	.string "hell you must learn how to use the HM\l"
	.string "FLASH.$"

Ardor_Uni_ArchaeologyClass_Text_MaxieBeginAttack::
# 410 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "The die is cast. ALEA IACTA EST. Arise\n"
	.string "arise rebels of the desert! Your time is\l"
	.string "now rise up and sieze the school!$"

Ardor_Uni_ArchaeologyClass_Text_MaxieExit::
# 414 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Now hurry {PLAYER} and meet me at the\n"
	.string "cave entrance on the far south side of\l"
	.string "the sand.$"

Ardor_Uni_ArchaeologyClass_Text_ClassBegin::
# 418 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Salve puer. Magister Indianus in\n"
	.string "pyramide est. Marcus adjustor Indiani\l"
	.string "sum. Sine magistro archaeologiam doceo.$"

Ardor_Uni_ArchaeologyClass_Text_ClassBegun::
# 422 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "In eremis circum Ardentem multae sunt\n"
	.string "reliquiae. Reperi thesaurum anteanum et\l"
	.string "reveni cum eam.$"

Ardor_Uni_ArchaeologyClass_Text_TAInDesk::
# 426 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Revenit magister Indianus.$"

Ardor_Uni_ArchaeologyClass_Text_TARebel::
# 430 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Iam scis, rebelles sumus.$"

Ardor_Uni_ArchaeologyClass_Text_FoundLamp::
# 434 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Mea Hercule! Reperisti lampadem\n"
	.string "anticam!$"

Ardor_Uni_ArchaeologyClass_Text_TABattleIntro::
# 438 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Tempus iam est examinis.$"

Ardor_Uni_ArchaeologyClass_Text_TABattleLost::
# 442 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Omnia quod scio tibi docui.$"

Ardor_Uni_ArchaeologyClass_Text_ClassFinished::
# 446 "data//maps/Ardor_Uni_ArchaeologyClass/scripts.pory"
	.string "Congratulatio! Iam studuisti\n"
	.string "Archaeologiam.$"
