Aldeon_Leaf_House_MapScripts::
# 7 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 17 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_eq Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Aldeon_Leaf_House_Script_ShowLeafScene
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 15, Tucson_Script_FacePlayerNorth
	.2byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 15, Aldeon_Leaf_House_IntroScene
	.2byte 0


Aldeon_Leaf_House_Script_ShowLeafScene::
# 23 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 1, 8, 8
# 24 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 26 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 2, 7, 12
# 27 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Aldeon_Leaf_House_IntroScene::
# 33 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 35 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setvar VAR_GRANNY_STATE, 16
# 37 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 38 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 40 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 41 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott1, MSGBOX_DEFAULT
# 42 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 44 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 45 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf1, MSGBOX_DEFAULT
# 46 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 47 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 49 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_LeafToScott
# 50 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_Movement_ScottToLeaf
# 51 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 53 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 54 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott2, MSGBOX_DEFAULT
# 55 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 57 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 58 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf2, MSGBOX_DEFAULT
# 59 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 61 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 62 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott3, MSGBOX_DEFAULT
# 63 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 65 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 66 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3A, MSGBOX_DEFAULT
# 68 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 69 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 71 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3B, MSGBOX_DEFAULT
# 72 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 73 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 75 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 76 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 78 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 79 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 81 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 82 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3C, MSGBOX_DEFAULT
# 83 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 85 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 86 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 88 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 89 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott4A, MSGBOX_DEFAULT
# 91 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 92 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 94 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott4B, MSGBOX_DEFAULT
# 95 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 97 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 98 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4A, MSGBOX_DEFAULT
# 100 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 101 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 103 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4B, MSGBOX_DEFAULT
# 104 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 106 "data/maps/Aldeon_Leaf_House/scripts.pory"
	special NameRival
# 107 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitstate
# 109 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4C, MSGBOX_DEFAULT
# 112 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 113 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 114 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 116 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 117 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott5, MSGBOX_DEFAULT
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 120 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 121 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf5, MSGBOX_DEFAULT
# 122 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 124 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 125 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott6, MSGBOX_DEFAULT
# 126 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 128 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 129 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf6, MSGBOX_DEFAULT
# 130 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 132 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic FIELD_PIC_SCOTT, 190, 98
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott7A, MSGBOX_DEFAULT
# 134 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 135 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 137 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott7B, MSGBOX_DEFAULT
# 138 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic FIELD_PIC_SCOTT
# 139 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 141 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_Movement_ScottExit
# 142 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 143 "data/maps/Aldeon_Leaf_House/scripts.pory"
	hideobjectat 1, MAP_ALDEON_LEAF_HOUSE
# 144 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 1
# 146 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 147 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_LeafToPlayer
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 150 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 151 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf7, MSGBOX_DEFAULT
# 152 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 153 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 155 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 156 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 157 "data/maps/Aldeon_Leaf_House/scripts.pory"
	hideobjectat 2, MAP_ALDEON_LEAF_HOUSE
# 158 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 2
# 160 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 2, 0, 0
# 161 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 163 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 1, 0, 0
# 164 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 166 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_EventScript_ScottBed::
# 171 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 172 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_ScottBed, MSGBOX_YESNO
# 173 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_EventScript_ScottBed_2
Aldeon_Leaf_House_EventScript_ScottBed_1:
# 177 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 178 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_EventScript_ScottBed_2:
# 174 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_EventScript_ScottBed_1


# 183 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf1:
# 184 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 184 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 184 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 184 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 186 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 186 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 187 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 187 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 188 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player1:
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 195 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 195 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 196 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 197 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf2:
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 202 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 202 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 203 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 206 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player2:
# 207 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 207 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 207 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 208 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 209 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 212 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadStepDown:
# 213 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 214 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 217 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_LeafStepDown:
# 218 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 219 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 219 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
	step_end

# 222 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadExit:
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 223 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

# 226 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafToScott:
# 227 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 227 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 228 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 231 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_ScottToLeaf:
# 232 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 232 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 233 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 236 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafToPlayer:
# 237 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 238 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 241 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafExit:
# 242 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 242 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

# 245 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_ScottExit:
# 246 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 247 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 247 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 248 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 249 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

Aldeon_Leaf_House_Text_Dad1::
# 252 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "He's come at a most unexpected time. I\n"
	.string "think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
# 256 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "You seem allright\n"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boyfriend or...?$"

Aldeon_Leaf_House_Text_Dad3::
# 260 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Dad4::
# 264 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Dad5::
# 268 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. At first I hardly\n"
	.string "thought the news was true, and I\l"
	.string "assumed it was propaganda to celebrate\l"
	.string "the party's victory but earlier as I was\l"
	.string "walking home I saw her flying south with\l"
	.string "my own eyes.$"

Aldeon_Leaf_House_Text_Dad6::
# 272 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Of course we must! To think such things\n"
	.string "were only myths last week. Not in two\l"
	.string "thousand years has this happened. So\l"
	.string "{PLAYER} I'm sure you'll be going with\l"
	.string "Leaf? Before we go she'll need a\l"
	.string "Pokemon and you should go let your own\l"
	.string "family know, but first take this for\l"
	.string "saving my daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
# 276 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "{PLAYER} recieved 5 PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
# 280 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Those Pokeballs belonged to my father.\n"
	.string "The road to Bulbus Town should not be\l"
	.string "hard. We'll wait for you down at my Club\l"
	.string "in town you'll recognize it by the big\l"
	.string "red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"

Aldeon_Leaf_House_Text_ScottBed::
# 284 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "It's Scott's Bed. Would you like to take\n"
	.string "a rest?$"

Aldeon_Leaf_House_Text_Scott1::
# 289 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Oh {LEAF}!$"

Aldeon_Leaf_House_Text_Scott2::
# 293 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Where have you been? When you didn't\n"
	.string "come home I feared the worst and\l"
	.string "thought that Mew herself appeared to\l"
	.string "me as comfort for losing my sweet\l"
	.string "daughter. I'm lost for words...I thought\l"
	.string "that you had died! What happened to\l"
	.string "you? Where's Igglybuff?$"

Aldeon_Leaf_House_Text_Scott3::
# 297 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...!$"

Aldeon_Leaf_House_Text_Scott4A::
# 301 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My name is Scott. It's nice to meet you,\n"
	.string "son. Thank you for saving {LEAF}.$"

Aldeon_Leaf_House_Text_Scott4B::
# 305 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Now tell me who this bastard is who\n"
	.string "tried to take my daughter from me.$"

Aldeon_Leaf_House_Text_Scott5::
# 309 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Well {RIVAL} was lucky I wasn't there\n"
	.string "and he better hope that we never meet.\l"
	.string "I thank the stars themselves that\l"
	.string "{PLAYER} was there but these events\l"
	.string "coinciding with the mighty downpour and\l"
	.string "appearance of Mew convince me that\l"
	.string "there's something going on. Perhaps the\l"
	.string "end times, or a new age dawn, a\l"
	.string "pestilence, or a new government. One\l"
	.string "can't be sure but these recent events\l"
	.string "can mean only one thing: Mew has\l"
	.string "returned.$"

Aldeon_Leaf_House_Text_Scott6::
# 313 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. Though I may not be a\n"
	.string "church going man, I recognize divine\l"
	.string "when I see it.$"

Aldeon_Leaf_House_Text_Scott7A::
# 317 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "I see the girl I sent to school is gone\n"
	.string "replaced by a woman matured by grief,\l"
	.string "emancipated by innocence lost, and\l"
	.string "ready to embark on adventure. We shall\l"
	.string "go together to Saeclara but you must\l"
	.string "learn from your recent mistakes. Do not\l"
	.string "fall victim to devious men, protect your\l"
	.string "Pokemon, keep yourself safe, and above\l"
	.string "all keep faith in your sucess.$"

Aldeon_Leaf_House_Text_Scott7B::
# 321 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "You are invited to join us, of course.\n"
	.string "The journey to see Mew is a long one,\l"
	.string "across rugged terrain, and far away.\l"
	.string "Since you have demonstrated your great\l"
	.string "strength, and graduated from the\l"
	.string "Trainer School, I invite you as my\l"
	.string "friend, and equal, to join me on the road\l"
	.string "to Saeclara. You probably should say\l"
	.string "goodbye to your family before you meet\l"
	.string "me at my Lotus Market by the Port of\l"
	.string "Bulbus.$"

Aldeon_Leaf_House_Text_Leaf1::
# 325 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, I'm home.$"

Aldeon_Leaf_House_Text_Leaf2::
# 329 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "I was kidnapped! Igglybuff fainted...$"

Aldeon_Leaf_House_Text_Leaf3A::
# 333 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy! I'm fine! For just as Mew\n"
	.string "appeared to you last night she helped\l"
	.string "me to escape once the storm passed\l"
	.string "then Mr. {PLAYER} the brave defended\l"
	.string "me and thanks to him I have returned\l"
	.string "home safe.$"

Aldeon_Leaf_House_Text_Leaf3B::
# 337 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Please come here {PLAYER}, I want you\n"
	.string "to meet dad.$"

Aldeon_Leaf_House_Text_Leaf3C::
# 341 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, meet {PLAYER}.$"

Aldeon_Leaf_House_Text_Leaf4A::
# 345 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "I don't know... I met him yesterday\n"
	.string "outside the school and followed him to\l"
	.string "his house in the trees.$"

Aldeon_Leaf_House_Text_Leaf4B::
# 349 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Did you happen to catch that monster's\n"
	.string "name?$"

Aldeon_Leaf_House_Text_Leaf4C::
# 353 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "That's right! That evil man's name was\n"
	.string "{RIVAL}.$"

Aldeon_Leaf_House_Text_Leaf5::
# 357 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The legendary Mew?$"

Aldeon_Leaf_House_Text_Leaf6::
# 361 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "If this is true, we must journey to the\n"
	.string "ancient church on the lake in Saeclara\l"
	.string "where prophesy foretold Mew would\l"
	.string "appear!$"

Aldeon_Leaf_House_Text_Leaf7::
# 365 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Do not delay. We are setting off on a\n"
	.string "great journey to see the mythic Mew. If\l"
	.string "you grow weary of the road you can go\l"
	.string "to my bed upstairs and take your rest.\l"
	.string "I'll meet you at my father's Lotus Shop.$"
