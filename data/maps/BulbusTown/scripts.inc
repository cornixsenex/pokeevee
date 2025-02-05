BulbusTown_MapScripts::
# 16 "data/maps/BulbusTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_ShowStrike
	goto BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BulbusTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_HideJason
	return


BulbusTown_Script_ShowStrike::
# 33 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 6, 5, 18
# 34 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 7, 6, 18
# 37 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 39 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 15, 16, 18
# 40 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 15, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 14, 17, 18
# 43 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 8, 27, 18
# 46 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 1, 28, 18
# 49 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BulbusTown_Script_HideJason::
# 55 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 16, 26, 11
# 56 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 16, MOVEMENT_TYPE_INVISIBLE
# 58 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 17, 27, 11
# 59 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 17, MOVEMENT_TYPE_INVISIBLE
# 61 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 18, 28, 11
# 62 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 18, MOVEMENT_TYPE_INVISIBLE
	return


BulbusTown_EventScript_Fisherman::
# 68 "data/maps/BulbusTown/scripts.pory"
	lock
# 69 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 70 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 71 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 76 "data/maps/BulbusTown/scripts.pory"
	lock
# 77 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 78 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 83 "data/maps/BulbusTown/scripts.pory"
	lock
# 84 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 85 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 90 "data/maps/BulbusTown/scripts.pory"
	lock
# 91 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 92 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 93 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 98 "data/maps/BulbusTown/scripts.pory"
	lock
# 99 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 100 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 101 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Jason::
# 106 "data/maps/BulbusTown/scripts.pory"
	lock
# 107 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 108 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Jason_2
# 112 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason2, MSGBOX_DEFAULT
BulbusTown_Script_Jason_1:
# 114 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 115 "data/maps/BulbusTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 116 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 117 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Jason_2:
# 109 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORSOPEN
# 110 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason1, MSGBOX_DEFAULT
	goto BulbusTown_Script_Jason_1


BulbusTown_Script_Medea::
# 122 "data/maps/BulbusTown/scripts.pory"
	lock
# 123 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 124 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, BulbusTown_Script_Medea_2
# 128 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_MedeaSage
BulbusTown_Script_Medea_1:
# 130 "data/maps/BulbusTown/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 131 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Medea_2:
# 125 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_MedeaMad, MSGBOX_DEFAULT
# 126 "data/maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Medea_1


BulbusTown_Script_MedeaSage::
# 138 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_MedeaSage_Text_0, MSGBOX_DEFAULT
# 139 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_Mareep::
# 144 "data/maps/BulbusTown/scripts.pory"
	lock
# 145 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 146 "data/maps/BulbusTown/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 147 "data/maps/BulbusTown/scripts.pory"
	waitmoncry
# 148 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Sailor1::
# 153 "data/maps/BulbusTown/scripts.pory"
	lock
# 154 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 155 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor1_2
# 157 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor1_3
# 171 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 172 "data/maps/BulbusTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 173 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor1_1:
# 175 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor1_2:
# 156 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_3:
# 158 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor1_8
BulbusTown_Script_Sailor1_7:
# 162 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForOahu, MSGBOX_YESNO
# 163 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor1_10
# 166 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 167 "data/maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_8:
# 159 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 160 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor1_7

BulbusTown_Script_Sailor1_10:
# 164 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForOahu
	goto BulbusTown_Script_Sailor1_1


BulbusTown_Script_Sailor2::
# 180 "data/maps/BulbusTown/scripts.pory"
	lock
# 181 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 182 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor2_2
# 184 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor2_3
# 199 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 200 "data/maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 201 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor2_1:
# 203 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor2_2:
# 183 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_3:
# 185 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor2_8
BulbusTown_Script_Sailor2_7:
# 189 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForGato, MSGBOX_YESNO
# 190 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor2_10
# 193 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 194 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 195 "data/maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 196 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_8:
# 186 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 187 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor2_7

BulbusTown_Script_Sailor2_10:
# 191 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForGato
	goto BulbusTown_Script_Sailor2_1


BulbusTown_Script_Sailor3::
# 208 "data/maps/BulbusTown/scripts.pory"
	lock
# 209 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 210 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor3_2
# 212 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor3_3
# 227 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 228 "data/maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 229 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor3_1:
# 231 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor3_2:
# 211 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_3:
# 213 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor3_8
BulbusTown_Script_Sailor3_7:
# 217 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForMaui, MSGBOX_YESNO
# 218 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor3_10
# 221 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 222 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 223 "data/maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 224 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_8:
# 214 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 215 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor3_7

BulbusTown_Script_Sailor3_10:
# 219 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForMaui
	goto BulbusTown_Script_Sailor3_1


BulbusTown_Script_Sailor4::
# 236 "data/maps/BulbusTown/scripts.pory"
	lock
# 237 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 238 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor4_2
# 240 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor4_3
# 255 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 256 "data/maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 257 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor4_1:
# 260 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor4_2:
# 239 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_3:
# 241 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor4_8
BulbusTown_Script_Sailor4_7:
# 245 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBayDepot, MSGBOX_YESNO
# 246 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor4_10
# 249 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 250 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 251 "data/maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 252 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_8:
# 242 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 243 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor4_7

BulbusTown_Script_Sailor4_10:
# 247 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBayDepot
	goto BulbusTown_Script_Sailor4_1


BulbusTown_Script_Sailor5::
# 265 "data/maps/BulbusTown/scripts.pory"
	lock
# 266 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 267 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor5_2
# 269 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor5_3
# 284 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 285 "data/maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 286 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor5_1:
# 288 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor5_2:
# 268 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_3:
# 270 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor5_8
BulbusTown_Script_Sailor5_7:
# 274 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBigIsland, MSGBOX_YESNO
# 275 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor5_10
# 278 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 279 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 280 "data/maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 281 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_8:
# 271 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 272 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor5_7

BulbusTown_Script_Sailor5_10:
# 276 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBigIsland
	goto BulbusTown_Script_Sailor5_1


BulbusTown_Script_Sailor6::
# 293 "data/maps/BulbusTown/scripts.pory"
	lock
# 294 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 295 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor6_2
# 297 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor6_3
# 312 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 313 "data/maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 314 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor6_1:
# 316 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor6_2:
# 296 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_3:
# 298 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor6_8
BulbusTown_Script_Sailor6_7:
# 302 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForKauai, MSGBOX_YESNO
# 303 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor6_10
# 306 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 307 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 308 "data/maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 309 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_8:
# 299 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 300 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor6_7

BulbusTown_Script_Sailor6_10:
# 304 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForKauai
	goto BulbusTown_Script_Sailor6_1


BulbusTown_EventScript_BusinessMan::
# 321 "data/maps/BulbusTown/scripts.pory"
	lock
# 322 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 323 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_BusinessMan, MSGBOX_DEFAULT
# 324 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 326 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_SailForOahu::
# 332 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForOahu_Text_0, MSGBOX_DEFAULT
# 333 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForGato::
# 339 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForGato_Text_0, MSGBOX_DEFAULT
# 340 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForMaui::
# 346 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForMaui_Text_0, MSGBOX_DEFAULT
# 347 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBayDepot::
# 353 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBayDepot_Text_0, MSGBOX_DEFAULT
# 354 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBigIsland::
# 360 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBigIsland_Text_0, MSGBOX_DEFAULT
# 361 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForKauai::
# 367 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForKauai_Text_0, MSGBOX_DEFAULT
# 368 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailorStrike::
# 373 "data/maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 374 "data/maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 375 "data/maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorStrike_3
# 377 "data/maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorStrike_4
# 379 "data/maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorStrike_5
# 381 "data/maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorStrike_6
# 383 "data/maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorStrike_7
# 385 "data/maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorStrike_8
# 387 "data/maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorStrike_9
# 389 "data/maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorStrike_10
# 391 "data/maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorStrike_11
# 393 "data/maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorStrike_12
# 396 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorStrike_1:
# 398 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorStrike_3:
# 376 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_4:
# 378 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_5:
# 380 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_6:
# 382 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_7:
# 384 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_8:
# 386 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_9:
# 388 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_10:
# 390 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_11:
# 392 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_12:
# 394 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1


BulbusTown_Script_SailorAfterStrike::
# 403 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_Script_SailorAfterStrike_2
# 406 "data/maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 407 "data/maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorAfterStrike_6
# 410 "data/maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorAfterStrike_7
# 412 "data/maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorAfterStrike_8
# 414 "data/maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorAfterStrike_9
# 416 "data/maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorAfterStrike_10
# 418 "data/maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorAfterStrike_11
# 420 "data/maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorAfterStrike_12
# 422 "data/maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorAfterStrike_13
# 424 "data/maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorAfterStrike_14
# 426 "data/maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorAfterStrike_15
# 429 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorAfterStrike_1:
# 432 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorAfterStrike_2:
# 404 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorsWonStrike, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_6:
# 409 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_7:
# 411 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_8:
# 413 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_9:
# 415 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_10:
# 417 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_11:
# 419 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_12:
# 421 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_13:
# 423 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_14:
# 425 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_15:
# 427 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1


BulbusTown_Script_MedeaSage_Text_0:
# 138 "data/maps/BulbusTown/scripts.pory"
	.string "I see the futureay$"

BulbusTown_Script_SailForOahu_Text_0:
# 332 "data/maps/BulbusTown/scripts.pory"
	.string "OAHU PLACE$"

BulbusTown_Script_SailForGato_Text_0:
# 339 "data/maps/BulbusTown/scripts.pory"
	.string "GATO PLACE$"

BulbusTown_Script_SailForMaui_Text_0:
# 346 "data/maps/BulbusTown/scripts.pory"
	.string "MAUI PLACE$"

BulbusTown_Script_SailForBayDepot_Text_0:
# 353 "data/maps/BulbusTown/scripts.pory"
	.string "BAYHUB PLACE$"

BulbusTown_Script_SailForBigIsland_Text_0:
# 360 "data/maps/BulbusTown/scripts.pory"
	.string "BIGISLAND PLACE$"

BulbusTown_Script_SailForKauai_Text_0:
# 367 "data/maps/BulbusTown/scripts.pory"
	.string "KAUAI PLACE$"

BulbusTown_Text_Fisherman::
# 436 "data/maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 440 "data/maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 444 "data/maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 448 "data/maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 452 "data/maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_SailorAvailable::
# 456 "data/maps/BulbusTown/scripts.pory"
	.string "Hey! Jason told me everything you did.\n"
	.string "It's my honor to give a ride for free.$"

BulbusTown_Text_DeclineSail::
# 460 "data/maps/BulbusTown/scripts.pory"
	.string "Let me know if, and when, you change\n"
	.string "your mind.$"

BulbusTown_Text_SailForOahu::
# 464 "data/maps/BulbusTown/scripts.pory"
	.string "I'm headed to Oahu, wanna come?$"

BulbusTown_Text_SailForGato::
# 468 "data/maps/BulbusTown/scripts.pory"
	.string "I sail for Gato City, you coming?$"

BulbusTown_Text_SailForMaui::
# 472 "data/maps/BulbusTown/scripts.pory"
	.string "Have you come for a free ride to Maui?$"

BulbusTown_Text_SailForBayDepot::
# 476 "data/maps/BulbusTown/scripts.pory"
	.string "I sail a route to the supply depot on\n"
	.string "Route 7 if you want to come with.$"

BulbusTown_Text_SailForBigIsland::
# 480 "data/maps/BulbusTown/scripts.pory"
	.string "Will you sail with me to Ignis Island?$"

BulbusTown_Text_SailForKauai::
# 484 "data/maps/BulbusTown/scripts.pory"
	.string "Are you coming with me to Kauai?$"

BulbusTown_Text_SailorStrike0::
# 488 "data/maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_SailorStrike1::
# 492 "data/maps/BulbusTown/scripts.pory"
	.string "All day! All night!$"

BulbusTown_Text_SailorStrike2::
# 496 "data/maps/BulbusTown/scripts.pory"
	.string "What do we want?\p"
	.string "Recognition!\p"
	.string "When do we want it?\p"
	.string "Now!$"

BulbusTown_Text_SailorStrike3::
# 500 "data/maps/BulbusTown/scripts.pory"
	.string "No justice! No Peace! No entitled ass\n"
	.string "custies!$"

BulbusTown_Text_SailorStrike4::
# 504 "data/maps/BulbusTown/scripts.pory"
	.string "Hey hey! Ho ho! Pay us or we'll never go!$"

BulbusTown_Text_SailorStrike5::
# 508 "data/maps/BulbusTown/scripts.pory"
	.string "No how! No way! Pay us better today!$"

BulbusTown_Text_SailorStrike6::
# 512 "data/maps/BulbusTown/scripts.pory"
	.string "Custies, get out of our sight! No work,\n"
	.string "we strike tonight!$"

BulbusTown_Text_SailorStrike7::
# 516 "data/maps/BulbusTown/scripts.pory"
	.string "Solidarity forever!$"

BulbusTown_Text_SailorStrike8::
# 520 "data/maps/BulbusTown/scripts.pory"
	.string "Anchors aweigh! Fair wages and pay!$"

BulbusTown_Text_SailorStrike9::
# 524 "data/maps/BulbusTown/scripts.pory"
	.string "We need more money! We deserve more\n"
	.string "rights!$"

BulbusTown_Text_SailorAfterStrike0::
# 528 "data/maps/BulbusTown/scripts.pory"
	.string "Our strike is over.$"

BulbusTown_Text_SailorAfterStrike1::
# 532 "data/maps/BulbusTown/scripts.pory"
	.string "Boss man made us go back to work.$"

BulbusTown_Text_SailorAfterStrike2::
# 536 "data/maps/BulbusTown/scripts.pory"
	.string "I still think we need to be treated\n"
	.string "better.$"

BulbusTown_Text_SailorAfterStrike3::
# 540 "data/maps/BulbusTown/scripts.pory"
	.string "I guess boss man never really cared\n"
	.string "about us after all.$"

BulbusTown_Text_SailorAfterStrike4::
# 544 "data/maps/BulbusTown/scripts.pory"
	.string "Forcing us to go back to work is\n"
	.string "inhumane.$"

BulbusTown_Text_SailorAfterStrike5::
# 548 "data/maps/BulbusTown/scripts.pory"
	.string "I hate this job so much it's just unreal.$"

BulbusTown_Text_SailorAfterStrike6::
# 552 "data/maps/BulbusTown/scripts.pory"
	.string "That was excessive use of force for\n"
	.string "sure!$"

BulbusTown_Text_SailorAfterStrike7::
# 556 "data/maps/BulbusTown/scripts.pory"
	.string "I still get scared when boss man comes\n"
	.string "out for inspections.$"

BulbusTown_Text_SailorAfterStrike8::
# 560 "data/maps/BulbusTown/scripts.pory"
	.string "I'm never going on strike again. I\n"
	.string "learned my lesson!$"

BulbusTown_Text_SailorAfterStrike9::
# 564 "data/maps/BulbusTown/scripts.pory"
	.string "This is it? This is what I've always\n"
	.string "supposed to be doing?$"

BulbusTown_Text_Jason1::
# 568 "data/maps/BulbusTown/scripts.pory"
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
# 572 "data/maps/BulbusTown/scripts.pory"
	.string "Standing here on the docks next to the\n"
	.string "sea, Shiny Mareep, and my wife Medea\l"
	.string "make me feel that my life is quite\l"
	.string "alright.$"

BulbusTown_Text_MedeaMad::
# 577 "data/maps/BulbusTown/scripts.pory"
	.string "Iay ancay evernay orgivefay ouyay\n"
	.string "orfay atwhay ouyay idday otay Ugialay\l"
	.string "in Olchiscay. Ebay onegay!$"

BulbusTown_Text_SailorsWonStrike::
# 581 "data/maps/BulbusTown/scripts.pory"
	.string "Jason returned and brought Shiny\n"
	.string "Mareep to live with us sailors in the\l"
	.string "harbor. We finally felt appreciated and\l"
	.string "made the decision to end our strike.$"

BulbusTown_Text_BusinessMan::
# 585 "data/maps/BulbusTown/scripts.pory"
	.string "This strike is terrible for my business!$"
