TestTown_MapScripts::
# 2 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_OnTransition
# 3 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TestTown_MaysHouse_1F_OnLoad
# 4 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TestTown/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 4, TestTown_OnFrame
	.2byte 0


TestTown_OnTransition::
# 10 "data/maps/TestTown/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 4
	goto_if_eq TestTown_OnTransition_1
	return

TestTown_OnTransition_1:
# 11 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 12 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 13 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


TestTown_OnFrame::
# 18 "data/maps/TestTown/scripts.pory"
	lockall
# 19 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 20 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 21 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_GoesToGymWithPlayer
# 22 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBrendan_GoesToGymWithMay
# 23 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 25 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 26 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
# 27 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 28 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 30 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 31 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 32 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 34 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 35 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 36 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 37 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 38 "data/maps/TestTown/scripts.pory"
	waitstate
# 39 "data/maps/TestTown/scripts.pory"
	releaseall
	return


# 42 "data/maps/TestTown/scripts.pory"
RivalMay_GoesToGymWithPlayer:
# 43 "data/maps/TestTown/scripts.pory"
	delay_8
# 44 "data/maps/TestTown/scripts.pory"
	walk_down
# 45 "data/maps/TestTown/scripts.pory"
	walk_right
# 45 "data/maps/TestTown/scripts.pory"
	walk_right
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 46 "data/maps/TestTown/scripts.pory"
	walk_down
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 47 "data/maps/TestTown/scripts.pory"
	walk_left
# 48 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 51 "data/maps/TestTown/scripts.pory"
PlayerBrendan_GoesToGymWithMay:
# 52 "data/maps/TestTown/scripts.pory"
	delay_8
# 53 "data/maps/TestTown/scripts.pory"
	walk_down
# 53 "data/maps/TestTown/scripts.pory"
	walk_down
# 54 "data/maps/TestTown/scripts.pory"
	walk_right
# 54 "data/maps/TestTown/scripts.pory"
	walk_right
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 55 "data/maps/TestTown/scripts.pory"
	walk_down
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
# 56 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 59 "data/maps/TestTown/scripts.pory"
RivalMay_EntersGym:
# 60 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym:
# 64 "data/maps/TestTown/scripts.pory"
	walk_left
# 65 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Trigger_Gym::
# 69 "data/maps/TestTown/scripts.pory"
	lockall
# 70 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Trigger_Gym_Text_0
# 71 "data/maps/TestTown/scripts.pory"
	closemessage
# 72 "data/maps/TestTown/scripts.pory"
	addobject 1
# 73 "data/maps/TestTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 74 "data/maps/TestTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 75 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_8
TestTown_Trigger_Gym_6:
# 78 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_5
TestTown_Trigger_Gym_4:
# 82 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym3
TestTown_Trigger_Gym_1:
# 84 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Rival_LetsGoTogether
# 86 "data/maps/TestTown/scripts.pory"
	closemessage
# 87 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_17
TestTown_Trigger_Gym_15:
# 90 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_14
TestTown_Trigger_Gym_11:
# 93 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 95 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 96 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
# 97 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_27
TestTown_Trigger_Gym_25:
# 100 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_24
TestTown_Trigger_Gym_23:
# 104 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym3
TestTown_Trigger_Gym_20:
# 106 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 108 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 109 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 111 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 112 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 113 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 114 "data/maps/TestTown/scripts.pory"
	waitstate
# 115 "data/maps/TestTown/scripts.pory"
	releaseall
	return

TestTown_Trigger_Gym_2:
# 76 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym1
	goto TestTown_Trigger_Gym_1

TestTown_Trigger_Gym_3:
# 79 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym2
	goto TestTown_Trigger_Gym_1

TestTown_Trigger_Gym_5:
# 78 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_3
	goto TestTown_Trigger_Gym_4

TestTown_Trigger_Gym_8:
# 75 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_2
	goto TestTown_Trigger_Gym_6

TestTown_Trigger_Gym_12:
# 88 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym1
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_13:
# 91 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym2
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_14:
# 90 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_13
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_17:
# 87 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_12
	goto TestTown_Trigger_Gym_15

TestTown_Trigger_Gym_21:
# 98 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
	goto TestTown_Trigger_Gym_20

TestTown_Trigger_Gym_22:
# 101 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
	goto TestTown_Trigger_Gym_20

TestTown_Trigger_Gym_24:
# 100 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_22
	goto TestTown_Trigger_Gym_23

TestTown_Trigger_Gym_27:
# 97 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_21
	goto TestTown_Trigger_Gym_25


# 118 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym1:
# 119 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 119 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 120 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 121 "data/maps/TestTown/scripts.pory"
	walk_down
# 122 "data/maps/TestTown/scripts.pory"
	walk_left
# 122 "data/maps/TestTown/scripts.pory"
	walk_left
# 122 "data/maps/TestTown/scripts.pory"
	walk_left
# 122 "data/maps/TestTown/scripts.pory"
	walk_left
# 122 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym2:
# 126 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 127 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 128 "data/maps/TestTown/scripts.pory"
	walk_down
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
# 129 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym3:
# 133 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 133 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 134 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 135 "data/maps/TestTown/scripts.pory"
	walk_down
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
# 136 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 143 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym1:
# 144 "data/maps/TestTown/scripts.pory"
	walk_down
# 145 "data/maps/TestTown/scripts.pory"
	walk_left
# 145 "data/maps/TestTown/scripts.pory"
	walk_left
# 146 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym2:
# 150 "data/maps/TestTown/scripts.pory"
	walk_up
# 151 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 154 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym3:
# 155 "data/maps/TestTown/scripts.pory"
	walk_right
# 156 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Trigger_Gym_Text_0:
# 70 "data/maps/TestTown/scripts.pory"
	.string "WAIT FOR ME!$"

TestTown_Rival_LetsGoTogether::
# 139 "data/maps/TestTown/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "Sorry if I scared you-I just wanted to\n"
	.string "get our first Pokémon together.\p"
	.string "Let's go inside!$"
