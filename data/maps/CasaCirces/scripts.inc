CasaCirces_MapScripts::
# 7 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/CasaCirces/scripts.pory"
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

CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 7, CasaCirces_Script_UlyssesConfrontCirce
# 31 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 9, CasaCirces_Script_PlayerConfrontCirce
	.2byte 0


CasaCirces_Script_ShowUlyssesConfrontCirce::
# 38 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 39 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 41 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 42 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 44 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 4, 4
# 45 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_FACE_UP
	return


CasaCirces_Script_ShowUlyssesWithCirce::
# 51 "data/maps/CasaCirces/scripts.pory"
	setflag FLAG_TEMP_2
# 53 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 6, 3
# 54 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 56 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 7, 3
# 57 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 59 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 6, 3
# 60 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


CasaCirces_Script_ShowPlayerConfrontCirce::
# 66 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 67 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 69 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 70 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 72 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 73 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_ShowUlyssesAfterCirce::
# 79 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 80 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_Ulysses::
# 87 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Ulysses_1
	return

CasaCirces_Script_Ulysses_1:
# 88 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 89 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 90 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_AfterConfrontCirce
# 91 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 92 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 93 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Circe::
# 98 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Circe_1
	return

CasaCirces_Script_Circe_1:
# 99 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 100 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 101 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_AfterConfrontUlysses
# 102 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 103 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 104 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Mismagius::
# 109 "data/maps/CasaCirces/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CasaCirces_Script_Mismagius_1
	return

CasaCirces_Script_Mismagius_1:
# 110 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 111 "data/maps/CasaCirces/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 112 "data/maps/CasaCirces/scripts.pory"
	waitmoncry
# 113 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_Teddiursa::
# 118 "data/maps/CasaCirces/scripts.pory"
	faceplayer
# 119 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_TEDDIURSA, Common_Movement_ExclamationMark
# 120 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 121 "data/maps/CasaCirces/scripts.pory"
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_ENCOUNTER
# 122 "data/maps/CasaCirces/scripts.pory"
	waitmoncry
# 123 "data/maps/CasaCirces/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHINX
# 124 "data/maps/CasaCirces/scripts.pory"
	msgbox MareS6_Text_MeetsGaze
# 126 "data/maps/CasaCirces/scripts.pory"
	unfaceplayer
	return


CasaCirces_Script_UlyssesConfrontCirce::
# 132 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 133 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 135 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 136 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 138 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 139 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce1
# 140 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 142 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 143 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses1
# 144 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 146 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 147 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 148 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 150 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 151 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce2
# 152 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 154 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 155 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses2
# 156 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 158 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 159 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce3
# 160 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 162 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 163 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses3
# 164 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 166 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 167 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce4
# 168 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 170 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 171 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses4
# 172 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 174 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceDown
# 175 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 177 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 178 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce5
# 180 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceUp
# 181 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 183 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce6
# 184 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 185 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 187 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 188 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 189 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkRight
# 190 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 191 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 192 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 193 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceDown
# 194 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 196 "data/maps/CasaCirces/scripts.pory"
	setvar VAR_ULYSSES_STATE, 8
	end


CasaCirces_Script_PlayerConfrontCirce::
	return


CasaCirces_Text_Ulysses_ConfrontCirce1::
# 208 "data/maps/CasaCirces/scripts.pory"
	.string "Behold! The wicked witch of the forest!\n"
	.string "We've got you cornered now!$"

CasaCirces_Text_Circe_ConfrontUlysses1::
# 213 "data/maps/CasaCirces/scripts.pory"
	.string "Hi! Here I am! You've really got me now,\n"
	.string "but I wonder, who is this handsome man\l"
	.string "who will take me?$"

CasaCirces_Text_Ulysses_ConfrontCirce2::
# 219 "data/maps/CasaCirces/scripts.pory"
	.string "Stay back you naughty witch, your time\n"
	.string "has come. I'm here to punish you and put\l"
	.string "an end to your evil magic! Don't try and\l"
	.string "run!$"

CasaCirces_Text_Circe_ConfrontUlysses2::
# 225 "data/maps/CasaCirces/scripts.pory"
	.string "Don't try and run? I'd never dream of it!\n"
	.string "Playing hard to get is not my style. I am\l"
	.string "Circe, the lady of the woods. Naughty\l"
	.string "witch is such a nasty title, I prefer\l"
	.string "physician, or beloved. Now tell me, for I\l"
	.string "am eager to learn, the name of my new\l"
	.string "gentleman caller.$"

CasaCirces_Text_Ulysses_ConfrontCirce3::
# 235 "data/maps/CasaCirces/scripts.pory"
	.string "I am Ulysses, lord of Ithaca, and I've\n"
	.string "come to save the men you've bewitched\l"
	.string "on behalf of the people of the town.$"

CasaCirces_Text_Circe_ConfrontUlysses3::
# 241 "data/maps/CasaCirces/scripts.pory"
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
# 253 "data/maps/CasaCirces/scripts.pory"
	.string "Enough waiting, woman, give me the\n"
	.string "fruit!$"

CasaCirces_Text_Circe_ConfrontUlysses4::
# 257 "data/maps/CasaCirces/scripts.pory"
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
# 274 "data/maps/CasaCirces/scripts.pory"
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
# 285 "data/maps/CasaCirces/scripts.pory"
	.string "So be it, witch, I'll keep ahold of you\n"
	.string "while my companion, {PLAYER}, fetches\l"
	.string "the fruit you need to return the men to\l"
	.string "their homes.$"

CasaCirces_Text_Ulysses_AfterConfrontCirce::
# 291 "data/maps/CasaCirces/scripts.pory"
	.string "Let me handle Circe alone, you go search\n"
	.string "the island and find the Piña fruit.$"

CasaCirces_Text_Circe_AfterConfrontUlysses::
# 296 "data/maps/CasaCirces/scripts.pory"
	.string "The Piña tree only rarely bears fruit.\n"
	.string "You'd better hurry up and start your\l"
	.string "search if you have any hopes of finding\l"
	.string "some.$"
