PyramidInsidePuzzle_MapScripts::
	.byte 0


PyramidsInsidePuzzle_Script_Duskull1::
# 28 "data//maps/PyramidInsidePuzzle/scripts.pory"
	lock
# 29 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 30 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 31 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull
# 32 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkRight8
# 33 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 34 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setvar VAR_TEMP_6, 1
# 35 "data//maps/PyramidInsidePuzzle/scripts.pory"
	hideobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 36 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 37 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 7, 19, 18
# 38 "data//maps/PyramidInsidePuzzle/scripts.pory"
	clearflag FLAG_PYRAMIDSINSIDEPUZZLE_HIDEDUSCLOPS
# 39 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 7
# 40 "data//maps/PyramidInsidePuzzle/scripts.pory"
	showobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 41 "data//maps/PyramidInsidePuzzle/scripts.pory"
	release
	end


PyramidsInsidePuzzle_Script_Duskull2::
# 47 "data//maps/PyramidInsidePuzzle/scripts.pory"
	lock
# 48 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 49 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 50 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull
# 51 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft8
# 52 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 53 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setvar VAR_TEMP_6, 2
# 54 "data//maps/PyramidInsidePuzzle/scripts.pory"
	hideobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 55 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 56 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 7, 1, 13
# 57 "data//maps/PyramidInsidePuzzle/scripts.pory"
	clearflag FLAG_PYRAMIDSINSIDEPUZZLE_HIDEDUSCLOPS
# 58 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 7
# 59 "data//maps/PyramidInsidePuzzle/scripts.pory"
	showobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 60 "data//maps/PyramidInsidePuzzle/scripts.pory"
	release
	end


PyramidsInsidePuzzle_Script_Duskull3A::
# 67 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setflag FLAG_TEMP_3
# 68 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull3
	return


PyramidsInsidePuzzle_Script_Duskull3::
# 72 "data//maps/PyramidInsidePuzzle/scripts.pory"
	lock
# 73 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 74 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 75 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull
# 76 "data//maps/PyramidInsidePuzzle/scripts.pory"
	goto_if_set FLAG_TEMP_3, PyramidsInsidePuzzle_Script_Duskull3_2
PyramidsInsidePuzzle_Script_Duskull3_1:
# 80 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkRight10
# 81 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 82 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setvar VAR_TEMP_6, 3
# 83 "data//maps/PyramidInsidePuzzle/scripts.pory"
	hideobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 84 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 85 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 7, 30, 9
# 86 "data//maps/PyramidInsidePuzzle/scripts.pory"
	clearflag FLAG_PYRAMIDSINSIDEPUZZLE_HIDEDUSCLOPS
# 87 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 7
# 88 "data//maps/PyramidInsidePuzzle/scripts.pory"
	showobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 89 "data//maps/PyramidInsidePuzzle/scripts.pory"
	release
	end

PyramidsInsidePuzzle_Script_Duskull3_2:
# 77 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkUp
# 78 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
	goto PyramidsInsidePuzzle_Script_Duskull3_1


PyramidsInsidePuzzle_Script_Duskull4::
# 95 "data//maps/PyramidInsidePuzzle/scripts.pory"
	lock
# 96 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 97 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 98 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull
# 99 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft10
# 100 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 101 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setvar VAR_TEMP_6, 4
# 102 "data//maps/PyramidInsidePuzzle/scripts.pory"
	hideobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 103 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 104 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 7, 14, 22
# 105 "data//maps/PyramidInsidePuzzle/scripts.pory"
	clearflag FLAG_PYRAMIDSINSIDEPUZZLE_HIDEDUSCLOPS
# 106 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 7
# 107 "data//maps/PyramidInsidePuzzle/scripts.pory"
	showobjectat 7, MAP_PYRAMID_INSIDE_PUZZLE
# 108 "data//maps/PyramidInsidePuzzle/scripts.pory"
	release
	end


PyramidsInsidePuzzle_Script_Duskull5::
# 113 "data//maps/PyramidInsidePuzzle/scripts.pory"
	lock
# 114 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 115 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 116 "data//maps/PyramidInsidePuzzle/scripts.pory"
	call PyramidsInsidePuzzle_Script_Duskull
# 119 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft3
# 120 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 122 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 123 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 124 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 125 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 126 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 127 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 128 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkDown
# 129 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 131 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 132 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 133 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 134 "data//maps/PyramidInsidePuzzle/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_ENCOUNTER
# 135 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmoncry
# 136 "data//maps/PyramidInsidePuzzle/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
# 137 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmoncry
# 139 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkLeft
# 140 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 141 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 142 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 144 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 145 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 146 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 147 "data//maps/PyramidInsidePuzzle/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_ENCOUNTER
# 148 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmoncry
# 149 "data//maps/PyramidInsidePuzzle/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
# 150 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmoncry
# 152 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_WalkDown3
# 153 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 154 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 2, Common_Movement_WalkDown3
# 155 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 3, Common_Movement_WalkDown3
# 156 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 4, Common_Movement_WalkDown3
# 157 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 5, Common_Movement_WalkDown3
# 158 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 6, Common_Movement_WalkDown3
# 159 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 161 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 162 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 1
# 163 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 2
# 164 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 3
# 165 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 4
# 166 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 5
# 167 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 6
# 168 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 7, 0, 0
# 169 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 1, 0, 0
# 170 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 2, 0, 0
# 171 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 3, 0, 0
# 172 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 4, 0, 0
# 173 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 5, 0, 0
# 174 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectxyperm 6, 0, 0
# 175 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_INVISIBLE
# 176 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 177 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 178 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_INVISIBLE
# 179 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_INVISIBLE
# 180 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_INVISIBLE
# 181 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_INVISIBLE
# 182 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 7
# 183 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 1
# 184 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 2
# 185 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 3
# 186 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 4
# 187 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 5
# 188 "data//maps/PyramidInsidePuzzle/scripts.pory"
	addobject 6
# 190 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setvar VAR_TEMP_6, 5
# 191 "data//maps/PyramidInsidePuzzle/scripts.pory"
	setflag FLAG_PYRAMIDSINSIDEPUZZLE_HIDEDUSCLOPS
# 192 "data//maps/PyramidInsidePuzzle/scripts.pory"
	removeobject 7
# 194 "data//maps/PyramidInsidePuzzle/scripts.pory"
	release
	end


PyramidsInsidePuzzle_Script_Duskull::
# 199 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 200 "data//maps/PyramidInsidePuzzle/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 201 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmovement 0
# 202 "data//maps/PyramidInsidePuzzle/scripts.pory"
	playmoncry SPECIES_DUSKULL, CRY_MODE_ENCOUNTER
# 203 "data//maps/PyramidInsidePuzzle/scripts.pory"
	waitmoncry
	return

