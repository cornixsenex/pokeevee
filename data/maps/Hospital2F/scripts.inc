Hospital2F_MapScripts::
# 3 "data//maps/Hospital2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data//maps/Hospital2F/scripts.pory"
	call Hospital2F_OnResume
	return


Hospital2F_OnResume::
# 13 "data//maps/Hospital2F/scripts.pory"
	call Hospital2F_EventScript_SetFloor2
	return


Hospital2F_EventScript_SetFloor2::
# 17 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 2
	return


Hospital2F_EventScript_Stoner::
# 23 "data//maps/Hospital2F/scripts.pory"
	faceplayer
# 24 "data//maps/Hospital2F/scripts.pory"
	lock
# 25 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 0
	goto_if_eq Hospital2F_EventScript_Stoner_2
Hospital2F_EventScript_Stoner_1:
# 30 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 1
	goto_if_eq Hospital2F_EventScript_Stoner_5
Hospital2F_EventScript_Stoner_4:
# 35 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 2
	goto_if_eq Hospital2F_EventScript_Stoner_8
Hospital2F_EventScript_Stoner_7:
# 52 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 3
	goto_if_eq Hospital2F_EventScript_Stoner_11
Hospital2F_EventScript_Stoner_10:
# 62 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 4
	goto_if_eq Hospital2F_EventScript_Stoner_16
Hospital2F_EventScript_Stoner_15:
# 81 "data//maps/Hospital2F/scripts.pory"
	compare VAR_HOSPITAL_STATE, 5
	goto_if_eq Hospital2F_EventScript_Stoner_24
Hospital2F_EventScript_Stoner_23:
	end

Hospital2F_EventScript_Stoner_2:
# 26 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 1
# 27 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner1
# 28 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_1

Hospital2F_EventScript_Stoner_5:
# 31 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 2
# 32 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner2
# 33 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_4

Hospital2F_EventScript_Stoner_8:
# 36 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner3
# 37 "data//maps/Hospital2F/scripts.pory"
	closemessage
# 38 "data//maps/Hospital2F/scripts.pory"
	checkitem ITEM_LEMONADE
# 39 "data//maps/Hospital2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_13
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_11:
# 53 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner7
# 54 "data//maps/Hospital2F/scripts.pory"
	closemessage
# 55 "data//maps/Hospital2F/scripts.pory"
	checkitem ITEM_INSURANCE_FORM_A
# 56 "data//maps/Hospital2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_18
	goto Hospital2F_EventScript_Stoner_10

Hospital2F_EventScript_Stoner_13:
# 40 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner4, MSGBOX_YESNO
# 41 "data//maps/Hospital2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital2F_EventScript_Stoner_20
# 47 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner5
# 48 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_16:
# 63 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner9
# 64 "data//maps/Hospital2F/scripts.pory"
	closemessage
# 65 "data//maps/Hospital2F/scripts.pory"
	checkitem ITEM_KIND_BUD
# 66 "data//maps/Hospital2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital2F_EventScript_Stoner_26
	goto Hospital2F_EventScript_Stoner_15

Hospital2F_EventScript_Stoner_18:
# 57 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 4
# 58 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner8
# 59 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_10

Hospital2F_EventScript_Stoner_20:
# 42 "data//maps/Hospital2F/scripts.pory"
	removeitem ITEM_LEMONADE
# 43 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 3
# 44 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner6
# 45 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_7

Hospital2F_EventScript_Stoner_24:
# 82 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner12
# 83 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_23

Hospital2F_EventScript_Stoner_26:
# 67 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner10, MSGBOX_YESNO
# 68 "data//maps/Hospital2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital2F_EventScript_Stoner_28
# 76 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner5
# 77 "data//maps/Hospital2F/scripts.pory"
	closemessage
	goto Hospital2F_EventScript_Stoner_15

Hospital2F_EventScript_Stoner_28:
# 69 "data//maps/Hospital2F/scripts.pory"
	removeitem ITEM_KIND_BUD
# 70 "data//maps/Hospital2F/scripts.pory"
	removeitem ITEM_INSURANCE_FORM_A
# 71 "data//maps/Hospital2F/scripts.pory"
	setvar VAR_HOSPITAL_STATE, 5
# 72 "data//maps/Hospital2F/scripts.pory"
	msgbox Hospital2F_Text_Stoner11
# 73 "data//maps/Hospital2F/scripts.pory"
	closemessage
# 74 "data//maps/Hospital2F/scripts.pory"
	giveitem ITEM_INSURANCE_FORM_B
	goto Hospital2F_EventScript_Stoner_15


Hospital2F_Text_Stoner1::
# 102 "data//maps/Hospital2F/scripts.pory"
	.string "Man...what the FUCK? I been sitting here\n"
	.string "waitin God damn nearly 45 minutes and\l"
	.string "this bitch ass doctors and nurses aint\l"
	.string "gave me shit yet! Fucking bullshit,\l"
	.string "outrageous bullshit. This why I ain't\l"
	.string "never pay.$"

Hospital2F_Text_Stoner2::
# 106 "data//maps/Hospital2F/scripts.pory"
	.string "Man...what the FUCK? All this sittin\n"
	.string "round smokin in the Hospital and shit\l"
	.string "make a man THIRSTY! Hey you! You know\l"
	.string "what I mean young family, can you help a\l"
	.string "brother out? I'm thirty as a\l"
	.string "motherfucker but I ain't walking all the\l"
	.string "way over the bar. Hell nah! Not me. I got\l"
	.string "a powerful thirst, I think I need me\l"
	.string "some LEMONADE! Yes sir yes sir yes sir...$"

Hospital2F_Text_Stoner3::
# 110 "data//maps/Hospital2F/scripts.pory"
	.string "Man...what the FUCK? My lips chapped as\n"
	.string "hell, tongue feel dry as fuck. I need me\l"
	.string "some LEMONADE and fast...$"

Hospital2F_Text_Stoner4::
# 114 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? Is you bring me\n"
	.string "that LEMONADE I asked for?$"

Hospital2F_Text_Stoner5::
# 118 "data//maps/Hospital2F/scripts.pory"
	.string "Man...what the FUCK?$"

Hospital2F_Text_Stoner6::
# 122 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? Give me that shit!\n"
	.string "-SLURP- -BURP- -SLURP- Ahhhhh that's\l"
	.string "some good shit and you know it!$"

Hospital2F_Text_Stoner7::
# 126 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? You know you ain't\n"
	.string "half bad young family. You helped a\l"
	.string "brother out. Respect. Holler if you in\l"
	.string "the hood homie.$"

Hospital2F_Text_Stoner8::
# 130 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? You want me to like\n"
	.string "forge these documents and shit for\l"
	.string "you? Damn man what you think I know\l"
	.string "about that? Well check it out if you\l"
	.string "bring me some KIND BUD I can probably\l"
	.string "help you fill out those forms. Scratch\l"
	.string "my back and I'll scratch your huh?$"

Hospital2F_Text_Stoner9::
# 134 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? Just bring me some\n"
	.string "KIND BUD and I'll get those papers\l"
	.string "filled out for you.$"

Hospital2F_Text_Stoner10::
# 138 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? Is that KIND BUD?\n"
	.string "My man did you bring that for me?$"

Hospital2F_Text_Stoner11::
# 142 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? Yeah, this some\n"
	.string "good shit man! Fuck yeah can't wait to\l"
	.string "spark this shit up...Here lemme see\l"
	.string "those forms...Let's see uhh\l"
	.string "name...{PLAYER}...uhh birthday...uhh\l"
	.string "Four Twenty Sixty Nine hehe...uhh\l"
	.string "income Fat Zeros hahaha uhh...sign and\l"
	.string "date. There ya go kid!$"

Hospital2F_Text_Stoner12::
# 146 "data//maps/Hospital2F/scripts.pory"
	.string "Man..what the FUCK? How long I gotta be\n"
	.string "waiting for? Least now I got me some\l"
	.string "KIND BUD to puff on hehehe...$"
