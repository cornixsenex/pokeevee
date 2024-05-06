Argo_MapScripts::
	.byte 0


Argo_EventScript_ExitWarp::
# 8 "data/maps/Argo/scripts.pory"
	lock
# 9 "data/maps/Argo/scripts.pory"
	warpsilent MAP_MARE_S5, 45, 45
# 10 "data/maps/Argo/scripts.pory"
	waitstate
# 11 "data/maps/Argo/scripts.pory"
	release
	end


Argo_Script_Castor::
# 17 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Castor, MSGBOX_NPC
# 18 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Dioscuri, MSGBOX_NPC
	end


Argo_Script_Pollux::
# 24 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Pollux, MSGBOX_NPC
	end


Argo_Script_Theseus::
# 29 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Theseus, MSGBOX_NPC
	end


Argo_Script_Orpheus::
# 34 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Orpheus, MSGBOX_NPC
	end


Argo_Script_Philoctetes::
# 39 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Philoctetes, MSGBOX_NPC
	end


Argo_Script_Jason::
# 45 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Jason1, MSGBOX_NPC
# 46 "data/maps/Argo/scripts.pory"
	checkitem ITEM_COLCHIS_MAP, 1
# 47 "data/maps/Argo/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Argo_Script_Jason_2
Argo_Script_Jason_1:
	end

Argo_Script_Jason_2:
# 49 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Jason2, MSGBOX_YESNO
# 50 "data/maps/Argo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Argo_Script_Jason_4
# 54 "data/maps/Argo/scripts.pory"
	msgbox Argo_Text_Jason3, MSGBOX_NPC
	goto Argo_Script_Jason_1

Argo_Script_Jason_4:
# 51 "data/maps/Argo/scripts.pory"
	call Argo_Script_BeginAdventure
	goto Argo_Script_Jason_1


Argo_Script_BeginAdventure::
# 71 "data/maps/Argo/scripts.pory"
	setvar VAR_ARGO_BOAT_STATE, 1
# 72 "data/maps/Argo/scripts.pory"
	warp MAP_MARE_S5, 45, 45
# 73 "data/maps/Argo/scripts.pory"
	waitstate
	end


Argo_Text_Castor::
# 77 "data/maps/Argo/scripts.pory"
	.string "Though Pollux is my twin I was born\l"
	.string "first and it was I who first leaped off\l"
	.string "the boat when we were brought back to\l"
	.string "the Doliones. They had recieved us\l"
	.string "earlier as friends, but in the dark\l"
	.string "under the hidden moon mistook us for a\l"
	.string "band of vagabonds. We broke them where\l"
	.string "they stood, and I broke their king.$"

Argo_Text_Pollux::
# 81 "data/maps/Argo/scripts.pory"
	.string "Truly Castor and I are twin brothers\l"
	.string "but it was I who first raised pokemon.\l"
	.string "When Argo wrecked among the Bebryces\l"
	.string "and all our crew taken to Amycus I was\l"
	.string "the one who won our liberty by\l"
	.string "defeating Amycus in combat.$"

Argo_Text_Dioscuri::
# 86 "data/maps/Argo/scripts.pory"
	.string "I often think of home. I miss Helen, my\l"
	.string "lovely sister, and Nestor, my dad but\l"
	.string "both of us swore an most sacred oath to\l"
	.string "journey with Jason on the Argo until we\l"
	.string "reach Colchis and win the fleece.$"

Argo_Text_Theseus::
# 90 "data/maps/Argo/scripts.pory"
	.string "This wretched boat is such a sausage\l"
	.string "fest! Five days of joy we spent on that\l"
	.string "Island Lemnos where each of us enjoyed\l"
	.string "many women before mighty Hercules bid\l"
	.string "us leave. Why couldn't Jason let us\l"
	.string "bring a handful of women to have some\l"
	.string "fun?$"

Argo_Text_Orpheus::
# 94 "data/maps/Argo/scripts.pory"
	.string "Lost at sea the compass spins\n"
	.string "Eurydice where have you been\n"
	.string "I travel with The Argo's quest\n"
	.string "but your're the beating in my chest\n"
	.string "Lost aboard windswept and free\n"
	.string "'Eurydice' my only plea\n"
	.string "That by the sun, the moon, and stars\n"
	.string "You love me everywhere you are.$"

Argo_Text_Philoctetes::
# 100 "data/maps/Argo/scripts.pory"
	.string "We're lost and have been lost since\l"
	.string "Heracles went off in search of his\l"
	.string "beloved youth Hylas. That naive boy\l"
	.string "wandered too far in search of water and\l"
	.string "more than likely cracked his head on a\l"
	.string "rock and drowed at sea but knowing\l"
	.string "Heracles he won't quit the seach until\l"
	.string "hes swam 6 laps around Ocean.$"

Argo_Text_Jason1::
# 104 "data/maps/Argo/scripts.pory"
	.string "Though we be lost at sea we travel on\l"
	.string "until we reach Colchis. We started out\l"
	.string "swearing an oath on the docks of Bulbus\l"
	.string "to never quit until we have retrieved\l"
	.string "SHINY MAREEP for my wife Medea. We'll\l"
	.string "find the way forward, or die trying.$"

Argo_Text_Jason2::
# 108 "data/maps/Argo/scripts.pory"
	.string "What's this? You've found an ancient\l"
	.string "island map showing our position and\l"
	.string "Colchis too? Most noble friend, will you\l"
	.string "give me the map and join our quest to\l"
	.string "find SHINY MAREEP?$"

Argo_Text_Jason3::
# 112 "data/maps/Argo/scripts.pory"
	.string "We'll find our way without you in that\l"
	.string "case. Return if you decide to join the\l"
	.string "quest.$"

Argo_Text_BeginAdventure::
# 116 "data/maps/Argo/scripts.pory"
	.string "Many thanks friend with this map we will\l"
	.string "reach Colchis and win our prize: SHINY\l"
	.string "MAREEP. In order to become an Argonaut\l"
	.string "you first must swear the oath. Repeat\l"
	.string "these words: I swear to sail under\l"
	.string "Jason's command and serve the Argo\l"
	.string "even to my death until we have attained\l"
	.string "SHINY MAREEP. That being done let us\l"
	.string "set off at once. Assemble Argonauts! We\l"
	.string "sail at once!$"
