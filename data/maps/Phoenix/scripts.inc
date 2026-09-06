Phoenix_MapScripts::
# 16 "data/maps/Phoenix/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/Phoenix/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_eq Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_TryPrimePartyTrigger
	return

Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/Phoenix/scripts.pory"
	setvar VAR_UNI_STATE, 11
	goto Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Phoenix_EventScript_TryPrimePartyTrigger::
# 28 "data/maps/Phoenix/scripts.pory"
	goto_if_unset FLAG_PHOENIX_PARTY, Phoenix_EventScript_TryPrimePartyTrigger_1
	return

Phoenix_EventScript_TryPrimePartyTrigger_1:
# 29 "data/maps/Phoenix/scripts.pory"
	setvar VAR_TEMP_6, 1
	return


Phoenix_EventScript_PartyTrigger::
# 34 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PHOENIX_PARTY, Phoenix_EventScript_PartyTrigger_1
# 37 "data/maps/Phoenix/scripts.pory"
	lock
# 38 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 39 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 40 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 41 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 42 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 43 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 44 "data/maps/Phoenix/scripts.pory"
	closemessage
# 45 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_PartyTrigger_5
# 48 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 49 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 50 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
Phoenix_EventScript_PartyTrigger_4:
# 52 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_PartyTrigger_1:
	end

Phoenix_EventScript_PartyTrigger_5:
# 46 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_PartyTrigger_4


Phoenix_EventScript_FratBoy1::
# 58 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy1
# 59 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy2::
# 64 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 65 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy2
# 66 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy3::
# 71 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy3
# 72 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratGirl1::
# 77 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 78 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl1
# 79 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratGirl2::
# 84 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl2
# 85 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_Leaf::
# 90 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Leaf
# 91 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy::
# 97 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 98 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 99 "data/maps/Phoenix/scripts.pory"
	closemessage
# 100 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_FratBoy_2
Phoenix_EventScript_FratBoy_1:
# 103 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 104 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
	end

Phoenix_EventScript_FratBoy_2:
# 101 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_FratBoy_1


Phoenix_EventScript_ClearParty::
# 109 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 110 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 111 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratPartyClear
# 112 "data/maps/Phoenix/scripts.pory"
	closemessage
# 113 "data/maps/Phoenix/scripts.pory"
	fadescreenswapbuffers 1
# 114 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_PARTY
# 115 "data/maps/Phoenix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 116 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 117 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 118 "data/maps/Phoenix/scripts.pory"
	removeobject 1
# 119 "data/maps/Phoenix/scripts.pory"
	removeobject 2
# 120 "data/maps/Phoenix/scripts.pory"
	removeobject 8
# 121 "data/maps/Phoenix/scripts.pory"
	removeobject 3
# 122 "data/maps/Phoenix/scripts.pory"
	removeobject 7
# 123 "data/maps/Phoenix/scripts.pory"
	removeobject 4
# 124 "data/maps/Phoenix/scripts.pory"
	removeobject 6
# 125 "data/maps/Phoenix/scripts.pory"
	playse SE_WARP_OUT
# 126 "data/maps/Phoenix/scripts.pory"
	waitse
# 127 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_LeafApproach
	return


Phoenix_EventScript_LeafApproach::
# 132 "data/maps/Phoenix/scripts.pory"
	setobjectxy 9, 35, 19
# 133 "data/maps/Phoenix/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
# 134 "data/maps/Phoenix/scripts.pory"
	setobjectxy 11, 34, 19
# 135 "data/maps/Phoenix/scripts.pory"
	setobjectmovementtype 11, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 136 "data/maps/Phoenix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 137 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Phoenix_EventScript_LeafApproach_2
# 141 "data/maps/Phoenix/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 142 "data/maps/Phoenix/scripts.pory"
	turnobject 9, DIR_EAST
Phoenix_EventScript_LeafApproach_1:
# 144 "data/maps/Phoenix/scripts.pory"
	fadescreenswapbuffers 0
# 145 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_LeafExit
# 146 "data/maps/Phoenix/scripts.pory"
	closemessage
# 147 "data/maps/Phoenix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 148 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq Phoenix_EventScript_LeafApproach_6
Phoenix_EventScript_LeafApproach_5:
# 153 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Common_Movement_WalkUp
# 154 "data/maps/Phoenix/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 155 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 156 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Common_Movement_WalkUp6
# 157 "data/maps/Phoenix/scripts.pory"
	applymovement 11, Common_Movement_WalkUp6
# 158 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 159 "data/maps/Phoenix/scripts.pory"
	removeobject 9
# 160 "data/maps/Phoenix/scripts.pory"
	removeobject 11
	return

Phoenix_EventScript_LeafApproach_2:
# 138 "data/maps/Phoenix/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 139 "data/maps/Phoenix/scripts.pory"
	turnobject 9, DIR_NORTH
	goto Phoenix_EventScript_LeafApproach_1

Phoenix_EventScript_LeafApproach_6:
# 149 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Common_Movement_WalkRight
# 150 "data/maps/Phoenix/scripts.pory"
	applymovement 11, Common_Movement_WalkRight
# 151 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
	goto Phoenix_EventScript_LeafApproach_5


Phoenix_EventScript_Pledge::
# 165 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 166 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_Pledge_2
# 170 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge1
# 171 "data/maps/Phoenix/scripts.pory"
	checkitem ITEM_KEG
# 172 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_EventScript_Pledge_5
# 185 "data/maps/Phoenix/scripts.pory"
	closemessage
Phoenix_EventScript_Pledge_1:
	end

Phoenix_EventScript_Pledge_2:
# 167 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 168 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_5:
# 173 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2, MSGBOX_YESNO
# 174 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phoenix_EventScript_Pledge_8
# 181 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2No
# 182 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_8:
# 175 "data/maps/Phoenix/scripts.pory"
	removeitem ITEM_KEG
# 176 "data/maps/Phoenix/scripts.pory"
	msgbox Palmae_Text_GaveKeg
# 177 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PLEDGE_HAS_KEG
# 178 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 179 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1


# 191 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach1:
# 192 "data/maps/Phoenix/scripts.pory"
	walk_right
# 192 "data/maps/Phoenix/scripts.pory"
	walk_right
# 192 "data/maps/Phoenix/scripts.pory"
	walk_right
# 192 "data/maps/Phoenix/scripts.pory"
	walk_right
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 194 "data/maps/Phoenix/scripts.pory"
	face_left
	step_end

# 197 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach2:
# 198 "data/maps/Phoenix/scripts.pory"
	walk_right
# 198 "data/maps/Phoenix/scripts.pory"
	walk_right
# 198 "data/maps/Phoenix/scripts.pory"
	walk_right
	step_end

Phoenix_Text_Pledge1::
# 203 "data/maps/Phoenix/scripts.pory"
	.string "This is no good! I want to join the frat\n"
	.string "but they won't let me join their big\l"
	.string "party. Maybe if I threw a big party here\l"
	.string "They'd think I'm cool and let me join\l"
	.string "there frat but I don't have a Keg... What\l"
	.string "can I do?$"

Phoenix_Text_Pledge2::
# 207 "data/maps/Phoenix/scripts.pory"
	.string "No way! You have a keg? Is that for me?$"

Phoenix_Text_Pledge2No::
# 211 "data/maps/Phoenix/scripts.pory"
	.string "Whatever can I do to join the frat?$"

Phoenix_Text_Pledge3::
# 215 "data/maps/Phoenix/scripts.pory"
	.string "Thank you so much! This is gonna be\n"
	.string "sweet! Go tell the boys party at the\l"
	.string "frat house. I'll prepare everything for\l"
	.string "the party.$"

Phoenix_Text_FratBoyBlockA::
# 219 "data/maps/Phoenix/scripts.pory"
	.string "Hey watch out bro! We're mud wrestling\n"
	.string "here!$"

Phoenix_Text_LeafExit::
# 223 "data/maps/Phoenix/scripts.pory"
	.string "I had such a good time at the party.\n"
	.string "Cmon let's head inside and find Indy.$"

Phoenix_Text_FratBoy1::
# 227 "data/maps/Phoenix/scripts.pory"
	.string "I'm Andre. Can I blaze chronic with you?$"

Phoenix_Text_FratBoy2::
# 231 "data/maps/Phoenix/scripts.pory"
	.string "Lets go! Lets fucking go! Who took my\n"
	.string "beer?$"

Phoenix_Text_FratBoy3::
# 235 "data/maps/Phoenix/scripts.pory"
	.string "That's right. I party with Dre all the\n"
	.string "time.$"

Phoenix_Text_FratGirl1::
# 239 "data/maps/Phoenix/scripts.pory"
	.string "This one time at band camp I shoved a\n"
	.string "flute all the way up my pussy. LOL!$"

Phoenix_Text_FratGirl2::
# 243 "data/maps/Phoenix/scripts.pory"
	.string "How big is your account? You have a\n"
	.string "car?$"

Phoenix_Text_Leaf::
# 247 "data/maps/Phoenix/scripts.pory"
	.string "Hey Andre so you know you are awesome.\n"
	.string "I rarely feel this kind of connection,\l"
	.string "only to someone as special as you.$"

Phoenix_Text_FratPartyClear::
# 251 "data/maps/Phoenix/scripts.pory"
	.string "What's that? A party? With an open\n"
	.string "keg!? Dear friends lets go! Follow me!\p"
	.string "House party!$"

Palmae_Text_GaveKeg::
# 255 "data/maps/Phoenix/scripts.pory"
	.string "{PLAYER} gave the frat bro the keg.$"
