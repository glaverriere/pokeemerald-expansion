# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"

# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"

# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"

# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_Mart/scripts.pory"

# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"

# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"

# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 71 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 72 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 73 "data/maps/PetalburgCity_Mart/scripts.pory"

# 74 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 75 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 76 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 77 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"

# 79 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 80 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 81 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 82 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 83 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"
# 85 "data/maps/PetalburgCity_Mart/scripts.pory"

# 86 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Berry::
# 87 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 88 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 89 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 90 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 91 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Berry
# 92 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 94 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 95 "data/maps/PetalburgCity_Mart/scripts.pory"

# 96 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 97 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Berry:
# 98 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 99 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 100 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 101 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 102 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 103 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 104 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 105 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 106 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 107 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 108 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 109 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 110 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 111 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 112 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
