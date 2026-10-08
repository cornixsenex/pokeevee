Hospital6F_MapScripts::
# 3 "data/maps/Hospital6F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital6F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_OnResume
	return


Hospital6F_OnResume::
# 13 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_SetFloor6
	return


Hospital6F_EventScript_SetFloor6::
# 17 "data/maps/Hospital6F/scripts.pory"
	setvar VAR_HOSPITAL_FLOOR, 6
	return


Hospital6F_EventScript_DocLobo::
# 45 "data/maps/Hospital6F/scripts.pory"
	lock
# 46 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 47 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_1, MSGBOX_YESNO
# 48 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 49 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocLobo_2
Hospital6F_EventScript_DocLobo_1:
# 52 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 53 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 54 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocLobo_2:
# 50 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_ChooseMon
	goto Hospital6F_EventScript_DocLobo_1


Hospital6F_EventScript_DocLobo_ChooseMon::
# 59 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_WhichMon
# 60 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 61 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocLobo_ChooseMon_2
# 65 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_DoLobo
Hospital6F_EventScript_DocLobo_ChooseMon_1:
	return

Hospital6F_EventScript_DocLobo_ChooseMon_2:
# 62 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_DeclineLobo
	goto Hospital6F_EventScript_DocLobo_ChooseMon_1


Hospital6F_EventScript_DocLobo_CantLobo::
# 71 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_CantLobo
# 72 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocLobo_DeclineLobo::
# 78 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_DeclineLobo
# 79 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocLobo_DoLobo::
# 84 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 85 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocLobo_DoLobo_2
# 90 "data/maps/Hospital6F/scripts.pory"
	special LobotomizePokemon
Hospital6F_EventScript_DocLobo_DoLobo_1:
	return

Hospital6F_EventScript_DocLobo_DoLobo_2:
# 86 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_CantLobo
	goto Hospital6F_EventScript_DocLobo_DoLobo_1


Hospital6F_EventScript_DocPS::
# 98 "data/maps/Hospital6F/scripts.pory"
	lock
# 99 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 100 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_1, MSGBOX_YESNO
# 101 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 102 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocPS_2
Hospital6F_EventScript_DocPS_1:
# 105 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 106 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 107 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocPS_2:
# 103 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_ChooseMon
	goto Hospital6F_EventScript_DocPS_1


Hospital6F_EventScript_DocPS_ChooseMon::
# 112 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_WhichMon
# 113 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 114 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocPS_ChooseMon_2
# 118 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_DoPS
Hospital6F_EventScript_DocPS_ChooseMon_1:
	return

Hospital6F_EventScript_DocPS_ChooseMon_2:
# 115 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_DeclinePS
	goto Hospital6F_EventScript_DocPS_ChooseMon_1


Hospital6F_EventScript_DocPS_CantPS::
# 124 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_CantPS
# 125 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocPS_DeclinePS::
# 131 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_DeclinePS
# 132 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocPS_DoPS::
# 137 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 138 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocPS_DoPS_2
# 143 "data/maps/Hospital6F/scripts.pory"
	special MakeShiny
Hospital6F_EventScript_DocPS_DoPS_1:
	return

Hospital6F_EventScript_DocPS_DoPS_2:
# 139 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_CantPS
	goto Hospital6F_EventScript_DocPS_DoPS_1


Hospital6F_EventScript_DocG::
# 151 "data/maps/Hospital6F/scripts.pory"
	lock
# 152 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 153 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_1, MSGBOX_YESNO
# 154 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 155 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocG_2
Hospital6F_EventScript_DocG_1:
# 158 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 159 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 160 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocG_2:
# 156 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_ChooseMon
	goto Hospital6F_EventScript_DocG_1


Hospital6F_EventScript_DocG_ChooseMon::
# 165 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_WhichMon
# 166 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 167 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocG_ChooseMon_2
# 171 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_DoG
Hospital6F_EventScript_DocG_ChooseMon_1:
	return

Hospital6F_EventScript_DocG_ChooseMon_2:
# 168 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_DeclineG
	goto Hospital6F_EventScript_DocG_ChooseMon_1


Hospital6F_EventScript_DocG_CantG::
# 177 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_CantG
# 178 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocG_DeclineG::
# 184 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_DeclineG
# 185 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocG_DoG::
# 190 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 191 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocG_DoG_2
# 195 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, CheckMonHasGen
# 196 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital6F_EventScript_DocG_DoG_5
# 200 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_CantG
Hospital6F_EventScript_DocG_DoG_1:
	return

Hospital6F_EventScript_DocG_DoG_2:
# 192 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_CantG
	goto Hospital6F_EventScript_DocG_DoG_1

Hospital6F_EventScript_DocG_DoG_5:
# 197 "data/maps/Hospital6F/scripts.pory"
	special ChangeGen
	goto Hospital6F_EventScript_DocG_DoG_1


Hospital6F_EventScript_DocP::
# 209 "data/maps/Hospital6F/scripts.pory"
	lock
# 210 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 211 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_1, MSGBOX_YESNO
# 212 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 213 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocP_2
Hospital6F_EventScript_DocP_1:
# 216 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 217 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 218 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocP_2:
# 214 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_ChooseMon
	goto Hospital6F_EventScript_DocP_1


Hospital6F_EventScript_DocP_ChooseMon::
# 223 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_WhichMon
# 224 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 225 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocP_ChooseMon_2
# 229 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_DoP
Hospital6F_EventScript_DocP_ChooseMon_1:
	return

Hospital6F_EventScript_DocP_ChooseMon_2:
# 226 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_DeclineP
	goto Hospital6F_EventScript_DocP_ChooseMon_1


Hospital6F_EventScript_DocP_CantP::
# 235 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_CantP
# 236 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocP_DeclineP::
# 242 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_DeclineP
# 243 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocP_DoP::
# 248 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 249 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocP_DoP_2
# 253 "data/maps/Hospital6F/scripts.pory"
	special ChangePersonality
Hospital6F_EventScript_DocP_DoP_1:
	return

Hospital6F_EventScript_DocP_DoP_2:
# 250 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_CantP
	goto Hospital6F_EventScript_DocP_DoP_1


Hospital6F_Text_DocLobo_ComeBack::
# 259 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocLobo_1::
# 263 "data/maps/Hospital6F/scripts.pory"
	.string "I am a doctor of lobotomy. Would you be\n"
	.string "interested in my services?$"

Hospital6F_Text_DocLobo_WhichMon::
# 267 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I lobotomize?$"

Hospital6F_Text_DocLobo_DeclineLobo::
# 271 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocLobo_CantLobo::
# 275 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocPS_ComeBack::
# 279 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocPS_1::
# 283 "data/maps/Hospital6F/scripts.pory"
	.string "Hello. I perform plastic surgery. Would\n"
	.string "you be interested in my services?$"

Hospital6F_Text_DocPS_WhichMon::
# 287 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocPS_DeclinePS::
# 291 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocPS_CantPS::
# 295 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocG_ComeBack::
# 299 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocG_1::
# 303 "data/maps/Hospital6F/scripts.pory"
	.string "Would you like to tranform your\n"
	.string "pokemon?$"

Hospital6F_Text_DocG_WhichMon::
# 307 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocG_DeclineG::
# 311 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocG_CantG::
# 315 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocP_ComeBack::
# 319 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocP_1::
# 323 "data/maps/Hospital6F/scripts.pory"
	.string "Greetings. I'm a {PKMN} therapist. Are you\n"
	.string "interested in therapy?$"

Hospital6F_Text_DocP_WhichMon::
# 327 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} needs professional help?$"

Hospital6F_Text_DocP_DeclineP::
# 331 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocP_CantP::
# 335 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"
