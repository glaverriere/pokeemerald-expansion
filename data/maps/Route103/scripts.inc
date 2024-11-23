Route103_MapScripts::
	.byte 0


Route103_Jasmine_EventScript::
# 6 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route103_Jasmine_Intro, Route103_Jasmine_Defeated
# 7 "data/maps/Route103/scripts.pory"
	msgbox Route103_Jasmine_PostBattle
# 8 "data/maps/Route103/scripts.pory"
	closemessage
	return


Route103_Jasmine_Intro::
# 11 "data/maps/Route103/scripts.pory"
	.string "It's so frustrating!\p"
	.string "Those rocks further ahead block the\n"
	.string "way.$"

Route103_Jasmine_Defeated::
# 15 "data/maps/Route103/scripts.pory"
	.string "I'm sorry. I shouldn't have taken my\n"
	.string "frustration out on you...$"

Route103_Jasmine_PostBattle::
# 19 "data/maps/Route103/scripts.pory"
	.string "If only there was a way to break those\n"
	.string "rocks.$"
