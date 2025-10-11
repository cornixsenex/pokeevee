AldeonTown_ServantHouse_MapScripts::
# 5 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 8
	goto_if_eq AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 8
	goto_if_gt AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_SetupOrestesScene
	goto AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_ShowServantByStairs
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
# 18 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 9
	goto_if_lt AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_HideStairs
	return

AldeonTown_ServantHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 8, AldeonTown_ServantHouse_Script_OrestesInServantHouse
	.2byte 0


AldeonTown_ServantHouse_Script_SetupOrestesScene::
# 30 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_SERVANT, 6, 5
# 31 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_ORESTES, 5, 5
# 32 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectmovementtype LOCALID_ALDEONSERVANTHOUSE_ORESTES, MOVEMENT_TYPE_FACE_RIGHT
	return


AldeonTown_ServantHouse_Script_ShowServantByStairs::
# 37 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_SERVANT, 7, 2
# 38 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectmovementtype LOCALID_ALDEONSERVANTHOUSE_SERVANT, MOVEMENT_TYPE_FACE_DOWN
	return


AldeonTown_ServantHouse_Script_HideStairs::
# 43 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 0, METATILE_GenericBuilding_BlueWall_StairsTopLeft, TRUE
# 44 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 0, METATILE_GenericBuilding_BlueWall_StairsTopCenter, TRUE
# 45 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 0, METATILE_GenericBuilding_BlueWall_StairsTopRight, TRUE
# 46 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_BlueWall_StairsBottomLeft, TRUE
# 47 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, TRUE
# 48 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 1, METATILE_GenericBuilding_BlueWall_StairsBottomRight, TRUE
# 49 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	special DrawWholeMapView
	return


AldeonTown_ServantHouse_Script_ShowStairs::
# 54 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 55 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 56 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 0, METATILE_GenericBuilding_BlueWallTop, TRUE
# 57 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
# 58 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 6, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
# 59 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setmetatile 7, 1, METATILE_GenericBuilding_BlueWallBottom, TRUE
	return


AldeonTown_ServantHouse_Script_OrestesInServantHouse::
# 65 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 66 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 69 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 70 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight2
# 71 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 72 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 73 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 75 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_SAILOR2, 190, 98
# 76 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Servant1
# 77 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_SAILOR2
# 79 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 80 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes1
# 81 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 83 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_SAILOR2, 190, 98
# 84 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Servant2
# 85 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_SAILOR2
# 87 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 88 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes2
# 89 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 91 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_SAILOR2, 190, 98
# 92 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Servant3
# 93 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_SAILOR2
# 94 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 96 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_WalkUp3
# 97 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_ORESTES, Common_Movement_WalkUp3
# 98 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 99 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 101 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_ORESTES, Common_Movement_FaceRight
# 102 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 104 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	playse SE_EFFECTIVE
# 105 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitse
# 107 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	call AldeonTown_ServantHouse_Script_HideStairs
# 109 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_FaceLeft
# 110 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 113 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes3
# 114 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 116 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_SAILOR2, 190, 98
# 117 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Servant4
# 118 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_SAILOR2
# 120 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 121 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes4
# 122 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 123 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 125 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_WalkRight
# 126 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_ORESTES, Common_Movement_WalkRight
# 127 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 129 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_FaceLeft
# 130 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 132 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 133 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_OrestesScene_Orestes5
# 134 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 135 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 137 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_FaceDown
# 138 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 140 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_ORESTES, Common_Movement_WalkUp
# 141 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
# 143 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	removeobject LOCALID_ALDEONSERVANTHOUSE_ORESTES
# 144 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectxyperm LOCALID_ALDEONSERVANTHOUSE_ORESTES, 0, 0
# 145 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setobjectmovementtype LOCALID_ALDEONSERVANTHOUSE_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 146 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	addobject LOCALID_ALDEONSERVANTHOUSE_ORESTES
# 148 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	setvar VAR_ORESTES_STATE, 9
	end


AldeonTown_ServantHouse_Script_Servant::
# 154 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	lock
# 155 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	faceplayer
# 157 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 8
	goto_if_lt AldeonTown_ServantHouse_Script_Servant_2
# 179 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	compare VAR_ORESTES_STATE, 9
	goto_if_eq AldeonTown_ServantHouse_Script_Servant_3
# 186 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_ServantAfterOrestreia
# 187 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 188 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 189 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
AldeonTown_ServantHouse_Script_Servant_1:
# 191 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	release
	end

AldeonTown_ServantHouse_Script_Servant_2:
# 158 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 159 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 1, AldeonTown_ServantHouse_Script_Servant_9
# 161 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 2, AldeonTown_ServantHouse_Script_Servant_9
# 163 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 3, AldeonTown_ServantHouse_Script_Servant_10
# 164 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 4, AldeonTown_ServantHouse_Script_Servant_10
# 166 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 5, AldeonTown_ServantHouse_Script_Servant_11
# 167 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 6, AldeonTown_ServantHouse_Script_Servant_11
# 169 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 7, AldeonTown_ServantHouse_Script_Servant_12
# 170 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	case 8, AldeonTown_ServantHouse_Script_Servant_12
# 173 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant5, MSGBOX_DEFAULT
AldeonTown_ServantHouse_Script_Servant_7:
# 175 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 176 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 177 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_3:
# 180 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_ServantDuringOrestreia
# 181 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	closemessage
# 182 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	applymovement LOCALID_ALDEONSERVANTHOUSE_SERVANT, Common_Movement_FaceDown
# 183 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	waitmovement 0
	goto AldeonTown_ServantHouse_Script_Servant_1

AldeonTown_ServantHouse_Script_Servant_9:
# 162 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant1, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_7

AldeonTown_ServantHouse_Script_Servant_10:
# 165 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant2, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_7

AldeonTown_ServantHouse_Script_Servant_11:
# 168 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant3, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_7

AldeonTown_ServantHouse_Script_Servant_12:
# 171 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	msgbox AldeonTown_ServantHouse_Text_Servant4, MSGBOX_DEFAULT
	goto AldeonTown_ServantHouse_Script_Servant_7


AldeonTown_ServantHouse_Text_Servant1::
# 196 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Here house me entire life me servin'.$"

AldeonTown_ServantHouse_Text_Servant2::
# 200 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Before master's birthin' mighty Atreus\n"
	.string "here me servin' way back before\l"
	.string "Republic nosin' around.$"

AldeonTown_ServantHouse_Text_Servant3::
# 205 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Young master Orestes some time being\n"
	.string "gone. Family missin' him I think.$"

AldeonTown_ServantHouse_Text_Servant4::
# 210 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Not here but way back in island home me\n"
	.string "birthin'.$"

AldeonTown_ServantHouse_Text_Servant5::
# 215 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Good man Master Agamemnon being and\n"
	.string "kind master but recently not seemin'\l"
	.string "well. Indoors shuttin' like this Master\l"
	.string "Atreus never be doin'. Master Menelaus\l"
	.string "returnin' soon me hopin'.$"

AldeonTown_ServantHouse_Text_OrestesScene_Servant1::
# 219 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Oh young master! It's so good to see\n"
	.string "you alive and well again! We had all\l"
	.string "begun to worry...$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes1::
# 223 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "I have no time to waste on pleasantries\n"
	.string "I must make haste, I'm here to save\l"
	.string "father...$"

AldeonTown_ServantHouse_Text_OrestesScene_Servant2::
# 228 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "But your father hasn't...$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes2::
# 232 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Enough! I did not come to bandy words\n"
	.string "with foolish servants! Open the\l"
	.string "passage to the kitchen. I must be one\l"
	.string "my way!$"

AldeonTown_ServantHouse_Text_OrestesScene_Servant3::
# 238 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Open the kitchen passage? That's a\n"
	.string "strange request, but whatever you say\l"
	.string "young master.$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes3::
# 242 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Now step aside, servant, your work is\n"
	.string "done.$"

AldeonTown_ServantHouse_Text_OrestesScene_Servant4::
# 246 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "You're going into the servant's\n"
	.string "passage? Young masster, never in all my\l"
	.string "days...Why not just use the front door?$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes4::
# 250 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Never you mind 'why.' Get out of my way!$"

AldeonTown_ServantHouse_Text_OrestesScene_Orestes5::
# 254 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Do not follow, and let him pass as well.$"

AldeonTown_ServantHouse_Text_ServantDuringOrestreia::
# 258 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "This is all so strange, what's gotten\n"
	.string "into the young master, and who are you?$"

AldeonTown_ServantHouse_Text_ServantAfterOrestreia::
# 262 "data/maps/AldeonTown_ServantHouse/scripts.pory"
	.string "Thank you for helping young master and\n"
	.string "saving master Agamemnon. The house\l"
	.string "finally feels peaceful and happy again.$"
