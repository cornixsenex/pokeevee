MareS8_MapScripts::
# 14 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 17 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 3
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 21 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 28 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutuliBlock
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 22 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 21 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 25 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 24 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 29 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 30 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_ShowRutulianWar::
# 38 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 39 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 40 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 44 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 48 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 41 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 42 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 45 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 46 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 49 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 50 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 57 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 58 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 59 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 60 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 61 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 62 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 63 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 65 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 66 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 67 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 68 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 74 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 75 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 76 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 80 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 81 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 82 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 86 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 87 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 88 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaElenna::
# 92 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 6
# 93 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 94 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 98 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 99 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 100 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 104 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 105 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 106 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 112 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 113 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 114 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 115 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 116 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 119 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 120 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 121 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 122 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 123 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 124 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 125 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 126 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 127 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 128 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 130 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 131 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 132 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 133 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 134 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 135 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 136 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 137 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 138 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 139 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 140 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 141 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 142 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 143 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 144 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 145 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 146 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 147 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 149 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 150 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 151 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 152 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 153 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 154 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 155 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 156 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 157 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 158 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 159 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 160 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 161 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 162 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 163 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 164 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 165 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 166 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 167 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 168 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 169 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 170 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 171 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 172 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 173 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 174 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 175 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 176 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 177 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 178 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 179 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 180 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 181 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 182 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 184 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 185 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 186 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 187 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 188 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 189 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 190 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 191 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 193 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 194 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 195 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 196 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 197 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 198 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 200 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 203 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 204 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 205 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 206 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 207 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 208 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 209 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 211 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 213 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 214 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 215 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 216 "data/maps/MareS8/scripts.pory"
	delay 60
# 217 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 218 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 219 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 220 "data/maps/MareS8/scripts.pory"
	delay 60
# 221 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 222 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 223 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 224 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 226 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 227 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 228 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 230 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 232 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 233 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 234 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 236 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 237 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 238 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 239 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 241 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 242 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 243 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 245 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 246 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 247 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 248 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 249 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 250 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 251 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 252 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 254 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 255 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 256 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 257 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 258 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 259 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 260 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 261 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 262 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 263 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 264 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 265 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 267 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 268 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 269 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 270 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 271 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 272 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 273 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 274 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 275 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 276 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 278 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 279 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 280 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 281 "data/maps/MareS8/scripts.pory"
	closemessage
# 282 "data/maps/MareS8/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 284 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 286 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 287 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 288 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 289 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 290 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 291 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 292 "data/maps/MareS8/scripts.pory"
	closemessage
# 294 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 295 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 296 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 298 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 299 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 300 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 302 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 303 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 304 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 306 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 307 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 309 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 310 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 311 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 313 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 314 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 315 "data/maps/MareS8/scripts.pory"
	closemessage
# 316 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 317 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 319 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 321 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 322 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 323 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 324 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 325 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 326 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 327 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 328 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 329 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 331 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 333 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 339 "data/maps/MareS8/scripts.pory"
	faceplayer
# 340 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 341 "data/maps/MareS8/scripts.pory"
	closemessage
# 342 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 347 "data/maps/MareS8/scripts.pory"
	faceplayer
# 348 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 349 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_Script_Beroe_2
# 352 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringSearch
MareS8_Script_Beroe_1:
# 354 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 355 "data/maps/MareS8/scripts.pory"
	closemessage
# 356 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 357 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end

MareS8_Script_Beroe_2:
# 350 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
	goto MareS8_Script_Beroe_1


MareS8_Script_Aeneas::
# 362 "data/maps/MareS8/scripts.pory"
	faceplayer
# 363 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 364 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 365 "data/maps/MareS8/scripts.pory"
	closemessage
# 366 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 367 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 372 "data/maps/MareS8/scripts.pory"
	faceplayer
# 373 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 374 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 375 "data/maps/MareS8/scripts.pory"
	closemessage
# 376 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 377 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 382 "data/maps/MareS8/scripts.pory"
	faceplayer
# 383 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 384 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 385 "data/maps/MareS8/scripts.pory"
	closemessage
# 386 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 387 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 392 "data/maps/MareS8/scripts.pory"
	faceplayer
# 393 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 394 "data/maps/MareS8/scripts.pory"
	closemessage
# 395 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 400 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 401 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 402 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 403 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 404 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 405 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 406 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 407 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 411 "data/maps/MareS8/scripts.pory"
	lockall
# 412 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 414 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 416 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 417 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 419 "data/maps/MareS8/scripts.pory"
	delay 30
# 420 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 421 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 423 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 424 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 426 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 428 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 429 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 430 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 431 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 432 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 433 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 435 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 439 "data/maps/MareS8/scripts.pory"
	lockall
# 440 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 442 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 444 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 445 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 447 "data/maps/MareS8/scripts.pory"
	delay 30
# 448 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 449 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 451 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 452 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 454 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 456 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 457 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 459 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 461 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 465 "data/maps/MareS8/scripts.pory"
	lockall
# 466 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 468 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 470 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 471 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 473 "data/maps/MareS8/scripts.pory"
	delay 30
# 474 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 475 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 478 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 480 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 481 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 482 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 483 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 485 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 489 "data/maps/MareS8/scripts.pory"
	lockall
# 490 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 492 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 494 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 495 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS8/scripts.pory"
	delay 30
# 498 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 499 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 501 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 502 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 504 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 506 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 507 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 508 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 509 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 511 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 515 "data/maps/MareS8/scripts.pory"
	lockall
# 516 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 518 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 520 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 521 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 523 "data/maps/MareS8/scripts.pory"
	delay 30
# 524 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 525 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 527 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 528 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 530 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 532 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 533 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 534 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 535 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 537 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
# 541 "data/maps/MareS8/scripts.pory"
	lockall
# 542 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 544 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 546 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 547 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 549 "data/maps/MareS8/scripts.pory"
	delay 30
# 550 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 551 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 553 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 554 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 556 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 558 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 559 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 560 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 561 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 563 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 567 "data/maps/MareS8/scripts.pory"
	lockall
# 568 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 570 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 572 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 573 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 575 "data/maps/MareS8/scripts.pory"
	delay 30
# 576 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 577 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 579 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 580 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 582 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 584 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 585 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 587 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 591 "data/maps/MareS8/scripts.pory"
	lockall
# 592 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 594 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 596 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 597 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 599 "data/maps/MareS8/scripts.pory"
	delay 30
# 600 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 601 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 604 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 606 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 607 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 609 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 613 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 615 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 616 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 617 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 618 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 620 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 621 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 623 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 624 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 626 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 627 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 629 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 630 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 633 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 634 "data/maps/MareS8/scripts.pory"
	closemessage
# 635 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 638 "data/maps/MareS8/scripts.pory"
	closemessage
# 640 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 641 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 642 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 643 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 645 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 646 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 648 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 649 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 651 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 652 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 654 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 655 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 658 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 659 "data/maps/MareS8/scripts.pory"
	closemessage
# 660 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 619 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 622 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 625 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 628 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 631 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 664 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 665 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 666 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 667 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 669 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 670 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 672 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 673 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 675 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 676 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 678 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 679 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 682 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 683 "data/maps/MareS8/scripts.pory"
	closemessage
# 684 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 644 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 647 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 650 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 653 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 656 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 687 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 668 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 671 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 674 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 677 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 680 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 693 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 695 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 701 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 707 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 713 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 719 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 720 "data/maps/MareS8/scripts.pory"
	closemessage
# 721 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 725 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 727 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 696 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 697 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 698 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 699 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 702 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 703 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 704 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 705 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 708 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 709 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 710 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 711 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 714 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 715 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 716 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 717 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 732 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 733 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 734 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 735 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 740 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliBlock
# 741 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 746 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 747 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 748 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 749 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 750 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 751 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 753 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 754 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 756 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 761 "data/maps/MareS8/scripts.pory"
	lockall
# 762 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 764 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 766 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 767 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 768 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 769 "data/maps/MareS8/scripts.pory"
	delay 30
# 771 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 772 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 773 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 775 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 777 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 778 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 780 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 781 "data/maps/MareS8/scripts.pory"
	closemessage
# 783 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 785 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 786 "data/maps/MareS8/scripts.pory"
	closemessage
# 788 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 789 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 790 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 791 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 792 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 793 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 794 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 795 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 797 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 798 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 799 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 800 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 801 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 802 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 803 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 804 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 806 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 808 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutuli34B::
# 814 "data/maps/MareS8/scripts.pory"
	lockall
# 815 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 817 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 819 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 820 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 821 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 822 "data/maps/MareS8/scripts.pory"
	delay 30
# 824 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 825 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 826 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 828 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 830 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 831 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 833 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 834 "data/maps/MareS8/scripts.pory"
	closemessage
# 836 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 838 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 839 "data/maps/MareS8/scripts.pory"
	closemessage
# 841 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 842 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 843 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 844 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 845 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 846 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 847 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 848 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 850 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 851 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 852 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 853 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 854 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 855 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 856 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 857 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 859 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 861 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutulian3A::
# 866 "data/maps/MareS8/scripts.pory"
	lockall
# 867 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 869 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 871 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 872 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 874 "data/maps/MareS8/scripts.pory"
	delay 30
# 875 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 876 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 879 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 881 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 882 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 883 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 884 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 885 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 886 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 887 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 888 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 889 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 890 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 892 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
# 896 "data/maps/MareS8/scripts.pory"
	lockall
# 897 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 899 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 901 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 902 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 904 "data/maps/MareS8/scripts.pory"
	delay 30
# 905 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 906 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 908 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 909 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 911 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 913 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 914 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 915 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 916 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 917 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 918 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 920 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 924 "data/maps/MareS8/scripts.pory"
	lockall
# 925 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 927 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 929 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 930 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 932 "data/maps/MareS8/scripts.pory"
	delay 30
# 933 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 934 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 936 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 937 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 939 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 941 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 942 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 943 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 944 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 945 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 946 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 948 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle_Text_0:
# 633 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 719 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Text_Beroe1::
# 951 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 960 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 964 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 968 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 975 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 980 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 985 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 990 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 995 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 1001 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached its\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of its heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 1012 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 1021 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 1026 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 1031 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 1035 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 1040 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1044 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1049 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1054 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1059 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1064 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1069 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1074 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1079 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1084 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1089 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1094 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1099 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1104 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1109 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1114 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1119 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1124 "data/maps/MareS8/scripts.pory"
	.string "Ta-attack waisland stopya.$"

MareS8_Text_RutuliDoublePre2::
# 1129 "data/maps/MareS8/scripts.pory"
	.string "Watwo Rutuli tadefeatna.$"

MareS8_Text_RutuliDoubleLost1::
# 1133 "data/maps/MareS8/scripts.pory"
	.string "Wafall backya!$"

MareS8_Text_RutuliDoubleLost2::
# 1137 "data/maps/MareS8/scripts.pory"
	.string "Wabeat!$"

MareS8_Text_RutuliDoublePost::
# 1141 "data/maps/MareS8/scripts.pory"
	.string "Waneed more Rutuli here fastya!$"

MareS8_Text_RutuliBlock::
# 1145 "data/maps/MareS8/scripts.pory"
	.string "Isla holy Hesperia beya.\p"
	.string "Taoutsider welcomena. Tago!$"

MareS8_Text_BeroeDuringSearch::
# 1149 "data/maps/MareS8/scripts.pory"
	.string "The boys, Romulus and Remus, are gone! I\n"
	.string "hope they turn up soon...It's terrible!$"
