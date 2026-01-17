MareS8_MapScripts::
# 17 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 40 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 20 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 3
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 31 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 36 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_SetupKecleonChase
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutuliBlock
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 24 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 28 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 27 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 32 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 33 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME:
# 41 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 43 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON1, MAP_MARE_S8
# 44 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON2, MAP_MARE_S8
# 45 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON3, MAP_MARE_S8
# 46 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON4, MAP_MARE_S8
# 47 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 48 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 49 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON7, MAP_MARE_S8
	return


MareS8_Script_ShowRutulianWar::
# 56 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 57 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 62 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 66 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 59 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 60 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 63 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 64 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 67 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 68 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 75 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 76 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 77 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 78 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 79 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 80 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 81 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 82 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 83 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 84 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 85 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 86 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 92 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 93 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 94 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 98 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 99 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 100 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 104 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 105 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 106 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaElenna::
# 110 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 6
# 111 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 112 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 116 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 117 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 118 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 122 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 123 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 124 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 130 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 131 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 132 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 133 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 134 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 137 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 138 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 139 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 140 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 141 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 142 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 143 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 144 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 145 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 146 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 148 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 149 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 150 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 151 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 152 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 153 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 154 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 155 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 156 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 157 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 158 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 159 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 160 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 161 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 162 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 163 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 164 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 165 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 166 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 167 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 168 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 169 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 170 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 171 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 172 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 173 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 174 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 175 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 176 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 177 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 178 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 179 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 180 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 181 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 182 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 183 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 184 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 185 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 186 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 187 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 188 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 189 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 190 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 191 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 192 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 193 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 194 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 195 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 196 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 197 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 198 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 200 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 203 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 204 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 205 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 206 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 207 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 208 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 209 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 211 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 212 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 213 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 214 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 215 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 216 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 217 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 218 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 220 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 221 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 222 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 223 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 224 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 225 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 226 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 227 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 229 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 231 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 232 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 233 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 234 "data/maps/MareS8/scripts.pory"
	delay 60
# 235 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 236 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 237 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 238 "data/maps/MareS8/scripts.pory"
	delay 60
# 239 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 240 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 241 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 242 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 244 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 245 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 246 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 248 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 250 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 251 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 252 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 254 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 255 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 256 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 257 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 259 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 260 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 261 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 263 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 264 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 265 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 266 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 267 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 268 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 269 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 270 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 272 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 273 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 274 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 275 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 276 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 277 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 278 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 279 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 280 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 281 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 282 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 283 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 285 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 286 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 287 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 288 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 289 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 290 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 291 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 292 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 293 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 294 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 296 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 297 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 298 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 299 "data/maps/MareS8/scripts.pory"
	closemessage
# 300 "data/maps/MareS8/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 302 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 304 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 305 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 306 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 307 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 308 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 309 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 310 "data/maps/MareS8/scripts.pory"
	closemessage
# 312 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 313 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 314 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 316 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 317 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 318 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 320 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 321 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 322 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 324 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 325 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 327 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 328 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 329 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 331 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 332 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 333 "data/maps/MareS8/scripts.pory"
	closemessage
# 334 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 335 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 337 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 339 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 340 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 341 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 342 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 343 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 344 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 345 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 346 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 347 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 349 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 351 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 357 "data/maps/MareS8/scripts.pory"
	faceplayer
# 358 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 359 "data/maps/MareS8/scripts.pory"
	closemessage
# 360 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 365 "data/maps/MareS8/scripts.pory"
	faceplayer
# 366 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 367 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_Script_Beroe_2
# 370 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringSearch
MareS8_Script_Beroe_1:
# 372 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 373 "data/maps/MareS8/scripts.pory"
	closemessage
# 374 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 375 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end

MareS8_Script_Beroe_2:
# 368 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
	goto MareS8_Script_Beroe_1


MareS8_Script_Aeneas::
# 380 "data/maps/MareS8/scripts.pory"
	faceplayer
# 381 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 382 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 383 "data/maps/MareS8/scripts.pory"
	closemessage
# 384 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 385 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 390 "data/maps/MareS8/scripts.pory"
	faceplayer
# 391 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 392 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 393 "data/maps/MareS8/scripts.pory"
	closemessage
# 394 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 395 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 400 "data/maps/MareS8/scripts.pory"
	faceplayer
# 401 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 402 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 403 "data/maps/MareS8/scripts.pory"
	closemessage
# 404 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 405 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 410 "data/maps/MareS8/scripts.pory"
	faceplayer
# 411 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 412 "data/maps/MareS8/scripts.pory"
	closemessage
# 413 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 418 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 419 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 420 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 421 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 422 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 423 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 424 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 425 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 429 "data/maps/MareS8/scripts.pory"
	lockall
# 430 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 432 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 434 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 435 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 437 "data/maps/MareS8/scripts.pory"
	delay 30
# 438 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 439 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 441 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 442 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 444 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 446 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 447 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 448 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 449 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 450 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 451 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 453 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 457 "data/maps/MareS8/scripts.pory"
	lockall
# 458 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 460 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 462 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 463 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 465 "data/maps/MareS8/scripts.pory"
	delay 30
# 466 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 467 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 469 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 470 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 472 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 474 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 475 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 476 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 477 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 479 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 483 "data/maps/MareS8/scripts.pory"
	lockall
# 484 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 486 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 488 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 489 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 491 "data/maps/MareS8/scripts.pory"
	delay 30
# 492 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 493 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 496 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 498 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 499 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 500 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 501 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 503 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 507 "data/maps/MareS8/scripts.pory"
	lockall
# 508 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 510 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 512 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 513 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 515 "data/maps/MareS8/scripts.pory"
	delay 30
# 516 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 517 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 519 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 520 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 522 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 524 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 525 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 526 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 527 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 529 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 533 "data/maps/MareS8/scripts.pory"
	lockall
# 534 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 536 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 538 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 539 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 541 "data/maps/MareS8/scripts.pory"
	delay 30
# 542 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 543 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 545 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 546 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 548 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 550 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 551 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 552 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 553 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 555 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
# 559 "data/maps/MareS8/scripts.pory"
	lockall
# 560 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 562 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 564 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 565 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 567 "data/maps/MareS8/scripts.pory"
	delay 30
# 568 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 569 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 571 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 572 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 574 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 576 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 577 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 578 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 579 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 581 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 585 "data/maps/MareS8/scripts.pory"
	lockall
# 586 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 588 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 590 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 591 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 593 "data/maps/MareS8/scripts.pory"
	delay 30
# 594 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 595 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 597 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 598 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 600 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 602 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 603 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 605 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 609 "data/maps/MareS8/scripts.pory"
	lockall
# 610 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 612 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 614 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 615 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 617 "data/maps/MareS8/scripts.pory"
	delay 30
# 618 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 619 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 622 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 624 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 625 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 627 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 631 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 633 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 634 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 636 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 638 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 639 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 641 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 642 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 644 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 645 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 647 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 648 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 651 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 652 "data/maps/MareS8/scripts.pory"
	closemessage
# 653 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 656 "data/maps/MareS8/scripts.pory"
	closemessage
# 658 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 659 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 660 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 661 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 663 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 664 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 666 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 667 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 669 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 670 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 672 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 673 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 676 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 677 "data/maps/MareS8/scripts.pory"
	closemessage
# 678 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 637 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 640 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 643 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 646 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 649 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 682 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 683 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 684 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 685 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 687 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 688 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 690 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 691 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 693 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 694 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 696 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 697 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 700 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 701 "data/maps/MareS8/scripts.pory"
	closemessage
# 702 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 662 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 665 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 668 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 671 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 674 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 705 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 686 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 689 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 692 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 695 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 698 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 711 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 713 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 719 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 725 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 731 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 737 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 738 "data/maps/MareS8/scripts.pory"
	closemessage
# 739 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 743 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 745 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 714 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 715 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 716 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 717 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 720 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 721 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 722 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 723 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 726 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 727 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 728 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 729 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 732 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 733 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 734 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 735 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 750 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 751 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 752 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 753 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 758 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliBlock
# 759 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 764 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 765 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 766 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 767 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 768 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 769 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 771 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 772 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 774 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 779 "data/maps/MareS8/scripts.pory"
	lockall
# 780 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 782 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 784 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 785 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 786 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 787 "data/maps/MareS8/scripts.pory"
	delay 30
# 789 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 790 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 791 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 793 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 795 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 796 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 798 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 799 "data/maps/MareS8/scripts.pory"
	closemessage
# 801 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 803 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 804 "data/maps/MareS8/scripts.pory"
	closemessage
# 806 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 807 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 808 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 809 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 810 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 811 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 812 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 813 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 815 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 816 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 817 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 818 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 819 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 820 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 821 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 822 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 824 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 826 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutuli34B::
# 832 "data/maps/MareS8/scripts.pory"
	lockall
# 833 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 835 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 837 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 838 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 839 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 840 "data/maps/MareS8/scripts.pory"
	delay 30
# 842 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 843 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 844 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 846 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 848 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 849 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 851 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 852 "data/maps/MareS8/scripts.pory"
	closemessage
# 854 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 856 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 857 "data/maps/MareS8/scripts.pory"
	closemessage
# 859 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 860 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 861 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 862 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 863 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 864 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 865 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 866 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 868 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 869 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 870 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 871 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 872 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 873 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 874 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 875 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 877 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 879 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutulian3A::
# 884 "data/maps/MareS8/scripts.pory"
	lockall
# 885 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 887 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 889 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 890 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 892 "data/maps/MareS8/scripts.pory"
	delay 30
# 893 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 894 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 897 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 899 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 900 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 901 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 902 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 903 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 904 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 905 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 906 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 907 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 908 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 910 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
# 914 "data/maps/MareS8/scripts.pory"
	lockall
# 915 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 917 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 919 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 920 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 922 "data/maps/MareS8/scripts.pory"
	delay 30
# 923 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 924 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 926 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 927 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 929 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 931 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 932 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 933 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 934 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 935 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 936 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 938 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 942 "data/maps/MareS8/scripts.pory"
	lockall
# 943 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 945 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 947 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 948 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 950 "data/maps/MareS8/scripts.pory"
	delay 30
# 951 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 952 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 954 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 955 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 957 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 959 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 960 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 961 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 962 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 963 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 964 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 966 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_SetupKecleonChase::
# 973 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_A, 1
# 974 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_B, 1
# 975 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_C, 1
# 976 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_D, 1
# 978 "data/maps/MareS8/scripts.pory"
	goto_if_unset FLAG_MARES8_KECLEON5, MareS8_Script_SetupKecleonChase_2
MareS8_Script_SetupKecleonChase_1:
	return

MareS8_Script_SetupKecleonChase_2:
# 979 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto MareS8_Script_SetupKecleonChase_1


MareS8_Script_KecleonSetup::
# 987 "data/maps/MareS8/scripts.pory"
	lockall
# 988 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 989 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 990 "data/maps/MareS8/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 991 "data/maps/MareS8/scripts.pory"
	waitmoncry
	return


MareS8_Script_KecleonBattle::
# 996 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 997 "data/maps/MareS8/scripts.pory"
	setwildbattle SPECIES_KECLEON, 13
# 998 "data/maps/MareS8/scripts.pory"
	dowildbattle
# 999 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MareS8_Script_Kecleon5::
# 1005 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1007 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 1009 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1011 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON5
# 1012 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON5, 0, 0
# 1013 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON5, MOVEMENT_TYPE_INVISIBLE
# 1014 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON5
# 1016 "data/maps/MareS8/scripts.pory"
	setflag FLAG_MARES8_KECLEON5
# 1017 "data/maps/MareS8/scripts.pory"
	releaseall
	end


Hesperia_Script_RutulianBattle_Text_0:
# 651 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 737 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Text_Beroe1::
# 1021 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 1030 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 1034 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 1038 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 1045 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 1050 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 1055 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 1060 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 1065 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 1071 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached its\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of its heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 1082 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 1091 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 1096 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 1101 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 1105 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 1110 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1114 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1119 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1124 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1129 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1134 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1139 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1144 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1149 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1154 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1159 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1164 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1169 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1174 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1179 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1184 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1189 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1194 "data/maps/MareS8/scripts.pory"
	.string "Ta-attack waisland stopya.$"

MareS8_Text_RutuliDoublePre2::
# 1199 "data/maps/MareS8/scripts.pory"
	.string "Watwo Rutuli tadefeatna.$"

MareS8_Text_RutuliDoubleLost1::
# 1203 "data/maps/MareS8/scripts.pory"
	.string "Wafall backya!$"

MareS8_Text_RutuliDoubleLost2::
# 1207 "data/maps/MareS8/scripts.pory"
	.string "Wabeat!$"

MareS8_Text_RutuliDoublePost::
# 1211 "data/maps/MareS8/scripts.pory"
	.string "Waneed more Rutuli here fastya!$"

MareS8_Text_RutuliBlock::
# 1215 "data/maps/MareS8/scripts.pory"
	.string "Isla holy Hesperia beya.\p"
	.string "Taoutsider welcomena. Tago!$"

MareS8_Text_BeroeDuringSearch::
# 1219 "data/maps/MareS8/scripts.pory"
	.string "The boys, Romulus and Remus, are gone! I\n"
	.string "hope they turn up soon...It's terrible!$"
