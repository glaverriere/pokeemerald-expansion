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
	applymovement 1, Movement_MomGoesToSink
# 22 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 3
# 24 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


TestTown_BrendansHouse_Mom::
# 28 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	lockall
# 29 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 30 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_BrendansHouse_Mom_2
# 34 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	msgbox TestTown_BrendansHouse_Mom_Text_0
TestTown_BrendansHouse_Mom_1:
# 36 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return

TestTown_BrendansHouse_Mom_2:
# 31 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	msgbox Mom_MayIsNextDoor
	goto TestTown_BrendansHouse_Mom_1


TestTown_MaysHouse_Azurill::
# 40 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 42 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitse
# 43 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 44 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	waitmoncry
# 45 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 46 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	releaseall
	return


# 49 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGetsUp:
# 50 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 50 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 50 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGetToPlayer:
# 54 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 54 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
Movement_MomGoesToSink:
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

TestTown_BrendansHouse_Mom_Text_0:
# 34 "data/maps/TestTown_BrendansHouse_1F/scripts.pory"
	.string "Yo!$"

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
