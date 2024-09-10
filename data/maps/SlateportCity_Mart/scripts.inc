# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 31 "data/maps/SlateportCity_Mart/scripts.pory"

# 32 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Mart/scripts.pory"

# 36 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 39 "data/maps/SlateportCity_Mart/scripts.pory"

# 40 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 41 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
# 42 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 43 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a POKéMON MART.$"
# 45 "data/maps/SlateportCity_Mart/scripts.pory"

# 46 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 47 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
# 48 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching POKéMON.\p"
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive POKéMON…$"
# 51 "data/maps/SlateportCity_Mart/scripts.pory"

# 52 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Berry::
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 56 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 57 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart_Berry
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 60 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 61 "data/maps/SlateportCity_Mart/scripts.pory"

# 62 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 63 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart_Berry:
# 64 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 65 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 66 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 67 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 68 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 69 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 70 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 71 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 72 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 73 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 74 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 75 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 76 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 77 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 78 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 79 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 80 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 81 "data/maps/SlateportCity_Mart/scripts.pory"
	end
