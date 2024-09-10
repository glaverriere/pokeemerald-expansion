# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts::
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk::
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 28 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_WOOD_MAIL
# 29 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 32 "data/maps/FortreeCity_Mart/scripts.pory"

# 33 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman::
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 36 "data/maps/FortreeCity_Mart/scripts.pory"

# 37 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl::
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 40 "data/maps/FortreeCity_Mart/scripts.pory"

# 41 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy::
# 42 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 43 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 44 "data/maps/FortreeCity_Mart/scripts.pory"

# 45 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter:
# 46 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time,\n"
# 47 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "and it gets the job done.\p"
# 48 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "It's much better than an ordinary\n"
# 49 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "REPEL.$"
# 50 "data/maps/FortreeCity_Mart/scripts.pory"

# 51 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems:
# 52 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
# 53 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I'm sure I'll need.\p"
# 54 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "You never know what might happen.\n"
# 55 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Better to be safe than sorry!$"
# 56 "data/maps/FortreeCity_Mart/scripts.pory"

# 57 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow:
# 58 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\n"
# 59 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "immediately by one level.$"
# 60 "data/maps/FortreeCity_Mart/scripts.pory"

# 61 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Berry::
# 62 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 63 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 64 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 65 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 66 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart_Berry
# 67 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 69 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 70 "data/maps/FortreeCity_Mart/scripts.pory"

# 71 "data/maps/FortreeCity_Mart/scripts.pory"
	.align 2
# 72 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart_Berry:
# 73 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 74 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 75 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 76 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 77 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 78 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 79 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 80 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 81 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 82 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 83 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 84 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 85 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 86 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 87 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 88 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 89 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 90 "data/maps/FortreeCity_Mart/scripts.pory"
	end
