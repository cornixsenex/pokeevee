CasaCirces_MapScripts::
# 7 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CasaCirces_MapScripts_MAP_SCRIPT_ON_RESUME
# 37 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 9
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 21 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 10
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesWithCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 18 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowPlayerConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 22 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesAfterCirce
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_RESUME:
# 28 "data/maps/CasaCirces/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CasaCirces_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 29 "data/maps/CasaCirces/scripts.pory"
	hideobjectat LOCALID_CASACIRCES_CIRCE, MAP_CASA_CIRCES
# 30 "data/maps/CasaCirces/scripts.pory"
	removeobject LOCALID_CASACIRCES_CIRCE
# 31 "data/maps/CasaCirces/scripts.pory"
	hideobjectat LOCALID_CASACIRCES_MISMAGIUS, MAP_CASA_CIRCES
# 32 "data/maps/CasaCirces/scripts.pory"
	removeobject LOCALID_CASACIRCES_MISMAGIUS
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 39 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 7, CasaCirces_Script_UlyssesConfrontCirce
# 41 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 9, CasaCirces_Script_PlayerConfrontCirce
	.2byte 0


CasaCirces_Script_ShowUlyssesConfrontCirce::
# 48 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 49 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 52 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 54 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 4, 4
# 55 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_FACE_UP
	return


CasaCirces_Script_ShowUlyssesWithCirce::
# 61 "data/maps/CasaCirces/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 6, 3
# 64 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 7, 3
# 67 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 69 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 6, 3
# 70 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


CasaCirces_Script_ShowPlayerConfrontCirce::
# 76 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 77 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 79 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 80 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 82 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 83 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_ShowUlyssesAfterCirce::
# 89 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 90 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_Ulysses::
# 97 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Ulysses_1
	return

CasaCirces_Script_Ulysses_1:
# 98 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 99 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 100 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_AfterConfrontCirce
# 101 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 102 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 103 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Circe::
# 108 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Circe_1
	return

CasaCirces_Script_Circe_1:
# 109 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 110 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 111 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_AfterConfrontUlysses
# 112 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 113 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 114 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Mismagius::
# 119 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Mismagius_1
	return

CasaCirces_Script_Mismagius_1:
# 120 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 121 "data/maps/CasaCirces/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 122 "data/maps/CasaCirces/scripts.pory"
	waitmoncry
# 123 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Teddiursa::
# 128 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 129 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_TEDDIURSA, Common_Movement_ExclamationMark
# 130 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 131 "data/maps/CasaCirces/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 132 "data/maps/CasaCirces/scripts.pory"
	waitmoncry
# 133 "data/maps/CasaCirces/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TEDDIURSA
# 134 "data/maps/CasaCirces/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 136 "data/maps/CasaCirces/scripts.pory"
	msgbox MareS6_Text_UsePinaFruit, MSGBOX_YESNO
# 137 "data/maps/CasaCirces/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CasaCirces_Script_Teddiursa_1
# 143 "data/maps/CasaCirces/scripts.pory"
	msgbox MareS6_Text_PlayerGaveMoly
	return

CasaCirces_Script_Teddiursa_1:
# 138 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 139 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	end


CasaCirces_Script_UlyssesConfrontCirce::
# 151 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 152 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 154 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 155 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 157 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 158 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce1
# 159 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 161 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 162 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses1
# 163 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 165 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 166 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 167 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 169 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 170 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce2
# 171 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 173 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 174 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses2
# 175 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 177 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 178 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce3
# 179 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 181 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 182 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses3
# 183 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 185 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 186 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce4
# 187 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 189 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 190 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses4
# 191 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 193 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceDown
# 194 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 196 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 197 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce5
# 199 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceUp
# 200 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 202 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce6
# 203 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 204 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 206 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 207 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 208 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkRight
# 209 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 210 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 211 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 212 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceDown
# 213 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 215 "data/maps/CasaCirces/scripts.pory"
	setvar VAR_ULYSSES_STATE, 8
	end


CasaCirces_Script_PlayerConfrontCirce::
# 224 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 225 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 227 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 228 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 230 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 231 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontPlayer1
# 232 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 234 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_TEDDIURSA, 190, 98
# 235 "data/maps/CasaCirces/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_ENCOUNTER
# 236 "data/maps/CasaCirces/scripts.pory"
	waitmoncry
# 237 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_TEDDIURSA
# 239 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 240 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 242 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 243 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontPlayer2
# 244 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 246 "data/maps/CasaCirces/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 247 "data/maps/CasaCirces/scripts.pory"
	trainerbattle_no_intro TRAINER_CIRCE, CasaCirces_Text_CirceLost
# 249 "data/maps/CasaCirces/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 250 "data/maps/CasaCirces/scripts.pory"
	removeobject LOCALID_CASACIRCES_CIRCE
# 251 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 0, 0
# 252 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_INVISIBLE
# 253 "data/maps/CasaCirces/scripts.pory"
	addobject LOCALID_CASACIRCES_CIRCE
# 254 "data/maps/CasaCirces/scripts.pory"
	removeobject LOCALID_CASACIRCES_MISMAGIUS
# 255 "data/maps/CasaCirces/scripts.pory"
	removeobject LOCALID_CASACIRCES_CIRCE
# 256 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 0, 0
# 257 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_INVISIBLE
# 258 "data/maps/CasaCirces/scripts.pory"
	addobject LOCALID_CASACIRCES_MISMAGIUS
# 260 "data/maps/CasaCirces/scripts.pory"
	setvar VAR_ULYSSES_STATE, 10
	return


CasaCirces_Text_Ulysses_ConfrontCirce1::
# 265 "data/maps/CasaCirces/scripts.pory"
	.string "Behold! The wicked witch of the forest!\n"
	.string "We've got you cornered now!$"

CasaCirces_Text_Circe_ConfrontUlysses1::
# 270 "data/maps/CasaCirces/scripts.pory"
	.string "Hi! Here I am! You've really got me now,\n"
	.string "but I wonder, who is this handsome man\l"
	.string "who will take me?$"

CasaCirces_Text_Ulysses_ConfrontCirce2::
# 276 "data/maps/CasaCirces/scripts.pory"
	.string "Stay back you naughty witch, your time\n"
	.string "has come. I'm here to punish you and put\l"
	.string "an end to your evil magic! Don't try and\l"
	.string "run!$"

CasaCirces_Text_Circe_ConfrontUlysses2::
# 282 "data/maps/CasaCirces/scripts.pory"
	.string "Don't try and run? I'd never dream of it!\n"
	.string "Playing hard to get is not my style. I am\l"
	.string "Circe, the lady of the woods. Naughty\l"
	.string "witch is such a nasty title, I prefer\l"
	.string "physician, or beloved. Now tell me, for I\l"
	.string "am eager to learn, the name of my new\l"
	.string "gentleman caller.$"

CasaCirces_Text_Ulysses_ConfrontCirce3::
# 292 "data/maps/CasaCirces/scripts.pory"
	.string "I am Ulysses, lord of Ithaca, and I've\n"
	.string "come to save the men you've bewitched\l"
	.string "on behalf of the people of the town.$"

CasaCirces_Text_Circe_ConfrontUlysses3::
# 298 "data/maps/CasaCirces/scripts.pory"
	.string "Welcome, Lord Ulysses, to abode. Those\n"
	.string "men, I think, bewitched and conquered\l"
	.string "me more than I bewitched or ill-treated\l"
	.string "them but still I empathize with your\l"
	.string "concern. I can assure you they are all\l"
	.string "unharmed and close at hand. Alas they\l"
	.string "can't return, their restoration is\l"
	.string "beyond my skill alone. Only the noble\l"
	.string "Piña fruit can restore them to their\l"
	.string "previous forms.$"

CasaCirces_Text_Ulysses_ConfrontCirce4::
# 310 "data/maps/CasaCirces/scripts.pory"
	.string "Enough waiting, woman, give me the\n"
	.string "fruit!$"

CasaCirces_Text_Circe_ConfrontUlysses4::
# 314 "data/maps/CasaCirces/scripts.pory"
	.string "The Piña fruit, native to our island, is\n"
	.string "very rare. The Piña tree only flowers\l"
	.string "once in a generation we would need to\l"
	.string "search the entire island, and check\l"
	.string "every tree, and still the odds of\l"
	.string "finding just one fruit would be minute.\l"
	.string "Perhaps your companion has sharper\l"
	.string "eyes and better luck than we mature\l"
	.string "adults. Let him go out and seach the\l"
	.string "island for the piña fruit. Let's you and\l"
	.string "me stay here, you wouldn't want to leave\l"
	.string "me all alone, and unattended. Who knows\l"
	.string "what kind of mischief I might get up to\l"
	.string "by myself... Best stay here and make\l"
	.string "mischief together...$"

CasaCirces_Text_Ulysses_ConfrontCirce5::
# 331 "data/maps/CasaCirces/scripts.pory"
	.string "I think, for now, we'll have to trust the\n"
	.string "witch. Don't worry, I think I can hold my\l"
	.string "own if she tries any tricks I'll pin her\l"
	.string "down and give her punishment for\l"
	.string "naughtiness... You better go start\l"
	.string "searching the island for the rare Piña\l"
	.string "fruit and remember the fate of those\l"
	.string "lost men lies in your hands. So, hurry\l"
	.string "up! Leave me and her alone.$"

CasaCirces_Text_Ulysses_ConfrontCirce6::
# 342 "data/maps/CasaCirces/scripts.pory"
	.string "So be it, witch, I'll keep ahold of you\n"
	.string "while my companion, {PLAYER}, fetches\l"
	.string "the fruit you need to return the men to\l"
	.string "their homes.$"

CasaCirces_Text_Ulysses_AfterConfrontCirce::
# 348 "data/maps/CasaCirces/scripts.pory"
	.string "Let me handle Circe alone, you go search\n"
	.string "the island and find the Piña fruit.$"

CasaCirces_Text_Circe_AfterConfrontUlysses::
# 353 "data/maps/CasaCirces/scripts.pory"
	.string "The Piña tree only rarely bears fruit.\n"
	.string "You'd better hurry up and start your\l"
	.string "search if you have any hopes of finding\l"
	.string "some.$"

CasaCirces_Text_Circe_ConfrontPlayer1::
# 359 "data/maps/CasaCirces/scripts.pory"
	.string "You're too late.$"

CasaCirces_Text_Circe_ConfrontPlayer2::
# 363 "data/maps/CasaCirces/scripts.pory"
	.string "Your friend is beyond your help, but\n"
	.string "don't you worry. You'll be with him soon.$"

CasaCirces_Text_CirceLost::
# 368 "data/maps/CasaCirces/scripts.pory"
	.string "Look what you've done! I'm melting! I'm\n"
	.string "melting!$"
