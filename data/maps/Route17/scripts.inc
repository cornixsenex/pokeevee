Route17_MapScripts::
# 17 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 53 "data/maps/Route17/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route17_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/Route17/scripts.pory"
	specialvar VAR_RESULT, GetDynamicMapSec_Route17_F
# 20 "data/maps/Route17/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/Route17/scripts.pory"
	case 1, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 23 "data/maps/Route17/scripts.pory"
	case 2, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 25 "data/maps/Route17/scripts.pory"
	case 3, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 27 "data/maps/Route17/scripts.pory"
	case 4, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 29 "data/maps/Route17/scripts.pory"
	case 5, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 31 "data/maps/Route17/scripts.pory"
	case 6, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 33 "data/maps/Route17/scripts.pory"
	case 7, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 35 "data/maps/Route17/scripts.pory"
	case 8, Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/Route17/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 4
	goto_if_gt Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 44 "data/maps/Route17/scripts.pory"
	compare VAR_ORESTES_STATE, 0
	goto_if_eq Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 48 "data/maps/Route17/scripts.pory"
	compare VAR_ORESTES_STATE, 6
	goto_if_eq Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	return

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 22 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 24 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 28 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 30 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 5
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 32 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 34 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 36 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 40 "data/maps/Route17/scripts.pory"
	call Route17_Script_RemoveBridgeBlock
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 45 "data/maps/Route17/scripts.pory"
	call Route17_Script_ShowOrestesBridge
	goto Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

Route17_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 49 "data/maps/Route17/scripts.pory"
	call Route17_Script_ShowOrestesAfterAedesTrivis
	return

Route17_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 54 "data/maps/Route17/scripts.pory"
	map_script_2 VAR_ORESTES_STATE, 6, Route17_Script_OrestesAfterAedesTrivis
	.2byte 0


Route17_Script_ShowOrestesBridge::
# 60 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 25, 139
# 61 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


Route17_Script_ShowOrestesAfterAedesTrivis::
# 66 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 7, 52
# 67 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_FACE_DOWN
	return


Route17_Script_RemoveBridgeBlock::
# 72 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_BRIDGEBLOCK1, 20, 156
# 73 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_BRIDGEBLOCK2, 21, 156
	return


Route17_Script_Transition_LagoDraco::
# 78 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 1
# 79 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 80 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LagoDracoShore::
# 84 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 2
# 85 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 86 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperRioDraco::
# 90 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 3
# 91 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 92 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerRioDraco::
# 96 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 4
# 97 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 98 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoEast::
# 102 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 5
# 103 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 104 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoEast::
# 108 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 6
# 109 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 110 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_UpperDracoWest::
# 114 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 7
# 115 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 116 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_Transition_LowerDracoWest::
# 120 "data/maps/Route17/scripts.pory"
	setvar VAR_TEMP_5, 8
# 121 "data/maps/Route17/scripts.pory"
	special TransitionMapMusic
# 122 "data/maps/Route17/scripts.pory"
	special ShowMapNamePopup
	return


Route17_Script_BridgeBlock::
# 126 "data/maps/Route17/scripts.pory"
	compare VAR_SURFSCHOOL_STATE, 4
	goto_if_gt Route17_Script_BridgeBlock_1
# 129 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block1, MSGBOX_NPC
	return

Route17_Script_BridgeBlock_1:
# 127 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Block2, MSGBOX_NPC
	return


Route17_Script_OrestesBridgeScene::
# 135 "data/maps/Route17/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 137 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 138 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route17/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 141 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_OrestesBridge
# 142 "data/maps/Route17/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 143 "data/maps/Route17/scripts.pory"
	closemessage
# 145 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkRight4
# 146 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route17/scripts.pory"
	removeobject LOCALID_ROUTE17_ORESTES
# 149 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 0, 0
# 150 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 151 "data/maps/Route17/scripts.pory"
	addobject LOCALID_ROUTE17_ORESTES
# 153 "data/maps/Route17/scripts.pory"
	setvar VAR_ORESTES_STATE, 1
# 155 "data/maps/Route17/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	end


Route17_Script_OrestesWalkScene::
# 161 "data/maps/Route17/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 163 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 164 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route17/scripts.pory"
	removeobject LOCALID_ROUTE17_ORESTES
# 167 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 2, 73
# 168 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_FACE_UP
# 169 "data/maps/Route17/scripts.pory"
	addobject LOCALID_ROUTE17_ORESTES
# 171 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkUp7
# 172 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkLeft2
# 174 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkUp5
# 176 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route17/scripts.pory"
	removeobject LOCALID_ROUTE17_ORESTES
# 179 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 0, 0
# 180 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 181 "data/maps/Route17/scripts.pory"
	addobject LOCALID_ROUTE17_ORESTES
# 183 "data/maps/Route17/scripts.pory"
	setvar VAR_ORESTES_STATE, 2
# 185 "data/maps/Route17/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	end


Route17_Script_OrestesAfterAedesTrivis::
# 190 "data/maps/Route17/scripts.pory"
	lockall
# 192 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_ExclamationMark
# 193 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkUp2
# 196 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkLeft
# 198 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 200 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route17/scripts.pory"
	load_field_pic FIELD_PIC_ORESTES, 190, 98
# 203 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_OrestesAfterAedesTrivis
# 204 "data/maps/Route17/scripts.pory"
	destroy_field_pic FIELD_PIC_ORESTES
# 205 "data/maps/Route17/scripts.pory"
	closemessage
# 207 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkDown3
# 208 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkRight3
# 210 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkRight3
# 212 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route17/scripts.pory"
	applymovement LOCALID_ROUTE17_ORESTES, Common_Movement_WalkDown3
# 214 "data/maps/Route17/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route17/scripts.pory"
	removeobject LOCALID_ROUTE17_ORESTES
# 217 "data/maps/Route17/scripts.pory"
	setobjectxyperm LOCALID_ROUTE17_ORESTES, 0, 0
# 218 "data/maps/Route17/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE17_ORESTES, MOVEMENT_TYPE_INVISIBLE
# 219 "data/maps/Route17/scripts.pory"
	addobject LOCALID_ROUTE17_ORESTES
# 221 "data/maps/Route17/scripts.pory"
	setvar VAR_ORESTES_STATE, 7
# 223 "data/maps/Route17/scripts.pory"
	releaseall
	end


Route17_Text_Block1::
# 227 "data/maps/Route17/scripts.pory"
	.string "This is the Via Fluvia which leads to\n"
	.string "Lacus Drako and the town Salix but it is\l"
	.string "impossible to use now. The storm has\l"
	.string "destroyed two bridges ahead and it will\l"
	.string "be some time before they're fixed.$"

Route17_Text_Block2::
# 235 "data/maps/Route17/scripts.pory"
	.string "We managed to repair the lower bridge\n"
	.string "but the second one, up by Dragon Lake,\l"
	.string "is still broken. Be careful of the road\l"
	.string "many wild, powerful pokemon attacked\l"
	.string "us while our men were hard at work.\l"
	.string "What's more the way to Salix has been\l"
	.string "shut by sleeping Snorlaxes...Snorlacii?\l"
	.string "We've sent word back to Urbia to send\l"
	.string "more men,and something to wake them,\l"
	.string "but that could be some time from now.\l"
	.string "You know how the bureaucrats in the\l"
	.string "capital forget about us common folk up\l"
	.string "in the hills.$"

Route17_Text_OrestesBridge::
# 275 "data/maps/Route17/scripts.pory"
	.string "Familiar Drake, unchanged since happy\n"
	.string "days long gone, transformed into my\l"
	.string "present grief, do you still recognize\l"
	.string "Orestes, or is this face too twisted by\l"
	.string "pain and tears? How else could a good\l"
	.string "son compose himself while his father, no\l"
	.string "ordinary man but that Hyperion among\l"
	.string "satyrs mighty Agamemnon, lies comatose\l"
	.string "in bed, bewitched by that\l"
	.string "accursed...Accursed? My wrath betrays\l"
	.string "my tongue to pronounce sin for how\l"
	.string "could a good son call his mother\l"
	.string "accursed? There lies the heart of my\l"
	.string "despair. I cannot leave my father\l"
	.string "unavenged neither can I avenge him by\l"
	.string "fighting mother. Therefore I am\l"
	.string "resolved to end the pain of my\l"
	.string "conflicted heart. I've come to drown\l"
	.string "myself and sink down to the Styx, sink\l"
	.string "down to sweet release, sink down to\l"
	.string "death. Sink down to Tartarus! To\l"
	.string "Sisyphus! Aye, there's the rub, for if in\l"
	.string "death we're judged, and punished for\l"
	.string "the sins we do in life, then jumping now\l"
	.string "would be no sweet release but\l"
	.string "condemnation to fiery hell as I must\l"
	.string "answer for my unavenged father as well\l"
	.string "as heartbroken mother and my own\l"
	.string "cowardice. What can I do? Both action\l"
	.string "and inaction reek of sin! If only I\l"
	.string "could ask the judge himself to know\l"
	.string "what I might do to avoid it. I must be\l"
	.string "satisfied to ask the one who is known\l"
	.string "as his representative. Though he may be\l"
	.string "a liar my conscience will be guiltless if\l"
	.string "I trust him in faith. I'll go consult the\l"
	.string "oracle at the Aedes Trivis, his words\l"
	.string "will set me free.$"

Route17_Text_OrestesAfterAedesTrivis::
# 313 "data/maps/Route17/scripts.pory"
	.string "Hey {PLAYER}, sorry I had to wait\n"
	.string "outside. Did you hear what that talking\l"
	.string "Slowking said? I need someone to help\l"
	.string "me save my dad and after you found the\l"
	.string "Tree Vest I think you would be the\l"
	.string "perfect person to ask. Don't worry I\l"
	.string "can sneak you in the house and my\l"
	.string "father, Agamemnon, surely will reward\l"
	.string "you handsomely for your work. Our house\l"
	.string "is in Aldeon, meet me there.$"
