Phoenix_MapScripts::
# 15 "data/maps/Phoenix/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/Phoenix/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_eq Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_TryPrimePartyTrigger
	return

Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/Phoenix/scripts.pory"
	setvar VAR_UNI_STATE, 11
	goto Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Phoenix_EventScript_TryPrimePartyTrigger::
# 27 "data/maps/Phoenix/scripts.pory"
	goto_if_unset FLAG_PHOENIX_PARTY, Phoenix_EventScript_TryPrimePartyTrigger_1
	return

Phoenix_EventScript_TryPrimePartyTrigger_1:
# 28 "data/maps/Phoenix/scripts.pory"
	setvar VAR_TEMP_6, 1
	return


Phoenix_EventScript_PartyTrigger::
# 33 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PHOENIX_PARTY, Phoenix_EventScript_PartyTrigger_1
# 36 "data/maps/Phoenix/scripts.pory"
	lock
# 37 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 38 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 39 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 40 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 41 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 42 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 43 "data/maps/Phoenix/scripts.pory"
	closemessage
# 44 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_PartyTrigger_5
# 47 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 48 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 49 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
Phoenix_EventScript_PartyTrigger_4:
# 51 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_PartyTrigger_1:
	end

Phoenix_EventScript_PartyTrigger_5:
# 45 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_PartyTrigger_4


Phoenix_EventScript_FratBoy1::
# 57 "data/maps/Phoenix/scripts.pory"
	lock
# 58 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy1
# 59 "data/maps/Phoenix/scripts.pory"
	closemessage
# 60 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy2::
# 65 "data/maps/Phoenix/scripts.pory"
	lock
# 66 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 67 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy2
# 68 "data/maps/Phoenix/scripts.pory"
	closemessage
# 69 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy3::
# 74 "data/maps/Phoenix/scripts.pory"
	lock
# 75 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy3
# 76 "data/maps/Phoenix/scripts.pory"
	closemessage
# 77 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratGirl1::
# 82 "data/maps/Phoenix/scripts.pory"
	lock
# 83 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 84 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl1
# 85 "data/maps/Phoenix/scripts.pory"
	closemessage
# 86 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratGirl2::
# 91 "data/maps/Phoenix/scripts.pory"
	lock
# 92 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl2
# 93 "data/maps/Phoenix/scripts.pory"
	closemessage
# 94 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_Leaf::
# 99 "data/maps/Phoenix/scripts.pory"
	lock
# 100 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Leaf
# 101 "data/maps/Phoenix/scripts.pory"
	closemessage
# 102 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy::
# 108 "data/maps/Phoenix/scripts.pory"
	lock
# 109 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 110 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 111 "data/maps/Phoenix/scripts.pory"
	closemessage
# 112 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_FratBoy_2
Phoenix_EventScript_FratBoy_1:
# 115 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 116 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 117 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_FratBoy_2:
# 113 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_FratBoy_1


Phoenix_EventScript_ClearParty::
# 122 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 123 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 124 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratPartyClear
# 125 "data/maps/Phoenix/scripts.pory"
	closemessage
# 126 "data/maps/Phoenix/scripts.pory"
	fadescreen 1
# 127 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_PARTY
# 128 "data/maps/Phoenix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 129 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 130 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 131 "data/maps/Phoenix/scripts.pory"
	removeobject 1
# 132 "data/maps/Phoenix/scripts.pory"
	removeobject 2
# 133 "data/maps/Phoenix/scripts.pory"
	removeobject 8
# 134 "data/maps/Phoenix/scripts.pory"
	removeobject 3
# 135 "data/maps/Phoenix/scripts.pory"
	removeobject 7
# 136 "data/maps/Phoenix/scripts.pory"
	removeobject 4
# 137 "data/maps/Phoenix/scripts.pory"
	removeobject 6
# 138 "data/maps/Phoenix/scripts.pory"
	playse SE_WARP_OUT
# 139 "data/maps/Phoenix/scripts.pory"
	waitse
# 140 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_LeafApproach
	return


Phoenix_EventScript_LeafApproach::
# 145 "data/maps/Phoenix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 146 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Phoenix_EventScript_LeafApproach_2
# 149 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach2
# 150 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
Phoenix_EventScript_LeafApproach_1:
# 152 "data/maps/Phoenix/scripts.pory"
	fadescreen 0
# 153 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 154 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_LeafExit
# 155 "data/maps/Phoenix/scripts.pory"
	closemessage
# 156 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafExit
# 157 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 158 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_LEAF
# 159 "data/maps/Phoenix/scripts.pory"
	removeobject 9
	return

Phoenix_EventScript_LeafApproach_2:
# 147 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach1
	goto Phoenix_EventScript_LeafApproach_1


Phoenix_Script_Jigglypuff::
# 164 "data/maps/Phoenix/scripts.pory"
	lock
# 165 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 166 "data/maps/Phoenix/scripts.pory"
	playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
# 167 "data/maps/Phoenix/scripts.pory"
	waitmoncry
# 168 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_Pledge::
# 173 "data/maps/Phoenix/scripts.pory"
	lock
# 174 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 175 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_Pledge_2
# 179 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge1
# 180 "data/maps/Phoenix/scripts.pory"
	closemessage
# 181 "data/maps/Phoenix/scripts.pory"
	checkitem ITEM_KEG
# 182 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_EventScript_Pledge_5
Phoenix_EventScript_Pledge_1:
# 195 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_Pledge_2:
# 176 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 177 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_5:
# 183 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2, MSGBOX_YESNO
# 184 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phoenix_EventScript_Pledge_7
# 190 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2No
# 191 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_7:
# 185 "data/maps/Phoenix/scripts.pory"
	removeitem ITEM_KEG
# 186 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PLEDGE_HAS_KEG
# 187 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 188 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1


# 199 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach1:
# 200 "data/maps/Phoenix/scripts.pory"
	walk_right
# 200 "data/maps/Phoenix/scripts.pory"
	walk_right
# 200 "data/maps/Phoenix/scripts.pory"
	walk_right
# 200 "data/maps/Phoenix/scripts.pory"
	walk_right
# 201 "data/maps/Phoenix/scripts.pory"
	walk_up
# 202 "data/maps/Phoenix/scripts.pory"
	face_left
	step_end

# 205 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach2:
# 206 "data/maps/Phoenix/scripts.pory"
	walk_right
# 206 "data/maps/Phoenix/scripts.pory"
	walk_right
# 206 "data/maps/Phoenix/scripts.pory"
	walk_right
	step_end

# 209 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafExit:
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
# 210 "data/maps/Phoenix/scripts.pory"
	walk_up
	step_end

Phoenix_Text_Pledge1::
# 214 "data/maps/Phoenix/scripts.pory"
	.string "This is no good! I want to join the frat\n"
	.string "but they won't let me join their big\l"
	.string "party. Maybe if I threw a big party here\l"
	.string "They'd think I'm cool and let me join\l"
	.string "there frat but I don't have a Keg... What\l"
	.string "can I do?$"

Phoenix_Text_Pledge2::
# 218 "data/maps/Phoenix/scripts.pory"
	.string "No way! You have a keg? Is that for me?$"

Phoenix_Text_Pledge2No::
# 222 "data/maps/Phoenix/scripts.pory"
	.string "Whatever can I do to join the frat?$"

Phoenix_Text_Pledge3::
# 226 "data/maps/Phoenix/scripts.pory"
	.string "Thank you so much! This is gonna be\n"
	.string "sweet! Go tell the boys party at the\l"
	.string "frat house. I'll prepare everything for\l"
	.string "the party.$"

Phoenix_Text_FratBoyBlockA::
# 230 "data/maps/Phoenix/scripts.pory"
	.string "Hey watch out bro! We're mud wrestling\n"
	.string "here!$"

Phoenix_Text_LeafExit::
# 234 "data/maps/Phoenix/scripts.pory"
	.string "I had such a good time at the party.\n"
	.string "Cmon let's head inside and find Indy.$"

Phoenix_Text_FratBoy1::
# 238 "data/maps/Phoenix/scripts.pory"
	.string "I'm Andre. Can I blaze chronic with you?$"

Phoenix_Text_FratBoy2::
# 242 "data/maps/Phoenix/scripts.pory"
	.string "Lets go! Lets fucking go! Who took my\n"
	.string "beer?$"

Phoenix_Text_FratBoy3::
# 246 "data/maps/Phoenix/scripts.pory"
	.string "That's right. I party with Dre all the\n"
	.string "time.$"

Phoenix_Text_FratGirl1::
# 250 "data/maps/Phoenix/scripts.pory"
	.string "This one time at band camp I shoved a\n"
	.string "flute all the way up my pussy. LOL!$"

Phoenix_Text_FratGirl2::
# 254 "data/maps/Phoenix/scripts.pory"
	.string "How big is your account? You have a\n"
	.string "car?$"

Phoenix_Text_Leaf::
# 258 "data/maps/Phoenix/scripts.pory"
	.string "Hey Andre so you know you are awesome.\n"
	.string "I rarely feel this kind of connection,\l"
	.string "only to someone as special as you.$"

Phoenix_Text_FratPartyClear::
# 262 "data/maps/Phoenix/scripts.pory"
	.string "What's that? A party? With an open\n"
	.string "keg!? Dear friends lets go! Follow me!\p"
	.string "House party!$"
