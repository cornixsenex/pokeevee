MareS6_MapScripts::
# 16 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_MareS6_F
# 19 "data/maps/MareS6/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/MareS6/scripts.pory"
	case 1, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 22 "data/maps/MareS6/scripts.pory"
	case 2, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 24 "data/maps/MareS6/scripts.pory"
	case 3, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 26 "data/maps/MareS6/scripts.pory"
	case 4, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 30 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 34 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 5
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 38 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 6
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 21 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 25 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 27 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 31 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesWithFisherman
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 35 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
	goto MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 39 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
	return


MareS6_Script_Transition_IslaPina::
# 47 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 48 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 49 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 53 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 54 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 59 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 60 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 61 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 66 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 67 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 68 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 72 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 73 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 75 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 80 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 81 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 86 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 87 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_Fisherman::
# 92 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 94 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 99 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 104 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 110 "data/maps/MareS6/scripts.pory"
	faceplayer
# 111 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 113 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 114 "data/maps/MareS6/scripts.pory"
	closemessage
# 115 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 95 "data/maps/MareS6/scripts.pory"
	faceplayer
# 96 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 100 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 101 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 105 "data/maps/MareS6/scripts.pory"
	faceplayer
# 106 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 121 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_1
	return

MareS6_Script_Ulysses_1:
# 122 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	return


MareS6_Script_UlyssesEtFishermanScene::
# 130 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 131 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 133 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 134 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 135 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 136 "data/maps/MareS6/scripts.pory"
	closemessage
# 138 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 139 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 141 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 148 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 149 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 151 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 154 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 155 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 142 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 143 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 144 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 145 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 158 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 160 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 161 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 162 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 163 "data/maps/MareS6/scripts.pory"
	closemessage
# 165 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 166 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 170 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 171 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 172 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 173 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 175 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 176 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 177 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 179 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 180 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 182 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 150 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 152 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 167 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 168 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 188 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 189 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 190 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 194 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 195 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 196 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 200 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 201 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 202 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 206 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 207 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 208 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 209 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 210 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 211 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 212 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 213 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 214 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 215 "data/maps/MareS6/scripts.pory"
	closemessage
# 217 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 218 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 220 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 221 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 222 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 224 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 230 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 231 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 232 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 236 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 237 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 238 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 242 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 243 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 244 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 245 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 246 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 247 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 248 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 249 "data/maps/MareS6/scripts.pory"
	closemessage
# 251 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 252 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 254 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 255 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 256 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 257 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 258 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 260 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 261 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 262 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 263 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 264 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 265 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 266 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 267 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 269 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 154 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 274 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 278 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walked\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 282 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 286 "data/maps/MareS6/scripts.pory"
	.string "Now losing people is an unfortunate\n"
	.string "part of life out here on Isla Pina, but\l"
	.string "nothing like this. We must have lost\l"
	.string "half a dozen just this month. We sent\l"
	.string "out a search party, all strong men like\l"
	.string "yourself, but we haven't seen them\l"
	.string "since. We all know it must be that crazy\l"
	.string "old witch who lives out in the woods but\l"
	.string "the way I see it there's nothing we can\l"
	.string "do about it.$"

MareS6_Text_UlyssesResponseToFisherman::
# 290 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 294 "data/maps/MareS6/scripts.pory"
	.string "My goodness, {PLAYER}, am I glad to\n"
	.string "see you! I washed ashore and these\l"
	.string "good people of the island gave me food,\l"
	.string "water, and clothes. I was about to leave\l"
	.string "when I just learned an evil witch, who\l"
	.string "lives out in the woods, is kidnapping\l"
	.string "the people who live here. After the\l"
	.string "hospitality they showed to this\l"
	.string "stranger in his time of great need, it\l"
	.string "wouldn't be right for me to leave now\l"
	.string "without paying them back by finding\l"
	.string "this murderous witch and saving the\l"
	.string "island. Let's head for the jungle and\l"
	.string "search for the secret lair of the witch.\l"
	.string "I'll meet you there!$"

MareS6_Text_UlyssesJungle::
# 310 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 316 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"
