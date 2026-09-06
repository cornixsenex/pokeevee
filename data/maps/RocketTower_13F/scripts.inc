RocketTower_13F_MapScripts::
# 12 "data/maps/RocketTower_13F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RocketTower_13F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

RocketTower_13F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_OnResume
	return


RocketTower_13F_OnResume::
# 19 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_SetFloor13
# 20 "data/maps/RocketTower_13F/scripts.pory"
	goto_if_set FLAG_HIDE_CARDKEY, RocketTower_13F_OnResume_2
RocketTower_13F_OnResume_1:
	end

RocketTower_13F_OnResume_2:
# 22 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_OpenElevator
	goto RocketTower_13F_OnResume_1


RocketTower_13F_EventScript_SetFloor13::
# 28 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_ROCKETTOWER_FLOOR, 13
	return


RocketTower_13F_EventScript_OpenElevator::
# 33 "data/maps/RocketTower_13F/scripts.pory"
	setmetatile 25, 3, METATILE_SilphCo_Elevator_Door_Open, 0
	return


RocketTower_13F_EventScript_CheckPC::
# 38 "data/maps/RocketTower_13F/scripts.pory"
	lockall
# 39 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_ROCKET_TOWER
# 40 "data/maps/RocketTower_13F/scripts.pory"
	special DoPCTurnOnEffect
# 41 "data/maps/RocketTower_13F/scripts.pory"
	playse SE_PC_ON
# 42 "data/maps/RocketTower_13F/scripts.pory"
	goto EventScript_PCMainMenu
# 43 "data/maps/RocketTower_13F/scripts.pory"
	waitstate
# 44 "data/maps/RocketTower_13F/scripts.pory"
	releaseall
	end


RocketTower_13F_EventScript_GioTrigger1::
# 49 "data/maps/RocketTower_13F/scripts.pory"
	lock
# 50 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_ROCKETTOWER_STATE, 1
# 51 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 52 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 53 "data/maps/RocketTower_13F/scripts.pory"
	special SpawnCameraObject
# 54 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 55 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1
# 56 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 57 "data/maps/RocketTower_13F/scripts.pory"
	special RemoveCameraObject
# 58 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_GioCutscene
# 59 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, RocketTower_13F_Movement_Blaine1
# 60 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 5, RocketTower_13F_Movement_Porygon1
# 61 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 62 "data/maps/RocketTower_13F/scripts.pory"
	special SpawnCameraObject
# 63 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera1B
# 64 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 65 "data/maps/RocketTower_13F/scripts.pory"
	special RemoveCameraObject
# 66 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_Blaine
# 67 "data/maps/RocketTower_13F/scripts.pory"
	release
	end


RocketTower_13F_EventScript_GioTrigger2::
# 72 "data/maps/RocketTower_13F/scripts.pory"
	lock
# 73 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_ROCKETTOWER_STATE, 1
# 74 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 75 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 76 "data/maps/RocketTower_13F/scripts.pory"
	special SpawnCameraObject
# 77 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 78 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2
# 79 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 80 "data/maps/RocketTower_13F/scripts.pory"
	special RemoveCameraObject
# 81 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_GioCutscene
# 82 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, RocketTower_13F_Movement_Blaine2
# 83 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 5, RocketTower_13F_Movement_Porygon2
# 84 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 85 "data/maps/RocketTower_13F/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/RocketTower_13F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RocketTower_13F_Movement_PanCamera2B
# 87 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 88 "data/maps/RocketTower_13F/scripts.pory"
	special RemoveCameraObject
# 89 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_Blaine
# 90 "data/maps/RocketTower_13F/scripts.pory"
	release
	end


RocketTower_13F_EventScript_GioCutscene::
# 95 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 10, 190, 98
# 96 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Gio1
# 97 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 98 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 10
# 99 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 100 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 7, 190, 98
# 101 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Blaine1
# 102 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 103 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 7
# 104 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 105 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 10, 190, 98
# 106 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Gio2
# 107 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 108 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 10
# 109 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 110 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 11, 190, 98
# 111 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Mewtwo1
# 112 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 113 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 11
# 114 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 115 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 10, 190, 98
# 116 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Gio3
# 117 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 118 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 10
# 119 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 120 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 121 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 122 "data/maps/RocketTower_13F/scripts.pory"
	delay 25
# 123 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 124 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 125 "data/maps/RocketTower_13F/scripts.pory"
	delay 25
# 126 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 127 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 128 "data/maps/RocketTower_13F/scripts.pory"
	delay 25
# 129 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 7, 190, 98
# 130 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Blaine2
# 131 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 132 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 7
# 133 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 134 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 10, 190, 98
# 135 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Gio4
# 136 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 137 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 10
# 138 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 139 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 1, RocketTower_13F_Movement_Gio1
# 140 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 4, RocketTower_13F_Movement_Persian1
# 141 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 3, Common_Movement_FaceDown
# 142 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 7, 190, 98
# 143 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Blaine3
# 144 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 145 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 7
# 146 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 147 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 148 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 10, 190, 98
# 149 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Gio5
# 150 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 151 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 10
# 152 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 153 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 1, RocketTower_13F_Movement_Gio2
# 154 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 2, RocketTower_13F_Movement_Mewtwo
# 155 "data/maps/RocketTower_13F/scripts.pory"
	applymovement 4, RocketTower_13F_Movement_Persian2
# 156 "data/maps/RocketTower_13F/scripts.pory"
	waitmovement 0
# 157 "data/maps/RocketTower_13F/scripts.pory"
	removeobject 1
# 158 "data/maps/RocketTower_13F/scripts.pory"
	removeobject 4
# 159 "data/maps/RocketTower_13F/scripts.pory"
	removeobject 2
	return


RocketTower_13F_EventScript_Blaine::
# 164 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 7, 190, 98
# 165 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_Blaine4
# 166 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 167 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 7
# 168 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 169 "data/maps/RocketTower_13F/scripts.pory"
	trainerbattle_no_intro TRAINER_BLAINE, RocketTower_13F_Text_BlaineLost
# 170 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_BlaineDefeated
	return


RocketTower_13F_EventScript_BlaineDefeated::
# 175 "data/maps/RocketTower_13F/scripts.pory"
	load_field_pic 7, 190, 98
# 176 "data/maps/RocketTower_13F/scripts.pory"
	msgbox RocketTower_13F_Text_BlainePost
# 177 "data/maps/RocketTower_13F/scripts.pory"
	closemessage
# 178 "data/maps/RocketTower_13F/scripts.pory"
	destroy_field_pic 7
# 179 "data/maps/RocketTower_13F/scripts.pory"
	delay 5
# 180 "data/maps/RocketTower_13F/scripts.pory"
	fadescreenswapbuffers 1
# 181 "data/maps/RocketTower_13F/scripts.pory"
	removeobject 3
# 182 "data/maps/RocketTower_13F/scripts.pory"
	removeobject 5
# 183 "data/maps/RocketTower_13F/scripts.pory"
	setflag FLAG_HIDE_ROCKETTOWER_13F_GIO
# 184 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_CAPITAL_STATE, 0
# 185 "data/maps/RocketTower_13F/scripts.pory"
	fadescreenswapbuffers 0
	return


RocketTower_13F_EventScript_CardKey::
# 190 "data/maps/RocketTower_13F/scripts.pory"
	lockall
# 191 "data/maps/RocketTower_13F/scripts.pory"
	finditem ITEM_CARD_KEY
# 192 "data/maps/RocketTower_13F/scripts.pory"
	setvar VAR_ROCKETTOWER_STATE, 2
# 193 "data/maps/RocketTower_13F/scripts.pory"
	setflag FLAG_HIDE_CARDKEY
# 194 "data/maps/RocketTower_13F/scripts.pory"
	call RocketTower_13F_EventScript_OpenElevator
# 195 "data/maps/RocketTower_13F/scripts.pory"
	special DrawWholeMapView
	end


# 200 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_PanCamera1:
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 201 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 202 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_northeast
	step_end

# 205 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_PanCamera2:
# 206 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 206 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 206 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 206 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_right
# 207 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_northeast
# 207 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_northeast
	step_end

# 210 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_PanCamera1B:
# 211 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_southwest
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 212 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
	step_end

# 215 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_PanCamera2B:
# 216 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_southwest
# 216 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_diag_southwest
# 217 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 217 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 217 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
# 217 "data/maps/RocketTower_13F/scripts.pory"
	walk_slow_left
	step_end

# 220 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Blaine1:
# 221 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 221 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 221 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 221 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 221 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
	step_end

# 224 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Blaine2:
# 225 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 225 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 226 "data/maps/RocketTower_13F/scripts.pory"
	walk_diag_southwest
# 227 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
	step_end

# 230 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Porygon1:
# 231 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 231 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 231 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 231 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 232 "data/maps/RocketTower_13F/scripts.pory"
	walk_diag_northwest
# 233 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
	step_end

# 236 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Porygon2:
# 237 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 237 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 237 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 237 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
# 237 "data/maps/RocketTower_13F/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Gio1:
# 241 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 241 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 241 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 241 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 241 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 242 "data/maps/RocketTower_13F/scripts.pory"
	face_down
	step_end

# 245 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Persian1:
# 246 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 246 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 246 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 246 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 246 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Gio2:
# 250 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 250 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 251 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 251 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 251 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 251 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 251 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Persian2:
# 255 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 255 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 255 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 256 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 256 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 256 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 256 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 256 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/RocketTower_13F/scripts.pory"
RocketTower_13F_Movement_Mewtwo:
# 260 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 260 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 261 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 261 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 261 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 261 "data/maps/RocketTower_13F/scripts.pory"
	walk_right
# 262 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 262 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 262 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 262 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
# 262 "data/maps/RocketTower_13F/scripts.pory"
	walk_up
	step_end

RocketTower_13F_Text_Gio1::
# 265 "data/maps/RocketTower_13F/scripts.pory"
	.string "We stand upon the brink of destruction\n"
	.string "all of our plans will fail if we don't act$"

RocketTower_13F_Text_Blaine1::
# 269 "data/maps/RocketTower_13F/scripts.pory"
	.string "But sir Mewtwo has not proven himself\n"
	.string "in any battle$"

RocketTower_13F_Text_Gio2::
# 274 "data/maps/RocketTower_13F/scripts.pory"
	.string "Blaine we have no choice. The city guard\n"
	.string "has already fallen, the capital itself is\l"
	.string "under siege, and this report suggests\l"
	.string "our own tower has been penetrated by\l"
	.string "rebel spies. I must be off! MEWTWO will\l"
	.string "you obey?$"

RocketTower_13F_Text_Mewtwo1::
# 278 "data/maps/RocketTower_13F/scripts.pory"
	.string "My lord I must obey every command$"

RocketTower_13F_Text_Gio3::
# 282 "data/maps/RocketTower_13F/scripts.pory"
	.string "The die is cast...$"

RocketTower_13F_Text_Blaine2::
# 286 "data/maps/RocketTower_13F/scripts.pory"
	.string "My lord! The spy is here!$"

RocketTower_13F_Text_Gio4::
# 290 "data/maps/RocketTower_13F/scripts.pory"
	.string "I must be off to reach the capital\n"
	.string "before the rebel horde destroys our\l"
	.string "plans and renders our great creation\l"
	.string "useless. Destroy this spy and join me\l"
	.string "right away to celebrate our new\l"
	.string "empire's birth.$"

RocketTower_13F_Text_Blaine3::
# 294 "data/maps/RocketTower_13F/scripts.pory"
	.string "May God favor the bold!$"

RocketTower_13F_Text_Gio5::
# 298 "data/maps/RocketTower_13F/scripts.pory"
	.string "Come now Mewtwo.$"

RocketTower_13F_Text_Blaine4::
# 302 "data/maps/RocketTower_13F/scripts.pory"
	.string "My eyes would not decieve you're that\n"
	.string "same boy who wittnessed me take\l"
	.string "possesion of Mew. My servants may have\l"
	.string "failed but I shall not allow you to\l"
	.string "obstruct our grand design. To hinder\l"
	.string "our master is futile, his will be done all\l"
	.string "opposition crushed. You'll suffer now\l"
	.string "because you disobey.$"

RocketTower_13F_Text_BlaineLost::
# 306 "data/maps/RocketTower_13F/scripts.pory"
	.string "Master! I've failed!$"

RocketTower_13F_Text_BlainePost::
# 310 "data/maps/RocketTower_13F/scripts.pory"
	.string "I now must hide away. Exile in my case is\n"
	.string "preferable to the sheer pain my\l"
	.string "creation would make when my master\l"
	.string "learns of my great defeat.$"
