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


RustboroCity_EventScript_GymSign::
# 18 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	return


RustboroCity_EventScript_Route105Sign::
# 26 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Route105Sign, MSGBOX_SIGN
	return


RustboroCity_EventScript_Route103Sign::
# 34 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Route103Sign, MSGBOX_SIGN
	return


RustboroCity_EventScript_TrainerSchoolSign::
# 42 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainerSchoolSign, MSGBOX_SIGN
	return


RustboroCity_EventScript_CitySign::
# 50 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	return


RustboroCity_Text_GymGuide::
# 13 "data/maps/RustboroCity/scripts.pory"
	.string "You're here to challenge Roxanne?\p"
	.string "Sorry, but the gym is temporarily closed\n"
	.string "because Roxanne is currently tutoring\l"
	.string "at the Pokémon school.\p"
	.string "Please come back later!$"

RustboroCity_Text_GymSign::
# 21 "data/maps/RustboroCity/scripts.pory"
	.string "Bay Habor City Pokémon gym\n"
	.string "Leader: Roxanne\l"
	.string "“The competition trembles before her!”$"

RustboroCity_Text_Route105Sign::
# 29 "data/maps/RustboroCity/scripts.pory"
	.string "{RIGHT_ARROW} Shade forest\l"
	.string "{DOWN_ARROW} Route 105$"

RustboroCity_Text_Route103Sign::
# 37 "data/maps/RustboroCity/scripts.pory"
	.string "{UP_ARROW} Route 103\l"
	.string "{LEFT_ARROW} Route 125$"

RustboroCity_Text_TrainerSchoolSign::
# 45 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School$"

RustboroCity_Text_CitySign::
# 53 "data/maps/RustboroCity/scripts.pory"
	.string "Bay Harbor City\n"
	.string "Enjoy the salty ocean breeze!$"
