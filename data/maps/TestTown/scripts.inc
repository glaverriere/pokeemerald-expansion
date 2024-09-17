TestTown_MapScripts::
# 2 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_OnTransition
# 3 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestTown_MaysHouse_1F_OnLoad
# 4 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TestTown/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 4, TestTown_OnFrame
	.2byte 0


TestTown_OnTransition::
# 10 "data/maps/TestTown/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 4
	goto_if_eq TestTown_OnTransition_1
	return

TestTown_OnTransition_1:
# 11 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 12 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 13 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


TestTown_OnFrame::
# 18 "data/maps/TestTown/scripts.pory"
	lockall
# 19 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 20 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_GoesToGymWithPlayer
# 22 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBrendan_GoesToGymWithMay
# 23 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 25 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 26 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
# 27 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 28 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 30 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 31 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 32 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 34 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 35 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 36 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 37 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 38 "data/maps/TestTown/scripts.pory"
	waitstate
# 39 "data/maps/TestTown/scripts.pory"
	releaseall
	return


# 42 "data/maps/TestTown/scripts.pory"
RivalMay_GoesToGymWithPlayer:
# 43 "data/maps/TestTown/scripts.pory"
	delay_8
# 44 "data/maps/TestTown/scripts.pory"
	walk_down
# 45 "data/maps/TestTown/scripts.pory"
	walk_right
# 45 "data/maps/TestTown/scripts.pory"
	walk_right
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 48 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 51 "data/maps/TestTown/scripts.pory"
PlayerBrendan_GoesToGymWithMay:
# 52 "data/maps/TestTown/scripts.pory"
	delay_8
# 53 "data/maps/TestTown/scripts.pory"
	walk_down
# 53 "data/maps/TestTown/scripts.pory"
	walk_down
# 54 "data/maps/TestTown/scripts.pory"
	walk_right
# 54 "data/maps/TestTown/scripts.pory"
	walk_right
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 59 "data/maps/TestTown/scripts.pory"
RivalMay_EntersGym:
# 60 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym:
# 64 "data/maps/TestTown/scripts.pory"
	walk_left
# 65 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end
