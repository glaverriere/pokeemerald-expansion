RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
	.byte 0


RustboroCity_OnTransition::
# 6 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
	return


RustboroCity_EventScript_GymGuide::
# 10 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymGuide, MSGBOX_NPC
	return


RustboroCity_Text_GymGuide::
# 13 "data/maps/RustboroCity/scripts.pory"
	.string "You're here to challenge Roxanne?\p"
	.string "Sorry, but the gym is temporarily closed\n"
	.string "because Roxanne is currently tutoring\l"
	.string "at the Pokémon school.\p"
	.string "Please come back later!$"
