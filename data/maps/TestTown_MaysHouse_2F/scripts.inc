TestTown_MaysHouse_2F_MapScripts::
# 2 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 1, TestTown_MaysHouse_2F_OnFrame
	.2byte 0


TestTown_MaysHouse_2F_OnFrame::
# 8 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	lockall
# 9 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	playse SE_EXIT
# 10 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	delay 10
# 11 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	addobject 1
# 12 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	applymovement 1, Movement_DadEnters2F_May
# 13 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	delay 20
# 15 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 16 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	applymovement 1, Movement_DadToPlayer_May
# 17 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	msgbox Dad_MeetMeAtGym_May
# 19 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	closemessage
# 20 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	delay 20
# 21 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	applymovement 1, Movement_DadExits2F_May
# 22 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	playse SE_EXIT
# 24 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	removeobject 1
# 25 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 2
# 26 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	releaseall
	return


# 29 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
Movement_DadEnters2F_May:
# 30 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_down
	step_end

# 33 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
Movement_DadExits2F_May:
# 34 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 35 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_left
# 35 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_left
# 35 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_left
# 35 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_left
# 35 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_left
# 36 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 37 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_up
	step_end

# 40 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
Movement_DadToPlayer_May:
# 41 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 42 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_right
# 42 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	walk_right
	step_end

Dad_MeetMeAtGym_May::
# 45 "data/maps/TestTown_MaysHouse_2F/scripts.pory"
	.string "Dad: Good morning, {PLAYER}. Today is\n"
	.string "your big day, isn't it? That's right!\p"
	.string "Today is the day that you're gonna get\n"
	.string "your very first Pokémon.\p"
	.string "Meet me at the Pokémon gym. We will do\n"
	.string "this the official way.\p"
	.string "See you later!$"
