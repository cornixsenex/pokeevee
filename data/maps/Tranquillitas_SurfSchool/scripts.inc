Tranquillitas_SurfSchool_MapScripts::
# 3 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Tranquillitas_SurfSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Tranquillitas_SurfSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 5
	goto_if_lt Tranquillitas_SurfSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Tranquillitas_SurfSchool_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call Tranquillitas_SurfSchool_Script_ShowLeaf
	return


Tranquillitas_SurfSchool_Script_ShowLeaf::
# 13 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectxyperm LOCALID_SURF_SCHOOL_LEAF, 8, 9
# 14 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectmovementtype LOCALID_SURF_SCHOOL_LEAF, MOVEMENT_TYPE_FACE_UP
	return


SurfSchool_Script_TriggerSurfer1::
# 19 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 20 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 21 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 22 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 23 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 24 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 25 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 26 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 27 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 28 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 29 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 30 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 31 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer1::
# 36 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 37 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 0
	goto_if_gt SurfSchool_Script_Surfer1_2
# 41 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 42 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 43 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 44 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 45 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 46 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 47 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 48 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 49 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer1_1:
# 51 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_FaceLeft
# 52 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer1_2:
# 38 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 39 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer1_1


SurfSchool_Script_TriggerSurfer2::
# 58 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 59 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 60 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 61 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
# 62 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 63 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 64 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 65 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Intro
# 66 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 67 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer2Lost
# 68 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 69 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 70 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer2::
# 75 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 76 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 1
	goto_if_gt SurfSchool_Script_Surfer2_2
# 80 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 81 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 82 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
# 83 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 84 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Intro
# 85 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 86 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer2Lost
# 87 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 88 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer2_1:
# 90 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_FaceDown
# 91 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer2_2:
# 77 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 78 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer2_1


SurfSchool_Script_TriggerSurfer3::
# 96 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 97 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 98 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 99 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 100 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 101 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 102 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 103 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 104 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 105 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 106 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 107 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 108 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer3::
# 113 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 114 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 2
	goto_if_gt SurfSchool_Script_Surfer3_2
# 118 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 119 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 120 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 121 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 122 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 123 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 124 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 125 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 126 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer3_1:
# 128 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_FaceUp
# 129 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer3_2:
# 115 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 116 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer3_1


SurfSchool_Script_TriggerSurfer4::
# 134 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 135 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 136 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 137 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 138 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 139 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 140 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 141 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 142 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 143 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 144 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 145 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 146 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer4::
# 151 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 152 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 3
	goto_if_gt SurfSchool_Script_Surfer4_2
# 156 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 157 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 158 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 159 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 160 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 161 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 162 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 163 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 164 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer4_1:
# 166 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_FaceRight
# 167 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer4_2:
# 153 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 154 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer4_1


SurfSchool_Script_Trigger_LeafSceneA::
# 172 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 173 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 174 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 175 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_ExclamationMark
# 176 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 177 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 178 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 179 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_LeafScene
	return


SurfSchool_Script_Trigger_LeafSceneB::
# 183 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 184 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 185 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 186 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_ExclamationMark
# 187 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 188 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_LeafScene
	return


SurfSchool_Script_LeafScene::
# 194 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 5
# 196 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 197 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 198 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
# 199 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 201 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 202 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf1
# 203 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 204 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 206 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 207 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_WalkUp
# 208 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 210 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 211 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty1
# 212 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 214 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 215 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 216 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 218 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 219 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf2
# 220 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 221 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 222 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_SetupMultiBattle
# 224 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 225 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceUp
# 226 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 228 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 229 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty2
# 230 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 231 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 233 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	multi_2_vs_1 TRAINER_MISTY, SurfSchool_Text_MistyLost, PARTNER_LEAF
# 235 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 236 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty3
# 237 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 238 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 240 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	giveitem ITEM_SURFBOARD
# 242 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 243 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty4
# 244 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 246 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 247 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 248 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 250 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 251 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf3
# 252 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 253 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 255 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, SurfSchool_Movement_LeafExit
# 256 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 258 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	hideobjectat LOCALID_SURF_SCHOOL_LEAF, MAP_TRANQUILLITAS_SURF_SCHOOL
# 259 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	removeobject LOCALID_SURF_SCHOOL_LEAF
# 260 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectxyperm LOCALID_SURF_SCHOOL_LEAF, 0, 0
# 261 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectmovementtype LOCALID_SURF_SCHOOL_LEAF, MOVEMENT_TYPE_INVISIBLE
# 263 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_SetupMultiBattle::
# 268 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	special SavePlayerParty
# 269 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	special ChooseHalfPartyForBattle
# 270 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitstate
# 271 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SurfSchool_Script_SetupMultiBattle_1
	return

SurfSchool_Script_SetupMultiBattle_1:
# 272 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_SetupMultiBattle
	return


SurfSchool_Script_Misty::
# 279 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 281 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


# 285 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
SurfSchool_Movement_LeafExit:
# 286 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 287 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 287 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 287 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 288 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_up
# 288 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_up
# 289 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 289 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 289 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 289 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 289 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 290 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 290 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 290 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 290 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 292 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 293 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 294 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 294 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
	step_end

SurfSchool_Text_Surfer1Intro::
# 298 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You don't look tough enough to handle\n"
	.string "the open water where pokemon attack at\l"
	.string "any moment. Let me test your skill.$"

SurfSchool_Text_Surfer1Lost::
# 304 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You catch on fast.$"

SurfSchool_Text_Surfer1Post::
# 308 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "While surfing the oceans a wild pokemon\n"
	.string "could suddenly attack so you must\l"
	.string "always be alert.$"

SurfSchool_Text_Surfer2Intro::
# 315 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "So, you think you can tame the mighty\n"
	.string "waves?$"

SurfSchool_Text_Surfer2Lost::
# 319 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You're stronger than you look.$"

SurfSchool_Text_Surfer2Post::
# 323 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "While you're surfing be careful not to\n"
	.string "wander into a deep sea current which\l"
	.string "could whisk you away. There's no way of\l"
	.string "stopping once you're caught up!$"

SurfSchool_Text_Surfer3Intro::
# 331 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "It's time for me to test your aptitude.$"

SurfSchool_Text_Surfer3Lost::
# 335 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You've satisfied my examination.$"

SurfSchool_Text_Surfer3Post::
# 339 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Stay close to shore if you're not\n"
	.string "strong enough to surf the ocean. The\l"
	.string "shallow waters are home to much weaker\l"
	.string "pokemon than the monsters lurking in\l"
	.string "the deep ocean.$"

SurfSchool_Text_Surfer4Intro::
# 347 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "If you get past me you may face Misty\n"
	.string "and demonstrate your worthiness to\l"
	.string "surf.$"

SurfSchool_Text_Surfer4Lost::
# 352 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Impressive.$"

SurfSchool_Text_Surfer4Post::
# 356 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "The ocean is divided into seven seas:\n"
	.string "Mare Tranquillum, Mares Tropicum and\l"
	.string "Subtropicum, Mare Internum, Mare\l"
	.string "Occidens, Mare Oriens, and the haunted\l"
	.string "sea, that cursed place: Mare Mortuorum.\l"
	.string "A begginer surfer, such as yourself,\l"
	.string "should stick the shallow waters before\l"
	.string "trying to surf across the sea alone.\l"
	.string "Beware, for some are much more\l"
	.string "dangerous than others. I myself would\l"
	.string "only surf Tranquillum, Tropicum, and\l"
	.string "Internum. Subtropicum's a bit more\l"
	.string "dangerous. Occidens and Oriens are too\l"
	.string "much for even an experienced surfer,\l"
	.string "and Mare Mortuorum is a cursed and evil\l"
	.string "place where surfers go to die. Beware\l"
	.string "that sea, it belongs to the dead and\l"
	.string "the dead keep it. Now be on your way.\l"
	.string "Our teacher, Misty, is your final test.\l"
	.string "Good luck, and be safe while surfing the\l"
	.string "seas.$"

SurfSchool_Text_Leaf1::
# 380 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Ok, let's do this, let's leran how to\n"
	.string "surf.$"

SurfSchool_Text_Misty1::
# 384 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You've both demonstrated prerequisite\n"
	.string "ability you need to learn to surf but\l"
	.string "before I can give you your surfboards\l"
	.string "you must pass one last examination.\l"
	.string "Since you enrolled in Surf School as a\l"
	.string "pair I will assess your capabilities as\l"
	.string "one. You will need to work together to\l"
	.string "defeat me and pass my Surfing School.$"

SurfSchool_Text_Leaf2::
# 395 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Here we go {PLAYER}, time to earn our\n"
	.string "surfboards and demonstrate the power\l"
	.string "of our love. We'll take down Misty\l"
	.string "together. Let's both choose 3 pokemon\l"
	.string "to use in battle. I'll be bringing\l"
	.string "Jigglypuff, Bayleef, and Jynx. What\l"
	.string "three pokemon will you choose?$"

SurfSchool_Text_Misty2::
# 404 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Now I will test the strength of your\n"
	.string "union and see if you're ready to surf\l"
	.string "the seas.$"

SurfSchool_Text_MistyLost::
# 409 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Your strength as a couple's\n"
	.string "unquestionable.$"

SurfSchool_Text_Misty3::
# 413 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Impressive, you have both\n"
	.string "demonstrated your readiness to surf,\l"
	.string "so please take these.$"

SurfSchool_Text_Misty4::
# 418 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Leaf3::
# 422 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"
