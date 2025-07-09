MareS1_MapScripts::
# 11 "data/maps/MareS1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/MareS1/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS1_F
	return


MareS1_Script_Transition_Mortia::
# 18 "data/maps/MareS1/scripts.pory"
	setvar VAR_TEMP_5, 1
# 19 "data/maps/MareS1/scripts.pory"
	special TransitionMapMusic
# 20 "data/maps/MareS1/scripts.pory"
	special ShowMapNamePopup
	return


MareS1_Script_Transition_MareMortuorum::
# 24 "data/maps/MareS1/scripts.pory"
	setvar VAR_TEMP_5, 2
# 25 "data/maps/MareS1/scripts.pory"
	special TransitionMapMusic
# 26 "data/maps/MareS1/scripts.pory"
	special ShowMapNamePopup
	return


Script_Tombstone_Default::
# 33 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Default
# 34 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jesus::
# 39 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jesus
# 40 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Player::
# 45 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Player
# 46 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pyramus::
# 51 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pyramus
# 52 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Thisbe::
# 57 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Thisbe
# 58 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Buddha::
# 63 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Buddha
# 64 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mahometus::
# 69 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mahometus
# 70 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Einstein::
# 75 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Einstein
# 76 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gandhi::
# 81 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gandhi
# 82 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Napoleon::
# 87 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Napoleon
# 88 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Marx::
# 93 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Marx
# 94 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Caesar::
# 99 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Caesar
# 100 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Virgil::
# 105 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Virgil
# 106 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Shakespeare::
# 111 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Shakespeare
# 112 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MartinLuther::
# 117 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MartinLuther
# 118 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Newton::
# 123 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Newton
# 124 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Columbus::
# 129 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Columbus
# 130 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Augustus::
# 135 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Augustus
# 136 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Khan::
# 141 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Khan
# 142 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_WilliamNorman::
# 147 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_WilliamNorman
# 148 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cleopatra::
# 153 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cleopatra
# 154 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Richard1::
# 159 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Richard1
# 160 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lincoln::
# 165 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lincoln
# 166 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_AlexanderGreat::
# 171 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_AlexanderGreat
# 172 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_KarlusMagnus::
# 177 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_KarlusMagnus
# 178 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Socrates::
# 183 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Socrates
# 184 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Plato::
# 189 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Plato
# 190 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aristotle::
# 195 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aristotle
# 196 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Turing::
# 201 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Turing
# 202 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lovelace::
# 207 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lovelace
# 208 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JohnLinn::
# 213 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JohnLinn
# 214 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JamesStrait::
# 219 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JamesStrait
# 220 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jerry::
# 225 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jerry
# 226 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Phil::
# 231 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Phil
# 232 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ryan::
# 237 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ryan
# 238 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Maggie::
# 243 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Maggie
# 244 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ramiro::
# 249 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ramiro
# 250 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kira::
# 255 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kira
# 256 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bo::
# 261 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bo
# 262 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_SawyerHawkins::
# 267 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_SawyerHawkins
# 268 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MichaelDavis::
# 273 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MichaelDavis
# 274 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hunter::
# 279 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hunter
# 280 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Owsley::
# 285 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Owsley
# 286 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Brent::
# 291 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Brent
# 292 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pigpen::
# 297 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pigpen
# 298 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Keith::
# 303 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Keith
# 304 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_BillGraham::
# 309 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_BillGraham
# 310 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CowboyNeal::
# 315 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CowboyNeal
# 316 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Antony::
# 321 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Antony
# 322 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wright1::
# 327 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wright1
# 328 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wright2::
# 333 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wright2
# 334 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jefferson::
# 340 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jefferson
# 341 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Adams::
# 347 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Adams
# 348 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lennon::
# 353 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lennon
# 354 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Harrison::
# 359 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Harrison
# 360 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Washington::
# 365 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Washington
# 366 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hisler::
# 371 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hisler
# 372 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elizabeth::
# 377 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elizabeth
# 378 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Thucydides::
# 383 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Thucydides
# 384 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ford::
# 389 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ford
# 390 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rockefeller::
# 395 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rockefeller
# 396 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Morgan::
# 401 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Morgan
# 402 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mays::
# 407 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mays
# 408 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kubrick::
# 413 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kubrick
# 414 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Brando::
# 419 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Brando
# 420 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gutenburg::
# 425 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gutenburg
# 426 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Horace::
# 431 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Horace
# 432 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CatoElder::
# 437 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CatoElder
# 438 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dickens::
# 443 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dickens
# 444 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Darwin::
# 449 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Darwin
# 450 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pasteur::
# 455 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pasteur
# 456 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Fleming::
# 461 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Fleming
# 462 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tubman::
# 467 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tubman
# 468 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_VanGogh::
# 473 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_VanGogh
# 474 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Picasso::
# 479 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Picasso
# 480 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_ChienShiungWu::
# 485 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_ChienShiungWu
# 486 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Faraday::
# 491 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Faraday
# 492 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Maxwell::
# 497 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Maxwell
# 498 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Goethe::
# 503 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Goethe
# 504 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Voltaire::
# 509 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Voltaire
# 510 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Trotsky::
# 515 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Trotsky
# 516 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kafka::
# 521 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kafka
# 522 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tolstoy::
# 527 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tolstoy
# 528 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pope::
# 533 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pope
# 534 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_HunterThompson::
# 539 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_HunterThompson
# 540 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kesey::
# 545 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kesey
# 546 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MilesDavis::
# 551 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MilesDavis
# 552 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Coltrane::
# 557 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Coltrane
# 558 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dante::
# 563 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dante
# 564 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Chaucer::
# 569 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Chaucer
# 570 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tchaikovsky::
# 575 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tchaikovsky
# 576 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Montesquieu::
# 581 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Montesquieu
# 582 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rousseau::
# 587 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rousseau
# 588 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Paine::
# 593 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Paine
# 594 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elvis::
# 599 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elvis
# 600 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ovid::
# 605 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ovid
# 606 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tacitus::
# 611 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tacitus
# 612 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CatoMinor::
# 617 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CatoMinor
# 618 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bohr::
# 623 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bohr
# 624 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Descartes::
# 629 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Descartes
# 630 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aristophanes::
# 635 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aristophanes
# 636 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hemingway::
# 641 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hemingway
# 642 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ginsberg::
# 647 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ginsberg
# 648 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_VonNeumann::
# 653 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_VonNeumann
# 654 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Edison::
# 659 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Edison
# 660 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Vanderbilt::
# 665 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Vanderbilt
# 666 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Leonidas::
# 671 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Leonidas
# 672 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pompey::
# 677 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pompey
# 678 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pericles::
# 683 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pericles
# 684 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Antigonos::
# 689 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Antigonos
# 690 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Darius::
# 695 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Darius
# 696 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Spartacus::
# 701 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Otto
# 702 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Otto::
# 707 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Otto
# 708 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Justinian::
# 713 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Justinian
# 714 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pepin::
# 719 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pepin
# 720 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Timur::
# 725 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Timur
# 726 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Churchill::
# 731 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Churchill
# 732 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry6::
# 737 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry6
# 738 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hindenburg::
# 743 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hindenburg
# 744 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elizabeth2::
# 749 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elizabeth2
# 750 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cromwell::
# 755 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cromwell
# 756 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mao::
# 761 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mao
# 762 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Eisenhower::
# 767 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Eisenhower
# 768 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ashoka::
# 773 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ashoka
# 774 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_QinShiHuang::
# 779 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_QinShiHuang
# 780 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Che::
# 785 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Che
# 786 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cincinnatus::
# 791 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cincinnatus
# 792 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MarcusAurelius::
# 797 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MarcusAurelius
# 798 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Trajan::
# 803 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Trajan
# 804 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Urban2::
# 809 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Urban2
# 810 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry8::
# 815 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry8
# 816 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_GustavusAdolphus::
# 821 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_GustavusAdolphus
# 822 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Robespierre::
# 827 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Robespierre
# 828 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lenin::
# 833 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lenin
# 834 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mandela::
# 839 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mandela
# 840 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Catherine::
# 845 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Catherine
# 846 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bolivar::
# 851 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bolivar
# 852 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bismark::
# 857 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bismark
# 858 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Castro::
# 863 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Castro
# 864 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FrederickGreat::
# 869 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FrederickGreat
# 870 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Victoria::
# 875 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Victoria
# 876 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Louis16::
# 881 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Louis16
# 882 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Patton::
# 887 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Patton
# 888 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Louis14::
# 893 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Louis14
# 894 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Atilla::
# 899 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Atilla
# 900 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sulla::
# 905 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sulla
# 906 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Xerxes::
# 911 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Xerxes
# 912 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Nero::
# 917 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Nero
# 918 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_EdwardPrince::
# 923 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_EdwardPrince
# 924 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mussolini::
# 929 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mussolini
# 930 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gorbachev::
# 935 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gorbachev
# 936 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_SusanAnthony::
# 941 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_SusanAnthony
# 942 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry4::
# 947 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry4
# 948 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Franklin::
# 953 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Franklin
# 954 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tiberius::
# 959 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tiberius
# 960 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_DaVinci::
# 965 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_DaVinci
# 966 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pythagoras::
# 971 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pythagoras
# 972 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Feynman::
# 977 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Feynman
# 978 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sartre::
# 983 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sartre
# 984 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Nietzshe::
# 989 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Nietzshe
# 990 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Joyce::
# 995 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Joyce
# 996 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bradly::
# 1001 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bradly
# 1002 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Constantine::
# 1007 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Constantine
# 1008 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry2::
# 1013 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry2
# 1014 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry5::
# 1019 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry5
# 1020 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FrederickBarbarossa::
# 1025 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FrederickBarbaorossa
# 1026 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_AndrewJackson::
# 1031 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_AndrewJackson
# 1032 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FDR::
# 1037 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FDR
# 1038 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Reagan::
# 1043 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Reagan
# 1044 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hirohito::
# 1049 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hirohito
# 1050 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aquinas::
# 1055 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aquinas
# 1056 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tesla::
# 1061 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tesla
# 1062 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bach::
# 1067 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bach
# 1068 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hobbes::
# 1073 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hobbes
# 1074 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hendrix::
# 1079 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hendrix
# 1080 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tolkien::
# 1085 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tolkien
# 1086 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Berry::
# 1091 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Berry
# 1092 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Milton::
# 1097 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Milton
# 1098 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sophocles::
# 1103 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sophocles
# 1104 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aeschylus::
# 1109 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aeschylus
# 1110 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_StPeter::
# 1115 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_StPeter
# 1116 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Engles::
# 1121 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Engles
# 1122 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Archimedes::
# 1127 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Archimedes
# 1128 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Watt::
# 1133 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Watt
# 1134 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Schrodinger::
# 1139 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Schrodinger
# 1140 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Fitzgerald::
# 1145 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Fitzgerald
# 1146 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Woolfe::
# 1151 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Woolfe
# 1152 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dostoevsky::
# 1157 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dostoevsky
# 1158 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Janis::
# 1163 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Janis
# 1164 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Richard2::
# 1169 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Richard2
# 1170 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cyrus::
# 1175 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cyrus
# 1176 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Caligula::
# 1181 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Caligula
# 1182 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Isabella::
# 1187 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Isabella
# 1188 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Yeltsin::
# 1193 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Yeltsin
# 1194 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JackKilby::
# 1199 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JackKilby
# 1200 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mozart::
# 1205 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mozart
# 1206 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jobs::
# 1211 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jobs
# 1212 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cobain::
# 1217 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cobain
# 1218 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Michelangelo::
# 1223 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Michelangelo
# 1224 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Copernicus::
# 1229 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Copernicus
# 1230 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Galileo::
# 1235 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Galileo
# 1236 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cash::
# 1241 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cash
# 1242 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Freud::
# 1247 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Freud
# 1248 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kant::
# 1253 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kant
# 1254 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Diogenes::
# 1259 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Diogenes
# 1260 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cervantes::
# 1265 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cervantes
# 1266 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kerouac::
# 1271 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kerouac
# 1272 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tupac::
# 1277 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tupac
# 1278 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Osama::
# 1283 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Osama
# 1284 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JFK::
# 1289 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JFK
# 1290 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Twain::
# 1295 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Twain
# 1296 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hitchcock::
# 1301 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hitchcock
# 1302 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JimMorrison::
# 1307 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JimMorrison
# 1308 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MJ::
# 1313 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MJ
# 1314 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Teddy::
# 1319 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Teddy
# 1320 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MLK::
# 1325 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MLK
# 1326 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sinatra::
# 1331 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sinatra
# 1332 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Oppenheimer::
# 1337 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Oppenheimer
# 1338 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jung::
# 1343 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jung
# 1344 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Khalo::
# 1349 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Khalo
# 1350 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Scipio::
# 1355 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Scipio
# 1356 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Stalin::
# 1361 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Stalin
# 1362 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rommel::
# 1367 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rommel
# 1368 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Euripides::
# 1373 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Euripides
# 1374 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hawking::
# 1379 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hawking
# 1380 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Suleiman::
# 1385 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Suleiman
# 1386 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Machiavelli::
# 1391 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Machiavelli
# 1392 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cicero::
# 1397 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cicero
# 1398 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MarieCurie::
# 1403 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MarieCurie
# 1404 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JaneAusten::
# 1409 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JaneAusten
# 1410 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hannibal::
# 1415 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hannibal
# 1416 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sullust::
# 1421 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sullust
# 1422 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Zinn::
# 1427 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Zinn
# 1428 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Disney::
# 1433 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Disney
# 1434 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Chaplin::
# 1439 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Chaplin
# 1440 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sagan::
# 1445 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sagan
# 1446 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dimaggio::
# 1451 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dimaggio
# 1452 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lee::
# 1457 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lee
# 1458 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Livy::
# 1463 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Livy
# 1464 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Epicurus::
# 1469 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Epicurus
# 1470 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Schopenhaur::
# 1475 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Schopenhaur
# 1476 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wells::
# 1481 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wells
# 1482 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Tombstone_Text_Default::
# 1487 "data/maps/MareS1/scripts.pory"
	.string "The inscription is too faded to read.$"

Tombstone_Text_Jesus::
# 1491 "data/maps/MareS1/scripts.pory"
	.string "IESVS NAZARENVS\n"
	.string "DCCLVIII - DCCXC$"

Tombstone_Text_Player::
# 1495 "data/maps/MareS1/scripts.pory"
	.string "{PLAYER}\n"
	.string "MMDCCL - MMDCCLXXVIII$"

Tombstone_Text_Pyramus::
# 1499 "data/maps/MareS1/scripts.pory"
	.string "PYRAMVS$"

Tombstone_Text_Thisbe::
# 1503 "data/maps/MareS1/scripts.pory"
	.string "THISBE$"

Tombstone_Text_Buddha::
# 1507 "data/maps/MareS1/scripts.pory"
	.string "SIDDHARTHA GVATAMA\n"
	.string "CCLXXIV - CCCLIII$"

Tombstone_Text_Mahometus::
# 1511 "data/maps/MareS1/scripts.pory"
	.string "MAHOMETVS MECCAE\n"
	.string "MCCCXXIV - MCCCLXXXV$"

Tombstone_Text_Einstein::
# 1515 "data/maps/MareS1/scripts.pory"
	.string "ALBERTVS EINSTEIN\n"
	.string "MMDCXXXII - MMDCCVIII$"

Tombstone_Text_Gandhi::
# 1519 "data/maps/MareS1/scripts.pory"
	.string "MOHANDAS GANDHI\n"
	.string "MMDCXXII - MMDCCI$"

Tombstone_Text_Napoleon::
# 1523 "data/maps/MareS1/scripts.pory"
	.string "NAPOLIO BONAPARS\n"
	.string "MMDXXII - MMDLXXIV$"

Tombstone_Text_Marx::
# 1527 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS MARXIVS\n"
	.string "MMDLXXI - MMDCXXXVI$"

Tombstone_Text_Caesar::
# 1531 "data/maps/MareS1/scripts.pory"
	.string "GAIVS IVLIVS CAESAR\n"
	.string "DCLIV - DCCX$"

Tombstone_Text_Virgil::
# 1535 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS VERGILIVS MARO\n"
	.string "DCLXXXIV - DCCXXXV$"

Tombstone_Text_Shakespeare::
# 1539 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS SHAKESPERIVS\n"
	.string "MMCCCXVII - MMCCCLXIX$"

Tombstone_Text_MartinLuther::
# 1543 "data/maps/MareS1/scripts.pory"
	.string "MARTINVS LVTHERVS\n"
	.string "MMCCXXXVI - MMCCXCIX$"

Tombstone_Text_Newton::
# 1547 "data/maps/MareS1/scripts.pory"
	.string "ISAACVS NEVTONVS\n"
	.string "MMCCCXCV - MMCDLXXX$"

Tombstone_Text_Columbus::
# 1551 "data/maps/MareS1/scripts.pory"
	.string "CHRISTOPHORVS COLVMBVS\n"
	.string "MMCCIV - MMCCLIX$"

Tombstone_Text_Augustus::
# 1555 "data/maps/MareS1/scripts.pory"
	.string "GAIVS OCTAVIVS\n"
	.string "DCXCI - DCCLXVII$"

Tombstone_Text_Khan::
# 1559 "data/maps/MareS1/scripts.pory"
	.string "BORIGIN TEMVGIN\n"
	.string "MCMXV - MCMLXXX$"

Tombstone_Text_WilliamNorman::
# 1563 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS NORMANNVS\n"
	.string "MDCCLXXXI - MDCCCXL$"

Tombstone_Text_Cleopatra::
# 1567 "data/maps/MareS1/scripts.pory"
	.string "CLEOPATRA VII PTOLEMAICI\n"
	.string "DCLXXXV - DCCXXIV$"

Tombstone_Text_Richard1::
# 1571 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS I PLANTAGENISTAE\n"
	.string "MCMX - MCMLII$"

Tombstone_Text_Lincoln::
# 1575 "data/maps/MareS1/scripts.pory"
	.string "ABRAHAMVS LINCOLN\n"
	.string "MMDLXII - MMDCXVIII$"

Tombstone_Text_AlexanderGreat::
# 1579 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER MACEDONIAE\n"
	.string "CCCXCVIII - CDXXXI$"

Tombstone_Text_KarlusMagnus::
# 1583 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS CAROLINGVS\n"
	.string "MCDXCIII - MDLXVII$"

Tombstone_Text_Socrates::
# 1587 "data/maps/MareS1/scripts.pory"
	.string "SOCRATES ATHENARVM\n"
	.string "CCLXXXV - CCCLV$"

Tombstone_Text_Plato::
# 1591 "data/maps/MareS1/scripts.pory"
	.string "PLATO ATHENARVM\n"
	.string "CCCXXIX - CDVI$"

Tombstone_Text_Aristotle::
# 1595 "data/maps/MareS1/scripts.pory"
	.string "ARISTOTELES STAGIRORVM\n"
	.string "CCCLXXXIV - CDXXXII$"

Tombstone_Text_Turing::
# 1599 "data/maps/MareS1/scripts.pory"
	.string "ALANVS TVRING\n"
	.string "MMDCLXV - MMDCCVII$"

Tombstone_Text_Lovelace::
# 1603 "data/maps/MareS1/scripts.pory"
	.string "ADA LOVELACE\n"
	.string "MMDLXVIII - MMDCV$"

Tombstone_Text_JohnLinn::
# 1607 "data/maps/MareS1/scripts.pory"
	.string "IOANNES LINN\n"
	.string "MMDCXCIV - MMDCCLXXVII$"

Tombstone_Text_JamesStrait::
# 1611 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS STRAIT\n"
	.string "MMDCLXXXVIII - MMDCCLXXVI$"

Tombstone_Text_Jerry::
# 1615 "data/maps/MareS1/scripts.pory"
	.string "HIERONYMVS GARCIA\n"
	.string "MMDCXCV - MMDCCXLVIII$"

Tombstone_Text_Phil::
# 1619 "data/maps/MareS1/scripts.pory"
	.string "PHILLIPPVS LESH\n"
	.string "MMDCXCIII - MMDCCLXXVII$"

Tombstone_Text_Ryan::
# 1623 "data/maps/MareS1/scripts.pory"
	.string "RYAN CORSA\n"
	.string "MMDCCXLIX$"

Tombstone_Text_Maggie::
# 1627 "data/maps/MareS1/scripts.pory"
	.string "MAGDALENA STRAIT\n"
	.string "MMDCCLII - MMDCCLXXVII$"

Tombstone_Text_Ramiro::
# 1631 "data/maps/MareS1/scripts.pory"
	.string "RAMIRVS MELECIO\n"
	.string "MMDCCIL - MMDCCLXIX$"

Tombstone_Text_Kira::
# 1635 "data/maps/MareS1/scripts.pory"
	.string "KIRA NORTON\n"
	.string "MMDCCIL - MMDCCLXXV$"

Tombstone_Text_Bo::
# 1639 "data/maps/MareS1/scripts.pory"
	.string "BO TRIANTOS\n"
	.string "MMDCCXLV - MMDCCLXXI$"

Tombstone_Text_SawyerHawkins::
# 1643 "data/maps/MareS1/scripts.pory"
	.string "SAVYER HAVKINS\n"
	.string "MMDCCLVI - MMDCCLXXII$"

Tombstone_Text_MichaelDavis::
# 1647 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL DAVIS\n"
	.string "MMDCCL - MMDCCLXXVI$"

Tombstone_Text_Hunter::
# 1651 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS HVNTER\n"
	.string "MMDCXCIV - MMDCCLXXII$"

Tombstone_Text_Owsley::
# 1655 "data/maps/MareS1/scripts.pory"
	.string "AVGVSTVS STANLEY III\n"
	.string "MMDCLXXXVIII - MMDCCLXIV$"

Tombstone_Text_Brent::
# 1659 "data/maps/MareS1/scripts.pory"
	.string "BRENT MYDLAND\n"
	.string "MMDCCV - MMDCCXLIII$"

Tombstone_Text_Pigpen::
# 1663 "data/maps/MareS1/scripts.pory"
	.string "RONALDVS MCKERNAN\n"
	.string "MMDCXCVIII - MMDCCXXVI$"

Tombstone_Text_Keith::
# 1667 "data/maps/MareS1/scripts.pory"
	.string "KEITH GODCHAVX\n"
	.string "MMDCCI - MMDCCXXXIII$"

Tombstone_Text_BillGraham::
# 1671 "data/maps/MareS1/scripts.pory"
	.string "VLF GRAIONCA\n"
	.string "MMDCLXXXIV - MMDCCXLIV$"

Tombstone_Text_CowboyNeal::
# 1675 "data/maps/MareS1/scripts.pory"
	.string "NEAL CASSADY\n"
	.string "MMDCLXXIX - MMDCCXXI$"

Tombstone_Text_Antony::
# 1679 "data/maps/MareS1/scripts.pory"
	.string "MARCVS ANTONIVS\n"
	.string "DCLXXI - DCCXXIV$"

Tombstone_Text_Wright1::
# 1683 "data/maps/MareS1/scripts.pory"
	.string "VILBVR VRIGHT\n"
	.string "MMDCXX - MMDCLXV$"

Tombstone_Text_Wright2::
# 1687 "data/maps/MareS1/scripts.pory"
	.string "AVRIVILLIVVS VRIGHT\n"
	.string "MMDCXXIV - MMDCCI$"

Tombstone_Text_Jefferson::
# 1691 "data/maps/MareS1/scripts.pory"
	.string "THOMAS IEFFERSONIVS\n"
	.string "MMCDXCVI - MMDLXXIX$"

Tombstone_Text_Adams::
# 1695 "data/maps/MareS1/scripts.pory"
	.string "IOANNES ADAMIVS\n"
	.string "MMCDLXXXVIII - MMDLXXIX$"

Tombstone_Text_Lennon::
# 1699 "data/maps/MareS1/scripts.pory"
	.string "IOANNES LENNON\n"
	.string "MMDCXCIII - MMDCCXXXIII$"

Tombstone_Text_Harrison::
# 1703 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS HARRISON\n"
	.string "MMDCXCVI - MMDCCLIV$"

Tombstone_Text_Washington::
# 1707 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS VASINGTONIVVS\n"
	.string "MMCDLXXXV - MMDLII$"

Tombstone_Text_Hisler::
# 1711 "data/maps/MareS1/scripts.pory"
	.string "ADOLPHVS HITLER\n"
	.string "MMDCXLII - MMDCXCVIII$"

Tombstone_Text_Elizabeth::
# 1715 "data/maps/MareS1/scripts.pory"
	.string "ELIZABETHA I TVDOR\n"
	.string "MMCCLXXXVI - MMCCCLVI$"

Tombstone_Text_Thucydides::
# 1719 "data/maps/MareS1/scripts.pory"
	.string "THVCYDIDES ATHENARVM\n"
	.string "CCXCIV - CCCLIV$"

Tombstone_Text_Ford::
# 1723 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS FORD\n"
	.string "MMDCXVI - MMDCC$"

Tombstone_Text_Rockefeller::
# 1727 "data/maps/MareS1/scripts.pory"
	.string "IOANNES ROCKEFELLER\n"
	.string "MMDXCII - MMDCXC$"

Tombstone_Text_Morgan::
# 1731 "data/maps/MareS1/scripts.pory"
	.string "IOANNES MORGAN\n"
	.string "MMDXC - MMDCLXVI$"

Tombstone_Text_Mays::
# 1735 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS MAYS\n"
	.string "MMDCLXXXIV - MMDCCLXXVII$"

Tombstone_Text_Kubrick::
# 1739 "data/maps/MareS1/scripts.pory"
	.string "STANLEY KVBRICK\n"
	.string "MMDCLXXXI - MMDCCLII$"

Tombstone_Text_Brando::
# 1743 "data/maps/MareS1/scripts.pory"
	.string "MARLON BRANDO\n"
	.string "MMDCLXXVII - MMDCCLVII$"

Tombstone_Text_Gutenburg::
# 1747 "data/maps/MareS1/scripts.pory"
	.string "IOANNES GVTENBERGVS\n"
	.string "MMCLIII - MMCCXXI$"

Tombstone_Text_Horace::
# 1751 "data/maps/MareS1/scripts.pory"
	.string "QVINTVS HORATIVS FLACCVS\n"
	.string "DCLXXXIX - DCCXLVI$"

Tombstone_Text_CatoElder::
# 1755 "data/maps/MareS1/scripts.pory"
	.string "MARCVS PORCIVS CATO\n"
	.string "DXX - DCV$"

Tombstone_Text_Dickens::
# 1759 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS DICKENS\n"
	.string "MMDLXV - MMDCXXIII$"

Tombstone_Text_Darwin::
# 1763 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS DARWINIVS\n"
	.string "MMDLXII - MMDCXXXV$"

Tombstone_Text_Pasteur::
# 1767 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS PASTEVR\n"
	.string "MMDLXXV - MMDCXLVIII$"

Tombstone_Text_Fleming::
# 1771 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER FLEMING\n"
	.string "MMDCXXXIV - MMDCCVIII$"

Tombstone_Text_Tubman::
# 1775 "data/maps/MareS1/scripts.pory"
	.string "ARAMINTA ROSS\n"
	.string "MMDLXXV - MMDCLXVI$"

Tombstone_Text_VanGogh::
# 1779 "data/maps/MareS1/scripts.pory"
	.string "VINCENTIVS VAN GOGH\n"
	.string "MMDCVI - MMDCXLIII$"

Tombstone_Text_Picasso::
# 1783 "data/maps/MareS1/scripts.pory"
	.string "PAVLVS PICASSO\n"
	.string "MMDCXXXIV - MMDCCXXVI$"

Tombstone_Text_ChienShiungWu::
# 1787 "data/maps/MareS1/scripts.pory"
	.string "CHIEN SHIVNG VV\n"
	.string "MMCLXV - MMDCCL$"

Tombstone_Text_Faraday::
# 1791 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL FARADAY\n"
	.string "MMDCXXXIV - MMDCCXXVI$"

Tombstone_Text_Maxwell::
# 1795 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS MAXVELL\n"
	.string "MMDLXXXIV - MMDCXXXII$"

Tombstone_Text_Goethe::
# 1799 "data/maps/MareS1/scripts.pory"
	.string "iIOANNES GOETHIVS\n"
	.string "MMDII - MMDLXXXV$"

Tombstone_Text_Voltaire::
# 1803 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS AROVET\n"
	.string "MMCDXLVII - MMDXXXI$"

Tombstone_Text_Trotsky::
# 1807 "data/maps/MareS1/scripts.pory"
	.string "LEO BRONSTEINVS\n"
	.string "MMDCXXXII - MMDCXCIII$"

Tombstone_Text_Kafka::
# 1811 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS KAFKA\n"
	.string "MMDCXXXVI - MMDCLXXVII$"

Tombstone_Text_Tolstoy::
# 1815 "data/maps/MareS1/scripts.pory"
	.string "LEO TOLSTOI\n"
	.string "MMDLXXXI - MMDCLXIII$"

Tombstone_Text_Pope::
# 1819 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER POPE\n"
	.string "MMCDXLI - MMCDXCVII$"

Tombstone_Text_HunterThompson::
# 1823 "data/maps/MareS1/scripts.pory"
	.string "HVNTER THOMPSON\n"
	.string "MMCXC - MMCCLVIII$"

Tombstone_Text_Kesey::
# 1827 "data/maps/MareS1/scripts.pory"
	.string "KENNETHVS KESEY\n"
	.string "MMDCLXXXVIII - MMDCCLIV$"

Tombstone_Text_MilesDavis::
# 1831 "data/maps/MareS1/scripts.pory"
	.string "MILES DAVIS\n"
	.string "MMCLXXIX - MMDCCXLIV$"

Tombstone_Text_Coltrane::
# 1835 "data/maps/MareS1/scripts.pory"
	.string "IOANNES COLTRANE\n"
	.string "MMCLXXIX - MMDCCXX$"

Tombstone_Text_Dante::
# 1839 "data/maps/MareS1/scripts.pory"
	.string "DANTES ALAGHERIVS\n"
	.string "MMXVIII - MMLXXIV$"

Tombstone_Text_Chaucer::
# 1843 "data/maps/MareS1/scripts.pory"
	.string "GALFRIDVS CHAVCER\n"
	.string "MMXCVI - MMCLIII$"

Tombstone_Text_Tchaikovsky::
# 1847 "data/maps/MareS1/scripts.pory"
	.string "PETRVS CAIKOVSKII\n"
	.string "MMDXCIII - MMDCXLVI$"

Tombstone_Text_Montesquieu::
# 1851 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS MONTESQVIVS\n"
	.string "MMCDXLII - MMDVIII$"

Tombstone_Text_Rousseau::
# 1855 "data/maps/MareS1/scripts.pory"
	.string "IOANNES RVSSAVIVS\n"
	.string "MMCDLXV - MMDXXXI$"

Tombstone_Text_Paine::
# 1859 "data/maps/MareS1/scripts.pory"
	.string "THOMAS PAINE\n"
	.string "MMCDXC - MMDLXII$"

Tombstone_Text_Elvis::
# 1863 "data/maps/MareS1/scripts.pory"
	.string "ELVIS PRESLEY\n"
	.string "MMDCLXXXVIII - MMDCCXXX$"

Tombstone_Text_Ovid::
# 1867 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS OVIDIVS NASO\n"
	.string "DCCXI - DCCLXX$"

Tombstone_Text_Tacitus::
# 1871 "data/maps/MareS1/scripts.pory"
	.string "CORNELIVS TACITVS\n"
	.string "DCCCIX - DCCCLXXIII$"

Tombstone_Text_CatoMinor::
# 1875 "data/maps/MareS1/scripts.pory"
	.string "MARCVS PORCIVS CATO VTICENSIS\n"
	.string "DCLIX - DCCVIII$"

Tombstone_Text_Bohr::
# 1879 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS BOHR\n"
	.string "MMDCXXXVIII - MMDCCXV$"

Tombstone_Text_Descartes::
# 1883 "data/maps/MareS1/scripts.pory"
	.string "RENATVS CARTESIVS\n"
	.string "MMCCCIL - MMCDIII$"

Tombstone_Text_Aristophanes::
# 1887 "data/maps/MareS1/scripts.pory"
	.string "ARISTOPHANES ATHENARVM\n"
	.string "CCCIX - CCCLXIX$"

Tombstone_Text_Hemingway::
# 1891 "data/maps/MareS1/scripts.pory"
	.string "ERNESTVS HEMINGWAY\n"
	.string "MMDCLII - MMDCCXIV$"

Tombstone_Text_Ginsberg::
# 1895 "data/maps/MareS1/scripts.pory"
	.string "IRVIN GINSBERG\n"
	.string "MMDCLXXIX - MMDCCL$"

Tombstone_Text_VonNeumann::
# 1899 "data/maps/MareS1/scripts.pory"
	.string "IOANNES VON NEVMANN\n"
	.string "MMDCLVI - MMDCCX$"

Tombstone_Text_Edison::
# 1903 "data/maps/MareS1/scripts.pory"
	.string "THOMAS EDISON\n"
	.string "MMDC - MMDCLXXXIV$"

Tombstone_Text_Vanderbilt::
# 1907 "data/maps/MareS1/scripts.pory"
	.string "CORNELIVS VANDERBILT\n"
	.string "MMDXLVII - MMDCCXV$"

Tombstone_Text_Leonidas::
# 1911 "data/maps/MareS1/scripts.pory"
	.string "LEONIDAS AGIADES\n"
	.string "CCXIV - CCLXXIV$"

Tombstone_Text_Pompey::
# 1915 "data/maps/MareS1/scripts.pory"
	.string "GNAEVS POMPEIVS\n"
	.string "DCXLVIII - DCCVI$"

Tombstone_Text_Pericles::
# 1919 "data/maps/MareS1/scripts.pory"
	.string "PERICLES ATHENARVM\n"
	.string "CCLIX - CCCXXV$"

Tombstone_Text_Antigonos::
# 1923 "data/maps/MareS1/scripts.pory"
	.string "ANTIGONVS MONOPHTHALMVS\n"
	.string "CCCLXXII - CDLIII$"

Tombstone_Text_Darius::
# 1927 "data/maps/MareS1/scripts.pory"
	.string "DARIVS ACHAEMENIDAE\n"
	.string "CCV - CCLXVIII$"

Tombstone_Text_Spartacus::
# 1931 "data/maps/MareS1/scripts.pory"
	.string "SPARTACVS THRACIAE\n"
	.string "DCLI - DCLXXXIII$"

Tombstone_Text_Otto::
# 1935 "data/maps/MareS1/scripts.pory"
	.string "OTTO LIVDOLFICVS\n"
	.string "MDCLXV - MDCCXXVI$"

Tombstone_Text_Justinian::
# 1939 "data/maps/MareS1/scripts.pory"
	.string "FLAVIVS PETRVS SABBATIVS IVSTINIANVS\n"
	.string "MCCXXXV - MCCCXVIII$"

Tombstone_Text_Pepin::
# 1943 "data/maps/MareS1/scripts.pory"
	.string "PIPINVS CAROLINGVS\n"
	.string "MCDLXVII - MDXXI$"

Tombstone_Text_Timur::
# 1947 "data/maps/MareS1/scripts.pory"
	.string "TAMERLANES TIMVRIDARVM\n"
	.string "MMLXXXIX- MMCLVIII$"

Tombstone_Text_Churchill::
# 1951 "data/maps/MareS1/scripts.pory"
	.string "WINSTON CHVRCHILLVS\n"
	.string "MMDCXXVII - MMDCCXVIII$"

Tombstone_Text_Henry6::
# 1955 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS VI LANCASTRIA\n"
	.string "MMCLXXIV - MMCCXXIV$"

Tombstone_Text_Hindenburg::
# 1959 "data/maps/MareS1/scripts.pory"
	.string "PAVLVS HINDENBVRG\n"
	.string "MMDC - MMDCLXXXVII$"

Tombstone_Text_Elizabeth2::
# 1963 "data/maps/MareS1/scripts.pory"
	.string "ELIZABETHA II WINDSORANI\n"
	.string "MMDCLXXIX - MMDCCLXXV$"

Tombstone_Text_Cromwell::
# 1967 "data/maps/MareS1/scripts.pory"
	.string "OLIVERIVS CROMVELLVS\n"
	.string "MMCCCLII - MMCDXI$"

Tombstone_Text_Mao::
# 1971 "data/maps/MareS1/scripts.pory"
	.string "MAO TSE TVNG\n"
	.string "MMDCXLVI - MMDCCXXIX$"

Tombstone_Text_Eisenhower::
# 1975 "data/maps/MareS1/scripts.pory"
	.string "DVIGHT EISENHOVER\n"
	.string "MMDCXLIII - MMDCCXXII$"

Tombstone_Text_Ashoka::
# 1979 "data/maps/MareS1/scripts.pory"
	.string "PIODASSES MAVRYA\n"
	.string "CDL - DXXII$"

Tombstone_Text_QinShiHuang::
# 1983 "data/maps/MareS1/scripts.pory"
	.string "CHINGVS CHI\n"
	.string "CDXCV - DXLIV$"

Tombstone_Text_Che::
# 1987 "data/maps/MareS1/scripts.pory"
	.string "ERNESTVS GVEVARA\n"
	.string "MMDCLXXXI - MMDCCXX$"

Tombstone_Text_Cincinnatus::
# 1991 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS QVINCTIVS CINCINNATVS\n"
	.string "CCXXXV - CCCXXIV$"

Tombstone_Text_MarcusAurelius::
# 1995 "data/maps/MareS1/scripts.pory"
	.string "MARCVS CATILIVS SEVERVS ANNIVS VERVS\n"
	.string "DCCCLXXIV - CMXXXIII$"

Tombstone_Text_Trajan::
# 1999 "data/maps/MareS1/scripts.pory"
	.string "MARCVS VLPIVS TRAIANVS\n"
	.string "DCCCVI - DCCCLXX$"

Tombstone_Text_Urban2::
# 2003 "data/maps/MareS1/scripts.pory"
	.string "OTTO CAMPANIAE\n"
	.string "MDCCLXXXVIII - MDCCCLII$"

Tombstone_Text_Henry8::
# 2007 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS VIII TVDOR\n"
	.string "MMCCXLIV - MMCCC$"

Tombstone_Text_GustavusAdolphus::
# 2011 "data/maps/MareS1/scripts.pory"
	.string "GVSTAVS II ADOLPHVS\n"
	.string "MMCCCXLVII - MMCCCLXXXV$"

Tombstone_Text_Robespierre::
# 2015 "data/maps/MareS1/scripts.pory"
	.string "MAXIMILIANVS ROBESPIERRE\n"
	.string "MMDXI - MMDXLVII$"

Tombstone_Text_Lenin::
# 2019 "data/maps/MareS1/scripts.pory"
	.string "VLADIMIRVS LENIN\n"
	.string "MMDCXXIII - MMDCLXXVII$"

Tombstone_Text_Mandela::
# 2023 "data/maps/MareS1/scripts.pory"
	.string "NELSON MANDELA\n"
	.string "MMDCLXXI - MMDCCLXVI$"

Tombstone_Text_Catherine::
# 2027 "data/maps/MareS1/scripts.pory"
	.string "CATHARINA II ALEXII\n"
	.string "MMCDLXXXII - MMDXLIX$"

Tombstone_Text_Bolivar::
# 2031 "data/maps/MareS1/scripts.pory"
	.string "SIMON BOLIVARVS\n"
	.string "MMDXXXVI - MMDLXXXIII$"

Tombstone_Text_Bismark::
# 2035 "data/maps/MareS1/scripts.pory"
	.string "OTHO BISMARK\n"
	.string "MMDLXVIII - MMDCLI$"

Tombstone_Text_Castro::
# 2039 "data/maps/MareS1/scripts.pory"
	.string "FIDELIS CASTRO\n"
	.string "MMDCLXXIX - MMDCCLXIX$"

Tombstone_Text_FrederickGreat::
# 2043 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS II BORVSSIAE\n"
	.string "MMCDLXV - MMDXXXIX$"

Tombstone_Text_Victoria::
# 2047 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDRINA VICTORIA\n"
	.string "MMDLXXII - MMDCLIV$"

Tombstone_Text_Louis16::
# 2051 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS XVI BORBONIENSIS\n"
	.string "MMDVII - MMDXLVI$"

Tombstone_Text_Patton::
# 2055 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS PATTON\n"
	.string "MMDCXXXVIII - MMDCXCVIII$"

Tombstone_Text_Louis14::
# 2059 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS XIV BORBONIENSIS\n"
	.string "MMCCCXCI - MMCDLXVIII$"

Tombstone_Text_Atilla::
# 2063 "data/maps/MareS1/scripts.pory"
	.string "ATILLA HVNNORVM\n"
	.string "MCLIX - MCCVI$"

Tombstone_Text_Sulla::
# 2067 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS CORNELIVS SVLLA\n"
	.string "DCXVI - DCLXXVI$"

Tombstone_Text_Xerxes::
# 2071 "data/maps/MareS1/scripts.pory"
	.string "XERXES ACHAEMENIDAE\n"
	.string "CCXXXV - CCLXXXIX$"

Tombstone_Text_Nero::
# 2075 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS DOMITIVS AHENOBARBVS\n"
	.string "DCCXC - DCCCXXI$"

Tombstone_Text_EdwardPrince::
# 2079 "data/maps/MareS1/scripts.pory"
	.string "EDVARDVS WOODSTOCK ANIOV\n"
	.string "MMLXXXIII - MMCXXIX$"

Tombstone_Text_Mussolini::
# 2083 "data/maps/MareS1/scripts.pory"
	.string "BENITVS MVSSOLINI\n"
	.string "MMDCXXXVI- MMDCXCVI$"

Tombstone_Text_Gorbachev::
# 2087 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL GORBACEV\n"
	.string "MMDCLXXXIV - MMDCCLXXV$"

Tombstone_Text_SusanAnthony::
# 2091 "data/maps/MareS1/scripts.pory"
	.string "SVSANA ANTONIA\n"
	.string "MMDLXXIII - MMDCLIX$"

Tombstone_Text_Henry4::
# 2095 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS IV LANCASTRIA\n"
	.string "MMCXX- MMCLXVI$"

Tombstone_Text_Franklin::
# 2099 "data/maps/MareS1/scripts.pory"
	.string "BENIAMINVS FRANKLINIVS\n"
	.string "MMCDLIX - MMDXLIII$"

Tombstone_Text_Tiberius::
# 2103 "data/maps/MareS1/scripts.pory"
	.string "TIBERIVS CLAVDIVS NERO\n"
	.string "DCCXII - DCCXC$"

Tombstone_Text_DaVinci::
# 2107 "data/maps/MareS1/scripts.pory"
	.string "LEONARDVS VINCIVS\n"
	.string "MMCCV - MMCCLXXII$"

Tombstone_Text_Pythagoras::
# 2111 "data/maps/MareS1/scripts.pory"
	.string "PYTHAGORAS SAMI\n"
	.string "CLXXXIV - CCLIX$"

Tombstone_Text_Feynman::
# 2115 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS FEYNMAN\n"
	.string "MMDCLXXI - MMDCCXLI$"

Tombstone_Text_Sartre::
# 2119 "data/maps/MareS1/scripts.pory"
	.string "IOANNES SARTRE\n"
	.string "MMDCLVIII - MMDCCXXXIII$"

Tombstone_Text_Nietzshe::
# 2123 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS NIETZSCHE\n"
	.string "MMDXCVII - MMDCLIII$"

Tombstone_Text_Joyce::
# 2127 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS IOYCE\n"
	.string "MMDCXXXV - MMDCXCIV$"

Tombstone_Text_Bradly::
# 2131 "data/maps/MareS1/scripts.pory"
	.string "BRADLY NOVELL\n"
	.string "MMDCCXXI - MMDCCXLIX$"

Tombstone_Text_Constantine::
# 2135 "data/maps/MareS1/scripts.pory"
	.string "FLAVIVS VALERIVS CONSTANTINVS\n"
	.string "MXXV - MXC$"

Tombstone_Text_Henry2::
# 2139 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS II PLANTAGENISTAE\n"
	.string "MDCCCLXXXVI - MCMXLII$"

Tombstone_Text_Henry5::
# 2143 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS V LANCASTRIA\n"
	.string "MMCXXXIX - MMCLXXV$"

Tombstone_Text_FrederickBarbaorossa::
# 2147 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS I HOHENSTAVFEN\n"
	.string "MDCCCLXXV - MCMXLIII$"

Tombstone_Text_AndrewJackson::
# 2151 "data/maps/MareS1/scripts.pory"
	.string "ANDREAS IACKSON\n"
	.string "MMDXX - MMDXCVIII$"

Tombstone_Text_FDR::
# 2155 "data/maps/MareS1/scripts.pory"
	.string "FRANKLINVS ROOSEVELT\n"
	.string "MMDCXXXV - MMDCXCVIII$"

Tombstone_Text_Reagan::
# 2159 "data/maps/MareS1/scripts.pory"
	.string "RONALDVS REAGAN\n"
	.string "MMDCLXIV - MMDCCLVII$"

Tombstone_Text_Hirohito::
# 2163 "data/maps/MareS1/scripts.pory"
	.string "SHOVA HIROHITO\n"
	.string "MMDCLIV - MMDCCXLII$"

Tombstone_Text_Aquinas::
# 2167 "data/maps/MareS1/scripts.pory"
	.string "THOMAS AQUVINAS\n"
	.string "MCMLXXVIII - MMXXVII$"

Tombstone_Text_Tesla::
# 2171 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS TESLA\n"
	.string "MMDCIX - MMDCXCVI$"

Tombstone_Text_Bach::
# 2175 "data/maps/MareS1/scripts.pory"
	.string "IOANNES BACHIVS\n"
	.string "MMCDXXXVIII - MMDIII$"

Tombstone_Text_Hobbes::
# 2179 "data/maps/MareS1/scripts.pory"
	.string "THOMAS HOBBIVS\n"
	.string "MMCCCXLI - MMCDXXXII$"

Tombstone_Text_Hendrix::
# 2183 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS HENDRIX\n"
	.string "MMDCXLV - MMDCCXXIII$"

Tombstone_Text_Tolkien::
# 2187 "data/maps/MareS1/scripts.pory"
	.string "IOANNES TOLKIEN\n"
	.string "MMDCXLV - MMDCCXXVI$"

Tombstone_Text_Berry::
# 2191 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS BERRY\n"
	.string "MMDCLXXIX - MMDCCLXX$"

Tombstone_Text_Milton::
# 2195 "data/maps/MareS1/scripts.pory"
	.string "IOANNES MILTONVS\n"
	.string "MMCCCLXI - MMCDXXVII$"

Tombstone_Text_Sophocles::
# 2199 "data/maps/MareS1/scripts.pory"
	.string "SOPHOCLES COLONI\n"
	.string "CCLVII - CCCXLVIII$"

Tombstone_Text_Aeschylus::
# 2203 "data/maps/MareS1/scripts.pory"
	.string "AESCHYLVS ATHENARVM\n"
	.string "CCXXIX - CCXCVIII$"

Tombstone_Text_StPeter::
# 2207 "data/maps/MareS1/scripts.pory"
	.string "SIMON IONA\n"
	.string "DCCLIII - DCCCXVIII$"

Tombstone_Text_Engles::
# 2211 "data/maps/MareS1/scripts.pory"
	.string "FREDERICVS ENGELS\n"
	.string "MMDLXXIII - MMDCXLVIII$"

Tombstone_Text_Archimedes::
# 2215 "data/maps/MareS1/scripts.pory"
	.string "ARCHIMEDES SYRACVSANVS\n"
	.string "CDLXVII - DXLII$"

Tombstone_Text_Watt::
# 2219 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS WATT\n"
	.string "MMCDLXXXIX - MMDLXXII$"

Tombstone_Text_Schrodinger::
# 2223 "data/maps/MareS1/scripts.pory"
	.string "ERVINVS SCHRODINGER\n"
	.string "MMDCXL - MMDCCXIV$"

Tombstone_Text_Fitzgerald::
# 2227 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS FITZGERALD\n"
	.string "MMDCXLIX - MMDCXCIII$"

Tombstone_Text_Woolfe::
# 2231 "data/maps/MareS1/scripts.pory"
	.string "VIRGINIA WOOLF\n"
	.string "MMDCXXXV - MMDCXCIV$"

Tombstone_Text_Dostoevsky::
# 2235 "data/maps/MareS1/scripts.pory"
	.string "THEODORVS DOSTOEVSKII\n"
	.string "MMDLXXIV - MMDCXXXIV$"

Tombstone_Text_Janis::
# 2239 "data/maps/MareS1/scripts.pory"
	.string "IOANNA IOPLIN\n"
	.string "MMDCXCVI - MMDCCXXIII$"

Tombstone_Text_Richard2::
# 2243 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS II PLANTAGENISTAE\n"
	.string "MMCXX - MMCLIII$"

Tombstone_Text_Cyrus::
# 2247 "data/maps/MareS1/scripts.pory"
	.string "CYRVS II ACHAEMENIDAE\n"
	.string "CLIV - CCXXIV$"

Tombstone_Text_Caligula::
# 2251 "data/maps/MareS1/scripts.pory"
	.string "GAIVS CAESAR GERMANICVS\n"
	.string "DCCLXV - DCCXCIV$"

Tombstone_Text_Isabella::
# 2255 "data/maps/MareS1/scripts.pory"
	.string "ISABELLA TRASTAMARAE\n"
	.string "MMCCIV - MMCCLVII$"

Tombstone_Text_Yeltsin::
# 2259 "data/maps/MareS1/scripts.pory"
	.string "BORIS IELTSIN\n"
	.string "MMDCLXXXIV - MMDCCLX$"

Tombstone_Text_JackKilby::
# 2263 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS KILBY\n"
	.string "MMDCLXXVI - MMDCCLVIII$"

Tombstone_Text_Mozart::
# 2267 "data/maps/MareS1/scripts.pory"
	.string "VLFGANGVS MOZART\n"
	.string "MMDIX - MMDXLIV$"

Tombstone_Text_Jobs::
# 2271 "data/maps/MareS1/scripts.pory"
	.string "STEPHANVS JOBS\n"
	.string "MMDCCIV - MMDCCLXIV$"

Tombstone_Text_Cobain::
# 2275 "data/maps/MareS1/scripts.pory"
	.string "KVRTIVS COBAIN\n"
	.string "MMDCCXX - MMDCCXLVII$"

Tombstone_Text_Michelangelo::
# 2279 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL BONAROTIVS\n"
	.string "MMCCXXVIII - MMCCCXVII$"

Tombstone_Text_Copernicus::
# 2283 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS COPERNICVS\n"
	.string "MMCCXXVI - MMCCXCVI$"

Tombstone_Text_Galileo::
# 2287 "data/maps/MareS1/scripts.pory"
	.string "GALILAEVS GALILAEI\n"
	.string "MMCCCXVII - MMCCCXCV$"

Tombstone_Text_Cash::
# 2291 "data/maps/MareS1/scripts.pory"
	.string "IOANNES CASH\n"
	.string "MMDCLXXXV - MMDCCLVI$"

Tombstone_Text_Freud::
# 2295 "data/maps/MareS1/scripts.pory"
	.string "SIGISMVNDVS FREVD\n"
	.string "MMDCIX - MMDCXCII$"

Tombstone_Text_Kant::
# 2299 "data/maps/MareS1/scripts.pory"
	.string "IMMANVEL KANTIVS\n"
	.string "MMCDLXXVII - MMDLVII$"

Tombstone_Text_Diogenes::
# 2303 "data/maps/MareS1/scripts.pory"
	.string "DIOGENES SINOPENSIS\n"
	.string "CCCLIV - CDXXXI$"

Tombstone_Text_Cervantes::
# 2307 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL CERVANTES\n"
	.string "MMCCC - MMCCCLXIX$"

Tombstone_Text_Kerouac::
# 2311 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS KEROVAC\n"
	.string "MMDCLXXV - MMDCCXII$"

Tombstone_Text_Tupac::
# 2315 "data/maps/MareS1/scripts.pory"
	.string "TVPAC SHAKVR\n"
	.string "MMDCCXXIV - MMDCCXLIX$"

Tombstone_Text_Osama::
# 2319 "data/maps/MareS1/scripts.pory"
	.string "VSAMA BIN LADIN\n"
	.string "MMDCCX - MMDCCLXIV$"

Tombstone_Text_JFK::
# 2323 "data/maps/MareS1/scripts.pory"
	.string "IOANNES KENNEDY\n"
	.string "MMDCLXX - MMDCCXVI$"

Tombstone_Text_Twain::
# 2327 "data/maps/MareS1/scripts.pory"
	.string "SAMVEL CLEMENS\n"
	.string "MMDLXXXVIII - MMDCLXIII$"

Tombstone_Text_Hitchcock::
# 2331 "data/maps/MareS1/scripts.pory"
	.string "ALFREDVS HITCHCOCK\n"
	.string "MMDCLII - MMDCCXXXIII$"

Tombstone_Text_JimMorrison::
# 2335 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS MORRISON\n"
	.string "MMDCXCVI - MMDCCXXIV$"

Tombstone_Text_MJ::
# 2339 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL IACKSON\n"
	.string "MMDCCXI - MMDCCLXII$"

Tombstone_Text_Teddy::
# 2343 "data/maps/MareS1/scripts.pory"
	.string "THEODORVS ROOSEVELT\n"
	.string "MMDCXI - MMDCLXXII$"

Tombstone_Text_MLK::
# 2347 "data/maps/MareS1/scripts.pory"
	.string "MARTINVS KING\n"
	.string "MMDCLXXXII - MMDCCXXI$"

Tombstone_Text_Sinatra::
# 2351 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS SINATRA\n"
	.string "MMDCLXVIII - MMDCCLI$"

Tombstone_Text_Oppenheimer::
# 2355 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS OPPENHEIMER\n"
	.string "MMDCLVII - MMDCCXX$"

Tombstone_Text_Jung::
# 2359 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS JVNG\n"
	.string "MMDCXXVIII - MMDCCXIV$"

Tombstone_Text_Khalo::
# 2363 "data/maps/MareS1/scripts.pory"
	.string "FRIDA KHALO\n"
	.string "MMDCLX - MMDCCVII$"

Tombstone_Text_Scipio::
# 2367 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS CORNELIVS SCIPIO\n"
	.string "DXVIII - DLXXI$"

Tombstone_Text_Stalin::
# 2371 "data/maps/MareS1/scripts.pory"
	.string "IOSEPHVS IVGASVILI\n"
	.string "MMDCXXXI - MMDCCVI$"

Tombstone_Text_Rommel::
# 2375 "data/maps/MareS1/scripts.pory"
	.string "IOHANNES ROMMEL\n"
	.string "MMDCXLIV - MMDCXCVII$"

Tombstone_Text_Euripides::
# 2379 "data/maps/MareS1/scripts.pory"
	.string "EVRIPIDES SALAMINIS\n"
	.string "MMDCLXX - MMDCCXVI$"

Tombstone_Text_Hawking::
# 2383 "data/maps/MareS1/scripts.pory"
	.string "STEPHANVS HAWKING\n"
	.string "MMDCXCV - MMDCCLXXI$"

Tombstone_Text_Suleiman::
# 2387 "data/maps/MareS1/scripts.pory"
	.string "SVLEIMANVS OTTOMANIDAE\n"
	.string "MMCCXLVII - MMCCCIX$"

Tombstone_Text_Machiavelli::
# 2391 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS MACIAVELLVS\n"
	.string "MMCCXXII - MMCCLXXX$"

Tombstone_Text_Cicero::
# 2395 "data/maps/MareS1/scripts.pory"
	.string "MARCVS TVLLIVS CICERO\n"
	.string "DCXCVIII - DCCXI$"

Tombstone_Text_MarieCurie::
# 2399 "data/maps/MareS1/scripts.pory"
	.string "MARIA CVRIE\n"
	.string "MMDCXX - MMDCLXXXVII$"

Tombstone_Text_JaneAusten::
# 2403 "data/maps/MareS1/scripts.pory"
	.string "IOANNA AVSTEN\n"
	.string "MMDXXVIII - MMDLXX$"

Tombstone_Text_Hannibal::
# 2407 "data/maps/MareS1/scripts.pory"
	.string "HANNIBAL BARCAS\n"
	.string "DVII - DLXXI$"

Tombstone_Text_Sullust::
# 2411 "data/maps/MareS1/scripts.pory"
	.string "GAIVS SALLVSTIVS CRISPVS\n"
	.string "DCLXVIII - DCCXIX$"

Tombstone_Text_Zinn::
# 2415 "data/maps/MareS1/scripts.pory"
	.string "HVARDVS ZINN\n"
	.string "MMDCLXXV - MMDCCLXIII$"

Tombstone_Text_Disney::
# 2419 "data/maps/MareS1/scripts.pory"
	.string "GVALTERVS DISNEY\n"
	.string "MMDXLIV - MMDCCXIX$"

Tombstone_Text_Chaplin::
# 2423 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS CHAPLIN\n"
	.string "MMDCXLII - MMDCCXXX$"

Tombstone_Text_Sagan::
# 2427 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS SAGAN\n"
	.string "MMDCLXXXVII - MMDCCXLIX$"

Tombstone_Text_Dimaggio::
# 2431 "data/maps/MareS1/scripts.pory"
	.string "IOSEPHVS DIMAGGIO\n"
	.string "MMDCLXVII - MMDCCLII$"

Tombstone_Text_Lee::
# 2435 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS LEE\n"
	.string "MMDLX - MMDCXXIII$"

Tombstone_Text_Livy::
# 2439 "data/maps/MareS1/scripts.pory"
	.string "TITVS LIVIVS\n"
	.string "DCXCV - DCCLXX$"

Tombstone_Text_Epicurus::
# 2443 "data/maps/MareS1/scripts.pory"
	.string "EPICVRVS SAMI\n"
	.string "CDXIII - CDLXXXIV$"

Tombstone_Text_Schopenhaur::
# 2447 "data/maps/MareS1/scripts.pory"
	.string "ARTHVRVS SCHOPENHAVER\n"
	.string "MMDXLI - MMDCXIII$"

Tombstone_Text_Wells::
# 2451 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS VELLES\n"
	.string "MMDCLXVIII - MMDCCXXXVIII$"
