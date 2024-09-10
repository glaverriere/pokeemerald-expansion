# 1 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 2 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_MapScripts::
# 3 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 11 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 24 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 27 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 28 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 29 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 31 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_ExpertM::
# 32 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
# 33 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 35 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_OldWoman::
# 36 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
# 37 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 38 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 39 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_XSpeedFirstStrike:
# 40 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON's\n"
# 41 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "SPEED in battle.\p"
# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "That will help it get in the first\n"
# 43 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "strike--a decided advantage!$"
# 44 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 45 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
# 46 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On MT. CHIMNEY's peak, there's a local\n"
# 47 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "specialty that you can buy only there.\p"
# 48 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Give it to a POKéMON--it will be elated.$"
# 49 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 50 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_EventScript_Berry::
# 51 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock
# 52 "data/maps/LavaridgeTown_Mart/scripts.pory"
	faceplayer
# 53 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 54 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 55 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart_Berry
# 56 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 57 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 58 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
# 59 "data/maps/LavaridgeTown_Mart/scripts.pory"

# 60 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.align 2
# 61 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart_Berry:
# 62 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 63 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 64 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 65 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 66 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 67 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 68 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 69 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 70 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 71 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 72 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 73 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 74 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 75 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 76 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 77 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 78 "data/maps/LavaridgeTown_Mart/scripts.pory"
	release
# 79 "data/maps/LavaridgeTown_Mart/scripts.pory"
	end
