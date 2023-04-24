Phoenix_MapScripts::
	.byte 0


Phoenix_EventScript_PartyTrigger::
	goto_if_set FLAG_PHOENIX_PARTY, Phoenix_EventScript_PartyTrigger_1
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Phoenix_Text_FratBoyBlockA
	closemessage
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_PartyTrigger_5
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
Phoenix_EventScript_PartyTrigger_4:
	release
	end

Phoenix_EventScript_PartyTrigger_1:
	end

Phoenix_EventScript_PartyTrigger_5:
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_PartyTrigger_4


Phoenix_EventScript_FratBoy1::
	lock
	msgbox Phoenix_Text_FratBoy1
	closemessage
	release
	end


Phoenix_EventScript_FratBoy2::
	lock
	faceplayer
	msgbox Phoenix_Text_FratBoy2
	closemessage
	release
	end


Phoenix_EventScript_FratBoy3::
	lock
	msgbox Phoenix_Text_FratBoy3
	closemessage
	release
	end


Phoenix_EventScript_FratGirl1::
	lock
	faceplayer
	msgbox Phoenix_Text_FratGirl1
	closemessage
	release
	end


Phoenix_EventScript_FratGirl2::
	lock
	msgbox Phoenix_Text_FratGirl2
	closemessage
	release
	end


Phoenix_EventScript_Leaf::
	lock
	msgbox Phoenix_Text_Leaf
	closemessage
	release
	end


Phoenix_EventScript_FratBoy::
	lock
	faceplayer
	msgbox Phoenix_Text_FratBoyBlockA
	closemessage
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_FratBoy_2
Phoenix_EventScript_FratBoy_1:
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Phoenix_EventScript_FratBoy_2:
	call Phoenix_EventScript_ClearParty
	goto Phoenix_EventScript_FratBoy_1


Phoenix_EventScript_ClearParty::
	setflag FLAG_PHOENIX_PARTY
	removeobject 5
	removeobject 5
	removeobject 1
	removeobject 2
	removeobject 8
	removeobject 3
	removeobject 7
	removeobject 4
	removeobject 6
	call Phoenix_EventScript_LeafApproach
	return


Phoenix_EventScript_LeafApproach::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Phoenix_EventScript_LeafApproach_2
	applymovement 9, Phoenix_Movement_LeafApproach2
Phoenix_EventScript_LeafApproach_1:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Phoenix_Text_LeafExit
	closemessage
	goto_if_set FLAG_TEMP_6, Phoenix_EventScript_LeafApproach_6
	applymovement 9, Phoenix_Movement_LeafExitB
Phoenix_EventScript_LeafApproach_5:
	waitmovement 0
	setflag FLAG_PHOENIX_LEAF
	removeobject 9
	return

Phoenix_EventScript_LeafApproach_2:
	applymovement 9, Phoenix_Movement_LeafApproach1
	setflag FLAG_TEMP_6
	goto Phoenix_EventScript_LeafApproach_1

Phoenix_EventScript_LeafApproach_6:
	applymovement 9, Phoenix_Movement_LeafExitA
	goto Phoenix_EventScript_LeafApproach_5


Phoenix_EventScript_Pledge::
	lock
	faceplayer
	goto_if_set FLAG_PLEDGE_HAS_KEG, Phoenix_EventScript_Pledge_2
	msgbox Phoenix_Text_Pledge1
	closemessage
	checkitem ITEM_KEG
	compare VAR_RESULT, TRUE
	goto_if_eq Phoenix_EventScript_Pledge_5
Phoenix_EventScript_Pledge_1:
	release
	end

Phoenix_EventScript_Pledge_2:
	msgbox Phoenix_Text_Pledge3
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_5:
	msgbox Phoenix_Text_Pledge2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Phoenix_EventScript_Pledge_7
	msgbox Phoenix_Text_Pledge2No
	closemessage
	goto Phoenix_EventScript_Pledge_1

Phoenix_EventScript_Pledge_7:
	removeitem ITEM_KEG
	setflag FLAG_PLEDGE_HAS_KEG
	msgbox Phoenix_Text_Pledge3
	closemessage
	goto Phoenix_EventScript_Pledge_1


Phoenix_Movement_LeafApproach1:
	walk_right
	walk_right
	step_end

Phoenix_Movement_LeafApproach2:
	walk_right
	walk_right
	walk_down
	face_right
	step_end

Phoenix_Movement_LeafExitA:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Phoenix_Movement_LeafExitB:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Phoenix_Text_Pledge1::
	.string "This is no good! I want to join the frat\n"
	.string "but they won't let me join their big\l"
	.string "party. Maybe if I threw a big party here\l"
	.string "They'd think I'm cool and let me join\l"
	.string "there frat but I don't have a Keg...\l"
	.string "What can I do?$"

Phoenix_Text_Pledge2::
	.string "No way! You have a keg? Is that for me?$"

Phoenix_Text_Pledge2No::
	.string "Whatever can I do to join the frat?$"

Phoenix_Text_Pledge3::
	.string "Thank you so much! This is gonna be\n"
	.string "sweet! Go tell the boys party at the\l"
	.string "frat house. I'll prepare everything for\l"
	.string "the party.$"

Phoenix_Text_FratBoyBlockA::
	.string "Hey watch out bro! We're mud wrestling\n"
	.string "here!$"

Phoenix_Text_LeafExit::
	.string "I had such a good time at the party.\n"
	.string "Cmon let's head inside and find Indy.$"

Phoenix_Text_FratBoy1::
	.string "I'm Andre. Can I blaze chronic with you?$"

Phoenix_Text_FratBoy2::
	.string "Lets go! Lets fucking go! Who took my\n"
	.string "beer?$"

Phoenix_Text_FratBoy3::
	.string "That's right. I party with Dre all the\n"
	.string "time.$"

Phoenix_Text_FratGirl1::
	.string "This one time at band camp I shoved a\n"
	.string "flute all the way up my pussy. LOL!$"

Phoenix_Text_FratGirl2::
	.string "How big is your account? You have a\n"
	.string "car?$"

Phoenix_Text_Leaf::
	.string "Hey Andre so you know you are awesome.\n"
	.string "I rarely feel this kind of connection,\l"
	.string "only to someone as special as you.$"
