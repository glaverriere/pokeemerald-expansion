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
	applymovement 1, Movement_MomGoesToSink_May
# 24 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 26 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


TestTown_MaysHouse_Mom::
# 30 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 31 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 32 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 5
	goto_if_eq TestTown_MaysHouse_Mom_2
	checkitem ITEM_OLD_ROD
# 0 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TestTown_MaysHouse_Mom_3
# 42 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox TestTown_Mom_IhopeYoureWell_May
TestTown_MaysHouse_Mom_1:
# 44 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 45 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return

TestTown_MaysHouse_Mom_2:
# 33 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox Mom_BrendanIsNextDoor
	goto TestTown_MaysHouse_Mom_1

TestTown_MaysHouse_Mom_3:
# 36 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox TestTown_Text_GiveDadsRod_May
# 37 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_OLD_ROD
# 38 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 39 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox TestTown_Text_ThrowInFishingAdvice_May
	goto TestTown_MaysHouse_Mom_1


TestTown_MaysHouse_Skitty::
# 61 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 62 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 63 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitse
# 64 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 65 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmoncry
# 66 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 67 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 70 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetsUp_May:
# 71 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 71 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
# 71 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 74 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGetToPlayer_May:
# 75 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 75 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Movement_MomGoesToSink_May:
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 79 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_right
# 80 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_MaysHouse_1F_OnLoad::
# 92 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 3
	goto_if_eq TestTown_MaysHouse_1F_OnLoad_1
# 97 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm 3, 8, 7
# 98 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	return

TestTown_MaysHouse_1F_OnLoad_1:
# 93 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm 3, 1, 5
# 94 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
	return


TestTown_MaysHouse_1F_OnFrame2::
# 103 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	lockall
# 104 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 105 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalMomToMay_BeSafe
# 106 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 107 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 108 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 109 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 110 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_Delay48
# 112 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 114 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 117 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ApproachesPlayer
# 118 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	msgbox RivalToPlayer_CantWaitLetsGo
# 120 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	closemessage
# 121 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	delay 10
# 122 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 123 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 124 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 125 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	applymovement 4, Rival_ExitsMaysHouse
# 126 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	removeobject 4
# 128 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 4
# 129 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAYS_HOUSE
# 130 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	warp MAP_TEST_TOWN, 10, 8
# 131 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	waitstate
# 132 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	releaseall
	return


# 135 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ApproachesPlayer:
# 136 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
# 136 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
Rival_ExitsMaysHouse:
# 140 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_left
# 141 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	walk_down
	step_end

TestTown_Text_GiveDadsRod_May::
# 48 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I love your new companion-It looks full\n"
	.string "of energy!\p"
	.string "I found Dad's old fishing rod in a box\n"
	.string "upstairs.\p"
	.string "I don't think he would mind me giving it\n"
	.string "to you.$"

TestTown_Text_ThrowInFishingAdvice_May::
# 52 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "Here's how it works.\p"
	.string "First, you want to face the water, then\n"
	.string "use the rod.\p"
	.string "If you get a bite, pull on the rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your rod\l"
	.string "to haul them in.\p"
	.string "Please be careful.\p"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

TestTown_Mom_IhopeYoureWell_May::
# 56 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I hope your adventure is everything\n"
	.string "you had hoped it would be.$"

Mom_GoGetBrendan::
# 83 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
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
# 87 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "You should go next door to see Brendan.\p"
	.string "Tell his mom I said hello!$"

RivalMomToMay_BeSafe::
# 144 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May's mom: Please, be safe out there.$"

RivalToPlayer_CantWaitLetsGo::
# 148 "data/maps/TestTown_MaysHouse_1F/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "I can't wait anymore to meet my first\n"
	.string "Pokémon!\p"
	.string "I've been waiting for this day for so\n"
	.string "long!\p"
	.string "Let's not waste another second and\n"
	.string "head straight to the gym!$"
