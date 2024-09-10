# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts::
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 27 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"

# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman::
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"

# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy::
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"

# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor::
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"

# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic:
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "REVIVE is fantastic!\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Give it to a fainted POKéMON,\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "and the POKéMON will arise.\p"
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "But be careful, REVIVE doesn't restore\n"
# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the used-up PP of moves.$"
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"

# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest:
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\p"
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Out of all the REPEL sprays, it lasts\n"
# 52 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the longest.$"
# 53 "data/maps/MossdeepCity_Mart/scripts.pory"

# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare:
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\n"
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BALLS that are only made in MOSSDEEP.\p"
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A NET BALL is effective against\n"
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "BUG-type and WATER-type POKéMON.\p"
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A DIVE BALL works best on POKéMON\n"
# 60 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "at the bottom of the sea.$"
# 61 "data/maps/MossdeepCity_Mart/scripts.pory"

# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Berry::
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 67 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart_Berry
# 68 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 69 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 70 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 71 "data/maps/MossdeepCity_Mart/scripts.pory"

# 72 "data/maps/MossdeepCity_Mart/scripts.pory"
	.align 2
# 73 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart_Berry:
# 74 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 75 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 76 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 77 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 78 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 79 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 80 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 81 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 82 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 83 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 84 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 85 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 86 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 87 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 88 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 89 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 90 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 91 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
