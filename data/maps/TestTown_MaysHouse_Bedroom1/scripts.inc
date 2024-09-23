TestTown_MaysHouse_Bedroom1_MapScripts::
# 2 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, May_AllowRunning
	.byte 0


May_AllowRunning::
# 6 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 0
	goto_if_eq May_AllowRunning_1
	return

May_AllowRunning_1:
# 7 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 8 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 1
# 9 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_BRENDANS_HOUSE_MOM
# 10 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	clearflag FLAG_HIDE_TEST_TOWN_MAYS_HOUSE_MOM
# 11 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 12 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_BRENDANS_HOUSE
# 13 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	clearflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 14 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAYS_HOUSE
# 15 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 16 "data/maps/TestTown_MaysHouse_Bedroom1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
	return

