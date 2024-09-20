TestTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestTown_MaysHouse_1F_OnLoad
# 3 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 2, TestTown_MaysHouse_1F_OnFrame
# 5 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 3, TestTown_MaysHouse_1F_OnFrame2
	.2byte 0


TestTown_MaysHouse_1F_OnFrame::
# 10 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 11 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 12 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 13 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 15 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetsUp_May
# 17 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGetToPlayer_May
# 20 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox Mom_GoGetBrendan
# 22 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 23 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 20
# 24 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 1, Movement_MomGoesToSink_May
# 25 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 3
# 27 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


TestTown_MaysHouse_Mom::
# 31 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 32 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_MaysHouse_Mom_2
TestTown_MaysHouse_Mom_1:
# 36 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

TestTown_MaysHouse_Mom_2:
# 33 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 34 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox Mom_BrendanIsNextDoor
	goto TestTown_MaysHouse_Mom_1


TestTown_MaysHouse_Skitty::
# 40 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 42 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitse
# 43 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 44 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmoncry
# 45 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 46 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 49 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetsUp_May:
# 50 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 51 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 51 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 51 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetToPlayer_May:
# 55 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 56 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 56 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGoesToSink_May:
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 62 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_MaysHouse_1F_OnLoad::
# 74 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_MaysHouse_1F_OnLoad_1
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm 3, 8, 7
# 80 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	return

TestTown_MaysHouse_1F_OnLoad_1:
# 75 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm 3, 1, 5
# 76 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	return


TestTown_MaysHouse_1F_OnFrame2::
# 85 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 86 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 87 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalMomToMay_BeSafe
# 88 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 89 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 90 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 92 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 94 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 96 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 99 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ApproachesPlayer
# 100 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalToPlayer_CantWaitLetsGo
# 102 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 103 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 104 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 105 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 106 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 107 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ExitsMaysHouse
# 108 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	removeobject 4
# 110 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 4
# 111 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAYS_HOUSE
# 112 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	warp MAP_TEST_TOWN, 10, 8
# 113 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitstate
# 114 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 117 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ApproachesPlayer:
# 118 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
# 118 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

# 121 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ExitsMaysHouse:
# 122 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 123 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 124 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_down
# 125 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

Mom_GoGetBrendan::
# 65 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
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
# 69 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "You should go next door to see Brendan.\p"
	.string "Tell his mom I said hello!$"

RivalMomToMay_BeSafe::
# 128 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May's mom: Please, be safe out there.$"

RivalToPlayer_CantWaitLetsGo::
# 132 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "I can't wait anymore to meet my first\n"
	.string "Pokémon!\p"
	.string "I've been waiting for this day for so\n"
	.string "long!\p"
	.string "Let's not waste another second and\n"
	.string "head straight to the gym!$"
