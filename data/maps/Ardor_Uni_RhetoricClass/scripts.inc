Ardor_Uni_RhetoricClass_MapScripts::
	.byte 0


Ardor_Uni_RhetoricClass_EventScript_Teacher::
# 7 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	lock
# 8 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	faceplayer
# 9 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	checktrainerflag TRAINER_UNI_RHETORIC
	goto_if 1, Ardor_Uni_RhetoricClass_EventScript_Teacher_2
# 13 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	call Ardor_Uni_RhetoricClass_EventScript_DoRhetoric
Ardor_Uni_RhetoricClass_EventScript_Teacher_1:
# 15 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 16 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	waitmovement 0
# 17 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	release
	end

Ardor_Uni_RhetoricClass_EventScript_Teacher_2:
# 10 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	msgbox Ardor_Uni_RhetoricClass_Text_ClassFinished
# 11 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	closemessage
	goto Ardor_Uni_RhetoricClass_EventScript_Teacher_1


Ardor_Uni_RhetoricClass_EventScript_DoRhetoric::
# 23 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	msgbox Ardor_Uni_RhetoricClass_Text_Intro
# 24 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	closemessage
# 25 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	special DoRhetoric
# 26 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	waitstate
# 27 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	msgbox Ardor_Uni_RhetoricClass_Text_RepeatRhetoric
# 28 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	closemessage
# 29 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	msgbox Ardor_Uni_Text_TestIntro
# 30 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	waitmessage
# 31 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	trainerbattle_no_intro TRAINER_UNI_RHETORIC, Ardor_Uni_RhetoricClass_Text_TeacherBattleLost
# 32 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	call Ardor_Uni_TermState_IncrementVar
# 33 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	msgbox Ardor_Uni_RhetoricClass_Text_ClassFinished
# 34 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	closemessage
	return


Ardor_Uni_RhetoricClass_Text_ClassFinished::
# 39 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	.string "Congratulatio! Iam studuisti oratum.$"

Ardor_Uni_RhetoricClass_Text_Intro::
# 43 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	.string "Salve puer. Magister Stephanus sum.\n"
	.string "Necesse est tibi docere oratum.$"

Ardor_Uni_RhetoricClass_Text_RepeatRhetoric::
# 47 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	.string "{STR_VAR_1}! Bene dixisti\n"
	.string "{STR_VAR_1}. Veritas est,\l"
	.string "{STR_VAR_1}.$"

Ardor_Uni_RhetoricClass_Text_TeacherBattleLost::
# 51 "data//maps/Ardor_Uni_RhetoricClass/scripts.pory"
	.string "Verba mea me defecerunt.$"
