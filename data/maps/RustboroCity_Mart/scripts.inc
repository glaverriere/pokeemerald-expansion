RustboroCity_Mart_MapScripts::
	.byte 0


RustboroCity_Mart_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	message RustboroCity_Mart_Clerk_Text_0
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Items
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Clerk_Text_1
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	release
	return


	.align 2
# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Items:
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE

# 37 "data/maps/RustboroCity_Mart/scripts.pory"

# 38 "data/maps/RustboroCity_Mart/scripts.pory"

# 39 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Mart/scripts.pory"

# 43 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	end

RustboroCity_Mart_Clerk_Text_0:
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Welcome to my store.$"

RustboroCity_Mart_Clerk_Text_1:
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Come again soon.$"

RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish::
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an Escape Rope in case I\n"
	.string "get stuck in a cave.\p"
	.string "If so, I'll use it to get back to the\n"
	.string "entrance in no time.\p"
	.string "You're never too careful!$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase::
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Healing items are useful even outside\n"
	.string "of combat.\p"
	.string "The other day, I used a Paralyz Heal on\n"
	.string "my Silcoon tu cure its paralysis.\p"
	.string "It saved me a trip to the Pokémon\n"
	.string "Center.$"
