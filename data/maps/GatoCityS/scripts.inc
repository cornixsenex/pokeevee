GatoCityS_MapScripts::
# 13 "data/maps/GatoCityS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 42 "data/maps/GatoCityS/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GatoCityS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 51 "data/maps/GatoCityS/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GatoCityS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/GatoCityS/scripts.pory"
	switch VAR_SALTYSPITOON_STATE
# 15 "data/maps/GatoCityS/scripts.pory"
	case 1, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/GatoCityS/scripts.pory"
	case 2, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data/maps/GatoCityS/scripts.pory"
	case 3, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 21 "data/maps/GatoCityS/scripts.pory"
	case 4, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 24 "data/maps/GatoCityS/scripts.pory"
	case 25, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 26 "data/maps/GatoCityS/scripts.pory"
	case 26, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 28 "data/maps/GatoCityS/scripts.pory"
	case 27, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 30 "data/maps/GatoCityS/scripts.pory"
	case 35, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 32 "data/maps/GatoCityS/scripts.pory"
	case 36, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 34 "data/maps/GatoCityS/scripts.pory"
	case 37, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 37 "data/maps/GatoCityS/scripts.pory"
	case 44, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var4
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 25 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 27 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 31 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 33 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 35 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 38 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var44
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 43 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 25, Common_Script_FacePlayerRight
# 44 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 26, Common_Script_FacePlayerUp
# 45 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 27, Common_Script_FacePlayerLeft
# 46 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 35, Common_Script_FacePlayerRight
# 47 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 36, Common_Script_FacePlayerUp
# 48 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 37, Common_Script_FacePlayerLeft
	.2byte 0

GatoCityS_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 52 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 25, GatoCityS_EventScript_Return
# 53 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 26, GatoCityS_EventScript_Return
# 54 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 27, GatoCityS_EventScript_Return
# 55 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityS_EventScript_ShowSWHJ
# 56 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityS_EventScript_ShowSWHJ
# 57 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityS_EventScript_ShowSWHJ
# 58 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 44, GatoCityS_EventScript_ResetSS
	.2byte 0


GatoCityS_EventScript_ResetSS::
# 64 "data/maps/GatoCityS/scripts.pory"
	setflag FLAG_TEMP_1
# 65 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 4
	end


GatoCityS_EventScript_Return::
# 70 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 4
	goto_if_eq GatoCityS_EventScript_Return_2
# 74 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 3
GatoCityS_EventScript_Return_1:
	end

GatoCityS_EventScript_Return_2:
# 71 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_UnlockSaltySpitoon
	goto GatoCityS_EventScript_Return_1


GatoCityS_EventScript_ShowSWHJ::
# 80 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 81 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_SWHJ
# 82 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 83 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 84 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 85 "data/maps/GatoCityS/scripts.pory"
	warp MAP_GATO_CITY_E, 14, 20
# 86 "data/maps/GatoCityS/scripts.pory"
	waitstate
	end


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1::
# 91 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 92 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 4, 38, 8
# 93 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 5, 39, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2::
# 98 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 99 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 100 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 5, 38, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3::
# 105 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 106 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 107 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 108 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left::
# 113 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 114 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 115 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 116 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down::
# 121 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 122 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 123 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 124 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right::
# 129 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 130 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 131 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 132 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var4::
# 137 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 138 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 139 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 140 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var44::
# 145 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 146 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 147 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 148 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 36, 8
# 149 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_WatchSeller::
# 154 "data/maps/GatoCityS/scripts.pory"
	lock
# 155 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_WatchSeller1
# 156 "data/maps/GatoCityS/scripts.pory"
	waitmessage
# 157 "data/maps/GatoCityS/scripts.pory"
	pokemart GatoCityS_Mart_WatchSeller
# 158 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_WatchSeller2
# 159 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 160 "data/maps/GatoCityS/scripts.pory"
	release
	end


	.align 2
# 164 "data/maps/GatoCityS/scripts.pory"
GatoCityS_Mart_WatchSeller:
# 165 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 166 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 167 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 168 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_LEMONADE
# 169 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

GatoCityS_EventScript_SaltySpitoon_M3::
# 173 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SALTYSPITOON_STATE, 2
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_M3_2
GatoCityS_EventScript_SaltySpitoon_M3_1:
# 178 "data/maps/GatoCityS/scripts.pory"
	lock
# 179 "data/maps/GatoCityS/scripts.pory"
	switch VAR_SALTYSPITOON_STATE
# 181 "data/maps/GatoCityS/scripts.pory"
	case 0, GatoCityS_EventScript_SaltySpitoon_M3_6
# 219 "data/maps/GatoCityS/scripts.pory"
	case 1, GatoCityS_EventScript_SaltySpitoon_M3_7
# 269 "data/maps/GatoCityS/scripts.pory"
	case 2, GatoCityS_EventScript_SaltySpitoon_M3_8
GatoCityS_EventScript_SaltySpitoon_M3_4:
# 272 "data/maps/GatoCityS/scripts.pory"
	release
	return

GatoCityS_EventScript_SaltySpitoon_M3_2:
# 174 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 175 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 176 "data/maps/GatoCityS/scripts.pory"
	faceplayer
	goto GatoCityS_EventScript_SaltySpitoon_M3_1

GatoCityS_EventScript_SaltySpitoon_M3_6:
# 183 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3A
# 184 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 185 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 186 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 187 "data/maps/GatoCityS/scripts.pory"
	delay 15
# 189 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 190 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 191 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 192 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 193 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 195 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 18, 190, 98
# 196 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M1B
# 197 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 198 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 18
# 199 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 201 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 202 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
# 203 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 204 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 205 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 207 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 208 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 209 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 210 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 211 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 212 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 213 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 214 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 215 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
# 216 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 217 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 218 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 1
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_7:
# 221 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3B
# 222 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 223 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 224 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 225 "data/maps/GatoCityS/scripts.pory"
	delay 15
# 227 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 228 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 229 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 230 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 231 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 233 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 234 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2A
# 235 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 236 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 237 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 239 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 240 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
# 241 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 242 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 243 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 245 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 246 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
# 247 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 248 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 249 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 251 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 252 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
# 253 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 254 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 255 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 257 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 259 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 260 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 261 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 262 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 263 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 264 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 265 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
# 266 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 267 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 268 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 2
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_8:
# 270 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_M3_4


GatoCityS_EventScript_M3Exit::
# 278 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 279 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM2
# 280 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 281 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 282 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 284 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 17, 190, 98
# 285 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3C
# 286 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 287 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 17
# 288 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 290 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 291 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM3
# 292 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 293 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 294 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 296 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 17, 190, 98
# 297 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_M3Exit_Text_0
# 298 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 299 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 17
# 300 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 302 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 303 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 304 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 305 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 306 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 307 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 308 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3
# 309 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 310 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 311 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 312 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 313 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 3
# 314 "data/maps/GatoCityS/scripts.pory"
	release
	return


GatoCityS_EventScript_SaltySpitoon_M2::
# 318 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SALTYSPITOON_STATE, 1
	goto_if_ne GatoCityS_EventScript_SaltySpitoon_M2_2
# 326 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
GatoCityS_EventScript_SaltySpitoon_M2_1:
# 328 "data/maps/GatoCityS/scripts.pory"
	release
	end

GatoCityS_EventScript_SaltySpitoon_M2_2:
# 319 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 320 "data/maps/GatoCityS/scripts.pory"
	lock
# 321 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2
# 322 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 323 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 324 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_M2_1


GatoCityS_EventScript_SaltySpitoon_M2Exit::
# 334 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 335 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 336 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 337 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 338 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 340 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 341 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2A
# 342 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 343 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 344 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 346 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 347 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
# 348 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 349 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 350 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 352 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 353 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
# 354 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 355 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 356 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 358 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 359 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
# 360 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 361 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 362 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 364 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 366 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 367 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 368 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 369 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 370 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 371 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 372 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
# 373 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 374 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 375 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 2
	return


GatoCityS_EventScript_SaltySpitoon_M1::
# 382 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 383 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 384 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 385 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 386 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 388 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 18, 190, 98
# 389 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M1B
# 390 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 391 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 18
# 392 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 394 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 395 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
# 396 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 397 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 398 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 400 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 401 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 402 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 403 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 404 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 405 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 406 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 407 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 408 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
# 409 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 410 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 411 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 1
	return


GatoCityS_EventScript_SaltySpitoon_DM::
# 416 "data/maps/GatoCityS/scripts.pory"
	lock
# 417 "data/maps/GatoCityS/scripts.pory"
	switch VAR_SALTYSPITOON_STATE
# 418 "data/maps/GatoCityS/scripts.pory"
	case 0, GatoCityS_EventScript_SaltySpitoon_DM_3
# 431 "data/maps/GatoCityS/scripts.pory"
	case 1, GatoCityS_EventScript_SaltySpitoon_DM_4
# 444 "data/maps/GatoCityS/scripts.pory"
	case 2, GatoCityS_EventScript_SaltySpitoon_DM_5
# 457 "data/maps/GatoCityS/scripts.pory"
	case 3, GatoCityS_EventScript_SaltySpitoon_DM_6
# 485 "data/maps/GatoCityS/scripts.pory"
	case 4, GatoCityS_EventScript_SaltySpitoon_DM_7
GatoCityS_EventScript_SaltySpitoon_DM_1:
# 489 "data/maps/GatoCityS/scripts.pory"
	release
	end

GatoCityS_EventScript_SaltySpitoon_DM_3:
# 419 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 420 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_8
# 429 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M1
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_4:
# 432 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 433 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_11
# 442 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_5:
# 445 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 446 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_14
# 455 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_6:
# 458 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 459 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 460 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_NoEntry
# 461 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 462 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 463 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 464 "data/maps/GatoCityS/scripts.pory"
	switch VAR_RESULT
# 465 "data/maps/GatoCityS/scripts.pory"
	case DIR_WEST, GatoCityS_EventScript_SaltySpitoon_DM_19
# 471 "data/maps/GatoCityS/scripts.pory"
	case DIR_NORTH, GatoCityS_EventScript_SaltySpitoon_DM_20
# 477 "data/maps/GatoCityS/scripts.pory"
	case DIR_EAST, GatoCityS_EventScript_SaltySpitoon_DM_21
GatoCityS_EventScript_SaltySpitoon_DM_17:
# 484 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_DM_WHJ
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_7:
# 486 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 487 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_OpenSaltySpitoon
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_8:
# 421 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 422 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 423 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 424 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 425 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 426 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 427 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_11:
# 434 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 435 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 436 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 437 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 438 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 439 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 440 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_14:
# 447 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 448 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 449 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 450 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 451 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 452 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 453 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_19:
# 466 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_22
# 469 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 7
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_20:
# 472 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_25
# 475 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 6
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_21:
# 478 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_28
# 481 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 5
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_22:
# 467 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 17
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_25:
# 473 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 16
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_28:
# 479 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 15
	goto GatoCityS_EventScript_SaltySpitoon_DM_17


GatoCityS_EventScript_DM_WHJ::
# 494 "data/maps/GatoCityS/scripts.pory"
	warp MAP_GATO_CITY_DT, 52, 21
# 495 "data/maps/GatoCityS/scripts.pory"
	waitstate
	end


GatoCityS_EventScript_UnlockSaltySpitoon::
# 500 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 4
# 501 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 502 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 503 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 504 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_Pass
# 505 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 506 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 507 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 508 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_OpenSaltySpitoon
	return


GatoCityS_EventScript_OpenSaltySpitoon::
# 512 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 513 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_DM_Welcome
# 514 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 515 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 516 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 517 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 518 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_OpenSaltySpitoon_5
GatoCityS_EventScript_OpenSaltySpitoon_4:
# 525 "data/maps/GatoCityS/scripts.pory"
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_3
GatoCityS_EventScript_OpenSaltySpitoon_1:
# 533 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

GatoCityS_EventScript_OpenSaltySpitoon_2:
# 519 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 520 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 521 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 522 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 523 "data/maps/GatoCityS/scripts.pory"
	setflag FLAG_TEMP_1
# 524 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 38, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_3:
# 526 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 527 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 528 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 529 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 530 "data/maps/GatoCityS/scripts.pory"
	setflag FLAG_TEMP_1
# 531 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 36, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_5:
# 518 "data/maps/GatoCityS/scripts.pory"
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_2
	goto GatoCityS_EventScript_OpenSaltySpitoon_4


GatoCityS_EventScript_SaltySpitoon_Vagrant1::
# 538 "data/maps/GatoCityS/scripts.pory"
	lock
# 539 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_Vagrant1
# 540 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 541 "data/maps/GatoCityS/scripts.pory"
	release
	end


GatoCityS_EventScript_SaltySpitoon_Vagrant2::
# 546 "data/maps/GatoCityS/scripts.pory"
	lock
# 547 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_Vagrant2
# 548 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 549 "data/maps/GatoCityS/scripts.pory"
	release
	end


# 556 "data/maps/GatoCityS/scripts.pory"
GatoCityS_Movement_Pacer:
# 557 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 557 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 557 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 558 "data/maps/GatoCityS/scripts.pory"
	walk_right
# 558 "data/maps/GatoCityS/scripts.pory"
	walk_right
# 558 "data/maps/GatoCityS/scripts.pory"
	walk_right
	step_end

GatoCityS_EventScript_SaltySpitoon_M3_Text_0:
# 202 "data/maps/GatoCityS/scripts.pory"
	.string "Alright, go right ahead.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_1:
# 240 "data/maps/GatoCityS/scripts.pory"
	.string "Yeah, so?$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_2:
# 246 "data/maps/GatoCityS/scripts.pory"
	.string "Without any milk.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_3:
# 252 "data/maps/GatoCityS/scripts.pory"
	.string "Uhh, right this way.$"

GatoCityS_EventScript_M3Exit_Text_0:
# 297 "data/maps/GatoCityS/scripts.pory"
	.string "Thanks, Reg.$"

GatoCityS_EventScript_SaltySpitoon_DM_Text_0:
# 423 "data/maps/GatoCityS/scripts.pory"
	.string "What are you looking at?$"

GatoCityS_Text_DM_Welcome::
# 561 "data/maps/GatoCityS/scripts.pory"
	.string "Welcome to the Salty Spitoon. Go on in.$"

GatoCityS_Text_WatchSeller1::
# 565 "data/maps/GatoCityS/scripts.pory"
	.string "Hey kid, you wanna buy a watch? Come\n"
	.string "here.$"

GatoCityS_Text_WatchSeller2::
# 569 "data/maps/GatoCityS/scripts.pory"
	.string "You don't know who I am! We never\n"
	.string "talked...$"

GatoCityS_Text_SaltySpitoon_M1B::
# 573 "data/maps/GatoCityS/scripts.pory"
	.string "How tough am I? How tough am I!? Just\n"
	.string "look at my muscles! I've got muscles on\l"
	.string "my muscles! I've got muscles on my\l"
	.string "eyeballs! Aaarrrrggghhh!$"

GatoCityS_Text_SaltySpitoon_M3A::
# 577 "data/maps/GatoCityS/scripts.pory"
	.string "Huh? What was that? Did someone throw\n"
	.string "a piece of paper at me?$"

GatoCityS_Text_SaltySpitoon_M3B::
# 581 "data/maps/GatoCityS/scripts.pory"
	.string "Hey! Quit shovin and wait your turn in\n"
	.string "line!$"

GatoCityS_Text_SaltySpitoon_M3C::
# 585 "data/maps/GatoCityS/scripts.pory"
	.string "Yeah, and check it out I can even make\n"
	.string "it dance. Uhh! Uhhh! Uhhhhh!$"

GatoCityS_Text_SaltySpitoon_DM1::
# 589 "data/maps/GatoCityS/scripts.pory"
	.string "Welcome to the Salty Spitoon. How tough\n"
	.string "are ya?$"

GatoCityS_Text_SaltySpitoon_DM2::
# 593 "data/maps/GatoCityS/scripts.pory"
	.string "Alright, now it's a party! Is that some\n"
	.string "new ink you got there?$"

GatoCityS_Text_SaltySpitoon_DM3::
# 597 "data/maps/GatoCityS/scripts.pory"
	.string "Looks sweet, go on in buddy.$"

GatoCityS_Text_SaltySpitoon_M2A::
# 601 "data/maps/GatoCityS/scripts.pory"
	.string "How tough am I? I had a bowl of nails\n"
	.string "for breakfast!$"

GatoCityS_Text_SaltySpitoon_M2::
# 605 "data/maps/GatoCityS/scripts.pory"
	.string "This is the line to get into The Salty\n"
	.string "Spitoon, the roughest toughest\l"
	.string "gangster bar ever to be built in the\l"
	.string "city. Only the toughest of the tough\l"
	.string "can get in!$"

GatoCityS_Text_SaltySpitoon_DM_NoEntry::
# 609 "data/maps/GatoCityS/scripts.pory"
	.string "Woah there little man where do you\n"
	.string "think you're going? This is The Salty\l"
	.string "Spitoon, it's way too rough for you. Why\l"
	.string "don't you go hang out over there?$"

GatoCityS_Text_SaltySpitoon_DM_Pass::
# 613 "data/maps/GatoCityS/scripts.pory"
	.string "Whats that? You got kicked out of\n"
	.string "Weenie Hut Jr's for fighting? Yeah I\l"
	.string "guess that is pretty tough.$"

GatoCityS_Text_SaltySpitoon_DM_SWHJ::
# 617 "data/maps/GatoCityS/scripts.pory"
	.string "Actually, I was pointing to the place\n"
	.string "down the street$"

GatoCityS_Text_Vagrant1::
# 621 "data/maps/GatoCityS/scripts.pory"
	.string "Motherfucker! Man you're a\n"
	.string "motherfucker...$"

GatoCityS_Text_Vagrant2::
# 625 "data/maps/GatoCityS/scripts.pory"
	.string "I'd slap his bitch face and shit...$"
