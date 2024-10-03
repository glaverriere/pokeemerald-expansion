TestTown_Mart_MapScripts::
	.byte 0


TestTown_Mart_Clerk::
# 6 "data/maps/TestTown_Mart/scripts.pory"
	lock
# 7 "data/maps/TestTown_Mart/scripts.pory"
	message TestTown_Mart_Clerk_Text_0
# 8 "data/maps/TestTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/TestTown_Mart/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, TestTown_Mart_Clerk_2
# 13 "data/maps/TestTown_Mart/scripts.pory"
	pokemart TestTown_Mart_ItemsExpanded
TestTown_Mart_Clerk_1:
# 15 "data/maps/TestTown_Mart/scripts.pory"
	msgbox TestTown_Mart_Clerk_Text_1
# 16 "data/maps/TestTown_Mart/scripts.pory"
	release
	return

TestTown_Mart_Clerk_2:
# 10 "data/maps/TestTown_Mart/scripts.pory"
	pokemart TestTown_Mart_Items
	goto TestTown_Mart_Clerk_1


	.align 2
# 19 "data/maps/TestTown_Mart/scripts.pory"
TestTown_Mart_Items:
# 20 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 26 "data/maps/TestTown_Mart/scripts.pory"
TestTown_Mart_ItemsExpanded:
# 27 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 29 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 30 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 32 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 33 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 34 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 35 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 36 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 37 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 38 "data/maps/TestTown_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE

TestTown_Mart_Girl::
# 42 "data/maps/TestTown_Mart/scripts.pory"
	msgbox TestTown_Mart_Girl_Text, MSGBOX_NPC
	return


TestTown_Mart_Man::
# 50 "data/maps/TestTown_Mart/scripts.pory"
	msgbox TestTown_Mart_Man_Text, MSGBOX_NPC
	return


TestTown_Mart_Clerk_Text_0:
# 7 "data/maps/TestTown_Mart/scripts.pory"
	.string "Welcome to my store.$"

TestTown_Mart_Clerk_Text_1:
# 15 "data/maps/TestTown_Mart/scripts.pory"
	.string "Come again soon.$"

TestTown_Mart_Girl_Text::
# 45 "data/maps/TestTown_Mart/scripts.pory"
	.string "I'm currently saving for a Quick ball.\p"
	.string "They're pricier, but they make catching\n"
	.string "Pokémon so easy!$"

TestTown_Mart_Man_Text::
# 53 "data/maps/TestTown_Mart/scripts.pory"
	.string "I give my Pokémon an Oran berry to hold\n"
	.string "during battle so when its HP goes too\l"
	.string "low, it regains 10 HP.\p"
	.string "I love experimenting with different\n"
	.string "items!$"
