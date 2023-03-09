Hospital6F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital6F_OnResume
	return


Hospital6F_OnResume::
	call Hospital6F_EventScript_SetFloor6
	return


Hospital6F_EventScript_SetFloor6::
	setvar VAR_HOSPITAL_FLOOR, 6
	return


Hospital6F_EventScript_DocLobo::
	lock
	faceplayer
	msgbox Hospital6F_Text_DocLobo_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocLobo_2
Hospital6F_EventScript_DocLobo_1:
	msgbox Hospital6F_Text_DocLobo_ComeBack
	closemessage
	release
	end

Hospital6F_EventScript_DocLobo_2:
	call Hospital6F_EventScript_DocLobo_ChooseMon
	goto Hospital6F_EventScript_DocLobo_1


Hospital6F_EventScript_DocLobo_ChooseMon::
	msgbox Hospital6F_Text_DocLobo_WhichMon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocLobo_ChooseMon_2
	call Hospital6F_EventScript_DocLobo_DoLobo
Hospital6F_EventScript_DocLobo_ChooseMon_1:
	return

Hospital6F_EventScript_DocLobo_ChooseMon_2:
	call Hospital6F_EventScript_DocLobo_DeclineLobo
	goto Hospital6F_EventScript_DocLobo_ChooseMon_1


Hospital6F_EventScript_DocLobo_CantLobo::
	msgbox Hospital6F_Text_DocLobo_CantLobo
	release
	return


Hospital6F_EventScript_DocLobo_DeclineLobo::
	msgbox Hospital6F_Text_DocLobo_DeclineLobo
	release
	return


Hospital6F_EventScript_DocLobo_DoLobo::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocLobo_DoLobo_2
	special LobotomizePokemon
Hospital6F_EventScript_DocLobo_DoLobo_1:
	return

Hospital6F_EventScript_DocLobo_DoLobo_2:
	call Hospital6F_EventScript_DocLobo_CantLobo
	goto Hospital6F_EventScript_DocLobo_DoLobo_1


Hospital6F_EventScript_DocPS::
	lock
	faceplayer
	msgbox Hospital6F_Text_DocPS_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocPS_2
Hospital6F_EventScript_DocPS_1:
	msgbox Hospital6F_Text_DocLobo_ComeBack
	closemessage
	release
	end

Hospital6F_EventScript_DocPS_2:
	call Hospital6F_EventScript_DocPS_ChooseMon
	goto Hospital6F_EventScript_DocPS_1


Hospital6F_EventScript_DocPS_ChooseMon::
	msgbox Hospital6F_Text_DocPS_WhichMon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocPS_ChooseMon_2
	call Hospital6F_EventScript_DocPS_DoPS
Hospital6F_EventScript_DocPS_ChooseMon_1:
	return

Hospital6F_EventScript_DocPS_ChooseMon_2:
	call Hospital6F_EventScript_DocPS_DeclinePS
	goto Hospital6F_EventScript_DocPS_ChooseMon_1


Hospital6F_EventScript_DocPS_CantPS::
	msgbox Hospital6F_Text_DocPS_CantPS
	release
	return


Hospital6F_EventScript_DocPS_DeclinePS::
	msgbox Hospital6F_Text_DocPS_DeclinePS
	release
	return


Hospital6F_EventScript_DocPS_DoPS::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocPS_DoPS_2
	special MakeShiny
Hospital6F_EventScript_DocPS_DoPS_1:
	return

Hospital6F_EventScript_DocPS_DoPS_2:
	call Hospital6F_EventScript_DocPS_CantPS
	goto Hospital6F_EventScript_DocPS_DoPS_1


Hospital6F_EventScript_DocG::
	lock
	faceplayer
	msgbox Hospital6F_Text_DocG_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocG_2
Hospital6F_EventScript_DocG_1:
	msgbox Hospital6F_Text_DocLobo_ComeBack
	closemessage
	release
	end

Hospital6F_EventScript_DocG_2:
	call Hospital6F_EventScript_DocG_ChooseMon
	goto Hospital6F_EventScript_DocG_1


Hospital6F_EventScript_DocG_ChooseMon::
	msgbox Hospital6F_Text_DocG_WhichMon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocG_ChooseMon_2
	call Hospital6F_EventScript_DocG_DoG
Hospital6F_EventScript_DocG_ChooseMon_1:
	return

Hospital6F_EventScript_DocG_ChooseMon_2:
	call Hospital6F_EventScript_DocG_DeclineG
	goto Hospital6F_EventScript_DocG_ChooseMon_1


Hospital6F_EventScript_DocG_CantG::
	msgbox Hospital6F_Text_DocG_CantG
	release
	return


Hospital6F_EventScript_DocG_DeclineG::
	msgbox Hospital6F_Text_DocG_DeclineG
	release
	return


Hospital6F_EventScript_DocG_DoG::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocG_DoG_2
	specialvar VAR_RESULT, CheckMonHasGen
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital6F_EventScript_DocG_DoG_5
	call Hospital6F_EventScript_DocG_CantG
Hospital6F_EventScript_DocG_DoG_1:
	return

Hospital6F_EventScript_DocG_DoG_2:
	call Hospital6F_EventScript_DocG_CantG
	goto Hospital6F_EventScript_DocG_DoG_1

Hospital6F_EventScript_DocG_DoG_5:
	special ChangeGen
	goto Hospital6F_EventScript_DocG_DoG_1


Hospital6F_EventScript_DocP::
	lock
	faceplayer
	msgbox Hospital6F_Text_DocP_1, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocP_2
Hospital6F_EventScript_DocP_1:
	msgbox Hospital6F_Text_DocLobo_ComeBack
	closemessage
	release
	end

Hospital6F_EventScript_DocP_2:
	call Hospital6F_EventScript_DocP_ChooseMon
	goto Hospital6F_EventScript_DocP_1


Hospital6F_EventScript_DocP_ChooseMon::
	msgbox Hospital6F_Text_DocP_WhichMon
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocP_ChooseMon_2
	call Hospital6F_EventScript_DocP_DoP
Hospital6F_EventScript_DocP_ChooseMon_1:
	return

Hospital6F_EventScript_DocP_ChooseMon_2:
	call Hospital6F_EventScript_DocP_DeclineP
	goto Hospital6F_EventScript_DocP_ChooseMon_1


Hospital6F_EventScript_DocP_CantP::
	msgbox Hospital6F_Text_DocP_CantP
	release
	return


Hospital6F_EventScript_DocP_DeclineP::
	msgbox Hospital6F_Text_DocP_DeclineP
	release
	return


Hospital6F_EventScript_DocP_DoP::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocP_DoP_2
	special ChangePersonality
Hospital6F_EventScript_DocP_DoP_1:
	return

Hospital6F_EventScript_DocP_DoP_2:
	call Hospital6F_EventScript_DocP_CantP
	goto Hospital6F_EventScript_DocP_DoP_1


Hospital6F_Text_DocLobo_ComeBack::
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocLobo_1::
	.string "I am a doctor of lobotomy. Would you be\n"
	.string "interested in my services?$"

Hospital6F_Text_DocLobo_WhichMon::
	.string "Which {PKMN} should I lobotomize?$"

Hospital6F_Text_DocLobo_DeclineLobo::
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocLobo_CantLobo::
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocPS_ComeBack::
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocPS_1::
	.string "Hello. I perform plastic surgery. Would\n"
	.string "you be interested in my services?$"

Hospital6F_Text_DocPS_WhichMon::
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocPS_DeclinePS::
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocPS_CantPS::
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocG_ComeBack::
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocG_1::
	.string "Would you like to tranform your\n"
	.string "pokemon?$"

Hospital6F_Text_DocG_WhichMon::
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocG_DeclineG::
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocG_CantG::
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocP_ComeBack::
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocP_1::
	.string "Greetings. I'm a {PKMN} therapist. Are you\n"
	.string "interested in therapy?$"

Hospital6F_Text_DocP_WhichMon::
	.string "Which {PKMN} needs professional help?$"

Hospital6F_Text_DocP_DeclineP::
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocP_CantP::
	.string "I am afraid I can't alter this egg.$"
