Phoenix_MapScripts::
# 13 "data/maps/Phoenix/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Phoenix_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_TryPrimePartyTrigger
	return


Phoenix_EventScript_TryPrimePartyTrigger::
# 19 "data/maps/Phoenix/scripts.pory"
	goto_if_unset FLAG_PHOENIX_PARTY, Phoenix_EventScript_TryPrimePartyTrigger_1
	return

Phoenix_EventScript_TryPrimePartyTrigger_1:
# 20 "data/maps/Phoenix/scripts.pory"
	setvar VAR_UNI_STATE, 69
	return


Phoenix_EventScript_PartyTrigger::
# 25 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PHOENIX_PARTY, Phoenix_EventScript_PartyTrigger_1
# 28 "data/maps/Phoenix/scripts.pory"
	lock
# 29 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 30 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 31 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 32 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 33 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 34 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 35 "data/maps/Phoenix/scripts.pory"
	closemessage
# 36 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_PartyTrigger_5
# 39 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 40 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 41 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
Phoenix_EventScript_PartyTrigger_4:
# 43 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_PartyTrigger_1:
	end

Phoenix_EventScript_PartyTrigger_5:
# 37 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_PartyTrigger_4


Phoenix_EventScript_FratBoy1::
# 49 "data/maps/Phoenix/scripts.pory"
	lock
# 50 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy1
# 51 "data/maps/Phoenix/scripts.pory"
	closemessage
# 52 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy2::
# 57 "data/maps/Phoenix/scripts.pory"
	lock
# 58 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 59 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy2
# 60 "data/maps/Phoenix/scripts.pory"
	closemessage
# 61 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy3::
# 66 "data/maps/Phoenix/scripts.pory"
	lock
# 67 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoy3
# 68 "data/maps/Phoenix/scripts.pory"
	closemessage
# 69 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratGirl1::
# 74 "data/maps/Phoenix/scripts.pory"
	lock
# 75 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 76 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl1
# 77 "data/maps/Phoenix/scripts.pory"
	closemessage
# 78 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratGirl2::
# 83 "data/maps/Phoenix/scripts.pory"
	lock
# 84 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratGirl2
# 85 "data/maps/Phoenix/scripts.pory"
	closemessage
# 86 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_Leaf::
# 91 "data/maps/Phoenix/scripts.pory"
	lock
# 92 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Leaf
# 93 "data/maps/Phoenix/scripts.pory"
	closemessage
# 94 "data/maps/Phoenix/scripts.pory"
	release
	end


Phoenix_EventScript_FratBoy::
# 100 "data/maps/Phoenix/scripts.pory"
	lock
# 101 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 102 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratBoyBlockA
# 103 "data/maps/Phoenix/scripts.pory"
	closemessage
# 104 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_FratBoy_2
Phoenix_EventScript_FratBoy_1:
# 107 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_FaceDown
# 108 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 109 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_FratBoy_2:
# 105 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_FratBoy_1


Phoenix_EventScript_ClearParty::
# 114 "data/maps/Phoenix/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 115 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 116 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_FratPartyClear
# 117 "data/maps/Phoenix/scripts.pory"
	closemessage
# 118 "data/maps/Phoenix/scripts.pory"
	fadescreen 1
# 119 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_PARTY
# 120 "data/maps/Phoenix/scripts.pory"
	setvar VAR_UNI_STATE, 0
# 121 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 122 "data/maps/Phoenix/scripts.pory"
	removeobject 5
# 123 "data/maps/Phoenix/scripts.pory"
	removeobject 1
# 124 "data/maps/Phoenix/scripts.pory"
	removeobject 2
# 125 "data/maps/Phoenix/scripts.pory"
	removeobject 8
# 126 "data/maps/Phoenix/scripts.pory"
	removeobject 3
# 127 "data/maps/Phoenix/scripts.pory"
	removeobject 7
# 128 "data/maps/Phoenix/scripts.pory"
	removeobject 4
# 129 "data/maps/Phoenix/scripts.pory"
	removeobject 6
# 130 "data/maps/Phoenix/scripts.pory"
	playse SE_WARP_OUT
# 131 "data/maps/Phoenix/scripts.pory"
	waitse
# 132 "data/maps/Phoenix/scripts.pory"
	call Phoenix_EventScript_LeafApproach
	return


Phoenix_EventScript_LeafApproach::
# 137 "data/maps/Phoenix/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 138 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Phoenix_EventScript_LeafApproach_2
# 141 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach2
# 142 "data/maps/Phoenix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
Phoenix_EventScript_LeafApproach_1:
# 144 "data/maps/Phoenix/scripts.pory"
	fadescreen 0
# 145 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 146 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_LeafExit
# 147 "data/maps/Phoenix/scripts.pory"
	closemessage
# 148 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafExit
# 149 "data/maps/Phoenix/scripts.pory"
	waitmovement 0
# 150 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PHOENIX_LEAF
# 151 "data/maps/Phoenix/scripts.pory"
	removeobject 9
	return

Phoenix_EventScript_LeafApproach_2:
# 139 "data/maps/Phoenix/scripts.pory"
	applymovement 9, Phoenix_Movement_LeafApproach1
	goto Phoenix_EventScript_LeafApproach_1


Phoenix_EventScript_Pledge::
# 156 "data/maps/Phoenix/scripts.pory"
	lock
# 157 "data/maps/Phoenix/scripts.pory"
	faceplayer
# 158 "data/maps/Phoenix/scripts.pory"
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_Pledge_2
# 162 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge1
# 163 "data/maps/Phoenix/scripts.pory"
	closemessage
# 164 "data/maps/Phoenix/scripts.pory"
	checkitem ITEM_KEG
# 165 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_EventScript_Pledge_5
Phoenix_EventScript_Pledge_1:
# 178 "data/maps/Phoenix/scripts.pory"
	release
	end

Phoenix_EventScript_Pledge_2:
# 159 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 160 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_5:
# 166 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2, MSGBOX_YESNO
# 167 "data/maps/Phoenix/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Phoenix_EventScript_Pledge_7
# 173 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge2No
# 174 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_7:
# 168 "data/maps/Phoenix/scripts.pory"
	removeitem ITEM_KEG
# 169 "data/maps/Phoenix/scripts.pory"
	setflag FLAG_PLEDGE_HAS_KEG
# 170 "data/maps/Phoenix/scripts.pory"
	msgbox Phoenix_Text_Pledge3
# 171 "data/maps/Phoenix/scripts.pory"
	closemessage
	goto Phoenix_EventScript_Pledge_1


# 182 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach1:
# 183 "data/maps/Phoenix/scripts.pory"
	walk_right
# 183 "data/maps/Phoenix/scripts.pory"
	walk_right
# 183 "data/maps/Phoenix/scripts.pory"
	walk_right
# 183 "data/maps/Phoenix/scripts.pory"
	walk_right
# 184 "data/maps/Phoenix/scripts.pory"
	walk_up
# 185 "data/maps/Phoenix/scripts.pory"
	face_left
	step_end

# 188 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafApproach2:
# 189 "data/maps/Phoenix/scripts.pory"
	walk_right
# 189 "data/maps/Phoenix/scripts.pory"
	walk_right
# 189 "data/maps/Phoenix/scripts.pory"
	walk_right
	step_end

# 192 "data/maps/Phoenix/scripts.pory"
Phoenix_Movement_LeafExit:
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
# 193 "data/maps/Phoenix/scripts.pory"
	walk_up
	step_end

Phoenix_Text_Pledge1::
# 197 "data/maps/Phoenix/scripts.pory"
	.string "This is no good! I want to join the frat\n"
	.string "but they won't let me join their big\l"
	.string "party. Maybe if I threw a big party here\l"
	.string "They'd think I'm cool and let me join\l"
	.string "there frat but I don't have a Keg... What\l"
	.string "can I do?$"

Phoenix_Text_Pledge2::
# 201 "data/maps/Phoenix/scripts.pory"
	.string "No way! You have a keg? Is that for me?$"

Phoenix_Text_Pledge2No::
# 205 "data/maps/Phoenix/scripts.pory"
	.string "Whatever can I do to join the frat?$"

Phoenix_Text_Pledge3::
# 209 "data/maps/Phoenix/scripts.pory"
	.string "Thank you so much! This is gonna be\n"
	.string "sweet! Go tell the boys party at the\l"
	.string "frat house. I'll prepare everything for\l"
	.string "the party.$"

Phoenix_Text_FratBoyBlockA::
# 213 "data/maps/Phoenix/scripts.pory"
	.string "Hey watch out bro! We're mud wrestling\n"
	.string "here!$"

Phoenix_Text_LeafExit::
# 217 "data/maps/Phoenix/scripts.pory"
	.string "I had such a good time at the party.\n"
	.string "Cmon let's head inside and find Indy.$"

Phoenix_Text_FratBoy1::
# 221 "data/maps/Phoenix/scripts.pory"
	.string "I'm Andre. Can I blaze chronic with you?$"

Phoenix_Text_FratBoy2::
# 225 "data/maps/Phoenix/scripts.pory"
	.string "Lets go! Lets fucking go! Who took my\n"
	.string "beer?$"

Phoenix_Text_FratBoy3::
# 229 "data/maps/Phoenix/scripts.pory"
	.string "That's right. I party with Dre all the\n"
	.string "time.$"

Phoenix_Text_FratGirl1::
# 233 "data/maps/Phoenix/scripts.pory"
	.string "This one time at band camp I shoved a\n"
	.string "flute all the way up my pussy. LOL!$"

Phoenix_Text_FratGirl2::
# 237 "data/maps/Phoenix/scripts.pory"
	.string "How big is your account? You have a\n"
	.string "car?$"

Phoenix_Text_Leaf::
# 241 "data/maps/Phoenix/scripts.pory"
	.string "Hey Andre so you know you are awesome.\n"
	.string "I rarely feel this kind of connection,\l"
	.string "only to someone as special as you.$"

Phoenix_Text_FratPartyClear::
# 245 "data/maps/Phoenix/scripts.pory"
	.string "What's that? A party? With an open\n"
	.string "keg!? Dear friends lets go! Follow me!\p"
	.string "House party!$"
