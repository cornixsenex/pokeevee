CasaCirces_MapScripts::
# 4 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/CasaCirces/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 7
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 9
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 18 "data/maps/CasaCirces/scripts.pory"
	compare VAR_ULYSSES_STATE, 10
	goto_if_eq CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesWithCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowPlayerConfrontCirce
	goto CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

CasaCirces_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 19 "data/maps/CasaCirces/scripts.pory"
	call CasaCirces_Script_ShowUlyssesAfterCirce
	return

CasaCirces_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 7, CasaCirces_Script_UlyssesConfrontCirce
# 28 "data/maps/CasaCirces/scripts.pory"
	map_script_2 VAR_ULYSSES_STATE, 9, CasaCirces_Script_PlayerConfrontCirce
	.2byte 0


CasaCirces_Script_ShowUlyssesConfrontCirce::
# 35 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 36 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 39 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 41 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 4, 4
# 42 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_FACE_UP
	return


CasaCirces_Script_ShowUlyssesWithCirce::
# 48 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 6, 3
# 49 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 7, 3
# 52 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 54 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_ULYSSES, 6, 3
# 55 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_ULYSSES, MOVEMENT_TYPE_WALK_IN_PLACE_UP
	return


CasaCirces_Script_ShowPlayerConfrontCirce::
# 61 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_CIRCE, 4, 2
# 62 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_CIRCE, MOVEMENT_TYPE_FACE_DOWN
# 64 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_MISMAGIUS, 5, 2
# 65 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_MISMAGIUS, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 67 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 68 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_ShowUlyssesAfterCirce::
# 74 "data/maps/CasaCirces/scripts.pory"
	setobjectxyperm LOCALID_CASACIRCES_TEDDIURSA, 4, 2
# 75 "data/maps/CasaCirces/scripts.pory"
	setobjectmovementtype LOCALID_CASACIRCES_TEDDIURSA, MOVEMENT_TYPE_LOOK_AROUND
	return


CasaCirces_Script_UlyssesConfrontCirce::
# 82 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 83 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 85 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 86 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 88 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 89 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce1
# 90 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 92 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 93 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses1
# 94 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 96 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_WalkUp
# 97 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 98 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 100 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 101 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce2
# 102 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 104 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 105 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses2
# 106 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 108 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 109 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce3
# 110 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 112 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 113 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses3
# 114 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 116 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 117 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce4
# 118 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 120 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_CIRCE, 190, 98
# 121 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Circe_ConfrontUlysses4
# 122 "data/maps/CasaCirces/scripts.pory"
	destroy_field_pic FIELD_PIC_CIRCE
# 124 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceDown
# 125 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 127 "data/maps/CasaCirces/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 128 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce5
# 130 "data/maps/CasaCirces/scripts.pory"
	applymovement LOCALID_CASACIRCES_ULYSSES, Common_Movement_FaceUp
# 131 "data/maps/CasaCirces/scripts.pory"
	waitmovement 0
# 133 "data/maps/CasaCirces/scripts.pory"
	msgbox CasaCirces_Text_Ulysses_ConfrontCirce6
# 135 "data/maps/CasaCirces/scripts.pory"
	closemessage
# 138 "data/maps/CasaCirces/scripts.pory"
	setvar VAR_ULYSSES_STATE, 8
	end


CasaCirces_Script_PlayerConfrontCirce::
	return


CasaCirces_Text_Ulysses_ConfrontCirce1::
# 150 "data/maps/CasaCirces/scripts.pory"
	.string "Behold! The wicked witch of the forest!\n"
	.string "We've got you cornered now!$"

CasaCirces_Text_Circe_ConfrontUlysses1::
# 155 "data/maps/CasaCirces/scripts.pory"
	.string "Hi! Here I am! You've really got me now,\n"
	.string "but I wonder, who is this handsome man\l"
	.string "who will take me?$"

CasaCirces_Text_Ulysses_ConfrontCirce2::
# 161 "data/maps/CasaCirces/scripts.pory"
	.string "Stay back you naughty witch, your time\n"
	.string "has come. I'm here to punish you and put\l"
	.string "an end to your evil magic! Don't try and\l"
	.string "run!$"

CasaCirces_Text_Circe_ConfrontUlysses2::
# 167 "data/maps/CasaCirces/scripts.pory"
	.string "Don't try and run? I'd never dream of it!\n"
	.string "Playing hard to get is not my style. I am\l"
	.string "Circe, the lady of the woods. Naughty\l"
	.string "witch is such a nasty title, I prefer\l"
	.string "physician, or beloved. Now tell me, for I\l"
	.string "am eager to learn, the name of my new\l"
	.string "gentleman caller.$"

CasaCirces_Text_Ulysses_ConfrontCirce3::
# 177 "data/maps/CasaCirces/scripts.pory"
	.string "I am Ulysses, lord of Ithaca, and I've\n"
	.string "come to save the men you've bewitched\l"
	.string "on behalf of the people of the town.$"

CasaCirces_Text_Circe_ConfrontUlysses3::
# 183 "data/maps/CasaCirces/scripts.pory"
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
# 195 "data/maps/CasaCirces/scripts.pory"
	.string "Enough waiting, woman, give me the\n"
	.string "fruit!$"

CasaCirces_Text_Circe_ConfrontUlysses4::
# 199 "data/maps/CasaCirces/scripts.pory"
	.string "The Piña fruit, native to our island, is\n"
	.string "very rare. The Piña tree only flowers\l"
	.string "once in a generation we would need to\l"
	.string "search the entire island, and check\l"
	.string "every tree, and still the odds of\l"
	.string "finding just one fruit would be minute.\l"
	.string "Perhaps your companion has sharper\l"
	.string "eyes and better luck than we mature\l"
	.string "adults. Let him go out and seach the\l"
	.string "island for the Piña fruit. Let's you and\l"
	.string "me stay here, you wouldn't want to leave\l"
	.string "me all alone, and unattended. Who knows\l"
	.string "what kind of mischief I might get up to\l"
	.string "by myself... Best stay here and make\l"
	.string "mischief together...$"

CasaCirces_Text_Ulysses_ConfrontCirce5::
# 216 "data/maps/CasaCirces/scripts.pory"
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
# 227 "data/maps/CasaCirces/scripts.pory"
	.string "$"
