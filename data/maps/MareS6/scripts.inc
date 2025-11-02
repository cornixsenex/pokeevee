MareS6_MapScripts::
# 16 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS6_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/MareS6/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MareS6_MapScripts_MAP_SCRIPT_ON_LOAD
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

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD:
# 45 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 8
	goto_if_eq MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

MareS6_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 46 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowMollyFruit
	return


MareS6_Script_Transition_IslaPina::
# 53 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 1
# 54 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 55 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_Transition_MareOccidens::
# 59 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 2
# 60 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 61 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_MareTropicumTransition::
# 65 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 3
# 66 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 67 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_PlayaEchonaTransition::
# 72 "data/maps/MareS6/scripts.pory"
	setvar VAR_TEMP_5, 4
# 73 "data/maps/MareS6/scripts.pory"
	special TransitionMapMusic
# 74 "data/maps/MareS6/scripts.pory"
	special ShowMapNamePopup
	return


MareS6_Script_ShowUlyssesWithFisherman::
# 78 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 72, 66
# 79 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_FACE_RIGHT
# 81 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_FISHERMAN, MOVEMENT_TYPE_FACE_LEFT
	return


MareS6_Script_ShowUlyssesInForest::
# 86 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 34, 55
# 87 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowUlyssesAntePortam::
# 92 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 63, 44
# 93 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_LOOK_AROUND
	return


MareS6_Script_ShowMollyFruit::
# 98 "data/maps/MareS6/scripts.pory"
	setmetatile 16, 60, METATILE_BigIsland_SandPalmFruitL, FALSE
# 99 "data/maps/MareS6/scripts.pory"
	setmetatile 17, 60, METATILE_BigIsland_SandPalmFruitC, FALSE
# 100 "data/maps/MareS6/scripts.pory"
	setmetatile 18, 60, METATILE_BigIsland_SandPalmFruitR, FALSE
	return


MareS6_Script_Fisherman::
# 105 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_FISHERMAN, 190, 98
# 107 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_lt MareS6_Script_Fisherman_2
# 112 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Fisherman_3
# 117 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 12
	goto_if_lt MareS6_Script_Fisherman_4
# 123 "data/maps/MareS6/scripts.pory"
	faceplayer
# 124 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanAfterUlysses
MareS6_Script_Fisherman_1:
# 126 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 127 "data/maps/MareS6/scripts.pory"
	closemessage
# 128 "data/maps/MareS6/scripts.pory"
	unfaceplayer
	end

MareS6_Script_Fisherman_2:
# 108 "data/maps/MareS6/scripts.pory"
	faceplayer
# 109 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanBeforeUlysses
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_3:
# 113 "data/maps/MareS6/scripts.pory"
	setflag FLAG_TEMP_F
# 114 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	goto MareS6_Script_Fisherman_1

MareS6_Script_Fisherman_4:
# 118 "data/maps/MareS6/scripts.pory"
	faceplayer
# 119 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanDuringUlysses
	goto MareS6_Script_Fisherman_1


MareS6_Script_Ulysses::
# 134 "data/maps/MareS6/scripts.pory"
	compare VAR_ULYSSES_STATE, 4
	goto_if_eq MareS6_Script_Ulysses_1
	return

MareS6_Script_Ulysses_1:
# 135 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesEtFishermanScene
	return


MareS6_Script_UlyssesEtFishermanScene::
# 143 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_FishermanExposition
# 144 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_FISHERMAN
# 146 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 147 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesResponseToFisherman
# 148 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 149 "data/maps/MareS6/scripts.pory"
	closemessage
# 151 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 152 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 154 "data/maps/MareS6/scripts.pory"
	goto_if_set FLAG_TEMP_F, MareS6_Script_UlyssesEtFishermanScene_2
MareS6_Script_UlyssesEtFishermanScene_1:
# 161 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 162 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_5
# 164 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_6
# 167 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Script_UlyssesEtFishermanScene_Text_0
# 168 "data/maps/MareS6/scripts.pory"
	closemessage
	end

MareS6_Script_UlyssesEtFishermanScene_2:
# 155 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 156 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 157 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 158 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_1

MareS6_Script_UlyssesEtFishermanScene_4:
# 171 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 173 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 174 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesCallToAction
# 175 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 176 "data/maps/MareS6/scripts.pory"
	closemessage
# 178 "data/maps/MareS6/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 179 "data/maps/MareS6/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq MareS6_Script_UlyssesEtFishermanScene_11
MareS6_Script_UlyssesEtFishermanScene_10:
# 183 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkLeft3
# 184 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 185 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkDown7
# 186 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 188 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 189 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesInForest
# 190 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 192 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_FISHERMAN, Common_Movement_FaceUp
# 193 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 195 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 5
	end

MareS6_Script_UlyssesEtFishermanScene_5:
# 163 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_6:
# 165 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
	goto MareS6_Script_UlyssesEtFishermanScene_4

MareS6_Script_UlyssesEtFishermanScene_11:
# 180 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 181 "data/maps/MareS6/scripts.pory"
	waitmovement 0
	goto MareS6_Script_UlyssesEtFishermanScene_10


MareS6_Script_UlyssesJungleB::
# 201 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 202 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 203 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleC::
# 207 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
# 208 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 209 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungleD::
# 213 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp3
# 214 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 215 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesJungle
	return


MareS6_Script_UlyssesJungle::
# 219 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 220 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 221 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_ExclamationMark
# 222 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 223 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceLeft
# 224 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 225 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 226 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesJungle
# 227 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 228 "data/maps/MareS6/scripts.pory"
	closemessage
# 230 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp6
# 231 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 233 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 234 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_ShowUlyssesAntePortam
# 235 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 237 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 6
	end


MareS6_Script_UlyssesAntePortamA::
# 243 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 244 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 245 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortamC::
# 249 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 250 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 251 "data/maps/MareS6/scripts.pory"
	call MareS6_Script_UlyssesAntePortam
	return


MareS6_Script_UlyssesAntePortam::
# 255 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 256 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 257 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_FaceDown
# 258 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 259 "data/maps/MareS6/scripts.pory"
	load_field_pic FIELD_PIC_ULYSSES, 190, 98
# 260 "data/maps/MareS6/scripts.pory"
	msgbox MareS6_Text_UlyssesAntePortam
# 261 "data/maps/MareS6/scripts.pory"
	destroy_field_pic FIELD_PIC_ULYSSES
# 262 "data/maps/MareS6/scripts.pory"
	closemessage
# 264 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp2
# 265 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 267 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 268 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 269 "data/maps/MareS6/scripts.pory"
	opendoor 63, 42
# 270 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 271 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkInPlaceFasterUp
# 272 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 273 "data/maps/MareS6/scripts.pory"
	applymovement LOCALID_MARES6_ULYSSES, Common_Movement_WalkUp
# 274 "data/maps/MareS6/scripts.pory"
	waitmovement 0
# 275 "data/maps/MareS6/scripts.pory"
	removeobject LOCALID_MARES6_ULYSSES
# 276 "data/maps/MareS6/scripts.pory"
	setobjectxyperm LOCALID_MARES6_ULYSSES, 0, 0
# 277 "data/maps/MareS6/scripts.pory"
	setobjectmovementtype LOCALID_MARES6_ULYSSES, MOVEMENT_TYPE_INVISIBLE
# 278 "data/maps/MareS6/scripts.pory"
	addobject LOCALID_MARES6_ULYSSES
# 279 "data/maps/MareS6/scripts.pory"
	closedoor 63, 42
# 280 "data/maps/MareS6/scripts.pory"
	waitdooranim
# 282 "data/maps/MareS6/scripts.pory"
	setvar VAR_ULYSSES_STATE, 7
	end


MareS6_Script_UlyssesEtFishermanScene_Text_0:
# 167 "data/maps/MareS6/scripts.pory"
	.string "ERROR, \nPlayerFacingDirection OOB$"

MareS6_Text_FishermanBeforeUlysses::
# 287 "data/maps/MareS6/scripts.pory"
	.string "There's been some strange happenings\n"
	.string "on our sleepy little island. People have\l"
	.string "been going missing. I'm doing my best to\l"
	.string "stay out of it and focus on my fishing.$"

MareS6_Text_FishermanDuringUlysses::
# 291 "data/maps/MareS6/scripts.pory"
	.string "Well, I'll tell you what, that Ulysses\n"
	.string "character sure is a confident walked\l"
	.string "and a smooth talker, but I don't think\l"
	.string "anyone can stop that witch in the\l"
	.string "woods. No sir, I think he'd be better off\l"
	.string "staying here with me and the fishes.$"

MareS6_Text_FishermanAfterUlysses::
# 295 "data/maps/MareS6/scripts.pory"
	.string "This is my only joy in life, out here just\n"
	.string "me and the sea. I keep my rod clean and\l"
	.string "stay out of trouble, that's all I do.$"

MareS6_Text_FishermanExposition::
# 299 "data/maps/MareS6/scripts.pory"
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
# 303 "data/maps/MareS6/scripts.pory"
	.string "That's terrible! Someone must do\n"
	.string "something!$"

MareS6_Text_UlyssesCallToAction::
# 307 "data/maps/MareS6/scripts.pory"
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
# 323 "data/maps/MareS6/scripts.pory"
	.string "This jungle more dangerous than I had\n"
	.string "expected but we cannot turn back. Lets\l"
	.string "muscle our way to the witches lair!$"

MareS6_Text_UlyssesAntePortam::
# 329 "data/maps/MareS6/scripts.pory"
	.string "This must be it, the evil witch's lair. Be\n"
	.string "cautious, we don't know what kind of\l"
	.string "tricks she has waiting for us once we're\l"
	.string "inside. Now follow me forward. Let's\l"
	.string "save the town!$"
