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
	msgbox Phoenix_Text_FratBoy1
# 58 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy2::
# 63 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 64 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy2
# 65 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy3::
# 70 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy3
# 71 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratGirl1::
# 76 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 77 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl1
# 78 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratGirl2::
# 83 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl2
# 84 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_Leaf::
# 89 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Leaf
# 90 "data/maps/Phoenix/scripts.pory"
	closemessage
	end


Phoenix_EventScript_FratBoy::
# 96 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 97 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 98 "data/maps/Phoenix/scripts.pory"
	closemessage
# 99 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_FratBoy_2
Phoenix_EventScript_FratBoy_1:
# 102 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 103 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
	end

Phoenix_EventScript_FratBoy_2:
# 100 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_FratBoy_1


Phoenix_EventScript_ClearParty::
# 108 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 109 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 110 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratPartyClear
# 111 "data/maps/Phoenix/scripts.pory"
	closemessage
# 112 "data/maps/Phoenix/scripts.pory"
	fadescreen 1
# 113 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_PARTY
# 114 "data/maps/Phoenix/scripts.pory"
	setvar VAR_TEMP_6, 0
# 115 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 116 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 117 "data/maps/Phoenix/scripts.pory"
	removeobject 1
# 118 "data/maps/Phoenix/scripts.pory"
	removeobject 2
# 119 "data/maps/Phoenix/scripts.pory"
	removeobject 8
# 120 "data/maps/Phoenix/scripts.pory"
	removeobject 3
# 121 "data/maps/Phoenix/scripts.pory"
	removeobject 7
# 122 "data/maps/Phoenix/scripts.pory"
	removeobject 4
# 123 "data/maps/Phoenix/scripts.pory"
	removeobject 6
# 124 "data/maps/Phoenix/scripts.pory"
	playse SE_WARP_OUT
# 125 "data/maps/Phoenix/scripts.pory"
	waitse
# 126 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_LeafApproach
	return


Phoenix_EventScript_LeafApproach::
# 131 "data/maps/Phoenix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 132 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Phoenix_EventScript_LeafApproach_2
# 135 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach2
# 136 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
Phoenix_EventScript_LeafApproach_1:
# 138 "data/maps/Phoenix/scripts.pory"
	fadescreen 0
# 139 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 140 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_LeafExit
# 141 "data/maps/Phoenix/scripts.pory"
	closemessage
# 142 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafExit
# 143 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 144 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_LEAF
# 145 "data/maps/Phoenix/scripts.pory"
	removeobject 9
	return

Phoenix_EventScript_LeafApproach_2:
# 133 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach1
	goto Phoenix_EventScript_LeafApproach_1


Phoenix_EventScript_Pledge::
# 150 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 151 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_Pledge_2
# 155 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge1
# 156 "data/maps/Phoenix/scripts.pory"
	closemessage
# 157 "data/maps/Phoenix/scripts.pory"
	checkitem ITEM_KEG
# 158 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_EventScript_Pledge_5
Phoenix_EventScript_Pledge_1:
	end

Phoenix_EventScript_Pledge_2:
# 152 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 153 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_5:
# 159 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2, MSGBOX_YESNO
# 160 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phoenix_EventScript_Pledge_7
# 166 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2No
# 167 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_7:
# 161 "data/maps/Phoenix/scripts.pory"
	removeitem ITEM_KEG
# 162 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PLEDGE_HAS_KEG
# 163 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 164 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1


# 174 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach1:
# 175 "data/maps/Phoenix/scripts.pory"
	walk_right
# 175 "data/maps/Phoenix/scripts.pory"
	walk_right
# 175 "data/maps/Phoenix/scripts.pory"
	walk_right
# 175 "data/maps/Phoenix/scripts.pory"
	walk_right
# 176 "data/maps/Phoenix/scripts.pory"
	walk_up
# 177 "data/maps/Phoenix/scripts.pory"
	face_left
	step_end

# 180 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach2:
# 181 "data/maps/Phoenix/scripts.pory"
	walk_right
# 181 "data/maps/Phoenix/scripts.pory"
	walk_right
# 181 "data/maps/Phoenix/scripts.pory"
	walk_right
	step_end

# 184 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafExit:
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	walk_up
	step_end

Phoenix_Text_Pledge1::
# 189 "data/maps/Phoenix/scripts.pory"
	.string "This is no good! I want to join the frat\n"
	.string "but they won't let me join their big\l"
	.string "party. Maybe if I threw a big party here\l"
	.string "They'd think I'm cool and let me join\l"
	.string "there frat but I don't have a Keg... What\l"
	.string "can I do?$"

Phoenix_Text_Pledge2::
# 193 "data/maps/Phoenix/scripts.pory"
	.string "No way! You have a keg? Is that for me?$"

Phoenix_Text_Pledge2No::
# 197 "data/maps/Phoenix/scripts.pory"
	.string "Whatever can I do to join the frat?$"

Phoenix_Text_Pledge3::
# 201 "data/maps/Phoenix/scripts.pory"
	.string "Thank you so much! This is gonna be\n"
	.string "sweet! Go tell the boys party at the\l"
	.string "frat house. I'll prepare everything for\l"
	.string "the party.$"

Phoenix_Text_FratBoyBlockA::
# 205 "data/maps/Phoenix/scripts.pory"
	.string "Hey watch out bro! We're mud wrestling\n"
	.string "here!$"

Phoenix_Text_LeafExit::
# 209 "data/maps/Phoenix/scripts.pory"
	.string "I had such a good time at the party.\n"
	.string "Cmon let's head inside and find Indy.$"

Phoenix_Text_FratBoy1::
# 213 "data/maps/Phoenix/scripts.pory"
	.string "I'm Andre. Can I blaze chronic with you?$"

Phoenix_Text_FratBoy2::
# 217 "data/maps/Phoenix/scripts.pory"
	.string "Lets go! Lets fucking go! Who took my\n"
	.string "beer?$"

Phoenix_Text_FratBoy3::
# 221 "data/maps/Phoenix/scripts.pory"
	.string "That's right. I party with Dre all the\n"
	.string "time.$"

Phoenix_Text_FratGirl1::
# 225 "data/maps/Phoenix/scripts.pory"
	.string "This one time at band camp I shoved a\n"
	.string "flute all the way up my pussy. LOL!$"

Phoenix_Text_FratGirl2::
# 229 "data/maps/Phoenix/scripts.pory"
	.string "How big is your account? You have a\n"
	.string "car?$"

Phoenix_Text_Leaf::
# 233 "data/maps/Phoenix/scripts.pory"
	.string "Hey Andre so you know you are awesome.\n"
	.string "I rarely feel this kind of connection,\l"
	.string "only to someone as special as you.$"

Phoenix_Text_FratPartyClear::
# 237 "data/maps/Phoenix/scripts.pory"
	.string "What's that? A party? With an open\n"
	.string "keg!? Dear friends lets go! Follow me!\p"
	.string "House party!$"
