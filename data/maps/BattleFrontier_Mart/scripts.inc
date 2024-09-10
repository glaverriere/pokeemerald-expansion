# 1 "data/maps/BattleFrontier_Mart/scripts.pory"

# 2 "data/maps/BattleFrontier_Mart/scripts.pory"
.set LOCALID_OLD_WOMAN, 2
# 3 "data/maps/BattleFrontier_Mart/scripts.pory"

# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_MapScripts::
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	.byte 0
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"

# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Clerk::
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 11 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"

# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 26 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 27 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 28 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 30 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 31 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 32 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 33 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NONE
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"

# 38 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldMan::
# 39 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
# 40 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_Mart/scripts.pory"

# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_OldWoman::
# 43 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 44 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, Common_Movement_FaceDown
# 45 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 48 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 49 "data/maps/BattleFrontier_Mart/scripts.pory"

# 50 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Boy::
# 51 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
# 52 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 53 "data/maps/BattleFrontier_Mart/scripts.pory"

# 54 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ChaperonGrandson:
# 55 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
# 56 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "grandson.\p"
# 57 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "But since we're here, we thought\n"
# 58 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "we should get some souvenirs.$"
# 59 "data/maps/BattleFrontier_Mart/scripts.pory"

# 60 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_ProteinMakeNiceGift:
# 61 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
# 62 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Wouldn't this make a nice gift?\p"
# 63 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It's…PRO…TE…IN?\n"
# 64 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "It sounds delicious, doesn't it?$"
# 65 "data/maps/BattleFrontier_Mart/scripts.pory"

# 66 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Text_FacilitiesDontAllowItems:
# 67 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
# 68 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "facilities don't allow the use of items\l"
# 69 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "during battles.\p"
# 70 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "That rule makes things tougher than\n"
# 71 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "they already are!$"
# 72 "data/maps/BattleFrontier_Mart/scripts.pory"

# 73 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_EventScript_Berry::
# 74 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 75 "data/maps/BattleFrontier_Mart/scripts.pory"
	faceplayer
# 76 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 77 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 78 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart_Berry
# 79 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 81 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_Mart/scripts.pory"

# 83 "data/maps/BattleFrontier_Mart/scripts.pory"
	.align 2
# 84 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart_Berry:
# 85 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 86 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 87 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 88 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 89 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 90 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 91 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 92 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 93 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 94 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 95 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 96 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 97 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 98 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 99 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 100 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_NONE
# 101 "data/maps/BattleFrontier_Mart/scripts.pory"
	release
# 102 "data/maps/BattleFrontier_Mart/scripts.pory"
	end
