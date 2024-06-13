Colchis_MapScripts::
	.byte 0


Colchis_Script_DoForcedBattle::
# 6 "data/maps/Colchis/scripts.pory"
	lockall
# 7 "data/maps/Colchis/scripts.pory"
	removeobject 23
# 8 "data/maps/Colchis/scripts.pory"
	removeobject 24
# 9 "data/maps/Colchis/scripts.pory"
	special SetupColchisForcedBattle
# 11 "data/maps/Colchis/scripts.pory"
	addobject 23
# 12 "data/maps/Colchis/scripts.pory"
	addobject 24
# 14 "data/maps/Colchis/scripts.pory"
	showobjectat 23, MAP_COLCHIS
# 15 "data/maps/Colchis/scripts.pory"
	showobjectat 24, MAP_COLCHIS
# 17 "data/maps/Colchis/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 18 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 19 "data/maps/Colchis/scripts.pory"
	applymovement 23, Colchis_Movement_ForcedBattleA
# 20 "data/maps/Colchis/scripts.pory"
	applymovement 24, Colchis_Movement_ForcedBattleB
# 21 "data/maps/Colchis/scripts.pory"
	waitmovement 0
# 22 "data/maps/Colchis/scripts.pory"
	msgbox Colchis_Script_DoForcedBattle_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/Colchis/scripts.pory"
	closemessage
# 24 "data/maps/Colchis/scripts.pory"
	releaseall
	end


# 29 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleA:
# 30 "data/maps/Colchis/scripts.pory"
	walk_down
# 30 "data/maps/Colchis/scripts.pory"
	walk_down
# 30 "data/maps/Colchis/scripts.pory"
	walk_down
# 30 "data/maps/Colchis/scripts.pory"
	walk_down
# 30 "data/maps/Colchis/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/Colchis/scripts.pory"
Colchis_Movement_ForcedBattleB:
# 35 "data/maps/Colchis/scripts.pory"
	walk_up
# 35 "data/maps/Colchis/scripts.pory"
	walk_up
# 35 "data/maps/Colchis/scripts.pory"
	walk_up
# 35 "data/maps/Colchis/scripts.pory"
	walk_up
# 35 "data/maps/Colchis/scripts.pory"
	walk_up
	step_end

Colchis_Script_DoForcedBattle_Text_0:
# 22 "data/maps/Colchis/scripts.pory"
	.string "TEST SCRIPT$"
