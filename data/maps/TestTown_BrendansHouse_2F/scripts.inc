TestTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 1, TestTown_OnFrame
	.2byte 0


TestTown_OnFrame::
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
	delay 10
# 15 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement 1, Movement_DadToPlayer
# 16 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	msgbox Dad_MeetMeAtGym
# 18 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 19 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	applymovement 1, Movement_DadExits2F
# 20 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	playse SE_EXIT
# 22 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 23 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 3
# 24 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	releaseall
	return


# 27 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadEnters2F:
# 28 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 29 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
	step_end

# 32 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadExits2F:
# 33 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 34 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 35 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 36 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
Movement_DadToPlayer:
# 40 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 40 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

Dad_MeetMeAtGym::
# 43 "data/maps/TestTown_BrendansHouse_2F/scripts.pory"
	.string "Good morning, {PLAYER}. Meet me at my\n"
	.string "gym later.$"
