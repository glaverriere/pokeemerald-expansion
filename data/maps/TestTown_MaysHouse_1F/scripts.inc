TestTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 2, TestTown_MaysHouse_1F_OnFrame
# 4 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 3, TestTown_MaysHouse_1F_OnFrame2
	.2byte 0


TestTown_MaysHouse_1F_OnFrame::
# 9 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 10 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 11 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 12 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 14 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetsUp_May
# 16 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 18 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetToPlayer_May
# 19 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox Mom_GoGetBrendan
# 21 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 22 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 20
# 23 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGoesToSink_May
# 24 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 3
# 26 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


TestTown_MaysHouse_Mom::
# 30 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 31 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_MaysHouse_Mom_2
TestTown_MaysHouse_Mom_1:
# 35 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

TestTown_MaysHouse_Mom_2:
# 32 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 33 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox Mom_BrendanIsNextDoor
	goto TestTown_MaysHouse_Mom_1


TestTown_MaysHouse_Skitty::
# 39 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 40 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 41 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitse
# 42 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 43 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmoncry
# 44 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 47 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetsUp_May:
# 48 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 49 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 49 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 49 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 52 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetToPlayer_May:
# 53 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 54 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 54 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 57 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGoesToSink_May:
# 58 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_MaysHouse_1F_OnFrame2::
# 72 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 73 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 4
# 74 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


Mom_GoGetBrendan::
# 63 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "Mom: Hi Sweetie! I am so excited for\n"
	.string "you, I can barely stay in place!\p"
	.string "Brendan is also getting his first\n"
	.string "Pokémon from Dad today.\p"
	.string "You should fetch him so you can all go\n"
	.string "together to Dad's gym.\p"
	.string "Also, don't forget to come see me\n"
	.string "before your big adventure begins.\p"
	.string "Have fun!$"

Mom_BrendanIsNextDoor::
# 67 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "You should go next door to see Brendan.\p"
	.string "Tell his mom I said hello!$"
