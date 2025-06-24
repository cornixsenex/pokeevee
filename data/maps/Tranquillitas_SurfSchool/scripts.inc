Tranquillitas_SurfSchool_MapScripts::
	.byte 0


SurfSchool_Script_TriggerSurfer1::
# 5 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 6 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 7 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 8 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 9 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 10 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 11 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 12 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 13 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 14 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 15 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 16 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 17 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer1::
# 22 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 23 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 1
	goto_if_lt SurfSchool_Script_Surfer1_2
# 27 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 1
# 28 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 29 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_ExclamationMark
# 30 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 31 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Intro
# 32 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 33 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer1Lost
# 34 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 35 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer1_1:
# 37 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER1, Common_Movement_FaceLeft
# 38 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer1_2:
# 24 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer1Post
# 25 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer1_1


SurfSchool_Script_TriggerSurfer2::
# 44 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 45 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 46 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 47 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
# 48 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 49 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 50 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 51 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Intro
# 52 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 53 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer2Lost
# 54 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 55 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 56 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer2::
# 61 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 62 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 2
	goto_if_lt SurfSchool_Script_Surfer2_2
# 66 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 2
# 67 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 68 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_ExclamationMark
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
SurfSchool_Script_Surfer2_1:
# 76 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER2, Common_Movement_FaceDown
# 77 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer2_2:
# 63 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer2Post
# 64 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer2_1


SurfSchool_Script_TriggerSurfer3::
# 82 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 83 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 84 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 85 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 86 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 87 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 88 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 89 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 90 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 91 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 92 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 93 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 94 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer3::
# 99 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 100 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 3
	goto_if_lt SurfSchool_Script_Surfer3_2
# 104 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 3
# 105 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 106 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_ExclamationMark
# 107 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 108 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Intro
# 109 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 110 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer3Lost
# 111 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 112 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer3_1:
# 114 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER3, Common_Movement_FaceUp
# 115 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer3_2:
# 101 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer3Post
# 102 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer3_1


SurfSchool_Script_TriggerSurfer4::
# 120 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 121 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 122 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 123 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 124 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 125 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 126 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 127 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 128 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 129 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 130 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 131 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 132 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Surfer4::
# 137 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	faceplayer
# 138 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 4
	goto_if_lt SurfSchool_Script_Surfer4_2
# 142 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	setvar VAR_SURFSCHOOL_STATE, 4
# 143 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GIRL, FALSE
# 144 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_ExclamationMark
# 145 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
# 146 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Intro
# 147 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
# 148 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_SURFINSTRUCTOR, SurfSchool_Text_Surfer4Lost
# 149 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 150 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
SurfSchool_Script_Surfer4_1:
# 152 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	applymovement LOCALID_SURF_SCHOOL_SURFER4, Common_Movement_FaceRight
# 153 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	waitmovement 0
	end

SurfSchool_Script_Surfer4_2:
# 139 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	msgbox SurfSchool_Text_Surfer4Post
# 140 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	closemessage
	goto SurfSchool_Script_Surfer4_1


SurfSchool_Script_LeafScene::
# 159 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 161 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Script_Misty::
# 166 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	lockall
# 168 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	releaseall
	end


SurfSchool_Text_Surfer1Intro::
# 172 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer1Lost::
# 176 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer1Post::
# 180 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer2Intro::
# 185 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer2Lost::
# 189 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer2Post::
# 193 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer3Intro::
# 198 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer3Lost::
# 202 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer3Post::
# 206 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer4Intro::
# 211 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer4Lost::
# 215 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"

SurfSchool_Text_Surfer4Post::
# 219 "data/maps/Tranquillitas_SurfSchool/scripts.pory"
	.string "$"
