Palmae_RentalHouse_MapScripts::
# 10 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_lt Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLeaf
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLandlady
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 22 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Palmae_RentalHouse_Script_FaceLandlady
	.2byte 0


Palmae_RentalHouse_Script_ShowLandlady::
# 28 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 2, 11, 4
# 29 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	end


Palmae_RentalHouse_Script_ShowLeaf::
# 34 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 1, 5, 5
# 35 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 3, 5, 4
# 38 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	end


Palmae_RentalHouse_Script_FaceLandlady::
# 43 "data/maps/Palmae_RentalHouse/scripts.pory"
	turnobject 2, DIR_EAST
	end


Palmae_RentalHouse_Script_Leaf::
# 48 "data/maps/Palmae_RentalHouse/scripts.pory"
	lock
# 49 "data/maps/Palmae_RentalHouse/scripts.pory"
	faceplayer
# 52 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_MEWRA_SIGIL
# 53 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_Leaf_2
# 57 "data/maps/Palmae_RentalHouse/scripts.pory"
	goto_if_unset FLAG_PALMAE_RENTALHOUSE_LEAFGFINTROD, Palmae_RentalHouse_Script_Leaf_5
# 73 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf5
# 74 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafCheckGF
Palmae_RentalHouse_Script_Leaf_1:
# 79 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 80 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 82 "data/maps/Palmae_RentalHouse/scripts.pory"
	release
	end

Palmae_RentalHouse_Script_Leaf_2:
# 54 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf1
# 55 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
	goto Palmae_RentalHouse_Script_Leaf_1

Palmae_RentalHouse_Script_Leaf_5:
# 59 "data/maps/Palmae_RentalHouse/scripts.pory"
	setflag FLAG_PALMAE_RENTALHOUSE_LEAFGFINTROD
# 61 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf2
# 62 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
# 64 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 65 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 67 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf3
# 68 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
# 70 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafCheckGF
	goto Palmae_RentalHouse_Script_Leaf_1


Palmae_RentalHouse_Script_LeafCheckGF::
# 88 "data/maps/Palmae_RentalHouse/scripts.pory"
	setvar VAR_TEMP_4, 0
# 90 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf4
# 92 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTattooDesire
# 93 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_TATTOO
# 94 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_2
Palmae_RentalHouse_Script_LeafCheckGF_1:
# 101 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafRichDesire
# 102 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkmoney 100000
# 103 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_5
Palmae_RentalHouse_Script_LeafCheckGF_4:
# 110 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTokenDesire
# 111 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 112 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_8
Palmae_RentalHouse_Script_LeafCheckGF_7:
# 118 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_10
# 121 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafFriendZone
# 122 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
	return

Palmae_RentalHouse_Script_LeafCheckGF_2:
# 95 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 96 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 97 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTattooSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_1

Palmae_RentalHouse_Script_LeafCheckGF_5:
# 104 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 105 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 106 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 107 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafRichSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_4

Palmae_RentalHouse_Script_LeafCheckGF_8:
# 113 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 114 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 115 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 116 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTokenSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_7

Palmae_RentalHouse_Script_LeafCheckGF_10:
# 119 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafGF
	return


Palmae_RentalHouse_Script_LeafGF::
# 130 "data/maps/Palmae_RentalHouse/scripts.pory"
	setflag FLAG_LEAF_ISGF
# 132 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 133 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 141 "data/maps/Palmae_RentalHouse/scripts.pory"
	release
	end


Palmae_RentalHouse_Text_Leaf1::
# 146 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "This house may not be much, but still I'm\n"
	.string "proud to have a place to call my home.\l"
	.string "It's not easy for a single woman in this\l"
	.string "economy to become sucessful. Please go\l"
	.string "find Indianus! Let's save Mew!$"

Palmae_RentalHouse_Text_Leaf2::
# 154 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Oh {PLAYER}! It seems like so much\n"
	.string "time has passed since we set out\l"
	.string "together on the road. Across the land,\l"
	.string "beneath the hills, in caves across the\l"
	.string "bitter deserted wasteland, and now out\l"
	.string "on our own as graduates from Ardens\l"
	.string "School. Now I begin to feel the\l"
	.string "constant click of time grinding the\l"
	.string "gears of my youthful beauty\l"
	.string "approaching it's inevitable end. I think\l"
	.string "it's time to settle down and find a good\l"
	.string "husband. Though not to say we must give\l"
	.string "up our quest but that it's taken up\l"
	.string "much of our lives blindly searching for\l"
	.string "Indianus and we still have nothing to\l"
	.string "show for our search. It would be folly\l"
	.string "to ignore the great diversity of\l"
	.string "experiences available to us in mortal\l"
	.string "life. So while you bravely continue your\l"
	.string "search I will being an amorous search\l"
	.string "o'my own.$"

Palmae_RentalHouse_Text_Leaf3::
# 176 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "What's that? You say you've found\n"
	.string "Indianus! My goodness, {PLAYER},\l"
	.string "that's just spectacular. Tell me, has he\l"
	.string "agreed to help save Mew? ...You must be\l"
	.string "joking. He never said that!$"

Palmae_RentalHouse_Text_Leaf4::
# 183 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "I'm sorry {PLAYER} but you're like my\n"
	.string "brother! I've known you since we both\l"
	.string "were little kids and loving you like that\l"
	.string "would just feel wrong. Besides, you're\l"
	.string "not my type, I only like the hot bad\l"
	.string "boys with six figure wallets who shower\l"
	.string "me with tokens of their love.$"

Palmae_RentalHouse_Text_Leaf5::
# 192 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Hello again there, {PLAYER}, how goes\n"
	.string "your search for a girlfriend. I know\l"
	.string "you'll find the one! What's that? No\l"
	.string "dude I don't like you like that!$"

Palmae_RentalHouse_Text_LeafTattooDesire::
# 198 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafRichDesire::
# 202 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafTokenDesire::
# 206 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafTattooSatisfy::
# 210 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafRichSatisfy::
# 214 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafTokenSatisfy::
# 218 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"

Palmae_RentalHouse_Text_LeafFriendZone::
# 222 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "$"
