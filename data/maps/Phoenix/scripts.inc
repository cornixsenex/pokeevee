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
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	applymovement 5, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Phoenix_EventScript_PartyTrigger_1:
	end


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
