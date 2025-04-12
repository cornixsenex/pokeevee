Palmae_RentalHouse_MapScripts::
# 10 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_lt Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/Palmae_RentalHouse/scripts.pory"
	goto_if_unset FLAG_LEAF_ISGF, Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLandlady
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 17 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_ShowLeaf
	return

Palmae_RentalHouse_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 24 "data/maps/Palmae_RentalHouse/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Palmae_RentalHouse_Script_FaceLandlady
	.2byte 0


Palmae_RentalHouse_Script_ShowLandlady::
# 30 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 2, 11, 4
# 31 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	end


Palmae_RentalHouse_Script_ShowLeaf::
# 36 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 1, 5, 5
# 37 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
# 39 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectxyperm 3, 5, 4
# 40 "data/maps/Palmae_RentalHouse/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	end


Palmae_RentalHouse_Script_FaceLandlady::
# 45 "data/maps/Palmae_RentalHouse/scripts.pory"
	turnobject 2, DIR_EAST
	end


Palmae_RentalHouse_Script_Leaf::
# 50 "data/maps/Palmae_RentalHouse/scripts.pory"
	lock
# 51 "data/maps/Palmae_RentalHouse/scripts.pory"
	faceplayer
# 54 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_MEWRA_SIGIL
# 55 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_Leaf_2
# 59 "data/maps/Palmae_RentalHouse/scripts.pory"
	goto_if_unset FLAG_PALMAE_RENTALHOUSE_LEAFGFINTROD, Palmae_RentalHouse_Script_Leaf_5
# 75 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf5
# 76 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafCheckGF
Palmae_RentalHouse_Script_Leaf_1:
# 81 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 82 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/Palmae_RentalHouse/scripts.pory"
	release
	end

Palmae_RentalHouse_Script_Leaf_2:
# 56 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf1
# 57 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
	goto Palmae_RentalHouse_Script_Leaf_1

Palmae_RentalHouse_Script_Leaf_5:
# 61 "data/maps/Palmae_RentalHouse/scripts.pory"
	setflag FLAG_PALMAE_RENTALHOUSE_LEAFGFINTROD
# 63 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf2
# 64 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
# 66 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 67 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf3
# 70 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
# 72 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafCheckGF
	goto Palmae_RentalHouse_Script_Leaf_1


Palmae_RentalHouse_Script_LeafCheckGF::
# 90 "data/maps/Palmae_RentalHouse/scripts.pory"
	setvar VAR_TEMP_4, 0
# 92 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf4
# 94 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTattooDesire
# 95 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_TATTOO
# 96 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_2
Palmae_RentalHouse_Script_LeafCheckGF_1:
# 103 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafRichDesire
# 104 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkmoney 100000
# 105 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_5
Palmae_RentalHouse_Script_LeafCheckGF_4:
# 112 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTokenDesire
# 113 "data/maps/Palmae_RentalHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 114 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_8
Palmae_RentalHouse_Script_LeafCheckGF_7:
# 120 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_TEMP_4, 3
	goto_if_eq Palmae_RentalHouse_Script_LeafCheckGF_10
# 123 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafFriendZone
# 124 "data/maps/Palmae_RentalHouse/scripts.pory"
	closemessage
	return

Palmae_RentalHouse_Script_LeafCheckGF_2:
# 97 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 98 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 99 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 100 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTattooSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_1

Palmae_RentalHouse_Script_LeafCheckGF_5:
# 106 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 107 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 108 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 109 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafRichSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_4

Palmae_RentalHouse_Script_LeafCheckGF_8:
# 115 "data/maps/Palmae_RentalHouse/scripts.pory"
	addvar VAR_TEMP_4, 1
# 116 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 117 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 118 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_LeafTokenSatisfy
	goto Palmae_RentalHouse_Script_LeafCheckGF_7

Palmae_RentalHouse_Script_LeafCheckGF_10:
# 121 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafGF
	return


Palmae_RentalHouse_Script_LeafGF::
# 132 "data/maps/Palmae_RentalHouse/scripts.pory"
	setflag FLAG_LEAF_ISGF
# 134 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 135 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 137 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf6
# 139 "data/maps/Palmae_RentalHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 140 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_GaveHeartScale
# 141 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 142 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 144 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf7
# 145 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 147 "data/maps/Palmae_RentalHouse/scripts.pory"
	msgbox Palmae_RentalHouse_Text_Leaf8
# 149 "data/maps/Palmae_RentalHouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 150 "data/maps/Palmae_RentalHouse/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Palmae_RentalHouse_Script_LeafGF_2
# 153 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafExit
Palmae_RentalHouse_Script_LeafGF_1:
# 156 "data/maps/Palmae_RentalHouse/scripts.pory"
	release
	end

Palmae_RentalHouse_Script_LeafGF_2:
# 151 "data/maps/Palmae_RentalHouse/scripts.pory"
	call Palmae_RentalHouse_Script_LeafExitNorth
	goto Palmae_RentalHouse_Script_LeafGF_1


Palmae_RentalHouse_Script_LeafExit::
# 161 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown2
# 162 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkDown2
# 163 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 164 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkRight2
# 165 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 166 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 167 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 168 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 169 "data/maps/Palmae_RentalHouse/scripts.pory"
	removeobject 1
# 170 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 171 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 172 "data/maps/Palmae_RentalHouse/scripts.pory"
	removeobject 3
	return


Palmae_RentalHouse_Script_LeafExitNorth::
# 177 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 178 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 179 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 180 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkRight2
# 181 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkRight2
# 182 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 183 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 1, Common_Movement_WalkDown3
# 184 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkDown3
# 185 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 186 "data/maps/Palmae_RentalHouse/scripts.pory"
	removeobject 1
# 187 "data/maps/Palmae_RentalHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkDown
# 188 "data/maps/Palmae_RentalHouse/scripts.pory"
	waitmovement 0
# 189 "data/maps/Palmae_RentalHouse/scripts.pory"
	removeobject 3
	return


Palmae_RentalHouse_Text_Leaf1::
# 194 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "This house may not be much, but still,\n"
	.string "I'm proud to have a place to call my\l"
	.string "home. It's not easy for a single woman\l"
	.string "in this economy to become sucessful.\l"
	.string "Please go find Indianus! Let's save\l"
	.string "Mew!$"

Palmae_RentalHouse_Text_Leaf2::
# 202 "data/maps/Palmae_RentalHouse/scripts.pory"
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
# 224 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "What's that? You say you've found\n"
	.string "Indianus! My goodness, {PLAYER},\l"
	.string "that's just spectacular. Tell me, has he\l"
	.string "agreed to help save Mew? ...You must be\l"
	.string "joking. He never said that!$"

Palmae_RentalHouse_Text_Leaf4::
# 231 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "I'm sorry {PLAYER} but you're like my\n"
	.string "brother! I've known you since we both\l"
	.string "were little kids and loving you like that\l"
	.string "would just feel wrong. Besides, you're\l"
	.string "not my type, I only like the hot bad\l"
	.string "boys with six figure wallets who shower\l"
	.string "me with tokens of their love.$"

Palmae_RentalHouse_Text_Leaf5::
# 240 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Hello again there, {PLAYER}, how goes\n"
	.string "your search for a girlfriend. I know\l"
	.string "you'll find the one! What's that? No\l"
	.string "dude I don't like you like that!$"

Palmae_RentalHouse_Text_LeafTattooDesire::
# 246 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "I want a man who's tall, dark, and\n"
	.string "handsome, a rugged badboy who does\l"
	.string "what he wants, someone I'm scared to\l"
	.string "bring around my dad.$"

Palmae_RentalHouse_Text_LeafRichDesire::
# 252 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "I need a man who has enough money to\n"
	.string "fully support my lavish lifestyle, his\l"
	.string "bank account needs to have six figures.$"

Palmae_RentalHouse_Text_LeafTokenDesire::
# 258 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Of course my man needs to show me he\n"
	.string "cares by bringing me the most\l"
	.string "extravagent tokens of love, even when\l"
	.string "I don't ask.$"

Palmae_RentalHouse_Text_LeafTattooSatisfy::
# 264 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Oh my! Is that a tattoo you have\n"
	.string "{PLAYER}? I never knew you were such\l"
	.string "a badboy!$"

Palmae_RentalHouse_Text_LeafRichSatisfy::
# 269 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Oh {PLAYER}! I see your bank account\n"
	.string "has six figures! I never knew you were\l"
	.string "so rich!$"

Palmae_RentalHouse_Text_LeafTokenSatisfy::
# 274 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Is that a real heart scale? That's a\n"
	.string "lovely token of honest love. Wow! How\l"
	.string "sweet {PLAYER}!$"

Palmae_RentalHouse_Text_LeafFriendZone::
# 279 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Apologies, but {PLAYER} you're more\n"
	.string "like my little brother, not my unfound\l"
	.string "lover. I know Indianus told you to find\l"
	.string "a girlfriend before he would help save\l"
	.string "Mew but I must not betray my virgin\l"
	.string "heart and feign love for one I don't\l"
	.string "truly love. Both from respect for you\l"
	.string "and faith to my honest proclivity for\l"
	.string "certain types of men. I'm sure you'll\l"
	.string "find a girlfriend soon! She's out there!\l"
	.string "Go find her and let's save Mew!$"

Palmae_RentalHouse_Text_Leaf6::
# 292 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "My {PLAYER}... how much you have grown\n"
	.string "in my eye! No longer do I see that little\l"
	.string "boy picking boogers and playing hide\l"
	.string "and seek but a handsome, wealthy, and\l"
	.string "full grown man equipped with all\l"
	.string "necessary virtues to satisfy, provide\l"
	.string "for, and obtain the willful love of\l"
	.string "woman such as I. Desire has ignited in\l"
	.string "my heart to hold you, and be held, to\l"
	.string "know I am the only one for you, that I'm\l"
	.string "enough to fulfill and complete your\l"
	.string "bachelor's life. My cheeks are burned\l"
	.string "with blush, a trmble siezed my fragile,\l"
	.string "dainty hands, my breath is choked and\l"
	.string "nervousness erupts as I admit both to\l"
	.string "myself and to the one I love that you're\l"
	.string "the one I want, {PLAYER}. You're the\l"
	.string "one...$"

Palmae_RentalHouse_Text_Leaf7::
# 311 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "I accept this heart scale as token of\n"
	.string "your precious love promised only to me\l"
	.string "and in return I promise to wear it\l"
	.string "around my neck as a collar, or yoke, and\l"
	.string "swear ever to honor and respect you as\l"
	.string "my lord and man. I will cherish you and\l"
	.string "love you and think of you only in\l"
	.string "sickness, health, in life, in death,\l"
	.string "forever. You and I are joined as one.\l"
	.string "Allow me to consumate our union. Close\l"
	.string "your eyes, {PLAYER}, relax. {LEAF} loves you.$"

Palmae_RentalHouse_Text_Leaf8::
# 325 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "Teehee! Now that we're official I think\n"
	.string "we should enjoy a honeymoon. Indianus\l"
	.string "and Mew can wait. We ought to celebrate\l"
	.string "our new relationship the proper way. I\l"
	.string "know! Let's go take suring lessons in\l"
	.string "Tranquilitas! The beach is romantic and\l"
	.string "there's a surfing school with a special\l"
	.string "for new couples. Let's go! I'll meet you\l"
	.string "there!$"

Palmae_RentalHouse_Text_GaveHeartScale::
# 337 "data/maps/Palmae_RentalHouse/scripts.pory"
	.string "{PLAYER} gave {LEAF} the heart scale.$"
