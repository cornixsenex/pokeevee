LoonixInsideReal_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LoonixInsideReal_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call LoonixInsideReal_OnWarp
	return


LoonixInsideReal_OnWarp::
	compare VAR_ROUTE101_STATE, 1
	goto_if_lt LoonixInsideReal_OnWarp_2
LoonixInsideReal_OnWarp_1:
	end

LoonixInsideReal_OnWarp_2:
	setobjectxyperm 1, 8, 6
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
	goto LoonixInsideReal_OnWarp_1


Watch_TV::
	lock
	msgbox Watch_TV_Text_0, MSGBOX_SIGN
	release
	end


LoonixInsideReal_EventScript_Statue::
	lock
	msgbox LoonixInsideReal_EventScript_Statue_Text_0
	release
	end


LoonixInsideReal_EventScript_Junk::
	lock
	msgbox LoonixInsideReal_EventScript_Junk_Text_0
	release
	end


LoonixInsideReal_EventScript_Special::
	lock
	showmonpic SPECIES_KRABBY, 10, 3
	msgbox LoonixInsideReal_EventScript_Special_Text_0
	hidemonpic
	release
	end


LoonixInsideReal_EventScript_GrandmaTV::
	lockall
	applymovement 1, LoonixInsideReal_Movement_GrandmaUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerToGma
	waitmovement 0
	msgbox LoonixInsideReal_EventScript_GrandmaTV_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	load_field_pic 2, 190, 98
	msgbox LoonixInsideReal_EventScript_GrandmaTV_Text_1
	destroy_field_pic 2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_GrandmaTV
	waitmovement 0
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
	waitmovement 0
	msgbox LoonixInsideReal_Text_GrandmaTVSpeech
	closemessage
	applymovement 1, LoonixInsideReal_Movement_GrandmaMono
	waitmovement 0
	msgbox LoonixInsideReal_Text_GrandmaMono
	closemessage
	applymovement 1, LoonixInsideReal_Movement_GrandmaLeft
	waitmovement 0
	msgbox LoonixInsideReal_Text_GrandmaToBed
	closemessage
	applymovement 1, LoonixInsideReal_Movement_GrandmaBed
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PlayerBed
	waitmovement 0
	addvar VAR_ROUTE101_STATE, 1
	msgbox LoonixInsideReal_Text_GrandmaBed
	setrespawn HEAL_LOCATION_GRANDMAS_CABIN
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	releaseall
	end


LoonixInsideReal_EventScript_PreventExit::
	lockall
	msgbox LoonixInsideReal_EventScript_PreventExit_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, LoonixInsideReal_Movement_PreventExit
	waitmovement 0
	releaseall
	end


LoonixInsideReal_EventScript_Grandma::
	lockall
	compare VAR_ROUTE101_STATE, 1
	goto_if_eq LoonixInsideReal_EventScript_Grandma_2
	msgbox LoonixInsideReal_EventScript_Grandma_Text_1
LoonixInsideReal_EventScript_Grandma_1:
	releaseall
	end

LoonixInsideReal_EventScript_Grandma_2:
	msgbox LoonixInsideReal_EventScript_Grandma_Text_0
	goto LoonixInsideReal_EventScript_Grandma_1


LoonixInsideReal_Movement_PreventExit:
	face_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_down
	step_end

LoonixInsideReal_Movement_GrandmaTV:
	walk_down
	walk_right
	walk_right
	step_end

LoonixInsideReal_Movement_GrandmaBed:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	face_down
	step_end

LoonixInsideReal_Movement_PlayerBed:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	face_right
	step_end

LoonixInsideReal_Movement_GrandmaUp:
	face_up
	step_end

LoonixInsideReal_Movement_GrandmaLeft:
	face_left
	step_end

LoonixInsideReal_Movement_GrandmaMono:
	face_down
	step_end

LoonixInsideReal_Movement_PlayerToGma:
	walk_down
	walk_down
	walk_down
	step_end

Watch_TV_Text_0:
	.string "MEW has returned!$"

LoonixInsideReal_EventScript_Statue_Text_0:
	.string "This is the statue they sent us after\n"
	.string "Dad left...\p"
	.string "Grandma must have forgotten to polish\n"
	.string "it.$"

LoonixInsideReal_EventScript_Junk_Text_0:
	.string "Here's another pile of junk grandma\n"
	.string "left lying around.$"

LoonixInsideReal_EventScript_Special_Text_0:
	.string "What's for dinner?$"

LoonixInsideReal_EventScript_GrandmaTV_Text_0:
	.string "Oh {PLAYER}!$"

LoonixInsideReal_EventScript_GrandmaTV_Text_1:
	.string "Come here sweetie.$"

LoonixInsideReal_EventScript_PreventExit_Text_0:
	.string "You don't have a Pokemon yet!$"

LoonixInsideReal_EventScript_Grandma_Text_0:
	.string "{PLAYER}, take our Pokemon from the\n"
	.string "backyard to protect you on the road.$"

LoonixInsideReal_EventScript_Grandma_Text_1:
	.string "Grandma?\p"
	.string "She must be sleeping...$"

LoonixInsideReal_Text_GrandmaTVSpeech::
	.string "It's all over the news that Mew's\n"
	.string "returned!\n"
	.string "My boy, this is a God sent mircale.\p"
	.string "Just once...to see the living shape of\n"
	.string "Mew...there's nothing more of life that\l"
	.string "I would ask.$"

LoonixInsideReal_Text_GrandmaMono::
	.string "But now the strength of life has left\n"
	.string "these bones, and I can hardly walk\l"
	.string "across the yard. Saeclara City is too\l"
	.string "far away for this old crow to fly.$"

LoonixInsideReal_Text_GrandmaToBed::
	.string "I'll have to stay.\p"
	.string "{PLAYER} will you help me get into\n"
	.string "bed?$"

LoonixInsideReal_Text_GrandmaBed::
	.string "Thank you.$"
