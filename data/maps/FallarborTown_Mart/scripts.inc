# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts::
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk::
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 28 "data/maps/FallarborTown_Mart/scripts.pory"

# 29 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman::
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 32 "data/maps/FallarborTown_Mart/scripts.pory"

# 33 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM::
# 34 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 36 "data/maps/FallarborTown_Mart/scripts.pory"

# 37 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty::
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 46 "data/maps/FallarborTown_Mart/scripts.pory"

# 47 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve:
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "should make my SKITTY evolve or not.\p"
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I only have to use this MOON STONE,\n"
# 51 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "but it's so hard to decide…\p"
# 52 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "If I make it evolve, it will become\n"
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "much stronger.\p"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "But it will look so different, too.$"
# 55 "data/maps/FallarborTown_Mart/scripts.pory"

# 56 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty:
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"
# 58 "data/maps/FallarborTown_Mart/scripts.pory"

# 59 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound:
# 60 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
# 61 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"
# 63 "data/maps/FallarborTown_Mart/scripts.pory"

# 64 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Berry::
# 65 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 66 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 67 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 68 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 69 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart_Berry
# 70 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 71 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 72 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 73 "data/maps/FallarborTown_Mart/scripts.pory"

# 74 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 75 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart_Berry:
# 76 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 77 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 78 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 79 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 80 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 81 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 82 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 83 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 84 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 85 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 86 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 87 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 88 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 89 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 90 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 91 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 92 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 93 "data/maps/FallarborTown_Mart/scripts.pory"
	end
