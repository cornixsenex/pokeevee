MareS8_MapScripts::
# 20 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 46 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
# 23 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 3
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 30 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 7
	goto_if_lt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 34 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 10
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 39 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_SetupKecleonChase
# 41 "data/maps/MareS8/scripts.pory"
	compare VAR_ULYSSES_STATE, 3
	goto_if_eq MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 24 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutuliBlock
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 28 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 27 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 31 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 30 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 2
	goto_if_gt MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 35 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 36 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
	goto MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 42 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_SetupUlysses
	return

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 41 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_ULYSSES_POST_POLYPHEMUS, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME:
# 47 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_2
MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 59 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_TEMP_B, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 49 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON1, MAP_MARE_S8
# 50 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON2, MAP_MARE_S8
# 51 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON3, MAP_MARE_S8
# 52 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON4, MAP_MARE_S8
# 53 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 54 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 55 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES8_KECLEON7, MAP_MARE_S8
	goto MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_1

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 60 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ULYSSES
# 61 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_TEMP_A, MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_7
# 64 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ULYSSES, 34, 78
MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 66 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 67 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ULYSSES
	return

MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 62 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ULYSSES, 34, 77
	goto MareS8_MapScripts_MAP_SCRIPT_ON_RESUME_6


MareS8_Script_ShowRutulianWar::
# 74 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 45, 4
# 75 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_FACE_RIGHT
# 76 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 6
	goto_if_lt MareS8_Script_ShowRutulianWar_2
MareS8_Script_ShowRutulianWar_1:
# 80 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 5
	goto_if_lt MareS8_Script_ShowRutulianWar_5
MareS8_Script_ShowRutulianWar_4:
# 84 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 4
	goto_if_lt MareS8_Script_ShowRutulianWar_8
MareS8_Script_ShowRutulianWar_7:
	return

MareS8_Script_ShowRutulianWar_2:
# 77 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 48, 4
# 78 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_1

MareS8_Script_ShowRutulianWar_5:
# 81 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 35, 8
# 82 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_UP
	goto MareS8_Script_ShowRutulianWar_4

MareS8_Script_ShowRutulianWar_8:
# 85 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 30, 11
# 86 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
	goto MareS8_Script_ShowRutulianWar_7


MareS8_Script_ShowAeneidDuringWar::
# 93 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 20, 19
# 94 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 18, 19
# 95 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 19, 22
# 96 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 15, 24
# 97 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 16, 24
# 98 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 17, 24
# 99 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_DOWN
# 100 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_RIGHT
# 101 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_UP
# 102 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_UP
# 103 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_UP
# 104 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_UP
	return


MareS8_Script_Transition_MareTropicum::
# 110 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 111 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 112 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 116 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 117 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 118 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 122 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 123 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 124 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaElenna::
# 128 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 6
# 129 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 130 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 134 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 135 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 136 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 140 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 141 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 142 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 148 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 149 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 150 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 151 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 152 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 155 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 156 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 157 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 158 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 159 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 160 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 161 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 162 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 163 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 164 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 166 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 167 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 168 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 169 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 170 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 171 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 172 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 173 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 174 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 175 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 176 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 177 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 178 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 179 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 180 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 181 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 182 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 183 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 184 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 185 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 186 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 187 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 188 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 189 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 190 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 191 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 192 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 193 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 194 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 195 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 196 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 197 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 198 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 200 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 201 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 202 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 203 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 204 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 205 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 206 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 207 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 208 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 209 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 210 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 211 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 212 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 213 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 214 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 215 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 216 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 217 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 218 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 220 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 221 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 222 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 223 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 224 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 225 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 226 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 227 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 229 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 230 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 231 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 232 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 233 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 234 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 235 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 236 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 238 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 239 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 240 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 241 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 242 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 243 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 244 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 245 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 247 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 249 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 250 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 251 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 252 "data/maps/MareS8/scripts.pory"
	delay 60
# 253 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 254 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 255 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 256 "data/maps/MareS8/scripts.pory"
	delay 60
# 257 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 258 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 259 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 260 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 262 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 263 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 264 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 266 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 268 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 269 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 270 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 272 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 273 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 274 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 275 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 277 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 278 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 279 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 281 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 282 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 283 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 284 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 285 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 286 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 287 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 288 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 290 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 291 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 292 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 293 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 294 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 295 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 296 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 297 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 298 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 299 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceDown
# 300 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceDown
# 301 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 303 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 304 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 305 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 306 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 307 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 308 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 309 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 310 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 311 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkUp
# 312 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 314 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 315 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 316 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 317 "data/maps/MareS8/scripts.pory"
	closemessage
# 318 "data/maps/MareS8/scripts.pory"
	playbgm MUS_SOOTOPOLIS, TRUE
# 320 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 322 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_FaceRight
# 323 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_FaceLeft
# 324 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 325 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 326 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPost
# 327 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 328 "data/maps/MareS8/scripts.pory"
	closemessage
# 330 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp6
# 331 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp6
# 332 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 334 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 335 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe2
# 336 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 338 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkDown
# 339 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 340 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 342 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 343 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasHesperia
# 345 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 346 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 347 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 349 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasGoToWar
# 350 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 351 "data/maps/MareS8/scripts.pory"
	closemessage
# 352 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 353 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 355 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 3
# 357 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 358 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 359 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 360 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 361 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowRutulianWar
# 362 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 363 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 364 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 365 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 367 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_ShowAeneidDuringWar
# 369 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Remus::
# 375 "data/maps/MareS8/scripts.pory"
	faceplayer
# 376 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RemusDuringWar
# 377 "data/maps/MareS8/scripts.pory"
	closemessage
# 378 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Beroe::
# 383 "data/maps/MareS8/scripts.pory"
	faceplayer
# 384 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 385 "data/maps/MareS8/scripts.pory"
	compare VAR_AENEID_STATE, 9
	goto_if_lt MareS8_Script_Beroe_2
# 388 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringSearch
MareS8_Script_Beroe_1:
# 390 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 391 "data/maps/MareS8/scripts.pory"
	closemessage
# 392 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 393 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	end

MareS8_Script_Beroe_2:
# 386 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_BeroeDuringWar
	goto MareS8_Script_Beroe_1


MareS8_Script_Aeneas::
# 398 "data/maps/MareS8/scripts.pory"
	faceplayer
# 399 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 400 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasDuringWar
# 401 "data/maps/MareS8/scripts.pory"
	closemessage
# 402 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 403 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Faustulus::
# 408 "data/maps/MareS8/scripts.pory"
	faceplayer
# 409 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_FAUSTULUS, 190, 98
# 410 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_FaustulusDuringWar
# 411 "data/maps/MareS8/scripts.pory"
	closemessage
# 412 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_FAUSTULUS
# 413 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Ascanius::
# 418 "data/maps/MareS8/scripts.pory"
	faceplayer
# 419 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ASCANIUS, 190, 98
# 420 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AscaniusDuringWar
# 421 "data/maps/MareS8/scripts.pory"
	closemessage
# 422 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ASCANIUS
# 423 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_Romulus::
# 428 "data/maps/MareS8/scripts.pory"
	faceplayer
# 429 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RomulusDuringWar
# 430 "data/maps/MareS8/scripts.pory"
	closemessage
# 431 "data/maps/MareS8/scripts.pory"
	call Common_Script_Unfaceplayer
	end


MareS8_Script_AlertParty::
# 436 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 437 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 438 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 439 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 440 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 441 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 442 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 443 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Script_Trigger_Rutulian1A::
# 447 "data/maps/MareS8/scripts.pory"
	lockall
# 448 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 450 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 452 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 453 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 455 "data/maps/MareS8/scripts.pory"
	delay 30
# 456 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 457 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 459 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft2
# 460 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 462 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 464 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight
# 465 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 466 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 467 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 468 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight6
# 469 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 471 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1B::
# 475 "data/maps/MareS8/scripts.pory"
	lockall
# 476 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 478 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 480 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 481 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 483 "data/maps/MareS8/scripts.pory"
	delay 30
# 484 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 485 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 487 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 488 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 490 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 492 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 493 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 494 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 495 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 497 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian1C::
# 501 "data/maps/MareS8/scripts.pory"
	lockall
# 502 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 504 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 506 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_ExclamationMark
# 507 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 509 "data/maps/MareS8/scripts.pory"
	delay 30
# 510 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 511 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 514 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 516 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkUp4
# 517 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 518 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkRight7
# 519 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 521 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2A::
# 525 "data/maps/MareS8/scripts.pory"
	lockall
# 526 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 528 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 530 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 531 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 533 "data/maps/MareS8/scripts.pory"
	delay 30
# 534 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 535 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 537 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp4
# 538 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 540 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 542 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown3
# 543 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 544 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 545 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 547 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2B::
# 551 "data/maps/MareS8/scripts.pory"
	lockall
# 552 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 554 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 556 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 557 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 559 "data/maps/MareS8/scripts.pory"
	delay 30
# 560 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 561 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 563 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp3
# 564 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 566 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 568 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown2
# 569 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 570 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 571 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 573 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2C::
# 577 "data/maps/MareS8/scripts.pory"
	lockall
# 578 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 580 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 582 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 583 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 585 "data/maps/MareS8/scripts.pory"
	delay 30
# 586 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 587 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 589 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp2
# 590 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 592 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 594 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 595 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 596 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 597 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 599 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2D::
# 603 "data/maps/MareS8/scripts.pory"
	lockall
# 604 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 606 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 608 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 609 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 611 "data/maps/MareS8/scripts.pory"
	delay 30
# 612 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 613 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 615 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkUp
# 616 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 618 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 620 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 621 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 623 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian2E::
# 627 "data/maps/MareS8/scripts.pory"
	lockall
# 628 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 630 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 632 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_ExclamationMark
# 633 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 635 "data/maps/MareS8/scripts.pory"
	delay 30
# 636 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 637 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 640 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 642 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkRight8
# 643 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 645 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


Hesperia_Script_RutulianBattle::
# 649 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 651 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 652 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 653 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_3
# 654 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_3
# 656 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_4
# 657 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_4
# 659 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_5
# 660 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_5
# 662 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_6
# 663 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_6
# 665 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_7
# 666 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_7
# 669 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 670 "data/maps/MareS8/scripts.pory"
	closemessage
# 671 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_1:
# 674 "data/maps/MareS8/scripts.pory"
	closemessage
# 676 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 677 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 678 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_11
# 679 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_11
# 681 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_12
# 682 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_12
# 684 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_13
# 685 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_13
# 687 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_14
# 688 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_14
# 690 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_15
# 691 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_15
# 694 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 695 "data/maps/MareS8/scripts.pory"
	closemessage
# 696 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_3:
# 655 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre1
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_4:
# 658 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre2
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_5:
# 661 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre3
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_6:
# 664 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre4
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_7:
# 667 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPre5
	goto Hesperia_Script_RutulianBattle_1

Hesperia_Script_RutulianBattle_9:
# 700 "data/maps/MareS8/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 701 "data/maps/MareS8/scripts.pory"
	switch VAR_RESULT
# 702 "data/maps/MareS8/scripts.pory"
	case 0, Hesperia_Script_RutulianBattle_19
# 703 "data/maps/MareS8/scripts.pory"
	case 1, Hesperia_Script_RutulianBattle_19
# 705 "data/maps/MareS8/scripts.pory"
	case 2, Hesperia_Script_RutulianBattle_20
# 706 "data/maps/MareS8/scripts.pory"
	case 3, Hesperia_Script_RutulianBattle_20
# 708 "data/maps/MareS8/scripts.pory"
	case 4, Hesperia_Script_RutulianBattle_21
# 709 "data/maps/MareS8/scripts.pory"
	case 5, Hesperia_Script_RutulianBattle_21
# 711 "data/maps/MareS8/scripts.pory"
	case 6, Hesperia_Script_RutulianBattle_22
# 712 "data/maps/MareS8/scripts.pory"
	case 7, Hesperia_Script_RutulianBattle_22
# 714 "data/maps/MareS8/scripts.pory"
	case 8, Hesperia_Script_RutulianBattle_23
# 715 "data/maps/MareS8/scripts.pory"
	case 9, Hesperia_Script_RutulianBattle_23
# 718 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Script_RutulianBattle_Text_0
# 719 "data/maps/MareS8/scripts.pory"
	closemessage
# 720 "data/maps/MareS8/scripts.pory"
	releaseall
	end

Hesperia_Script_RutulianBattle_11:
# 680 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost1
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_12:
# 683 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost2
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_13:
# 686 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost3
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_14:
# 689 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost4
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_15:
# 692 "data/maps/MareS8/scripts.pory"
	trainerbattle_no_intro TRAINER_RUTULIAN, Hesperia_Text_RutulianLost5
	goto Hesperia_Script_RutulianBattle_9

Hesperia_Script_RutulianBattle_17:
# 723 "data/maps/MareS8/scripts.pory"
	closemessage
	return

Hesperia_Script_RutulianBattle_19:
# 704 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost1
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_20:
# 707 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost2
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_21:
# 710 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost3
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_22:
# 713 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost4
	goto Hesperia_Script_RutulianBattle_17

Hesperia_Script_RutulianBattle_23:
# 716 "data/maps/MareS8/scripts.pory"
	msgbox Hesperia_Text_RutulianPost5
	goto Hesperia_Script_RutulianBattle_17


MareS8_Script_RemoveRutulian::
# 729 "data/maps/MareS8/scripts.pory"
	switch VAR_AENEID_STATE
# 731 "data/maps/MareS8/scripts.pory"
	case 3, MareS8_Script_RemoveRutulian_3
# 737 "data/maps/MareS8/scripts.pory"
	case 4, MareS8_Script_RemoveRutulian_4
# 743 "data/maps/MareS8/scripts.pory"
	case 5, MareS8_Script_RemoveRutulian_5
# 749 "data/maps/MareS8/scripts.pory"
	case 6, MareS8_Script_RemoveRutulian_6
# 755 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_RemoveRutulian_Text_0
# 756 "data/maps/MareS8/scripts.pory"
	closemessage
# 757 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_1:
# 761 "data/maps/MareS8/scripts.pory"
	addvar VAR_AENEID_STATE, 1
# 763 "data/maps/MareS8/scripts.pory"
	releaseall
	end

MareS8_Script_RemoveRutulian_3:
# 732 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 733 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 0, 0
# 734 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_INVISIBLE
# 735 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_4:
# 738 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 739 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 0, 0
# 740 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_INVISIBLE
# 741 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_5:
# 744 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 745 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 746 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 747 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
	goto MareS8_Script_RemoveRutulian_1

MareS8_Script_RemoveRutulian_6:
# 750 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 751 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 752 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 753 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
	goto MareS8_Script_RemoveRutulian_1


MareS8_Script_ShowRutuliBlock::
# 768 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 29, 9
# 769 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 30, 9
# 770 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_DOWN
# 771 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_DOWN
	return


MareS8_Script_RutuliBlock::
# 776 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliBlock
# 777 "data/maps/MareS8/scripts.pory"
	closemessage
	return


MareS8_Script_Rutulian4::
# 782 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_FaceDown
# 783 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 784 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 785 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 786 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 787 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 789 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp4
# 790 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 792 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutuli34A::
# 797 "data/maps/MareS8/scripts.pory"
	lockall
# 798 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 800 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 802 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 803 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 804 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 805 "data/maps/MareS8/scripts.pory"
	delay 30
# 807 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 808 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkLeft
# 809 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 811 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 813 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 814 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 816 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 817 "data/maps/MareS8/scripts.pory"
	closemessage
# 819 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 821 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 822 "data/maps/MareS8/scripts.pory"
	closemessage
# 824 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 825 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 826 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 827 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 828 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 829 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 830 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 831 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 833 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 834 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 835 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 836 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 837 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 838 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 839 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 840 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 842 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 844 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutuli34B::
# 850 "data/maps/MareS8/scripts.pory"
	lockall
# 851 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 853 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 855 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 856 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_ExclamationMark
# 857 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 858 "data/maps/MareS8/scripts.pory"
	delay 30
# 860 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 861 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 862 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 864 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre1
# 866 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 867 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 869 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePre2
# 870 "data/maps/MareS8/scripts.pory"
	closemessage
# 872 "data/maps/MareS8/scripts.pory"
	trainerbattle_two_trainers TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost1, TRAINER_RUTULIAN, MareS8_Text_RutuliDoubleLost2
# 874 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutuliDoublePost
# 875 "data/maps/MareS8/scripts.pory"
	closemessage
# 877 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 878 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp
# 879 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 880 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 881 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 882 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 883 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN4, Common_Movement_WalkUp5
# 884 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 886 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 887 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN4
# 888 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 889 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN4, 0, 0
# 890 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 891 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN4, MOVEMENT_TYPE_INVISIBLE
# 892 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 893 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN4
# 895 "data/maps/MareS8/scripts.pory"
	setvar VAR_AENEID_STATE, 7
# 897 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Trigger_Rutulian3A::
# 902 "data/maps/MareS8/scripts.pory"
	lockall
# 903 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 905 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 907 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 908 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 910 "data/maps/MareS8/scripts.pory"
	delay 30
# 911 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 912 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 915 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 917 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp
# 918 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 919 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 920 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 921 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp5
# 922 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 923 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 924 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 925 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 926 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 928 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3B::
# 932 "data/maps/MareS8/scripts.pory"
	lockall
# 933 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 935 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 937 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 938 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 940 "data/maps/MareS8/scripts.pory"
	delay 30
# 941 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 942 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 944 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight
# 945 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 947 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 949 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 950 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 951 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 952 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 953 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 954 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 956 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_Trigger_Rutulian3C::
# 960 "data/maps/MareS8/scripts.pory"
	lockall
# 961 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 963 "data/maps/MareS8/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 965 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_ExclamationMark
# 966 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 968 "data/maps/MareS8/scripts.pory"
	delay 30
# 969 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 970 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 972 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkRight2
# 973 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 975 "data/maps/MareS8/scripts.pory"
	call Hesperia_Script_RutulianBattle
# 977 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN3, Common_Movement_WalkUp6
# 978 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 979 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN3
# 980 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN3, 0, 0
# 981 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN3, MOVEMENT_TYPE_INVISIBLE
# 982 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN3
# 984 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_RemoveRutulian
	return


MareS8_Script_SetupKecleonChase::
# 991 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_A, 1
# 992 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_B, 1
# 993 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_C, 1
# 994 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_D, 1
# 996 "data/maps/MareS8/scripts.pory"
	goto_if_unset FLAG_MARES8_KECLEON5, MareS8_Script_SetupKecleonChase_2
MareS8_Script_SetupKecleonChase_1:
# 1000 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

MareS8_Script_SetupKecleonChase_2:
# 997 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto MareS8_Script_SetupKecleonChase_1


MareS8_Script_SetupUlysses::
# 1005 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ULYSSES, 32, 76
# 1006 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ULYSSES, MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP
# 1008 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 1009 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 1011 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 0
# 1013 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_7, 1
	return


MareS8_Script_UlyssesSceneA::
# 1018 "data/maps/MareS8/scripts.pory"
	setflag FLAG_TEMP_A
# 1019 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_UlyssesScene
	return


MareS8_Script_UlyssesSceneB::
# 1023 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_UlyssesScene
	return


MareS8_Script_UlyssesScene::
# 1027 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1028 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_ExclamationMark
# 1029 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1030 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_FaceRight
# 1031 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 1032 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1033 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 1034 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Ulysses1
# 1035 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 1036 "data/maps/MareS8/scripts.pory"
	closemessage
# 1037 "data/maps/MareS8/scripts.pory"
	lock
# 1039 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1040 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 34, 77
# 1041 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1043 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON7
# 1044 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON7, 34, 78
# 1045 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON7
# 1047 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_KECLEON6, Common_Movement_WalkRight
# 1048 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_KECLEON7, Common_Movement_WalkRight
# 1049 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1051 "data/maps/MareS8/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 1052 "data/maps/MareS8/scripts.pory"
	waitmoncry
# 1054 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 1055 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON7, MAP_MARE_S8
# 1057 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1058 "data/maps/MareS8/scripts.pory"
	setflag FLAG_TEMP_B
# 1059 "data/maps/MareS8/scripts.pory"
	setwildbattle SPECIES_KECLEON, 13, SPECIES_KECLEON, 13
# 1060 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 1061 "data/maps/MareS8/scripts.pory"
	dowildbattle
# 1062 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 1063 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_TEMP_B
# 1065 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1066 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 1067 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 1068 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1070 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON7
# 1071 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON7, 0, 0
# 1072 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON7, MOVEMENT_TYPE_INVISIBLE
# 1073 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON7
# 1075 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkRight
# 1076 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1078 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 1079 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Ulysses2
# 1080 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 1081 "data/maps/MareS8/scripts.pory"
	closemessage
# 1083 "data/maps/MareS8/scripts.pory"
	goto_if_set FLAG_TEMP_A, MareS8_Script_UlyssesScene_2
# 1086 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkUp
MareS8_Script_UlyssesScene_1:
# 1088 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1089 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkRight3
# 1090 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1091 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkUp2
# 1092 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1093 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkRight2
# 1094 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1095 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkUp5
# 1096 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1098 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ULYSSES
# 1099 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ULYSSES, 0, 0
# 1100 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 1101 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ULYSSES
# 1103 "data/maps/MareS8/scripts.pory"
	setvar VAR_ULYSSES_STATE, 4
# 1104 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_7, 0
	end

MareS8_Script_UlyssesScene_2:
# 1084 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ULYSSES, Common_Movement_WalkDown
	goto MareS8_Script_UlyssesScene_1


MareS8_Script_KecleonChase1::
# 1109 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON1, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase2::
# 1114 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON2, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase3::
# 1119 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON3, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase4::
# 1124 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON4, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase5::
# 1129 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON5, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonChase6::
# 1134 "data/maps/MareS8/scripts.pory"
	setobjectmovementtypeghoul LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_CHASE_PLAYER
	return


MareS8_Script_KecleonSetup::
# 1139 "data/maps/MareS8/scripts.pory"
	lockall
# 1140 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Script_KecleonSetup_Text_0
# 1141 "data/maps/MareS8/scripts.pory"
	closemessage
# 1142 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 1143 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 1144 "data/maps/MareS8/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 1145 "data/maps/MareS8/scripts.pory"
	waitmoncry
	return


MareS8_Script_KecleonBattle::
# 1150 "data/maps/MareS8/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 1151 "data/maps/MareS8/scripts.pory"
	setwildbattle SPECIES_KECLEON, 13
# 1152 "data/maps/MareS8/scripts.pory"
	dowildbattle
# 1153 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	return


MareS8_Script_Kecleon1::
# 1158 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1160 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON1, MAP_MARE_S8
# 1162 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1164 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON1
# 1165 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON1, 0, 0
# 1166 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON1, MOVEMENT_TYPE_INVISIBLE
# 1167 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON1
# 1169 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_A, 0
# 1170 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon2::
# 1175 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1177 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON2, MAP_MARE_S8
# 1179 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1181 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON2
# 1182 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON2, 0, 0
# 1183 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON2, MOVEMENT_TYPE_INVISIBLE
# 1184 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON2
# 1186 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_B, 0
# 1187 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon3::
# 1192 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1194 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON3, MAP_MARE_S8
# 1196 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1198 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON3
# 1199 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON3, 0, 0
# 1200 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON3, MOVEMENT_TYPE_INVISIBLE
# 1201 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON3
# 1203 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_C, 0
# 1204 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon4::
# 1209 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1211 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON4, MAP_MARE_S8
# 1213 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1215 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON4
# 1216 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON4, 0, 0
# 1217 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON4, MOVEMENT_TYPE_INVISIBLE
# 1218 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON4
# 1220 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_D, 0
# 1221 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon5::
# 1227 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1229 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON5, MAP_MARE_S8
# 1231 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1233 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON5
# 1234 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON5, 0, 0
# 1235 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON5, MOVEMENT_TYPE_INVISIBLE
# 1236 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON5
# 1238 "data/maps/MareS8/scripts.pory"
	setflag FLAG_MARES8_KECLEON5
# 1239 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_E, 0
# 1240 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_Kecleon6::
# 1245 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonSetup
# 1247 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_MARES8_KECLEON6, MAP_MARE_S8
# 1249 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_KecleonBattle
# 1251 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_KECLEON6
# 1252 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_KECLEON6, 0, 0
# 1253 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_KECLEON6, MOVEMENT_TYPE_INVISIBLE
# 1254 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_KECLEON6
# 1256 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_F, 0
# 1257 "data/maps/MareS8/scripts.pory"
	releaseall
	end


Hesperia_Script_RutulianBattle_Text_0:
# 669 "data/maps/MareS8/scripts.pory"
	.string "ERROR RandDigit OOB$"

MareS8_Script_RemoveRutulian_Text_0:
# 755 "data/maps/MareS8/scripts.pory"
	.string "ERROR: AENEID_STATE OOB$"

MareS8_Script_KecleonSetup_Text_0:
# 1140 "data/maps/MareS8/scripts.pory"
	.string "Kecleon Setup$"

MareS8_Text_Beroe1::
# 1261 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 1270 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 1274 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"

MareS8_Text_AeneasSetup::
# 1278 "data/maps/MareS8/scripts.pory"
	.string "We're being attacked by two savages!\n"
	.string "Let's unite and defeat them as a team.\l"
	.string "Select three Pokemon you will fight\l"
	.string "with.$"

MareS8_Text_RutulianAmbushPre::
# 1285 "data/maps/MareS8/scripts.pory"
	.string "Into sea safoe wadrive.$"

MareS8_Text_RutulianAmbushLost1::
# 1290 "data/maps/MareS8/scripts.pory"
	.string "More Rutulians waneed.$"

MareS8_Text_RutulianAmbushLost2::
# 1295 "data/maps/MareS8/scripts.pory"
	.string "Nasty defeatya!$"

MareS8_Text_RutulianAmbushPost::
# 1300 "data/maps/MareS8/scripts.pory"
	.string "Hesperia to safoe fall waletna.\p"
	.string "Ka-Turnus wawarn and wa-army\n"
	.string "warouseya!$"

MareS8_Text_Beroe2::
# 1305 "data/maps/MareS8/scripts.pory"
	.string "Well, Aeneas, you're right. It's now much\n"
	.string "worse. We're lost without a ship and\l"
	.string "stranded on some hostile island.$"

MareS8_Text_AeneasHesperia::
# 1311 "data/maps/MareS8/scripts.pory"
	.string "Didn't you hear? That savage said this\n"
	.string "is Hesperia! At long last we have\l"
	.string "arrived in that land where I'm destined\l"
	.string "to found a great city! Rejoice, for our\l"
	.string "long voyage has at last reached its\l"
	.string "destination! All that remains for us to\l"
	.string "do is clear this island of its heathen\l"
	.string "natives and then start building.$"

MareS8_Text_AeneasGoToWar::
# 1322 "data/maps/MareS8/scripts.pory"
	.string "I will wait here, and guard the party\n"
	.string "from any ambush those primitives might\l"
	.string "launch. You go ahead, make war on the\l"
	.string "natives, bring down their chief, expel\l"
	.string "the savages, and make the island safe\l"
	.string "for construction. Go forth! Win glory\l"
	.string "for Aeneas' men!$"

MareS8_Text_AscaniusDuringWar::
# 1331 "data/maps/MareS8/scripts.pory"
	.string "While I'm nervous of a savage ambush I'm\n"
	.string "quite relieved my boys finally calmed\l"
	.string "down.$"

MareS8_Text_AeneasDuringWar::
# 1336 "data/maps/MareS8/scripts.pory"
	.string "What are you waiting for? Go win glory!$"

MareS8_Text_FaustulusDuringWar::
# 1341 "data/maps/MareS8/scripts.pory"
	.string "Mascarena! Kawin maknow. Alwaysya\n"
	.string "kawin.$"

MareS8_Text_RomulusDuringWar::
# 1345 "data/maps/MareS8/scripts.pory"
	.string "I think we would be safer if we built a\n"
	.string "mighty wall to keep out the natives.$"

MareS8_Text_RemusDuringWar::
# 1350 "data/maps/MareS8/scripts.pory"
	.string "If I were older, I'd be fighting too!$"

MareS8_Text_BeroeDuringWar::
# 1354 "data/maps/MareS8/scripts.pory"
	.string "I hope the natives don't attack again.$"

Hesperia_Text_RutulianPre1::
# 1359 "data/maps/MareS8/scripts.pory"
	.string "Death taheathen mado.$"

Hesperia_Text_RutulianPre2::
# 1364 "data/maps/MareS8/scripts.pory"
	.string "Isla Hesperia tacome tamistake last\n"
	.string "isya.$"

Hesperia_Text_RutulianPre3::
# 1369 "data/maps/MareS8/scripts.pory"
	.string "Outsiders Isla Hesperia on taallowna.$"

Hesperia_Text_RutulianPre4::
# 1374 "data/maps/MareS8/scripts.pory"
	.string "Takill Ka-Turnus mareward Kado.$"

Hesperia_Text_RutulianPre5::
# 1379 "data/maps/MareS8/scripts.pory"
	.string "Tacorpse Wa-Rutuli waeatya.$"

Hesperia_Text_RutulianLost1::
# 1384 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus!$"

Hesperia_Text_RutulianLost2::
# 1389 "data/maps/MareS8/scripts.pory"
	.string "Tablack tamagic howya?$"

Hesperia_Text_RutulianLost3::
# 1394 "data/maps/MareS8/scripts.pory"
	.string "Uhu!$"

Hesperia_Text_RutulianLost4::
# 1399 "data/maps/MareS8/scripts.pory"
	.string "Taforebearya!$"

Hesperia_Text_RutulianLost5::
# 1404 "data/maps/MareS8/scripts.pory"
	.string "Ka-Laran! Maforsake whyya?$"

Hesperia_Text_RutulianPost1::
# 1409 "data/maps/MareS8/scripts.pory"
	.string "Malose taoutsider worse dame malose\n"
	.string "beya.$"

Hesperia_Text_RutulianPost2::
# 1414 "data/maps/MareS8/scripts.pory"
	.string "Ka-Turnus ta kawarn maneed!$"

Hesperia_Text_RutulianPost3::
# 1419 "data/maps/MareS8/scripts.pory"
	.string "Wa-Rutuli tastopya.$"

Hesperia_Text_RutulianPost4::
# 1424 "data/maps/MareS8/scripts.pory"
	.string "Small blow onlyya be.$"

Hesperia_Text_RutulianPost5::
# 1429 "data/maps/MareS8/scripts.pory"
	.string "Overna! Wa-Rutuli yield waknowna.$"

MareS8_Text_RutuliDoublePre1::
# 1434 "data/maps/MareS8/scripts.pory"
	.string "Ta-attack waisland stopya.$"

MareS8_Text_RutuliDoublePre2::
# 1439 "data/maps/MareS8/scripts.pory"
	.string "Watwo Rutuli tadefeatna.$"

MareS8_Text_RutuliDoubleLost1::
# 1443 "data/maps/MareS8/scripts.pory"
	.string "Wafall backya!$"

MareS8_Text_RutuliDoubleLost2::
# 1447 "data/maps/MareS8/scripts.pory"
	.string "Wabeat!$"

MareS8_Text_RutuliDoublePost::
# 1451 "data/maps/MareS8/scripts.pory"
	.string "Waneed more Rutuli here fastya!$"

MareS8_Text_RutuliBlock::
# 1455 "data/maps/MareS8/scripts.pory"
	.string "Isla holy Hesperia beya.\p"
	.string "Taoutsider welcomena. Tago!$"

MareS8_Text_BeroeDuringSearch::
# 1459 "data/maps/MareS8/scripts.pory"
	.string "The boys, Romulus and Remus, are gone! I\n"
	.string "hope they turn up soon...It's terrible!$"

MareS8_Text_Ulysses1::
# 1464 "data/maps/MareS8/scripts.pory"
	.string "Please, help me {PLAYER}! Help me! I'm\n"
	.string "being chased by some kind of invisible\l"
	.string "monsters!$"

MareS8_Text_Ulysses2::
# 1469 "data/maps/MareS8/scripts.pory"
	.string "Thank you, {PLAYER}. Those monsters\n"
	.string "had me trapped on this island with no\l"
	.string "hope of escape. Now I must be gone. I\l"
	.string "cannot delay my journey to Nestor's\l"
	.string "house where my friend Menelaus will\l"
	.string "celebrate marriage.$"
