# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 25 "data/maps/OldaleTown_Mart/scripts.pory"

# 26 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 31 "data/maps/OldaleTown_Mart/scripts.pory"

# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 44 "data/maps/OldaleTown_Mart/scripts.pory"

# 45 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 52 "data/maps/OldaleTown_Mart/scripts.pory"

# 53 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 57 "data/maps/OldaleTown_Mart/scripts.pory"

# 58 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 59 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 61 "data/maps/OldaleTown_Mart/scripts.pory"

# 62 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any POKé BALLS.$"
# 65 "data/maps/OldaleTown_Mart/scripts.pory"

# 66 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of POKé BALLS\n"
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of POKéMON!$"
# 69 "data/maps/OldaleTown_Mart/scripts.pory"

# 70 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a POKéMON gets hurt and loses its HP\n"
# 72 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 73 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your POKéMON from fainting,\n"
# 74 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a POTION.$"
# 75 "data/maps/OldaleTown_Mart/scripts.pory"

# 76 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Berry::
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Berry
# 82 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 85 "data/maps/OldaleTown_Mart/scripts.pory"

# 86 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 87 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Berry:
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 92 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 93 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 95 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 96 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 97 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 98 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 99 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 101 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 102 "data/maps/OldaleTown_Mart/scripts.pory"
	end
