GatoCityS_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	switch VAR_SALTYSPITOON_STATE
	case 1, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	case 2, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	case 3, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	case 4, GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	call GatoCityS_SaltySpitoon_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	call GatoCityS_SaltySpitoon_OnWarp_Var1
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	call GatoCityS_SaltySpitoon_OnWarp_Var3
	return

GatoCityS_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	call GatoCityS_SaltySpitoon_OnWarp_Var4
	return


GatoCityS_SaltySpitoon_OnWarp_Var1::
	removeobject 3
	setobjectxyperm 4, 38, 6
	setobjectxyperm 5, 39, 6
	return


GatoCityS_SaltySpitoon_OnWarp_Var2::
	removeobject 3
	removeobject 4
	setobjectxyperm 5, 38, 6
	return


GatoCityS_SaltySpitoon_OnWarp_Var3::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_SaltySpitoon_OnWarp_Var4::
	removeobject 3
	removeobject 4
	removeobject 5
	setobjectxyperm 2, 36, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	return


GatoCityS_WatchSeller::
	lock
	msgbox GatoCityS_Text_WatchSeller1
	waitmessage
	pokemart GatoCityS_Mart_WatchSeller
	msgbox GatoCityS_Text_WatchSeller2
	release
	end


	.align 2
GatoCityS_Mart_WatchSeller:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

GatoCityS_EventScript_SaltySpitoon_M3::
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	lock
	switch VAR_SALTYSPITOON_STATE
	case 0, GatoCityS_EventScript_SaltySpitoon_M3_3
GatoCityS_EventScript_SaltySpitoon_M3_1:
	release
	return

GatoCityS_EventScript_SaltySpitoon_M3_3:
	msgbox GatoCityS_Text_SaltySPitoon_M3A
	closemessage
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 0
	delay 15
	load_field_pic 20, 190, 98
	msgbox GatoCityS_Text_SaltySPitoon_DM1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 18, 190, 98
	msgbox GatoCityS_Text_SaltySPitoon_M1A
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_0
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 18, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_1
	closemessage
	destroy_field_pic 20
	delay 5
	load_field_pic 20, 190, 98
	msgbox GatoCityS_EventScript_SaltySpitoon_M3_Text_2
	closemessage
	destroy_field_pic 20
	delay 5
	applymovement 2, Common_Movement_WalkLeft
	applymovement 3, Common_Movement_WalkLeft
	applymovement 4, Common_Movement_WalkLeft
	applymovement 5, Common_Movement_WalkLeft
	waitmovement 0
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	call GatoCityS_SaltySpitoon_OnWarp_Var1
	applymovement 2, Common_Movement_WalkRight
	waitmovement 0
	setvar VAR_SALTYSPITOON_STATE, 1
	goto GatoCityS_EventScript_SaltySpitoon_M3_1


GatoCityS_Movement_Pacer:
	walk_left
	walk_left
	walk_left
	walk_right
	walk_right
	walk_right
	step_end

GatoCityS_EventScript_SaltySpitoon_M3_Text_0:
	.string "Yeah, so?$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_1:
	.string "Without any milk.$"

GatoCityS_EventScript_SaltySpitoon_M3_Text_2:
	.string "Uhh, right this way.$"

GatoCityS_Text_WatchSeller1::
	.string "Hey kid, you wanna buy a watch? Come\n"
	.string "here.$"

GatoCityS_Text_WatchSeller2::
	.string "You don't know who I am! We never\n"
	.string "talked...$"

GatoCityS_Text_SaltySPitoon_M3A::
	.string "Huh? What was that? Did someone throw\n"
	.string "a piece of paper at me?$"

GatoCityS_Text_SaltySPitoon_DM1::
	.string "Welcome to the Salty Spitoon. How tough\n"
	.string "are ya?$"

GatoCityS_Text_SaltySPitoon_M1A::
	.string "How tough am I? I had a bowl of nails\n"
	.string "for breakfast!$"
