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
# 29 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 6, 5, 18
# 30 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 7, 6, 18
# 33 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 27, 16, 18
# 36 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 27, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 26, 17, 18
# 39 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 8, 27, 18
# 42 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/BulbusTown/scripts.pory"
	setobjectxyperm 1, 28, 18
# 45 "data/maps/BulbusTown/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BulbusTown_Script_HideJason::
# 51 "data/maps/BulbusTown/scripts.pory"
	removeobject 16
# 52 "data/maps/BulbusTown/scripts.pory"
	removeobject 17
# 53 "data/maps/BulbusTown/scripts.pory"
	removeobject 18
	return


BulbusTown_EventScript_Fisherman::
# 59 "data/maps/BulbusTown/scripts.pory"
	lock
# 60 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 61 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Fisherman
# 62 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightA::
# 67 "data/maps/BulbusTown/scripts.pory"
	lock
# 68 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 69 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 74 "data/maps/BulbusTown/scripts.pory"
	lock
# 75 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 76 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 81 "data/maps/BulbusTown/scripts.pory"
	lock
# 82 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 83 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 84 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 89 "data/maps/BulbusTown/scripts.pory"
	lock
# 90 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 91 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 92 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Jason::
# 97 "data/maps/BulbusTown/scripts.pory"
	lock
# 98 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 99 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Jason_2
# 103 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason2, MSGBOX_DEFAULT
BulbusTown_Script_Jason_1:
# 105 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 106 "data/maps/BulbusTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 107 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Jason_2:
# 100 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORSOPEN
# 101 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason1, MSGBOX_DEFAULT
	goto BulbusTown_Script_Jason_1


BulbusTown_Script_Medea::
# 113 "data/maps/BulbusTown/scripts.pory"
	lock
# 114 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 115 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, BulbusTown_Script_Medea_2
# 119 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_MedeaSage
BulbusTown_Script_Medea_1:
# 121 "data/maps/BulbusTown/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 122 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Medea_2:
# 116 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_MedeaMad, MSGBOX_DEFAULT
# 117 "data/maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Medea_1


BulbusTown_Script_MedeaSage::
# 129 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_MedeaSage_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_Mareep::
# 135 "data/maps/BulbusTown/scripts.pory"
	lock
# 136 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 137 "data/maps/BulbusTown/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 138 "data/maps/BulbusTown/scripts.pory"
	waitmoncry
# 139 "data/maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Sailor1::
# 144 "data/maps/BulbusTown/scripts.pory"
	lock
# 145 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 146 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor1_2
# 148 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor1_3
# 162 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor1_1:
# 164 "data/maps/BulbusTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 165 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor1_2:
# 147 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_3:
# 149 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor1_8
BulbusTown_Script_Sailor1_7:
# 153 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForOahu, MSGBOX_YESNO
# 154 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor1_10
# 157 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 158 "data/maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_8:
# 150 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 151 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor1_7

BulbusTown_Script_Sailor1_10:
# 155 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForOahu
	goto BulbusTown_Script_Sailor1_1


BulbusTown_Script_Sailor2::
# 171 "data/maps/BulbusTown/scripts.pory"
	lock
# 172 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 173 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor2_2
# 175 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor2_3
# 190 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor2_1:
# 192 "data/maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 193 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor2_2:
# 174 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_3:
# 176 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor2_8
BulbusTown_Script_Sailor2_7:
# 180 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForGato, MSGBOX_YESNO
# 181 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor2_10
# 184 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 185 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 186 "data/maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 187 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_8:
# 177 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 178 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor2_7

BulbusTown_Script_Sailor2_10:
# 182 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForGato
	goto BulbusTown_Script_Sailor2_1


BulbusTown_Script_Sailor3::
# 199 "data/maps/BulbusTown/scripts.pory"
	lock
# 200 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 201 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor3_2
# 203 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor3_3
# 218 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor3_1:
# 220 "data/maps/BulbusTown/scripts.pory"
	applymovement 27, Common_Movement_FaceDown
# 221 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor3_2:
# 202 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_3:
# 204 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor3_8
BulbusTown_Script_Sailor3_7:
# 208 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForMaui, MSGBOX_YESNO
# 209 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor3_10
# 212 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 213 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 214 "data/maps/BulbusTown/scripts.pory"
	applymovement 27, Common_Movement_FaceDown
# 215 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_8:
# 205 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 206 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor3_7

BulbusTown_Script_Sailor3_10:
# 210 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForMaui
	goto BulbusTown_Script_Sailor3_1


BulbusTown_Script_Sailor4::
# 227 "data/maps/BulbusTown/scripts.pory"
	lock
# 228 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 229 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor4_2
# 231 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor4_3
# 246 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor4_1:
# 248 "data/maps/BulbusTown/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 249 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor4_2:
# 230 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_3:
# 232 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor4_8
BulbusTown_Script_Sailor4_7:
# 236 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBayDepot, MSGBOX_YESNO
# 237 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor4_10
# 240 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 241 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 242 "data/maps/BulbusTown/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 243 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_8:
# 233 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 234 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor4_7

BulbusTown_Script_Sailor4_10:
# 238 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBayDepot
	goto BulbusTown_Script_Sailor4_1


BulbusTown_Script_Sailor5::
# 255 "data/maps/BulbusTown/scripts.pory"
	lock
# 256 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 257 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor5_2
# 259 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor5_3
# 274 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor5_1:
# 276 "data/maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 277 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor5_2:
# 258 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_3:
# 260 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor5_8
BulbusTown_Script_Sailor5_7:
# 264 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBigIsland, MSGBOX_YESNO
# 265 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor5_10
# 268 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 269 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 270 "data/maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 271 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_8:
# 261 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 262 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor5_7

BulbusTown_Script_Sailor5_10:
# 266 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBigIsland
	goto BulbusTown_Script_Sailor5_1


BulbusTown_Script_Sailor6::
# 283 "data/maps/BulbusTown/scripts.pory"
	lock
# 284 "data/maps/BulbusTown/scripts.pory"
	faceplayer
# 285 "data/maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor6_2
# 287 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor6_3
# 302 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
BulbusTown_Script_Sailor6_1:
# 304 "data/maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 305 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor6_2:
# 286 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_3:
# 288 "data/maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor6_8
BulbusTown_Script_Sailor6_7:
# 292 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForKauai, MSGBOX_YESNO
# 293 "data/maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor6_10
# 296 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 297 "data/maps/BulbusTown/scripts.pory"
	closemessage
# 298 "data/maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 299 "data/maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_8:
# 289 "data/maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 290 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor6_7

BulbusTown_Script_Sailor6_10:
# 294 "data/maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForKauai
	goto BulbusTown_Script_Sailor6_1


BulbusTown_Script_SailForOahu::
# 312 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForOahu_Text_0, MSGBOX_DEFAULT
# 313 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForGato::
# 319 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForGato_Text_0, MSGBOX_DEFAULT
# 320 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForMaui::
# 326 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForMaui_Text_0, MSGBOX_DEFAULT
# 327 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBayDepot::
# 333 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBayDepot_Text_0, MSGBOX_DEFAULT
# 334 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBigIsland::
# 340 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBigIsland_Text_0, MSGBOX_DEFAULT
# 341 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForKauai::
# 347 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForKauai_Text_0, MSGBOX_DEFAULT
# 348 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailorStrike::
# 353 "data/maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 354 "data/maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 355 "data/maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorStrike_3
# 357 "data/maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorStrike_4
# 359 "data/maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorStrike_5
# 361 "data/maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorStrike_6
# 363 "data/maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorStrike_7
# 365 "data/maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorStrike_8
# 367 "data/maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorStrike_9
# 369 "data/maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorStrike_10
# 371 "data/maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorStrike_11
# 373 "data/maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorStrike_12
# 376 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorStrike_1:
# 378 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorStrike_3:
# 356 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_4:
# 358 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_5:
# 360 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_6:
# 362 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_7:
# 364 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_8:
# 366 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_9:
# 368 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_10:
# 370 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_11:
# 372 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_12:
# 374 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1


BulbusTown_Script_SailorAfterStrike::
# 383 "data/maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_Script_SailorAfterStrike_2
# 386 "data/maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 387 "data/maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 388 "data/maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorAfterStrike_6
# 390 "data/maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorAfterStrike_7
# 392 "data/maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorAfterStrike_8
# 394 "data/maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorAfterStrike_9
# 396 "data/maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorAfterStrike_10
# 398 "data/maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorAfterStrike_11
# 400 "data/maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorAfterStrike_12
# 402 "data/maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorAfterStrike_13
# 404 "data/maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorAfterStrike_14
# 406 "data/maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorAfterStrike_15
# 409 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorAfterStrike_1:
# 412 "data/maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorAfterStrike_2:
# 384 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorsWonStrike, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_6:
# 389 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_7:
# 391 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_8:
# 393 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_9:
# 395 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_10:
# 397 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_11:
# 399 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_12:
# 401 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_13:
# 403 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_14:
# 405 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_15:
# 407 "data/maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1


BulbusTown_Script_MedeaSage_Text_0:
# 129 "data/maps/BulbusTown/scripts.pory"
	.string "I see the futureay$"

BulbusTown_Script_SailForOahu_Text_0:
# 312 "data/maps/BulbusTown/scripts.pory"
	.string "OAHU PLACE$"

BulbusTown_Script_SailForGato_Text_0:
# 319 "data/maps/BulbusTown/scripts.pory"
	.string "GATO PLACE$"

BulbusTown_Script_SailForMaui_Text_0:
# 326 "data/maps/BulbusTown/scripts.pory"
	.string "MAUI PLACE$"

BulbusTown_Script_SailForBayDepot_Text_0:
# 333 "data/maps/BulbusTown/scripts.pory"
	.string "BAYHUB PLACE$"

BulbusTown_Script_SailForBigIsland_Text_0:
# 340 "data/maps/BulbusTown/scripts.pory"
	.string "BIGISLAND PLACE$"

BulbusTown_Script_SailForKauai_Text_0:
# 347 "data/maps/BulbusTown/scripts.pory"
	.string "KAUAI PLACE$"

BulbusTown_Text_Fisherman::
# 416 "data/maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 420 "data/maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 424 "data/maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 428 "data/maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 432 "data/maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_SailorAvailable::
# 436 "data/maps/BulbusTown/scripts.pory"
	.string "Hey! Jason told me everything you did.\n"
	.string "It's my honor to give a ride for free.$"

BulbusTown_Text_DeclineSail::
# 440 "data/maps/BulbusTown/scripts.pory"
	.string "Let me know if, and when, you change\n"
	.string "your mind.$"

BulbusTown_Text_SailForOahu::
# 444 "data/maps/BulbusTown/scripts.pory"
	.string "I'm headed to Oahu, wanna come?$"

BulbusTown_Text_SailForGato::
# 448 "data/maps/BulbusTown/scripts.pory"
	.string "I sail for Gato City, you coming?$"

BulbusTown_Text_SailForMaui::
# 452 "data/maps/BulbusTown/scripts.pory"
	.string "Have you come for a free ride to Maui?$"

BulbusTown_Text_SailForBayDepot::
# 456 "data/maps/BulbusTown/scripts.pory"
	.string "I sail a route to the supply depot on\n"
	.string "Route 7 if you want to come with.$"

BulbusTown_Text_SailForBigIsland::
# 460 "data/maps/BulbusTown/scripts.pory"
	.string "Will you sail with me to Ignis Island?$"

BulbusTown_Text_SailForKauai::
# 464 "data/maps/BulbusTown/scripts.pory"
	.string "Are you coming with me to Kauai?$"

BulbusTown_Text_SailorStrike0::
# 468 "data/maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_SailorStrike1::
# 472 "data/maps/BulbusTown/scripts.pory"
	.string "All day! All night!$"

BulbusTown_Text_SailorStrike2::
# 476 "data/maps/BulbusTown/scripts.pory"
	.string "What do we want?\p"
	.string "Recognition!\p"
	.string "When do we want it?\p"
	.string "Now!$"

BulbusTown_Text_SailorStrike3::
# 480 "data/maps/BulbusTown/scripts.pory"
	.string "No justice! No Peace! No entitled ass\n"
	.string "custies!$"

BulbusTown_Text_SailorStrike4::
# 484 "data/maps/BulbusTown/scripts.pory"
	.string "Hey hey! Ho ho! Pay us or we'll never go!$"

BulbusTown_Text_SailorStrike5::
# 488 "data/maps/BulbusTown/scripts.pory"
	.string "No how! No way! Pay us better today!$"

BulbusTown_Text_SailorStrike6::
# 492 "data/maps/BulbusTown/scripts.pory"
	.string "Custies, get out of our sight! No work,\n"
	.string "we strike tonight!$"

BulbusTown_Text_SailorStrike7::
# 496 "data/maps/BulbusTown/scripts.pory"
	.string "Solidarity forever!$"

BulbusTown_Text_SailorStrike8::
# 500 "data/maps/BulbusTown/scripts.pory"
	.string "Anchors aweigh! Fair wages and pay!$"

BulbusTown_Text_SailorStrike9::
# 504 "data/maps/BulbusTown/scripts.pory"
	.string "We need more money! We deserve more\n"
	.string "rights!$"

BulbusTown_Text_SailorAfterStrike0::
# 508 "data/maps/BulbusTown/scripts.pory"
	.string "Our strike is over.$"

BulbusTown_Text_SailorAfterStrike1::
# 512 "data/maps/BulbusTown/scripts.pory"
	.string "Boss man made us go back to work.$"

BulbusTown_Text_SailorAfterStrike2::
# 516 "data/maps/BulbusTown/scripts.pory"
	.string "I still think we need to be treated\n"
	.string "better.$"

BulbusTown_Text_SailorAfterStrike3::
# 520 "data/maps/BulbusTown/scripts.pory"
	.string "I guess boss man never really cared\n"
	.string "about us after all.$"

BulbusTown_Text_SailorAfterStrike4::
# 524 "data/maps/BulbusTown/scripts.pory"
	.string "Forcing us to go back to work is\n"
	.string "inhumane.$"

BulbusTown_Text_SailorAfterStrike5::
# 528 "data/maps/BulbusTown/scripts.pory"
	.string "I hate this job so much it's just unreal.$"

BulbusTown_Text_SailorAfterStrike6::
# 532 "data/maps/BulbusTown/scripts.pory"
	.string "That was excessive use of force for\n"
	.string "sure!$"

BulbusTown_Text_SailorAfterStrike7::
# 536 "data/maps/BulbusTown/scripts.pory"
	.string "I still get scared when boss man comes\n"
	.string "out for inspections.$"

BulbusTown_Text_SailorAfterStrike8::
# 540 "data/maps/BulbusTown/scripts.pory"
	.string "I'm never going on strike again. I\n"
	.string "learned my lesson!$"

BulbusTown_Text_SailorAfterStrike9::
# 544 "data/maps/BulbusTown/scripts.pory"
	.string "This is it? This is what I've always\n"
	.string "supposed to be doing?$"

BulbusTown_Text_Jason1::
# 548 "data/maps/BulbusTown/scripts.pory"
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
# 552 "data/maps/BulbusTown/scripts.pory"
	.string "Standing here on the docks next to the\n"
	.string "sea, Shiny Mareep, and my wife Medea\l"
	.string "make me feel that my life is quite\l"
	.string "alright.$"

BulbusTown_Text_MedeaMad::
# 557 "data/maps/BulbusTown/scripts.pory"
	.string "Iay ancay evernay orgivefay ouyay\n"
	.string "orfay atwhay ouyay idday otay Ugialay\l"
	.string "in Olchiscay. Ebay onegay!$"

BulbusTown_Text_SailorsWonStrike::
# 561 "data/maps/BulbusTown/scripts.pory"
	.string "Jason returned and brought Shiny\n"
	.string "Mareep to live with us sailors in the\l"
	.string "harbor. We finally felt appreciated and\l"
	.string "made the decision to end our strike.$"
