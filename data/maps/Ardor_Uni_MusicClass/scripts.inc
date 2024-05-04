Ardor_Uni_MusicClass_MapScripts::
	.byte 0


Ardor_Uni_MusicClass_EventScript_Teacher::
# 10 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	lock
# 11 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	faceplayer
# 12 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	checktrainerflag TRAINER_UNI_MUSIC
	goto_if 1, Ardor_Uni_MusicClass_EventScript_Teacher_2
# 16 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_ClassIntro
# 17 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 18 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	call Ardor_Uni_MusicClass_EventScript_MakeMusic
Ardor_Uni_MusicClass_EventScript_Teacher_1:
# 20 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 21 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitmovement 0
# 22 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	release
	end

Ardor_Uni_MusicClass_EventScript_Teacher_2:
# 13 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_ClassFinished
# 14 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
	goto Ardor_Uni_MusicClass_EventScript_Teacher_1


Ardor_Uni_MusicClass_EventScript_MakeMusic::
# 28 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_Music1
# 29 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 30 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 31 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_MusicPlay
# 32 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_1
# 33 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_3
# 35 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_4
# 37 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_5
# 39 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_6
# 41 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_7
# 43 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_8
# 45 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_9
# 47 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_10
Ardor_Uni_MusicClass_EventScript_MakeMusic_1:
# 50 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 51 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 53 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_Music2
# 54 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 55 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 56 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 57 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 58 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_MusicPlay
# 59 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_1
# 60 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_13
# 62 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_14
# 64 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_15
# 66 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_16
# 68 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_17
# 70 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_18
# 72 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_19
# 74 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_20
Ardor_Uni_MusicClass_EventScript_MakeMusic_11:
# 77 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 78 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_2
# 79 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_23
# 81 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_24
# 83 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_25
# 85 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_26
# 87 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_27
# 89 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_28
# 91 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_29
# 93 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_30
Ardor_Uni_MusicClass_EventScript_MakeMusic_21:
# 96 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 97 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 99 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_Music4
# 100 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 101 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 102 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 103 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 104 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 105 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 106 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 107 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 108 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 109 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_MusicPlay
# 110 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_1
# 111 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_33
# 113 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_34
# 115 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_35
# 117 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_36
# 119 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_37
# 121 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_38
# 123 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_39
# 125 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_40
Ardor_Uni_MusicClass_EventScript_MakeMusic_31:
# 128 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 129 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_2
# 130 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_43
# 132 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_44
# 134 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_45
# 136 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_46
# 138 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_47
# 140 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_48
# 142 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_49
# 144 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_50
Ardor_Uni_MusicClass_EventScript_MakeMusic_41:
# 147 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 148 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_3
# 149 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_53
# 151 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_54
# 153 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_55
# 155 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_56
# 157 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_57
# 159 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_58
# 161 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_59
# 163 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_60
Ardor_Uni_MusicClass_EventScript_MakeMusic_51:
# 166 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 167 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_4
# 168 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_63
# 170 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_64
# 172 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_65
# 174 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_66
# 176 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_67
# 178 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_68
# 180 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_69
# 182 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_70
Ardor_Uni_MusicClass_EventScript_MakeMusic_61:
# 185 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 186 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 188 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_Music8
# 189 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 190 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 191 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 192 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 193 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 194 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 195 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 196 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 197 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 198 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 199 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 200 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_6, VAR_RESULT
# 201 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 202 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 203 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 204 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 205 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 206 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_MusicPlay
# 207 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_1
# 208 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_73
# 210 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_74
# 212 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_75
# 214 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_76
# 216 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_77
# 218 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_78
# 220 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_79
# 222 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_80
Ardor_Uni_MusicClass_EventScript_MakeMusic_71:
# 225 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 226 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_2
# 227 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_83
# 229 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_84
# 231 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_85
# 233 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_86
# 235 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_87
# 237 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_88
# 239 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_89
# 241 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_90
Ardor_Uni_MusicClass_EventScript_MakeMusic_81:
# 244 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 245 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_3
# 246 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_93
# 248 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_94
# 250 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_95
# 252 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_96
# 254 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_97
# 256 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_98
# 258 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_99
# 260 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_100
Ardor_Uni_MusicClass_EventScript_MakeMusic_91:
# 263 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 264 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_4
# 265 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_103
# 267 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_104
# 269 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_105
# 271 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_106
# 273 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_107
# 275 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_108
# 277 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_109
# 279 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_110
Ardor_Uni_MusicClass_EventScript_MakeMusic_101:
# 282 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 283 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_5
# 284 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_113
# 286 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_114
# 288 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_115
# 290 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_116
# 292 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_117
# 294 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_118
# 296 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_119
# 298 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_120
Ardor_Uni_MusicClass_EventScript_MakeMusic_111:
# 301 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 302 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_6
# 303 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_123
# 305 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_124
# 307 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_125
# 309 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_126
# 311 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_127
# 313 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_128
# 315 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_129
# 317 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_130
Ardor_Uni_MusicClass_EventScript_MakeMusic_121:
# 320 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 321 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_7
# 322 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_133
# 324 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_134
# 326 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_135
# 328 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_136
# 330 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_137
# 332 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_138
# 334 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_139
# 336 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_140
Ardor_Uni_MusicClass_EventScript_MakeMusic_131:
# 339 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 340 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_8
# 341 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_143
# 343 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_144
# 345 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_145
# 347 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_146
# 349 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_147
# 351 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_148
# 353 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_149
# 355 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_150
Ardor_Uni_MusicClass_EventScript_MakeMusic_141:
# 358 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 359 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 361 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_Music12
# 362 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 363 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 364 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 365 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 366 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 367 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 368 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 369 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_4, VAR_RESULT
# 370 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 371 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_5, VAR_RESULT
# 372 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 373 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_6, VAR_RESULT
# 374 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 375 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_7, VAR_RESULT
# 376 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 377 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_8, VAR_RESULT
# 378 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 379 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_9, VAR_RESULT
# 380 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 381 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 382 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 383 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 384 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	multichoice 0, 0, MULTI_ARDOR_MUSIC_CHOOSE_NOTE, TRUE
# 385 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	copyvar VAR_TEMP_B, VAR_RESULT
# 386 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 387 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_MusicPlay
# 388 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_1
# 389 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_153
# 391 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_154
# 393 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_155
# 395 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_156
# 397 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_157
# 399 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_158
# 401 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_159
# 403 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_160
Ardor_Uni_MusicClass_EventScript_MakeMusic_151:
# 406 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 407 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_2
# 408 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_163
# 410 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_164
# 412 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_165
# 414 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_166
# 416 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_167
# 418 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_168
# 420 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_169
# 422 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_170
Ardor_Uni_MusicClass_EventScript_MakeMusic_161:
# 425 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 426 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_3
# 427 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_173
# 429 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_174
# 431 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_175
# 433 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_176
# 435 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_177
# 437 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_178
# 439 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_179
# 441 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_180
Ardor_Uni_MusicClass_EventScript_MakeMusic_171:
# 444 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 445 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_4
# 446 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_183
# 448 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_184
# 450 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_185
# 452 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_186
# 454 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_187
# 456 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_188
# 458 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_189
# 460 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_190
Ardor_Uni_MusicClass_EventScript_MakeMusic_181:
# 463 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 464 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_5
# 465 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_193
# 467 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_194
# 469 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_195
# 471 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_196
# 473 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_197
# 475 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_198
# 477 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_199
# 479 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_200
Ardor_Uni_MusicClass_EventScript_MakeMusic_191:
# 482 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 483 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_6
# 484 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_203
# 486 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_204
# 488 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_205
# 490 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_206
# 492 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_207
# 494 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_208
# 496 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_209
# 498 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_210
Ardor_Uni_MusicClass_EventScript_MakeMusic_201:
# 501 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 502 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_7
# 503 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_213
# 505 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_214
# 507 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_215
# 509 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_216
# 511 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_217
# 513 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_218
# 515 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_219
# 517 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_220
Ardor_Uni_MusicClass_EventScript_MakeMusic_211:
# 520 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 521 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_8
# 522 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_223
# 524 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_224
# 526 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_225
# 528 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_226
# 530 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_227
# 532 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_228
# 534 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_229
# 536 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_230
Ardor_Uni_MusicClass_EventScript_MakeMusic_221:
# 539 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 540 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_9
# 541 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_233
# 543 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_234
# 545 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_235
# 547 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_236
# 549 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_237
# 551 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_238
# 553 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_239
# 555 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_240
Ardor_Uni_MusicClass_EventScript_MakeMusic_231:
# 558 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 559 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_0
# 560 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_243
# 562 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_244
# 564 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_245
# 566 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_246
# 568 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_247
# 570 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_248
# 572 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_249
# 574 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_250
Ardor_Uni_MusicClass_EventScript_MakeMusic_241:
# 577 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 578 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_A
# 579 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_253
# 581 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_254
# 583 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_255
# 585 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_256
# 587 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_257
# 589 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_258
# 591 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_259
# 593 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_260
Ardor_Uni_MusicClass_EventScript_MakeMusic_251:
# 596 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 597 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	switch VAR_TEMP_B
# 598 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 0, Ardor_Uni_MusicClass_EventScript_MakeMusic_263
# 600 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 1, Ardor_Uni_MusicClass_EventScript_MakeMusic_264
# 602 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 2, Ardor_Uni_MusicClass_EventScript_MakeMusic_265
# 604 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 3, Ardor_Uni_MusicClass_EventScript_MakeMusic_266
# 606 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 4, Ardor_Uni_MusicClass_EventScript_MakeMusic_267
# 608 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 5, Ardor_Uni_MusicClass_EventScript_MakeMusic_268
# 610 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 6, Ardor_Uni_MusicClass_EventScript_MakeMusic_269
# 612 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	case 7, Ardor_Uni_MusicClass_EventScript_MakeMusic_270
Ardor_Uni_MusicClass_EventScript_MakeMusic_261:
# 615 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitse
# 616 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
# 617 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	call Ardor_Uni_MusicClass_EventScript_Test
	return

Ardor_Uni_MusicClass_EventScript_MakeMusic_3:
# 34 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_4:
# 36 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_5:
# 38 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_6:
# 40 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_7:
# 42 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_8:
# 44 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_9:
# 46 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_10:
# 48 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_1

Ardor_Uni_MusicClass_EventScript_MakeMusic_13:
# 61 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_14:
# 63 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_15:
# 65 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_16:
# 67 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_17:
# 69 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_18:
# 71 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_19:
# 73 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_20:
# 75 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_11

Ardor_Uni_MusicClass_EventScript_MakeMusic_23:
# 80 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_24:
# 82 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_25:
# 84 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_26:
# 86 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_27:
# 88 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_28:
# 90 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_29:
# 92 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_30:
# 94 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_21

Ardor_Uni_MusicClass_EventScript_MakeMusic_33:
# 112 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_34:
# 114 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_35:
# 116 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_36:
# 118 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_37:
# 120 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_38:
# 122 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_39:
# 124 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_40:
# 126 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_31

Ardor_Uni_MusicClass_EventScript_MakeMusic_43:
# 131 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_44:
# 133 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_45:
# 135 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_46:
# 137 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_47:
# 139 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_48:
# 141 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_49:
# 143 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_50:
# 145 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_41

Ardor_Uni_MusicClass_EventScript_MakeMusic_53:
# 150 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_54:
# 152 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_55:
# 154 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_56:
# 156 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_57:
# 158 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_58:
# 160 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_59:
# 162 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_60:
# 164 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_51

Ardor_Uni_MusicClass_EventScript_MakeMusic_63:
# 169 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_64:
# 171 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_65:
# 173 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_66:
# 175 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_67:
# 177 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_68:
# 179 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_69:
# 181 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_70:
# 183 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_61

Ardor_Uni_MusicClass_EventScript_MakeMusic_73:
# 209 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_74:
# 211 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_75:
# 213 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_76:
# 215 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_77:
# 217 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_78:
# 219 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_79:
# 221 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_80:
# 223 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_71

Ardor_Uni_MusicClass_EventScript_MakeMusic_83:
# 228 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_84:
# 230 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_85:
# 232 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_86:
# 234 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_87:
# 236 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_88:
# 238 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_89:
# 240 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_90:
# 242 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_81

Ardor_Uni_MusicClass_EventScript_MakeMusic_93:
# 247 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_94:
# 249 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_95:
# 251 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_96:
# 253 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_97:
# 255 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_98:
# 257 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_99:
# 259 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_100:
# 261 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_91

Ardor_Uni_MusicClass_EventScript_MakeMusic_103:
# 266 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_104:
# 268 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_105:
# 270 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_106:
# 272 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_107:
# 274 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_108:
# 276 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_109:
# 278 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_110:
# 280 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_101

Ardor_Uni_MusicClass_EventScript_MakeMusic_113:
# 285 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_114:
# 287 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_115:
# 289 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_116:
# 291 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_117:
# 293 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_118:
# 295 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_119:
# 297 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_120:
# 299 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_111

Ardor_Uni_MusicClass_EventScript_MakeMusic_123:
# 304 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_124:
# 306 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_125:
# 308 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_126:
# 310 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_127:
# 312 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_128:
# 314 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_129:
# 316 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_130:
# 318 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_121

Ardor_Uni_MusicClass_EventScript_MakeMusic_133:
# 323 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_134:
# 325 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_135:
# 327 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_136:
# 329 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_137:
# 331 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_138:
# 333 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_139:
# 335 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_140:
# 337 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_131

Ardor_Uni_MusicClass_EventScript_MakeMusic_143:
# 342 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_144:
# 344 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_145:
# 346 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_146:
# 348 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_147:
# 350 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_148:
# 352 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_149:
# 354 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_150:
# 356 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_141

Ardor_Uni_MusicClass_EventScript_MakeMusic_153:
# 390 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_154:
# 392 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_155:
# 394 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_156:
# 396 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_157:
# 398 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_158:
# 400 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_159:
# 402 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_160:
# 404 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_151

Ardor_Uni_MusicClass_EventScript_MakeMusic_163:
# 409 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_164:
# 411 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_165:
# 413 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_166:
# 415 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_167:
# 417 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_168:
# 419 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_169:
# 421 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_170:
# 423 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_161

Ardor_Uni_MusicClass_EventScript_MakeMusic_173:
# 428 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_174:
# 430 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_175:
# 432 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_176:
# 434 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_177:
# 436 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_178:
# 438 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_179:
# 440 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_180:
# 442 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_171

Ardor_Uni_MusicClass_EventScript_MakeMusic_183:
# 447 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_184:
# 449 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_185:
# 451 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_186:
# 453 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_187:
# 455 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_188:
# 457 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_189:
# 459 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_190:
# 461 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_181

Ardor_Uni_MusicClass_EventScript_MakeMusic_193:
# 466 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_194:
# 468 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_195:
# 470 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_196:
# 472 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_197:
# 474 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_198:
# 476 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_199:
# 478 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_200:
# 480 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_191

Ardor_Uni_MusicClass_EventScript_MakeMusic_203:
# 485 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_204:
# 487 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_205:
# 489 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_206:
# 491 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_207:
# 493 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_208:
# 495 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_209:
# 497 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_210:
# 499 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_201

Ardor_Uni_MusicClass_EventScript_MakeMusic_213:
# 504 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_214:
# 506 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_215:
# 508 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_216:
# 510 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_217:
# 512 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_218:
# 514 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_219:
# 516 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_220:
# 518 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_211

Ardor_Uni_MusicClass_EventScript_MakeMusic_223:
# 523 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_224:
# 525 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_225:
# 527 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_226:
# 529 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_227:
# 531 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_228:
# 533 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_229:
# 535 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_230:
# 537 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_221

Ardor_Uni_MusicClass_EventScript_MakeMusic_233:
# 542 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_234:
# 544 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_235:
# 546 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_236:
# 548 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_237:
# 550 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_238:
# 552 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_239:
# 554 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_240:
# 556 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_231

Ardor_Uni_MusicClass_EventScript_MakeMusic_243:
# 561 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_244:
# 563 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_245:
# 565 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_246:
# 567 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_247:
# 569 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_248:
# 571 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_249:
# 573 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_250:
# 575 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_241

Ardor_Uni_MusicClass_EventScript_MakeMusic_253:
# 580 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_254:
# 582 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_255:
# 584 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_256:
# 586 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_257:
# 588 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_258:
# 590 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_259:
# 592 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_260:
# 594 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_251

Ardor_Uni_MusicClass_EventScript_MakeMusic_263:
# 599 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C_HIGH
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_264:
# 601 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_B
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_265:
# 603 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_A
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_266:
# 605 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_G
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_267:
# 607 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_F
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_268:
# 609 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_E
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_269:
# 611 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_D
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261

Ardor_Uni_MusicClass_EventScript_MakeMusic_270:
# 613 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	playse SE_NOTE_C
	goto Ardor_Uni_MusicClass_EventScript_MakeMusic_261


Ardor_Uni_MusicClass_EventScript_Test::
# 623 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 624 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	waitmessage
# 625 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_MUSIC, Ardor_Uni_MusicClass_Text_TeacherBattleLost
# 626 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 627 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	msgbox Ardor_Uni_MusicClass_Text_ClassFinished
# 628 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	closemessage
	return


Ardor_Uni_MusicClass_Text_ClassIntro::
# 632 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Salve puer. Magister Gerardus sum.\l"
	.string "Necesse est tibi docere musicam. Musica\l"
	.string "non ludus est ergo non debes subridere.$"

Ardor_Uni_MusicClass_Text_Music1::
# 636 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Selige unum notam musicae.$"

Ardor_Uni_MusicClass_Text_Music2::
# 640 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Selige duas notas musicae.$"

Ardor_Uni_MusicClass_Text_Music4::
# 644 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Selige notas quattor musicae.$"

Ardor_Uni_MusicClass_Text_Music8::
# 648 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Selige notas octo musicae.$"

Ardor_Uni_MusicClass_Text_Music12::
# 652 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Selige notas duodecim musicae.$"

Ardor_Uni_MusicClass_Text_MusicPlay::
# 656 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Fiat musica!$"

Ardor_Uni_MusicClass_Text_ClassFinished::
# 660 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Congratulatio! Iam studuisti Musicam.$"

Ardor_Uni_MusicClass_Text_TeacherBattleLost::
# 664 "data/maps/Ardor_Uni_MusicClass/scripts.pory"
	.string "Sellam iactabo!$"
