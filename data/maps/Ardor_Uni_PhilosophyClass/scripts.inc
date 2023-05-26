Ardor_Uni_PhilosophyClass_MapScripts::
	.byte 0


Ardor_Uni_PhilosophyClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_PHILOSOPHY
	goto_if 1, Ardor_Uni_PhilosophyClass_EventScript_Teacher_2
	goto_if_set FLAG_PHILOSOPHY_INTRO, Ardor_Uni_PhilosophyClass_EventScript_Teacher_3
	setflag FLAG_PHILOSOPHY_INTRO
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassIntro
	closemessage
	call Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy
Ardor_Uni_PhilosophyClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_PhilosophyClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_PhilosophyClass_EventScript_Teacher_1

Ardor_Uni_PhilosophyClass_EventScript_Teacher_3:
	call Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy
	goto Ardor_Uni_PhilosophyClass_EventScript_Teacher_1


Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy::
	msgbox Ardor_Uni_PhilosophyClass_Text_PhilosophyIntro, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_2
	msgbox Ardor_Uni_PhilosophyClass_Text_Return
	closemessage
Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1:
	return

Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_2:
	special NamePhilosophy
	waitstate
	specialvar VAR_RESULT, IsPhilosophyPhrase
	compare VAR_RESULT, TRUE
	goto_if_eq Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_5
	msgbox Ardor_Uni_PhilosophyClass_Text_PhilosophyFail
	closemessage
	msgbox Ardor_Uni_PhilosophyClass_Text_Return
	closemessage
	goto Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1

Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_5:
	call Ardor_Uni_PhilosophyClass_EventScript_Test
	goto Ardor_Uni_PhilosophyClass_EventScript_DoPhilosophy_1


Ardor_Uni_PhilosophyClass_EventScript_Test::
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Ardor_Uni_PhilosophyClass_Text_TestBegin
	waitmessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_PHILOSOPHY, Ardor_Uni_PhilosophyClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_IncrementVar
	msgbox Ardor_Uni_PhilosophyClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_PhilosophyClass_Text_ClassIntro::
	.string "Salve puer. Magister senex Hamlet sum.\n"
	.string "Quod est Philosophia? Non scio...$"

Ardor_Uni_PhilosophyClass_Text_PhilosophyIntro::
	.string "Venisti philosophiam disserere?$"

Ardor_Uni_PhilosophyClass_Text_PhilosophyFail::
	.string "{STR_VAR_1}? Quid est\n"
	.string "{STR_VAR_1}? Tenetne matrem\l"
	.string "{STR_VAR_1}? Ubi est\l"
	.string "{STR_VAR_1}? Estne senex ut\l"
	.string "iuvenis {STR_VAR_1}? Cur est\l"
	.string "{STR_VAR_1}? Non scio...Qui\l"
	.string "scit?...Non scio...$"

Ardor_Uni_PhilosophyClass_Text_Return::
	.string "Reveni cum amor philosophiae.$"

Ardor_Uni_PhilosophyClass_Text_ClassFinished::
	.string "Iam veritatem inquisivisti. Vale, non\n"
	.string "plus tibi docere possum.$"

Ardor_Uni_PhilosophyClass_Text_TestBegin::
	.string "Quid?$"

Ardor_Uni_PhilosophyClass_Text_TeacherBattleLost::
	.string "Esse an non esse, quaestio est.$"
