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
	lock
# 94 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightA
# 95 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_FightB::
# 100 "data//maps/BulbusTown/scripts.pory"
	lock
# 101 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_FightB
# 102 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_ClubSign::
# 107 "data//maps/BulbusTown/scripts.pory"
	lock
# 108 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_ClubSign
# 109 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 110 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_EventScript_TownSign::
# 115 "data//maps/BulbusTown/scripts.pory"
	lock
# 116 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_TownSign
# 117 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 118 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Jason::
# 123 "data//maps/BulbusTown/scripts.pory"
	lock
# 124 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 125 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Jason_2
# 129 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason2, MSGBOX_DEFAULT
BulbusTown_Script_Jason_1:
# 131 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 132 "data//maps/BulbusTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 133 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 134 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Jason_2:
# 126 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORSOPEN
# 127 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_Jason1, MSGBOX_DEFAULT
	goto BulbusTown_Script_Jason_1


BulbusTown_Script_Medea::
# 139 "data//maps/BulbusTown/scripts.pory"
	lock
# 140 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 141 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_COLCHIS_HIDE_LUGIA, BulbusTown_Script_Medea_2
# 145 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_MedeaSage
BulbusTown_Script_Medea_1:
# 147 "data//maps/BulbusTown/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 148 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
# 149 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Medea_2:
# 142 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_MedeaMad, MSGBOX_DEFAULT
# 143 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Medea_1


BulbusTown_Script_MedeaSage::
# 155 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_MedeaSage_Text_0, MSGBOX_DEFAULT
# 156 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_Mareep::
# 161 "data//maps/BulbusTown/scripts.pory"
	lock
# 162 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 163 "data//maps/BulbusTown/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_ENCOUNTER
# 164 "data//maps/BulbusTown/scripts.pory"
	waitmoncry
# 165 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_Sailor1::
# 170 "data//maps/BulbusTown/scripts.pory"
	lock
# 171 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 172 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor1_2
# 174 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor1_3
# 188 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 189 "data//maps/BulbusTown/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 190 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor1_1:
# 192 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor1_2:
# 173 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_3:
# 175 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor1_8
BulbusTown_Script_Sailor1_7:
# 179 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForOahu, MSGBOX_YESNO
# 180 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor1_10
# 183 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 184 "data//maps/BulbusTown/scripts.pory"
	closemessage
	goto BulbusTown_Script_Sailor1_1

BulbusTown_Script_Sailor1_8:
# 176 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 177 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor1_7

BulbusTown_Script_Sailor1_10:
# 181 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForOahu
	goto BulbusTown_Script_Sailor1_1


BulbusTown_Script_Sailor2::
# 197 "data//maps/BulbusTown/scripts.pory"
	lock
# 198 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 199 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor2_2
# 201 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor2_3
# 216 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 217 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 218 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor2_1:
# 220 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor2_2:
# 200 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_3:
# 202 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor2_8
BulbusTown_Script_Sailor2_7:
# 206 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForGato, MSGBOX_YESNO
# 207 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor2_10
# 210 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 211 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 212 "data//maps/BulbusTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 213 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor2_1

BulbusTown_Script_Sailor2_8:
# 203 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 204 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor2_7

BulbusTown_Script_Sailor2_10:
# 208 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForGato
	goto BulbusTown_Script_Sailor2_1


BulbusTown_Script_Sailor3::
# 225 "data//maps/BulbusTown/scripts.pory"
	lock
# 226 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 227 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor3_2
# 229 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor3_3
# 244 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 245 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 246 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor3_1:
# 248 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor3_2:
# 228 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_3:
# 230 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor3_8
BulbusTown_Script_Sailor3_7:
# 234 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForMaui, MSGBOX_YESNO
# 235 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor3_10
# 238 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 239 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 240 "data//maps/BulbusTown/scripts.pory"
	applymovement 15, Common_Movement_FaceDown
# 241 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor3_1

BulbusTown_Script_Sailor3_8:
# 231 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 232 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor3_7

BulbusTown_Script_Sailor3_10:
# 236 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForMaui
	goto BulbusTown_Script_Sailor3_1


BulbusTown_Script_Sailor4::
# 253 "data//maps/BulbusTown/scripts.pory"
	lock
# 254 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 255 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor4_2
# 257 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor4_3
# 272 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 273 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 274 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor4_1:
# 277 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor4_2:
# 256 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_3:
# 258 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor4_8
BulbusTown_Script_Sailor4_7:
# 262 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBayDepot, MSGBOX_YESNO
# 263 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor4_10
# 266 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 267 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 268 "data//maps/BulbusTown/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 269 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor4_1

BulbusTown_Script_Sailor4_8:
# 259 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 260 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor4_7

BulbusTown_Script_Sailor4_10:
# 264 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBayDepot
	goto BulbusTown_Script_Sailor4_1


BulbusTown_Script_Sailor5::
# 282 "data//maps/BulbusTown/scripts.pory"
	lock
# 283 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 284 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor5_2
# 286 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor5_3
# 301 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 302 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 303 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor5_1:
# 305 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor5_2:
# 285 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_3:
# 287 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor5_8
BulbusTown_Script_Sailor5_7:
# 291 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForBigIsland, MSGBOX_YESNO
# 292 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor5_10
# 295 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 296 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 297 "data//maps/BulbusTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 298 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor5_1

BulbusTown_Script_Sailor5_8:
# 288 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 289 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor5_7

BulbusTown_Script_Sailor5_10:
# 293 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForBigIsland
	goto BulbusTown_Script_Sailor5_1


BulbusTown_Script_Sailor6::
# 310 "data//maps/BulbusTown/scripts.pory"
	lock
# 311 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 312 "data//maps/BulbusTown/scripts.pory"
	compare VAR_ARGO_STATE, 20
	goto_if_lt BulbusTown_Script_Sailor6_2
# 314 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_BULBUS_SAILORSOPEN, BulbusTown_Script_Sailor6_3
# 329 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorAfterStrike
# 330 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 331 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
BulbusTown_Script_Sailor6_1:
# 333 "data//maps/BulbusTown/scripts.pory"
	release
	end

BulbusTown_Script_Sailor6_2:
# 313 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailorStrike
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_3:
# 315 "data//maps/BulbusTown/scripts.pory"
	goto_if_unset FLAG_BULBUS_SAILORS_INTROD, BulbusTown_Script_Sailor6_8
BulbusTown_Script_Sailor6_7:
# 319 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailForKauai, MSGBOX_YESNO
# 320 "data//maps/BulbusTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BulbusTown_Script_Sailor6_10
# 323 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_DeclineSail, MSGBOX_DEFAULT
# 324 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 325 "data//maps/BulbusTown/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 326 "data//maps/BulbusTown/scripts.pory"
	waitmovement 0
	goto BulbusTown_Script_Sailor6_1

BulbusTown_Script_Sailor6_8:
# 316 "data//maps/BulbusTown/scripts.pory"
	setflag FLAG_BULBUS_SAILORS_INTROD
# 317 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAvailable, MSGBOX_DEFAULT
	goto BulbusTown_Script_Sailor6_7

BulbusTown_Script_Sailor6_10:
# 321 "data//maps/BulbusTown/scripts.pory"
	call BulbusTown_Script_SailForKauai
	goto BulbusTown_Script_Sailor6_1


BulbusTown_EventScript_BusinessMan::
# 338 "data//maps/BulbusTown/scripts.pory"
	lock
# 339 "data//maps/BulbusTown/scripts.pory"
	faceplayer
# 340 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_BusinessMan, MSGBOX_DEFAULT
# 341 "data//maps/BulbusTown/scripts.pory"
	closemessage
# 343 "data//maps/BulbusTown/scripts.pory"
	release
	end


BulbusTown_Script_SailForOahu::
# 349 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForOahu_Text_0, MSGBOX_DEFAULT
# 350 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForGato::
# 356 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForGato_Text_0, MSGBOX_DEFAULT
# 357 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForMaui::
# 363 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForMaui_Text_0, MSGBOX_DEFAULT
# 364 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBayDepot::
# 370 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBayDepot_Text_0, MSGBOX_DEFAULT
# 371 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForBigIsland::
# 377 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForBigIsland_Text_0, MSGBOX_DEFAULT
# 378 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailForKauai::
# 384 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Script_SailForKauai_Text_0, MSGBOX_DEFAULT
# 385 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return


BulbusTown_Script_SailorStrike::
# 390 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 391 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 392 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorStrike_3
# 394 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorStrike_4
# 396 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorStrike_5
# 398 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorStrike_6
# 400 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorStrike_7
# 402 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorStrike_8
# 404 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorStrike_9
# 406 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorStrike_10
# 408 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorStrike_11
# 410 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorStrike_12
# 413 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorStrike_1:
# 415 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorStrike_3:
# 393 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_4:
# 395 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_5:
# 397 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_6:
# 399 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_7:
# 401 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_8:
# 403 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_9:
# 405 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_10:
# 407 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_11:
# 409 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1

BulbusTown_Script_SailorStrike_12:
# 411 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorStrike_1


BulbusTown_Script_SailorAfterStrike::
# 420 "data//maps/BulbusTown/scripts.pory"
	goto_if_set FLAG_JASON_HAS_SHINYMAREEP, BulbusTown_Script_SailorAfterStrike_2
# 423 "data//maps/BulbusTown/scripts.pory"
	specialvar VAR_RESULT, RandDigit
# 424 "data//maps/BulbusTown/scripts.pory"
	switch VAR_RESULT
# 425 "data//maps/BulbusTown/scripts.pory"
	case 0, BulbusTown_Script_SailorAfterStrike_6
# 427 "data//maps/BulbusTown/scripts.pory"
	case 1, BulbusTown_Script_SailorAfterStrike_7
# 429 "data//maps/BulbusTown/scripts.pory"
	case 2, BulbusTown_Script_SailorAfterStrike_8
# 431 "data//maps/BulbusTown/scripts.pory"
	case 3, BulbusTown_Script_SailorAfterStrike_9
# 433 "data//maps/BulbusTown/scripts.pory"
	case 4, BulbusTown_Script_SailorAfterStrike_10
# 435 "data//maps/BulbusTown/scripts.pory"
	case 5, BulbusTown_Script_SailorAfterStrike_11
# 437 "data//maps/BulbusTown/scripts.pory"
	case 6, BulbusTown_Script_SailorAfterStrike_12
# 439 "data//maps/BulbusTown/scripts.pory"
	case 7, BulbusTown_Script_SailorAfterStrike_13
# 441 "data//maps/BulbusTown/scripts.pory"
	case 8, BulbusTown_Script_SailorAfterStrike_14
# 443 "data//maps/BulbusTown/scripts.pory"
	case 9, BulbusTown_Script_SailorAfterStrike_15
# 446 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
BulbusTown_Script_SailorAfterStrike_1:
# 449 "data//maps/BulbusTown/scripts.pory"
	closemessage
	return

BulbusTown_Script_SailorAfterStrike_2:
# 421 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorsWonStrike, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_6:
# 426 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike0, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_7:
# 428 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike1, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_8:
# 430 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike2, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_9:
# 432 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike3, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_10:
# 434 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike4, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_11:
# 436 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike5, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_12:
# 438 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike6, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_13:
# 440 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike7, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_14:
# 442 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike8, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1

BulbusTown_Script_SailorAfterStrike_15:
# 444 "data//maps/BulbusTown/scripts.pory"
	msgbox BulbusTown_Text_SailorAfterStrike9, MSGBOX_DEFAULT
	goto BulbusTown_Script_SailorAfterStrike_1


BulbusTown_Script_MedeaSage_Text_0:
# 155 "data//maps/BulbusTown/scripts.pory"
	.string "I see the futureay$"

BulbusTown_Script_SailForOahu_Text_0:
# 349 "data//maps/BulbusTown/scripts.pory"
	.string "OAHU PLACE$"

BulbusTown_Script_SailForGato_Text_0:
# 356 "data//maps/BulbusTown/scripts.pory"
	.string "GATO PLACE$"

BulbusTown_Script_SailForMaui_Text_0:
# 363 "data//maps/BulbusTown/scripts.pory"
	.string "MAUI PLACE$"

BulbusTown_Script_SailForBayDepot_Text_0:
# 370 "data//maps/BulbusTown/scripts.pory"
	.string "BAYHUB PLACE$"

BulbusTown_Script_SailForBigIsland_Text_0:
# 377 "data//maps/BulbusTown/scripts.pory"
	.string "BIGISLAND PLACE$"

BulbusTown_Script_SailForKauai_Text_0:
# 384 "data//maps/BulbusTown/scripts.pory"
	.string "KAUAI PLACE$"

BulbusTown_Text_Fisherman::
# 453 "data//maps/BulbusTown/scripts.pory"
	.string "Hey watch your step, this town is\n"
	.string "sometimes rough.$"

BulbusTown_Text_FightA::
# 457 "data//maps/BulbusTown/scripts.pory"
	.string "How dare you speak of my sweet mum\n"
	.string "that way?$"

BulbusTown_Text_FightB::
# 461 "data//maps/BulbusTown/scripts.pory"
	.string "This town ain't big enough for both of\n"
	.string "us!$"

BulbusTown_Text_ClubSign::
# 465 "data//maps/BulbusTown/scripts.pory"
	.string "The Chronic\n"
	.string "Premium Cannabis Club$"

BulbusTown_Text_TownSign::
# 469 "data//maps/BulbusTown/scripts.pory"
	.string "Built on the bay, welcome to Bulbus\n"
	.string "Town!$"

BulbusTown_Text_SailorAvailable::
# 473 "data//maps/BulbusTown/scripts.pory"
	.string "Hey! Jason told me everything you did.\n"
	.string "It's my honor to give a ride for free.$"

BulbusTown_Text_DeclineSail::
# 477 "data//maps/BulbusTown/scripts.pory"
	.string "Let me know if, and when, you change\n"
	.string "your mind.$"

BulbusTown_Text_SailForOahu::
# 481 "data//maps/BulbusTown/scripts.pory"
	.string "I'm headed to Oahu, wanna come?$"

BulbusTown_Text_SailForGato::
# 485 "data//maps/BulbusTown/scripts.pory"
	.string "I sail for Gato City, you coming?$"

BulbusTown_Text_SailForMaui::
# 489 "data//maps/BulbusTown/scripts.pory"
	.string "Have you come for a free ride to Maui?$"

BulbusTown_Text_SailForBayDepot::
# 493 "data//maps/BulbusTown/scripts.pory"
	.string "I sail a route to the supply depot on\n"
	.string "Route 7 if you want to come with.$"

BulbusTown_Text_SailForBigIsland::
# 497 "data//maps/BulbusTown/scripts.pory"
	.string "Will you sail with me to Ignis Island?$"

BulbusTown_Text_SailForKauai::
# 501 "data//maps/BulbusTown/scripts.pory"
	.string "Are you coming with me to Kauai?$"

BulbusTown_Text_SailorStrike0::
# 505 "data//maps/BulbusTown/scripts.pory"
	.string "I'm not working, us sailors went on\n"
	.string "strike.$"

BulbusTown_Text_SailorStrike1::
# 509 "data//maps/BulbusTown/scripts.pory"
	.string "All day! All night!$"

BulbusTown_Text_SailorStrike2::
# 513 "data//maps/BulbusTown/scripts.pory"
	.string "What do we want?\p"
	.string "Recognition!\p"
	.string "When do we want it?\p"
	.string "Now!$"

BulbusTown_Text_SailorStrike3::
# 517 "data//maps/BulbusTown/scripts.pory"
	.string "No justice! No Peace! No entitled ass\n"
	.string "custies!$"

BulbusTown_Text_SailorStrike4::
# 521 "data//maps/BulbusTown/scripts.pory"
	.string "Hey hey! Ho ho! Pay us or we'll never go!$"

BulbusTown_Text_SailorStrike5::
# 525 "data//maps/BulbusTown/scripts.pory"
	.string "No how! No way! Pay us better today!$"

BulbusTown_Text_SailorStrike6::
# 529 "data//maps/BulbusTown/scripts.pory"
	.string "Custies, get out of our sight! No work,\n"
	.string "we strike tonight!$"

BulbusTown_Text_SailorStrike7::
# 533 "data//maps/BulbusTown/scripts.pory"
	.string "Solidarity forever!$"

BulbusTown_Text_SailorStrike8::
# 537 "data//maps/BulbusTown/scripts.pory"
	.string "Anchors aweigh! Fair wages and pay!$"

BulbusTown_Text_SailorStrike9::
# 541 "data//maps/BulbusTown/scripts.pory"
	.string "We need more money! We deserve more\n"
	.string "rights!$"

BulbusTown_Text_SailorAfterStrike0::
# 545 "data//maps/BulbusTown/scripts.pory"
	.string "Our strike is over.$"

BulbusTown_Text_SailorAfterStrike1::
# 549 "data//maps/BulbusTown/scripts.pory"
	.string "Boss man made us go back to work.$"

BulbusTown_Text_SailorAfterStrike2::
# 553 "data//maps/BulbusTown/scripts.pory"
	.string "I still think we need to be treated\n"
	.string "better.$"

BulbusTown_Text_SailorAfterStrike3::
# 557 "data//maps/BulbusTown/scripts.pory"
	.string "I guess boss man never really cared\n"
	.string "about us after all.$"

BulbusTown_Text_SailorAfterStrike4::
# 561 "data//maps/BulbusTown/scripts.pory"
	.string "Forcing us to go back to work is\n"
	.string "inhumane.$"

BulbusTown_Text_SailorAfterStrike5::
# 565 "data//maps/BulbusTown/scripts.pory"
	.string "I hate this job so much it's just unreal.$"

BulbusTown_Text_SailorAfterStrike6::
# 569 "data//maps/BulbusTown/scripts.pory"
	.string "That was excessive use of force for\n"
	.string "sure!$"

BulbusTown_Text_SailorAfterStrike7::
# 573 "data//maps/BulbusTown/scripts.pory"
	.string "I still get scared when boss man comes\n"
	.string "out for inspections.$"

BulbusTown_Text_SailorAfterStrike8::
# 577 "data//maps/BulbusTown/scripts.pory"
	.string "I'm never going on strike again. I\n"
	.string "learned my lesson!$"

BulbusTown_Text_SailorAfterStrike9::
# 581 "data//maps/BulbusTown/scripts.pory"
	.string "This is it? This is what I've always\n"
	.string "supposed to be doing?$"

BulbusTown_Text_Jason1::
# 585 "data//maps/BulbusTown/scripts.pory"
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
# 589 "data//maps/BulbusTown/scripts.pory"
	.string "Standing here on the docks next to the\n"
	.string "sea, Shiny Mareep, and my wife Medea\l"
	.string "make me feel that my life is quite\l"
	.string "alright.$"

BulbusTown_Text_MedeaMad::
# 594 "data//maps/BulbusTown/scripts.pory"
	.string "Iay ancay evernay orgivefay ouyay\n"
	.string "orfay atwhay ouyay idday otay Ugialay\l"
	.string "in Olchiscay. Ebay onegay!$"

BulbusTown_Text_SailorsWonStrike::
# 598 "data//maps/BulbusTown/scripts.pory"
	.string "Jason returned and brought Shiny\n"
	.string "Mareep to live with us sailors in the\l"
	.string "harbor. We finally felt appreciated and\l"
	.string "made the decision to end our strike.$"

BulbusTown_Text_BusinessMan::
# 602 "data//maps/BulbusTown/scripts.pory"
	.string "This strike is terrible for my business!$"
