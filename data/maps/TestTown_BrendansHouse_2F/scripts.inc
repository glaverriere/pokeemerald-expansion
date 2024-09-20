TestTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 1, TestTown_BrendansHouse_2F_OnFrame
	.2byte 0


TestTown_BrendansHouse_2F_OnFrame::
# 8 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	lockall
# 9 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	playse SE_EXIT
# 10 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 11 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	addobject 1
# 12 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement 1, Movement_DadEnters2F
# 13 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	delay 32
# 15 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 16 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement 1, Movement_DadToPlayer
# 17 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	msgbox Dad_MeetMeAtGym
# 19 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 20 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement 1, Movement_DadExits2F
# 21 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 24 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 2
# 25 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


# 28 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadEnters2F:
# 29 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadExits2F:
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadToPlayer:
# 38 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 38 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

Dad_MeetMeAtGym::
# 41 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	.string "Dad: Good morning, {PLAYER}. Today is\n"
	.string "your big day, isn't it? That's right!\p"
	.string "Today is the day that you're gonna get\n"
	.string "your very first Pokémon.\p"
	.string "Meet me at the Pokémon gym. We will do\n"
	.string "this the official way.\p"
	.string "See you later!$"
