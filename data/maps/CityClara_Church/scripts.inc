CityClara_Church_MapScripts::
# 2 "data//maps/CityClara_Church/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CityClara_Church_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 0, CityClara_Church_OnWarp_HidePreChurchCutscene
# 4 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 1, CityClara_Church_OnWarp_HidePreChurchCutscene
# 5 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 2, CityClara_Church_OnWarp_HidePreChurchCutscene
# 6 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 3, CityClara_Church_OnWarp_HidePreChurchCutscene
# 7 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 4, CityClara_Church_OnWarp_HidePreChurchCutscene
# 8 "data//maps/CityClara_Church/scripts.pory"
	map_script_2 VAR_CITYCLARA_STATE, 10, CicyClara_Church_OnWarp_ShowAfterChurchCutscene
	.2byte 0


CityClara_Church_OnWarp_HidePreChurchCutscene::
# 13 "data//maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
# 14 "data//maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 15 "data//maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDEDAD
# 16 "data//maps/CityClara_Church/scripts.pory"
	removeobject 8
# 17 "data//maps/CityClara_Church/scripts.pory"
	removeobject 9
# 18 "data//maps/CityClara_Church/scripts.pory"
	removeobject 10
# 19 "data//maps/CityClara_Church/scripts.pory"
	removeobject 11
# 20 "data//maps/CityClara_Church/scripts.pory"
	removeobject 12
# 21 "data//maps/CityClara_Church/scripts.pory"
	removeobject 13
	end


CicyClara_Church_OnWarp_ShowAfterChurchCutscene::
# 26 "data//maps/CityClara_Church/scripts.pory"
	removeobject 11
# 27 "data//maps/CityClara_Church/scripts.pory"
	removeobject 12
# 28 "data//maps/CityClara_Church/scripts.pory"
	setobjectxyperm 13, 20, 15
# 29 "data//maps/CityClara_Church/scripts.pory"
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
# 30 "data//maps/CityClara_Church/scripts.pory"
	addobject 13
# 31 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
	end


CityClara_Church_EventScript_BlainTrigger1::
# 36 "data//maps/CityClara_Church/scripts.pory"
	lock
# 37 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 1
# 38 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 39 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 40 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1A
# 41 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 42 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 43 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 44 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 45 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera1B
# 46 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 47 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 48 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 49 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 50 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 51 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 52 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger2::
# 56 "data//maps/CityClara_Church/scripts.pory"
	lock
# 57 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 2
# 58 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 59 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 60 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2A
# 61 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 62 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 63 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 64 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 65 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera2B
# 66 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 67 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 68 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 69 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 70 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 71 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 72 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger3::
# 77 "data//maps/CityClara_Church/scripts.pory"
	lock
# 78 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 3
# 79 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 80 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 81 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3A
# 82 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 83 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 84 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 85 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 86 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera3B
# 87 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 88 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 89 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 90 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 91 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 92 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 93 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger4::
# 98 "data//maps/CityClara_Church/scripts.pory"
	lock
# 99 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 4
# 100 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 101 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 102 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4A
# 103 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 104 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 105 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 106 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 107 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera4B
# 108 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 109 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 110 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 111 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 112 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 113 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 114 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger5::
# 118 "data//maps/CityClara_Church/scripts.pory"
	lock
# 119 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 5
# 120 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 121 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 122 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5A
# 123 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 124 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 125 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 126 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 127 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera5B
# 128 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 129 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 130 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 131 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 132 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 133 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 134 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlainTrigger6::
# 139 "data//maps/CityClara_Church/scripts.pory"
	lock
# 140 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 6
# 141 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 142 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 143 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6A
# 144 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 145 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 146 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_BlaineCutscene
# 147 "data//maps/CityClara_Church/scripts.pory"
	special SpawnCameraObject
# 148 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CityClara_Church_Movement_PanCamera6B
# 149 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 150 "data//maps/CityClara_Church/scripts.pory"
	special RemoveCameraObject
# 151 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesIntro
# 152 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 153 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_no_intro TRAINER_JESSE_AND_JAMES_1, CityClara_Text_JesseAndJamesLost
# 154 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_JesseAndJamesDefeated
# 155 "data//maps/CityClara_Church/scripts.pory"
	release
	end


CityClara_Church_EventScript_BlaineCutscene::
# 160 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 161 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage1
# 162 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 163 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 164 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 165 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine1
# 166 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 167 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 168 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 169 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage2
# 170 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 171 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 172 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 173 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine2
# 174 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 175 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 178 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageGrab
# 179 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageGrab
# 180 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 183 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 184 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage3
# 185 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 186 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 188 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 189 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine3
# 190 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 191 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 194 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1SageExit
# 195 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2SageExit
# 196 "data//maps/CityClara_Church/scripts.pory"
	applymovement 2, CityClara_Church_Movement_SageExit
# 198 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 199 "data//maps/CityClara_Church/scripts.pory"
	hideobjectat 5, MAP_CITY_CLARA_CHURCH
# 200 "data//maps/CityClara_Church/scripts.pory"
	setobjectxy 4, 18, 23
# 201 "data//maps/CityClara_Church/scripts.pory"
	removeobject 2
# 202 "data//maps/CityClara_Church/scripts.pory"
	hideobjectat 4, MAP_CITY_CLARA_CHURCH
# 206 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase1
# 207 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 208 "data//maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase1
# 209 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 210 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase2
# 211 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 212 "data//maps/CityClara_Church/scripts.pory"
	applymovement 1, CityClara_Church_Movement_MewChase2
# 213 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 214 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 215 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine4
# 216 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 217 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 220 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase3
# 221 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 222 "data//maps/CityClara_Church/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 223 "data//maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 224 "data//maps/CityClara_Church/scripts.pory"
	waitmoncry
# 225 "data//maps/CityClara_Church/scripts.pory"
	removeobject 1
# 226 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 4, MAP_CITY_CLARA_CHURCH
# 227 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 5, MAP_CITY_CLARA_CHURCH
# 228 "data//maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 229 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineChase4
# 230 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Enter
# 231 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Enter
# 232 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 235 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 236 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine5
# 237 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 238 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 240 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_Blaine5
# 241 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 243 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 244 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 248 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_2
# 252 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_3
# 256 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_4
# 260 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_5
# 264 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_6
# 268 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_7
# 273 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 274 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_BlaineCutscene_1:
# 276 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 277 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 278 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine6
# 279 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 280 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceDown
# 281 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 282 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine7
# 283 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 284 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 287 "data//maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDEJESSEJAMES
# 288 "data//maps/CityClara_Church/scripts.pory"
	addobject 8
# 289 "data//maps/CityClara_Church/scripts.pory"
	addobject 9
# 290 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 8, MAP_CITY_CLARA_CHURCH
# 291 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 9, MAP_CITY_CLARA_CHURCH
# 292 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_Rocket1Enter
# 293 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_Rocket2Enter
# 294 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 295 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Meowth
# 296 "data//maps/CityClara_Church/scripts.pory"
	addobject 10
# 297 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 10, MAP_CITY_CLARA_CHURCH
# 298 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEnter
# 299 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 300 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 7, 190, 98
# 301 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Blaine8
# 302 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 7
# 303 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 305 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_BlaineExit
# 306 "data//maps/CityClara_Church/scripts.pory"
	applymovement 6, CityClara_Church_Movement_GruntLExit
# 307 "data//maps/CityClara_Church/scripts.pory"
	applymovement 7, CityClara_Church_Movement_GruntRExit
# 308 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_16
# 320 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_17
# 332 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 3
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_18
# 344 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_19
# 356 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_20
# 368 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 6
	goto_if_eq CityClara_Church_EventScript_BlaineCutscene_21
# 381 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
# 382 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 383 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
CityClara_Church_EventScript_BlaineCutscene_15:
# 385 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
	return

CityClara_Church_EventScript_BlaineCutscene_2:
# 249 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 250 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab1
# 251 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab1
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_3:
# 253 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 254 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab2
# 255 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab2
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_4:
# 257 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceLeft
# 258 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab3
# 259 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab3
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_5:
# 261 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 262 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab4
# 263 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab4
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_6:
# 265 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 266 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab5
# 267 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab5
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_7:
# 269 "data//maps/CityClara_Church/scripts.pory"
	applymovement 3, CityClara_Church_Movement_FaceRight
# 270 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1PlayerGrab6
# 271 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2PlayerGrab6
	goto CityClara_Church_EventScript_BlaineCutscene_1

CityClara_Church_EventScript_BlaineCutscene_16:
# 309 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit1
# 310 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit1
# 311 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 312 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 313 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 314 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 315 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 316 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 317 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage1
# 318 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage1
# 319 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_17:
# 321 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit2
# 322 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit2
# 323 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 324 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 325 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 326 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 327 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 328 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 329 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage1
# 330 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage1
# 331 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage1
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_18:
# 333 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit3
# 334 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit3
# 335 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 336 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 337 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 338 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 339 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 340 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 341 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage3
# 342 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage3
# 343 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_JesseEngage3
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_19:
# 345 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit4
# 346 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit4
# 347 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 348 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 349 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 350 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 351 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 352 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 353 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage4
# 354 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage4
# 355 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_20:
# 357 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit5
# 358 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit5
# 359 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 360 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 361 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 362 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 363 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 364 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 365 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage4
# 366 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage4
# 367 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_MeowthEngage4
	goto CityClara_Church_EventScript_BlaineCutscene_15

CityClara_Church_EventScript_BlaineCutscene_21:
# 369 "data//maps/CityClara_Church/scripts.pory"
	applymovement 4, CityClara_Church_Movement_Rocket1Exit6
# 370 "data//maps/CityClara_Church/scripts.pory"
	applymovement 5, CityClara_Church_Movement_Rocket2Exit6
# 371 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 372 "data//maps/CityClara_Church/scripts.pory"
	removeobject 3
# 373 "data//maps/CityClara_Church/scripts.pory"
	removeobject 4
# 374 "data//maps/CityClara_Church/scripts.pory"
	removeobject 5
# 375 "data//maps/CityClara_Church/scripts.pory"
	removeobject 6
# 376 "data//maps/CityClara_Church/scripts.pory"
	removeobject 7
# 377 "data//maps/CityClara_Church/scripts.pory"
	applymovement 8, CityClara_Church_Movement_JesseEngage6
# 378 "data//maps/CityClara_Church/scripts.pory"
	applymovement 9, CityClara_Church_Movement_JamesEngage6
# 379 "data//maps/CityClara_Church/scripts.pory"
	applymovement 10, CityClara_Church_Movement_JamesEngage6
	goto CityClara_Church_EventScript_BlaineCutscene_15


CityClara_Church_EventScript_JesseAndJamesDefeated::
# 391 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_JesseAndJamesPost
# 392 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 393 "data//maps/CityClara_Church/scripts.pory"
	fadescreen 1
# 394 "data//maps/CityClara_Church/scripts.pory"
	removeobject 8
# 395 "data//maps/CityClara_Church/scripts.pory"
	removeobject 9
# 396 "data//maps/CityClara_Church/scripts.pory"
	removeobject 10
# 397 "data//maps/CityClara_Church/scripts.pory"
	fadescreen 0
# 398 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 1
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_2
# 400 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 2
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_3
# 402 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 4
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_4
# 404 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_CITYCLARA_STATE, 5
	goto_if_eq CityClara_Church_EventScript_JesseAndJamesDefeated_5
# 407 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 408 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_ERROR
CityClara_Church_EventScript_JesseAndJamesDefeated_1:
# 410 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 411 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 414 "data//maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 415 "data//maps/CityClara_Church/scripts.pory"
	addobject 11
# 416 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 11, MAP_CITY_CLARA_CHURCH
# 417 "data//maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafEnter
# 418 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 419 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_FaceLeft
# 420 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 421 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 422 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf1
# 423 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 424 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 425 "data//maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 426 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 427 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 428 "data//maps/CityClara_Church/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 429 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 430 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 431 "data//maps/CityClara_Church/scripts.pory"
	clearflag FLAG_CLARACITY_CHURCH_HIDEDAD
# 432 "data//maps/CityClara_Church/scripts.pory"
	addobject 12
# 433 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 12, MAP_CITY_CLARA_CHURCH
# 434 "data//maps/CityClara_Church/scripts.pory"
	addobject 13
# 435 "data//maps/CityClara_Church/scripts.pory"
	showobjectat 13, MAP_CITY_CLARA_CHURCH
# 437 "data//maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadEnter
# 438 "data//maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_DadEnter
# 439 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 440 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 442 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad1
# 443 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 444 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 445 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 446 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf2
# 447 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 448 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 449 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 450 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad2
# 451 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 452 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 453 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 454 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage4
# 455 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 456 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 460 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 461 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad3
# 462 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 463 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 468 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 469 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage5
# 470 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 471 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 475 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 476 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad4
# 477 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 478 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 484 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 485 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage6
# 486 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 487 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 493 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 494 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad5
# 495 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 496 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 497 "data//maps/CityClara_Church/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 498 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 499 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 500 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad6
# 501 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 502 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 507 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 508 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage7
# 509 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 510 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 514 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
# 518 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 519 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage8
# 520 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 521 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 525 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 526 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad7
# 527 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 528 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 532 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 533 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf3
# 534 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 535 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 539 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 5, 190, 98
# 540 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Dad8
# 541 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 542 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 5
# 546 "data//maps/CityClara_Church/scripts.pory"
	applymovement 12, CityClara_Church_Movement_DadExit
# 547 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 548 "data//maps/CityClara_Church/scripts.pory"
	removeobject 12
# 552 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 4, 190, 98
# 553 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Leaf4
# 554 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 555 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 4
# 558 "data//maps/CityClara_Church/scripts.pory"
	applymovement 11, CityClara_Church_Movement_LeafExit
# 559 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 560 "data//maps/CityClara_Church/scripts.pory"
	removeobject 11
# 565 "data//maps/CityClara_Church/scripts.pory"
	applymovement 13, CityClara_Church_Movement_SageCenter
# 566 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 567 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 568 "data//maps/CityClara_Church/scripts.pory"
	waitmovement 0
# 572 "data//maps/CityClara_Church/scripts.pory"
	load_field_pic 6, 190, 98
# 573 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_Sage9
# 574 "data//maps/CityClara_Church/scripts.pory"
	closemessage
# 575 "data//maps/CityClara_Church/scripts.pory"
	destroy_field_pic 6
# 579 "data//maps/CityClara_Church/scripts.pory"
	setflag FLAG_CLARACITY_CHURCH_HIDELEAF
# 580 "data//maps/CityClara_Church/scripts.pory"
	setvar VAR_CITYCLARA_STATE, 10
	return

CityClara_Church_EventScript_JesseAndJamesDefeated_2:
# 399 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter1
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_3:
# 401 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter2
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_4:
# 403 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter4
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1

CityClara_Church_EventScript_JesseAndJamesDefeated_5:
# 405 "data//maps/CityClara_Church/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CityClara_Church_Movement_PlayerCenter5
	goto CityClara_Church_EventScript_JesseAndJamesDefeated_1


CityClara_Church_EventScript_ChooseStone::
# 585 "data//maps/CityClara_Church/scripts.pory"
	multichoice 0, 0, MULTI_CITYCLARA_CHURCH_STONE, TRUE
# 586 "data//maps/CityClara_Church/scripts.pory"
	switch VAR_RESULT
# 587 "data//maps/CityClara_Church/scripts.pory"
	case 0, CityClara_Church_EventScript_ChooseStone_3
# 589 "data//maps/CityClara_Church/scripts.pory"
	case 1, CityClara_Church_EventScript_ChooseStone_4
# 591 "data//maps/CityClara_Church/scripts.pory"
	case 2, CityClara_Church_EventScript_ChooseStone_5
# 593 "data//maps/CityClara_Church/scripts.pory"
	case 3, CityClara_Church_EventScript_ChooseStone_6
CityClara_Church_EventScript_ChooseStone_1:
	return

CityClara_Church_EventScript_ChooseStone_3:
# 588 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveFireStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_4:
# 590 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveWaterStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_5:
# 592 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveThunderStone
	goto CityClara_Church_EventScript_ChooseStone_1

CityClara_Church_EventScript_ChooseStone_6:
# 594 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_GiveNoneStone
	goto CityClara_Church_EventScript_ChooseStone_1


CityClara_Church_EventScript_GiveFireStone::
# 600 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveFireStone, MSGBOX_YESNO
# 601 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveFireStone_2
# 605 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveFireStone_1:
	return

CityClara_Church_EventScript_GiveFireStone_2:
# 602 "data//maps/CityClara_Church/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 603 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveFireStone_1


CityClara_Church_EventScript_GiveWaterStone::
# 611 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveWaterStone, MSGBOX_YESNO
# 612 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveWaterStone_2
# 616 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveWaterStone_1:
	return

CityClara_Church_EventScript_GiveWaterStone_2:
# 613 "data//maps/CityClara_Church/scripts.pory"
	giveitem ITEM_WATER_STONE
# 614 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveWaterStone_1


CityClara_Church_EventScript_GiveThunderStone::
# 622 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveThunderStone, MSGBOX_YESNO
# 623 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveThunderStone_2
# 627 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
CityClara_Church_EventScript_GiveThunderStone_1:
	return

CityClara_Church_EventScript_GiveThunderStone_2:
# 624 "data//maps/CityClara_Church/scripts.pory"
	giveitem ITEM_THUNDER_STONE
# 625 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_TakeStone
	goto CityClara_Church_EventScript_GiveThunderStone_1


CityClara_Church_EventScript_GiveNoneStone::
# 633 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_GiveNoneStone, MSGBOX_YESNO
# 634 "data//maps/CityClara_Church/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CityClara_Church_EventScript_GiveNoneStone_1
# 637 "data//maps/CityClara_Church/scripts.pory"
	call CityClara_Church_EventScript_ChooseStone
	return

CityClara_Church_EventScript_GiveNoneStone_1:
# 635 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_DenyStone
	return


CityClara_Church_EventScript_Sage::
# 642 "data//maps/CityClara_Church/scripts.pory"
	faceplayer
# 643 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_SageAfterMew
# 644 "data//maps/CityClara_Church/scripts.pory"
	closemessage
	end


CityClara_Church_EventScript_BlaineTest::
# 650 "data//maps/CityClara_Church/scripts.pory"
	trainerbattle_single TRAINER_BLAINE, CityClara_Church_Text_BlaineIntro, CityClara_Church_Text_BlaineLost
# 651 "data//maps/CityClara_Church/scripts.pory"
	msgbox CityClara_Church_Text_BlainePost
# 652 "data//maps/CityClara_Church/scripts.pory"
	closemessage
	return


# 655 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1A:
# 656 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 656 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 656 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 657 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 658 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 658 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 661 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera1B:
# 662 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 662 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 663 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 664 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 664 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 667 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2A:
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 668 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 671 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera2B:
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 672 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 675 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3A:
# 676 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 676 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 676 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 677 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 678 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 678 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 681 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera3B:
# 682 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 682 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 683 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 684 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 684 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 684 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 687 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4A:
# 688 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 688 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 688 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 689 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southwest
# 690 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 690 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 693 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera4B:
# 694 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 694 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 695 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northeast
# 696 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 696 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 699 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5A:
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 700 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 703 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera5B:
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 704 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 707 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6A:
# 708 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 708 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 709 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_northwest
# 710 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
# 710 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_left
	step_end

# 713 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PanCamera6B:
# 714 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 714 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 715 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_diag_southeast
# 716 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 716 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 716 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
	step_end

# 719 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageGrab:
# 720 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 720 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 720 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 721 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 724 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageGrab:
# 725 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 725 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 726 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 729 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1SageExit:
# 730 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 731 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 731 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 731 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 732 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 732 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 732 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 732 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 732 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 735 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2SageExit:
# 736 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 737 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 738 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 738 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 738 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 738 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 738 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 741 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageExit:
# 742 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 743 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 743 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 744 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 744 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 744 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 744 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 744 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 747 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase1:
# 748 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 748 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 748 "data//maps/CityClara_Church/scripts.pory"
	walk_up
	step_end

# 751 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase1:
# 752 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 753 "data//maps/CityClara_Church/scripts.pory"
	face_left
# 754 "data//maps/CityClara_Church/scripts.pory"
	face_right
# 755 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 758 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase2:
# 759 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 760 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 760 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 761 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 764 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MewChase2:
# 765 "data//maps/CityClara_Church/scripts.pory"
	walk_slow_right
# 766 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 769 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase3:
# 770 "data//maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 773 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineChase4:
# 774 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 777 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Blaine5:
# 778 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 778 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 778 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 781 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceLeft:
# 782 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 785 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceRight:
# 786 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 789 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_FaceDown:
# 790 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 793 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Enter:
# 794 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 794 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 795 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 796 "data//maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 799 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Enter:
# 800 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 800 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 801 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 802 "data//maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 805 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab1:
# 806 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 806 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 807 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 808 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 809 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 810 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 813 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab2:
# 814 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 814 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 814 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 814 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 815 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 815 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 816 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 819 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab3:
# 820 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 820 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 820 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 820 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 820 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 821 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 822 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 825 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab4:
# 826 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 826 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 826 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 827 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 827 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 827 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 828 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 831 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab5:
# 832 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 832 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 832 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 832 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 833 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 833 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 834 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 837 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1PlayerGrab6:
# 838 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 838 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 838 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 838 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 838 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 839 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 840 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 843 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab1:
# 844 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 844 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 844 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 845 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 845 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 845 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 846 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 849 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab2:
# 850 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 850 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 851 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 851 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 852 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 855 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab3:
# 856 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 856 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 857 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 858 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 861 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab4:
# 862 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 862 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 862 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 863 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 863 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 863 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 864 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 867 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab5:
# 868 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 868 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 869 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 869 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 870 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 873 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2PlayerGrab6:
# 874 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 874 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 875 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 876 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 879 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEnter:
# 880 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 881 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 881 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 882 "data//maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 885 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_BlaineExit:
# 886 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 886 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 887 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 887 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 887 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 887 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 887 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 889 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntLExit:
# 890 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 890 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 890 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 890 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 891 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 894 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_GruntRExit:
# 895 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 895 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 895 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 895 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 896 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 899 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit1:
# 900 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 900 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 900 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 900 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 901 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 901 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 904 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit2:
# 905 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 905 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 906 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 909 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit3:
# 910 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 910 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 911 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 914 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit4:
# 915 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 915 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 915 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 916 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 916 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 916 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 919 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit5:
# 920 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 920 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 920 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 921 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 921 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 924 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket1Exit6:
# 925 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 925 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 925 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 926 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 929 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit1:
# 930 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 930 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 930 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 931 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 931 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 931 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 934 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit2:
# 935 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 935 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 935 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 936 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 936 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 939 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit3:
# 940 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 940 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 940 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southeast
# 941 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 944 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit4:
# 945 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 945 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 945 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 945 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 946 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 946 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 950 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit5:
# 951 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 951 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 952 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 955 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_Rocket2Exit6:
# 956 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 956 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 957 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 960 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage1:
# 961 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 961 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 962 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 962 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 963 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 966 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage1:
# 967 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 967 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 967 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 968 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 968 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 968 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 969 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 972 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage1:
# 973 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 974 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 974 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 974 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 975 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 978 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage3:
# 979 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 979 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 979 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 979 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 980 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 983 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage3:
# 984 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 984 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 984 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 985 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 986 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 986 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 987 "data//maps/CityClara_Church/scripts.pory"
	face_left
	step_end

# 990 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage4:
# 991 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 991 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 991 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 992 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 992 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 992 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 993 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 996 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage4:
# 997 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 997 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 998 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 998 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 999 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1002 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_MeowthEngage4:
# 1003 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1004 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1004 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1004 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1005 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1007 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JesseEngage6:
# 1008 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1008 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1008 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1009 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northeast
# 1010 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1010 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1011 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1014 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_JamesEngage6:
# 1015 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1015 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1015 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1015 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1016 "data//maps/CityClara_Church/scripts.pory"
	face_right
	step_end

# 1019 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter1:
# 1020 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1020 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1020 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1020 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1021 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1022 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1022 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1023 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1026 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter2:
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1027 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1028 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1031 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter4:
# 1032 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1032 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1033 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1034 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1034 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1035 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1038 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_PlayerCenter5:
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1039 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1040 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

# 1043 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafEnter:
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1044 "data//maps/CityClara_Church/scripts.pory"
	walk_right
	step_end

# 1047 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadEnter:
# 1048 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 1049 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1049 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1049 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_northwest
# 1050 "data//maps/CityClara_Church/scripts.pory"
	face_up
	step_end

# 1053 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_DadExit:
# 1054 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1054 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1055 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1056 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1059 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_LeafExit:
# 1060 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1060 "data//maps/CityClara_Church/scripts.pory"
	walk_down
# 1061 "data//maps/CityClara_Church/scripts.pory"
	walk_diag_southwest
# 1062 "data//maps/CityClara_Church/scripts.pory"
	walk_down
	step_end

# 1065 "data//maps/CityClara_Church/scripts.pory"
CityClara_Church_Movement_SageCenter:
# 1066 "data//maps/CityClara_Church/scripts.pory"
	walk_left
# 1067 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 1067 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 1067 "data//maps/CityClara_Church/scripts.pory"
	walk_up
# 1068 "data//maps/CityClara_Church/scripts.pory"
	walk_right
# 1069 "data//maps/CityClara_Church/scripts.pory"
	face_down
	step_end

CityClara_Church_Text_Sage1::
# 1072 "data//maps/CityClara_Church/scripts.pory"
	.string "I beg of you, please, stop what you're\n"
	.string "doing.$"

CityClara_Church_Text_Blaine1::
# 1076 "data//maps/CityClara_Church/scripts.pory"
	.string "A final warning, get thee gone dumb girl.$"

CityClara_Church_Text_Sage2::
# 1080 "data//maps/CityClara_Church/scripts.pory"
	.string "You must be stopped, you know not what\n"
	.string "you do.$"

CityClara_Church_Text_Blaine2::
# 1084 "data//maps/CityClara_Church/scripts.pory"
	.string "I know exactly what I have achieved,\n"
	.string "with this new power we will not be\l"
	.string "stopped. If foolishly you will never\l"
	.string "submit to the authority of our party\l"
	.string "you and your people will vaish to dust$"

CityClara_Church_Text_Sage3::
# 1090 "data//maps/CityClara_Church/scripts.pory"
	.string "Unhand me I am Mew's true suppliant!\n"
	.string "The foundations of this city were built\l"
	.string "on solid rock of our worship of Mew. One\l"
	.string "thousand years we cultivated art,\l"
	.string "sharing discoveries with even you, we\l"
	.string "must thank Mew for all our modern world.\l"
	.string "Your foolish pride is threatening to\l"
	.string "end this thousand years of joy which\l"
	.string "Mew exclusively made possible for us!$"

CityClara_Church_Text_Blaine3::
# 1094 "data//maps/CityClara_Church/scripts.pory"
	.string "You speak of foolish pride most\n"
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
# 1101 "data//maps/CityClara_Church/scripts.pory"
	.string "No where to run now Mew we have you\n"
	.string "trapped. I now will demonstrate our\l"
	.string "victory. The party truly has suprassed\l"
	.string "the gods.$"

CityClara_Church_Text_Blaine5::
# 1105 "data//maps/CityClara_Church/scripts.pory"
	.string "Today we defeated superstition and\n"
	.string "proudly declare this the age of man!\l"
	.string "Throwing a yoke on this defeated god\l"
	.string "shall empower us to design our fate.\l"
	.string "Under the leadership of us Rockets\l"
	.string "humanity will live to touch the stars,\l"
	.string "to take the place of Jove in Illion, and\l"
	.string "shake the universe as we see fit...\l"
	.string "Enough of this, we leave now for Gato.$"

CityClara_Church_Text_Blaine6::
# 1109 "data//maps/CityClara_Church/scripts.pory"
	.string "What's that? How did this rat mouse his\n"
	.string "way here? Who was watching the doors?$"

CityClara_Church_Text_Blaine7::
# 1113 "data//maps/CityClara_Church/scripts.pory"
	.string "Jesse and James!$"

CityClara_Church_Text_Meowth::
# 1117 "data//maps/CityClara_Church/scripts.pory"
	.string "We're right here boss. And don't forget\n"
	.string "Meowth!$"

CityClara_Church_Text_Blaine8::
# 1121 "data//maps/CityClara_Church/scripts.pory"
	.string "You have both failed me look what you\n"
	.string "let in! We must away, you two clean up\l"
	.string "this mess. Rockets forward! March\l"
	.string "onward to the stars!$"

CityClara_Church_Text_JesseAndJamesIntro::
# 1125 "data//maps/CityClara_Church/scripts.pory"
	.string "Prepare for trouble. And make it double$"

CityClara_Text_JesseAndJamesLost::
# 1129 "data//maps/CityClara_Church/scripts.pory"
	.string "I can't believe it! How did this twerp\n"
	.string "win?$"

CityClara_Church_Text_JesseAndJamesPost::
# 1133 "data//maps/CityClara_Church/scripts.pory"
	.string "Looks like Team Rocket's blasting off\n"
	.string "again!$"

CityClara_Church_Text_BlaineIntro::
# 1137 "data//maps/CityClara_Church/scripts.pory"
	.string "Test 1$"

CityClara_Church_Text_BlaineLost::
# 1141 "data//maps/CityClara_Church/scripts.pory"
	.string "Test 2$"

CityClara_Church_Text_BlainePost::
# 1145 "data//maps/CityClara_Church/scripts.pory"
	.string "Test 3$"

CityClara_Church_Text_Leaf1::
# 1149 "data//maps/CityClara_Church/scripts.pory"
	.string "Hey {PLAYER}! C'mon! Why didn't you\n"
	.string "wait up? And where is everyone!? And\l"
	.string "hey! Where's MEW?$"

CityClara_Church_Text_Dad1::
# 1153 "data//maps/CityClara_Church/scripts.pory"
	.string "Thank Mew you're both alright! The\n"
	.string "Rockets have...$"

CityClara_Church_Text_Leaf2::
# 1157 "data//maps/CityClara_Church/scripts.pory"
	.string "What's going on? Where's Mew? And who is\n"
	.string "this?$"

CityClara_Church_Text_Dad2::
# 1161 "data//maps/CityClara_Church/scripts.pory"
	.string "If you'd calm down we'd properly explain$"

CityClara_Church_Text_Sage4::
# 1165 "data//maps/CityClara_Church/scripts.pory"
	.string "My name is Lamina, I serve the church\n"
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
# 1169 "data//maps/CityClara_Church/scripts.pory"
	.string "But can't you see they just used you as\n"
	.string "bait? This sanctuary was allowed to\l"
	.string "stand so that Mew would be lured back\l"
	.string "to appear! As soon as party men had\l"
	.string "heard the news, they journeyed here to\l"
	.string "execute their plan. They wanted to\l"
	.string "capture Mew for something.$"

CityClara_Church_Text_Sage5::
# 1173 "data//maps/CityClara_Church/scripts.pory"
	.string "I would never imagine what they'll do\n"
	.string "but now I fear the worst. They might\l"
	.string "exploit somehow the powerful nature of\l"
	.string "Mew and with that power work wicked\l"
	.string "evil. They must be stopped at any and\l"
	.string "all cost...$"

CityClara_Church_Text_Dad4::
# 1177 "data//maps/CityClara_Church/scripts.pory"
	.string "The party is extremely powerful, and I\n"
	.string "should know I faught them in the war. I\l"
	.string "watched so many of our best men die,\l"
	.string "those of us still alive were forced to\l"
	.string "hide, and powerlessly watch their\l"
	.string "takeover. We'll never win now that\l"
	.string "they've captured Mew.$"

CityClara_Church_Text_Sage6::
# 1181 "data//maps/CityClara_Church/scripts.pory"
	.string "Do not speak of defeat, good shall\n"
	.string "prevail. The party now has grown too\l"
	.string "arrogant, there are forces at work\l"
	.string "beyond ourselves, and this supurbly\l"
	.string "bold youngster shall help.$"

CityClara_Church_Text_Dad5::
# 1185 "data//maps/CityClara_Church/scripts.pory"
	.string "Of course! How could I not notice\n"
	.string "before? This kid, this {PLAYER} will\l"
	.string "defeat the party! But {PLAYER}\l"
	.string "cannot defeat them all alone, we need\l"
	.string "allies when all the world's afraid to\l"
	.string "fight for that which is worth fighting\l"
	.string "for.$"

CityClara_Church_Text_Dad6::
# 1189 "data//maps/CityClara_Church/scripts.pory"
	.string "I think I know someone who just might\n"
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
# 1193 "data//maps/CityClara_Church/scripts.pory"
	.string "This journey will be long, and arduous. I\n"
	.string "wish to help you on your fated quest.\l"
	.string "Please take one of our ancient holy\l"
	.string "stones. These jewels have been kept\l"
	.string "safe within this church one thousand\l"
	.string "years we've saved them for this task.\l"
	.string "Now {PLAYER} you must choose wisely\l"
	.string "which to take.$"

CityClara_Church_Text_Sage8::
# 1197 "data//maps/CityClara_Church/scripts.pory"
	.string "The fate of all the world now rests with\n"
	.string "you, go forth young {PLAYER} and know\l"
	.string "you have our faith.$"

CityClara_Church_Text_Dad7::
# 1201 "data//maps/CityClara_Church/scripts.pory"
	.string "That's right {PLAYER} you know I\n"
	.string "believe in you. So Leaf what say you we\l"
	.string "be on our way back to the club in order\l"
	.string "to protect in case any Rockets should\l"
	.string "come around?$"

CityClara_Church_Text_Leaf3::
# 1205 "data//maps/CityClara_Church/scripts.pory"
	.string "I'm sorry father, I cannot obey. I'm\n"
	.string "going to Ardor along with {PLAYER}.\l"
	.string "Someone needs to make sure that he\l"
	.string "stays safe, and we can have some fun\l"
	.string "along the way!$"

CityClara_Church_Text_Dad8::
# 1209 "data//maps/CityClara_Church/scripts.pory"
	.string "That's fine with me, you know I love you\n"
	.string "Leaf. If anyone needs me, go to the\l"
	.string "club.$"

CityClara_Church_Text_Leaf4::
# 1213 "data//maps/CityClara_Church/scripts.pory"
	.string "Let's do it {PLAYER} we'll have\n"
	.string "eachother's backs! I think we should\l"
	.string "start by taking Route 4. I'll meet you\l"
	.string "somewhere up in Robustus.$"

CityClara_Church_Text_Sage9::
# 1217 "data//maps/CityClara_Church/scripts.pory"
	.string "Good luck {PLAYER} and may you soon\n"
	.string "rescue Mew.$"

CityClara_Church_Text_GiveFireStone::
# 1221 "data//maps/CityClara_Church/scripts.pory"
	.string "This Fire Stone will give you great\n"
	.string "power. Be cautious that you don't allow\l"
	.string "your strength to overcome your wits, or\l"
	.string "to enrage you while you battle. You\l"
	.string "must remain calm. Is this the stone\l"
	.string "you're sure you wish to hold?$"

CityClara_Church_Text_GiveWaterStone::
# 1225 "data//maps/CityClara_Church/scripts.pory"
	.string "This Water Stone will help you on your\n"
	.string "quest. Across the open seas, and under\l"
	.string "hills, this stone will safeguard you on\l"
	.string "your journey. Is this the stone you're\l"
	.string "sure you want from me?$"

CityClara_Church_Text_GiveThunderStone::
# 1229 "data//maps/CityClara_Church/scripts.pory"
	.string "This Thunder Stone shall bring you\n"
	.string "victory. Neither reckless, nor too\l"
	.string "cautionary, you must remain to harness\l"
	.string "thunderbolts. Are you prepared to hold\l"
	.string "the Thunder Stone?$"

CityClara_Church_Text_GiveNoneStone::
# 1233 "data//maps/CityClara_Church/scripts.pory"
	.string "You are most noble for your age young\n"
	.string "{PLAYER}. The stone could have given\l"
	.string "you great power but if you don't want\l"
	.string "it, I'll keep them safe. Are you certain\l"
	.string "that you will take no stone?$"

CityClara_Church_Text_TakeStone::
# 1237 "data//maps/CityClara_Church/scripts.pory"
	.string "May Mew allow this stone to give you\n"
	.string "strength!$"

CityClara_Church_Text_DenyStone::
# 1241 "data//maps/CityClara_Church/scripts.pory"
	.string "I wish you luck, but offer no more help.$"

CityClara_Church_Text_SageAfterMew::
# 1245 "data//maps/CityClara_Church/scripts.pory"
	.string "Be on your way {PLAYER} you must\n"
	.string "rescue Mew.$"

CityClara_Church_Text_ERROR::
# 1249 "data//maps/CityClara_Church/scripts.pory"
	.string "VAR CITYCLARA STATE OUT OF BOUNDS$"
