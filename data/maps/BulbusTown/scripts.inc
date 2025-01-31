BulbusTown_MapScripts::
# 16 "data//maps/BulbusTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_ShowStrike
	goto BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_HideJason
	return


BulbusTown_Script_ShowStrike::
# 29 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 6, 5, 18
# 30 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 32 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 7, 6, 18
# 33 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 35 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 15, 16, 18
# 36 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 38 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 14, 17, 18
# 39 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 41 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 8, 27, 18
# 42 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 44 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 1, 28, 18
# 45 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BulbusTown_Script_HideJason::
# 51 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 16, 26, 11
# 52 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 54 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 17, 27, 11
# 55 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
# 57 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 18, 28, 11
# 58 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_INVISIBLE
	return


BulbusTown_EventScript_Fisherman::
# 64 "data//maps/BulbusTown/scripts.pory"
	lock
# 65 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 66 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 67 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 72 "data//maps/BulbusTown/scripts.pory"
	lock
# 73 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 74 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 79 "data//maps/BulbusTown/scripts.pory"
	lock
# 80 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 81 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 86 "data//maps/BulbusTown/scripts.pory"
	lock
# 87 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 88 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 89 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 94 "data//maps/BulbusTown/scripts.pory"
	lock
# 95 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 96 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 97 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Jason::
# 102 "data//maps/BulbusTown/scripts.pory"
	lock
# 103 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 104 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Jason_2
# 108 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason2, MSGBOX_DEFAULT
BulbusTown_Script_Jason_1:
# 110 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 111 "data//maps/BulbusTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 112 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 113 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Jason_2:
# 105 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORSOPEN
# 106 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason1, MSGBOX_DEFAULT
	goto BulbusTown_Script_Jason_1


BulbusTown_Script_Medea::
# 118 "data//maps/BulbusTown/scripts.pory"
	lock
# 119 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 120 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, BulbusTown_Script_Medea_2
# 124 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_MedeaSage
BulbusTown_Script_Medea_1:
# 126 "data//maps/BulbusTown/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 127 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 128 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Medea_2:
# 121 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_MedeaMad, MSGBOX_DEFAULT
# 122 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Medea_1


BulbusTown_Script_MedeaSage::
# 134 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_MedeaSage_Text_0, MSGBOX_DEFAULT
# 135 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_Mareep::
# 140 "data//maps/BulbusTown/scripts.pory"
	lock
# 141 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 142 "data//maps/BulbusTown/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 143 "data//maps/BulbusTown/scripts.pory"
	waitmoncry
# 144 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Sailor1::
# 149 "data//maps/BulbusTown/scripts.pory"
	lock
# 150 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 151 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor1_2
# 153 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor1_3
# 167 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor1_1:
# 169 "data//maps/BulbusTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 170 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 171 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor1_2:
# 152 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_3:
# 154 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor1_8
BulbusTown_Script_Sailor1_7:
# 158 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForOahu, MSGBOX_YESNO
# 159 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor1_10
# 162 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 163 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_8:
# 155 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 156 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor1_7

BulbusTown_Script_Sailor1_10:
# 160 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForOahu
	goto BulbusTown_Script_Sailor1_1


BulbusTown_Script_Sailor2::
# 176 "data//maps/BulbusTown/scripts.pory"
	lock
# 177 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 178 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor2_2
# 180 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor2_3
# 195 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor2_1:
# 197 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 198 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 199 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor2_2:
# 179 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_3:
# 181 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor2_8
BulbusTown_Script_Sailor2_7:
# 185 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForGato, MSGBOX_YESNO
# 186 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor2_10
# 189 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 190 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 191 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 192 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_8:
# 182 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 183 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor2_7

BulbusTown_Script_Sailor2_10:
# 187 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForGato
	goto BulbusTown_Script_Sailor2_1


BulbusTown_Script_Sailor3::
# 204 "data//maps/BulbusTown/scripts.pory"
	lock
# 205 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 206 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor3_2
# 208 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor3_3
# 223 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor3_1:
# 225 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 226 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 227 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor3_2:
# 207 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_3:
# 209 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor3_8
BulbusTown_Script_Sailor3_7:
# 213 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForMaui, MSGBOX_YESNO
# 214 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor3_10
# 217 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 218 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 219 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 220 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_8:
# 210 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 211 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor3_7

BulbusTown_Script_Sailor3_10:
# 215 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForMaui
	goto BulbusTown_Script_Sailor3_1


BulbusTown_Script_Sailor4::
# 232 "data//maps/BulbusTown/scripts.pory"
	lock
# 233 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 234 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor4_2
# 236 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor4_3
# 251 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor4_1:
# 253 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 254 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 255 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor4_2:
# 235 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_3:
# 237 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor4_8
BulbusTown_Script_Sailor4_7:
# 241 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBayDepot, MSGBOX_YESNO
# 242 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor4_10
# 245 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 246 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 247 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 248 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_8:
# 238 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 239 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor4_7

BulbusTown_Script_Sailor4_10:
# 243 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBayDepot
	goto BulbusTown_Script_Sailor4_1


BulbusTown_Script_Sailor5::
# 260 "data//maps/BulbusTown/scripts.pory"
	lock
# 261 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 262 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor5_2
# 264 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor5_3
# 279 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor5_1:
# 281 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 282 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 283 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor5_2:
# 263 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_3:
# 265 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor5_8
BulbusTown_Script_Sailor5_7:
# 269 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBigIsland, MSGBOX_YESNO
# 270 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor5_10
# 273 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 274 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 275 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 276 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_8:
# 266 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 267 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor5_7

BulbusTown_Script_Sailor5_10:
# 271 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBigIsland
	goto BulbusTown_Script_Sailor5_1


BulbusTown_Script_Sailor6::
# 288 "data//maps/BulbusTown/scripts.pory"
	lock
# 289 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 290 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor6_2
# 292 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor6_3
# 307 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor6_1:
# 309 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 310 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 311 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor6_2:
# 291 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_3:
# 293 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor6_8
BulbusTown_Script_Sailor6_7:
# 297 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForKauai, MSGBOX_YESNO
# 298 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor6_10
# 301 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 302 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 303 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 304 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_8:
# 294 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 295 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor6_7

BulbusTown_Script_Sailor6_10:
# 299 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForKauai
	goto BulbusTown_Script_Sailor6_1


BulbusTown_Script_SailForOahu::
# 317 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForOahu_Text_0, MSGBOX_DEFAULT
# 318 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForGato::
# 324 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForGato_Text_0, MSGBOX_DEFAULT
# 325 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForMaui::
# 331 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForMaui_Text_0, MSGBOX_DEFAULT
# 332 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBayDepot::
# 338 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBayDepot_Text_0, MSGBOX_DEFAULT
# 339 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBigIsland::
# 345 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBigIsland_Text_0, MSGBOX_DEFAULT
# 346 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForKauai::
# 352 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForKauai_Text_0, MSGBOX_DEFAULT
# 353 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailorStrike::
# 358 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 359 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 360 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorStrike_3
# 362 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorStrike_4
# 364 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorStrike_5
# 366 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorStrike_6
# 368 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorStrike_7
# 370 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorStrike_8
# 372 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorStrike_9
# 374 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorStrike_10
# 376 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorStrike_11
# 378 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorStrike_12
# 381 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorStrike_1:
# 383 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorStrike_3:
# 361 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_4:
# 363 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_5:
# 365 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_6:
# 367 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_7:
# 369 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_8:
# 371 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_9:
# 373 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_10:
# 375 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_11:
# 377 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_12:
# 379 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1


BulbusTown_Script_SailorAfterStrike::
# 388 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_Script_SailorAfterStrike_2
# 391 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 392 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 393 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorAfterStrike_6
# 395 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorAfterStrike_7
# 397 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorAfterStrike_8
# 399 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorAfterStrike_9
# 401 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorAfterStrike_10
# 403 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorAfterStrike_11
# 405 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorAfterStrike_12
# 407 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorAfterStrike_13
# 409 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorAfterStrike_14
# 411 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorAfterStrike_15
# 414 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorAfterStrike_1:
# 417 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorAfterStrike_2:
# 389 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorsWonStrike, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_6:
# 394 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_7:
# 396 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_8:
# 398 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_9:
# 400 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_10:
# 402 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_11:
# 404 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_12:
# 406 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_13:
# 408 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_14:
# 410 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_15:
# 412 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1


BulbusTown_Script_MedeaSage_Text_0:
# 134 "data//maps/BulbusTown/scripts.pory"
	.string "I see the futureay$"

BulbusTown_Script_SailForOahu_Text_0:
# 317 "data//maps/BulbusTown/scripts.pory"
	.string "OAHU PLACE$"

BulbusTown_Script_SailForGato_Text_0:
# 324 "data//maps/BulbusTown/scripts.pory"
	.string "GATO PLACE$"

BulbusTown_Script_SailForMaui_Text_0:
# 331 "data//maps/BulbusTown/scripts.pory"
	.string "MAUI PLACE$"

BulbusTown_Script_SailForBayDepot_Text_0:
# 338 "data//maps/BulbusTown/scripts.pory"
	.string "BAYHUB PLACE$"

BulbusTown_Script_SailForBigIsland_Text_0:
# 345 "data//maps/BulbusTown/scripts.pory"
	.string "BIGISLAND PLACE$"

BulbusTown_Script_SailForKauai_Text_0:
# 352 "data//maps/BulbusTown/scripts.pory"
	.string "KAUAI PLACE$"

BulbusTown_Text_Fisherman::
# 421 "data//maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 425 "data//maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 429 "data//maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 433 "data//maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 437 "data//maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_SailorAvailable::
# 441 "data//maps/BulbusTown/scripts.pory"
	.string "Hey! Jason told me everything you did.\n"
	.string "It's my honor to give a ride for free.$"

BulbusTown_Text_DeclineSail::
# 445 "data//maps/BulbusTown/scripts.pory"
	.string "Let me know if, and when, you change\n"
	.string "your mind.$"

BulbusTown_Text_SailForOahu::
# 449 "data//maps/BulbusTown/scripts.pory"
	.string "I'm headed to Oahu, wanna come?$"

BulbusTown_Text_SailForGato::
# 453 "data//maps/BulbusTown/scripts.pory"
	.string "I sail for Gato City, you coming?$"

BulbusTown_Text_SailForMaui::
# 457 "data//maps/BulbusTown/scripts.pory"
	.string "Have you come for a free ride to Maui?$"

BulbusTown_Text_SailForBayDepot::
# 461 "data//maps/BulbusTown/scripts.pory"
	.string "I sail a route to the supply depot on\n"
	.string "Route 7 if you want to come with.$"

BulbusTown_Text_SailForBigIsland::
# 465 "data//maps/BulbusTown/scripts.pory"
	.string "Will you sail with me to Ignis Island?$"

BulbusTown_Text_SailForKauai::
# 469 "data//maps/BulbusTown/scripts.pory"
	.string "Are you coming with me to Kauai?$"

BulbusTown_Text_SailorStrike0::
# 473 "data//maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_SailorStrike1::
# 477 "data//maps/BulbusTown/scripts.pory"
	.string "All day! All night!$"

BulbusTown_Text_SailorStrike2::
# 481 "data//maps/BulbusTown/scripts.pory"
	.string "What do we want?\p"
	.string "Recognition!\p"
	.string "When do we want it?\p"
	.string "Now!$"

BulbusTown_Text_SailorStrike3::
# 485 "data//maps/BulbusTown/scripts.pory"
	.string "No justice! No Peace! No entitled ass\n"
	.string "custies!$"

BulbusTown_Text_SailorStrike4::
# 489 "data//maps/BulbusTown/scripts.pory"
	.string "Hey hey! Ho ho! Pay us or we'll never go!$"

BulbusTown_Text_SailorStrike5::
# 493 "data//maps/BulbusTown/scripts.pory"
	.string "No how! No way! Pay us better today!$"

BulbusTown_Text_SailorStrike6::
# 497 "data//maps/BulbusTown/scripts.pory"
	.string "Custies, get out of our sight! No work,\n"
	.string "we strike tonight!$"

BulbusTown_Text_SailorStrike7::
# 501 "data//maps/BulbusTown/scripts.pory"
	.string "Solidarity forever!$"

BulbusTown_Text_SailorStrike8::
# 505 "data//maps/BulbusTown/scripts.pory"
	.string "Anchors aweigh! Fair wages and pay!$"

BulbusTown_Text_SailorStrike9::
# 509 "data//maps/BulbusTown/scripts.pory"
	.string "We need more money! We deserve more\n"
	.string "rights!$"

BulbusTown_Text_SailorAfterStrike0::
# 513 "data//maps/BulbusTown/scripts.pory"
	.string "Our strike is over.$"

BulbusTown_Text_SailorAfterStrike1::
# 517 "data//maps/BulbusTown/scripts.pory"
	.string "Boss man made us go back to work.$"

BulbusTown_Text_SailorAfterStrike2::
# 521 "data//maps/BulbusTown/scripts.pory"
	.string "I still think we need to be treated\n"
	.string "better.$"

BulbusTown_Text_SailorAfterStrike3::
# 525 "data//maps/BulbusTown/scripts.pory"
	.string "I guess boss man never really cared\n"
	.string "about us after all.$"

BulbusTown_Text_SailorAfterStrike4::
# 529 "data//maps/BulbusTown/scripts.pory"
	.string "Forcing us to go back to work is\n"
	.string "inhumane.$"

BulbusTown_Text_SailorAfterStrike5::
# 533 "data//maps/BulbusTown/scripts.pory"
	.string "I hate this job so much it's just unreal.$"

BulbusTown_Text_SailorAfterStrike6::
# 537 "data//maps/BulbusTown/scripts.pory"
	.string "That was excessive use of force for\n"
	.string "sure!$"

BulbusTown_Text_SailorAfterStrike7::
# 541 "data//maps/BulbusTown/scripts.pory"
	.string "I still get scared when boss man comes\n"
	.string "out for inspections.$"

BulbusTown_Text_SailorAfterStrike8::
# 545 "data//maps/BulbusTown/scripts.pory"
	.string "I'm never going on strike again. I\n"
	.string "learned my lesson!$"

BulbusTown_Text_SailorAfterStrike9::
# 549 "data//maps/BulbusTown/scripts.pory"
	.string "This is it? This is what I've always\n"
	.string "supposed to be doing?$"

BulbusTown_Text_Jason1::
# 553 "data//maps/BulbusTown/scripts.pory"
	.string "Well met {PLAYER}! It's good to see\n"
	.string "you again. I helped negotiate an end to\l"
	.string "the dock worker's strike. Bringing Shiny\l"
	.string "Mareep to live in the harbor has made\l"
	.string "the men and women agree to go back to\l"
	.string "work. As thanks for your assitance to\l"
	.string "this end your free passage aboard has\l"
	.string "been arranged on every boat. Speak to\l"
	.string "the sailors if you want to sail away,\l"
	.string "it's free of charge.$"

BulbusTown_Text_Jason2::
# 557 "data//maps/BulbusTown/scripts.pory"
	.string "Standing here on the docks next to the\n"
	.string "sea, Shiny Mareep, and my wife Medea\l"
	.string "make me feel that my life is quite\l"
	.string "alright.$"

BulbusTown_Text_MedeaMad::
# 562 "data//maps/BulbusTown/scripts.pory"
	.string "Iay ancay evernay orgivefay ouyay\n"
	.string "orfay atwhay ouyay idday otay Ugialay\l"
	.string "in Olchiscay. Ebay onegay!$"

BulbusTown_Text_SailorsWonStrike::
# 566 "data//maps/BulbusTown/scripts.pory"
	.string "Jason returned and brought Shiny\n"
	.string "Mareep to live with us sailors in the\l"
	.string "harbor. We finally felt appreciated and\l"
	.string "made the decision to end our strike.$"
