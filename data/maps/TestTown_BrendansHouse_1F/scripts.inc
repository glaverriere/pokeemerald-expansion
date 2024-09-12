TestTown_BrendansHouse_1F_MapScripts::
# 2 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 2, TestTown_BrendansHouse_1F_OnFrame
	.2byte 0


TestTown_BrendansHouse_1F_OnFrame::
# 8 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	lockall
# 9 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 10 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 11 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 12 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 13 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetsUp
# 15 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 17 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetToPlayer
# 18 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	msgbox Mom_GoGetMay
# 20 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 21 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	delay 20
# 22 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGoesToSink
# 23 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 3
# 25 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


TestTown_BrendansHouse_Mom::
# 29 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	lockall
# 30 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_BrendansHouse_Mom_2
TestTown_BrendansHouse_Mom_1:
# 34 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

TestTown_BrendansHouse_Mom_2:
# 31 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 32 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	msgbox Mom_MayIsNextDoor
	goto TestTown_BrendansHouse_Mom_1


TestTown_MaysHouse_Azurill::
# 38 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	lockall
# 39 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 40 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitse
# 41 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 42 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 43 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


# 46 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGetsUp:
# 47 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 48 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 48 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 48 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGetToPlayer:
# 52 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 53 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 53 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 56 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGoesToSink:
# 57 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 59 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

Mom_GoGetMay::
# 62 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Hi Sweetie! I am so excited for\n"
	.string "you, I can barely stay in place!\p"
	.string "May is also getting here first Pokémon\n"
	.string "from Dad today.\p"
	.string "You should fetch her so you can all go\n"
	.string "together to Dad's gym.\p"
	.string "Also, don't forget to come see me\n"
	.string "before your big adventure begins.\p"
	.string "Have fun!$"

Mom_MayIsNextDoor::
# 66 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	.string "You should go next door to see May.\p"
	.string "Tell her mom I said hello!$"
