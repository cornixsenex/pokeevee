Aldeon_Leaf_House_MapScripts::
# 8 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 18 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_GRANNY_STATE, 15
	goto_if_eq Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Aldeon_Leaf_House_Script_ShowLeafScene
	return

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 15, Tucson_Script_FacePlayerNorth
	.2byte 0

Aldeon_Leaf_House_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/Aldeon_Leaf_House/scripts.pory"
	map_script_2 VAR_GRANNY_STATE, 15, Aldeon_Leaf_House_IntroScene
	.2byte 0


Aldeon_Leaf_House_Script_ShowLeafScene::
# 24 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 1, 8, 8
# 25 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 2, 7, 12
# 28 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


Aldeon_Leaf_House_IntroScene::
# 34 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 36 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setvar VAR_GRANNY_STATE, 16
# 38 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 39 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 41 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 42 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott1, MSGBOX_DEFAULT
# 43 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 45 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 46 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf1, MSGBOX_DEFAULT
# 47 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 48 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 50 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_LeafToScott
# 51 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_Movement_ScottToLeaf
# 52 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 54 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 55 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott2, MSGBOX_DEFAULT
# 56 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 58 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 59 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf2, MSGBOX_DEFAULT
# 60 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 62 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 63 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott3, MSGBOX_DEFAULT
# 64 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 66 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 67 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3A, MSGBOX_DEFAULT
# 69 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 70 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 72 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3B, MSGBOX_DEFAULT
# 73 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 74 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 76 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 77 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 79 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 80 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 82 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 83 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf3C, MSGBOX_DEFAULT
# 84 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 86 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 87 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 89 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 90 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott4A, MSGBOX_DEFAULT
# 92 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 93 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 95 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott4B, MSGBOX_DEFAULT
# 96 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 98 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 99 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4A, MSGBOX_DEFAULT
# 101 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 102 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 104 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4B, MSGBOX_DEFAULT
# 105 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 107 "data/maps/Aldeon_Leaf_House/scripts.pory"
	special NameRival
# 108 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitstate
# 110 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 111 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf4C, MSGBOX_DEFAULT
# 113 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 114 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 115 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 117 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 118 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott5, MSGBOX_DEFAULT
# 119 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 121 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 122 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf5, MSGBOX_DEFAULT
# 123 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 125 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 126 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott6, MSGBOX_DEFAULT
# 127 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 129 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 130 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf6, MSGBOX_DEFAULT
# 131 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 133 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 33, 190, 98
# 134 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott7A, MSGBOX_DEFAULT
# 135 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 136 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 138 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Scott7B, MSGBOX_DEFAULT
# 139 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 33
# 140 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 142 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 1, Aldeon_Leaf_House_Movement_ScottExit
# 143 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 144 "data/maps/Aldeon_Leaf_House/scripts.pory"
	hideobjectat 1, MAP_ALDEON_LEAF_HOUSE
# 145 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 1
# 147 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 148 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Aldeon_Leaf_House_Movement_LeafToPlayer
# 149 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 151 "data/maps/Aldeon_Leaf_House/scripts.pory"
	load_field_pic 4, 190, 98
# 152 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_Leaf7, MSGBOX_DEFAULT
# 153 "data/maps/Aldeon_Leaf_House/scripts.pory"
	destroy_field_pic 4
# 154 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 156 "data/maps/Aldeon_Leaf_House/scripts.pory"
	applymovement 2, Common_Movement_WalkDown
# 157 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitmovement 0
# 158 "data/maps/Aldeon_Leaf_House/scripts.pory"
	hideobjectat 2, MAP_ALDEON_LEAF_HOUSE
# 159 "data/maps/Aldeon_Leaf_House/scripts.pory"
	removeobject 2
# 161 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 2, 0, 0
# 162 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_INVISIBLE
# 164 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectxyperm 1, 0, 0
# 165 "data/maps/Aldeon_Leaf_House/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_INVISIBLE
# 167 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end


Aldeon_Leaf_House_EventScript_ScottBed::
# 172 "data/maps/Aldeon_Leaf_House/scripts.pory"
	lockall
# 173 "data/maps/Aldeon_Leaf_House/scripts.pory"
	msgbox Aldeon_Leaf_House_Text_ScottBed, MSGBOX_YESNO
# 174 "data/maps/Aldeon_Leaf_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Aldeon_Leaf_House_EventScript_ScottBed_2
Aldeon_Leaf_House_EventScript_ScottBed_1:
# 185 "data/maps/Aldeon_Leaf_House/scripts.pory"
	releaseall
	end

Aldeon_Leaf_House_EventScript_ScottBed_2:
# 175 "data/maps/Aldeon_Leaf_House/scripts.pory"
	closemessage
# 176 "data/maps/Aldeon_Leaf_House/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Aldeon_Leaf_House_EventScript_ScottBed_4
# 179 "data/maps/Aldeon_Leaf_House/scripts.pory"
	playfanfare MUS_HEAL
# 180 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 1
# 181 "data/maps/Aldeon_Leaf_House/scripts.pory"
	waitfanfare
# 182 "data/maps/Aldeon_Leaf_House/scripts.pory"
	fadescreen 0
	goto Aldeon_Leaf_House_EventScript_ScottBed_1

Aldeon_Leaf_House_EventScript_ScottBed_4:
# 177 "data/maps/Aldeon_Leaf_House/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto Aldeon_Leaf_House_EventScript_ScottBed_1


# 190 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf1:
# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 191 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 192 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 193 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 194 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 195 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 198 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player1:
# 199 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 200 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 201 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 202 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 202 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 203 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 204 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

# 207 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Leaf2:
# 208 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 208 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 209 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 209 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 210 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 213 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_Player2:
# 214 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 214 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 214 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 215 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 216 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 219 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadStepDown:
# 220 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 221 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 224 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_LeafStepDown:
# 225 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 226 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 226 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
	step_end

# 229 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Movement_DadExit:
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 230 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

# 233 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafToScott:
# 234 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 234 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_up
# 235 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 238 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_ScottToLeaf:
# 239 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 239 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 240 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_left
	step_end

# 243 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafToPlayer:
# 244 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 245 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_right
	step_end

# 248 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_LeafExit:
# 249 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 249 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/Aldeon_Leaf_House/scripts.pory"
Aldeon_Leaf_House_Movement_ScottExit:
# 253 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_right
# 254 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 254 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_down
# 255 "data/maps/Aldeon_Leaf_House/scripts.pory"
	walk_left
# 256 "data/maps/Aldeon_Leaf_House/scripts.pory"
	face_down
	step_end

Aldeon_Leaf_House_Text_Dad1::
# 259 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "He's come at a most unexpected time. I\n"
	.string "think you two had better take a seat.$"

Aldeon_Leaf_House_Text_Dad2::
# 263 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "You seem allright\n"
	.string "What's up? My name is Scott.\p"
	.string "So, what is he your boyfriend or...?$"

Aldeon_Leaf_House_Text_Dad3::
# 267 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...$"

Aldeon_Leaf_House_Text_Dad4::
# 271 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My God.. well {PLAYER} you have proven\n"
	.string "yourself a noble man and worthy in my\l"
	.string "eyes. You've come however at a special\l"
	.string "time. Have you two heard that Mew has\l"
	.string "come again?$"

Aldeon_Leaf_House_Text_Dad5::
# 275 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. At first I hardly\n"
	.string "thought the news was true, and I\l"
	.string "assumed it was propaganda to celebrate\l"
	.string "the party's victory but earlier as I was\l"
	.string "walking home I saw her flying south with\l"
	.string "my own eyes.$"

Aldeon_Leaf_House_Text_Dad6::
# 279 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Of course we must! To think such things\n"
	.string "were only myths last week. Not in two\l"
	.string "thousand years has this happened. So\l"
	.string "{PLAYER} I'm sure you'll be going with\l"
	.string "Leaf? Before we go she'll need a\l"
	.string "Pokemon and you should go let your own\l"
	.string "family know, but first take this for\l"
	.string "saving my daughter.$"

Aldeon_Leaf_House_Text_DexBallGet::
# 283 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "{PLAYER} recieved 5 PokeBalls!$"

Aldeon_Leaf_House_Text_Dad7::
# 287 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Those Pokeballs belonged to my father.\n"
	.string "The road to Bulbus Town should not be\l"
	.string "hard. We'll wait for you down at my Club\l"
	.string "in town you'll recognize it by the big\l"
	.string "red roof. Now come on Leaf let's go\l"
	.string "catch Pokemon.$"

Aldeon_Leaf_House_Text_ScottBed::
# 291 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "It's Scott's Bed. Would you like to take\n"
	.string "a rest?$"

Aldeon_Leaf_House_Text_Scott1::
# 296 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Oh {LEAF}!$"

Aldeon_Leaf_House_Text_Scott2::
# 300 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Where have you been? When you didn't\n"
	.string "come home I feared the worst and\l"
	.string "thought that Mew herself appeared to\l"
	.string "me as comfort for losing my sweet\l"
	.string "daughter. I'm lost for words...I thought\l"
	.string "that you had died! What happened to\l"
	.string "you? Where's Igglybuff?$"

Aldeon_Leaf_House_Text_Scott3::
# 304 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Some shithead tried to hurt...!$"

Aldeon_Leaf_House_Text_Scott4A::
# 308 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "My name is Scott. It's nice to meet you,\n"
	.string "son. Thank you for saving {LEAF}.$"

Aldeon_Leaf_House_Text_Scott4B::
# 312 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Now tell me who this bastard is who\n"
	.string "tried to take my daughter from me.$"

Aldeon_Leaf_House_Text_Scott5::
# 316 "data/maps/Aldeon_Leaf_House/scripts.pory"
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
# 320 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The very same. Though I may not be a\n"
	.string "church going man, I recognize divine\l"
	.string "when I see it.$"

Aldeon_Leaf_House_Text_Scott7A::
# 324 "data/maps/Aldeon_Leaf_House/scripts.pory"
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
# 328 "data/maps/Aldeon_Leaf_House/scripts.pory"
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
# 332 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, I'm home.$"

Aldeon_Leaf_House_Text_Leaf2::
# 336 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "I was kidnapped! Igglybuff fainted...$"

Aldeon_Leaf_House_Text_Leaf3A::
# 340 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy! I'm fine! For just as Mew\n"
	.string "appeared to you last night she helped\l"
	.string "me to escape once the storm passed\l"
	.string "then Mr. {PLAYER} the brave defended\l"
	.string "me and thanks to him I have returned\l"
	.string "home safe.$"

Aldeon_Leaf_House_Text_Leaf3B::
# 344 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Please come here {PLAYER}, I want you\n"
	.string "to meet dad.$"

Aldeon_Leaf_House_Text_Leaf3C::
# 348 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Daddy, meet {PLAYER}.$"

Aldeon_Leaf_House_Text_Leaf4A::
# 352 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "I don't know... I met him yesterday\n"
	.string "outside the school and followed him to\l"
	.string "his house in the trees.$"

Aldeon_Leaf_House_Text_Leaf4B::
# 356 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Did you happen to catch that monster's\n"
	.string "name?$"

Aldeon_Leaf_House_Text_Leaf4C::
# 360 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "That's right! That evil man's name was\n"
	.string "{RIVAL}.$"

Aldeon_Leaf_House_Text_Leaf5::
# 364 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "The legendary Mew?$"

Aldeon_Leaf_House_Text_Leaf6::
# 368 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "If this is true, we must journey to the\n"
	.string "ancient church on the lake in Saeclara\l"
	.string "where prophesy foretold Mew would\l"
	.string "appear!$"

Aldeon_Leaf_House_Text_Leaf7::
# 372 "data/maps/Aldeon_Leaf_House/scripts.pory"
	.string "Do not delay. We are setting off on a\n"
	.string "great journey to see the mythic Mew. If\l"
	.string "you grow wearey of the road you can go\l"
	.string "to my bed upstairs and take your rest.\l"
	.string "I'll meet you at my father's Lotus Shop.$"
