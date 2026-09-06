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
	waitstate
# 62 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocLobo_ChooseMon_2
# 66 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_DoLobo
Hospital6F_EventScript_DocLobo_ChooseMon_1:
	return

Hospital6F_EventScript_DocLobo_ChooseMon_2:
# 63 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_DeclineLobo
	goto Hospital6F_EventScript_DocLobo_ChooseMon_1


Hospital6F_EventScript_DocLobo_CantLobo::
# 72 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_CantLobo
# 73 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocLobo_DeclineLobo::
# 79 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_DeclineLobo
# 80 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocLobo_DoLobo::
# 85 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 86 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocLobo_DoLobo_2
# 91 "data/maps/Hospital6F/scripts.pory"
	special LobotomizePokemon
Hospital6F_EventScript_DocLobo_DoLobo_1:
	return

Hospital6F_EventScript_DocLobo_DoLobo_2:
# 87 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocLobo_CantLobo
	goto Hospital6F_EventScript_DocLobo_DoLobo_1


Hospital6F_EventScript_DocPS::
# 99 "data/maps/Hospital6F/scripts.pory"
	lock
# 100 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 101 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_1, MSGBOX_YESNO
# 102 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 103 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocPS_2
Hospital6F_EventScript_DocPS_1:
# 106 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 107 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 108 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocPS_2:
# 104 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_ChooseMon
	goto Hospital6F_EventScript_DocPS_1


Hospital6F_EventScript_DocPS_ChooseMon::
# 113 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_WhichMon
# 114 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 115 "data/maps/Hospital6F/scripts.pory"
	waitstate
# 116 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocPS_ChooseMon_2
# 120 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_DoPS
Hospital6F_EventScript_DocPS_ChooseMon_1:
	return

Hospital6F_EventScript_DocPS_ChooseMon_2:
# 117 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_DeclinePS
	goto Hospital6F_EventScript_DocPS_ChooseMon_1


Hospital6F_EventScript_DocPS_CantPS::
# 126 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_CantPS
# 127 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocPS_DeclinePS::
# 133 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocPS_DeclinePS
# 134 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocPS_DoPS::
# 139 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 140 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocPS_DoPS_2
# 145 "data/maps/Hospital6F/scripts.pory"
	special MakeShiny
Hospital6F_EventScript_DocPS_DoPS_1:
	return

Hospital6F_EventScript_DocPS_DoPS_2:
# 141 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocPS_CantPS
	goto Hospital6F_EventScript_DocPS_DoPS_1


Hospital6F_EventScript_DocG::
# 153 "data/maps/Hospital6F/scripts.pory"
	lock
# 154 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 155 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_1, MSGBOX_YESNO
# 156 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 157 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocG_2
Hospital6F_EventScript_DocG_1:
# 160 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 161 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 162 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocG_2:
# 158 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_ChooseMon
	goto Hospital6F_EventScript_DocG_1


Hospital6F_EventScript_DocG_ChooseMon::
# 167 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_WhichMon
# 168 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 169 "data/maps/Hospital6F/scripts.pory"
	waitstate
# 170 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocG_ChooseMon_2
# 174 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_DoG
Hospital6F_EventScript_DocG_ChooseMon_1:
	return

Hospital6F_EventScript_DocG_ChooseMon_2:
# 171 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_DeclineG
	goto Hospital6F_EventScript_DocG_ChooseMon_1


Hospital6F_EventScript_DocG_CantG::
# 180 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_CantG
# 181 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocG_DeclineG::
# 187 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocG_DeclineG
# 188 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocG_DoG::
# 193 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 194 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocG_DoG_2
# 198 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, CheckMonHasGen
# 199 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hospital6F_EventScript_DocG_DoG_5
# 203 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_CantG
Hospital6F_EventScript_DocG_DoG_1:
	return

Hospital6F_EventScript_DocG_DoG_2:
# 195 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocG_CantG
	goto Hospital6F_EventScript_DocG_DoG_1

Hospital6F_EventScript_DocG_DoG_5:
# 200 "data/maps/Hospital6F/scripts.pory"
	special ChangeGen
	goto Hospital6F_EventScript_DocG_DoG_1


Hospital6F_EventScript_DocP::
# 212 "data/maps/Hospital6F/scripts.pory"
	lock
# 213 "data/maps/Hospital6F/scripts.pory"
	faceplayer
# 214 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_1, MSGBOX_YESNO
# 215 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 216 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Hospital6F_EventScript_DocP_2
Hospital6F_EventScript_DocP_1:
# 219 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocLobo_ComeBack
# 220 "data/maps/Hospital6F/scripts.pory"
	closemessage
# 221 "data/maps/Hospital6F/scripts.pory"
	release
	end

Hospital6F_EventScript_DocP_2:
# 217 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_ChooseMon
	goto Hospital6F_EventScript_DocP_1


Hospital6F_EventScript_DocP_ChooseMon::
# 226 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_WhichMon
# 227 "data/maps/Hospital6F/scripts.pory"
	special ChoosePartyMon
# 228 "data/maps/Hospital6F/scripts.pory"
	waitstate
# 229 "data/maps/Hospital6F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Hospital6F_EventScript_DocP_ChooseMon_2
# 233 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_DoP
Hospital6F_EventScript_DocP_ChooseMon_1:
	return

Hospital6F_EventScript_DocP_ChooseMon_2:
# 230 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_DeclineP
	goto Hospital6F_EventScript_DocP_ChooseMon_1


Hospital6F_EventScript_DocP_CantP::
# 239 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_CantP
# 240 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocP_DeclineP::
# 246 "data/maps/Hospital6F/scripts.pory"
	msgbox Hospital6F_Text_DocP_DeclineP
# 247 "data/maps/Hospital6F/scripts.pory"
	release
	return


Hospital6F_EventScript_DocP_DoP::
# 252 "data/maps/Hospital6F/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 253 "data/maps/Hospital6F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Hospital6F_EventScript_DocP_DoP_2
# 257 "data/maps/Hospital6F/scripts.pory"
	special ChangePersonality
Hospital6F_EventScript_DocP_DoP_1:
	return

Hospital6F_EventScript_DocP_DoP_2:
# 254 "data/maps/Hospital6F/scripts.pory"
	call Hospital6F_EventScript_DocP_CantP
	goto Hospital6F_EventScript_DocP_DoP_1


Hospital6F_Text_DocLobo_ComeBack::
# 263 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocLobo_1::
# 267 "data/maps/Hospital6F/scripts.pory"
	.string "I am a doctor of lobotomy. Would you be\n"
	.string "interested in my services?$"

Hospital6F_Text_DocLobo_WhichMon::
# 271 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I lobotomize?$"

Hospital6F_Text_DocLobo_DeclineLobo::
# 275 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocLobo_CantLobo::
# 279 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocPS_ComeBack::
# 283 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocPS_1::
# 287 "data/maps/Hospital6F/scripts.pory"
	.string "Hello. I perform plastic surgery. Would\n"
	.string "you be interested in my services?$"

Hospital6F_Text_DocPS_WhichMon::
# 291 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocPS_DeclinePS::
# 295 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocPS_CantPS::
# 299 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocG_ComeBack::
# 303 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocG_1::
# 307 "data/maps/Hospital6F/scripts.pory"
	.string "Would you like to tranform your\n"
	.string "pokemon?$"

Hospital6F_Text_DocG_WhichMon::
# 311 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} should I make beautiful?$"

Hospital6F_Text_DocG_DeclineG::
# 315 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocG_CantG::
# 319 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"

Hospital6F_Text_DocP_ComeBack::
# 323 "data/maps/Hospital6F/scripts.pory"
	.string "Please don't forget I'm here and do\n"
	.string "come back.$"

Hospital6F_Text_DocP_1::
# 327 "data/maps/Hospital6F/scripts.pory"
	.string "Greetings. I'm a {PKMN} therapist. Are you\n"
	.string "interested in therapy?$"

Hospital6F_Text_DocP_WhichMon::
# 331 "data/maps/Hospital6F/scripts.pory"
	.string "Which {PKMN} needs professional help?$"

Hospital6F_Text_DocP_DeclineP::
# 335 "data/maps/Hospital6F/scripts.pory"
	.string "Oh. I guess that means you must have\n"
	.string "changed your mind.$"

Hospital6F_Text_DocP_CantP::
# 339 "data/maps/Hospital6F/scripts.pory"
	.string "I am afraid I can't alter this egg.$"
