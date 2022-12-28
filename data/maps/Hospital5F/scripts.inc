Hospital5F_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Hospital5F_MapScripts_MAP_SCRIPT_ON_RESUME:
	call Hospital5F_OnResume
	return


Hospital5F_OnResume::
	call Hospital5F_EventScript_SetFloor5
	return


Hospital5F_EventScript_SetFloor5::
	setvar VAR_HOSPITAL_FLOOR, 5
	return


Hospital5F_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN, Hospital5F_Text_GlennPre, Hospital5F_Text_GlennLost
	msgbox Hospital5F_Text_GlennPost
	closemessage
	end


Hospital5F_Text_GlennPre::
	.string "What are you doing? Hey! I just mopped\n"
	.string "there!$"

Hospital5F_Text_GlennLost::
	.string "Just look at the gigantic mess you\n"
	.string "made.$"

Hospital5F_Text_GlennPost::
	.string "Working at the hospital's not so bad, I\n"
	.string "get dental insurance and sick days.$"
