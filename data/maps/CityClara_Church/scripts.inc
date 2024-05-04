CityClara_Church_MapScripts::
# 2 "data/maps/CityClara_Church/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClara_Church_OnWarp_HidePreChurchCutscene
# 4 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 1, CityClara_Church_OnWarp_HidePreChurchCutscene
# 5 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 2, CityClara_Church_OnWarp_HidePreChurchCutscene
# 6 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 3, CityClara_Church_OnWarp_HidePreChurchCutscene
# 7 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 4, CityClara_Church_OnWarp_HidePreChurchCutscene
# 8 "data/maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 10, CicyClara_Church_OnWarp_ShowAfterChurchCutscene
	.2byte 0


CityClara_Church_OnWarp_HidePreChurchCutscene::
# 13 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
# 14 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 15 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDEDAD
# 16 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 17 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 18 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 19 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 20 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 21 "data/maps/CityClara_Church/scripts.pory"
	removeobject 13
	end


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
# 26 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 27 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 28 "data/maps/CityClara_Church/scripts.pory"
	setobjectxyperm 13, 20, 15
# 29 "data/maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 30 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 31 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	end


CityClara_Church_EventScript_BlainTrigger1::
# 36 "data/maps/CityClara_Church/scripts.pory"
	lock
# 37 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 38 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 40 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1A
# 41 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 42 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 43 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 44 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 45 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1B
# 46 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 47 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 48 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 49 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 50 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 51 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 52 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger2::
# 56 "data/maps/CityClara_Church/scripts.pory"
	lock
# 57 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 2
# 58 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 59 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 60 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2A
# 61 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 62 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 63 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 64 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 65 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2B
# 66 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 67 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 68 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 69 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 70 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 71 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 72 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger3::
# 77 "data/maps/CityClara_Church/scripts.pory"
	lock
# 78 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 3
# 79 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 80 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 81 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3A
# 82 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 83 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 85 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3B
# 87 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 88 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 89 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 90 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 91 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 92 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 93 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger4::
# 98 "data/maps/CityClara_Church/scripts.pory"
	lock
# 99 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 4
# 100 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 101 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 102 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4A
# 103 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 104 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 105 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 106 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 107 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4B
# 108 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 109 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 110 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 111 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 112 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 113 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 114 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger5::
# 118 "data/maps/CityClara_Church/scripts.pory"
	lock
# 119 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 5
# 120 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 121 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 122 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5A
# 123 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 124 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 125 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 126 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 127 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5B
# 128 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 129 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 130 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 131 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 132 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 133 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 134 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger6::
# 139 "data/maps/CityClara_Church/scripts.pory"
	lock
# 140 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 6
# 141 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 142 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 143 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6A
# 144 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 145 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 147 "data/maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 148 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6B
# 149 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 150 "data/maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 151 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 152 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 153 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 154 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 155 "data/maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 160 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 161 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 162 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 163 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 164 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 165 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 166 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 167 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 168 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 169 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 170 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 171 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 172 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 173 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 174 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 175 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 178 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 179 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 180 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 183 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 184 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 185 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 186 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 188 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 189 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 190 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 191 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 194 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 195 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 196 "data/maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 198 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 199 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 200 "data/maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 201 "data/maps/CityClara_Church/scripts.pory"
	removeobject 2
# 202 "data/maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 206 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 207 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 208 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 209 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 210 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 211 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 212 "data/maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 213 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 214 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 215 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 216 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 217 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 220 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 221 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 222 "data/maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 223 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 224 "data/maps/CityClara_Church/scripts.pory"
	waitmoncry
# 225 "data/maps/CityClara_Church/scripts.pory"
	removeobject 1
# 226 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 227 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 228 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 229 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 230 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 231 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 232 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 235 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 236 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 237 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 238 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 240 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 241 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 243 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 244 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 248 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_2
# 252 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_3
# 256 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_4
# 260 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_5
# 264 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_6
# 268 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_7
# 273 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 274 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_BlaineCutscene_1:
# 276 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 277 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 278 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 279 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 280 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 281 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 282 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 283 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 284 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 287 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
# 288 "data/maps/CityClara_Church/scripts.pory"
	addobject 8
# 289 "data/maps/CityClara_Church/scripts.pory"
	addobject 9
# 290 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 291 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 292 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 293 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 294 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 295 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 296 "data/maps/CityClara_Church/scripts.pory"
	addobject 10
# 297 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 298 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 299 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 300 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 301 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 302 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 303 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 305 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 306 "data/maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_GruntLExit
# 307 "data/maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_GruntRExit
# 308 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_16
# 320 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_17
# 332 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_18
# 344 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_19
# 356 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_20
# 368 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_21
# 381 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
# 382 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 383 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
CityClara_Church_EventScript_BlaineCutscene_15:
# 385 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 249 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 250 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab1
# 251 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab1
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_3:
# 253 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 254 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab2
# 255 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab2
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_4:
# 257 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 258 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab3
# 259 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab3
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_5:
# 261 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 262 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab4
# 263 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab4
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 265 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 266 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab5
# 267 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab5
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_7:
# 269 "data/maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 270 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab6
# 271 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab6
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_16:
# 309 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit1
# 310 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit1
# 311 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 312 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 313 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 314 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 315 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 316 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 317 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage1
# 318 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage1
# 319 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_17:
# 321 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit2
# 322 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit2
# 323 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 324 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 325 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 326 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 327 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 328 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 329 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage1
# 330 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage1
# 331 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_18:
# 333 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit3
# 334 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit3
# 335 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 336 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 337 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 338 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 339 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 340 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 341 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage3
# 342 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage3
# 343 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_JesseEngage3
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_19:
# 345 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit4
# 346 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit4
# 347 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 348 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 349 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 350 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 351 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 352 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 353 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage4
# 354 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage4
# 355 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_20:
# 357 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit5
# 358 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit5
# 359 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 360 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 361 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 362 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 363 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 364 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 365 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage4
# 366 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage4
# 367 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_21:
# 369 "data/maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit6
# 370 "data/maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit6
# 371 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 372 "data/maps/CityClara_Church/scripts.pory"
	removeobject 3
# 373 "data/maps/CityClara_Church/scripts.pory"
	removeobject 4
# 374 "data/maps/CityClara_Church/scripts.pory"
	removeobject 5
# 375 "data/maps/CityClara_Church/scripts.pory"
	removeobject 6
# 376 "data/maps/CityClara_Church/scripts.pory"
	removeobject 7
# 377 "data/maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage6
# 378 "data/maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage6
# 379 "data/maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_JamesEngage6
	goto CityClara_Church_EventScript_BlaineCutscene_15


CityClara_Church_EventScript_JesseAndJamesDefeated::
# 391 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 392 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 393 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 394 "data/maps/CityClara_Church/scripts.pory"
	removeobject 8
# 395 "data/maps/CityClara_Church/scripts.pory"
	removeobject 9
# 396 "data/maps/CityClara_Church/scripts.pory"
	removeobject 10
# 397 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_AFTERMEW
# 398 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
# 399 "data/maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 400 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
# 402 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
# 404 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
# 406 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
# 409 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 410 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
# 412 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 413 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 416 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 417 "data/maps/CityClara_Church/scripts.pory"
	addobject 11
# 418 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 419 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 420 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 421 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 422 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 423 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 424 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 425 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 426 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 427 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 428 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 429 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 430 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 431 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 432 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 433 "data/maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDEDAD
# 434 "data/maps/CityClara_Church/scripts.pory"
	addobject 12
# 435 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 436 "data/maps/CityClara_Church/scripts.pory"
	addobject 13
# 437 "data/maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 439 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 440 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 441 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 442 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 444 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 445 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 446 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 447 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 448 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 449 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 450 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 451 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 452 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 453 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 454 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 455 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 456 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 457 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 458 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 462 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 463 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 464 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 465 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 470 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 471 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 472 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 473 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 477 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 478 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 479 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 480 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 486 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 487 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 488 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 489 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 495 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 496 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 497 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 498 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 499 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 500 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 501 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 502 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 503 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 504 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 509 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 510 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 511 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 512 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 516 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 520 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 521 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 522 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 523 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 527 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 528 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 529 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 530 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 534 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 535 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 536 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 537 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 541 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 542 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 543 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 544 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 548 "data/maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 549 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 550 "data/maps/CityClara_Church/scripts.pory"
	removeobject 12
# 554 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 555 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 556 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 557 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 560 "data/maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 561 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 562 "data/maps/CityClara_Church/scripts.pory"
	removeobject 11
# 567 "data/maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 568 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 569 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 570 "data/maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 574 "data/maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 575 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 576 "data/maps/CityClara_Church/scripts.pory"
	closemessage
# 577 "data/maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 581 "data/maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 582 "data/maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
# 401 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
# 403 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
# 405 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
# 407 "data/maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 587 "data/maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 588 "data/maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 589 "data/maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 591 "data/maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 593 "data/maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 595 "data/maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 590 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 592 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 594 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 596 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 602 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 603 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 607 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 604 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 605 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 613 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 614 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 618 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 615 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 616 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 624 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 625 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 629 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 626 "data/maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 627 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 635 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 636 "data/maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 639 "data/maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 637 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 644 "data/maps/CityClara_Church/scripts.pory"
	faceplayer
# 645 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 646 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 652 "data/maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 653 "data/maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 654 "data/maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 657 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 658 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 659 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 660 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 663 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 665 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 666 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 669 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 670 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 673 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 674 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 677 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 678 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 679 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 680 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 680 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 683 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 684 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 684 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 685 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 686 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 689 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 690 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 691 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 692 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 695 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 697 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 698 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 701 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 702 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 705 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 706 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 709 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 710 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 710 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 710 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 711 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 712 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 715 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 716 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 716 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 717 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 718 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 721 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 722 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 722 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 722 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 723 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 726 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 727 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 727 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 727 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 728 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 731 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 732 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 733 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 733 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 733 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 734 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 737 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 738 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 739 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 740 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 743 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 744 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 745 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 745 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 746 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 749 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 750 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 750 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 750 "data/maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 753 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 754 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 755 "data/maps/CityClara_Church/scripts.pory"
	face_left
# 756 "data/maps/CityClara_Church/scripts.pory"
	face_right
# 757 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 760 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 761 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 762 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 762 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 763 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 766 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 767 "data/maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 768 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 771 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 772 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 775 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 776 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 779 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 780 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 783 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 784 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 787 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 788 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 791 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 792 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 795 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 796 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 797 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 798 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 801 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 802 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 803 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 804 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 807 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 808 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 809 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 810 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 811 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 812 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 815 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 816 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 816 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 816 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 816 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 817 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 817 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 818 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 821 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 822 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 823 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 824 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 827 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 828 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 828 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 828 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 829 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 830 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 833 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 834 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 834 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 834 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 834 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 835 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 835 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 836 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 839 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 840 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 841 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 842 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 845 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 846 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 846 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 846 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 847 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 848 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 851 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 852 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 852 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 852 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 852 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 853 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 853 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 854 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 857 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 858 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 859 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 860 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 863 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 864 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 865 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 865 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 865 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 866 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 869 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 870 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 870 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 870 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 870 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 871 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 871 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 872 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 875 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 876 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 876 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 876 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 876 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 876 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 877 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 878 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 881 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 882 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 883 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 884 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 887 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 888 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 889 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 891 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 892 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 893 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 896 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 897 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 898 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 901 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 902 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 903 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 906 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 907 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 908 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 911 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 912 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 913 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 916 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 917 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 918 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 921 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 922 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 923 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 926 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 927 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 928 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 931 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 932 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 933 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 936 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 937 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 938 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 941 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 942 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 942 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 942 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 943 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 946 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 947 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 948 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 952 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 953 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 954 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 957 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 958 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 958 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 958 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 958 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 959 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 962 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage1:
# 963 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 963 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 964 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 964 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 965 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 968 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage1:
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 969 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 970 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 970 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 970 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 971 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 974 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage1:
# 975 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 976 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 977 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 980 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage3:
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 981 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 982 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 985 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage3:
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 986 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 987 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 988 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 989 "data/maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 992 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage4:
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 993 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 994 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 994 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 994 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 995 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 998 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage4:
# 999 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 999 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1000 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1001 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1004 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage4:
# 1005 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1006 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1007 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1009 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage6:
# 1010 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1010 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1010 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1011 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1012 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1013 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1016 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage6:
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1017 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1018 "data/maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1021 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1023 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1024 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1025 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1028 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1029 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1030 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1033 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 1034 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1034 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1034 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1034 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1035 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1036 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1036 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1037 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1040 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1041 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1042 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1045 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1046 "data/maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1049 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 1050 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1051 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1052 "data/maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1055 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1056 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1057 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1058 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1061 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1062 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1062 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1062 "data/maps/CityClara_Church/scripts.pory"
	walk_down
# 1063 "data/maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1064 "data/maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1067 "data/maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1068 "data/maps/CityClara_Church/scripts.pory"
	walk_left
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1069 "data/maps/CityClara_Church/scripts.pory"
	walk_up
# 1070 "data/maps/CityClara_Church/scripts.pory"
	walk_right
# 1071 "data/maps/CityClara_Church/scripts.pory"
	face_down
	step_end

CityClara_Church_Text_Sage1::
# 1074 "data/maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\l"
	.string "doing.$"

CityClara_Church_Text_Blaine1::
# 1078 "data/maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1082 "data/maps/CityClara_Church/scripts.pory"
	.string "You must be stopped, you know not what\l"
	.string "you do.$"

CityClara_Church_Text_Blaine2::
# 1086 "data/maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I have achieved,\l"
	.string "with this new power we will not be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of our party\l"
	.string "you and your people will vaish to dust$"

CityClara_Church_Text_Sage3::
# 1092 "data/maps/CityClara_Church/scripts.pory"
	.string "Unhand me I am Mew's true suppliant!\l"
	.string "The foundations of this city were built\l"
	.string "on solid rock of our worship of Mew. One\l"
	.string "thousand years we cultivated art,\l"
	.string "sharing discoveries with even you, we\l"
	.string "must thank Mew for all our modern world.\l"
	.string "Your foolish pride is threatening to\l"
	.string "end this thousand years of joy which\l"
	.string "Mew exclusively made possible for us!$"

CityClara_Church_Text_Blaine3::
# 1096 "data/maps/CityClara_Church/scripts.pory"
	.string "You speak of foolish pride most\l"
	.string "narrowly your sad devotion to this\l"
	.string "religion has not helped you amass a\l"
	.string "massive worth nor given you the\l"
	.string "clairvoyance to see your fated\l"
	.string "destruction. Social progress has\l"
	.string "overcome your myth. No simple spoken\l"
	.string "prayer will stop the launch of Rocket\l"
	.string "Party's sailing in the stars. Now\l"
	.string "faithful Rocket grunts, take her away!$"

CityClara_Church_Text_Blaine4::
# 1103 "data/maps/CityClara_Church/scripts.pory"
	.string "No where to run now Mew we have you\l"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. The party truly has suprassed\l"
	.string "the gods.$"

CityClara_Church_Text_Blaine5::
# 1107 "data/maps/CityClara_Church/scripts.pory"
	.string "Today we defeated superstition and\l"
	.string "proudly declare this the age of man!\l"
	.string "Throwing a yoke on this defeated god\l"
	.string "shall empower us to design our fate.\l"
	.string "Under the leadership of us Rockets\l"
	.string "humanity will live to touch the stars,\l"
	.string "to take the place of Jove in Illion, and\l"
	.string "shake the universe as we see fit...\l"
	.string "Enough of this, we leave now for Gato.$"

CityClara_Church_Text_Blaine6::
# 1111 "data/maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\l"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1115 "data/maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1119 "data/maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\l"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1123 "data/maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\l"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Rockets forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1127 "data/maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1131 "data/maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\l"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1135 "data/maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\l"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1139 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1143 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1147 "data/maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1151 "data/maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\l"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1155 "data/maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\l"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1159 "data/maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\l"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1163 "data/maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1167 "data/maps/CityClara_Church/scripts.pory"
	.string "My name is Lamina, I serve the church\l"
	.string "where for one thousand years we've\l"
	.string "worshipped Mew. Today that wicked man\l"
	.string "of pure evil has somehow found a way to\l"
	.string "enslave Mew. After the Rockets\l"
	.string "outlawed religion we feared every day\l"
	.string "would be our last but knew our faith in\l"
	.string "Mew would kept us safe. Until today\l"
	.string "they had left us alone and we truly\l"
	.string "believed Mew had appeared to prove\l"
	.string "once and for all our church was safe...$"

CityClara_Church_Text_Dad3::
# 1171 "data/maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\l"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1175 "data/maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\l"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1179 "data/maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\l"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1183 "data/maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\l"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1187 "data/maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\l"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1191 "data/maps/CityClara_Church/scripts.pory"
	.string "I think I know someone who just might\l"
	.string "help. You should {PLAYER} travel\l"
	.string "north to the desert and there seek out\l"
	.string "the university. It stands in the\l"
	.string "ancient city, Ardor. There you will meet\l"
	.string "my old friend from the war, Indiana is in\l"
	.string "hiding disguised as an archaeology\l"
	.string "professor. If there still stands a man\l"
	.string "with will to fight it will be him. Tell him\l"
	.string "the time has come.$"

CityClara_Church_Text_Sage7::
# 1195 "data/maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\l"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1199 "data/maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\l"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1203 "data/maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\l"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1207 "data/maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\l"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1211 "data/maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\l"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1215 "data/maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\l"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1219 "data/maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\l"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1223 "data/maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\l"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1227 "data/maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\l"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1231 "data/maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\l"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1235 "data/maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\l"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1239 "data/maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\l"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1243 "data/maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1247 "data/maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\l"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1251 "data/maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
