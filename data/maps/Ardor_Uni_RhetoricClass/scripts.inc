Ardor_Uni_RhetoricClass_MapScripts::
	.byte 0


Ardor_Uni_RhetoricClass_EventScript_Teacher::
	lock
	faceplayer
	checktrainerflag TRAINER_UNI_RHETORIC
	goto_if 1, Ardor_Uni_RhetoricClass_EventScript_Teacher_2
	call Ardor_Uni_RhetoricClass_EventScript_DoRhetoric
Ardor_Uni_RhetoricClass_EventScript_Teacher_1:
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	release
	end

Ardor_Uni_RhetoricClass_EventScript_Teacher_2:
	msgbox Ardor_Uni_RhetoricClass_Text_ClassFinished
	closemessage
	goto Ardor_Uni_RhetoricClass_EventScript_Teacher_1


Ardor_Uni_RhetoricClass_EventScript_DoRhetoric::
	msgbox Ardor_Uni_RhetoricClass_Text_Intro
	closemessage
	special DoRhetoric
	waitstate
	msgbox Ardor_Uni_RhetoricClass_Text_RepeatRhetoric
	closemessage
	msgbox Ardor_Uni_Text_TestIntro
	waitmessage
	trainerbattle_no_intro TRAINER_UNI_RHETORIC, Ardor_Uni_RhetoricClass_Text_TeacherBattleLost
	call Ardor_Uni_TermState_IncrementVar
	msgbox Ardor_Uni_RhetoricClass_Text_ClassFinished
	closemessage
	return


Ardor_Uni_RhetoricClass_Text_ClassFinished::
	.string "Congratulatio! Iam studuisti oratum.$"

Ardor_Uni_RhetoricClass_Text_Intro::
	.string "Salve puer. Magister Stephanus sum.\n"
	.string "Necesse est tibi docere oratum.$"

Ardor_Uni_RhetoricClass_Text_RepeatRhetoric::
	.string "{STR_VAR_1}! Bene dixisti\n"
	.string "{STR_VAR_1}. Veritas est,\l"
	.string "{STR_VAR_1}.$"

Ardor_Uni_RhetoricClass_Text_TeacherBattleLost::
	.string "Verba mea me defecerunt.$"
