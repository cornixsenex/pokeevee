
Common_Script_Unfaceplayer::
    applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
    waitmovement 0
	return

OverworldPokemon_Script_Jigglypuff::
    faceplayer
    playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_NORMAL
    waitmoncry
    applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end


OverworldPokemon_Script_Girafarig::
    faceplayer
    playmoncry SPECIES_GIRAFARIG, CRY_MODE_NORMAL
    waitmoncry
    applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
    waitmovement 0
    release
    end


