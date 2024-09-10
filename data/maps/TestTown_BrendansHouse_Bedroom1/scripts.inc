# 1 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"

# 2 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
TestTown_BrendansHouse_Bedroom1_MapScripts::
# 3 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	.byte 0
# 4 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"

# 5 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
Bedroom_EventScript_SetIntroFlags::
# 6 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	lockall
# 7 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	checkplayergender
# 8 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Bedroom_EventScript_SetIntroFlagsMale
# 9 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	end
# 10 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"

# 11 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
Bedroom_EventScript_SetIntroFlagsMale::
# 12 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 1
# 13 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 14 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 15 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 16 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 17 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 18 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 19 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	releaseall
# 20 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	end
