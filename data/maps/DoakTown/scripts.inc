DoakTown_MapScripts::
# 10 "data//maps/DoakTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DoakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data//maps/DoakTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DoakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data//maps/DoakTown/scripts.pory"
	compare VAR_LEAF_ROAD_TO_ARDOR, 2
	goto_if_eq DoakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DoakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data//maps/DoakTown/scripts.pory"
	call Robustica_Script_ShowLeaf
	return

DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data//maps/DoakTown/scripts.pory"
	map_script_2 VAR_ROBUSTUS_STATE, 6, Robustus_OnFrame_ExeuntCampers
	.2byte 0


Robustica_Script_ShowLeaf::
# 23 "data//maps/DoakTown/scripts.pory"
	setobjectxyperm 1, 14, 34
# 24 "data//maps/DoakTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_LOOK_AROUND
# 26 "data//maps/DoakTown/scripts.pory"
	setobjectxyperm 25, 15, 34
# 27 "data//maps/DoakTown/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	return


Robustica_Script_LeafTrigger1::
# 33 "data//maps/DoakTown/scripts.pory"
	lock
# 34 "data//maps/DoakTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 35 "data//maps/DoakTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 36 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 37 "data//maps/DoakTown/scripts.pory"
	applymovement 1, Robustica_Movement_LeafEnter1
# 38 "data//maps/DoakTown/scripts.pory"
	applymovement 25, Robustica_Movement_LeafEnter1
# 39 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 40 "data//maps/DoakTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 41 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 42 "data//maps/DoakTown/scripts.pory"
	call Robustica_Script_LeafScene
	return


Robustica_Script_LeafTrigger2::
# 46 "data//maps/DoakTown/scripts.pory"
	lock
# 47 "data//maps/DoakTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 48 "data//maps/DoakTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 49 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 50 "data//maps/DoakTown/scripts.pory"
	applymovement 1, Robustica_Movement_LeafEnter2
# 51 "data//maps/DoakTown/scripts.pory"
	applymovement 25, Robustica_Movement_LeafEnter2
# 52 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 53 "data//maps/DoakTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 54 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 55 "data//maps/DoakTown/scripts.pory"
	call Robustica_Script_LeafScene
	return


Robustica_Script_LeafScene::
# 60 "data//maps/DoakTown/scripts.pory"
	setvar VAR_LEAF_ROAD_TO_ARDOR, 3
# 62 "data//maps/DoakTown/scripts.pory"
	load_field_pic 4, 190, 98
# 63 "data//maps/DoakTown/scripts.pory"
	msgbox Robustica_Text_Leaf
# 64 "data//maps/DoakTown/scripts.pory"
	destroy_field_pic 4
# 65 "data//maps/DoakTown/scripts.pory"
	closemessage
# 67 "data//maps/DoakTown/scripts.pory"
	applymovement 1, Common_Movement_WalkLeft8
# 68 "data//maps/DoakTown/scripts.pory"
	applymovement 25, Common_Movement_WalkLeft8
# 69 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 71 "data//maps/DoakTown/scripts.pory"
	removeobject 1
# 72 "data//maps/DoakTown/scripts.pory"
	setobjectxyperm 1, 0, 0
# 73 "data//maps/DoakTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 75 "data//maps/DoakTown/scripts.pory"
	removeobject 25
# 76 "data//maps/DoakTown/scripts.pory"
	setobjectxyperm 25, 0, 0
# 77 "data//maps/DoakTown/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_INVISIBLE
# 79 "data//maps/DoakTown/scripts.pory"
	release
	end


Robustus_EventScript_Camper1::
# 84 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PIPPIN
	goto_if 0, Robustus_EventScript_Camper1_2
# 88 "data//maps/DoakTown/scripts.pory"
	lock
# 89 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 90 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_PippinPost
# 91 "data//maps/DoakTown/scripts.pory"
	closemessage
# 92 "data//maps/DoakTown/scripts.pory"
	release
Robustus_EventScript_Camper1_1:
	end

Robustus_EventScript_Camper1_2:
# 85 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 86 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_PIPPIN, Robustus_Text_PippinIntro, Robustus_Text_PippinLost
	goto Robustus_EventScript_Camper1_1


Robustus_EventScript_Camper2::
# 98 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_GRAYSON
	goto_if 0, Robustus_EventScript_Camper2_1
# 102 "data//maps/DoakTown/scripts.pory"
	lock
# 103 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 104 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_GraysonPost
# 105 "data//maps/DoakTown/scripts.pory"
	closemessage
# 106 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper2_1:
# 99 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 100 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_GRAYSON, Robustus_Text_GraysonIntro, Robustus_Text_GraysonLost
	return


Robustus_EventScript_Camper3::
# 111 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_SEAN
	goto_if 0, Robustus_EventScript_Camper3_1
# 115 "data//maps/DoakTown/scripts.pory"
	lock
# 116 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 117 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_SeanPost
# 118 "data//maps/DoakTown/scripts.pory"
	closemessage
# 119 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper3_1:
# 112 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 113 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_SEAN, Robustus_Text_SeanIntro, Robustus_Text_SeanLost
	return


Robustus_EventScript_Camper4::
# 124 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_MERRY
	goto_if 0, Robustus_EventScript_Camper4_1
# 128 "data//maps/DoakTown/scripts.pory"
	lock
# 129 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 130 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_MerryPost
# 131 "data//maps/DoakTown/scripts.pory"
	closemessage
# 132 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper4_1:
# 125 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 126 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_MERRY, Robustus_Text_MerryIntro, Robustus_Text_MerryLost
	return


Robustus_EventScript_Camper5::
# 137 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PATRICK
	goto_if 0, Robustus_EventScript_Camper5_1
# 141 "data//maps/DoakTown/scripts.pory"
	lock
# 142 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 143 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_PatrickPost
# 144 "data//maps/DoakTown/scripts.pory"
	closemessage
# 145 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper5_1:
# 138 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 139 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_PATRICK, Robustus_Text_PatrickIntro, Robustus_Text_PatrickLost
	return


Robustus_EventScript_ResetCounter::
# 150 "data//maps/DoakTown/scripts.pory"
	compare VAR_ROBUSTUS_STATE, 1
	goto_if_gt Robustus_EventScript_ResetCounter_2
# 168 "data//maps/DoakTown/scripts.pory"
	release
Robustus_EventScript_ResetCounter_1:
	end

Robustus_EventScript_ResetCounter_2:
# 151 "data//maps/DoakTown/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 1
# 152 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PIPPIN
	goto_if 1, Robustus_EventScript_ResetCounter_6
Robustus_EventScript_ResetCounter_5:
# 155 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_GRAYSON
	goto_if 1, Robustus_EventScript_ResetCounter_9
Robustus_EventScript_ResetCounter_8:
# 158 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_SEAN
	goto_if 1, Robustus_EventScript_ResetCounter_12
Robustus_EventScript_ResetCounter_11:
# 161 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_MERRY
	goto_if 1, Robustus_EventScript_ResetCounter_15
Robustus_EventScript_ResetCounter_14:
# 164 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PATRICK
	goto_if 1, Robustus_EventScript_ResetCounter_17
	goto Robustus_EventScript_ResetCounter_1

Robustus_EventScript_ResetCounter_6:
# 153 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_PIPPIN
	goto Robustus_EventScript_ResetCounter_5

Robustus_EventScript_ResetCounter_9:
# 156 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_GRAYSON
	goto Robustus_EventScript_ResetCounter_8

Robustus_EventScript_ResetCounter_12:
# 159 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_SEAN
	goto Robustus_EventScript_ResetCounter_11

Robustus_EventScript_ResetCounter_15:
# 162 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_MERRY
	goto Robustus_EventScript_ResetCounter_14

Robustus_EventScript_ResetCounter_17:
# 165 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_PATRICK
	goto Robustus_EventScript_ResetCounter_1


Robustus_EventScript_Counter::
# 174 "data//maps/DoakTown/scripts.pory"
	addvar VAR_ROBUSTUS_STATE, 1
	return


Robustus_OnFrame_ExeuntCampers::
# 179 "data//maps/DoakTown/scripts.pory"
	lock
# 180 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 181 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_Test
# 182 "data//maps/DoakTown/scripts.pory"
	closemessage
# 183 "data//maps/DoakTown/scripts.pory"
	applymovement 4, Robustus_Movement_ExitCamper1
# 184 "data//maps/DoakTown/scripts.pory"
	applymovement 3, Robustus_Movement_ExitCamper2
# 185 "data//maps/DoakTown/scripts.pory"
	applymovement 5, Robustus_Movement_ExitCamper3
# 186 "data//maps/DoakTown/scripts.pory"
	applymovement 6, Robustus_Movement_ExitCamper4
# 187 "data//maps/DoakTown/scripts.pory"
	applymovement 7, Robustus_Movement_ExitCamper5
# 188 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 189 "data//maps/DoakTown/scripts.pory"
	removeobject 3
# 190 "data//maps/DoakTown/scripts.pory"
	removeobject 4
# 191 "data//maps/DoakTown/scripts.pory"
	removeobject 5
# 192 "data//maps/DoakTown/scripts.pory"
	removeobject 6
# 193 "data//maps/DoakTown/scripts.pory"
	removeobject 7
# 194 "data//maps/DoakTown/scripts.pory"
	setflag FLAG_ROBUSTUS_HIDECAMPERS
# 195 "data//maps/DoakTown/scripts.pory"
	release
	end


# 199 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper1:
# 200 "data//maps/DoakTown/scripts.pory"
	walk_left
# 201 "data//maps/DoakTown/scripts.pory"
	walk_up
# 201 "data//maps/DoakTown/scripts.pory"
	walk_up
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
# 202 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 205 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper2:
# 206 "data//maps/DoakTown/scripts.pory"
	walk_up
# 206 "data//maps/DoakTown/scripts.pory"
	walk_up
# 206 "data//maps/DoakTown/scripts.pory"
	walk_up
# 206 "data//maps/DoakTown/scripts.pory"
	walk_up
# 206 "data//maps/DoakTown/scripts.pory"
	walk_up
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
# 207 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 210 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper3:
# 211 "data//maps/DoakTown/scripts.pory"
	walk_up
# 211 "data//maps/DoakTown/scripts.pory"
	walk_up
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
# 212 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 215 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper4:
# 216 "data//maps/DoakTown/scripts.pory"
	walk_left
# 216 "data//maps/DoakTown/scripts.pory"
	walk_left
# 217 "data//maps/DoakTown/scripts.pory"
	walk_up
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
# 218 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 221 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper5:
# 222 "data//maps/DoakTown/scripts.pory"
	walk_left
# 223 "data//maps/DoakTown/scripts.pory"
	walk_up
# 223 "data//maps/DoakTown/scripts.pory"
	walk_up
# 223 "data//maps/DoakTown/scripts.pory"
	walk_up
# 223 "data//maps/DoakTown/scripts.pory"
	walk_up
# 223 "data//maps/DoakTown/scripts.pory"
	walk_up
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
# 224 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 227 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafApproach1:
# 228 "data//maps/DoakTown/scripts.pory"
	walk_left
# 228 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 231 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafApproach2:
# 232 "data//maps/DoakTown/scripts.pory"
	walk_left
# 233 "data//maps/DoakTown/scripts.pory"
	walk_diag_southwest
# 234 "data//maps/DoakTown/scripts.pory"
	face_left
	step_end

# 237 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafExit:
# 238 "data//maps/DoakTown/scripts.pory"
	walk_right
# 238 "data//maps/DoakTown/scripts.pory"
	walk_right
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
# 239 "data//maps/DoakTown/scripts.pory"
	walk_up
	step_end

# 243 "data//maps/DoakTown/scripts.pory"
Robustica_Movement_LeafEnter1:
# 244 "data//maps/DoakTown/scripts.pory"
	walk_down
# 244 "data//maps/DoakTown/scripts.pory"
	walk_down
# 245 "data//maps/DoakTown/scripts.pory"
	walk_left
# 245 "data//maps/DoakTown/scripts.pory"
	walk_left
# 245 "data//maps/DoakTown/scripts.pory"
	walk_left
# 246 "data//maps/DoakTown/scripts.pory"
	face_up
	step_end

# 249 "data//maps/DoakTown/scripts.pory"
Robustica_Movement_LeafEnter2:
# 250 "data//maps/DoakTown/scripts.pory"
	walk_down
# 251 "data//maps/DoakTown/scripts.pory"
	walk_left
# 251 "data//maps/DoakTown/scripts.pory"
	walk_left
# 251 "data//maps/DoakTown/scripts.pory"
	walk_left
# 252 "data//maps/DoakTown/scripts.pory"
	face_down
	step_end

Robustus_Text_PippinIntro::
# 255 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PippinLost::
# 259 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PippinPost::
# 263 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonIntro::
# 267 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonLost::
# 271 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonPost::
# 275 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanIntro::
# 279 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanLost::
# 283 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanPost::
# 287 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryIntro::
# 291 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryLost::
# 295 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryPost::
# 299 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickIntro::
# 303 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickLost::
# 307 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickPost::
# 311 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_Leaf::
# 315 "data//maps/DoakTown/scripts.pory"
	.string "My gosh! Look at you {PLAYER} I see\n"
	.string "you've grown more lovely in every\l"
	.string "possible way. Unfortunately I can't\l"
	.string "find a way to continue our trip north to\l"
	.string "Ardor. The bicycle highway is not a\l"
	.string "choice unless we can ground score\l"
	.string "ourselves a bike, and rock tunnel is\l"
	.string "blocked by hella rocks. I fear the\l"
	.string "passage south through the city but\l"
	.string "currently that seems our only choice.\l"
	.string "Please find a way to keep travelling\l"
	.string "north or brace yourself to go through\l"
	.string "the city.$"

Robustus_Text_Test::
# 319 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustica_Text_Leaf::
# 323 "data//maps/DoakTown/scripts.pory"
	.string "There you are {PLAYER}! I've been\n"
	.string "waiting for you. Unfortunately I have\l"
	.string "some bad news, I was unable to convince\l"
	.string "the men who operate Via Magna to let us\l"
	.string "use the road without a bicycle. We have\l"
	.string "to find a way to Deseret. That means\l"
	.string "that we need to somehow find a bike or\l"
	.string "else travel along some other road.\l"
	.string "Sabina Nova is the least distant\l"
	.string "terminal for Via Magna from here. We\l"
	.string "could attempt to bribe our way across\l"
	.string "or maybe find us someone to sell us\l"
	.string "bikes. Another option is to go around\l"
	.string "and enter Urbia from the southwest and\l"
	.string "from the city find a desert path...or we\l"
	.string "could take Via Posterior. During the old\l"
	.string "ages of Watchful Peace my father's\l"
	.string "family helped to dig that road but it\l"
	.string "has been abandoned for some time\l"
	.string "becoming dark, and cold, and dangerous.\l"
	.string "Whichever path we choose, we must\l"
	.string "choose soon for Mewra, Mew, and all free\l"
	.string "loving folk depend on us to rally\l"
	.string "Maximus. Let's get started! There is no\l"
	.string "time to loose!$"
