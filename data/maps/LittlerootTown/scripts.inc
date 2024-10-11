LittlerootTown_MapScripts::
# 2 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0


LittlerootTown_OnTransition::
# 6 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_GLADEHAVEN_TOWN
	return


GladehavenTown_EventScript_BirchsLabSign::
# 10 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_ProfBirchsLab, MSGBOX_SIGN
	return


GladehavenTown_EventScript_TownSign::
# 17 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_TownSign, MSGBOX_SIGN
	return


GladehavenTown_EventScript_Woman::
# 24 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_Woman, MSGBOX_NPC
	return


GladehavenTown_Text_ProfBirchsLab::
# 12 "data/maps/LittlerootTown/scripts.pory"
	.string "Professor Birch's Pokémon lab.$"

GladehavenTown_Text_TownSign::
# 19 "data/maps/LittlerootTown/scripts.pory"
	.string "Gladehaven town\n"
	.string "The home of Pokémon research.$"

GladehavenTown_Text_Woman::
# 27 "data/maps/LittlerootTown/scripts.pory"
	.string "Professor Birch is really passionate\n"
	.string "about researching Pokémon!\p"
	.string "Also, I heard he is very generous with\n"
	.string "young trainers.$"
