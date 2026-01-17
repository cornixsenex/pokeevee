MareS8_MapScripts::
# 19 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 45 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 22 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 3
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 26 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 33 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 38 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_SetupKecleonChase
# 40 "data/maps/MareS8/scripts.pory"
	compare VAR_ULYSSES_STATE, 3
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutuliBlock
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 27 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 26 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 30 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 29 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 34 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 35 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 41 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_SetupUlysses
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 40 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_ULYSSES_POST_POLYPHEMUS, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME:
# 46 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 48 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON1, MAP_MARE_S8
# 49 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON2, MAP_MARE_S8
# 50 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON3, MAP_MARE_S8
# 51 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON4, MAP_MARE_S8
# 52 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 53 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 54 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON7, MAP_MARE_S8
	return


MareS8_Script_ShowRutulianWar::
# 61 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 62 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 63 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 67 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 71 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 64 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 65 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 68 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 69 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 72 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 73 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 80 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 81 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 82 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 83 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 84 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 85 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 86 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 87 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 88 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 89 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 90 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 91 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 97 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 98 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 99 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 103 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 104 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 105 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 109 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 110 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 111 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaElenna::
# 115 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 6
# 116 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 117 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 121 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 122 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 123 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 127 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 128 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 129 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 135 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 136 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 137 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 138 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 139 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 142 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 143 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 144 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 145 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 146 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 147 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 149 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 150 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 151 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 153 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 154 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 155 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 156 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 157 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 158 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 159 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 160 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 161 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 162 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 163 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 164 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 165 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 166 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 167 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 168 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 169 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 170 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 171 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 172 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 173 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 174 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 175 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 176 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 177 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 178 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 179 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 180 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 181 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 182 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 183 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 184 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 185 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 186 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 187 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 188 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 189 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 190 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 191 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 192 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 193 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 194 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 195 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 196 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 197 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 198 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 200 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 201 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 203 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 204 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 205 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 207 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 208 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 209 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 210 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 211 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 212 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 213 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 214 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 216 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 217 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 218 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 219 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 220 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 221 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 222 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 223 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 225 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 226 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 227 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 228 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 229 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 230 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 231 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 232 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 234 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 236 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 237 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 238 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 239 "data/maps/MareS8/scripts.pory"
	delay 60
# 240 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 241 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 242 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 243 "data/maps/MareS8/scripts.pory"
	delay 60
# 244 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 245 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 246 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 247 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 249 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 250 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 251 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 253 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 255 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 256 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 257 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 259 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 260 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 261 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 262 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 264 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 265 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 266 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 268 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 269 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 270 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 271 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 272 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 273 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 274 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 275 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 277 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 278 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 279 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 280 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 281 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 282 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 283 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 284 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 285 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 286 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 287 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 288 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 290 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 291 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 292 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 293 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 294 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 295 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 296 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 297 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 298 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 299 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 301 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 302 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 303 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 304 "data/maps/MareS8/scripts.pory"
	closemessage
# 305 "data/maps/MareS8/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 307 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 309 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 310 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 311 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 312 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 313 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 314 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 315 "data/maps/MareS8/scripts.pory"
	closemessage
# 317 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 318 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 319 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 321 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 322 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 323 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 325 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 326 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 327 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 329 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 330 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 332 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 333 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 334 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 336 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 337 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 338 "data/maps/MareS8/scripts.pory"
	closemessage
# 339 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 340 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 342 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 344 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 345 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 346 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 347 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 348 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 349 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 350 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 351 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 352 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 354 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 356 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 362 "data/maps/MareS8/scripts.pory"
	faceplayer
# 363 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 364 "data/maps/MareS8/scripts.pory"
	closemessage
# 365 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 370 "data/maps/MareS8/scripts.pory"
	faceplayer
# 371 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 372 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_Script_Beroe_2
# 375 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringSearch
MareS8_Script_Beroe_1:
# 377 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 378 "data/maps/MareS8/scripts.pory"
	closemessage
# 379 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 380 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end

MareS8_Script_Beroe_2:
# 373 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
	goto MareS8_Script_Beroe_1


MareS8_Script_Aeneas::
# 385 "data/maps/MareS8/scripts.pory"
	faceplayer
# 386 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 387 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 388 "data/maps/MareS8/scripts.pory"
	closemessage
# 389 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 390 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 395 "data/maps/MareS8/scripts.pory"
	faceplayer
# 396 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 397 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 398 "data/maps/MareS8/scripts.pory"
	closemessage
# 399 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 400 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 405 "data/maps/MareS8/scripts.pory"
	faceplayer
# 406 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 407 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 408 "data/maps/MareS8/scripts.pory"
	closemessage
# 409 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 410 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 415 "data/maps/MareS8/scripts.pory"
	faceplayer
# 416 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 417 "data/maps/MareS8/scripts.pory"
	closemessage
# 418 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 423 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 424 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 425 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 426 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 427 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 428 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 429 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 430 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 434 "data/maps/MareS8/scripts.pory"
	lockall
# 435 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 437 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 439 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 440 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 442 "data/maps/MareS8/scripts.pory"
	delay 30
# 443 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 444 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 446 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 447 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 449 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 451 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 452 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 453 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 454 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 455 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 456 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 458 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 462 "data/maps/MareS8/scripts.pory"
	lockall
# 463 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 465 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 467 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 468 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 470 "data/maps/MareS8/scripts.pory"
	delay 30
# 471 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 472 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 474 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 475 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 477 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 479 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 480 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 481 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 482 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 484 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 488 "data/maps/MareS8/scripts.pory"
	lockall
# 489 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 491 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 493 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 494 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 496 "data/maps/MareS8/scripts.pory"
	delay 30
# 497 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 498 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 501 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 503 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 504 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 505 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 506 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 508 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 512 "data/maps/MareS8/scripts.pory"
	lockall
# 513 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 515 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 517 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 518 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 520 "data/maps/MareS8/scripts.pory"
	delay 30
# 521 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 522 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 524 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 525 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 527 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 529 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 530 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 531 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 532 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 534 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 538 "data/maps/MareS8/scripts.pory"
	lockall
# 539 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 541 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 543 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 544 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 546 "data/maps/MareS8/scripts.pory"
	delay 30
# 547 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 548 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 550 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 551 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 553 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 555 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 556 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 557 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 558 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 560 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
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
# 576 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 577 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 579 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 581 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 582 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 583 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 584 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 586 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 590 "data/maps/MareS8/scripts.pory"
	lockall
# 591 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 593 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 595 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 596 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 598 "data/maps/MareS8/scripts.pory"
	delay 30
# 599 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 600 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 602 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 603 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 605 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 607 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 608 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 610 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 614 "data/maps/MareS8/scripts.pory"
	lockall
# 615 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 617 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 619 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 620 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 622 "data/maps/MareS8/scripts.pory"
	delay 30
# 623 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 624 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 627 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 629 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 630 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 632 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 636 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 638 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 639 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 640 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 641 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 643 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 644 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 646 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 647 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 649 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 650 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 652 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 653 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 656 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 657 "data/maps/MareS8/scripts.pory"
	closemessage
# 658 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 661 "data/maps/MareS8/scripts.pory"
	closemessage
# 663 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 664 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 665 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 666 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 668 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 669 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 671 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 672 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 674 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 675 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 677 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 678 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 681 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 682 "data/maps/MareS8/scripts.pory"
	closemessage
# 683 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 642 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 645 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 648 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 651 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 654 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 687 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 688 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 689 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 690 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 692 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 693 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 695 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 696 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 698 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 699 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 701 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 702 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 705 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 706 "data/maps/MareS8/scripts.pory"
	closemessage
# 707 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 667 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 670 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 673 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 676 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 679 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 710 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 691 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 694 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 697 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 700 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 703 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 716 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 718 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 724 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 730 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 736 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 742 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 743 "data/maps/MareS8/scripts.pory"
	closemessage
# 744 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 748 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 750 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 719 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 720 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 721 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 722 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 725 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 726 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 727 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 728 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 731 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 732 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 733 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 734 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 737 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 738 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 739 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 740 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 755 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 756 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 757 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 758 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 763 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliBlock
# 764 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 769 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 770 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 771 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 772 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 773 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 774 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 776 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 777 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 779 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 784 "data/maps/MareS8/scripts.pory"
	lockall
# 785 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 787 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 789 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 790 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 791 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 792 "data/maps/MareS8/scripts.pory"
	delay 30
# 794 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 795 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 796 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 798 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 800 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 801 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 803 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 804 "data/maps/MareS8/scripts.pory"
	closemessage
# 806 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 808 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 809 "data/maps/MareS8/scripts.pory"
	closemessage
# 811 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 812 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 813 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 814 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 815 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 816 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 817 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 818 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 820 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 821 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 822 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 823 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 824 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 825 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 826 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 827 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 829 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 831 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutuli34B::
# 837 "data/maps/MareS8/scripts.pory"
	lockall
# 838 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 840 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 842 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 843 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 844 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 845 "data/maps/MareS8/scripts.pory"
	delay 30
# 847 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 848 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 849 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 851 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 853 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 854 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 856 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 857 "data/maps/MareS8/scripts.pory"
	closemessage
# 859 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 861 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 862 "data/maps/MareS8/scripts.pory"
	closemessage
# 864 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 865 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 866 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 867 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 868 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 869 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 870 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 871 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 873 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 874 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 875 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 876 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 877 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 878 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 879 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 880 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 882 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 884 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutulian3A::
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
# 902 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 904 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 905 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 906 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 907 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 908 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 909 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 910 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 911 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 912 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 913 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 915 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
# 919 "data/maps/MareS8/scripts.pory"
	lockall
# 920 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 922 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 924 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 925 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 927 "data/maps/MareS8/scripts.pory"
	delay 30
# 928 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 929 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 931 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 932 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 934 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 936 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 937 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 938 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 939 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 940 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 941 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 943 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 947 "data/maps/MareS8/scripts.pory"
	lockall
# 948 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 950 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 952 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 953 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 955 "data/maps/MareS8/scripts.pory"
	delay 30
# 956 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 957 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 959 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 960 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 962 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 964 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 965 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 966 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 967 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 968 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 969 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 971 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_SetupKecleonChase::
# 978 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_A, 1
# 979 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_B, 1
# 980 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_C, 1
# 981 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_D, 1
# 983 "data/maps/MareS8/scripts.pory"
	goto_if_unset FLAG_MARES8_KECLEON5, MareS8_Script_SetupKecleonChase_2
MareS8_Script_SetupKecleonChase_1:
# 987 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

MareS8_Script_SetupKecleonChase_2:
# 984 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto MareS8_Script_SetupKecleonChase_1


MareS8_Script_SetupUlysses::
# 992 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ULYSSES, 33, 76
# 993 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ULYSSES, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP
# 995 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 996 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 998 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 0
# 1000 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_7, 1
	return


MareS8_Script_UlyssesSceneA::
# 1005 "data/maps/MareS8/scripts.pory"
	setflag FLAG_TEMP_A
# 1006 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_UlyssesScene
	return


MareS8_Script_UlyssesSceneB::
# 1010 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_UlyssesScene
	return


MareS8_Script_UlyssesScene::
# 1014 "data/maps/MareS8/scripts.pory"
	lockall
# 1015 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1016 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_ExclamationMark
# 1017 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1018 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_FaceRight
# 1019 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1020 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 1021 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Ulysses1
# 1022 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 1023 "data/maps/MareS8/scripts.pory"
	closemessage
# 1025 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1026 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 34, 77
# 1027 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1029 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON7
# 1030 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON7, 34, 78
# 1031 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON7
# 1033 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_KECLEON6, Common_Movement_WalkRight
# 1034 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_KECLEON7, Common_Movement_WalkRight
# 1035 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1037 "data/maps/MareS8/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 1038 "data/maps/MareS8/scripts.pory"
	waitmoncry
# 1040 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 1041 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON7, MAP_MARE_S8
# 1043 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1044 "data/maps/MareS8/scripts.pory"
	setwildbattle SPECIES_KECLEON, 13, SPECIES_KECLEON, 13
# 1045 "data/maps/MareS8/scripts.pory"
	dowildbattle
# 1046 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1048 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1049 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 1050 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 1051 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1053 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON7
# 1054 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON7, 0, 0
# 1055 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON7, MOVEMENT_TYPE_INVISIBLE
# 1056 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON7
	end


MareS8_Script_KecleonChase1::
# 1065 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON1, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase2::
# 1070 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON2, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase3::
# 1075 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON3, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase4::
# 1080 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON4, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase5::
# 1085 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON5, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase6::
# 1090 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonSetup::
# 1095 "data/maps/MareS8/scripts.pory"
	lockall
# 1096 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1097 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1098 "data/maps/MareS8/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 1099 "data/maps/MareS8/scripts.pory"
	waitmoncry
	return


MareS8_Script_KecleonBattle::
# 1104 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1105 "data/maps/MareS8/scripts.pory"
	setwildbattle SPECIES_KECLEON, 13
# 1106 "data/maps/MareS8/scripts.pory"
	dowildbattle
# 1107 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MareS8_Script_Kecleon1::
# 1112 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1114 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON1, MAP_MARE_S8
# 1116 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1118 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON1
# 1119 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON1, 0, 0
# 1120 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON1, MOVEMENT_TYPE_INVISIBLE
# 1121 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON1
# 1123 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1124 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon2::
# 1129 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1131 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON2, MAP_MARE_S8
# 1133 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1135 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON2
# 1136 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON2, 0, 0
# 1137 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON2, MOVEMENT_TYPE_INVISIBLE
# 1138 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON2
# 1140 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1141 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon3::
# 1146 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1148 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON3, MAP_MARE_S8
# 1150 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1152 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON3
# 1153 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON3, 0, 0
# 1154 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON3, MOVEMENT_TYPE_INVISIBLE
# 1155 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON3
# 1157 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_C, 0
# 1158 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon4::
# 1163 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1165 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON4, MAP_MARE_S8
# 1167 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1169 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON4
# 1170 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON4, 0, 0
# 1171 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON4, MOVEMENT_TYPE_INVISIBLE
# 1172 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON4
# 1174 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_D, 0
# 1175 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon5::
# 1181 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1183 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 1185 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1187 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON5
# 1188 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON5, 0, 0
# 1189 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON5, MOVEMENT_TYPE_INVISIBLE
# 1190 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON5
# 1192 "data/maps/MareS8/scripts.pory"
	setflag FLAG_MARES8_KECLEON5
# 1193 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1194 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon6::
# 1199 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1201 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 1203 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1205 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1206 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 1207 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 1208 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1210 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 0
# 1211 "data/maps/MareS8/scripts.pory"
	releaseall
	end


Hesperia_Script_RutulianBattle_Text_0:
# 656 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 742 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Text_Beroe1::
# 1215 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 1224 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 1228 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 1232 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 1239 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 1244 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 1249 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 1254 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 1259 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 1265 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached its\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of its heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 1276 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 1285 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 1290 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 1295 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 1299 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 1304 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1308 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1313 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1318 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1323 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1328 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1333 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1338 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1343 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1348 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1353 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1358 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1363 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1368 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1373 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1378 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1383 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1388 "data/maps/MareS8/scripts.pory"
	.string "Ta-attack waisland stopya.$"

MareS8_Text_RutuliDoublePre2::
# 1393 "data/maps/MareS8/scripts.pory"
	.string "Watwo Rutuli tadefeatna.$"

MareS8_Text_RutuliDoubleLost1::
# 1397 "data/maps/MareS8/scripts.pory"
	.string "Wafall backya!$"

MareS8_Text_RutuliDoubleLost2::
# 1401 "data/maps/MareS8/scripts.pory"
	.string "Wabeat!$"

MareS8_Text_RutuliDoublePost::
# 1405 "data/maps/MareS8/scripts.pory"
	.string "Waneed more Rutuli here fastya!$"

MareS8_Text_RutuliBlock::
# 1409 "data/maps/MareS8/scripts.pory"
	.string "Isla holy Hesperia beya.\p"
	.string "Taoutsider welcomena. Tago!$"

MareS8_Text_BeroeDuringSearch::
# 1413 "data/maps/MareS8/scripts.pory"
	.string "The boys, Romulus and Remus, are gone! I\n"
	.string "hope they turn up soon...It's terrible!$"

MareS8_Text_Ulysses1::
# 1418 "data/maps/MareS8/scripts.pory"
	.string "$"
