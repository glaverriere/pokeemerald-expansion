TestTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestTown_MaysHouse_1F_MeetRival
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
	releaseall
	return


# 48 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetsUp_May:
# 49 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 50 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 50 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 50 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetToPlayer_May:
# 54 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 55 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 55 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 58 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGoesToSink_May:
# 59 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 60 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_MaysHouse_1F_MeetRival::
# 73 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm 3, 1, 5
# 74 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	return


TestTown_MaysHouse_1F_OnFrame2::
# 78 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 80 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalMomToMay_BeSafe
# 81 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 82 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 83 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 84 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 85 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 87 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 91 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 92 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ApproachesPlayer
# 93 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalToPlayer_CantWaitLetsGo
# 95 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 96 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 97 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 98 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 99 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Brendan_ExitsMaysHouse
# 100 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ExitsMaysHouse
# 101 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 4
# 103 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 106 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ApproachesPlayer:
# 107 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
# 107 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Brendan_ExitsMaysHouse:
# 111 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_down
# 112 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay_16
# 113 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_down
	step_end

# 116 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ExitsMaysHouse:
# 117 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 119 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_down
# 120 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
# 121 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_down
	step_end

Mom_GoGetBrendan::
# 64 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
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
# 68 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "You should go next door to see Brendan.\p"
	.string "Tell his mom I said hello!$"

RivalMomToMay_BeSafe::
# 124 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May's mom: Please, be safe out there.$"

RivalToPlayer_CantWaitLetsGo::
# 128 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "I can't wait anymore to meet my first\n"
	.string "Pokémon!\p"
	.string "I've been waiting for this day for so\n"
	.string "long!\p"
	.string "Let's not waste another second and\n"
	.string "head straight to the gym!$"
