BulbusTown_MapScripts::
# 19 "data//maps/BulbusTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 26 "data//maps/BulbusTown/scripts.pory"
	compare VAR_SILVANWOODS_STATE, 0
	goto_if_eq BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 21 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_ShowStrike
	goto BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_HideJason
	goto BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 27 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_ShowBrawl
	return


BulbusTown_Script_ShowBrawl::
# 37 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 3, 27, 6
# 38 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_RUN_IN_PLACE_DOWN
# 40 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 4, 27, 7
# 41 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_RUN_IN_PLACE_UP
	return


BulbusTown_Script_ShowStrike::
# 50 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 6, 5, 18
# 51 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 53 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 7, 6, 18
# 54 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 56 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 15, 16, 18
# 57 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 59 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 14, 17, 18
# 60 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 62 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 8, 27, 18
# 63 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 65 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 1, 28, 18
# 66 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BulbusTown_Script_HideJason::
# 72 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 16, 26, 11
# 73 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 75 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 17, 27, 11
# 76 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
# 78 "data//maps/BulbusTown/scripts.pory"
	setobjectxyperm 18, 28, 11
# 79 "data//maps/BulbusTown/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_INVISIBLE
	return


BulbusTown_EventScript_Fisherman::
# 85 "data//maps/BulbusTown/scripts.pory"
	lock
# 86 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 87 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 88 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 93 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 94 "data//maps/BulbusTown/scripts.pory"
	closemessage
	end


BulbusTown_EventScript_FightB::
# 99 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 100 "data//maps/BulbusTown/scripts.pory"
	closemessage
	end


BulbusTown_EventScript_ClubSign::
# 105 "data//maps/BulbusTown/scripts.pory"
	lock
# 106 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 107 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 108 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 113 "data//maps/BulbusTown/scripts.pory"
	lock
# 114 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 115 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 116 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Jason::
# 121 "data//maps/BulbusTown/scripts.pory"
	lock
# 122 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 123 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Jason_2
# 127 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason2, MSGBOX_DEFAULT
BulbusTown_Script_Jason_1:
# 129 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 130 "data//maps/BulbusTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 131 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 132 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Jason_2:
# 124 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORSOPEN
# 125 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason1, MSGBOX_DEFAULT
	goto BulbusTown_Script_Jason_1


BulbusTown_Script_Medea::
# 137 "data//maps/BulbusTown/scripts.pory"
	lock
# 138 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 139 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, BulbusTown_Script_Medea_2
# 143 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_MedeaSage
BulbusTown_Script_Medea_1:
# 145 "data//maps/BulbusTown/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 146 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 147 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Medea_2:
# 140 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_MedeaMad, MSGBOX_DEFAULT
# 141 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Medea_1


BulbusTown_Script_MedeaSage::
# 153 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_MedeaSage_Text_0, MSGBOX_DEFAULT
# 154 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_Mareep::
# 159 "data//maps/BulbusTown/scripts.pory"
	lock
# 160 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 161 "data//maps/BulbusTown/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 162 "data//maps/BulbusTown/scripts.pory"
	waitmoncry
# 163 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Sailor1::
# 168 "data//maps/BulbusTown/scripts.pory"
	lock
# 169 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 170 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor1_2
# 172 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor1_3
# 186 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 187 "data//maps/BulbusTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 188 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor1_1:
# 190 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor1_2:
# 171 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_3:
# 173 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor1_8
BulbusTown_Script_Sailor1_7:
# 177 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForOahu, MSGBOX_YESNO
# 178 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor1_10
# 181 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 182 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_8:
# 174 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 175 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor1_7

BulbusTown_Script_Sailor1_10:
# 179 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForOahu
	goto BulbusTown_Script_Sailor1_1


BulbusTown_Script_Sailor2::
# 195 "data//maps/BulbusTown/scripts.pory"
	lock
# 196 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 197 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor2_2
# 199 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor2_3
# 214 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 215 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 216 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor2_1:
# 218 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor2_2:
# 198 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_3:
# 200 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor2_8
BulbusTown_Script_Sailor2_7:
# 204 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForGato, MSGBOX_YESNO
# 205 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor2_10
# 208 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 209 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 210 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 211 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_8:
# 201 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 202 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor2_7

BulbusTown_Script_Sailor2_10:
# 206 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForGato
	goto BulbusTown_Script_Sailor2_1


BulbusTown_Script_Sailor3::
# 223 "data//maps/BulbusTown/scripts.pory"
	lock
# 224 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 225 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor3_2
# 227 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor3_3
# 242 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 243 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 244 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor3_1:
# 246 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor3_2:
# 226 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_3:
# 228 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor3_8
BulbusTown_Script_Sailor3_7:
# 232 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForMaui, MSGBOX_YESNO
# 233 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor3_10
# 236 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 237 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 238 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 239 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_8:
# 229 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 230 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor3_7

BulbusTown_Script_Sailor3_10:
# 234 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForMaui
	goto BulbusTown_Script_Sailor3_1


BulbusTown_Script_Sailor4::
# 251 "data//maps/BulbusTown/scripts.pory"
	lock
# 252 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 253 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor4_2
# 255 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor4_3
# 270 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 271 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 272 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor4_1:
# 275 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor4_2:
# 254 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_3:
# 256 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor4_8
BulbusTown_Script_Sailor4_7:
# 260 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBayDepot, MSGBOX_YESNO
# 261 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor4_10
# 264 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 265 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 266 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 267 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_8:
# 257 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 258 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor4_7

BulbusTown_Script_Sailor4_10:
# 262 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBayDepot
	goto BulbusTown_Script_Sailor4_1


BulbusTown_Script_Sailor5::
# 280 "data//maps/BulbusTown/scripts.pory"
	lock
# 281 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 282 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor5_2
# 284 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor5_3
# 299 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 300 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 301 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor5_1:
# 303 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor5_2:
# 283 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_3:
# 285 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor5_8
BulbusTown_Script_Sailor5_7:
# 289 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBigIsland, MSGBOX_YESNO
# 290 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor5_10
# 293 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 294 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 295 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 296 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_8:
# 286 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 287 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor5_7

BulbusTown_Script_Sailor5_10:
# 291 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBigIsland
	goto BulbusTown_Script_Sailor5_1


BulbusTown_Script_Sailor6::
# 308 "data//maps/BulbusTown/scripts.pory"
	lock
# 309 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 310 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor6_2
# 312 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor6_3
# 327 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 328 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 329 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor6_1:
# 331 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor6_2:
# 311 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_3:
# 313 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor6_8
BulbusTown_Script_Sailor6_7:
# 317 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForKauai, MSGBOX_YESNO
# 318 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor6_10
# 321 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 322 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 323 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 324 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_8:
# 314 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 315 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor6_7

BulbusTown_Script_Sailor6_10:
# 319 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForKauai
	goto BulbusTown_Script_Sailor6_1


BulbusTown_EventScript_BusinessMan::
# 336 "data//maps/BulbusTown/scripts.pory"
	lock
# 337 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 338 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_BusinessMan, MSGBOX_DEFAULT
# 339 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 341 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_SailForOahu::
# 347 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForOahu_Text_0, MSGBOX_DEFAULT
# 348 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForGato::
# 354 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForGato_Text_0, MSGBOX_DEFAULT
# 355 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForMaui::
# 361 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForMaui_Text_0, MSGBOX_DEFAULT
# 362 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBayDepot::
# 368 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBayDepot_Text_0, MSGBOX_DEFAULT
# 369 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBigIsland::
# 375 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBigIsland_Text_0, MSGBOX_DEFAULT
# 376 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForKauai::
# 382 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForKauai_Text_0, MSGBOX_DEFAULT
# 383 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailorStrike::
# 388 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 389 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 390 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorStrike_3
# 392 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorStrike_4
# 394 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorStrike_5
# 396 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorStrike_6
# 398 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorStrike_7
# 400 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorStrike_8
# 402 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorStrike_9
# 404 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorStrike_10
# 406 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorStrike_11
# 408 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorStrike_12
# 411 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorStrike_1:
# 413 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorStrike_3:
# 391 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_4:
# 393 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_5:
# 395 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_6:
# 397 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_7:
# 399 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_8:
# 401 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_9:
# 403 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_10:
# 405 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_11:
# 407 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_12:
# 409 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1


BulbusTown_Script_SailorAfterStrike::
# 418 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_Script_SailorAfterStrike_2
# 421 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 422 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 423 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorAfterStrike_6
# 425 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorAfterStrike_7
# 427 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorAfterStrike_8
# 429 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorAfterStrike_9
# 431 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorAfterStrike_10
# 433 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorAfterStrike_11
# 435 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorAfterStrike_12
# 437 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorAfterStrike_13
# 439 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorAfterStrike_14
# 441 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorAfterStrike_15
# 444 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorAfterStrike_1:
# 447 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorAfterStrike_2:
# 419 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorsWonStrike, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_6:
# 424 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_7:
# 426 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_8:
# 428 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_9:
# 430 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_10:
# 432 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_11:
# 434 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_12:
# 436 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_13:
# 438 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_14:
# 440 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_15:
# 442 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1


BulbusTown_Script_MedeaSage_Text_0:
# 153 "data//maps/BulbusTown/scripts.pory"
	.string "I see the futureay$"

BulbusTown_Script_SailForOahu_Text_0:
# 347 "data//maps/BulbusTown/scripts.pory"
	.string "OAHU PLACE$"

BulbusTown_Script_SailForGato_Text_0:
# 354 "data//maps/BulbusTown/scripts.pory"
	.string "GATO PLACE$"

BulbusTown_Script_SailForMaui_Text_0:
# 361 "data//maps/BulbusTown/scripts.pory"
	.string "MAUI PLACE$"

BulbusTown_Script_SailForBayDepot_Text_0:
# 368 "data//maps/BulbusTown/scripts.pory"
	.string "BAYHUB PLACE$"

BulbusTown_Script_SailForBigIsland_Text_0:
# 375 "data//maps/BulbusTown/scripts.pory"
	.string "BIGISLAND PLACE$"

BulbusTown_Script_SailForKauai_Text_0:
# 382 "data//maps/BulbusTown/scripts.pory"
	.string "KAUAI PLACE$"

BulbusTown_Text_Fisherman::
# 451 "data//maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 455 "data//maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 459 "data//maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 463 "data//maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 467 "data//maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_SailorAvailable::
# 471 "data//maps/BulbusTown/scripts.pory"
	.string "Hey! Jason told me everything you did.\n"
	.string "It's my honor to give a ride for free.$"

BulbusTown_Text_DeclineSail::
# 475 "data//maps/BulbusTown/scripts.pory"
	.string "Let me know if, and when, you change\n"
	.string "your mind.$"

BulbusTown_Text_SailForOahu::
# 479 "data//maps/BulbusTown/scripts.pory"
	.string "I'm headed to Oahu, wanna come?$"

BulbusTown_Text_SailForGato::
# 483 "data//maps/BulbusTown/scripts.pory"
	.string "I sail for Gato City, you coming?$"

BulbusTown_Text_SailForMaui::
# 487 "data//maps/BulbusTown/scripts.pory"
	.string "Have you come for a free ride to Maui?$"

BulbusTown_Text_SailForBayDepot::
# 491 "data//maps/BulbusTown/scripts.pory"
	.string "I sail a route to the supply depot on\n"
	.string "Route 7 if you want to come with.$"

BulbusTown_Text_SailForBigIsland::
# 495 "data//maps/BulbusTown/scripts.pory"
	.string "Will you sail with me to Ignis Island?$"

BulbusTown_Text_SailForKauai::
# 499 "data//maps/BulbusTown/scripts.pory"
	.string "Are you coming with me to Kauai?$"

BulbusTown_Text_SailorStrike0::
# 503 "data//maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_SailorStrike1::
# 507 "data//maps/BulbusTown/scripts.pory"
	.string "All day! All night!$"

BulbusTown_Text_SailorStrike2::
# 511 "data//maps/BulbusTown/scripts.pory"
	.string "What do we want?\p"
	.string "Recognition!\p"
	.string "When do we want it?\p"
	.string "Now!$"

BulbusTown_Text_SailorStrike3::
# 515 "data//maps/BulbusTown/scripts.pory"
	.string "No justice! No Peace! No entitled ass\n"
	.string "custies!$"

BulbusTown_Text_SailorStrike4::
# 519 "data//maps/BulbusTown/scripts.pory"
	.string "Hey hey! Ho ho! Pay us or we'll never go!$"

BulbusTown_Text_SailorStrike5::
# 523 "data//maps/BulbusTown/scripts.pory"
	.string "No how! No way! Pay us better today!$"

BulbusTown_Text_SailorStrike6::
# 527 "data//maps/BulbusTown/scripts.pory"
	.string "Custies, get out of our sight! No work,\n"
	.string "we strike tonight!$"

BulbusTown_Text_SailorStrike7::
# 531 "data//maps/BulbusTown/scripts.pory"
	.string "Solidarity forever!$"

BulbusTown_Text_SailorStrike8::
# 535 "data//maps/BulbusTown/scripts.pory"
	.string "Anchors aweigh! Fair wages and pay!$"

BulbusTown_Text_SailorStrike9::
# 539 "data//maps/BulbusTown/scripts.pory"
	.string "We need more money! We deserve more\n"
	.string "rights!$"

BulbusTown_Text_SailorAfterStrike0::
# 543 "data//maps/BulbusTown/scripts.pory"
	.string "Our strike is over.$"

BulbusTown_Text_SailorAfterStrike1::
# 547 "data//maps/BulbusTown/scripts.pory"
	.string "Boss man made us go back to work.$"

BulbusTown_Text_SailorAfterStrike2::
# 551 "data//maps/BulbusTown/scripts.pory"
	.string "I still think we need to be treated\n"
	.string "better.$"

BulbusTown_Text_SailorAfterStrike3::
# 555 "data//maps/BulbusTown/scripts.pory"
	.string "I guess boss man never really cared\n"
	.string "about us after all.$"

BulbusTown_Text_SailorAfterStrike4::
# 559 "data//maps/BulbusTown/scripts.pory"
	.string "Forcing us to go back to work is\n"
	.string "inhumane.$"

BulbusTown_Text_SailorAfterStrike5::
# 563 "data//maps/BulbusTown/scripts.pory"
	.string "I hate this job so much it's just unreal.$"

BulbusTown_Text_SailorAfterStrike6::
# 567 "data//maps/BulbusTown/scripts.pory"
	.string "That was excessive use of force for\n"
	.string "sure!$"

BulbusTown_Text_SailorAfterStrike7::
# 571 "data//maps/BulbusTown/scripts.pory"
	.string "I still get scared when boss man comes\n"
	.string "out for inspections.$"

BulbusTown_Text_SailorAfterStrike8::
# 575 "data//maps/BulbusTown/scripts.pory"
	.string "I'm never going on strike again. I\n"
	.string "learned my lesson!$"

BulbusTown_Text_SailorAfterStrike9::
# 579 "data//maps/BulbusTown/scripts.pory"
	.string "This is it? This is what I've always\n"
	.string "supposed to be doing?$"

BulbusTown_Text_Jason1::
# 583 "data//maps/BulbusTown/scripts.pory"
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
# 587 "data//maps/BulbusTown/scripts.pory"
	.string "Standing here on the docks next to the\n"
	.string "sea, Shiny Mareep, and my wife Medea\l"
	.string "make me feel that my life is quite\l"
	.string "alright.$"

BulbusTown_Text_MedeaMad::
# 592 "data//maps/BulbusTown/scripts.pory"
	.string "Iay ancay evernay orgivefay ouyay\n"
	.string "orfay atwhay ouyay idday otay Ugialay\l"
	.string "in Olchiscay. Ebay onegay!$"

BulbusTown_Text_SailorsWonStrike::
# 596 "data//maps/BulbusTown/scripts.pory"
	.string "Jason returned and brought Shiny\n"
	.string "Mareep to live with us sailors in the\l"
	.string "harbor. We finally felt appreciated and\l"
	.string "made the decision to end our strike.$"

BulbusTown_Text_BusinessMan::
# 600 "data//maps/BulbusTown/scripts.pory"
	.string "This strike is terrible for my business!$"
