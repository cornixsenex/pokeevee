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
	map_script_2 VAR_SALTYSPITOON_STATE, 25, GatoCityS_EventScript_FacePlayerRight
# 44 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 26, GatoCityS_EventScript_FacePlayerUp
# 45 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 27, GatoCityS_EventScript_FacePlayerLeft
# 46 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 35, GatoCityS_EventScript_FacePlayerRight
# 47 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 36, GatoCityS_EventScript_FacePlayerUp
# 48 "data/maps/GatoCityS/scripts.pory"
	map_script_2 VAR_SALTYSPITOON_STATE, 37, GatoCityS_EventScript_FacePlayerLeft
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


GatoCityS_EventScript_FacePlayerRight::
# 70 "data/maps/GatoCityS/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end


GatoCityS_EventScript_FacePlayerUp::
# 75 "data/maps/GatoCityS/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end


GatoCityS_EventScript_FacePlayerLeft::
# 80 "data/maps/GatoCityS/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	end


GatoCityS_EventScript_Return::
# 85 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 4
	goto_if_eq GatoCityS_EventScript_Return_2
# 89 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 3
GatoCityS_EventScript_Return_1:
	end

GatoCityS_EventScript_Return_2:
# 86 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_UnlockSaltySpitoon
	goto GatoCityS_EventScript_Return_1


GatoCityS_EventScript_ShowSWHJ::
# 95 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 96 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_SWHJ
# 97 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 98 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 99 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 100 "data/maps/GatoCityS/scripts.pory"
	warp MAP_GATO_CITY_E, 14, 20
# 101 "data/maps/GatoCityS/scripts.pory"
	waitstate
	end


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1::
# 106 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 107 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 4, 38, 8
# 108 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 5, 39, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2::
# 113 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 114 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 115 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 5, 38, 8
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3::
# 120 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 121 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 122 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 123 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Left::
# 128 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 129 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 130 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 131 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Down::
# 136 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 137 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 138 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 139 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3Right::
# 144 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 145 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 146 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 147 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_RIGHT
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var4::
# 152 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 153 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 154 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 155 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_EventScript_OnWarp_Var44::
# 160 "data/maps/GatoCityS/scripts.pory"
	removeobject 3
# 161 "data/maps/GatoCityS/scripts.pory"
	removeobject 4
# 162 "data/maps/GatoCityS/scripts.pory"
	removeobject 5
# 163 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 36, 8
# 164 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_WatchSeller::
# 169 "data/maps/GatoCityS/scripts.pory"
	lock
# 170 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_WatchSeller1
# 171 "data/maps/GatoCityS/scripts.pory"
	waitmessage
# 172 "data/maps/GatoCityS/scripts.pory"
	pokemart GatoCityS_Mart_WatchSeller
# 173 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_WatchSeller2
# 174 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 175 "data/maps/GatoCityS/scripts.pory"
	release
	end


	.align 2
# 179 "data/maps/GatoCityS/scripts.pory"
GatoCityS_Mart_WatchSeller:
# 180 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 181 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 182 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 183 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_LEMONADE
# 184 "data/maps/GatoCityS/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

GatoCityS_EventScript_SaltySpitoon_M3::
# 188 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SALTYSPITOON_STATE, 2
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_M3_2
GatoCityS_EventScript_SaltySpitoon_M3_1:
# 193 "data/maps/GatoCityS/scripts.pory"
	lock
# 194 "data/maps/GatoCityS/scripts.pory"
	switch VAR_SALTYSPITOON_STATE
# 196 "data/maps/GatoCityS/scripts.pory"
	case 0, GatoCityS_EventScript_SaltySpitoon_M3_6
# 234 "data/maps/GatoCityS/scripts.pory"
	case 1, GatoCityS_EventScript_SaltySpitoon_M3_7
# 284 "data/maps/GatoCityS/scripts.pory"
	case 2, GatoCityS_EventScript_SaltySpitoon_M3_8
GatoCityS_EventScript_SaltySpitoon_M3_4:
# 287 "data/maps/GatoCityS/scripts.pory"
	release
	return

GatoCityS_EventScript_SaltySpitoon_M3_2:
# 189 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 190 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 191 "data/maps/GatoCityS/scripts.pory"
	faceplayer
	goto GatoCityS_EventScript_SaltySpitoon_M3_1

GatoCityS_EventScript_SaltySpitoon_M3_6:
# 198 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3A
# 199 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 200 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 201 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 202 "data/maps/GatoCityS/scripts.pory"
	delay 15
# 204 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 205 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 206 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 207 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 208 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 210 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 18, 190, 98
# 211 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M1B
# 212 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 213 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 18
# 214 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 216 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 217 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
# 218 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 219 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 220 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 222 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 223 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 224 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 225 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 226 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 227 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 228 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 229 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 230 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
# 231 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 232 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 233 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 1
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_7:
# 236 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3B
# 237 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 238 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 239 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 240 "data/maps/GatoCityS/scripts.pory"
	delay 15
# 242 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 243 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 244 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 245 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 246 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 248 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 249 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2A
# 250 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 251 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 252 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 254 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 255 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
# 256 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 257 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 258 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 260 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 261 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
# 262 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 263 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 264 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 266 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 267 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
# 268 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 269 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 270 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 272 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 274 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 275 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 276 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 277 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 278 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 279 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 280 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
# 281 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 282 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 283 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 2
	goto GatoCityS_EventScript_SaltySpitoon_M3_4

GatoCityS_EventScript_SaltySpitoon_M3_8:
# 285 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_M3_4


GatoCityS_EventScript_M3Exit::
# 293 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 294 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM2
# 295 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 296 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 297 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 299 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 17, 190, 98
# 300 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M3C
# 301 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 302 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 17
# 303 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 305 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 306 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM3
# 307 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 308 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 309 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 311 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 17, 190, 98
# 312 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_M3Exit_Text_0
# 313 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 314 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 17
# 315 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 317 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 318 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 319 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 320 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 321 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 322 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 323 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var3
# 324 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 325 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 326 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 327 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 328 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 3
# 329 "data/maps/GatoCityS/scripts.pory"
	release
	return


GatoCityS_EventScript_SaltySpitoon_M2::
# 333 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SALTYSPITOON_STATE, 1
	goto_if_ne GatoCityS_EventScript_SaltySpitoon_M2_2
# 341 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
GatoCityS_EventScript_SaltySpitoon_M2_1:
# 343 "data/maps/GatoCityS/scripts.pory"
	release
	end

GatoCityS_EventScript_SaltySpitoon_M2_2:
# 334 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 335 "data/maps/GatoCityS/scripts.pory"
	lock
# 336 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2
# 337 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 338 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 339 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_M2_1


GatoCityS_EventScript_SaltySpitoon_M2Exit::
# 349 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 350 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 351 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 352 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 353 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 355 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 356 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M2A
# 357 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 358 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 359 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 361 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 362 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
# 363 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 364 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 365 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 367 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 19, 190, 98
# 368 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
# 369 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 370 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 19
# 371 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 373 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 374 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_3
# 375 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 376 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 377 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 379 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 381 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 382 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 383 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 384 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 385 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 386 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 387 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var2
# 388 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 389 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 390 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 2
	return


GatoCityS_EventScript_SaltySpitoon_M1::
# 397 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 398 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM1
# 399 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 400 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 401 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 403 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 18, 190, 98
# 404 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_M1B
# 405 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 406 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 18
# 407 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 409 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 410 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
# 411 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 412 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 413 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 415 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 416 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_WalkLeft
# 417 "data/maps/GatoCityS/scripts.pory"
	applymovement 4, Common_Movement_WalkLeft
# 418 "data/maps/GatoCityS/scripts.pory"
	applymovement 5, Common_Movement_WalkLeft
# 419 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 420 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 421 "data/maps/GatoCityS/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 422 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 423 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_SaltySpitoon_EventScript_OnWarp_Var1
# 424 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 425 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 426 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 1
	return


GatoCityS_EventScript_SaltySpitoon_DM::
# 431 "data/maps/GatoCityS/scripts.pory"
	lock
# 432 "data/maps/GatoCityS/scripts.pory"
	switch VAR_SALTYSPITOON_STATE
# 433 "data/maps/GatoCityS/scripts.pory"
	case 0, GatoCityS_EventScript_SaltySpitoon_DM_3
# 446 "data/maps/GatoCityS/scripts.pory"
	case 1, GatoCityS_EventScript_SaltySpitoon_DM_4
# 459 "data/maps/GatoCityS/scripts.pory"
	case 2, GatoCityS_EventScript_SaltySpitoon_DM_5
# 472 "data/maps/GatoCityS/scripts.pory"
	case 3, GatoCityS_EventScript_SaltySpitoon_DM_6
# 500 "data/maps/GatoCityS/scripts.pory"
	case 4, GatoCityS_EventScript_SaltySpitoon_DM_7
GatoCityS_EventScript_SaltySpitoon_DM_1:
# 504 "data/maps/GatoCityS/scripts.pory"
	release
	end

GatoCityS_EventScript_SaltySpitoon_DM_3:
# 434 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 435 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_8
# 444 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M1
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_4:
# 447 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 448 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_11
# 457 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_SaltySpitoon_M2Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_5:
# 460 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 461 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_SaltySpitoon_DM_14
# 470 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_M3Exit
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_6:
# 473 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 474 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 475 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_NoEntry
# 476 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 477 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 478 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 479 "data/maps/GatoCityS/scripts.pory"
	switch VAR_RESULT
# 480 "data/maps/GatoCityS/scripts.pory"
	case DIR_WEST, GatoCityS_EventScript_SaltySpitoon_DM_19
# 486 "data/maps/GatoCityS/scripts.pory"
	case DIR_NORTH, GatoCityS_EventScript_SaltySpitoon_DM_20
# 492 "data/maps/GatoCityS/scripts.pory"
	case DIR_EAST, GatoCityS_EventScript_SaltySpitoon_DM_21
GatoCityS_EventScript_SaltySpitoon_DM_17:
# 499 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_DM_WHJ
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_7:
# 501 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 502 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_OpenSaltySpitoon
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_8:
# 436 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 437 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 438 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 439 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 440 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 441 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 442 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_11:
# 449 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 450 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 451 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 452 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 453 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 454 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 455 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_14:
# 462 "data/maps/GatoCityS/scripts.pory"
	faceplayer
# 463 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 464 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_EventScript_SaltySpitoon_DM_Text_0
# 465 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 466 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 467 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 468 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
	goto GatoCityS_EventScript_SaltySpitoon_DM_1

GatoCityS_EventScript_SaltySpitoon_DM_19:
# 481 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_22
# 484 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 7
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_20:
# 487 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_25
# 490 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 6
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_21:
# 493 "data/maps/GatoCityS/scripts.pory"
	compare VAR_SWHJ_STATE, 3
	goto_if_lt GatoCityS_EventScript_SaltySpitoon_DM_28
# 496 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 5
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_22:
# 482 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 17
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_25:
# 488 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 16
	goto GatoCityS_EventScript_SaltySpitoon_DM_17

GatoCityS_EventScript_SaltySpitoon_DM_28:
# 494 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 15
	goto GatoCityS_EventScript_SaltySpitoon_DM_17


GatoCityS_EventScript_DM_WHJ::
# 509 "data/maps/GatoCityS/scripts.pory"
	warp MAP_GATO_CITY_DT, 52, 21
# 510 "data/maps/GatoCityS/scripts.pory"
	waitstate
	end


GatoCityS_EventScript_UnlockSaltySpitoon::
# 515 "data/maps/GatoCityS/scripts.pory"
	setvar VAR_SALTYSPITOON_STATE, 4
# 516 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 517 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 518 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 519 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_SaltySpitoon_DM_Pass
# 520 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 521 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 522 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 523 "data/maps/GatoCityS/scripts.pory"
	call GatoCityS_EventScript_OpenSaltySpitoon
	return


GatoCityS_EventScript_OpenSaltySpitoon::
# 527 "data/maps/GatoCityS/scripts.pory"
	load_field_pic 20, 190, 98
# 528 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_DM_Welcome
# 529 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 530 "data/maps/GatoCityS/scripts.pory"
	destroy_field_pic 20
# 531 "data/maps/GatoCityS/scripts.pory"
	delay 5
# 532 "data/maps/GatoCityS/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 533 "data/maps/GatoCityS/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq GatoCityS_EventScript_OpenSaltySpitoon_5
GatoCityS_EventScript_OpenSaltySpitoon_4:
# 540 "data/maps/GatoCityS/scripts.pory"
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_3
GatoCityS_EventScript_OpenSaltySpitoon_1:
# 548 "data/maps/GatoCityS/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return

GatoCityS_EventScript_OpenSaltySpitoon_2:
# 534 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkRight
# 535 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 536 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 537 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 538 "data/maps/GatoCityS/scripts.pory"
	setflag FLAG_TEMP_1
# 539 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 38, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_3:
# 541 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_WalkLeft
# 542 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 543 "data/maps/GatoCityS/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 544 "data/maps/GatoCityS/scripts.pory"
	waitmovement 0
# 545 "data/maps/GatoCityS/scripts.pory"
	setflag FLAG_TEMP_1
# 546 "data/maps/GatoCityS/scripts.pory"
	setobjectxyperm 2, 36, 8
	goto GatoCityS_EventScript_OpenSaltySpitoon_1

GatoCityS_EventScript_OpenSaltySpitoon_5:
# 533 "data/maps/GatoCityS/scripts.pory"
	goto_if_unset FLAG_TEMP_1, GatoCityS_EventScript_OpenSaltySpitoon_2
	goto GatoCityS_EventScript_OpenSaltySpitoon_4


GatoCityS_EventScript_SaltySpitoon_Vagrant1::
# 553 "data/maps/GatoCityS/scripts.pory"
	lock
# 554 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_Vagrant1
# 555 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 556 "data/maps/GatoCityS/scripts.pory"
	release
	end


GatoCityS_EventScript_SaltySpitoon_Vagrant2::
# 561 "data/maps/GatoCityS/scripts.pory"
	lock
# 562 "data/maps/GatoCityS/scripts.pory"
	msgbox GatoCityS_Text_Vagrant2
# 563 "data/maps/GatoCityS/scripts.pory"
	closemessage
# 564 "data/maps/GatoCityS/scripts.pory"
	release
	end


# 571 "data/maps/GatoCityS/scripts.pory"
GatoCityS_Movement_Pacer:
# 572 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 572 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 572 "data/maps/GatoCityS/scripts.pory"
	walk_left
# 573 "data/maps/GatoCityS/scripts.pory"
	walk_right
# 573 "data/maps/GatoCityS/scripts.pory"
	walk_right
# 573 "data/maps/GatoCityS/scripts.pory"
	walk_right
	step_end

GatoCityS_EventScript_SaltySpitoon_M3_Text_0:
# 217 "data/maps/GatoCityS/scripts.pory"
	.string "Alright, go right ahead.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_1:
# 255 "data/maps/GatoCityS/scripts.pory"
	.string "Yeah, so?$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_2:
# 261 "data/maps/GatoCityS/scripts.pory"
	.string "Without any milk.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_3:
# 267 "data/maps/GatoCityS/scripts.pory"
	.string "Uhh, right this way.$"

GatoCityS_EventScript_M3Exit_Text_0:
# 312 "data/maps/GatoCityS/scripts.pory"
	.string "Thanks, Reg.$"

GatoCityS_EventScript_SaltySpitoon_DM_Text_0:
# 438 "data/maps/GatoCityS/scripts.pory"
	.string "What are you looking at?$"

GatoCityS_Text_DM_Welcome::
# 576 "data/maps/GatoCityS/scripts.pory"
	.string "Welcome to the Salty Spitoon. Go on in.$"

GatoCityS_Text_WatchSeller1::
# 580 "data/maps/GatoCityS/scripts.pory"
	.string "Hey kid, you wanna buy a watch? Come\n"
	.string "here.$"

GatoCityS_Text_WatchSeller2::
# 584 "data/maps/GatoCityS/scripts.pory"
	.string "You don't know who I am! We never\n"
	.string "talked...$"

GatoCityS_Text_SaltySpitoon_M1B::
# 588 "data/maps/GatoCityS/scripts.pory"
	.string "How tough am I? How tough am I!? Just\n"
	.string "look at my muscles! I've got muscles on\l"
	.string "my muscles! I've got muscles on my\l"
	.string "eyeballs! Aaarrrrggghhh!$"

GatoCityS_Text_SaltySpitoon_M3A::
# 592 "data/maps/GatoCityS/scripts.pory"
	.string "Huh? What was that? Did someone throw\n"
	.string "a piece of paper at me?$"

GatoCityS_Text_SaltySpitoon_M3B::
# 596 "data/maps/GatoCityS/scripts.pory"
	.string "Hey! Quit shovin and wait your turn in\n"
	.string "line!$"

GatoCityS_Text_SaltySpitoon_M3C::
# 600 "data/maps/GatoCityS/scripts.pory"
	.string "Yeah, and check it out I can even make\n"
	.string "it dance. Uhh! Uhhh! Uhhhhh!$"

GatoCityS_Text_SaltySpitoon_DM1::
# 604 "data/maps/GatoCityS/scripts.pory"
	.string "Welcome to the Salty Spitoon. How tough\n"
	.string "are ya?$"

GatoCityS_Text_SaltySpitoon_DM2::
# 608 "data/maps/GatoCityS/scripts.pory"
	.string "Alright, now it's a party! Is that some\n"
	.string "new ink you got there?$"

GatoCityS_Text_SaltySpitoon_DM3::
# 612 "data/maps/GatoCityS/scripts.pory"
	.string "Looks sweet, go on in buddy.$"

GatoCityS_Text_SaltySpitoon_M2A::
# 616 "data/maps/GatoCityS/scripts.pory"
	.string "How tough am I? I had a bowl of nails\n"
	.string "for breakfast!$"

GatoCityS_Text_SaltySpitoon_M2::
# 620 "data/maps/GatoCityS/scripts.pory"
	.string "This is the line to get into The Salty\n"
	.string "Spitoon, the roughest toughest\l"
	.string "gangster bar ever to be built in the\l"
	.string "city. Only the toughest of the tough\l"
	.string "can get in!$"

GatoCityS_Text_SaltySpitoon_DM_NoEntry::
# 624 "data/maps/GatoCityS/scripts.pory"
	.string "Woah there little man where do you\n"
	.string "think you're going? This is The Salty\l"
	.string "Spitoon, it's way too rough for you. Why\l"
	.string "don't you go hang out over there?$"

GatoCityS_Text_SaltySpitoon_DM_Pass::
# 628 "data/maps/GatoCityS/scripts.pory"
	.string "Whats that? You got kicked out of\n"
	.string "Weenie Hut Jr's for fighting? Yeah I\l"
	.string "guess that is pretty tough.$"

GatoCityS_Text_SaltySpitoon_DM_SWHJ::
# 632 "data/maps/GatoCityS/scripts.pory"
	.string "Actually, I was pointing to the place\n"
	.string "down the street$"

GatoCityS_Text_Vagrant1::
# 636 "data/maps/GatoCityS/scripts.pory"
	.string "Motherfucker! Man you're a\n"
	.string "motherfucker...$"

GatoCityS_Text_Vagrant2::
# 640 "data/maps/GatoCityS/scripts.pory"
	.string "I'd slap his bitch face and shit...$"
