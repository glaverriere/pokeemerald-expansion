TestTown_House1_MapScripts::
	.byte 0


TestTown_House1_Dude::
# 6 "data/maps/TestTown_House1/scripts.pory"
	lockall
# 7 "data/maps/TestTown_House1/scripts.pory"
	faceplayer
# 8 "data/maps/TestTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LIGHT_BALL, TestTown_House1_Dude_2
# 15 "data/maps/TestTown_House1/scripts.pory"
	msgbox TestTown_House1_Dude_Text_1, MSGBOX_NPC
TestTown_House1_Dude_1:
# 17 "data/maps/TestTown_House1/scripts.pory"
	releaseall
	return

TestTown_House1_Dude_2:
# 9 "data/maps/TestTown_House1/scripts.pory"
	msgbox TestTown_House1_Dude_Evolved
# 10 "data/maps/TestTown_House1/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 11 "data/maps/TestTown_House1/scripts.pory"
	msgbox TestTown_House1_Dude_Text_0, MSGBOX_NPC
# 12 "data/maps/TestTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_LIGHT_BALL
	goto TestTown_House1_Dude_1


TestTown_House1_Dude_Text_0:
# 11 "data/maps/TestTown_House1/scripts.pory"
	.string "Maybe it will be useful to you.$"

TestTown_House1_Dude_Text_1:
# 15 "data/maps/TestTown_House1/scripts.pory"
	.string "Did you get to use the light ball?$"

TestTown_House1_Dude_Evolved::
# 20 "data/maps/TestTown_House1/scripts.pory"
	.string "Hey kiddo!\p"
	.string "Since my Pikachu evolved into a Raichu,\n"
	.string "I don't need this anymore.\p"
	.string "Please, take it!$"
