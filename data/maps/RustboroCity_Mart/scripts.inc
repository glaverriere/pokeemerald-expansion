# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 34 "data/maps/RustboroCity_Mart/scripts.pory"

# 35 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Mart/scripts.pory"

# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Mart/scripts.pory"

# 58 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 59 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 60 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Mart/scripts.pory"

# 62 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 63 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 64 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Mart/scripts.pory"

# 66 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 67 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Mart/scripts.pory"

# 70 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 75 "data/maps/RustboroCity_Mart/scripts.pory"

# 76 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 79 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 81 "data/maps/RustboroCity_Mart/scripts.pory"

# 82 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 85 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"
# 87 "data/maps/RustboroCity_Mart/scripts.pory"

# 88 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Berry::
# 89 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 90 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 91 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Berry
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 96 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 97 "data/maps/RustboroCity_Mart/scripts.pory"

# 98 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 99 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Berry:
# 100 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 109 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 110 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 112 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 114 "data/maps/RustboroCity_Mart/scripts.pory"
	end
