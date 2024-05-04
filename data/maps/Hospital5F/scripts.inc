Hospital5F_MapScripts::
# 3 "data/maps/Hospital5F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital5F/scripts.pory"
	call Hospital5F_OnResume
	return


Hospital5F_OnResume::
# 13 "data/maps/Hospital5F/scripts.pory"
	call Hospital5F_EventScript_SetFloor5
	return


Hospital5F_EventScript_SetFloor5::
# 17 "data/maps/Hospital5F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 5
	return


Hospital5F_EventScript_Glenn::
# 23 "data/maps/Hospital5F/scripts.pory"
	trainerbattle_single TRAINER_GLENN, Hospital5F_Text_GlennPre, Hospital5F_Text_GlennLost
# 24 "data/maps/Hospital5F/scripts.pory"
	msgbox Hospital5F_Text_GlennPost
# 25 "data/maps/Hospital5F/scripts.pory"
	closemessage
	end


Hospital5F_EventScript_Admin::
# 30 "data/maps/Hospital5F/scripts.pory"
	faceplayer
# 31 "data/maps/Hospital5F/scripts.pory"
	checkitem ITEM_INSURANCE_CARD, 1
# 32 "data/maps/Hospital5F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_1
# 37 "data/maps/Hospital5F/scripts.pory"
	checkitem ITEM_INSURANCE_FORM_B, 1
# 38 "data/maps/Hospital5F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_4
# 46 "data/maps/Hospital5F/scripts.pory"
	checkitem ITEM_INSURANCE_FORM_A
# 47 "data/maps/Hospital5F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital5F_EventScript_Admin_7
# 52 "data/maps/Hospital5F/scripts.pory"
	msgbox Hospital5F_Text_Admin1
# 53 "data/maps/Hospital5F/scripts.pory"
	closemessage
# 54 "data/maps/Hospital5F/scripts.pory"
	giveitem ITEM_INSURANCE_FORM_A
	end

Hospital5F_EventScript_Admin_1:
# 33 "data/maps/Hospital5F/scripts.pory"
	msgbox Hospital5F_Text_Admin4
# 34 "data/maps/Hospital5F/scripts.pory"
	closemessage
	end

Hospital5F_EventScript_Admin_4:
# 39 "data/maps/Hospital5F/scripts.pory"
	msgbox Hospital5F_Text_Admin3
# 40 "data/maps/Hospital5F/scripts.pory"
	closemessage
# 41 "data/maps/Hospital5F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 3
# 42 "data/maps/Hospital5F/scripts.pory"
	removeitem ITEM_INSURANCE_FORM_B
# 43 "data/maps/Hospital5F/scripts.pory"
	giveitem ITEM_INSURANCE_CARD
	end

Hospital5F_EventScript_Admin_7:
# 48 "data/maps/Hospital5F/scripts.pory"
	msgbox Hospital5F_Text_Admin2
# 49 "data/maps/Hospital5F/scripts.pory"
	closemessage
	end


Hospital5F_Text_GlennPre::
# 62 "data/maps/Hospital5F/scripts.pory"
	.string "What are you doing? Hey! I just mopped\l"
	.string "there!$"

Hospital5F_Text_GlennLost::
# 66 "data/maps/Hospital5F/scripts.pory"
	.string "Just look at the gigantic mess you\l"
	.string "made.$"

Hospital5F_Text_GlennPost::
# 70 "data/maps/Hospital5F/scripts.pory"
	.string "Working at the hospital's not so bad, I\l"
	.string "get dental insurance and sick days.$"

Hospital5F_Text_Admin1::
# 74 "data/maps/Hospital5F/scripts.pory"
	.string "So what do you want? How can I help\l"
	.string "you? Insurance card? Honey don't fool\l"
	.string "yourself. Insurance is only for\l"
	.string "privaleged folk but go ahead and knock\l"
	.string "yourself out here are forms 1069 and\l"
	.string "420.$"

Hospital5F_Text_Admin2::
# 78 "data/maps/Hospital5F/scripts.pory"
	.string "You need to get your forms filled\l"
	.string "properly before filing for insurance\l"
	.string "dear.$"

Hospital5F_Text_Admin3::
# 82 "data/maps/Hospital5F/scripts.pory"
	.string "It's you again? Didn't I already....Hey!\l"
	.string "Now what is this? How did you fill these\l"
	.string "out? Why I outta...AHEM! Please excuse\l"
	.string "me. Here's your INSURANCE CARD have a\l"
	.string "good day.$"

Hospital5F_Text_Admin4::
# 86 "data/maps/Hospital5F/scripts.pory"
	.string "You have your card, now go enjoy your\l"
	.string "day.$"
