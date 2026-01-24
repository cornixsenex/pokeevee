BikeMapE_MapScripts::
# 6 "data/maps/BikeMapE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 23
	goto_if_eq BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 25
	goto_if_eq BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_SetupUlyssesSceneIntro
	goto BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BikeMapE_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 13 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_SetupUlyssesPostArgus
	return


BikeMapE_Script_SetupUlyssesSceneIntro::
# 20 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ULYSSES, 75, 36
# 21 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ULYSSES, MOVEMENT_TYPE_FACE_UP
# 23 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD1, 74, 35
# 24 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD1, MOVEMENT_TYPE_FACE_DOWN
# 26 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD2, 76, 35
# 27 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD2, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ARGUS, 0, 0
# 30 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ARGUS, MOVEMENT_TYPE_INVISIBLE
	return


BikeMapE_Script_SetupUlyssesPostArgus::
# 36 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ULYSSES, 75, 36
# 37 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ULYSSES, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD1, 74, 35
# 40 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD1, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_SWINEHERD2, 76, 35
# 43 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_SWINEHERD2, MOVEMENT_TYPE_FACE_DOWN
# 45 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ARGUS, 75, 35
# 46 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ARGUS, MOVEMENT_TYPE_FACE_DOWN
	return


BikeMapE_Script_UlyssesSceneIntroA::
# 52 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 1
# 53 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntroB::
# 57 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 2
# 58 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntroC::
# 62 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_TEMP_6, 3
# 63 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesSceneIntro
	return


BikeMapE_Script_UlyssesSceneIntro::
# 68 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 69 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesIntro1
# 70 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 71 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 73 "data/maps/BikeMapE/scripts.pory"
	switch VAR_TEMP_6
# 74 "data/maps/BikeMapE/scripts.pory"
	case 1, BikeMapE_Script_UlyssesSceneIntro_3
# 80 "data/maps/BikeMapE/scripts.pory"
	case 2, BikeMapE_Script_UlyssesSceneIntro_4
# 82 "data/maps/BikeMapE/scripts.pory"
	case 3, BikeMapE_Script_UlyssesSceneIntro_5
# 89 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Script_UlyssesSceneIntro_Text_0
# 90 "data/maps/BikeMapE/scripts.pory"
	closemessage
	end

BikeMapE_Script_UlyssesSceneIntro_1:
# 93 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 95 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_ExclamationMark
# 96 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 98 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_FaceDown
# 99 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 101 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 102 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesIntro2
# 103 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 104 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 106 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_FaceUp
# 107 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 109 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_ULYSSES_STATE, 24
	end

BikeMapE_Script_UlyssesSceneIntro_3:
# 75 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 76 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 77 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 78 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 79 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	goto BikeMapE_Script_UlyssesSceneIntro_1

BikeMapE_Script_UlyssesSceneIntro_4:
# 81 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto BikeMapE_Script_UlyssesSceneIntro_1

BikeMapE_Script_UlyssesSceneIntro_5:
# 83 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 84 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 85 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 86 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 87 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	goto BikeMapE_Script_UlyssesSceneIntro_1


BikeMapE_Script_UlyssesScenePostArgusA::
# 115 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 116 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 117 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 118 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 119 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 120 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 121 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesPostArgus
	return


BikeMapE_Script_UlyssesScenePostArgusB::
# 125 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 126 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 127 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 128 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 129 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 130 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 131 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesPostArgus
	return


BikeMapE_Script_UlyssesScenePostArgusC::
# 135 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 136 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 137 "data/maps/BikeMapE/scripts.pory"
	call BikeMapE_Script_UlyssesPostArgus
	return


BikeMapE_Script_UlyssesPostArgus::
# 142 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_SWINEHERD, 190, 98
# 143 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesPostArgus_Swineherd
# 144 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_SWINEHERD
# 146 "data/maps/BikeMapE/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 147 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesPostArgus_Ulysses1
# 149 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_FaceRight
# 150 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 151 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 153 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_UlyssesPostArgus_Ulysses2
# 154 "data/maps/BikeMapE/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 155 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 157 "data/maps/BikeMapE/scripts.pory"
	applymovement LOCALID_BIKEMAPE_ULYSSES, Common_Movement_WalkDown6
# 158 "data/maps/BikeMapE/scripts.pory"
	waitmovement 0
# 160 "data/maps/BikeMapE/scripts.pory"
	removeobject LOCALID_BIKEMAPE_ULYSSES
# 161 "data/maps/BikeMapE/scripts.pory"
	setobjectxy LOCALID_BIKEMAPE_ULYSSES, 0, 0
# 162 "data/maps/BikeMapE/scripts.pory"
	setobjectmovementtype LOCALID_BIKEMAPE_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 163 "data/maps/BikeMapE/scripts.pory"
	addobject LOCALID_BIKEMAPE_ULYSSES
# 165 "data/maps/BikeMapE/scripts.pory"
	setvar VAR_ULYSSES_STATE, 26
	return


BikeMapE_Script_SwineHerd1::
# 170 "data/maps/BikeMapE/scripts.pory"
	faceplayer
# 171 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE < 24, 0
	goto_if_ne BikeMapE_Script_SwineHerd1_2
# 173 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_Script_SwineHerd1_3
# 176 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_PostUlysses
BikeMapE_Script_SwineHerd1_1:
# 178 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 179 "data/maps/BikeMapE/scripts.pory"
	unfaceplayer
	end

BikeMapE_Script_SwineHerd1_2:
# 172 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_AnteUlysses
	goto BikeMapE_Script_SwineHerd1_1

BikeMapE_Script_SwineHerd1_3:
# 174 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd1_DuringUlysses
	goto BikeMapE_Script_SwineHerd1_1


BikeMapE_Script_SwineHerd2::
# 184 "data/maps/BikeMapE/scripts.pory"
	faceplayer
# 185 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE < 24, 0
	goto_if_ne BikeMapE_Script_SwineHerd2_2
# 187 "data/maps/BikeMapE/scripts.pory"
	compare VAR_ULYSSES_STATE, 24
	goto_if_eq BikeMapE_Script_SwineHerd2_3
# 190 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_PostUlysses
BikeMapE_Script_SwineHerd2_1:
# 192 "data/maps/BikeMapE/scripts.pory"
	closemessage
# 193 "data/maps/BikeMapE/scripts.pory"
	unfaceplayer
	end

BikeMapE_Script_SwineHerd2_2:
# 186 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_AnteUlysses
	goto BikeMapE_Script_SwineHerd2_1

BikeMapE_Script_SwineHerd2_3:
# 188 "data/maps/BikeMapE/scripts.pory"
	msgbox BikeMapE_Text_SwineHerd2_DuringUlysses
	goto BikeMapE_Script_SwineHerd2_1


BikeMapE_Script_UlyssesSceneIntro_Text_0:
# 89 "data/maps/BikeMapE/scripts.pory"
	.string "VAR_TEMP_6 OOB$"

BikeMapE_Text_SwineHerd1_AnteUlysses::
# 197 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd1_DuringUlysses::
# 201 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd1_PostUlysses::
# 205 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_AnteUlysses::
# 209 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_DuringUlysses::
# 213 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_SwineHerd2_PostUlysses::
# 217 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesIntro1::
# 221 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesIntro2::
# 225 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesPostArgus_Swineherd::
# 229 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesPostArgus_Ulysses1::
# 233 "data/maps/BikeMapE/scripts.pory"
	.string "$"

BikeMapE_Text_UlyssesPostArgus_Ulysses2::
# 237 "data/maps/BikeMapE/scripts.pory"
	.string "$"
