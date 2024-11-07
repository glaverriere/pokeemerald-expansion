GladehavenTown_Mart_MapScripts::
	.byte 0


GladehavenTown_Mart_Clerk::
# 6 "data/maps/GladehavenTown_Mart/scripts.pory"
	lock
# 7 "data/maps/GladehavenTown_Mart/scripts.pory"
	message GladehavenTown_Mart_Clerk_Text_0
# 8 "data/maps/GladehavenTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/GladehavenTown_Mart/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, GladehavenTown_Mart_Clerk_2
# 13 "data/maps/GladehavenTown_Mart/scripts.pory"
	pokemart GladehavenTown_Mart_ItemsExpanded
GladehavenTown_Mart_Clerk_1:
# 15 "data/maps/GladehavenTown_Mart/scripts.pory"
	msgbox GladehavenTown_Mart_Clerk_Text_1
# 16 "data/maps/GladehavenTown_Mart/scripts.pory"
	release
	return

GladehavenTown_Mart_Clerk_2:
# 10 "data/maps/GladehavenTown_Mart/scripts.pory"
	pokemart GladehavenTown_Mart_Items
	goto GladehavenTown_Mart_Clerk_1


	.align 2
# 19 "data/maps/GladehavenTown_Mart/scripts.pory"
GladehavenTown_Mart_Items:
# 20 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 21 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 26 "data/maps/GladehavenTown_Mart/scripts.pory"
GladehavenTown_Mart_ItemsExpanded:
# 27 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 29 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 30 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 31 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 32 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 33 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 34 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 35 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 36 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 37 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 38 "data/maps/GladehavenTown_Mart/scripts.pory"
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_NONE

GladehavenTown_Mart_EventScript_Lass::
# 42 "data/maps/GladehavenTown_Mart/scripts.pory"
	msgbox GladehavenTown_Mart_Text_Lass, MSGBOX_NPC
	return


GladehavenTown_Mart_EventScript_Hiker::
# 50 "data/maps/GladehavenTown_Mart/scripts.pory"
	msgbox GladehavenTown_Mart_Text_Hiker, MSGBOX_NPC
	return


GladehavenTown_Mart_EventScript_Girl::
# 58 "data/maps/GladehavenTown_Mart/scripts.pory"
	msgbox GladehavenTown_Mart_Text_Girl, MSGBOX_NPC
	return


GladehavenTown_Mart_Clerk_Text_0:
# 7 "data/maps/GladehavenTown_Mart/scripts.pory"
	.string "Welcome to my store.$"

GladehavenTown_Mart_Clerk_Text_1:
# 15 "data/maps/GladehavenTown_Mart/scripts.pory"
	.string "Come again soon.$"

GladehavenTown_Mart_Text_Lass::
# 45 "data/maps/GladehavenTown_Mart/scripts.pory"
	.string "...\p"
	.string "Oh sorry! I didn't see you there.\p"
	.string "I was so concentrated filling this\n"
	.string "application to work here.$"

GladehavenTown_Mart_Text_Hiker::
# 53 "data/maps/GladehavenTown_Mart/scripts.pory"
	.string "I'm browsing healing items. It can be\n"
	.string "handy to have them while on a trek!$"

GladehavenTown_Mart_Text_Girl::
# 61 "data/maps/GladehavenTown_Mart/scripts.pory"
	.string "I love shopping so much!$"
