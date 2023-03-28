Hospital2F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital2F_OnResume
	return


Hospital2F_OnResume::
	call Hospital2F_EventScript_SetFloor2
	return


Hospital2F_EventScript_SetFloor2::
	setvar VAR_HOSPITAL_FLOOR, 2
	return


Hospital2F_EventScript_Stoner::
	lock
	faceplayer
	compare VAR_HOSPITAL_STATE, 0
	goto_if_eq Hospital2F_EventScript_Stoner_2
Hospital2F_EventScript_Stoner_1:
	compare VAR_HOSPITAL_STATE, 1
	goto_if_eq Hospital2F_EventScript_Stoner_5
Hospital2F_EventScript_Stoner_4:
	compare VAR_HOSPITAL_STATE, 2
	goto_if_eq Hospital2F_EventScript_Stoner_8
Hospital2F_EventScript_Stoner_7:
	compare VAR_HOSPITAL_STATE, 3
	goto_if_eq Hospital2F_EventScript_Stoner_11
Hospital2F_EventScript_Stoner_10:
	compare VAR_HOSPITAL_STATE, 4
	goto_if_eq Hospital2F_EventScript_Stoner_16
Hospital2F_EventScript_Stoner_15:
	compare VAR_HOSPITAL_STATE, 5
	goto_if_eq Hospital2F_EventScript_Stoner_24
Hospital2F_EventScript_Stoner_23:
	end

Hospital2F_EventScript_Stoner_2:
	setvar VAR_HOSPITAL_STATE, 1
	msgbox Hospital2F_Text_Stoner1
	closemessage
	goto Hospital2F_EventScript_Stoner_1

Hospital2F_EventScript_Stoner_5:
	setvar VAR_HOSPITAL_STATE, 2
	msgbox Hospital2F_Text_Stoner2
	closemessage
	goto Hospital2F_EventScript_Stoner_4

Hospital2F_EventScript_Stoner_8:
	msgbox Hospital2F_Text_Stoner3
	closemessage
	checkitem ITEM_LEMONADE
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_13
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_11:
	msgbox Hospital2F_Text_Stoner7
	closemessage
	checkitem ITEM_INSURANCE_FORM_A
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_18
	goto Hospital2F_EventScript_Stoner_10

Hospital2F_EventScript_Stoner_13:
	msgbox Hospital2F_Text_Stoner4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Hospital2F_EventScript_Stoner_20
	msgbox Hospital2F_Text_Stoner5
	closemessage
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_16:
	msgbox Hospital2F_Text_Stoner9
	closemessage
	checkitem ITEM_KIND_BUD
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_26
	goto Hospital2F_EventScript_Stoner_15

Hospital2F_EventScript_Stoner_18:
	setvar VAR_HOSPITAL_STATE, 4
	msgbox Hospital2F_Text_Stoner8
	closemessage
	goto Hospital2F_EventScript_Stoner_10

Hospital2F_EventScript_Stoner_20:
	removeitem ITEM_LEMONADE
	setvar VAR_HOSPITAL_STATE, 3
	msgbox Hospital2F_Text_Stoner6
	closemessage
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_24:
	msgbox Hospital2F_Text_Stoner12
	closemessage
	goto Hospital2F_EventScript_Stoner_23

Hospital2F_EventScript_Stoner_26:
	msgbox Hospital2F_Text_Stoner10, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Hospital2F_EventScript_Stoner_28
	msgbox Hospital2F_Text_Stoner5
	closemessage
	goto Hospital2F_EventScript_Stoner_15

Hospital2F_EventScript_Stoner_28:
	removeitem ITEM_KIND_BUD
	removeitem ITEM_INSURANCE_FORM_A
	setvar VAR_HOSPITAL_STATE, 5
	msgbox Hospital2F_Text_Stoner11
	closemessage
	giveitem ITEM_INSURANCE_FORM_B
	goto Hospital2F_EventScript_Stoner_15


Hospital2F_Text_Stoner1::
	.string "Man...what the FUCK? I been sitting here\n"
	.string "waitin God damn nearly 45 minutes and\l"
	.string "this bitch ass doctors and nurses aint\l"
	.string "gave me shit yet! Fucking bullshit,\l"
	.string "outrageous bullshit. This why I ain't\l"
	.string "never pay.$"

Hospital2F_Text_Stoner2::
	.string "Man...what the FUCK? All this sittin\n"
	.string "round smokin in the Hospital and shit\l"
	.string "make a man THIRSTY! Hey you! You know\l"
	.string "what I mean young family, can you help\l"
	.string "a brother out? I'm thirty as a\l"
	.string "motherfucker but I ain't walking all\l"
	.string "the way over the bar. Hell nah! Not me. I\l"
	.string "got a powerful thirst, I think I need me\l"
	.string "some LEMONADE! Yes sir yes sir yes sir...$"

Hospital2F_Text_Stoner3::
	.string "Man...what the FUCK? My lips chapped as\n"
	.string "hell, tongue feel dry as fuck. I need me\l"
	.string "some LEMONADE and fast...$"

Hospital2F_Text_Stoner4::
	.string "Man..what the FUCK? Is you bring me\n"
	.string "that LEMONADE I asked for?$"

Hospital2F_Text_Stoner5::
	.string "Man...what the FUCK?$"

Hospital2F_Text_Stoner6::
	.string "Man..what the FUCK? Give me that shit!\n"
	.string "-SLURP- -BURP- -SLURP- Ahhhhh that's\l"
	.string "some good shit and you know it!$"

Hospital2F_Text_Stoner7::
	.string "Man..what the FUCK? You know you ain't\n"
	.string "half bad young family. You helped a\l"
	.string "brother out. Respect. Holler if you in\l"
	.string "the hood homie.$"

Hospital2F_Text_Stoner8::
	.string "Man..what the FUCK? You want me to like\n"
	.string "forge these documents and shit for\l"
	.string "you? Damn man what you think I know\l"
	.string "about that? Well check it out if you\l"
	.string "bring me some KIND BUD I can probably\l"
	.string "help you fill out those forms. Scratch\l"
	.string "my back and I'll scratch your huh?$"

Hospital2F_Text_Stoner9::
	.string "Man..what the FUCK? Just bring me some\n"
	.string "KIND BUD and I'll get those papers\l"
	.string "filled out for you.$"

Hospital2F_Text_Stoner10::
	.string "Man..what the FUCK? Is that KIND BUD?\n"
	.string "My man did you bring that for me?$"

Hospital2F_Text_Stoner11::
	.string "Man..what the FUCK? Yeah, this some\n"
	.string "good shit man! Fuck yeah can't wait to\l"
	.string "spark this shit up...Here lemme see\l"
	.string "those forms...Let's see uhh\l"
	.string "name...{PLAYER}...uhh birthday...uhh\l"
	.string "Four Twenty Sixty Nine hehe...uhh\l"
	.string "income Fat Zeros hahaha uhh...sign and\l"
	.string "date. There ya go kid!$"

Hospital2F_Text_Stoner12::
	.string "Man..what the FUCK? How long I gotta be\n"
	.string "waiting for? Least now I got me some\l"
	.string "KIND BUD to puff on hehehe...$"
