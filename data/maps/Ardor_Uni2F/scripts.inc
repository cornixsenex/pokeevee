Ardor_Uni2F_MapScripts::
# 6 "data/maps/Ardor_Uni2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/Ardor_Uni2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/Ardor_Uni2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Ardor_Uni2F/scripts.pory"
	compare VAR_UNI_STATE, 10
	goto_if_eq Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Ardor_Uni2F/scripts.pory"
	setobjectxy 1, 19, 4
# 11 "data/maps/Ardor_Uni2F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 17 "data/maps/Ardor_Uni2F/scripts.pory"
	call Ardor_Uni2F_EventScript_OpenDoors
	return

Ardor_Uni2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/Ardor_Uni2F/scripts.pory"
	map_script_2 VAR_UNI_STATE, 10, Ardor_Uni2F_Script_LeafGraduationScene
	.2byte 0


Ardor_Uni2F_EventScript_OpenDoors::
# 27 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_LOGIC, Ardor_Uni2F_EventScript_OpenDoors_2
Ardor_Uni2F_EventScript_OpenDoors_1:
# 30 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ALGEBRA, Ardor_Uni2F_EventScript_OpenDoors_5
Ardor_Uni2F_EventScript_OpenDoors_4:
# 33 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_GEOMETRY, Ardor_Uni2F_EventScript_OpenDoors_8
Ardor_Uni2F_EventScript_OpenDoors_7:
# 36 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_HISTORY, Ardor_Uni2F_EventScript_OpenDoors_11
Ardor_Uni2F_EventScript_OpenDoors_10:
# 39 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_ARCHAEOLOGY, Ardor_Uni2F_EventScript_OpenDoors_14
Ardor_Uni2F_EventScript_OpenDoors_13:
# 42 "data/maps/Ardor_Uni2F/scripts.pory"
	goto_if_unset FLAG_OPEN_CLASS_PSYCHOLOGY, Ardor_Uni2F_EventScript_OpenDoors_17
Ardor_Uni2F_EventScript_OpenDoors_16:
	end

Ardor_Uni2F_EventScript_OpenDoors_2:
# 28 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 2, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_1

Ardor_Uni2F_EventScript_OpenDoors_5:
# 31 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 7, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_4

Ardor_Uni2F_EventScript_OpenDoors_8:
# 34 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 12, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_7

Ardor_Uni2F_EventScript_OpenDoors_11:
# 37 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 26, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_10

Ardor_Uni2F_EventScript_OpenDoors_14:
# 40 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 31, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_13

Ardor_Uni2F_EventScript_OpenDoors_17:
# 43 "data/maps/Ardor_Uni2F/scripts.pory"
	setmetatile 36, 9, METATILE_Facility_DoorBlock, 1
	goto Ardor_Uni2F_EventScript_OpenDoors_16


Ardor_Uni2F_EventScript_Leaf::
# 51 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 52 "data/maps/Ardor_Uni2F/scripts.pory"
	faceplayer
# 54 "data/maps/Ardor_Uni2F/scripts.pory"
	switch VAR_UNI_STATE
# 55 "data/maps/Ardor_Uni2F/scripts.pory"
	case 0, Ardor_Uni2F_EventScript_Leaf_3
# 57 "data/maps/Ardor_Uni2F/scripts.pory"
	case 1, Ardor_Uni2F_EventScript_Leaf_4
# 59 "data/maps/Ardor_Uni2F/scripts.pory"
	case 2, Ardor_Uni2F_EventScript_Leaf_5
# 61 "data/maps/Ardor_Uni2F/scripts.pory"
	case 3, Ardor_Uni2F_EventScript_Leaf_6
# 63 "data/maps/Ardor_Uni2F/scripts.pory"
	case 4, Ardor_Uni2F_EventScript_Leaf_7
# 65 "data/maps/Ardor_Uni2F/scripts.pory"
	case 5, Ardor_Uni2F_EventScript_Leaf_8
# 67 "data/maps/Ardor_Uni2F/scripts.pory"
	case 6, Ardor_Uni2F_EventScript_Leaf_9
# 69 "data/maps/Ardor_Uni2F/scripts.pory"
	case 7, Ardor_Uni2F_EventScript_Leaf_10
# 71 "data/maps/Ardor_Uni2F/scripts.pory"
	case 8, Ardor_Uni2F_EventScript_Leaf_11
# 74 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_EventScript_Leaf_Text_0
Ardor_Uni2F_EventScript_Leaf_1:
# 76 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 78 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 79 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end

Ardor_Uni2F_EventScript_Leaf_3:
# 56 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf0
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_4:
# 58 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf1
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_5:
# 60 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf2
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_6:
# 62 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LeafSummer
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_7:
# 64 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf3
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_8:
# 66 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LeafSummer
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_9:
# 68 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf4
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_10:
# 70 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LeafSummer
	goto Ardor_Uni2F_EventScript_Leaf_1

Ardor_Uni2F_EventScript_Leaf_11:
# 72 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_Leaf5
	goto Ardor_Uni2F_EventScript_Leaf_1


Ardor_Uni2F_EventScript_ArchaeologyDoorSign::
# 87 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 88 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_ArchaeologyDoorSign
# 89 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 90 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_LogicDoorSign::
# 95 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 96 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LogicDoorSign
# 97 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 98 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_AlgebraDoorSign::
# 103 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 104 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_AlgebraDoorSign
# 105 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 106 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_GeometryDoorSign::
# 111 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 112 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_GeometryDoorSign
# 113 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 114 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_HistoryDoorSign::
# 119 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 120 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_HistoryDoorSign
# 121 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 122 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_EventScript_PsychologyDoorSign::
# 127 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 128 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_PsychologyDoorSign
# 129 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 130 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


Ardor_Uni2F_Script_LeafGraduationScene::
# 135 "data/maps/Ardor_Uni2F/scripts.pory"
	lock
# 137 "data/maps/Ardor_Uni2F/scripts.pory"
	setvar VAR_UNI_STATE, 11
# 139 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 140 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown3
# 143 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 144 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 145 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 147 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 148 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 150 "data/maps/Ardor_Uni2F/scripts.pory"
	msgbox Ardor_Uni2F_Text_LeafGraduate
# 151 "data/maps/Ardor_Uni2F/scripts.pory"
	closemessage
# 153 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement 1, Common_Movement_WalkRight2
# 154 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 155 "data/maps/Ardor_Uni2F/scripts.pory"
	applymovement 1, Common_Movement_WalkUp3
# 156 "data/maps/Ardor_Uni2F/scripts.pory"
	waitmovement 0
# 158 "data/maps/Ardor_Uni2F/scripts.pory"
	removeobject 1
# 160 "data/maps/Ardor_Uni2F/scripts.pory"
	release
	end


# 165 "data/maps/Ardor_Uni2F/scripts.pory"
Ardor_Uni2F_Movement_LeafExitS:
# 166 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_down
# 166 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_down
# 167 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 167 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 167 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_right
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 168 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
	step_end

# 171 "data/maps/Ardor_Uni2F/scripts.pory"
Ardor_Uni2F_Movement_LeafExitN:
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
# 172 "data/maps/Ardor_Uni2F/scripts.pory"
	walk_up
	step_end

Ardor_Uni2F_EventScript_Leaf_Text_0:
# 74 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "ERROR\nVAR_UNI_STATE OOB$"

Ardor_Uni2F_Text_ArchaeologyDoorSign::
# 175 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "MAGISTER INDIANUS ARCHAEOLOGIAE EX\n"
	.string "ACADEMIA IN PYRAMIDE EST. REVERTETUR\l"
	.string "IN ANNO PROXIMO$"

Ardor_Uni2F_Text_Leaf0::
# 180 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "Oh hey {PLAYER} I found an Indianus.\n"
	.string "His door is halfway down the eastern\l"
	.string "hall but it won't open. I can't\l"
	.string "understand anything anybody even says\l"
	.string "so I don't know where Indianus is.$"

Ardor_Uni2F_Text_Leaf1::
# 185 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "My gosh! This cafeteria's not bad! I\n"
	.string "think I'm gonna register for class. Why\l"
	.string "don't you sign up too? It could be fun!\l"
	.string "We might even learn something while we\l"
	.string "look for Indianus and, of course, save\l"
	.string "Mew.$"

Ardor_Uni2F_Text_Leaf2::
# 190 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "So many classes... so much studying.\n"
	.string "This is a lot harder than Trainer\l"
	.string "School!$"

Ardor_Uni2F_Text_Leaf3::
# 195 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "I'm starting to get the hang of learning\n"
	.string "and it's not half as hard as I once\l"
	.string "thought.$"

Ardor_Uni2F_Text_Leaf4::
# 200 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "I need to do well on all my exams\n"
	.string "because a passing grade is not enough.\l"
	.string "If I want to impress with my\l"
	.string "transcripts I'll need to graduate top\l"
	.string "of my class.$"

Ardor_Uni2F_Text_Leaf5::
# 205 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "To be honest with you, I do not care\n"
	.string "about my grades or how I do in school or\l"
	.string "what happens to me next anymore. I'm\l"
	.string "quite burned out, just want to\l"
	.string "graduate, and find Indianus and then\l"
	.string "save Mew.$"

Ardor_Uni2F_Text_LeafSummer::
# 210 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "I'm still deciding which classes to take\n"
	.string "before I register for the next term.$"

Ardor_Uni2F_Text_LogicDoorSign::
# 214 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "LOGICA\n"
	.string "MAGISTER JOANNES$"

Ardor_Uni2F_Text_AlgebraDoorSign::
# 218 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "ALGEBRA\n"
	.string "MAGISTRA CAMILLA$"

Ardor_Uni2F_Text_GeometryDoorSign::
# 222 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "GEOMETRIA\n"
	.string "MAGISTER JEFFERSON$"

Ardor_Uni2F_Text_HistoryDoorSign::
# 226 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "HISTORIA\n"
	.string "DOCTOR VIRTREUS$"

Ardor_Uni2F_Text_PsychologyDoorSign::
# 230 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "PSYCHOLOGIA\n"
	.string "MAGISTRA LINDA$"

Ardor_Uni2F_Text_LeafGraduate::
# 234 "data/maps/Ardor_Uni2F/scripts.pory"
	.string "Congratulations {PLAYER}! We\n"
	.string "finished school but have only begun our\l"
	.string "long journey of self improvement and\l"
	.string "education. While many see this as the\l"
	.string "end, I see the beginning of something\l"
	.string "even more rewarding than what we have\l"
	.string "just finished. For us, being still brand\l"
	.string "new to the world, these past four terms\l"
	.string "have seemed like all our lives but the\l"
	.string "truth is, mathematically speaking, four\l"
	.string "terms is a small fraction of the whole\l"
	.string "decades of existence waiting for us.\l"
	.string "The lessons that we learned, moreso\l"
	.string "habits that we picked up will stay with\l"
	.string "us until the very last day of our\l"
	.string "lengthy lives. It's worthwhile to take\l"
	.string "pause and reflect on our\l"
	.string "accomplishment but we're only getting\l"
	.string "started. There's so much more to do. We\l"
	.string "must save Mew! Where is Indianus?\l"
	.string "These past four terms he still has not\l"
	.string "returned from Pyramid, wherever that\l"
	.string "may be. Now that we've graduated I\l"
	.string "suppose we'll have to find a job and\l"
	.string "rent a place and wait until he comes\l"
	.string "back so we can enlist him to help us\l"
	.string "save captured Mew. I'll head to town and\l"
	.string "find a room to rent While you set out to\l"
	.string "find the Pyramid Where Indianus has\l"
	.string "journeyed to dig. Do not give up\l"
	.string "{PLAYER}, you're our only hope.$"
