RocketTower_12F_MapScripts::
	.byte 0


RocketTower_12F_EventScript_CardKey::
	lock
	setflag FLAG_RECEIVED_CARD_KEY
	msgbox RocketTower_12F_Text_CardKey
	closemessage
	checkitemspace ITEM_CARD_KEY, 1
	compare VAR_RESULT, 1
	goto_if_eq RocketTower_12F_EventScript_CardKey_2
RocketTower_12F_EventScript_CardKey_1:
	release
	end

RocketTower_12F_EventScript_CardKey_2:
	removeobject 1
	giveitem ITEM_CARD_KEY
	goto RocketTower_12F_EventScript_CardKey_1


RocketTower_12F_Text_CardKey::
	.string "A card key with the red rocket logo$"
