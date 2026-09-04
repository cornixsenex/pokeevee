Vegas_PowerPlant2F_MapScripts::
	.byte 0


Vegas_PowerPlant2F_EventScript_RocketAdmin::
# 5 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	lock
# 6 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	faceplayer
# 7 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	msgbox Vegas_PowerPlant2F_Text_RocketAdminIntro
# 8 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	closemessage
# 9 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	msgbox Vegas_PowerPlant2F_Text_RocketAdminPost
# 10 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	closemessage
# 11 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	fadescreenswapbuffers 1
# 12 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	setflag FLAG_BADGE02_GET
# 13 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	removeobject 1
# 14 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	fadescreenswapbuffers 0
# 15 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	release
	end


Vegas_PowerPlant2F_Text_RocketAdminIntro::
# 19 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	.string "TEST1$"

Vegas_PowerPlant2F_Text_RocketAdminPost::
# 23 "data/maps/Vegas_PowerPlant2F/scripts.pory"
	.string "TEST3$"
