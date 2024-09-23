TestTown_BrendansHouse_Bedroom1_MapScripts::
# 2 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Brendan_AllowRunning
	.byte 0


Brendan_AllowRunning::
# 6 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 0
	goto_if_eq Brendan_AllowRunning_1
	return

Brendan_AllowRunning_1:
# 7 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 8 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 1
# 9 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MAYS_HOUSE_MOM
# 10 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	clearflag FLAG_HIDE_TEST_TOWN_BRENDANS_HOUSE_MOM
# 11 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 12 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 13 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_ASSISTANT
# 14 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDANS_HOUSE
# 15 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	return

