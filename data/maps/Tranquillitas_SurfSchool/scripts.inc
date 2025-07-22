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
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 21 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 22 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 23 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 24 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 25 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	delay 30
# 26 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 27 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 28 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 29 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 30 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 31 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 32 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 33 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 34 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer1::
# 39 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 40 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 0
	goto_if_gt SurfSchool_Script_Surfer1_2
# 44 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 45 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 46 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 47 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 48 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 49 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 50 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 51 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 52 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer1_1:
# 54 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_FaceLeft
# 55 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer1_2:
# 41 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 42 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer1_1


SurfSchool_Script_TriggerSurfer2::
# 61 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 62 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 63 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 64 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 65 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
# 66 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 67 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	delay 30
# 68 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 69 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 70 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Intro
# 71 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 72 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer2Lost
# 73 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 74 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 75 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 76 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer2::
# 81 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 82 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 1
	goto_if_gt SurfSchool_Script_Surfer2_2
# 86 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 87 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 88 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
# 89 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 90 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Intro
# 91 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 92 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer2Lost
# 93 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 94 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer2_1:
# 96 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_FaceDown
# 97 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer2_2:
# 83 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 84 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer2_1


SurfSchool_Script_TriggerSurfer3::
# 102 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 103 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 104 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 105 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 106 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 107 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 108 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	delay 30
# 109 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 110 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 111 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 112 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 113 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 114 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 115 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 116 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 117 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer3::
# 122 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 123 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 2
	goto_if_gt SurfSchool_Script_Surfer3_2
# 127 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 128 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 129 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 130 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 131 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 132 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 133 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 134 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 135 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer3_1:
# 137 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_FaceUp
# 138 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer3_2:
# 124 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 125 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer3_1


SurfSchool_Script_TriggerSurfer4::
# 143 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 144 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 145 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 146 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 147 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 148 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 149 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	delay 30
# 150 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 151 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 152 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 153 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 154 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 155 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 156 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 157 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 158 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer4::
# 163 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 164 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 3
	goto_if_gt SurfSchool_Script_Surfer4_2
# 168 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 169 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 170 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 171 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 172 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 173 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 174 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 175 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 176 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer4_1:
# 178 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_FaceRight
# 179 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer4_2:
# 165 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 166 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer4_1


SurfSchool_Script_Trigger_LeafSceneA::
# 184 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 185 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 186 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 187 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_ExclamationMark
# 188 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 189 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 190 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 191 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_LeafScene
	return


SurfSchool_Script_Trigger_LeafSceneB::
# 195 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 196 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 197 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 198 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_ExclamationMark
# 199 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 200 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call SurfSchool_Script_LeafScene
	return


SurfSchool_Script_LeafScene::
# 206 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 5
# 208 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 209 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 210 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft2
# 211 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 213 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 214 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf1
# 215 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 216 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 218 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 219 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_WalkUp
# 220 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 222 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 223 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty1
# 224 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 226 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 227 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 228 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 230 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 231 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf2
# 232 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 233 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 234 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 236 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 237 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceUp
# 238 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 240 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 241 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty2
# 242 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 243 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 245 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	multi_2_vs_1 TRAINER_MISTY, SurfSchool_Text_MistyLost, PARTNER_LEAF
# 247 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 248 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty3
# 249 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 250 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 252 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	giveitem ITEM_SURFBOARD
# 254 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 255 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty4
# 256 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 258 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 259 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, Common_Movement_FaceRight
# 260 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 262 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_LEAF, 190, 98
# 263 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Leaf3
# 264 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 265 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_LEAF
# 267 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_LEAF, SurfSchool_Movement_LeafExit
# 268 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 270 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	hideobjectat LOCALID_SURF_SCHOOL_LEAF, MAP_TRANQUILLITAS_SURF_SCHOOL
# 271 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	removeobject LOCALID_SURF_SCHOOL_LEAF
# 272 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectxyperm LOCALID_SURF_SCHOOL_LEAF, 0, 0
# 273 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setobjectmovementtype LOCALID_SURF_SCHOOL_LEAF, MOVEMENT_TYPE_INVISIBLE
# 275 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


Common_Script_SelectPartyForMultiBattle::
# 280 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	special SavePlayerParty
# 281 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	special ChooseHalfPartyForBattle
# 282 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitstate
# 283 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_Script_SelectPartyForMultiBattle_1
	return

Common_Script_SelectPartyForMultiBattle_1:
# 284 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
	return


SurfSchool_Script_Misty::
# 291 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 292 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	load_field_pic FIELD_PIC_MISTY, 190, 98
# 293 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Misty5
# 294 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	destroy_field_pic FIELD_PIC_MISTY
# 295 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 296 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	call Common_Script_Unfaceplayer
	end


# 301 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
SurfSchool_Movement_LeafExit:
# 302 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 303 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 303 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 303 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 304 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_up
# 304 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_up
# 305 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 305 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 305 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 305 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 305 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_right
# 306 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 306 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 306 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 306 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 307 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 308 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 309 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_left
# 310 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
# 310 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	walk_down
	step_end

SurfSchool_Text_Surfer1Intro::
# 314 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You don't look tough enough to handle\n"
	.string "the open water where pokemon attack at\l"
	.string "any moment. Let me test your skill.$"

SurfSchool_Text_Surfer1Lost::
# 320 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You catch on fast.$"

SurfSchool_Text_Surfer1Post::
# 324 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "While surfing the oceans a wild pokemon\n"
	.string "could suddenly attack so you must\l"
	.string "always be alert.$"

SurfSchool_Text_Surfer2Intro::
# 331 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "So, you think you can tame the mighty\n"
	.string "waves?$"

SurfSchool_Text_Surfer2Lost::
# 335 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You're stronger than you look.$"

SurfSchool_Text_Surfer2Post::
# 339 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "While you're surfing be careful not to\n"
	.string "wander into a deep sea current which\l"
	.string "could whisk you away. There's no way of\l"
	.string "stopping once you're caught up!$"

SurfSchool_Text_Surfer3Intro::
# 347 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "It's time for me to test your aptitude.$"

SurfSchool_Text_Surfer3Lost::
# 351 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You've satisfied my examination.$"

SurfSchool_Text_Surfer3Post::
# 355 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Stay close to shore if you're not\n"
	.string "strong enough to surf the ocean. The\l"
	.string "shallow waters are home to much weaker\l"
	.string "pokemon than the monsters lurking in\l"
	.string "the deep ocean.$"

SurfSchool_Text_Surfer4Intro::
# 363 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "If you get past me you may face Misty\n"
	.string "and demonstrate your worthiness to\l"
	.string "surf.$"

SurfSchool_Text_Surfer4Lost::
# 368 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Impressive.$"

SurfSchool_Text_Surfer4Post::
# 372 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
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
# 396 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Ok, let's do this, let's leran how to\n"
	.string "surf.$"

SurfSchool_Text_Misty1::
# 400 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "You've both demonstrated prerequisite\n"
	.string "ability you need to learn to surf but\l"
	.string "before I can give you your surfboards\l"
	.string "you must pass one last examination.\l"
	.string "Since you enrolled in Surf School as a\l"
	.string "pair I will assess your capabilities as\l"
	.string "one. You will need to work together to\l"
	.string "defeat me and pass my Surfing School.$"

SurfSchool_Text_Leaf2::
# 411 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Here we go {PLAYER}, time to earn our\n"
	.string "surfboards and demonstrate the power\l"
	.string "of our love. We'll take down Misty\l"
	.string "together. Let's both choose 3 pokemon\l"
	.string "to use in battle. I'll be bringing\l"
	.string "Jigglypuff, Bayleef, and Jynx. What\l"
	.string "three pokemon will you choose?$"

SurfSchool_Text_Misty2::
# 420 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Now I will test the strength of your\n"
	.string "union and see if you're ready to surf\l"
	.string "the seas.$"

SurfSchool_Text_MistyLost::
# 425 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Your strength as a couple's\n"
	.string "unquestionable.$"

SurfSchool_Text_Misty3::
# 429 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Impressive, you have both\n"
	.string "demonstrated your readiness to surf,\l"
	.string "so please take these.$"

SurfSchool_Text_Misty4::
# 434 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "With those surfboards you'll be able to\n"
	.string "surf over the seven seas and explore\l"
	.string "the surface of rivers, lakes, and indoor\l"
	.string "pools. While I'm sure you're excited to\l"
	.string "set out I must again warn you of the\l"
	.string "dangers of travelling across open\l"
	.string "water. There are many dangerous\l"
	.string "pokemon who lurk in the deep waters of\l"
	.string "the sea. Even Mare Tranquillum, just to\l"
	.string "the south, often considered by most to\l"
	.string "be safe, is home to dangerous creatures\l"
	.string "beneath the waves. These dangers are\l"
	.string "only increased as you explore the other\l"
	.string "seven seas. Mare Tropicum, west of\l"
	.string "Tranquillum, is similar in that it's\l"
	.string "mostly safe, and Mare Internum is not\l"
	.string "as deep as the outer oceans but the\l"
	.string "deep seas of Occidens, Oriens, and even\l"
	.string "Subtropicum will pose a serious risk to\l"
	.string "any surfer who's unprepared, but the\l"
	.string "wicked Mare Mortuorum, located\l"
	.string "southeast of Mare Tranquillum, is a\l"
	.string "place of death and evil where few have\l"
	.string "ever returned from to tell the tale. I\l"
	.string "cannot stress enough you must not go\l"
	.string "into that deadly sea bounded by the\l"
	.string "Isla Ignifera, Yerba Buena, and the\l"
	.string "narrow southern penninsula that\l"
	.string "divides the peaceful Mare Tranquillum\l"
	.string "from the evil Mare Mortuorum. Turn back\l"
	.string "if you ever go near that place. Now that\l"
	.string "I have told you of the dangers of\l"
	.string "surfing the ocean I release you\l"
	.string "t'experience the thrill of true freedom\l"
	.string "sufing the seven seas. Have fun. Be\l"
	.string "safe.$"

SurfSchool_Text_Leaf3::
# 472 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "I'm so excited {PLAYER} I can't\n"
	.string "believe we finally have surfboards of\l"
	.string "our own. I can't wait to go out and ride\l"
	.string "the waves. C'mon! I'll catch you on the\l"
	.string "seven seas, and don't worry you know\l"
	.string "I'll stay away from the deep oceans of\l"
	.string "the east and west and south and the\l"
	.string "Mare Mortuorum.$"

SurfSchool_Text_Misty5::
# 482 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "Have fun surfing, but do not surf too\n"
	.string "far. With great freedom comes great\l"
	.string "chance peril, you must be cautions and\l"
	.string "please stay away from oceans too deep\l"
	.string "for your skill level and don't enter Mare\l"
	.string "Mortuorum unless you tire of your\l"
	.string "mortal life.$"
