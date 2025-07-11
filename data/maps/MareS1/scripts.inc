MareS1_MapScripts::
# 9 "data/maps/MareS1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MareS1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MareS1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/MareS1/scripts.pory"
	specialvar VAR_TEMP_5, GetDynamicMapSec_MareS1_F
	return


MareS1_Script_Transition_Mortia::
# 16 "data/maps/MareS1/scripts.pory"
	setvar VAR_TEMP_5, 1
# 17 "data/maps/MareS1/scripts.pory"
	special TransitionMapMusic
# 18 "data/maps/MareS1/scripts.pory"
	special ShowMapNamePopup
	return


MareS1_Script_Transition_MareMortuorum::
# 22 "data/maps/MareS1/scripts.pory"
	setvar VAR_TEMP_5, 2
# 23 "data/maps/MareS1/scripts.pory"
	special TransitionMapMusic
# 24 "data/maps/MareS1/scripts.pory"
	special ShowMapNamePopup
	return


Script_Tombstone_Default::
# 31 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Default
# 32 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jesus::
# 37 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jesus
# 38 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Player::
# 43 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Player
# 44 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pyramus::
# 49 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pyramus
# 50 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Thisbe::
# 55 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Thisbe
# 56 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Buddha::
# 61 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Buddha
# 62 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mahometus::
# 67 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mahometus
# 68 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Einstein::
# 73 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Einstein
# 74 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gandhi::
# 79 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gandhi
# 80 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Napoleon::
# 85 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Napoleon
# 86 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Marx::
# 91 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Marx
# 92 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Caesar::
# 97 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Caesar
# 98 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Virgil::
# 103 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Virgil
# 104 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Shakespeare::
# 109 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Shakespeare
# 110 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MartinLuther::
# 115 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MartinLuther
# 116 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Newton::
# 121 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Newton
# 122 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Columbus::
# 127 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Columbus
# 128 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Augustus::
# 133 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Augustus
# 134 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Khan::
# 139 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Khan
# 140 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_WilliamNorman::
# 145 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_WilliamNorman
# 146 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cleopatra::
# 151 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cleopatra
# 152 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Richard1::
# 157 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Richard1
# 158 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lincoln::
# 163 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lincoln
# 164 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_AlexanderGreat::
# 169 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_AlexanderGreat
# 170 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_KarlusMagnus::
# 175 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_KarlusMagnus
# 176 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Socrates::
# 181 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Socrates
# 182 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Plato::
# 187 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Plato
# 188 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aristotle::
# 193 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aristotle
# 194 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Turing::
# 199 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Turing
# 200 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lovelace::
# 205 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lovelace
# 206 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JohnLinn::
# 211 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JohnLinn
# 212 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JamesStrait::
# 217 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JamesStrait
# 218 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jerry::
# 223 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jerry
# 224 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Phil::
# 229 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Phil
# 230 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ryan::
# 235 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ryan
# 236 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Maggie::
# 241 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Maggie
# 242 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ramiro::
# 247 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ramiro
# 248 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kira::
# 253 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kira
# 254 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bo::
# 259 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bo
# 260 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_SawyerHawkins::
# 265 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_SawyerHawkins
# 266 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MichaelDavis::
# 271 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MichaelDavis
# 272 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hunter::
# 277 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hunter
# 278 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Owsley::
# 283 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Owsley
# 284 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Brent::
# 289 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Brent
# 290 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pigpen::
# 295 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pigpen
# 296 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Keith::
# 301 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Keith
# 302 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_BillGraham::
# 307 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_BillGraham
# 308 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CowboyNeal::
# 313 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CowboyNeal
# 314 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Antony::
# 319 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Antony
# 320 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wright1::
# 325 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wright1
# 326 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wright2::
# 331 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wright2
# 332 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jefferson::
# 338 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jefferson
# 339 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Adams::
# 345 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Adams
# 346 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lennon::
# 351 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lennon
# 352 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Harrison::
# 357 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Harrison
# 358 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Washington::
# 363 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Washington
# 364 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hisler::
# 369 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hisler
# 370 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elizabeth::
# 375 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elizabeth
# 376 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Thucydides::
# 381 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Thucydides
# 382 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ford::
# 387 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ford
# 388 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rockefeller::
# 393 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rockefeller
# 394 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Morgan::
# 399 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Morgan
# 400 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mays::
# 405 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mays
# 406 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kubrick::
# 411 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kubrick
# 412 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Brando::
# 417 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Brando
# 418 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gutenburg::
# 423 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gutenburg
# 424 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Horace::
# 429 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Horace
# 430 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CatoElder::
# 435 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CatoElder
# 436 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dickens::
# 441 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dickens
# 442 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Darwin::
# 447 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Darwin
# 448 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pasteur::
# 453 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pasteur
# 454 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Fleming::
# 459 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Fleming
# 460 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tubman::
# 465 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tubman
# 466 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_VanGogh::
# 471 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_VanGogh
# 472 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Picasso::
# 477 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Picasso
# 478 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_ChienShiungWu::
# 483 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_ChienShiungWu
# 484 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Faraday::
# 489 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Faraday
# 490 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Maxwell::
# 495 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Maxwell
# 496 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Goethe::
# 501 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Goethe
# 502 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Voltaire::
# 507 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Voltaire
# 508 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Trotsky::
# 513 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Trotsky
# 514 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kafka::
# 519 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kafka
# 520 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tolstoy::
# 525 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tolstoy
# 526 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pope::
# 531 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pope
# 532 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_HunterThompson::
# 537 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_HunterThompson
# 538 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kesey::
# 543 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kesey
# 544 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MilesDavis::
# 549 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MilesDavis
# 550 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Coltrane::
# 555 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Coltrane
# 556 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dante::
# 561 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dante
# 562 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Chaucer::
# 567 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Chaucer
# 568 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tchaikovsky::
# 573 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tchaikovsky
# 574 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Montesquieu::
# 579 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Montesquieu
# 580 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rousseau::
# 585 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rousseau
# 586 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Paine::
# 591 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Paine
# 592 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elvis::
# 597 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elvis
# 598 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ovid::
# 603 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ovid
# 604 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tacitus::
# 609 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tacitus
# 610 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_CatoMinor::
# 615 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_CatoMinor
# 616 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bohr::
# 621 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bohr
# 622 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Descartes::
# 627 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Descartes
# 628 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aristophanes::
# 633 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aristophanes
# 634 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hemingway::
# 639 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hemingway
# 640 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ginsberg::
# 645 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ginsberg
# 646 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_VonNeumann::
# 651 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_VonNeumann
# 652 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Edison::
# 657 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Edison
# 658 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Vanderbilt::
# 663 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Vanderbilt
# 664 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Leonidas::
# 669 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Leonidas
# 670 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pompey::
# 675 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pompey
# 676 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pericles::
# 681 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pericles
# 682 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Antigonos::
# 687 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Antigonos
# 688 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Darius::
# 693 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Darius
# 694 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Spartacus::
# 699 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Otto
# 700 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Otto::
# 705 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Otto
# 706 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Justinian::
# 711 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Justinian
# 712 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pepin::
# 717 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pepin
# 718 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Timur::
# 723 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Timur
# 724 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Churchill::
# 729 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Churchill
# 730 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry6::
# 735 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry6
# 736 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hindenburg::
# 741 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hindenburg
# 742 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Elizabeth2::
# 747 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Elizabeth2
# 748 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cromwell::
# 753 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cromwell
# 754 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mao::
# 759 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mao
# 760 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Eisenhower::
# 765 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Eisenhower
# 766 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Ashoka::
# 771 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Ashoka
# 772 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_QinShiHuang::
# 777 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_QinShiHuang
# 778 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Che::
# 783 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Che
# 784 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cincinnatus::
# 789 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cincinnatus
# 790 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MarcusAurelius::
# 795 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MarcusAurelius
# 796 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Trajan::
# 801 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Trajan
# 802 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Urban2::
# 807 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Urban2
# 808 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry8::
# 813 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry8
# 814 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_GustavusAdolphus::
# 819 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_GustavusAdolphus
# 820 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Robespierre::
# 825 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Robespierre
# 826 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lenin::
# 831 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lenin
# 832 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mandela::
# 837 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mandela
# 838 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Catherine::
# 843 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Catherine
# 844 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bolivar::
# 849 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bolivar
# 850 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bismark::
# 855 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bismark
# 856 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Castro::
# 861 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Castro
# 862 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FrederickGreat::
# 867 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FrederickGreat
# 868 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Victoria::
# 873 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Victoria
# 874 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Louis16::
# 879 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Louis16
# 880 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Patton::
# 885 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Patton
# 886 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Louis14::
# 891 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Louis14
# 892 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Atilla::
# 897 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Atilla
# 898 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sulla::
# 903 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sulla
# 904 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Xerxes::
# 909 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Xerxes
# 910 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Nero::
# 915 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Nero
# 916 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_EdwardPrince::
# 921 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_EdwardPrince
# 922 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mussolini::
# 927 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mussolini
# 928 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Gorbachev::
# 933 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Gorbachev
# 934 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_SusanAnthony::
# 939 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_SusanAnthony
# 940 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry4::
# 945 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry4
# 946 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Franklin::
# 951 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Franklin
# 952 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tiberius::
# 957 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tiberius
# 958 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_DaVinci::
# 963 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_DaVinci
# 964 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Pythagoras::
# 969 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Pythagoras
# 970 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Feynman::
# 975 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Feynman
# 976 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sartre::
# 981 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sartre
# 982 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Nietzshe::
# 987 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Nietzshe
# 988 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Joyce::
# 993 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Joyce
# 994 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bradly::
# 999 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bradly
# 1000 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Constantine::
# 1005 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Constantine
# 1006 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry2::
# 1011 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry2
# 1012 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Henry5::
# 1017 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Henry5
# 1018 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FrederickBarbarossa::
# 1023 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FrederickBarbaorossa
# 1024 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_AndrewJackson::
# 1029 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_AndrewJackson
# 1030 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_FDR::
# 1035 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_FDR
# 1036 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Reagan::
# 1041 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Reagan
# 1042 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hirohito::
# 1047 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hirohito
# 1048 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aquinas::
# 1053 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aquinas
# 1054 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tesla::
# 1059 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tesla
# 1060 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Bach::
# 1065 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Bach
# 1066 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hobbes::
# 1071 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hobbes
# 1072 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hendrix::
# 1077 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hendrix
# 1078 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tolkien::
# 1083 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tolkien
# 1084 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Berry::
# 1089 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Berry
# 1090 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Milton::
# 1095 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Milton
# 1096 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sophocles::
# 1101 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sophocles
# 1102 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Aeschylus::
# 1107 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Aeschylus
# 1108 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_StPeter::
# 1113 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_StPeter
# 1114 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Engles::
# 1119 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Engles
# 1120 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Archimedes::
# 1125 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Archimedes
# 1126 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Watt::
# 1131 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Watt
# 1132 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Schrodinger::
# 1137 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Schrodinger
# 1138 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Fitzgerald::
# 1143 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Fitzgerald
# 1144 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Woolfe::
# 1149 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Woolfe
# 1150 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dostoevsky::
# 1155 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dostoevsky
# 1156 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Janis::
# 1161 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Janis
# 1162 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Richard2::
# 1167 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Richard2
# 1168 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cyrus::
# 1173 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cyrus
# 1174 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Caligula::
# 1179 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Caligula
# 1180 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Isabella::
# 1185 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Isabella
# 1186 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Yeltsin::
# 1191 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Yeltsin
# 1192 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JackKilby::
# 1197 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JackKilby
# 1198 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Mozart::
# 1203 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Mozart
# 1204 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jobs::
# 1209 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jobs
# 1210 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cobain::
# 1215 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cobain
# 1216 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Michelangelo::
# 1221 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Michelangelo
# 1222 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Copernicus::
# 1227 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Copernicus
# 1228 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Galileo::
# 1233 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Galileo
# 1234 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cash::
# 1239 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cash
# 1240 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Freud::
# 1245 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Freud
# 1246 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kant::
# 1251 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kant
# 1252 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Diogenes::
# 1257 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Diogenes
# 1258 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cervantes::
# 1263 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cervantes
# 1264 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Kerouac::
# 1269 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Kerouac
# 1270 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Tupac::
# 1275 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Tupac
# 1276 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Osama::
# 1281 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Osama
# 1282 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JFK::
# 1287 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JFK
# 1288 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Twain::
# 1293 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Twain
# 1294 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hitchcock::
# 1299 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hitchcock
# 1300 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JimMorrison::
# 1305 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JimMorrison
# 1306 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MJ::
# 1311 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MJ
# 1312 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Teddy::
# 1317 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Teddy
# 1318 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MLK::
# 1323 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MLK
# 1324 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sinatra::
# 1329 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sinatra
# 1330 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Oppenheimer::
# 1335 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Oppenheimer
# 1336 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Jung::
# 1341 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Jung
# 1342 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Khalo::
# 1347 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Khalo
# 1348 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Scipio::
# 1353 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Scipio
# 1354 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Stalin::
# 1359 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Stalin
# 1360 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Rommel::
# 1365 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Rommel
# 1366 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Euripides::
# 1371 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Euripides
# 1372 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hawking::
# 1377 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hawking
# 1378 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Suleiman::
# 1383 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Suleiman
# 1384 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Machiavelli::
# 1389 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Machiavelli
# 1390 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Cicero::
# 1395 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Cicero
# 1396 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_MarieCurie::
# 1401 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_MarieCurie
# 1402 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_JaneAusten::
# 1407 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_JaneAusten
# 1408 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Hannibal::
# 1413 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Hannibal
# 1414 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sullust::
# 1419 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sullust
# 1420 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Zinn::
# 1425 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Zinn
# 1426 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Disney::
# 1431 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Disney
# 1432 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Chaplin::
# 1437 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Chaplin
# 1438 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Sagan::
# 1443 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Sagan
# 1444 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Dimaggio::
# 1449 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Dimaggio
# 1450 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Lee::
# 1455 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Lee
# 1456 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Livy::
# 1461 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Livy
# 1462 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Epicurus::
# 1467 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Epicurus
# 1468 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Schopenhaur::
# 1473 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Schopenhaur
# 1474 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Script_Tombstone_Wells::
# 1479 "data/maps/MareS1/scripts.pory"
	msgbox Tombstone_Text_Wells
# 1480 "data/maps/MareS1/scripts.pory"
	closemessage
	end


Tombstone_Text_Default::
# 1485 "data/maps/MareS1/scripts.pory"
	.string "The inscription is too faded to read.$"

Tombstone_Text_Jesus::
# 1489 "data/maps/MareS1/scripts.pory"
	.string "IESVS NAZARENVS\n"
	.string "DCCLVIII - DCCXC$"

Tombstone_Text_Player::
# 1493 "data/maps/MareS1/scripts.pory"
	.string "{PLAYER}\n"
	.string "MMDCCL - MMDCCLXXVIII$"

Tombstone_Text_Pyramus::
# 1497 "data/maps/MareS1/scripts.pory"
	.string "PYRAMVS$"

Tombstone_Text_Thisbe::
# 1501 "data/maps/MareS1/scripts.pory"
	.string "THISBE$"

Tombstone_Text_Buddha::
# 1505 "data/maps/MareS1/scripts.pory"
	.string "SIDDHARTHA GVATAMA\n"
	.string "CCLXXIV - CCCLIII$"

Tombstone_Text_Mahometus::
# 1509 "data/maps/MareS1/scripts.pory"
	.string "MAHOMETVS MECCAE\n"
	.string "MCCCXXIV - MCCCLXXXV$"

Tombstone_Text_Einstein::
# 1513 "data/maps/MareS1/scripts.pory"
	.string "ALBERTVS EINSTEIN\n"
	.string "MMDCXXXII - MMDCCVIII$"

Tombstone_Text_Gandhi::
# 1517 "data/maps/MareS1/scripts.pory"
	.string "MOHANDAS GANDHI\n"
	.string "MMDCXXII - MMDCCI$"

Tombstone_Text_Napoleon::
# 1521 "data/maps/MareS1/scripts.pory"
	.string "NAPOLIO BONAPARS\n"
	.string "MMDXXII - MMDLXXIV$"

Tombstone_Text_Marx::
# 1525 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS MARXIVS\n"
	.string "MMDLXXI - MMDCXXXVI$"

Tombstone_Text_Caesar::
# 1529 "data/maps/MareS1/scripts.pory"
	.string "GAIVS IVLIVS CAESAR\n"
	.string "DCLIV - DCCX$"

Tombstone_Text_Virgil::
# 1533 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS VERGILIVS MARO\n"
	.string "DCLXXXIV - DCCXXXV$"

Tombstone_Text_Shakespeare::
# 1537 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS SHAKESPERIVS\n"
	.string "MMCCCXVII - MMCCCLXIX$"

Tombstone_Text_MartinLuther::
# 1541 "data/maps/MareS1/scripts.pory"
	.string "MARTINVS LVTHERVS\n"
	.string "MMCCXXXVI - MMCCXCIX$"

Tombstone_Text_Newton::
# 1545 "data/maps/MareS1/scripts.pory"
	.string "ISAACVS NEVTONVS\n"
	.string "MMCCCXCV - MMCDLXXX$"

Tombstone_Text_Columbus::
# 1549 "data/maps/MareS1/scripts.pory"
	.string "CHRISTOPHORVS COLVMBVS\n"
	.string "MMCCIV - MMCCLIX$"

Tombstone_Text_Augustus::
# 1553 "data/maps/MareS1/scripts.pory"
	.string "GAIVS OCTAVIVS\n"
	.string "DCXCI - DCCLXVII$"

Tombstone_Text_Khan::
# 1557 "data/maps/MareS1/scripts.pory"
	.string "BORIGIN TEMVGIN\n"
	.string "MCMXV - MCMLXXX$"

Tombstone_Text_WilliamNorman::
# 1561 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS NORMANNVS\n"
	.string "MDCCLXXXI - MDCCCXL$"

Tombstone_Text_Cleopatra::
# 1565 "data/maps/MareS1/scripts.pory"
	.string "CLEOPATRA VII PTOLEMAICI\n"
	.string "DCLXXXV - DCCXXIV$"

Tombstone_Text_Richard1::
# 1569 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS I PLANTAGENISTAE\n"
	.string "MCMX - MCMLII$"

Tombstone_Text_Lincoln::
# 1573 "data/maps/MareS1/scripts.pory"
	.string "ABRAHAMVS LINCOLN\n"
	.string "MMDLXII - MMDCXVIII$"

Tombstone_Text_AlexanderGreat::
# 1577 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER MACEDONIAE\n"
	.string "CCCXCVIII - CDXXXI$"

Tombstone_Text_KarlusMagnus::
# 1581 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS CAROLINGVS\n"
	.string "MCDXCIII - MDLXVII$"

Tombstone_Text_Socrates::
# 1585 "data/maps/MareS1/scripts.pory"
	.string "SOCRATES ATHENARVM\n"
	.string "CCLXXXV - CCCLV$"

Tombstone_Text_Plato::
# 1589 "data/maps/MareS1/scripts.pory"
	.string "PLATO ATHENARVM\n"
	.string "CCCXXIX - CDVI$"

Tombstone_Text_Aristotle::
# 1593 "data/maps/MareS1/scripts.pory"
	.string "ARISTOTELES STAGIRORVM\n"
	.string "CCCLXXXIV - CDXXXII$"

Tombstone_Text_Turing::
# 1597 "data/maps/MareS1/scripts.pory"
	.string "ALANVS TVRING\n"
	.string "MMDCLXV - MMDCCVII$"

Tombstone_Text_Lovelace::
# 1601 "data/maps/MareS1/scripts.pory"
	.string "ADA LOVELACE\n"
	.string "MMDLXVIII - MMDCV$"

Tombstone_Text_JohnLinn::
# 1605 "data/maps/MareS1/scripts.pory"
	.string "IOANNES LINN\n"
	.string "MMDCXCIV - MMDCCLXXVII$"

Tombstone_Text_JamesStrait::
# 1609 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS STRAIT\n"
	.string "MMDCLXXXVIII - MMDCCLXXVI$"

Tombstone_Text_Jerry::
# 1613 "data/maps/MareS1/scripts.pory"
	.string "HIERONYMVS GARCIA\n"
	.string "MMDCXCV - MMDCCXLVIII$"

Tombstone_Text_Phil::
# 1617 "data/maps/MareS1/scripts.pory"
	.string "PHILLIPPVS LESH\n"
	.string "MMDCXCIII - MMDCCLXXVII$"

Tombstone_Text_Ryan::
# 1621 "data/maps/MareS1/scripts.pory"
	.string "RYAN CORSA\n"
	.string "MMDCCXLIX$"

Tombstone_Text_Maggie::
# 1625 "data/maps/MareS1/scripts.pory"
	.string "MAGDALENA STRAIT\n"
	.string "MMDCCLII - MMDCCLXXVII$"

Tombstone_Text_Ramiro::
# 1629 "data/maps/MareS1/scripts.pory"
	.string "RAMIRVS MELECIO\n"
	.string "MMDCCIL - MMDCCLXIX$"

Tombstone_Text_Kira::
# 1633 "data/maps/MareS1/scripts.pory"
	.string "KIRA NORTON\n"
	.string "MMDCCIL - MMDCCLXXV$"

Tombstone_Text_Bo::
# 1637 "data/maps/MareS1/scripts.pory"
	.string "BO TRIANTOS\n"
	.string "MMDCCXLV - MMDCCLXXI$"

Tombstone_Text_SawyerHawkins::
# 1641 "data/maps/MareS1/scripts.pory"
	.string "SAVYER HAVKINS\n"
	.string "MMDCCLVI - MMDCCLXXII$"

Tombstone_Text_MichaelDavis::
# 1645 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL DAVIS\n"
	.string "MMDCCL - MMDCCLXXVI$"

Tombstone_Text_Hunter::
# 1649 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS HVNTER\n"
	.string "MMDCXCIV - MMDCCLXXII$"

Tombstone_Text_Owsley::
# 1653 "data/maps/MareS1/scripts.pory"
	.string "AVGVSTVS STANLEY III\n"
	.string "MMDCLXXXVIII - MMDCCLXIV$"

Tombstone_Text_Brent::
# 1657 "data/maps/MareS1/scripts.pory"
	.string "BRENT MYDLAND\n"
	.string "MMDCCV - MMDCCXLIII$"

Tombstone_Text_Pigpen::
# 1661 "data/maps/MareS1/scripts.pory"
	.string "RONALDVS MCKERNAN\n"
	.string "MMDCXCVIII - MMDCCXXVI$"

Tombstone_Text_Keith::
# 1665 "data/maps/MareS1/scripts.pory"
	.string "KEITH GODCHAVX\n"
	.string "MMDCCI - MMDCCXXXIII$"

Tombstone_Text_BillGraham::
# 1669 "data/maps/MareS1/scripts.pory"
	.string "VLF GRAIONCA\n"
	.string "MMDCLXXXIV - MMDCCXLIV$"

Tombstone_Text_CowboyNeal::
# 1673 "data/maps/MareS1/scripts.pory"
	.string "NEAL CASSADY\n"
	.string "MMDCLXXIX - MMDCCXXI$"

Tombstone_Text_Antony::
# 1677 "data/maps/MareS1/scripts.pory"
	.string "MARCVS ANTONIVS\n"
	.string "DCLXXI - DCCXXIV$"

Tombstone_Text_Wright1::
# 1681 "data/maps/MareS1/scripts.pory"
	.string "VILBVR VRIGHT\n"
	.string "MMDCXX - MMDCLXV$"

Tombstone_Text_Wright2::
# 1685 "data/maps/MareS1/scripts.pory"
	.string "AVRIVILLIVVS VRIGHT\n"
	.string "MMDCXXIV - MMDCCI$"

Tombstone_Text_Jefferson::
# 1689 "data/maps/MareS1/scripts.pory"
	.string "THOMAS IEFFERSONIVS\n"
	.string "MMCDXCVI - MMDLXXIX$"

Tombstone_Text_Adams::
# 1693 "data/maps/MareS1/scripts.pory"
	.string "IOANNES ADAMIVS\n"
	.string "MMCDLXXXVIII - MMDLXXIX$"

Tombstone_Text_Lennon::
# 1697 "data/maps/MareS1/scripts.pory"
	.string "IOANNES LENNON\n"
	.string "MMDCXCIII - MMDCCXXXIII$"

Tombstone_Text_Harrison::
# 1701 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS HARRISON\n"
	.string "MMDCXCVI - MMDCCLIV$"

Tombstone_Text_Washington::
# 1705 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS VASINGTONIVVS\n"
	.string "MMCDLXXXV - MMDLII$"

Tombstone_Text_Hisler::
# 1709 "data/maps/MareS1/scripts.pory"
	.string "ADOLPHVS HITLER\n"
	.string "MMDCXLII - MMDCXCVIII$"

Tombstone_Text_Elizabeth::
# 1713 "data/maps/MareS1/scripts.pory"
	.string "ELIZABETHA I TVDOR\n"
	.string "MMCCLXXXVI - MMCCCLVI$"

Tombstone_Text_Thucydides::
# 1717 "data/maps/MareS1/scripts.pory"
	.string "THVCYDIDES ATHENARVM\n"
	.string "CCXCIV - CCCLIV$"

Tombstone_Text_Ford::
# 1721 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS FORD\n"
	.string "MMDCXVI - MMDCC$"

Tombstone_Text_Rockefeller::
# 1725 "data/maps/MareS1/scripts.pory"
	.string "IOANNES ROCKEFELLER\n"
	.string "MMDXCII - MMDCXC$"

Tombstone_Text_Morgan::
# 1729 "data/maps/MareS1/scripts.pory"
	.string "IOANNES MORGAN\n"
	.string "MMDXC - MMDCLXVI$"

Tombstone_Text_Mays::
# 1733 "data/maps/MareS1/scripts.pory"
	.string "GVLIELMVS MAYS\n"
	.string "MMDCLXXXIV - MMDCCLXXVII$"

Tombstone_Text_Kubrick::
# 1737 "data/maps/MareS1/scripts.pory"
	.string "STANLEY KVBRICK\n"
	.string "MMDCLXXXI - MMDCCLII$"

Tombstone_Text_Brando::
# 1741 "data/maps/MareS1/scripts.pory"
	.string "MARLON BRANDO\n"
	.string "MMDCLXXVII - MMDCCLVII$"

Tombstone_Text_Gutenburg::
# 1745 "data/maps/MareS1/scripts.pory"
	.string "IOANNES GVTENBERGVS\n"
	.string "MMCLIII - MMCCXXI$"

Tombstone_Text_Horace::
# 1749 "data/maps/MareS1/scripts.pory"
	.string "QVINTVS HORATIVS FLACCVS\n"
	.string "DCLXXXIX - DCCXLVI$"

Tombstone_Text_CatoElder::
# 1753 "data/maps/MareS1/scripts.pory"
	.string "MARCVS PORCIVS CATO\n"
	.string "DXX - DCV$"

Tombstone_Text_Dickens::
# 1757 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS DICKENS\n"
	.string "MMDLXV - MMDCXXIII$"

Tombstone_Text_Darwin::
# 1761 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS DARWINIVS\n"
	.string "MMDLXII - MMDCXXXV$"

Tombstone_Text_Pasteur::
# 1765 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS PASTEVR\n"
	.string "MMDLXXV - MMDCXLVIII$"

Tombstone_Text_Fleming::
# 1769 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER FLEMING\n"
	.string "MMDCXXXIV - MMDCCVIII$"

Tombstone_Text_Tubman::
# 1773 "data/maps/MareS1/scripts.pory"
	.string "ARAMINTA ROSS\n"
	.string "MMDLXXV - MMDCLXVI$"

Tombstone_Text_VanGogh::
# 1777 "data/maps/MareS1/scripts.pory"
	.string "VINCENTIVS VAN GOGH\n"
	.string "MMDCVI - MMDCXLIII$"

Tombstone_Text_Picasso::
# 1781 "data/maps/MareS1/scripts.pory"
	.string "PAVLVS PICASSO\n"
	.string "MMDCXXXIV - MMDCCXXVI$"

Tombstone_Text_ChienShiungWu::
# 1785 "data/maps/MareS1/scripts.pory"
	.string "CHIEN SHIVNG VV\n"
	.string "MMCLXV - MMDCCL$"

Tombstone_Text_Faraday::
# 1789 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL FARADAY\n"
	.string "MMDCXXXIV - MMDCCXXVI$"

Tombstone_Text_Maxwell::
# 1793 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS MAXVELL\n"
	.string "MMDLXXXIV - MMDCXXXII$"

Tombstone_Text_Goethe::
# 1797 "data/maps/MareS1/scripts.pory"
	.string "iIOANNES GOETHIVS\n"
	.string "MMDII - MMDLXXXV$"

Tombstone_Text_Voltaire::
# 1801 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS AROVET\n"
	.string "MMCDXLVII - MMDXXXI$"

Tombstone_Text_Trotsky::
# 1805 "data/maps/MareS1/scripts.pory"
	.string "LEO BRONSTEINVS\n"
	.string "MMDCXXXII - MMDCXCIII$"

Tombstone_Text_Kafka::
# 1809 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS KAFKA\n"
	.string "MMDCXXXVI - MMDCLXXVII$"

Tombstone_Text_Tolstoy::
# 1813 "data/maps/MareS1/scripts.pory"
	.string "LEO TOLSTOI\n"
	.string "MMDLXXXI - MMDCLXIII$"

Tombstone_Text_Pope::
# 1817 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDER POPE\n"
	.string "MMCDXLI - MMCDXCVII$"

Tombstone_Text_HunterThompson::
# 1821 "data/maps/MareS1/scripts.pory"
	.string "HVNTER THOMPSON\n"
	.string "MMCXC - MMCCLVIII$"

Tombstone_Text_Kesey::
# 1825 "data/maps/MareS1/scripts.pory"
	.string "KENNETHVS KESEY\n"
	.string "MMDCLXXXVIII - MMDCCLIV$"

Tombstone_Text_MilesDavis::
# 1829 "data/maps/MareS1/scripts.pory"
	.string "MILES DAVIS\n"
	.string "MMCLXXIX - MMDCCXLIV$"

Tombstone_Text_Coltrane::
# 1833 "data/maps/MareS1/scripts.pory"
	.string "IOANNES COLTRANE\n"
	.string "MMCLXXIX - MMDCCXX$"

Tombstone_Text_Dante::
# 1837 "data/maps/MareS1/scripts.pory"
	.string "DANTES ALAGHERIVS\n"
	.string "MMXVIII - MMLXXIV$"

Tombstone_Text_Chaucer::
# 1841 "data/maps/MareS1/scripts.pory"
	.string "GALFRIDVS CHAVCER\n"
	.string "MMXCVI - MMCLIII$"

Tombstone_Text_Tchaikovsky::
# 1845 "data/maps/MareS1/scripts.pory"
	.string "PETRVS CAIKOVSKII\n"
	.string "MMDXCIII - MMDCXLVI$"

Tombstone_Text_Montesquieu::
# 1849 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS MONTESQVIVS\n"
	.string "MMCDXLII - MMDVIII$"

Tombstone_Text_Rousseau::
# 1853 "data/maps/MareS1/scripts.pory"
	.string "IOANNES RVSSAVIVS\n"
	.string "MMCDLXV - MMDXXXI$"

Tombstone_Text_Paine::
# 1857 "data/maps/MareS1/scripts.pory"
	.string "THOMAS PAINE\n"
	.string "MMCDXC - MMDLXII$"

Tombstone_Text_Elvis::
# 1861 "data/maps/MareS1/scripts.pory"
	.string "ELVIS PRESLEY\n"
	.string "MMDCLXXXVIII - MMDCCXXX$"

Tombstone_Text_Ovid::
# 1865 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS OVIDIVS NASO\n"
	.string "DCCXI - DCCLXX$"

Tombstone_Text_Tacitus::
# 1869 "data/maps/MareS1/scripts.pory"
	.string "CORNELIVS TACITVS\n"
	.string "DCCCIX - DCCCLXXIII$"

Tombstone_Text_CatoMinor::
# 1873 "data/maps/MareS1/scripts.pory"
	.string "MARCVS PORCIVS CATO VTICENSIS\n"
	.string "DCLIX - DCCVIII$"

Tombstone_Text_Bohr::
# 1877 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS BOHR\n"
	.string "MMDCXXXVIII - MMDCCXV$"

Tombstone_Text_Descartes::
# 1881 "data/maps/MareS1/scripts.pory"
	.string "RENATVS CARTESIVS\n"
	.string "MMCCCIL - MMCDIII$"

Tombstone_Text_Aristophanes::
# 1885 "data/maps/MareS1/scripts.pory"
	.string "ARISTOPHANES ATHENARVM\n"
	.string "CCCIX - CCCLXIX$"

Tombstone_Text_Hemingway::
# 1889 "data/maps/MareS1/scripts.pory"
	.string "ERNESTVS HEMINGWAY\n"
	.string "MMDCLII - MMDCCXIV$"

Tombstone_Text_Ginsberg::
# 1893 "data/maps/MareS1/scripts.pory"
	.string "IRVIN GINSBERG\n"
	.string "MMDCLXXIX - MMDCCL$"

Tombstone_Text_VonNeumann::
# 1897 "data/maps/MareS1/scripts.pory"
	.string "IOANNES VON NEVMANN\n"
	.string "MMDCLVI - MMDCCX$"

Tombstone_Text_Edison::
# 1901 "data/maps/MareS1/scripts.pory"
	.string "THOMAS EDISON\n"
	.string "MMDC - MMDCLXXXIV$"

Tombstone_Text_Vanderbilt::
# 1905 "data/maps/MareS1/scripts.pory"
	.string "CORNELIVS VANDERBILT\n"
	.string "MMDXLVII - MMDCCXV$"

Tombstone_Text_Leonidas::
# 1909 "data/maps/MareS1/scripts.pory"
	.string "LEONIDAS AGIADES\n"
	.string "CCXIV - CCLXXIV$"

Tombstone_Text_Pompey::
# 1913 "data/maps/MareS1/scripts.pory"
	.string "GNAEVS POMPEIVS\n"
	.string "DCXLVIII - DCCVI$"

Tombstone_Text_Pericles::
# 1917 "data/maps/MareS1/scripts.pory"
	.string "PERICLES ATHENARVM\n"
	.string "CCLIX - CCCXXV$"

Tombstone_Text_Antigonos::
# 1921 "data/maps/MareS1/scripts.pory"
	.string "ANTIGONVS MONOPHTHALMVS\n"
	.string "CCCLXXII - CDLIII$"

Tombstone_Text_Darius::
# 1925 "data/maps/MareS1/scripts.pory"
	.string "DARIVS ACHAEMENIDAE\n"
	.string "CCV - CCLXVIII$"

Tombstone_Text_Spartacus::
# 1929 "data/maps/MareS1/scripts.pory"
	.string "SPARTACVS THRACIAE\n"
	.string "DCLI - DCLXXXIII$"

Tombstone_Text_Otto::
# 1933 "data/maps/MareS1/scripts.pory"
	.string "OTTO LIVDOLFICVS\n"
	.string "MDCLXV - MDCCXXVI$"

Tombstone_Text_Justinian::
# 1937 "data/maps/MareS1/scripts.pory"
	.string "FLAVIVS PETRVS SABBATIVS IVSTINIANVS\n"
	.string "MCCXXXV - MCCCXVIII$"

Tombstone_Text_Pepin::
# 1941 "data/maps/MareS1/scripts.pory"
	.string "PIPINVS CAROLINGVS\n"
	.string "MCDLXVII - MDXXI$"

Tombstone_Text_Timur::
# 1945 "data/maps/MareS1/scripts.pory"
	.string "TAMERLANES TIMVRIDARVM\n"
	.string "MMLXXXIX- MMCLVIII$"

Tombstone_Text_Churchill::
# 1949 "data/maps/MareS1/scripts.pory"
	.string "WINSTON CHVRCHILLVS\n"
	.string "MMDCXXVII - MMDCCXVIII$"

Tombstone_Text_Henry6::
# 1953 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS VI LANCASTRIA\n"
	.string "MMCLXXIV - MMCCXXIV$"

Tombstone_Text_Hindenburg::
# 1957 "data/maps/MareS1/scripts.pory"
	.string "PAVLVS HINDENBVRG\n"
	.string "MMDC - MMDCLXXXVII$"

Tombstone_Text_Elizabeth2::
# 1961 "data/maps/MareS1/scripts.pory"
	.string "ELIZABETHA II WINDSORANI\n"
	.string "MMDCLXXIX - MMDCCLXXV$"

Tombstone_Text_Cromwell::
# 1965 "data/maps/MareS1/scripts.pory"
	.string "OLIVERIVS CROMVELLVS\n"
	.string "MMCCCLII - MMCDXI$"

Tombstone_Text_Mao::
# 1969 "data/maps/MareS1/scripts.pory"
	.string "MAO TSE TVNG\n"
	.string "MMDCXLVI - MMDCCXXIX$"

Tombstone_Text_Eisenhower::
# 1973 "data/maps/MareS1/scripts.pory"
	.string "DVIGHT EISENHOVER\n"
	.string "MMDCXLIII - MMDCCXXII$"

Tombstone_Text_Ashoka::
# 1977 "data/maps/MareS1/scripts.pory"
	.string "PIODASSES MAVRYA\n"
	.string "CDL - DXXII$"

Tombstone_Text_QinShiHuang::
# 1981 "data/maps/MareS1/scripts.pory"
	.string "CHINGVS CHI\n"
	.string "CDXCV - DXLIV$"

Tombstone_Text_Che::
# 1985 "data/maps/MareS1/scripts.pory"
	.string "ERNESTVS GVEVARA\n"
	.string "MMDCLXXXI - MMDCCXX$"

Tombstone_Text_Cincinnatus::
# 1989 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS QVINCTIVS CINCINNATVS\n"
	.string "CCXXXV - CCCXXIV$"

Tombstone_Text_MarcusAurelius::
# 1993 "data/maps/MareS1/scripts.pory"
	.string "MARCVS CATILIVS SEVERVS ANNIVS VERVS\n"
	.string "DCCCLXXIV - CMXXXIII$"

Tombstone_Text_Trajan::
# 1997 "data/maps/MareS1/scripts.pory"
	.string "MARCVS VLPIVS TRAIANVS\n"
	.string "DCCCVI - DCCCLXX$"

Tombstone_Text_Urban2::
# 2001 "data/maps/MareS1/scripts.pory"
	.string "OTTO CAMPANIAE\n"
	.string "MDCCLXXXVIII - MDCCCLII$"

Tombstone_Text_Henry8::
# 2005 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS VIII TVDOR\n"
	.string "MMCCXLIV - MMCCC$"

Tombstone_Text_GustavusAdolphus::
# 2009 "data/maps/MareS1/scripts.pory"
	.string "GVSTAVS II ADOLPHVS\n"
	.string "MMCCCXLVII - MMCCCLXXXV$"

Tombstone_Text_Robespierre::
# 2013 "data/maps/MareS1/scripts.pory"
	.string "MAXIMILIANVS ROBESPIERRE\n"
	.string "MMDXI - MMDXLVII$"

Tombstone_Text_Lenin::
# 2017 "data/maps/MareS1/scripts.pory"
	.string "VLADIMIRVS LENIN\n"
	.string "MMDCXXIII - MMDCLXXVII$"

Tombstone_Text_Mandela::
# 2021 "data/maps/MareS1/scripts.pory"
	.string "NELSON MANDELA\n"
	.string "MMDCLXXI - MMDCCLXVI$"

Tombstone_Text_Catherine::
# 2025 "data/maps/MareS1/scripts.pory"
	.string "CATHARINA II ALEXII\n"
	.string "MMCDLXXXII - MMDXLIX$"

Tombstone_Text_Bolivar::
# 2029 "data/maps/MareS1/scripts.pory"
	.string "SIMON BOLIVARVS\n"
	.string "MMDXXXVI - MMDLXXXIII$"

Tombstone_Text_Bismark::
# 2033 "data/maps/MareS1/scripts.pory"
	.string "OTHO BISMARK\n"
	.string "MMDLXVIII - MMDCLI$"

Tombstone_Text_Castro::
# 2037 "data/maps/MareS1/scripts.pory"
	.string "FIDELIS CASTRO\n"
	.string "MMDCLXXIX - MMDCCLXIX$"

Tombstone_Text_FrederickGreat::
# 2041 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS II BORVSSIAE\n"
	.string "MMCDLXV - MMDXXXIX$"

Tombstone_Text_Victoria::
# 2045 "data/maps/MareS1/scripts.pory"
	.string "ALEXANDRINA VICTORIA\n"
	.string "MMDLXXII - MMDCLIV$"

Tombstone_Text_Louis16::
# 2049 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS XVI BORBONIENSIS\n"
	.string "MMDVII - MMDXLVI$"

Tombstone_Text_Patton::
# 2053 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS PATTON\n"
	.string "MMDCXXXVIII - MMDCXCVIII$"

Tombstone_Text_Louis14::
# 2057 "data/maps/MareS1/scripts.pory"
	.string "LVDOVICVS XIV BORBONIENSIS\n"
	.string "MMCCCXCI - MMCDLXVIII$"

Tombstone_Text_Atilla::
# 2061 "data/maps/MareS1/scripts.pory"
	.string "ATILLA HVNNORVM\n"
	.string "MCLIX - MCCVI$"

Tombstone_Text_Sulla::
# 2065 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS CORNELIVS SVLLA\n"
	.string "DCXVI - DCLXXVI$"

Tombstone_Text_Xerxes::
# 2069 "data/maps/MareS1/scripts.pory"
	.string "XERXES ACHAEMENIDAE\n"
	.string "CCXXXV - CCLXXXIX$"

Tombstone_Text_Nero::
# 2073 "data/maps/MareS1/scripts.pory"
	.string "LVCIVS DOMITIVS AHENOBARBVS\n"
	.string "DCCXC - DCCCXXI$"

Tombstone_Text_EdwardPrince::
# 2077 "data/maps/MareS1/scripts.pory"
	.string "EDVARDVS WOODSTOCK ANIOV\n"
	.string "MMLXXXIII - MMCXXIX$"

Tombstone_Text_Mussolini::
# 2081 "data/maps/MareS1/scripts.pory"
	.string "BENITVS MVSSOLINI\n"
	.string "MMDCXXXVI- MMDCXCVI$"

Tombstone_Text_Gorbachev::
# 2085 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL GORBACEV\n"
	.string "MMDCLXXXIV - MMDCCLXXV$"

Tombstone_Text_SusanAnthony::
# 2089 "data/maps/MareS1/scripts.pory"
	.string "SVSANA ANTONIA\n"
	.string "MMDLXXIII - MMDCLIX$"

Tombstone_Text_Henry4::
# 2093 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS IV LANCASTRIA\n"
	.string "MMCXX- MMCLXVI$"

Tombstone_Text_Franklin::
# 2097 "data/maps/MareS1/scripts.pory"
	.string "BENIAMINVS FRANKLINIVS\n"
	.string "MMCDLIX - MMDXLIII$"

Tombstone_Text_Tiberius::
# 2101 "data/maps/MareS1/scripts.pory"
	.string "TIBERIVS CLAVDIVS NERO\n"
	.string "DCCXII - DCCXC$"

Tombstone_Text_DaVinci::
# 2105 "data/maps/MareS1/scripts.pory"
	.string "LEONARDVS VINCIVS\n"
	.string "MMCCV - MMCCLXXII$"

Tombstone_Text_Pythagoras::
# 2109 "data/maps/MareS1/scripts.pory"
	.string "PYTHAGORAS SAMI\n"
	.string "CLXXXIV - CCLIX$"

Tombstone_Text_Feynman::
# 2113 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS FEYNMAN\n"
	.string "MMDCLXXI - MMDCCXLI$"

Tombstone_Text_Sartre::
# 2117 "data/maps/MareS1/scripts.pory"
	.string "IOANNES SARTRE\n"
	.string "MMDCLVIII - MMDCCXXXIII$"

Tombstone_Text_Nietzshe::
# 2121 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS NIETZSCHE\n"
	.string "MMDXCVII - MMDCLIII$"

Tombstone_Text_Joyce::
# 2125 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS IOYCE\n"
	.string "MMDCXXXV - MMDCXCIV$"

Tombstone_Text_Bradly::
# 2129 "data/maps/MareS1/scripts.pory"
	.string "BRADLY NOVELL\n"
	.string "MMDCCXXI - MMDCCXLIX$"

Tombstone_Text_Constantine::
# 2133 "data/maps/MareS1/scripts.pory"
	.string "FLAVIVS VALERIVS CONSTANTINVS\n"
	.string "MXXV - MXC$"

Tombstone_Text_Henry2::
# 2137 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS II PLANTAGENISTAE\n"
	.string "MDCCCLXXXVI - MCMXLII$"

Tombstone_Text_Henry5::
# 2141 "data/maps/MareS1/scripts.pory"
	.string "HENRICVS V LANCASTRIA\n"
	.string "MMCXXXIX - MMCLXXV$"

Tombstone_Text_FrederickBarbaorossa::
# 2145 "data/maps/MareS1/scripts.pory"
	.string "FRIDERICVS I HOHENSTAVFEN\n"
	.string "MDCCCLXXV - MCMXLIII$"

Tombstone_Text_AndrewJackson::
# 2149 "data/maps/MareS1/scripts.pory"
	.string "ANDREAS IACKSON\n"
	.string "MMDXX - MMDXCVIII$"

Tombstone_Text_FDR::
# 2153 "data/maps/MareS1/scripts.pory"
	.string "FRANKLINVS ROOSEVELT\n"
	.string "MMDCXXXV - MMDCXCVIII$"

Tombstone_Text_Reagan::
# 2157 "data/maps/MareS1/scripts.pory"
	.string "RONALDVS REAGAN\n"
	.string "MMDCLXIV - MMDCCLVII$"

Tombstone_Text_Hirohito::
# 2161 "data/maps/MareS1/scripts.pory"
	.string "SHOVA HIROHITO\n"
	.string "MMDCLIV - MMDCCXLII$"

Tombstone_Text_Aquinas::
# 2165 "data/maps/MareS1/scripts.pory"
	.string "THOMAS AQUVINAS\n"
	.string "MCMLXXVIII - MMXXVII$"

Tombstone_Text_Tesla::
# 2169 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS TESLA\n"
	.string "MMDCIX - MMDCXCVI$"

Tombstone_Text_Bach::
# 2173 "data/maps/MareS1/scripts.pory"
	.string "IOANNES BACHIVS\n"
	.string "MMCDXXXVIII - MMDIII$"

Tombstone_Text_Hobbes::
# 2177 "data/maps/MareS1/scripts.pory"
	.string "THOMAS HOBBIVS\n"
	.string "MMCCCXLI - MMCDXXXII$"

Tombstone_Text_Hendrix::
# 2181 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS HENDRIX\n"
	.string "MMDCXLV - MMDCCXXIII$"

Tombstone_Text_Tolkien::
# 2185 "data/maps/MareS1/scripts.pory"
	.string "IOANNES TOLKIEN\n"
	.string "MMDCXLV - MMDCCXXVI$"

Tombstone_Text_Berry::
# 2189 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS BERRY\n"
	.string "MMDCLXXIX - MMDCCLXX$"

Tombstone_Text_Milton::
# 2193 "data/maps/MareS1/scripts.pory"
	.string "IOANNES MILTONVS\n"
	.string "MMCCCLXI - MMCDXXVII$"

Tombstone_Text_Sophocles::
# 2197 "data/maps/MareS1/scripts.pory"
	.string "SOPHOCLES COLONI\n"
	.string "CCLVII - CCCXLVIII$"

Tombstone_Text_Aeschylus::
# 2201 "data/maps/MareS1/scripts.pory"
	.string "AESCHYLVS ATHENARVM\n"
	.string "CCXXIX - CCXCVIII$"

Tombstone_Text_StPeter::
# 2205 "data/maps/MareS1/scripts.pory"
	.string "SIMON IONA\n"
	.string "DCCLIII - DCCCXVIII$"

Tombstone_Text_Engles::
# 2209 "data/maps/MareS1/scripts.pory"
	.string "FREDERICVS ENGELS\n"
	.string "MMDLXXIII - MMDCXLVIII$"

Tombstone_Text_Archimedes::
# 2213 "data/maps/MareS1/scripts.pory"
	.string "ARCHIMEDES SYRACVSANVS\n"
	.string "CDLXVII - DXLII$"

Tombstone_Text_Watt::
# 2217 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS WATT\n"
	.string "MMCDLXXXIX - MMDLXXII$"

Tombstone_Text_Schrodinger::
# 2221 "data/maps/MareS1/scripts.pory"
	.string "ERVINVS SCHRODINGER\n"
	.string "MMDCXL - MMDCCXIV$"

Tombstone_Text_Fitzgerald::
# 2225 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS FITZGERALD\n"
	.string "MMDCXLIX - MMDCXCIII$"

Tombstone_Text_Woolfe::
# 2229 "data/maps/MareS1/scripts.pory"
	.string "VIRGINIA WOOLF\n"
	.string "MMDCXXXV - MMDCXCIV$"

Tombstone_Text_Dostoevsky::
# 2233 "data/maps/MareS1/scripts.pory"
	.string "THEODORVS DOSTOEVSKII\n"
	.string "MMDLXXIV - MMDCXXXIV$"

Tombstone_Text_Janis::
# 2237 "data/maps/MareS1/scripts.pory"
	.string "IOANNA IOPLIN\n"
	.string "MMDCXCVI - MMDCCXXIII$"

Tombstone_Text_Richard2::
# 2241 "data/maps/MareS1/scripts.pory"
	.string "RICARDVS II PLANTAGENISTAE\n"
	.string "MMCXX - MMCLIII$"

Tombstone_Text_Cyrus::
# 2245 "data/maps/MareS1/scripts.pory"
	.string "CYRVS II ACHAEMENIDAE\n"
	.string "CLIV - CCXXIV$"

Tombstone_Text_Caligula::
# 2249 "data/maps/MareS1/scripts.pory"
	.string "GAIVS CAESAR GERMANICVS\n"
	.string "DCCLXV - DCCXCIV$"

Tombstone_Text_Isabella::
# 2253 "data/maps/MareS1/scripts.pory"
	.string "ISABELLA TRASTAMARAE\n"
	.string "MMCCIV - MMCCLVII$"

Tombstone_Text_Yeltsin::
# 2257 "data/maps/MareS1/scripts.pory"
	.string "BORIS IELTSIN\n"
	.string "MMDCLXXXIV - MMDCCLX$"

Tombstone_Text_JackKilby::
# 2261 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS KILBY\n"
	.string "MMDCLXXVI - MMDCCLVIII$"

Tombstone_Text_Mozart::
# 2265 "data/maps/MareS1/scripts.pory"
	.string "VLFGANGVS MOZART\n"
	.string "MMDIX - MMDXLIV$"

Tombstone_Text_Jobs::
# 2269 "data/maps/MareS1/scripts.pory"
	.string "STEPHANVS JOBS\n"
	.string "MMDCCIV - MMDCCLXIV$"

Tombstone_Text_Cobain::
# 2273 "data/maps/MareS1/scripts.pory"
	.string "KVRTIVS COBAIN\n"
	.string "MMDCCXX - MMDCCXLVII$"

Tombstone_Text_Michelangelo::
# 2277 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL BONAROTIVS\n"
	.string "MMCCXXVIII - MMCCCXVII$"

Tombstone_Text_Copernicus::
# 2281 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS COPERNICVS\n"
	.string "MMCCXXVI - MMCCXCVI$"

Tombstone_Text_Galileo::
# 2285 "data/maps/MareS1/scripts.pory"
	.string "GALILAEVS GALILAEI\n"
	.string "MMCCCXVII - MMCCCXCV$"

Tombstone_Text_Cash::
# 2289 "data/maps/MareS1/scripts.pory"
	.string "IOANNES CASH\n"
	.string "MMDCLXXXV - MMDCCLVI$"

Tombstone_Text_Freud::
# 2293 "data/maps/MareS1/scripts.pory"
	.string "SIGISMVNDVS FREVD\n"
	.string "MMDCIX - MMDCXCII$"

Tombstone_Text_Kant::
# 2297 "data/maps/MareS1/scripts.pory"
	.string "IMMANVEL KANTIVS\n"
	.string "MMCDLXXVII - MMDLVII$"

Tombstone_Text_Diogenes::
# 2301 "data/maps/MareS1/scripts.pory"
	.string "DIOGENES SINOPENSIS\n"
	.string "CCCLIV - CDXXXI$"

Tombstone_Text_Cervantes::
# 2305 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL CERVANTES\n"
	.string "MMCCC - MMCCCLXIX$"

Tombstone_Text_Kerouac::
# 2309 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS KEROVAC\n"
	.string "MMDCLXXV - MMDCCXII$"

Tombstone_Text_Tupac::
# 2313 "data/maps/MareS1/scripts.pory"
	.string "TVPAC SHAKVR\n"
	.string "MMDCCXXIV - MMDCCXLIX$"

Tombstone_Text_Osama::
# 2317 "data/maps/MareS1/scripts.pory"
	.string "VSAMA BIN LADIN\n"
	.string "MMDCCX - MMDCCLXIV$"

Tombstone_Text_JFK::
# 2321 "data/maps/MareS1/scripts.pory"
	.string "IOANNES KENNEDY\n"
	.string "MMDCLXX - MMDCCXVI$"

Tombstone_Text_Twain::
# 2325 "data/maps/MareS1/scripts.pory"
	.string "SAMVEL CLEMENS\n"
	.string "MMDLXXXVIII - MMDCLXIII$"

Tombstone_Text_Hitchcock::
# 2329 "data/maps/MareS1/scripts.pory"
	.string "ALFREDVS HITCHCOCK\n"
	.string "MMDCLII - MMDCCXXXIII$"

Tombstone_Text_JimMorrison::
# 2333 "data/maps/MareS1/scripts.pory"
	.string "IACOBVS MORRISON\n"
	.string "MMDCXCVI - MMDCCXXIV$"

Tombstone_Text_MJ::
# 2337 "data/maps/MareS1/scripts.pory"
	.string "MICHAEL IACKSON\n"
	.string "MMDCCXI - MMDCCLXII$"

Tombstone_Text_Teddy::
# 2341 "data/maps/MareS1/scripts.pory"
	.string "THEODORVS ROOSEVELT\n"
	.string "MMDCXI - MMDCLXXII$"

Tombstone_Text_MLK::
# 2345 "data/maps/MareS1/scripts.pory"
	.string "MARTINVS KING\n"
	.string "MMDCLXXXII - MMDCCXXI$"

Tombstone_Text_Sinatra::
# 2349 "data/maps/MareS1/scripts.pory"
	.string "FRANCISCVS SINATRA\n"
	.string "MMDCLXVIII - MMDCCLI$"

Tombstone_Text_Oppenheimer::
# 2353 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS OPPENHEIMER\n"
	.string "MMDCLVII - MMDCCXX$"

Tombstone_Text_Jung::
# 2357 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS JVNG\n"
	.string "MMDCXXVIII - MMDCCXIV$"

Tombstone_Text_Khalo::
# 2361 "data/maps/MareS1/scripts.pory"
	.string "FRIDA KHALO\n"
	.string "MMDCLX - MMDCCVII$"

Tombstone_Text_Scipio::
# 2365 "data/maps/MareS1/scripts.pory"
	.string "PVBLIVS CORNELIVS SCIPIO\n"
	.string "DXVIII - DLXXI$"

Tombstone_Text_Stalin::
# 2369 "data/maps/MareS1/scripts.pory"
	.string "IOSEPHVS IVGASVILI\n"
	.string "MMDCXXXI - MMDCCVI$"

Tombstone_Text_Rommel::
# 2373 "data/maps/MareS1/scripts.pory"
	.string "IOHANNES ROMMEL\n"
	.string "MMDCXLIV - MMDCXCVII$"

Tombstone_Text_Euripides::
# 2377 "data/maps/MareS1/scripts.pory"
	.string "EVRIPIDES SALAMINIS\n"
	.string "MMDCLXX - MMDCCXVI$"

Tombstone_Text_Hawking::
# 2381 "data/maps/MareS1/scripts.pory"
	.string "STEPHANVS HAWKING\n"
	.string "MMDCXCV - MMDCCLXXI$"

Tombstone_Text_Suleiman::
# 2385 "data/maps/MareS1/scripts.pory"
	.string "SVLEIMANVS OTTOMANIDAE\n"
	.string "MMCCXLVII - MMCCCIX$"

Tombstone_Text_Machiavelli::
# 2389 "data/maps/MareS1/scripts.pory"
	.string "NICOLAVS MACIAVELLVS\n"
	.string "MMCCXXII - MMCCLXXX$"

Tombstone_Text_Cicero::
# 2393 "data/maps/MareS1/scripts.pory"
	.string "MARCVS TVLLIVS CICERO\n"
	.string "DCXCVIII - DCCXI$"

Tombstone_Text_MarieCurie::
# 2397 "data/maps/MareS1/scripts.pory"
	.string "MARIA CVRIE\n"
	.string "MMDCXX - MMDCLXXXVII$"

Tombstone_Text_JaneAusten::
# 2401 "data/maps/MareS1/scripts.pory"
	.string "IOANNA AVSTEN\n"
	.string "MMDXXVIII - MMDLXX$"

Tombstone_Text_Hannibal::
# 2405 "data/maps/MareS1/scripts.pory"
	.string "HANNIBAL BARCAS\n"
	.string "DVII - DLXXI$"

Tombstone_Text_Sullust::
# 2409 "data/maps/MareS1/scripts.pory"
	.string "GAIVS SALLVSTIVS CRISPVS\n"
	.string "DCLXVIII - DCCXIX$"

Tombstone_Text_Zinn::
# 2413 "data/maps/MareS1/scripts.pory"
	.string "HVARDVS ZINN\n"
	.string "MMDCLXXV - MMDCCLXIII$"

Tombstone_Text_Disney::
# 2417 "data/maps/MareS1/scripts.pory"
	.string "GVALTERVS DISNEY\n"
	.string "MMDXLIV - MMDCCXIX$"

Tombstone_Text_Chaplin::
# 2421 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS CHAPLIN\n"
	.string "MMDCXLII - MMDCCXXX$"

Tombstone_Text_Sagan::
# 2425 "data/maps/MareS1/scripts.pory"
	.string "CAROLVS SAGAN\n"
	.string "MMDCLXXXVII - MMDCCXLIX$"

Tombstone_Text_Dimaggio::
# 2429 "data/maps/MareS1/scripts.pory"
	.string "IOSEPHVS DIMAGGIO\n"
	.string "MMDCLXVII - MMDCCLII$"

Tombstone_Text_Lee::
# 2433 "data/maps/MareS1/scripts.pory"
	.string "ROBERTVS LEE\n"
	.string "MMDLX - MMDCXXIII$"

Tombstone_Text_Livy::
# 2437 "data/maps/MareS1/scripts.pory"
	.string "TITVS LIVIVS\n"
	.string "DCXCV - DCCLXX$"

Tombstone_Text_Epicurus::
# 2441 "data/maps/MareS1/scripts.pory"
	.string "EPICVRVS SAMI\n"
	.string "CDXIII - CDLXXXIV$"

Tombstone_Text_Schopenhaur::
# 2445 "data/maps/MareS1/scripts.pory"
	.string "ARTHVRVS SCHOPENHAVER\n"
	.string "MMDXLI - MMDCXIII$"

Tombstone_Text_Wells::
# 2449 "data/maps/MareS1/scripts.pory"
	.string "GEORGIVS VELLES\n"
	.string "MMDCLXVIII - MMDCCXXXVIII$"
