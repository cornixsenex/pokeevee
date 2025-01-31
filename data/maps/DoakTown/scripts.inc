DoakTown_MapScripts::
# 3 "data//maps/DoakTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DoakTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data//maps/DoakTown/scripts.pory"
	map_script_2 VAR_ROBUSTUS_STATE, 6, Robustus_OnFrame_ExeuntCampers
	.2byte 0


Robustus_EventScript_LeafTrigger1::
# 11 "data//maps/DoakTown/scripts.pory"
	lock
# 12 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 13 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 14 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 15 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 16 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Robustus_Movement_LeafApproach1
# 17 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 18 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_Leaf1
# 19 "data//maps/DoakTown/scripts.pory"
	closemessage
# 20 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Robustus_Movement_LeafExit
# 21 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 22 "data//maps/DoakTown/scripts.pory"
	removeobject 2
# 23 "data//maps/DoakTown/scripts.pory"
	setflag FLAG_ROBUSTUS_HIDELEAF
# 24 "data//maps/DoakTown/scripts.pory"
	release
	end


Robustus_EventScript_LeafTrigger2::
# 29 "data//maps/DoakTown/scripts.pory"
	lock
# 30 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 31 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 32 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 33 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 34 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 35 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Robustus_Movement_LeafApproach2
# 36 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 37 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_Leaf1
# 38 "data//maps/DoakTown/scripts.pory"
	closemessage
# 39 "data//maps/DoakTown/scripts.pory"
	applymovement 2, Robustus_Movement_LeafExit
# 40 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 41 "data//maps/DoakTown/scripts.pory"
	removeobject 2
# 42 "data//maps/DoakTown/scripts.pory"
	setflag FLAG_ROBUSTUS_HIDELEAF
# 43 "data//maps/DoakTown/scripts.pory"
	release
	end


Robustus_EventScript_Camper1::
# 48 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PIPPIN
	goto_if 0, Robustus_EventScript_Camper1_2
# 52 "data//maps/DoakTown/scripts.pory"
	lock
# 53 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 54 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_PippinPost
# 55 "data//maps/DoakTown/scripts.pory"
	closemessage
# 56 "data//maps/DoakTown/scripts.pory"
	release
Robustus_EventScript_Camper1_1:
	end

Robustus_EventScript_Camper1_2:
# 49 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 50 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_PIPPIN, Robustus_Text_PippinIntro, Robustus_Text_PippinLost
	goto Robustus_EventScript_Camper1_1


Robustus_EventScript_Camper2::
# 62 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_GRAYSON
	goto_if 0, Robustus_EventScript_Camper2_1
# 66 "data//maps/DoakTown/scripts.pory"
	lock
# 67 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 68 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_GraysonPost
# 69 "data//maps/DoakTown/scripts.pory"
	closemessage
# 70 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper2_1:
# 63 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 64 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_GRAYSON, Robustus_Text_GraysonIntro, Robustus_Text_GraysonLost
	return


Robustus_EventScript_Camper3::
# 75 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_SEAN
	goto_if 0, Robustus_EventScript_Camper3_1
# 79 "data//maps/DoakTown/scripts.pory"
	lock
# 80 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 81 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_SeanPost
# 82 "data//maps/DoakTown/scripts.pory"
	closemessage
# 83 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper3_1:
# 76 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 77 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_SEAN, Robustus_Text_SeanIntro, Robustus_Text_SeanLost
	return


Robustus_EventScript_Camper4::
# 88 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_MERRY
	goto_if 0, Robustus_EventScript_Camper4_1
# 92 "data//maps/DoakTown/scripts.pory"
	lock
# 93 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 94 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_MerryPost
# 95 "data//maps/DoakTown/scripts.pory"
	closemessage
# 96 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper4_1:
# 89 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 90 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_MERRY, Robustus_Text_MerryIntro, Robustus_Text_MerryLost
	return


Robustus_EventScript_Camper5::
# 101 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PATRICK
	goto_if 0, Robustus_EventScript_Camper5_1
# 105 "data//maps/DoakTown/scripts.pory"
	lock
# 106 "data//maps/DoakTown/scripts.pory"
	faceplayer
# 107 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_PatrickPost
# 108 "data//maps/DoakTown/scripts.pory"
	closemessage
# 109 "data//maps/DoakTown/scripts.pory"
	release
	return

Robustus_EventScript_Camper5_1:
# 102 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 103 "data//maps/DoakTown/scripts.pory"
	trainerbattle_single TRAINER_PATRICK, Robustus_Text_PatrickIntro, Robustus_Text_PatrickLost
	return


Robustus_EventScript_ResetCounter::
# 114 "data//maps/DoakTown/scripts.pory"
	compare VAR_ROBUSTUS_STATE, 1
	goto_if_gt Robustus_EventScript_ResetCounter_2
# 132 "data//maps/DoakTown/scripts.pory"
	release
Robustus_EventScript_ResetCounter_1:
	end

Robustus_EventScript_ResetCounter_2:
# 115 "data//maps/DoakTown/scripts.pory"
	setvar VAR_ROBUSTUS_STATE, 1
# 116 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PIPPIN
	goto_if 1, Robustus_EventScript_ResetCounter_6
Robustus_EventScript_ResetCounter_5:
# 119 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_GRAYSON
	goto_if 1, Robustus_EventScript_ResetCounter_9
Robustus_EventScript_ResetCounter_8:
# 122 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_SEAN
	goto_if 1, Robustus_EventScript_ResetCounter_12
Robustus_EventScript_ResetCounter_11:
# 125 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_MERRY
	goto_if 1, Robustus_EventScript_ResetCounter_15
Robustus_EventScript_ResetCounter_14:
# 128 "data//maps/DoakTown/scripts.pory"
	checktrainerflag TRAINER_PATRICK
	goto_if 1, Robustus_EventScript_ResetCounter_17
	goto Robustus_EventScript_ResetCounter_1

Robustus_EventScript_ResetCounter_6:
# 117 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_PIPPIN
	goto Robustus_EventScript_ResetCounter_5

Robustus_EventScript_ResetCounter_9:
# 120 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_GRAYSON
	goto Robustus_EventScript_ResetCounter_8

Robustus_EventScript_ResetCounter_12:
# 123 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_SEAN
	goto Robustus_EventScript_ResetCounter_11

Robustus_EventScript_ResetCounter_15:
# 126 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_MERRY
	goto Robustus_EventScript_ResetCounter_14

Robustus_EventScript_ResetCounter_17:
# 129 "data//maps/DoakTown/scripts.pory"
	cleartrainerflag TRAINER_PATRICK
	goto Robustus_EventScript_ResetCounter_1


Robustus_EventScript_Counter::
# 138 "data//maps/DoakTown/scripts.pory"
	addvar VAR_ROBUSTUS_STATE, 1
	return


Robustus_OnFrame_ExeuntCampers::
# 143 "data//maps/DoakTown/scripts.pory"
	lock
# 144 "data//maps/DoakTown/scripts.pory"
	call Robustus_EventScript_Counter
# 145 "data//maps/DoakTown/scripts.pory"
	msgbox Robustus_Text_Test
# 146 "data//maps/DoakTown/scripts.pory"
	closemessage
# 147 "data//maps/DoakTown/scripts.pory"
	applymovement 4, Robustus_Movement_ExitCamper1
# 148 "data//maps/DoakTown/scripts.pory"
	applymovement 3, Robustus_Movement_ExitCamper2
# 149 "data//maps/DoakTown/scripts.pory"
	applymovement 5, Robustus_Movement_ExitCamper3
# 150 "data//maps/DoakTown/scripts.pory"
	applymovement 6, Robustus_Movement_ExitCamper4
# 151 "data//maps/DoakTown/scripts.pory"
	applymovement 7, Robustus_Movement_ExitCamper5
# 152 "data//maps/DoakTown/scripts.pory"
	waitmovement 0
# 153 "data//maps/DoakTown/scripts.pory"
	removeobject 3
# 154 "data//maps/DoakTown/scripts.pory"
	removeobject 4
# 155 "data//maps/DoakTown/scripts.pory"
	removeobject 5
# 156 "data//maps/DoakTown/scripts.pory"
	removeobject 6
# 157 "data//maps/DoakTown/scripts.pory"
	removeobject 7
# 158 "data//maps/DoakTown/scripts.pory"
	setflag FLAG_ROBUSTUS_HIDECAMPERS
# 159 "data//maps/DoakTown/scripts.pory"
	release
	end


# 163 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper1:
# 164 "data//maps/DoakTown/scripts.pory"
	walk_left
# 165 "data//maps/DoakTown/scripts.pory"
	walk_up
# 165 "data//maps/DoakTown/scripts.pory"
	walk_up
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
# 166 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 169 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper2:
# 170 "data//maps/DoakTown/scripts.pory"
	walk_up
# 170 "data//maps/DoakTown/scripts.pory"
	walk_up
# 170 "data//maps/DoakTown/scripts.pory"
	walk_up
# 170 "data//maps/DoakTown/scripts.pory"
	walk_up
# 170 "data//maps/DoakTown/scripts.pory"
	walk_up
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
# 171 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 174 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper3:
# 175 "data//maps/DoakTown/scripts.pory"
	walk_up
# 175 "data//maps/DoakTown/scripts.pory"
	walk_up
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
# 176 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 179 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper4:
# 180 "data//maps/DoakTown/scripts.pory"
	walk_left
# 180 "data//maps/DoakTown/scripts.pory"
	walk_left
# 181 "data//maps/DoakTown/scripts.pory"
	walk_up
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
# 182 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 185 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_ExitCamper5:
# 186 "data//maps/DoakTown/scripts.pory"
	walk_left
# 187 "data//maps/DoakTown/scripts.pory"
	walk_up
# 187 "data//maps/DoakTown/scripts.pory"
	walk_up
# 187 "data//maps/DoakTown/scripts.pory"
	walk_up
# 187 "data//maps/DoakTown/scripts.pory"
	walk_up
# 187 "data//maps/DoakTown/scripts.pory"
	walk_up
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
# 188 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 191 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafApproach1:
# 192 "data//maps/DoakTown/scripts.pory"
	walk_left
# 192 "data//maps/DoakTown/scripts.pory"
	walk_left
	step_end

# 195 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafApproach2:
# 196 "data//maps/DoakTown/scripts.pory"
	walk_left
# 197 "data//maps/DoakTown/scripts.pory"
	walk_diag_southwest
# 198 "data//maps/DoakTown/scripts.pory"
	face_left
	step_end

# 201 "data//maps/DoakTown/scripts.pory"
Robustus_Movement_LeafExit:
# 202 "data//maps/DoakTown/scripts.pory"
	walk_right
# 202 "data//maps/DoakTown/scripts.pory"
	walk_right
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
# 203 "data//maps/DoakTown/scripts.pory"
	walk_up
	step_end

Robustus_Text_PippinIntro::
# 207 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PippinLost::
# 211 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PippinPost::
# 215 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonIntro::
# 219 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonLost::
# 223 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_GraysonPost::
# 227 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanIntro::
# 231 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanLost::
# 235 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_SeanPost::
# 239 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryIntro::
# 243 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryLost::
# 247 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_MerryPost::
# 251 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickIntro::
# 255 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickLost::
# 259 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_PatrickPost::
# 263 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"

Robustus_Text_Leaf1::
# 267 "data//maps/DoakTown/scripts.pory"
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
# 274 "data//maps/DoakTown/scripts.pory"
	.string "TEST!$"
