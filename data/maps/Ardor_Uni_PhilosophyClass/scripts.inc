Ardor_Uni_PhilosophyClass_MapScripts::
	.byte 0


Ardor_Uni_PhilosophyClass_EventScript_Teacher::
# 11 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	lock
# 12 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	faceplayer
# 13 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	checktrainerflag TRAINER_UNI_PHILOSOPHY
	goto_if 1, Ardor_Uni_PhilosophyClass_EventScript_Teacher_2
# 16 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	goto_if_set FLAG_PHILOSOPHY_INTRO, Ardor_Uni_PhilosophyClass_EventScript_Teacher_3
# 19 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	setflag FLAG_PHILOSOPHY_INTRO
# 20 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassIntro
# 21 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
# 22 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	call Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy
Ardor_Uni_PhilosophyClass_EventScript_Teacher_1:
# 24 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 25 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	waitmovement 0
# 26 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	release
	end

Ardor_Uni_PhilosophyClass_EventScript_Teacher_2:
# 14 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassFinished
# 15 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PhilosophyClass_EventScript_Teacher_1

Ardor_Uni_PhilosophyClass_EventScript_Teacher_3:
# 17 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	call Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy
	goto Ardor_Uni_PhilosophyClass_EventScript_Teacher_1


Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy::
# 31 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_PhilosophyIntro, MSGBOX_YESNO
# 32 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_2
# 45 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_Return
# 46 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1:
	return

Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_2:
# 33 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	special NamePhilosophy
# 34 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	waitstate
# 35 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	specialvar VAR_RESULT, IsPhilosophyPhrase
# 36 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_5
# 39 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_PhilosophyFail
# 40 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
# 41 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_Return
# 42 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
	goto Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1

Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_5:
# 37 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	call Ardor_Uni_PhilosophyClass_EventScript_Test
	goto Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1


Ardor_Uni_PhilosophyClass_EventScript_Test::
# 52 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 53 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	waitmovement 0
# 54 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_TestBegin
# 55 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	waitmessage
# 56 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 57 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	waitmessage
# 58 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_PHILOSOPHY, Ardor_Uni_PhilosophyClass_Text_TeacherBattleLost
# 59 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 60 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassFinished
# 61 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	closemessage
	return


Ardor_Uni_PhilosophyClass_Text_ClassIntro::
# 65 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Salve puer. Magister senex Hamlet sum.\l"
	.string "Quod est Philosophia? Non scio...$"

Ardor_Uni_PhilosophyClass_Text_PhilosophyIntro::
# 69 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Venisti philosophiam disserere?$"

Ardor_Uni_PhilosophyClass_Text_PhilosophyFail::
# 73 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "{STR_VAR_1}? Quid est\l"
	.string "{STR_VAR_1}? Tenetne matrem\l"
	.string "{STR_VAR_1}? Ubi est\l"
	.string "{STR_VAR_1}? Estne senex ut iuvenis\l"
	.string "{STR_VAR_1}? Cur est\l"
	.string "{STR_VAR_1}? Non scio...Qui\l"
	.string "scit?...Non scio...$"

Ardor_Uni_PhilosophyClass_Text_Return::
# 77 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Reveni cum amor philosophiae.$"

Ardor_Uni_PhilosophyClass_Text_ClassFinished::
# 81 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Iam veritatem inquisivisti. Vale, non\l"
	.string "plus tibi docere possum.$"

Ardor_Uni_PhilosophyClass_Text_TestBegin::
# 85 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Quid?$"

Ardor_Uni_PhilosophyClass_Text_TeacherBattleLost::
# 89 "data/maps/Ardor_Uni_PhilosophyClass/scripts.pory"
	.string "Esse an non esse, quaestio est.$"
