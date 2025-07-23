MareS8_MapScripts::
# 13 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 16 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 69
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 16 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 20 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return


MareS8_Script_ShowRutulianWar::
# 27 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 28 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 33 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 37 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 30 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 31 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 34 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 35 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 38 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 39 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 46 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 47 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 48 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 49 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 50 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 51 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 52 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 54 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 63 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 64 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 65 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 69 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 70 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 71 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 75 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 76 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 77 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 81 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 82 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 83 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 87 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 88 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 89 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 95 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 96 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 97 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 98 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 99 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 102 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 103 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 104 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 105 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 106 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 107 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 108 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 109 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 110 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 111 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 113 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 114 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 115 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 116 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 117 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 118 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 119 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 120 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 121 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 122 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 123 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 124 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 125 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 126 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 127 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 128 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 129 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 130 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 131 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 132 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 133 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 134 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 135 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 136 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 137 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 138 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 139 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 140 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 141 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 142 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 143 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 144 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 145 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 146 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 147 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 149 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 150 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 151 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 152 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 153 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 154 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 155 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 156 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 157 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 158 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 159 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 160 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 161 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 162 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 163 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 164 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 165 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 167 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 168 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 169 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 170 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 171 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 172 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 173 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 174 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 176 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 177 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 178 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 179 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 180 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 181 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 182 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 183 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 185 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 186 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 187 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 188 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 189 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 190 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 191 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 192 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 194 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 196 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 197 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 198 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 199 "data/maps/MareS8/scripts.pory"
	delay 60
# 200 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 201 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 203 "data/maps/MareS8/scripts.pory"
	delay 60
# 204 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 205 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 206 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 207 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 209 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 210 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 211 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 213 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 215 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 216 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 217 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 219 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 220 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 221 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 223 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 224 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 225 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 227 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 228 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 229 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 230 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 231 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 232 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 233 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 234 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 236 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 237 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 238 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 239 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 240 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 241 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 242 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 243 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 244 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 245 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 246 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 247 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 249 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 250 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 251 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 252 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 253 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 254 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 255 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 256 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 257 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 258 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 260 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 261 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 262 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 263 "data/maps/MareS8/scripts.pory"
	closemessage
# 265 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 267 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 268 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 269 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 270 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 271 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 272 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 273 "data/maps/MareS8/scripts.pory"
	closemessage
# 275 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 276 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 277 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 279 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 280 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 281 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 283 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 284 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 285 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 287 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 288 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 290 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 291 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 292 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 294 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 295 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 296 "data/maps/MareS8/scripts.pory"
	closemessage
# 297 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 298 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 300 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 302 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 303 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 304 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 305 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 306 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 307 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 308 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 309 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 310 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 312 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 314 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 320 "data/maps/MareS8/scripts.pory"
	faceplayer
# 321 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 322 "data/maps/MareS8/scripts.pory"
	closemessage
# 323 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 328 "data/maps/MareS8/scripts.pory"
	faceplayer
# 329 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
# 330 "data/maps/MareS8/scripts.pory"
	closemessage
# 331 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 332 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end


MareS8_Script_Aeneas::
# 337 "data/maps/MareS8/scripts.pory"
	faceplayer
# 338 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 339 "data/maps/MareS8/scripts.pory"
	closemessage
# 340 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 345 "data/maps/MareS8/scripts.pory"
	faceplayer
# 346 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 347 "data/maps/MareS8/scripts.pory"
	closemessage
# 348 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 353 "data/maps/MareS8/scripts.pory"
	faceplayer
# 354 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 355 "data/maps/MareS8/scripts.pory"
	closemessage
# 356 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 361 "data/maps/MareS8/scripts.pory"
	faceplayer
# 362 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 363 "data/maps/MareS8/scripts.pory"
	closemessage
# 364 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 369 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 370 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 371 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 372 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 373 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 374 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 375 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 376 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Text_Beroe1::
# 380 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 389 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 393 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 397 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 404 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 409 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 414 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 419 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 424 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 430 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached it's\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of it's heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 441 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 450 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 455 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 460 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 464 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 469 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 473 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"
