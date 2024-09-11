TestTown_BrendansHouse_Bedroom1_MapScripts::
	.byte 0


Bedroom_Brendan_EventScript_SetIntroFlags::
# 4 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Bedroom_Brendan_EventScript_SetIntroFlags_2
Bedroom_Brendan_EventScript_SetIntroFlags_1:
# 14 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	releaseall
	end

Bedroom_Brendan_EventScript_SetIntroFlags_2:
# 6 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 1
# 7 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 8 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 9 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 10 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 11 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 12 "data/maps/TestTown_BrendansHouse_Bedroom1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
	goto Bedroom_Brendan_EventScript_SetIntroFlags_1

