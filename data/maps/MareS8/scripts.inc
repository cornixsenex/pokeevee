MareS8_MapScripts::
# 13 "data/maps/MareS8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS8_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/MareS8/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS8_F
	return


MareS8_Script_Transition_MareTropicum::
# 20 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 3
# 21 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 22 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_MareSubtropicum::
# 26 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 28 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaIthaca::
# 32 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 1
# 33 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 34 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaHesperia::
# 38 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 4
# 39 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 40 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_Transition_IslaTropica::
# 44 "data/maps/MareS8/scripts.pory"
	setvar VAR_TEMP_5, 5
# 45 "data/maps/MareS8/scripts.pory"
	special TransitionMapMusic
# 46 "data/maps/MareS8/scripts.pory"
	special ShowMapNamePopup
	return


MareS8_Script_ArriveHesperia::
# 51 "data/maps/MareS8/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 52 "data/maps/MareS8/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 54 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 55 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 22, 19
# 56 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 58 "data/maps/MareS8/scripts.pory"
	hideobjectat LOCALID_MARES9_PRISTIS, MAP_MARE_S9
# 61 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_BEROE
# 62 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_BEROE, 22, 19
# 63 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_BEROE, MOVEMENT_TYPE_FACE_LEFT
# 64 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_BEROE
# 65 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkLeft3
# 66 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 67 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_WalkDown3
# 68 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 69 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_FaceUp
# 70 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 72 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ROMULUS
# 73 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ROMULUS, 22, 19
# 74 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ROMULUS, MOVEMENT_TYPE_FACE_LEFT
# 75 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ROMULUS
# 76 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 77 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 78 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_ASCANIUS
# 79 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_ASCANIUS, 22, 19
# 80 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_ASCANIUS, MOVEMENT_TYPE_FACE_LEFT
# 81 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_ASCANIUS
# 82 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 83 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 84 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 85 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_REMUS
# 86 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_REMUS, 22, 19
# 87 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_REMUS, MOVEMENT_TYPE_FACE_LEFT
# 88 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_REMUS
# 89 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft2
# 90 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft2
# 91 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft2
# 92 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 93 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 94 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 95 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 96 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 97 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 98 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 99 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 100 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 101 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown2
# 102 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown2
# 103 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown2
# 104 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 105 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 106 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 107 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 108 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 109 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 110 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 111 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 112 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 113 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkLeft
# 114 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkLeft
# 115 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkLeft
# 116 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 117 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_WalkDown
# 118 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_WalkDown
# 119 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_WalkDown
# 120 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 121 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_FaceUp
# 122 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_FaceUp
# 123 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_FaceUp
# 124 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 126 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_FAUSTULUS
# 127 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_FAUSTULUS, 22, 19
# 128 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_FAUSTULUS, MOVEMENT_TYPE_FACE_LEFT
# 129 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_FAUSTULUS
# 130 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_WalkLeft4
# 131 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 132 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_FaceDown
# 133 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 135 "data/maps/MareS8/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_MARE_S9
# 136 "data/maps/MareS8/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_MARE_S8
# 137 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft3
# 138 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 139 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 140 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 142 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_AENEAS
# 143 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_AENEAS, 22, 19
# 144 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_AENEAS, MOVEMENT_TYPE_FACE_LEFT
# 145 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_AENEAS
# 146 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_WalkLeft2
# 147 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 148 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceDown
# 149 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 151 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 153 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Common_Movement_ExclamationMark
# 154 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 155 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 156 "data/maps/MareS8/scripts.pory"
	delay 60
# 157 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_PRISTIS, Movement_SetInvisible
# 158 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 159 "data/maps/MareS8/scripts.pory"
	playse SE_M_DIVE
# 160 "data/maps/MareS8/scripts.pory"
	delay 60
# 161 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_PRISTIS
# 162 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_PRISTIS, 0, 0
# 163 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_PRISTIS, MOVEMENT_TYPE_INVISIBLE
# 164 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_PRISTIS
# 166 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_BEROE, 190, 98
# 167 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Beroe1
# 168 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_BEROE
# 170 "data/maps/MareS8/scripts.pory"
	call MareS8_Script_AlertParty
# 172 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 173 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbush1
# 174 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 176 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 177 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_Aeneas_GetWorse
# 178 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 180 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 181 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 182 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 184 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN1
# 185 "data/maps/MareS8/scripts.pory"
	removeobject LOCALID_MARES8_RUTULIAN2
# 186 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN1, 27, 16
# 187 "data/maps/MareS8/scripts.pory"
	setobjectxyperm LOCALID_MARES8_RUTULIAN2, 28, 16
# 188 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN1, MOVEMENT_TYPE_FACE_LEFT
# 189 "data/maps/MareS8/scripts.pory"
	setobjectmovementtype LOCALID_MARES8_RUTULIAN2, MOVEMENT_TYPE_FACE_LEFT
# 190 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN1
# 191 "data/maps/MareS8/scripts.pory"
	addobject LOCALID_MARES8_RUTULIAN2
# 193 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft6
# 194 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft6
# 195 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 196 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkSouthWest
# 197 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkLeft
# 198 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 199 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkLeft
# 200 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkSouthWest
# 201 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN1, Common_Movement_WalkDown
# 203 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_RUTULIAN2, Common_Movement_WalkDown
# 204 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 206 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 207 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceLeft
# 208 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 209 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_AENEAS, 190, 98
# 210 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_AeneasSetup
# 211 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_AENEAS
# 212 "data/maps/MareS8/scripts.pory"
	call Common_Script_SelectPartyForMultiBattle
# 213 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 214 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_FaceUp
# 215 "data/maps/MareS8/scripts.pory"
	waitmovement 0
# 217 "data/maps/MareS8/scripts.pory"
	load_field_pic FIELD_PIC_RUTULIAN, 190, 98
# 218 "data/maps/MareS8/scripts.pory"
	msgbox MareS8_Text_RutulianAmbushPre
# 219 "data/maps/MareS8/scripts.pory"
	destroy_field_pic FIELD_PIC_RUTULIAN
# 221 "data/maps/MareS8/scripts.pory"
	multi_2_vs_2 TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost1, TRAINER_RUTULIAN, MareS8_Text_RutulianAmbushLost2, PARTNER_AENEAS
# 229 "data/maps/MareS8/scripts.pory"
	releaseall
	end


MareS8_Script_AlertParty::
# 235 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 236 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_AENEAS, Common_Movement_ExclamationMark
# 237 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_BEROE, Common_Movement_ExclamationMark
# 238 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_FAUSTULUS, Common_Movement_ExclamationMark
# 239 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ASCANIUS, Common_Movement_ExclamationMark
# 240 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_ROMULUS, Common_Movement_ExclamationMark
# 241 "data/maps/MareS8/scripts.pory"
	applymovement LOCALID_MARES8_REMUS, Common_Movement_ExclamationMark
# 242 "data/maps/MareS8/scripts.pory"
	waitmovement 0
	return


MareS8_Text_Beroe1::
# 246 "data/maps/MareS8/scripts.pory"
	.string "Leave it to Aeneas to find a way to put\n"
	.string "us in a worse situation. We lost our ship\l"
	.string "and still have no idea where we are or\l"
	.string "where Heperia is. I can't see how this\l"
	.string "could get any worse!$"

MareS8_Text_RutulianAmbush1::
# 255 "data/maps/MareS8/scripts.pory"
	.string "Foemen sadeathya!$"

MareS8_Text_Aeneas_GetWorse::
# 259 "data/maps/MareS8/scripts.pory"
	.string "On guard! I think it's about to get\n"
	.string "worse.$"
