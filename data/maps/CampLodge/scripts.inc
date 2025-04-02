CampLodge_MapScripts::
	.byte 0


CampLodge_EventScript_Eurykleia::
# 6 "data//maps/CampLodge/scripts.pory"
	faceplayer
# 7 "data//maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Eurykleia
# 8 "data//maps/CampLodge/scripts.pory"
	closemessage
	end


CampLodge_EventScript_Eumaeus::
# 13 "data//maps/CampLodge/scripts.pory"
	faceplayer
# 14 "data//maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_Eumaeus
# 15 "data//maps/CampLodge/scripts.pory"
	closemessage
	end


CampLodge_Script_CampLeader::
# 20 "data//maps/CampLodge/scripts.pory"
	faceplayer
# 21 "data//maps/CampLodge/scripts.pory"
	checkitem ITEM_FLASHLIGHT, 1
# 22 "data//maps/CampLodge/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CampLodge_Script_CampLeader_2
# 25 "data//maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_CampLeader1
# 26 "data//maps/CampLodge/scripts.pory"
	closemessage
# 27 "data//maps/CampLodge/scripts.pory"
	giveitem ITEM_FLASHLIGHT
# 28 "data//maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_CampLeader2
CampLodge_Script_CampLeader_1:
# 30 "data//maps/CampLodge/scripts.pory"
	closemessage
	end

CampLodge_Script_CampLeader_2:
# 23 "data//maps/CampLodge/scripts.pory"
	msgbox CampLodge_Text_CampLeader3
	goto CampLodge_Script_CampLeader_1


CampLodge_Text_Eurykleia::
# 34 "data//maps/CampLodge/scripts.pory"
	.string "I'm the troop leader of these lady\n"
	.string "scouts. Teaching the wisdom passed\l"
	.string "down from grandma. To learn from her,\l"
	.string "first you must battle me!$"

CampLodge_Text_Eumaeus::
# 38 "data//maps/CampLodge/scripts.pory"
	.string "I'm the leader of this young troop of\n"
	.string "boys. They obey me, and I eat first at\l"
	.string "lunch.$"

CampLodge_Text_CampLeader1::
# 42 "data//maps/CampLodge/scripts.pory"
	.string "I don't know what you did to bring them\n"
	.string "back, or why they smell like that, but I\l"
	.string "don't care! As my way of thanking you\l"
	.string "I'm making you an honorary camp\l"
	.string "graduate. Here is a badge of merit, and\l"
	.string "take this.$"

CampLodge_Text_CampLeader2::
# 46 "data//maps/CampLodge/scripts.pory"
	.string "Since most of our graduates go to work\n"
	.string "in the mines, or Via Posterior, it's\l"
	.string "customary we give them flashlights.\l"
	.string "Feel free to come back to camp anytime!$"

CampLodge_Text_CampLeader3::
# 50 "data//maps/CampLodge/scripts.pory"
	.string "Does coming back to camp feel\n"
	.string "nostalgic?$"
