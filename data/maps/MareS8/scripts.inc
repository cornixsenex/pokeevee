MareS8_MapScripts::
# 13 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 16 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 3
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 27 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutuliBlock
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 20 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 24 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 23 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 28 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 29 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_ShowRutulianWar::
# 37 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 38 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 39 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 43 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 47 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 40 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 41 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 44 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 45 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 48 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 49 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 56 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 57 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 58 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 59 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 60 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 61 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 62 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 63 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 64 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 65 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 66 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 67 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 73 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 74 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 75 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 79 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 80 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 81 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 85 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 86 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 87 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 91 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 92 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 93 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 97 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 98 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 99 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 105 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 106 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 107 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 108 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 109 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 112 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 113 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 114 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 115 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 116 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 117 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 118 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 119 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 120 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 121 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 123 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 124 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 125 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 126 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 127 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 128 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 129 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 130 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 131 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 132 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 133 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 134 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 135 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 136 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 137 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 138 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 139 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 140 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 141 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 142 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 143 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 144 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 145 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 146 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 147 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 149 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 150 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 151 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 152 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 153 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 154 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 155 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 156 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 157 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 158 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 159 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 160 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 161 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 162 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 163 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 164 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 165 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 166 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 167 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 168 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 169 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 170 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 171 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 172 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 173 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 174 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 175 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 177 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 178 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 179 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 180 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 181 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 182 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 183 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 184 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 186 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 187 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 188 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 189 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 190 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 191 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 192 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 193 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 195 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 196 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 197 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 198 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 200 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 201 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 202 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 204 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 206 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 207 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 208 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 209 "data/maps/MareS8/scripts.pory"
	delay 60
# 210 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 211 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 212 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 213 "data/maps/MareS8/scripts.pory"
	delay 60
# 214 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 215 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 216 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 217 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 219 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 220 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 221 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 223 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 225 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 226 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 227 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 229 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 230 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 231 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 232 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 234 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 235 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 236 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 238 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 239 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 240 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 241 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 242 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 243 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 244 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 245 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 247 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 248 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 249 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 250 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 251 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 252 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 253 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 254 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 255 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 257 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 258 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 260 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 261 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 262 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 263 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 264 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 265 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 266 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 267 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 268 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 269 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 271 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 272 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 273 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 274 "data/maps/MareS8/scripts.pory"
	closemessage
# 275 "data/maps/MareS8/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 277 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 279 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 280 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 281 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 282 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 283 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 284 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 285 "data/maps/MareS8/scripts.pory"
	closemessage
# 287 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 288 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 289 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 291 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 292 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 293 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 295 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 296 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 297 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 299 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 300 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 302 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 303 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 304 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 306 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 307 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 308 "data/maps/MareS8/scripts.pory"
	closemessage
# 309 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 310 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 312 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 314 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 315 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 316 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 317 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 318 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 319 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 320 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 321 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 322 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 324 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 326 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 332 "data/maps/MareS8/scripts.pory"
	faceplayer
# 333 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 334 "data/maps/MareS8/scripts.pory"
	closemessage
# 335 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 340 "data/maps/MareS8/scripts.pory"
	faceplayer
# 341 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 342 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_Script_Beroe_2
# 345 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringSearch
MareS8_Script_Beroe_1:
# 347 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 348 "data/maps/MareS8/scripts.pory"
	closemessage
# 349 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 350 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end

MareS8_Script_Beroe_2:
# 343 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
	goto MareS8_Script_Beroe_1


MareS8_Script_Aeneas::
# 355 "data/maps/MareS8/scripts.pory"
	faceplayer
# 356 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 357 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 358 "data/maps/MareS8/scripts.pory"
	closemessage
# 359 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 360 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 365 "data/maps/MareS8/scripts.pory"
	faceplayer
# 366 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 367 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 368 "data/maps/MareS8/scripts.pory"
	closemessage
# 369 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 370 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 375 "data/maps/MareS8/scripts.pory"
	faceplayer
# 376 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 377 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 378 "data/maps/MareS8/scripts.pory"
	closemessage
# 379 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 380 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 385 "data/maps/MareS8/scripts.pory"
	faceplayer
# 386 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 387 "data/maps/MareS8/scripts.pory"
	closemessage
# 388 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 393 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 394 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 395 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 396 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 397 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 398 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 399 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 400 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 404 "data/maps/MareS8/scripts.pory"
	lockall
# 405 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 407 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 409 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 410 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 412 "data/maps/MareS8/scripts.pory"
	delay 30
# 413 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 414 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 416 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 417 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 419 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 421 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 422 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 423 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 424 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 425 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 426 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 428 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 432 "data/maps/MareS8/scripts.pory"
	lockall
# 433 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 435 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 437 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 438 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 440 "data/maps/MareS8/scripts.pory"
	delay 30
# 441 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 442 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 444 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 445 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 447 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 449 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 450 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 451 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 452 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 454 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 458 "data/maps/MareS8/scripts.pory"
	lockall
# 459 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 461 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 463 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 464 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 466 "data/maps/MareS8/scripts.pory"
	delay 30
# 467 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 468 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 471 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 473 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 474 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 475 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 476 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 478 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 482 "data/maps/MareS8/scripts.pory"
	lockall
# 483 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 485 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 487 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 488 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 490 "data/maps/MareS8/scripts.pory"
	delay 30
# 491 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 492 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 494 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 495 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 499 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 500 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 501 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 502 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 504 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 508 "data/maps/MareS8/scripts.pory"
	lockall
# 509 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 511 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 513 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 514 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 516 "data/maps/MareS8/scripts.pory"
	delay 30
# 517 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 518 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 520 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 521 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 523 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 525 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 526 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 527 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 528 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 530 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
# 534 "data/maps/MareS8/scripts.pory"
	lockall
# 535 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 537 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 539 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 540 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 542 "data/maps/MareS8/scripts.pory"
	delay 30
# 543 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 544 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 546 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 547 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 549 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 551 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 552 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 553 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 554 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 556 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 560 "data/maps/MareS8/scripts.pory"
	lockall
# 561 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 563 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 565 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 566 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 568 "data/maps/MareS8/scripts.pory"
	delay 30
# 569 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 570 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 572 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 573 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 575 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 577 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 578 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 580 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 584 "data/maps/MareS8/scripts.pory"
	lockall
# 585 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 587 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 589 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 590 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 592 "data/maps/MareS8/scripts.pory"
	delay 30
# 593 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 594 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 599 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 600 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 602 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 606 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 608 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 609 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 610 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 611 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 613 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 614 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 616 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 617 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 619 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 620 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 622 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 623 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 626 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 627 "data/maps/MareS8/scripts.pory"
	closemessage
# 628 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 631 "data/maps/MareS8/scripts.pory"
	closemessage
# 633 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 634 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 636 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 638 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 639 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 641 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 642 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 644 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 645 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 647 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 648 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 651 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 652 "data/maps/MareS8/scripts.pory"
	closemessage
# 653 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 612 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 615 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 618 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 621 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 624 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 657 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 658 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 659 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 660 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 662 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 663 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 665 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 666 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 668 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 669 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 671 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 672 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 675 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 676 "data/maps/MareS8/scripts.pory"
	closemessage
# 677 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 637 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 640 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 643 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 646 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 649 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 680 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 661 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 664 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 667 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 670 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 673 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 686 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 688 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 694 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 700 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 706 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 712 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 713 "data/maps/MareS8/scripts.pory"
	closemessage
# 714 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 718 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 720 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 689 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 690 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 691 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 692 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 695 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 696 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 697 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 698 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 701 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 702 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 703 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 704 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 707 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 708 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 709 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 710 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 725 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 726 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 727 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 728 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 733 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliBlock
# 734 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 739 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 740 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 741 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 742 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 743 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 744 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 746 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 747 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 749 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 754 "data/maps/MareS8/scripts.pory"
	lockall
# 755 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 757 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 759 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 760 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 761 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 762 "data/maps/MareS8/scripts.pory"
	delay 30
# 764 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 765 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 766 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 768 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 770 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 771 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 773 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 774 "data/maps/MareS8/scripts.pory"
	closemessage
# 776 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 778 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 779 "data/maps/MareS8/scripts.pory"
	closemessage
# 781 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 782 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 783 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 784 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 785 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 786 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 787 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 788 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 790 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 791 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 792 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 793 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 794 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 795 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 796 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 797 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 799 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 801 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutuli34B::
# 807 "data/maps/MareS8/scripts.pory"
	lockall
# 808 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 810 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 812 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 813 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 814 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 815 "data/maps/MareS8/scripts.pory"
	delay 30
# 817 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 818 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 819 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 821 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 823 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 824 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 826 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 827 "data/maps/MareS8/scripts.pory"
	closemessage
# 829 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 831 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 832 "data/maps/MareS8/scripts.pory"
	closemessage
# 834 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 835 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 836 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 837 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 838 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 839 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 840 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 841 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 843 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 844 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 845 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 846 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 847 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 848 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 849 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 850 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 852 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 854 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutulian3A::
# 859 "data/maps/MareS8/scripts.pory"
	lockall
# 860 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 862 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 864 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 865 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 867 "data/maps/MareS8/scripts.pory"
	delay 30
# 868 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 869 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 872 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 874 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 875 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 876 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 877 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 878 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 879 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 880 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 881 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 882 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 883 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 885 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
# 889 "data/maps/MareS8/scripts.pory"
	lockall
# 890 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 892 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 894 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 895 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 897 "data/maps/MareS8/scripts.pory"
	delay 30
# 898 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 899 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 901 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 902 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 904 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 906 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 907 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 908 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 909 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 910 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 911 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 913 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 917 "data/maps/MareS8/scripts.pory"
	lockall
# 918 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 920 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 922 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 923 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 925 "data/maps/MareS8/scripts.pory"
	delay 30
# 926 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 927 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 929 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 930 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 932 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 934 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 935 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 936 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 937 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 938 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 939 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 941 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle_Text_0:
# 626 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 712 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Text_Beroe1::
# 944 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 953 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 957 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 961 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 968 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 973 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 978 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 983 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 988 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 994 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached it's\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of it's heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 1005 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 1014 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 1019 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 1024 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 1028 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 1033 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1037 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1042 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1047 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1052 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1057 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1062 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1067 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1072 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1077 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1082 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1087 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1092 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1097 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1102 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1107 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1112 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1117 "data/maps/MareS8/scripts.pory"
	.string "Ta-attack waisland stopya.$"

MareS8_Text_RutuliDoublePre2::
# 1122 "data/maps/MareS8/scripts.pory"
	.string "Watwo Rutuli tadefeatna.$"

MareS8_Text_RutuliDoubleLost1::
# 1126 "data/maps/MareS8/scripts.pory"
	.string "Wafall backya!$"

MareS8_Text_RutuliDoubleLost2::
# 1130 "data/maps/MareS8/scripts.pory"
	.string "Wabeat!$"

MareS8_Text_RutuliDoublePost::
# 1134 "data/maps/MareS8/scripts.pory"
	.string "Waneed more Rutuli here fastya!$"

MareS8_Text_RutuliBlock::
# 1138 "data/maps/MareS8/scripts.pory"
	.string "Isla holy Hesperia beya.\p"
	.string "Taoutsider welcomena. Tago!$"

MareS8_Text_BeroeDuringSearch::
# 1142 "data/maps/MareS8/scripts.pory"
	.string "The boys, Romulus and Remus, are gone! I\n"
	.string "hope they turn up soon...It's terrible!$"
