# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"

# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"

# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"

# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of POKéMON.\p"
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X ATTACK and X DEFEND…\p"
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"

# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The TRAINER's decisions determine how\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"

# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Berry::
# 52 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 53 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 54 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 56 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart_Berry
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"

# 61 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 62 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart_Berry:
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 65 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 66 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 67 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 68 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 69 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 70 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 71 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 72 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 73 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 74 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 75 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 76 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 77 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 78 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 79 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 80 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
