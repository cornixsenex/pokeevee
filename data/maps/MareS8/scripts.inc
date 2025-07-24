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
	compare VAR_AENEID_STATE, 69
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
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

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 24 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return


MareS8_Script_ShowRutulianWar::
# 31 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 32 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 37 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 41 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 34 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 35 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 38 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 39 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 42 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 43 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 50 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 51 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 52 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 53 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 54 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 55 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 56 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 57 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 61 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 67 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 68 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 69 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 73 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 74 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 75 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 79 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 80 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 81 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 85 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 86 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 87 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 91 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 92 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 93 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 99 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 100 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 101 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 102 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 103 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 106 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 107 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 108 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 109 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 110 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 111 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 112 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 113 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 114 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 115 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 117 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 118 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 119 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 120 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 121 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 122 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 123 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 124 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 125 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 126 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 127 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 128 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 129 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 130 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 131 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 132 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 133 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 134 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 135 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 136 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 137 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 138 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 139 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 140 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 141 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 142 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 143 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 144 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 145 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 146 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 147 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 149 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 150 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 151 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 152 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 153 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 154 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 155 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 156 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 157 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 158 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 159 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 160 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 161 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 162 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 163 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 164 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 165 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 166 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 167 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 168 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 169 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 171 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 172 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 173 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 174 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 175 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 176 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 177 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 178 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 180 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 181 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 182 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 183 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 184 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 185 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 186 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 187 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 189 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 190 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 191 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 192 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 193 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 194 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 195 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 196 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 198 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 200 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 201 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 203 "data/maps/MareS8/scripts.pory"
	delay 60
# 204 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 205 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 206 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 207 "data/maps/MareS8/scripts.pory"
	delay 60
# 208 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 209 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 210 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 211 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 213 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 214 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 215 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 217 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 219 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 220 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 221 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 223 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 224 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 225 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 227 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 228 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 229 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 231 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 232 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 233 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 234 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 235 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 236 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 237 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 238 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 240 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 241 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 242 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 243 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 244 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 245 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 246 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 247 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 248 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 249 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 250 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 251 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 253 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 254 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 255 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 257 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 258 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 260 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 261 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 262 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 264 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 265 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 266 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 267 "data/maps/MareS8/scripts.pory"
	closemessage
# 271 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 272 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 273 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 274 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 275 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 276 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 277 "data/maps/MareS8/scripts.pory"
	closemessage
# 279 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 280 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 281 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 283 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 284 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 285 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 287 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 288 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 289 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 291 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 292 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 294 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 295 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 296 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 298 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 299 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 300 "data/maps/MareS8/scripts.pory"
	closemessage
# 301 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 302 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 304 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 306 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 307 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 308 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 309 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 310 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 311 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 312 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 313 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 314 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 316 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 318 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 324 "data/maps/MareS8/scripts.pory"
	faceplayer
# 325 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 326 "data/maps/MareS8/scripts.pory"
	closemessage
# 327 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 332 "data/maps/MareS8/scripts.pory"
	faceplayer
# 333 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
# 334 "data/maps/MareS8/scripts.pory"
	closemessage
# 335 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 336 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end


MareS8_Script_Aeneas::
# 341 "data/maps/MareS8/scripts.pory"
	faceplayer
# 342 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 343 "data/maps/MareS8/scripts.pory"
	closemessage
# 344 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 349 "data/maps/MareS8/scripts.pory"
	faceplayer
# 350 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 351 "data/maps/MareS8/scripts.pory"
	closemessage
# 352 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 357 "data/maps/MareS8/scripts.pory"
	faceplayer
# 358 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 359 "data/maps/MareS8/scripts.pory"
	closemessage
# 360 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 365 "data/maps/MareS8/scripts.pory"
	faceplayer
# 366 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 367 "data/maps/MareS8/scripts.pory"
	closemessage
# 368 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 373 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 374 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 375 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 376 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 377 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 378 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 379 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 380 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 384 "data/maps/MareS8/scripts.pory"
	lockall
# 385 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 387 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 389 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 390 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 392 "data/maps/MareS8/scripts.pory"
	delay 30
# 393 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 394 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 396 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 397 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 399 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 401 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 402 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 403 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 404 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 405 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 406 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 408 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 412 "data/maps/MareS8/scripts.pory"
	lockall
# 413 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 415 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 417 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 418 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 420 "data/maps/MareS8/scripts.pory"
	delay 30
# 421 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 422 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 424 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 425 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 427 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 429 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 430 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 431 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 432 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 434 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 438 "data/maps/MareS8/scripts.pory"
	lockall
# 439 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 441 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 443 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 444 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 446 "data/maps/MareS8/scripts.pory"
	delay 30
# 447 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 448 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 451 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 453 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 454 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 455 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 456 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 462 "data/maps/MareS8/scripts.pory"
	lockall
# 463 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 465 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 467 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 468 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 470 "data/maps/MareS8/scripts.pory"
	delay 30
# 471 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 472 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 474 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 475 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 477 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 479 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 480 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 481 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 482 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 484 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 488 "data/maps/MareS8/scripts.pory"
	lockall
# 489 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 491 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 493 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 494 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 496 "data/maps/MareS8/scripts.pory"
	delay 30
# 497 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 498 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 500 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 501 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 503 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 505 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 506 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 507 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 508 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 510 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
# 514 "data/maps/MareS8/scripts.pory"
	lockall
# 515 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 517 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 519 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 520 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 522 "data/maps/MareS8/scripts.pory"
	delay 30
# 523 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 524 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 526 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 527 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 529 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 531 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 532 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 533 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 534 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 536 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 540 "data/maps/MareS8/scripts.pory"
	lockall
# 541 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 543 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 545 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 546 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 548 "data/maps/MareS8/scripts.pory"
	delay 30
# 549 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 550 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 552 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 553 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 555 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 557 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 558 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 560 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 564 "data/maps/MareS8/scripts.pory"
	lockall
# 565 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 567 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 569 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 570 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 572 "data/maps/MareS8/scripts.pory"
	delay 30
# 573 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 574 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 577 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 579 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 580 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 582 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 586 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 588 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 589 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 590 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 591 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 593 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 594 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 596 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 597 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 599 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 600 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 602 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 603 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 606 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 607 "data/maps/MareS8/scripts.pory"
	closemessage
# 608 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 611 "data/maps/MareS8/scripts.pory"
	closemessage
# 613 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 614 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 615 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 616 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 618 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 619 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 621 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 622 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 624 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 625 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 627 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 628 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 631 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 632 "data/maps/MareS8/scripts.pory"
	closemessage
# 633 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 592 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 595 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 598 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 601 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 604 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 637 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 638 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 639 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 640 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 642 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 643 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 645 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 646 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 648 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 649 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 651 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 652 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 655 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 656 "data/maps/MareS8/scripts.pory"
	closemessage
# 657 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 617 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 620 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 623 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 626 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 629 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 660 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 641 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 644 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 647 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 650 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 653 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 666 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 668 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 674 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 680 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 686 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 692 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 693 "data/maps/MareS8/scripts.pory"
	closemessage
# 694 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 698 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 700 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 669 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 670 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 671 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 672 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 675 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 676 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 677 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 678 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 681 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 682 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 683 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 684 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 687 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 688 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 689 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 690 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 705 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 706 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 707 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 708 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 713 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RutuliBlock
# 714 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 719 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 720 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 721 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 722 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 723 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 724 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 726 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 727 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 729 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 734 "data/maps/MareS8/scripts.pory"
	lockall
# 735 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 737 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 739 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 740 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 741 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 742 "data/maps/MareS8/scripts.pory"
	delay 30
# 744 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 745 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 746 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 748 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 750 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 751 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 753 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 754 "data/maps/MareS8/scripts.pory"
	closemessage
# 756 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 758 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 759 "data/maps/MareS8/scripts.pory"
	closemessage
# 761 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 762 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 763 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 764 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 765 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 766 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 767 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 768 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 770 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 771 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 772 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 773 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 774 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 775 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 776 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 777 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 779 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
	return


MareS8_Script_Trigger_Rutuli34B::
# 785 "data/maps/MareS8/scripts.pory"
	lockall
# 786 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 788 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 790 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 791 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 792 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 793 "data/maps/MareS8/scripts.pory"
	delay 30
# 795 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 796 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 797 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 799 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 801 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 802 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 804 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 805 "data/maps/MareS8/scripts.pory"
	closemessage
# 807 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 809 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 810 "data/maps/MareS8/scripts.pory"
	closemessage
# 812 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 813 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 814 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 815 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 816 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 817 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 818 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 819 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 821 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 822 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 823 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 824 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 825 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 826 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 827 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 828 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 830 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
	return


MareS8_Script_Trigger_Rutulian3A::
# 835 "data/maps/MareS8/scripts.pory"
	lockall
# 836 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 838 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 840 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 841 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 843 "data/maps/MareS8/scripts.pory"
	delay 30
# 844 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 845 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 848 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 850 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 851 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 852 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 853 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 855 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
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
# 871 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 872 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 874 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 876 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 877 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 878 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 879 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 881 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 885 "data/maps/MareS8/scripts.pory"
	lockall
# 886 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 888 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 890 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 891 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 893 "data/maps/MareS8/scripts.pory"
	delay 30
# 894 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 895 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 897 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 898 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 900 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 902 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 903 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 904 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 905 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 907 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle_Text_0:
# 606 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 692 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Text_Beroe1::
# 910 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 919 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 923 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 927 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 934 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 939 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 944 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 949 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 954 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 960 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached it's\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of it's heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 971 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 980 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 985 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 990 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 994 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 999 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1003 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1008 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1013 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1018 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1023 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1028 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1033 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1038 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1043 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1048 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1053 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1058 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1063 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1068 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1073 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1078 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1082 "data/maps/MareS8/scripts.pory"
	.string "$"

MareS8_Text_RutuliDoublePre2::
# 1086 "data/maps/MareS8/scripts.pory"
	.string "$"

MareS8_Text_RutuliDoubleLost1::
# 1090 "data/maps/MareS8/scripts.pory"
	.string "$"

MareS8_Text_RutuliDoubleLost2::
# 1094 "data/maps/MareS8/scripts.pory"
	.string "$"

MareS8_Text_RutuliDoublePost::
# 1098 "data/maps/MareS8/scripts.pory"
	.string "$"
