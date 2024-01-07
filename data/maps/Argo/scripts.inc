Argo_MapScripts::
	.byte 0


Argo_EventScript_ExitWarp::
# 5 "data/maps/Argo/scripts.pory"
	lock
# 6 "data/maps/Argo/scripts.pory"
	warpsilent MAP_MARE_S5, 45, 43
# 7 "data/maps/Argo/scripts.pory"
	waitstate
# 8 "data/maps/Argo/scripts.pory"
	release
	end


Argo_EventScript_Jason::
# 14 "data/maps/Argo/scripts.pory"
	lock
# 15 "data/maps/Argo/scripts.pory"
	faceplayer
# 17 "data/maps/Argo/scripts.pory"
	release
	end

