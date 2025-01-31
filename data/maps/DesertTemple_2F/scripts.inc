DesertTemple_2F_MapScripts::
	.byte 0


DesertTemple_2F_EventScript_Trigger1::
# 4 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 5 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 6 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 7 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout1
# 8 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 9 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger2::
# 14 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 15 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 16 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_2, 1
# 17 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout2
# 18 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 19 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger3::
# 24 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 25 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 26 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 27 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout3
# 28 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 29 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger4::
# 34 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 35 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 36 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_4, 1
# 37 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout4
# 38 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 39 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger5::
# 44 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 45 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 46 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_5, 1
# 47 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout5
# 48 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 49 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger6::
# 54 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 55 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 56 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_6, 1
# 57 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout6
# 58 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 59 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_Trigger7::
# 64 "data//maps/DesertTemple_2F/scripts.pory"
	lock
# 65 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_ClearAllVars
# 66 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 67 "data//maps/DesertTemple_2F/scripts.pory"
	call DesertTemple_2F_EventScript_SetLayout7
# 68 "data//maps/DesertTemple_2F/scripts.pory"
	special DrawWholeMapView
# 69 "data//maps/DesertTemple_2F/scripts.pory"
	release
	end


DesertTemple_2F_EventScript_ClearAllVars::
# 74 "data//maps/DesertTemple_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 75 "data//maps/DesertTemple_2F/scripts.pory"
	waitmovement 0
# 76 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 77 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_2, 0
# 78 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_3, 0
# 79 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_4, 0
# 80 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_5, 0
# 81 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_6, 0
# 82 "data//maps/DesertTemple_2F/scripts.pory"
	setvar VAR_TEMP_7, 0
	return


DesertTemple_2F_EventScript_SetLayout1::
# 89 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 90 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 91 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 92 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 93 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 94 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 96 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_NormalFloor, 0
# 98 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_NormalFloor, 0
# 99 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_NormalFloor, 0
# 100 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_NormalFloor, 0
# 101 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_NormalFloor, 0
# 102 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_NormalFloor, 0
# 103 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_NormalFloor, 0
# 104 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_NormalFloor, 0
# 105 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_NormalFloor, 0
# 106 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_NormalFloor, 0
# 107 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_NormalFloor, 0
# 108 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_NormalFloor, 0
# 109 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_NormalFloor, 0
# 110 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_NormalFloor, 0
# 111 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_NormalFloor, 0
# 112 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_NormalFloor, 0
# 113 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_NormalFloor, 0
# 114 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_NormalFloor, 0
# 115 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_NormalFloor, 0
# 116 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_NormalFloor, 0
# 117 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_NormalFloor, 0
# 118 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_NormalFloor, 0
# 119 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_NormalFloor, 0
# 120 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_NormalFloor, 0
# 121 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_NormalFloor, 0
# 125 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 126 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 127 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 128 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 129 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 130 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 131 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 132 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 133 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 134 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 135 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 136 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 137 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 138 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 139 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 141 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 142 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 143 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 144 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 145 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 146 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 147 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 148 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 149 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 150 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 151 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 152 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 153 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 154 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 155 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 156 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 157 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_FloorPit, 1
# 158 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_FloorPit, 1
# 159 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_FloorPit, 1
# 161 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 162 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 163 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 164 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 165 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 166 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 167 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 168 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 169 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 170 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 172 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 173 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 174 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 175 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 176 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 177 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 178 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 179 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 180 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 181 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 183 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 184 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 185 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 186 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 187 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 188 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 189 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 190 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 191 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 192 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 194 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 195 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 196 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 197 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 198 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 199 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 200 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 201 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 202 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_FloorPit, 1
# 203 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_FloorPit, 1
# 204 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_FloorPit, 1
# 205 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 206 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 207 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 208 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 209 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 20, 16, METATILE_BattlePyramid_FloorPit, 1
# 210 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 211 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 212 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 214 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_FloorPit, 1
# 215 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_FloorPit, 1
# 216 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_FloorPit, 1
# 217 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_FloorPit, 1
# 218 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_FloorPit, 1
# 219 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_FloorPit, 1
# 220 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_FloorPit, 1
# 221 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_FloorPit, 1
# 222 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_FloorPit, 1
# 223 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_FloorPit, 1
# 225 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_FloorPit, 1
# 226 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_FloorPit, 1
# 227 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_FloorPit, 1
# 228 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_FloorPit, 1
# 229 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_FloorPit, 1
# 230 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_FloorPit, 1
# 231 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_FloorPit, 1
# 232 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_FloorPit, 1
# 233 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_FloorPit, 1
# 234 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_FloorPit, 1
# 236 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_FloorPit, 1
# 237 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_FloorPit, 1
# 238 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_FloorPit, 1
# 239 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_FloorPit, 1
# 240 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_FloorPit, 1
# 241 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_FloorPit, 1
# 242 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_FloorPit, 1
# 243 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_FloorPit, 1
# 244 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_FloorPit, 1
# 245 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_FloorPit, 1
# 248 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 12, METATILE_BattlePyramid_FloorPitBorder, 1
# 249 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 12, METATILE_BattlePyramid_FloorPitBorder, 1
# 250 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 12, METATILE_BattlePyramid_FloorPitBorder, 1
# 251 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 12, METATILE_BattlePyramid_FloorPitBorder, 1
	return


DesertTemple_2F_EventScript_SetLayout2::
# 257 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 259 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 260 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 261 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 262 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 263 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 265 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_NormalFloor, 0
# 267 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_NormalFloor, 0
# 268 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_NormalFloor, 0
# 269 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_NormalFloor, 0
# 270 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_NormalFloor, 0
# 271 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_NormalFloor, 0
# 272 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_NormalFloor, 0
# 273 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_NormalFloor, 0
# 274 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_NormalFloor, 0
# 275 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_NormalFloor, 0
# 276 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_NormalFloor, 0
# 277 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_NormalFloor, 0
# 278 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_NormalFloor, 0
# 280 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 281 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 282 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 283 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 284 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 285 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 286 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 287 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 288 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 289 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 291 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 292 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 293 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 294 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 295 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 296 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 297 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 298 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 299 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 300 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 302 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 303 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 304 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 305 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 306 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 307 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 308 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 309 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 310 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 311 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 313 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 314 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 315 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 316 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 317 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 318 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 319 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 320 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 321 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 322 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 323 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 324 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 325 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 326 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_FloorPit, 1
# 327 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_FloorPit, 1
# 328 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_FloorPit, 1
# 330 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 331 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 332 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 333 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 334 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 335 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 336 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 337 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 338 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 339 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 341 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 342 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 343 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 344 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 345 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 346 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 347 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 348 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 349 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 350 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 352 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 353 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 354 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 355 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 356 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 357 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 358 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 359 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 360 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 361 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 363 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 364 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 365 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 366 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 367 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 368 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 369 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 370 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 371 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_FloorPit, 1
# 372 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_FloorPit, 1
# 373 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_FloorPit, 1
# 374 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 375 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 376 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 377 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 378 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_FloorPit, 1
# 379 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 380 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 381 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 383 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_FloorPit, 1
# 384 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_FloorPit, 1
# 385 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_FloorPit, 1
# 386 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_FloorPit, 1
# 387 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_FloorPit, 1
# 388 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_FloorPit, 1
# 389 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_FloorPit, 1
# 390 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_FloorPit, 1
# 391 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_FloorPit, 1
# 392 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_FloorPit, 1
# 394 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_FloorPit, 1
# 395 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_FloorPit, 1
# 396 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_FloorPit, 1
# 397 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_FloorPit, 1
# 398 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_FloorPit, 1
# 399 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_FloorPit, 1
# 400 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_FloorPit, 1
# 401 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_FloorPit, 1
# 402 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_FloorPit, 1
# 403 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_FloorPit, 1
# 405 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_FloorPit, 1
# 406 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_FloorPit, 1
# 407 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_FloorPit, 1
# 408 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_FloorPit, 1
# 409 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_FloorPit, 1
# 410 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_FloorPit, 1
# 411 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_FloorPit, 1
# 412 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_FloorPit, 1
# 413 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_FloorPit, 1
# 414 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_FloorPit, 1
	return


DesertTemple_2F_EventScript_SetLayout3::
# 421 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 422 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 424 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 425 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 426 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 427 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 429 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_NormalFloor, 0
# 431 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_NormalFloor, 0
# 432 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_NormalFloor, 0
# 433 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_NormalFloor, 0
# 434 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_NormalFloor, 0
# 435 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_NormalFloor, 0
# 436 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_NormalFloor, 0
# 437 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_NormalFloor, 0
# 438 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_NormalFloor, 0
# 439 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 21, METATILE_BattlePyramid_NormalFloor, 0
# 440 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 21, METATILE_BattlePyramid_NormalFloor, 0
# 441 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 21, METATILE_BattlePyramid_NormalFloor, 0
# 442 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_NormalFloor, 0
# 443 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_NormalFloor, 0
# 444 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_NormalFloor, 0
# 445 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_NormalFloor, 0
# 446 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_NormalFloor, 0
# 447 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 22, METATILE_BattlePyramid_NormalFloor, 0
# 448 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 22, METATILE_BattlePyramid_NormalFloor, 0
# 449 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 22, METATILE_BattlePyramid_NormalFloor, 0
# 450 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_NormalFloor, 0
# 451 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_NormalFloor, 0
# 452 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_NormalFloor, 0
# 453 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_NormalFloor, 0
# 454 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_NormalFloor, 0
# 456 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 457 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 458 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 459 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 460 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 461 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 462 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 463 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 464 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 465 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 466 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 467 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 468 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 469 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 470 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 471 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 472 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 473 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 474 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 475 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 476 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 477 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 478 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 479 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 480 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 481 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 482 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 483 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 484 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 485 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 486 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 487 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 488 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 489 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 490 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 491 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 492 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 493 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 494 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 495 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 496 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 497 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 498 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 499 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 500 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 501 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 502 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 503 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 504 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 505 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 506 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 507 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 508 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 509 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 510 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 511 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_FloorPit, 1
# 512 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_FloorPit, 1
# 513 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_FloorPit, 1
# 514 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 515 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 516 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 517 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 518 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 519 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 520 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 521 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 522 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 523 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 524 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 525 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 526 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 527 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 528 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 529 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 530 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 531 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 532 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 533 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 534 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 535 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 536 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 537 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 538 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 539 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 540 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 541 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 542 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 543 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 544 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 545 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 546 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 547 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 548 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 549 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 550 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 551 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 552 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 553 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_FloorPit, 1
# 554 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 555 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 556 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 557 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_FloorPit, 1
# 558 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_FloorPit, 1
# 559 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_FloorPit, 1
# 560 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_FloorPit, 1
# 561 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_FloorPit, 1
# 562 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_FloorPit, 1
# 563 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_FloorPit, 1
# 564 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_FloorPit, 1
# 565 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_FloorPit, 1
# 566 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_FloorPit, 1
# 567 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_FloorPit, 1
# 568 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_FloorPit, 1
# 569 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_FloorPit, 1
# 570 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_FloorPit, 1
# 571 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_FloorPit, 1
	return


DesertTemple_2F_EventScript_SetLayout4::
# 577 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 578 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 579 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 581 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 582 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 583 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 585 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_NormalFloor, 0
# 587 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_NormalFloor, 0
# 588 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_NormalFloor, 0
# 589 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_NormalFloor, 0
# 590 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_NormalFloor, 0
# 591 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_NormalFloor, 0
# 592 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_NormalFloor, 0
# 593 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_NormalFloor, 0
# 594 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_NormalFloor, 0
# 595 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_NormalFloor, 0
# 596 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_NormalFloor, 0
# 597 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_NormalFloor, 0
# 598 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_NormalFloor, 0
# 599 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_NormalFloor, 0
# 600 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_NormalFloor, 0
# 601 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_NormalFloor, 0
# 602 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 21, METATILE_BattlePyramid_NormalFloor, 0
# 603 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 21, METATILE_BattlePyramid_NormalFloor, 0
# 604 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 21, METATILE_BattlePyramid_NormalFloor, 0
# 605 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 22, METATILE_BattlePyramid_NormalFloor, 0
# 606 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 22, METATILE_BattlePyramid_NormalFloor, 0
# 607 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 22, METATILE_BattlePyramid_NormalFloor, 0
# 609 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 610 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 611 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 612 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 613 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 614 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 615 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 616 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 617 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 618 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 619 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 620 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 621 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 622 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 623 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 624 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 625 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 626 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 627 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 628 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 629 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 630 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 631 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 632 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 633 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 634 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 635 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 636 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 637 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 638 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 639 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 640 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 641 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 642 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 643 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 644 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 645 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 646 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 647 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 648 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 649 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 650 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 651 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 652 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 653 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 654 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 655 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 656 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 657 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 658 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 659 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 660 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 661 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 662 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 663 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 664 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_FloorPit, 1
# 665 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_FloorPit, 1
# 666 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_FloorPit, 1
# 667 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 668 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 669 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 670 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 671 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 672 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 673 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 674 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 675 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 676 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 677 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 678 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 679 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 680 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 681 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 682 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 683 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 684 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 685 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 686 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 687 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 688 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 689 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 690 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 691 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 692 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 693 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 694 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 695 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 696 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 697 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_FloorPit, 1
# 698 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 699 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 700 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 701 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_FloorPit, 1
# 702 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_FloorPit, 1
# 703 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_FloorPit, 1
# 704 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_FloorPit, 1
# 705 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_FloorPit, 1
# 706 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_FloorPit, 1
# 707 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_FloorPit, 1
# 708 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_FloorPit, 1
# 709 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_FloorPit, 1
# 710 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_FloorPit, 1
# 711 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_FloorPit, 1
# 712 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_FloorPit, 1
# 713 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_FloorPit, 1
# 714 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_FloorPit, 1
# 715 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_FloorPit, 1
# 716 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_FloorPit, 1
# 717 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_FloorPit, 1
# 718 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_FloorPit, 1
# 719 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_FloorPit, 1
# 720 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_FloorPit, 1
# 721 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_FloorPit, 1
# 722 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_FloorPit, 1
# 723 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_FloorPit, 1
# 724 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_FloorPit, 1
# 725 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_FloorPit, 1
# 726 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_FloorPit, 1
# 727 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_FloorPit, 1
# 728 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_FloorPit, 1
# 729 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_FloorPit, 1
# 730 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_FloorPit, 1
	return


DesertTemple_2F_EventScript_SetLayout5::
# 736 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 737 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 738 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 739 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 741 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 742 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 744 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_NormalFloor, 0
# 746 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_NormalFloor, 0
# 747 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_NormalFloor, 0
# 748 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_NormalFloor, 0
# 749 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 21, METATILE_BattlePyramid_NormalFloor, 0
# 750 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 21, METATILE_BattlePyramid_NormalFloor, 0
# 751 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 21, METATILE_BattlePyramid_NormalFloor, 0
# 752 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_NormalFloor, 0
# 753 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_NormalFloor, 0
# 754 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_NormalFloor, 0
# 755 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_NormalFloor, 0
# 756 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_NormalFloor, 0
# 757 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 22, METATILE_BattlePyramid_NormalFloor, 0
# 758 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 22, METATILE_BattlePyramid_NormalFloor, 0
# 759 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 22, METATILE_BattlePyramid_NormalFloor, 0
# 760 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_NormalFloor, 0
# 761 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_NormalFloor, 0
# 762 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_NormalFloor, 0
# 763 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_NormalFloor, 0
# 764 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_NormalFloor, 0
# 765 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_NormalFloor, 0
# 766 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_NormalFloor, 0
# 767 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_NormalFloor, 0
# 768 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_NormalFloor, 0
# 769 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_NormalFloor, 0
# 771 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 772 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 773 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 774 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 775 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 776 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 777 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 778 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 779 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 780 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 781 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 782 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 783 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 784 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 785 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 786 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 787 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 788 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 789 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 790 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 791 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 792 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 793 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 794 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 795 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 796 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 797 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 798 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 799 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 800 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 801 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 802 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 803 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 804 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 805 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 806 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 807 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 808 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 809 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 810 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 811 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 812 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 813 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 814 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 815 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 816 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 817 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 818 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 819 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 820 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 821 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 822 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 823 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 824 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 825 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 826 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_FloorPit, 1
# 827 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_FloorPit, 1
# 828 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_FloorPit, 1
# 829 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 830 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 831 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 832 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 833 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 834 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 835 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 836 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 837 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 838 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 839 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 840 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 841 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 842 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 843 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 844 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 845 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 846 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 847 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 848 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 849 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 850 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 851 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 852 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 853 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 854 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 855 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 856 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 857 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 858 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 859 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 860 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 861 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 862 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 863 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 864 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 865 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 866 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 867 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_FloorPit, 1
# 868 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_FloorPit, 1
# 869 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_FloorPit, 1
# 870 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 871 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 872 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 873 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 874 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 875 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_FloorPit, 1
# 876 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_FloorPit, 1
# 877 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_FloorPit, 1
# 878 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_FloorPit, 1
# 879 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_FloorPit, 1
# 880 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_FloorPit, 1
# 881 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_FloorPit, 1
# 882 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_FloorPit, 1
# 883 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_FloorPit, 1
# 884 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_FloorPit, 1
# 885 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_FloorPit, 1
# 886 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_FloorPit, 1
# 887 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_FloorPit, 1
# 888 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_FloorPit, 1
# 889 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_FloorPit, 1
	return


DesertTemple_2F_EventScript_SetLayout6::
# 895 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 896 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 897 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 898 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 899 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 901 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 903 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_NormalFloor, 0
# 905 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_NormalFloor, 0
# 906 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_NormalFloor, 0
# 907 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_NormalFloor, 0
# 908 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_NormalFloor, 0
# 909 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_NormalFloor, 0
# 910 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_NormalFloor, 0
# 911 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_NormalFloor, 0
# 912 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_NormalFloor, 0
# 913 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_NormalFloor, 0
# 914 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_NormalFloor, 0
# 915 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_NormalFloor, 0
# 916 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_NormalFloor, 0
# 917 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_NormalFloor, 0
# 918 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_NormalFloor, 0
# 919 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_NormalFloor, 0
# 920 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_NormalFloor, 0
# 921 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_NormalFloor, 0
# 922 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_NormalFloor, 0
# 923 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_NormalFloor, 0
# 924 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_NormalFloor, 0
# 925 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_NormalFloor, 0
# 926 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_NormalFloor, 0
# 927 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_NormalFloor, 0
# 928 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_NormalFloor, 0
# 929 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_NormalFloor, 0
# 930 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_NormalFloor, 0
# 931 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_NormalFloor, 0
# 932 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_NormalFloor, 0
# 933 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_NormalFloor, 0
# 934 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_NormalFloor, 0
# 935 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_NormalFloor, 0
# 936 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_NormalFloor, 0
# 937 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_NormalFloor, 0
# 939 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 940 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 941 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 942 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 943 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 944 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 945 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 946 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 947 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 948 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 949 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 950 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 951 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 952 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 953 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 954 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 955 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 956 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 957 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 958 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 959 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 960 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 961 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 962 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 963 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 964 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 965 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 966 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 967 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 968 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 969 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 970 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 971 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 972 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 973 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 974 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 975 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 976 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 977 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 978 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 979 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 980 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 981 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 982 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 983 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 984 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 985 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 986 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 987 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 988 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 989 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 990 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 991 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 992 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 993 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 994 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 995 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_FloorPit, 1
# 996 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_FloorPit, 1
# 997 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_FloorPit, 1
# 998 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 999 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 1000 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 1001 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 1002 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_FloorPit, 1
# 1003 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_FloorPit, 1
# 1004 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_FloorPit, 1
# 1005 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 1006 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 1007 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 1008 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 1009 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_FloorPit, 1
# 1010 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_FloorPit, 1
# 1011 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_FloorPit, 1
# 1012 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 1013 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 1014 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 1015 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 1016 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 1017 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_FloorPit, 1
# 1018 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_FloorPit, 1
# 1019 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_FloorPit, 1
# 1020 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 1021 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 1022 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 1023 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 1024 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_FloorPit, 1
# 1025 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_FloorPit, 1
# 1026 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_FloorPit, 1
# 1027 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_FloorPit, 1
# 1028 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_FloorPit, 1
# 1029 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_FloorPit, 1
# 1030 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_FloorPit, 1
# 1031 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_FloorPit, 1
# 1032 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_FloorPit, 1
# 1033 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_FloorPit, 1
# 1034 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_FloorPit, 1
# 1035 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_FloorPit, 1
# 1036 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_FloorPit, 1
# 1037 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_FloorPit, 1
# 1038 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_FloorPit, 1
# 1039 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_FloorPit, 1
# 1040 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_FloorPit, 1
# 1041 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_FloorPit, 1
# 1042 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_FloorPit, 1
	return


DesertTemple_2F_EventScript_SetLayout7::
# 1049 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 1050 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 14, METATILE_BattlePyramid_BlueTrigger, 0
# 1051 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 1052 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 1053 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 18, METATILE_BattlePyramid_BlueTrigger, 0
# 1054 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 22, METATILE_BattlePyramid_BlueTrigger, 0
# 1057 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1059 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 16, METATILE_BattlePyramid_NormalFloor, 0
# 1060 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 16, METATILE_BattlePyramid_NormalFloor, 0
# 1061 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 16, METATILE_BattlePyramid_NormalFloor, 0
# 1062 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 17, METATILE_BattlePyramid_NormalFloor, 0
# 1063 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 17, METATILE_BattlePyramid_NormalFloor, 0
# 1064 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 17, METATILE_BattlePyramid_NormalFloor, 0
# 1065 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 18, METATILE_BattlePyramid_NormalFloor, 0
# 1066 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 18, METATILE_BattlePyramid_NormalFloor, 0
# 1067 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 18, METATILE_BattlePyramid_NormalFloor, 0
# 1068 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 19, METATILE_BattlePyramid_NormalFloor, 0
# 1069 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 19, METATILE_BattlePyramid_NormalFloor, 0
# 1070 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 19, METATILE_BattlePyramid_NormalFloor, 0
# 1071 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 17, 20, METATILE_BattlePyramid_NormalFloor, 0
# 1072 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 18, 20, METATILE_BattlePyramid_NormalFloor, 0
# 1073 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 19, 20, METATILE_BattlePyramid_NormalFloor, 0
# 1074 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 21, METATILE_BattlePyramid_NormalFloor, 0
# 1075 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 21, METATILE_BattlePyramid_NormalFloor, 0
# 1076 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 21, METATILE_BattlePyramid_NormalFloor, 0
# 1077 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 21, METATILE_BattlePyramid_NormalFloor, 0
# 1078 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 21, METATILE_BattlePyramid_NormalFloor, 0
# 1079 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1080 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1081 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1082 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1083 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 22, METATILE_BattlePyramid_NormalFloor, 0
# 1084 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 23, METATILE_BattlePyramid_NormalFloor, 0
# 1085 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 23, METATILE_BattlePyramid_NormalFloor, 0
# 1086 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 23, METATILE_BattlePyramid_NormalFloor, 0
# 1087 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 23, METATILE_BattlePyramid_NormalFloor, 0
# 1088 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 23, METATILE_BattlePyramid_NormalFloor, 0
# 1090 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 13, METATILE_BattlePyramid_FloorPit, 1
# 1091 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 13, METATILE_BattlePyramid_FloorPit, 1
# 1092 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 13, METATILE_BattlePyramid_FloorPit, 1
# 1093 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 13, METATILE_BattlePyramid_FloorPit, 1
# 1094 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 13, METATILE_BattlePyramid_FloorPit, 1
# 1095 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 13, METATILE_BattlePyramid_FloorPit, 1
# 1096 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 13, METATILE_BattlePyramid_FloorPit, 1
# 1097 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 13, METATILE_BattlePyramid_FloorPit, 1
# 1098 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 13, METATILE_BattlePyramid_FloorPit, 1
# 1099 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 13, METATILE_BattlePyramid_FloorPit, 1
# 1100 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 13, METATILE_BattlePyramid_FloorPit, 1
# 1101 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 13, METATILE_BattlePyramid_FloorPit, 1
# 1102 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 13, METATILE_BattlePyramid_FloorPit, 1
# 1103 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 14, METATILE_BattlePyramid_FloorPit, 1
# 1104 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 14, METATILE_BattlePyramid_FloorPit, 1
# 1105 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 14, METATILE_BattlePyramid_FloorPit, 1
# 1106 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 14, METATILE_BattlePyramid_FloorPit, 1
# 1107 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 14, METATILE_BattlePyramid_FloorPit, 1
# 1108 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 14, METATILE_BattlePyramid_FloorPit, 1
# 1109 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 14, METATILE_BattlePyramid_FloorPit, 1
# 1110 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 14, METATILE_BattlePyramid_FloorPit, 1
# 1111 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 14, METATILE_BattlePyramid_FloorPit, 1
# 1112 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 14, METATILE_BattlePyramid_FloorPit, 1
# 1113 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 14, METATILE_BattlePyramid_FloorPit, 1
# 1114 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 14, METATILE_BattlePyramid_FloorPit, 1
# 1115 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 14, METATILE_BattlePyramid_FloorPit, 1
# 1116 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 15, METATILE_BattlePyramid_FloorPit, 1
# 1117 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 15, METATILE_BattlePyramid_FloorPit, 1
# 1118 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 15, METATILE_BattlePyramid_FloorPit, 1
# 1119 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 15, METATILE_BattlePyramid_FloorPit, 1
# 1120 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 15, METATILE_BattlePyramid_FloorPit, 1
# 1121 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 15, METATILE_BattlePyramid_FloorPit, 1
# 1122 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 15, METATILE_BattlePyramid_FloorPit, 1
# 1123 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 15, METATILE_BattlePyramid_FloorPit, 1
# 1124 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 15, METATILE_BattlePyramid_FloorPit, 1
# 1125 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 15, METATILE_BattlePyramid_FloorPit, 1
# 1126 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 15, METATILE_BattlePyramid_FloorPit, 1
# 1127 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 15, METATILE_BattlePyramid_FloorPit, 1
# 1128 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 15, METATILE_BattlePyramid_FloorPit, 1
# 1129 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 16, METATILE_BattlePyramid_FloorPit, 1
# 1130 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 16, METATILE_BattlePyramid_FloorPit, 1
# 1131 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 16, METATILE_BattlePyramid_FloorPit, 1
# 1132 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 16, METATILE_BattlePyramid_FloorPit, 1
# 1133 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 16, METATILE_BattlePyramid_FloorPit, 1
# 1134 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 16, METATILE_BattlePyramid_FloorPit, 1
# 1135 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 16, METATILE_BattlePyramid_FloorPit, 1
# 1136 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 16, METATILE_BattlePyramid_FloorPit, 1
# 1137 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 16, METATILE_BattlePyramid_FloorPit, 1
# 1138 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 16, METATILE_BattlePyramid_FloorPit, 1
# 1139 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 16, METATILE_BattlePyramid_FloorPit, 1
# 1140 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 16, METATILE_BattlePyramid_FloorPit, 1
# 1141 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 16, METATILE_BattlePyramid_FloorPit, 1
# 1142 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 16, METATILE_BattlePyramid_FloorPit, 1
# 1143 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 16, METATILE_BattlePyramid_FloorPit, 1
# 1144 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 16, METATILE_BattlePyramid_FloorPit, 1
# 1145 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 17, METATILE_BattlePyramid_FloorPit, 1
# 1146 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 17, METATILE_BattlePyramid_FloorPit, 1
# 1147 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 17, METATILE_BattlePyramid_FloorPit, 1
# 1148 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 17, METATILE_BattlePyramid_FloorPit, 1
# 1149 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 17, METATILE_BattlePyramid_FloorPit, 1
# 1150 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 17, METATILE_BattlePyramid_FloorPit, 1
# 1151 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 17, METATILE_BattlePyramid_FloorPit, 1
# 1152 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 18, METATILE_BattlePyramid_FloorPit, 1
# 1153 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 18, METATILE_BattlePyramid_FloorPit, 1
# 1154 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 18, METATILE_BattlePyramid_FloorPit, 1
# 1155 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 18, METATILE_BattlePyramid_FloorPit, 1
# 1156 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 18, METATILE_BattlePyramid_FloorPit, 1
# 1157 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 18, METATILE_BattlePyramid_FloorPit, 1
# 1158 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 18, METATILE_BattlePyramid_FloorPit, 1
# 1159 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 19, METATILE_BattlePyramid_FloorPit, 1
# 1160 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 19, METATILE_BattlePyramid_FloorPit, 1
# 1161 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 19, METATILE_BattlePyramid_FloorPit, 1
# 1162 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 19, METATILE_BattlePyramid_FloorPit, 1
# 1163 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 19, METATILE_BattlePyramid_FloorPit, 1
# 1164 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 19, METATILE_BattlePyramid_FloorPit, 1
# 1165 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 19, METATILE_BattlePyramid_FloorPit, 1
# 1166 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 1, 20, METATILE_BattlePyramid_FloorPit, 1
# 1167 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 2, 20, METATILE_BattlePyramid_FloorPit, 1
# 1168 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 3, 20, METATILE_BattlePyramid_FloorPit, 1
# 1169 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 20, METATILE_BattlePyramid_FloorPit, 1
# 1170 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 20, METATILE_BattlePyramid_FloorPit, 1
# 1171 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 20, METATILE_BattlePyramid_FloorPit, 1
# 1172 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 20, METATILE_BattlePyramid_FloorPit, 1
# 1173 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 20, METATILE_BattlePyramid_FloorPit, 1
# 1174 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 9, 20, METATILE_BattlePyramid_FloorPit, 1
# 1175 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 10, 20, METATILE_BattlePyramid_FloorPit, 1
# 1176 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 11, 20, METATILE_BattlePyramid_FloorPit, 1
# 1177 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 12, 20, METATILE_BattlePyramid_FloorPit, 1
# 1178 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 13, 20, METATILE_BattlePyramid_FloorPit, 1
# 1179 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 14, 20, METATILE_BattlePyramid_FloorPit, 1
# 1180 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 15, 20, METATILE_BattlePyramid_FloorPit, 1
# 1181 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 16, 20, METATILE_BattlePyramid_FloorPit, 1
# 1182 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 21, METATILE_BattlePyramid_FloorPit, 1
# 1183 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 21, METATILE_BattlePyramid_FloorPit, 1
# 1184 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 21, METATILE_BattlePyramid_FloorPit, 1
# 1185 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 21, METATILE_BattlePyramid_FloorPit, 1
# 1186 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 21, METATILE_BattlePyramid_FloorPit, 1
# 1187 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 22, METATILE_BattlePyramid_FloorPit, 1
# 1188 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 22, METATILE_BattlePyramid_FloorPit, 1
# 1189 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 22, METATILE_BattlePyramid_FloorPit, 1
# 1190 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 22, METATILE_BattlePyramid_FloorPit, 1
# 1191 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 22, METATILE_BattlePyramid_FloorPit, 1
# 1192 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 4, 23, METATILE_BattlePyramid_FloorPit, 1
# 1193 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 5, 23, METATILE_BattlePyramid_FloorPit, 1
# 1194 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 6, 23, METATILE_BattlePyramid_FloorPit, 1
# 1195 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 7, 23, METATILE_BattlePyramid_FloorPit, 1
# 1196 "data//maps/DesertTemple_2F/scripts.pory"
	setmetatile 8, 23, METATILE_BattlePyramid_FloorPit, 1
	return

