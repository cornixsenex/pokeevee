Hospital5F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital5F_OnResume
	return


Hospital5F_OnResume::
	call Hospital5F_EventScript_SetFloor5
	return


Hospital5F_EventScript_SetFloor5::
	setvar VAR_HOSPITAL_FLOOR, 5
	return


Hospital5F_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN, Hospital5F_Text_GlennPre, Hospital5F_Text_GlennLost
	msgbox Hospital5F_Text_GlennPost
	closemessage
	end


Hospital5F_EventScript_Admin::
	faceplayer
	checkitem ITEM_INSURANCE_CARD, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_1
	checkitem ITEM_INSURANCE_FORM_B, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_4
	checkitem ITEM_INSURANCE_FORM_A
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_7
	msgbox Hospital5F_Text_Admin1
	closemessage
	giveitem ITEM_INSURANCE_FORM_A
	end

Hospital5F_EventScript_Admin_1:
	msgbox Hospital5F_Text_Admin4
	closemessage
	end

Hospital5F_EventScript_Admin_4:
	msgbox Hospital5F_Text_Admin3
	closemessage
	setvar VAR_HOSPITAL_STATE, 3
	removeitem ITEM_INSURANCE_FORM_B
	giveitem ITEM_INSURANCE_CARD
	end

Hospital5F_EventScript_Admin_7:
	msgbox Hospital5F_Text_Admin2
	closemessage
	end


Hospital5F_Text_GlennPre::
	.string "What are you doing? Hey! I just mopped\n"
	.string "there!$"

Hospital5F_Text_GlennLost::
	.string "Just look at the gigantic mess you\n"
	.string "made.$"

Hospital5F_Text_GlennPost::
	.string "Working at the hospital's not so bad, I\n"
	.string "get dental insurance and sick days.$"

Hospital5F_Text_Admin1::
	.string "So what do you want? How can I help\n"
	.string "you? Insurance card? Honey don't fool\l"
	.string "yourself. Insurance is only for\l"
	.string "privaleged folk but go ahead and knock\l"
	.string "yourself out here are forms 1069 and\l"
	.string "420.$"

Hospital5F_Text_Admin2::
	.string "You need to get your forms filled\n"
	.string "properly before filing for insurance\l"
	.string "dear.$"

Hospital5F_Text_Admin3::
	.string "It's you again? Didn't I already....Hey!\n"
	.string "Now what is this? How did you fill these\l"
	.string "out? Why I outta...AHEM! Please excuse\l"
	.string "me. Here's your INSURANCE CARD have a\l"
	.string "good day.$"

Hospital5F_Text_Admin4::
	.string "You have your card, now go enjoy your\n"
	.string "day.$"
