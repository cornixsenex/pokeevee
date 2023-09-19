Argo_MapScripts::
	.byte 0


Argo_EventScript_ExitWarp::
	lock
	warpsilent MAP_MARE_S5, 45, 43
	waitstate
	release
	end

