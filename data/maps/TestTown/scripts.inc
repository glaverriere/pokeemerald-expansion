TestTown_MapScripts::
# 2 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_OnTransition
# 3 "data/maps/TestTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestTown/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 4, TestTown_OnFrame
# 5 "data/maps/TestTown/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 6, TestTown_OnFrame2
	.2byte 0


TestTown_OnTransition::
# 10 "data/maps/TestTown/scripts.pory"
	setflag FLAG_VISITED_TEST_TOWN
# 11 "data/maps/TestTown/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 4
	goto_if_eq TestTown_OnTransition_1
# 16 "data/maps/TestTown/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 6
	goto_if_eq TestTown_OnTransition_2
	return

TestTown_OnTransition_1:
# 12 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 13 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 14 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return

TestTown_OnTransition_2:
# 17 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 18 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 19 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


TestTown_OnFrame::
# 24 "data/maps/TestTown/scripts.pory"
	lockall
# 25 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_GoesToGymWithPlayer
# 28 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBrendan_GoesToGymWithMay
# 29 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 31 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 32 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
# 33 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 34 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 36 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 37 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 38 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 39 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 41 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 42 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 43 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 44 "data/maps/TestTown/scripts.pory"
	waitstate
# 45 "data/maps/TestTown/scripts.pory"
	releaseall
	return


TestTown_OnFrame2::
# 49 "data/maps/TestTown/scripts.pory"
	lockall
# 50 "data/maps/TestTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 51 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalBrendan_GoesToGymWithPlayer
# 53 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMay_GoesToGymWithBrendan
# 54 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 56 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 57 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalMay_EntersGym
# 58 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 59 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/TestTown/scripts.pory"
	hideobjectat 2, MAP_TEST_TOWN
# 61 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 62 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 66 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 67 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 68 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 69 "data/maps/TestTown/scripts.pory"
	waitstate
# 70 "data/maps/TestTown/scripts.pory"
	releaseall
	return


# 73 "data/maps/TestTown/scripts.pory"
RivalMay_GoesToGymWithPlayer:
# 74 "data/maps/TestTown/scripts.pory"
	delay_8
# 75 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_right
# 76 "data/maps/TestTown/scripts.pory"
	walk_right
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_down
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_left
# 79 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 82 "data/maps/TestTown/scripts.pory"
RivalBrendan_GoesToGymWithPlayer:
# 83 "data/maps/TestTown/scripts.pory"
	delay_8
# 84 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_right
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_down
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_left
# 88 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 91 "data/maps/TestTown/scripts.pory"
PlayerBrendan_GoesToGymWithMay:
# 92 "data/maps/TestTown/scripts.pory"
	delay_8
# 93 "data/maps/TestTown/scripts.pory"
	walk_down
# 93 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_right
# 94 "data/maps/TestTown/scripts.pory"
	walk_right
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_down
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
# 96 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 99 "data/maps/TestTown/scripts.pory"
PlayerMay_GoesToGymWithBrendan:
# 100 "data/maps/TestTown/scripts.pory"
	delay_8
# 101 "data/maps/TestTown/scripts.pory"
	walk_down
# 101 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_right
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_down
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
# 104 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/TestTown/scripts.pory"
RivalMay_EntersGym:
# 108 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym:
# 112 "data/maps/TestTown/scripts.pory"
	walk_left
# 113 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Trigger_Gym::
# 117 "data/maps/TestTown/scripts.pory"
	lockall
# 118 "data/maps/TestTown/scripts.pory"
	checkplayergender
# 119 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Trigger_Gym_Text_0
# 120 "data/maps/TestTown/scripts.pory"
	closemessage
# 121 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_2
# 125 "data/maps/TestTown/scripts.pory"
	addobject 2
# 126 "data/maps/TestTown/scripts.pory"
	setobjectxy 2, 10, 10
TestTown_Trigger_Gym_1:
# 128 "data/maps/TestTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 129 "data/maps/TestTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 130 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_33
TestTown_Trigger_Gym_29:
# 133 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_28
TestTown_Trigger_Gym_24:
# 136 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_23
TestTown_Trigger_Gym_19:
# 139 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_18
TestTown_Trigger_Gym_14:
# 142 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq TestTown_Trigger_Gym_13
TestTown_Trigger_Gym_11:
# 146 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym3
TestTown_Trigger_Gym_5:
# 148 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_38
# 153 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_RivalBrendan_LetsGoTogether
TestTown_Trigger_Gym_37:
# 155 "data/maps/TestTown/scripts.pory"
	closemessage
# 156 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_69
TestTown_Trigger_Gym_65:
# 160 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_64
TestTown_Trigger_Gym_60:
# 164 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_59
TestTown_Trigger_Gym_55:
# 168 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_54
TestTown_Trigger_Gym_50:
# 172 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq TestTown_Trigger_Gym_49
TestTown_Trigger_Gym_47:
# 176 "data/maps/TestTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
TestTown_Trigger_Gym_41:
# 178 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 180 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 181 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_74
# 185 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalMay_EntersGym
TestTown_Trigger_Gym_73:
# 187 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_84
TestTown_Trigger_Gym_82:
# 190 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_81
TestTown_Trigger_Gym_80:
# 194 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym3
TestTown_Trigger_Gym_77:
# 196 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_88
# 202 "data/maps/TestTown/scripts.pory"
	hideobjectat 2, MAP_TEST_TOWN
# 203 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
TestTown_Trigger_Gym_87:
# 205 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 206 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 208 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 209 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 210 "data/maps/TestTown/scripts.pory"
	waitstate
# 211 "data/maps/TestTown/scripts.pory"
	releaseall
	return

TestTown_Trigger_Gym_2:
# 122 "data/maps/TestTown/scripts.pory"
	addobject 1
	goto TestTown_Trigger_Gym_1

TestTown_Trigger_Gym_6:
# 131 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym1
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_7:
# 134 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym1
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_8:
# 137 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym2
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_9:
# 140 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym2
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_10:
# 143 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym3
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_12:
# 142 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_10
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_13:
# 142 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_12
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_17:
# 139 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_9
	goto TestTown_Trigger_Gym_14

TestTown_Trigger_Gym_18:
# 139 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_17
	goto TestTown_Trigger_Gym_14

TestTown_Trigger_Gym_22:
# 136 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_8
	goto TestTown_Trigger_Gym_19

TestTown_Trigger_Gym_23:
# 136 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_22
	goto TestTown_Trigger_Gym_19

TestTown_Trigger_Gym_27:
# 133 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_7
	goto TestTown_Trigger_Gym_24

TestTown_Trigger_Gym_28:
# 133 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_27
	goto TestTown_Trigger_Gym_24

TestTown_Trigger_Gym_32:
# 130 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_6
	goto TestTown_Trigger_Gym_29

TestTown_Trigger_Gym_33:
# 130 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_32
	goto TestTown_Trigger_Gym_29

TestTown_Trigger_Gym_38:
# 150 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_RivalMay_LetsGoTogether
	goto TestTown_Trigger_Gym_37

TestTown_Trigger_Gym_42:
# 157 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym1
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_43:
# 161 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 162 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_EntersGym1
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_44:
# 165 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 166 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym2
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_45:
# 169 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 170 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_EntersGym2
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_46:
# 173 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_48:
# 172 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_46
	goto TestTown_Trigger_Gym_47

TestTown_Trigger_Gym_49:
# 172 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_48
	goto TestTown_Trigger_Gym_47

TestTown_Trigger_Gym_53:
# 168 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_45
	goto TestTown_Trigger_Gym_50

TestTown_Trigger_Gym_54:
# 168 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_53
	goto TestTown_Trigger_Gym_50

TestTown_Trigger_Gym_58:
# 164 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_44
	goto TestTown_Trigger_Gym_55

TestTown_Trigger_Gym_59:
# 164 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_58
	goto TestTown_Trigger_Gym_55

TestTown_Trigger_Gym_63:
# 160 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_43
	goto TestTown_Trigger_Gym_60

TestTown_Trigger_Gym_64:
# 160 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_63
	goto TestTown_Trigger_Gym_60

TestTown_Trigger_Gym_68:
# 156 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_42
	goto TestTown_Trigger_Gym_65

TestTown_Trigger_Gym_69:
# 156 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_68
	goto TestTown_Trigger_Gym_65

TestTown_Trigger_Gym_74:
# 182 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
	goto TestTown_Trigger_Gym_73

TestTown_Trigger_Gym_78:
# 188 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
	goto TestTown_Trigger_Gym_77

TestTown_Trigger_Gym_79:
# 191 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
	goto TestTown_Trigger_Gym_77

TestTown_Trigger_Gym_81:
# 190 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_79
	goto TestTown_Trigger_Gym_80

TestTown_Trigger_Gym_84:
# 187 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_78
	goto TestTown_Trigger_Gym_82

TestTown_Trigger_Gym_88:
# 198 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 199 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
	goto TestTown_Trigger_Gym_87


# 214 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym1:
# 215 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_down
# 218 "data/maps/TestTown/scripts.pory"
	walk_left
# 218 "data/maps/TestTown/scripts.pory"
	walk_left
# 218 "data/maps/TestTown/scripts.pory"
	walk_left
# 218 "data/maps/TestTown/scripts.pory"
	walk_left
# 218 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym2:
# 222 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 223 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_down
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
# 225 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 228 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym3:
# 229 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_down
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
# 232 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 243 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym1:
# 244 "data/maps/TestTown/scripts.pory"
	walk_down
# 245 "data/maps/TestTown/scripts.pory"
	walk_left
# 245 "data/maps/TestTown/scripts.pory"
	walk_left
# 246 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 249 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym2:
# 250 "data/maps/TestTown/scripts.pory"
	walk_up
# 251 "data/maps/TestTown/scripts.pory"
	walk_left
# 252 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 255 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym3:
# 256 "data/maps/TestTown/scripts.pory"
	walk_right
# 257 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_SignPost_EventScript::
# 261 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_SignPost_Text, MSGBOX_SIGN
	return


TestTown_GymPost_EventScript::
# 269 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_GymPost_Text, MSGBOX_SIGN
	return


TestTown_Eventscript_Fisherman::
# 277 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Text_Fisherman, MSGBOX_NPC
	return


TestTown_Eventscript_Woman::
# 285 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Text_Woman, MSGBOX_NPC
	return


TestTown_Trigger_Gym_Text_0:
# 119 "data/maps/TestTown/scripts.pory"
	.string "WAIT FOR ME!$"

TestTown_RivalMay_LetsGoTogether::
# 235 "data/maps/TestTown/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "Sorry if I scared you-I just wanted to\n"
	.string "get our first Pokémon together.\p"
	.string "Let's go inside!$"

TestTown_RivalBrendan_LetsGoTogether::
# 239 "data/maps/TestTown/scripts.pory"
	.string "Brendan: Hi {PLAYER}!\p"
	.string "Sorry if I scared you-I just wanted to\n"
	.string "get our first Pokémon together.\p"
	.string "Let's go inside!$"

TestTown_SignPost_Text::
# 264 "data/maps/TestTown/scripts.pory"
	.string "Blossom Town\n"
	.string "A town where you can grow.$"

TestTown_GymPost_Text::
# 272 "data/maps/TestTown/scripts.pory"
	.string "Blossom Town Pokémon gym\n"
	.string "Leader: Norman\l"
	.string "“He leaves a toxic waste behind after\l"
	.string "every battle!”$"

TestTown_Text_Fisherman::
# 280 "data/maps/TestTown/scripts.pory"
	.string "It's a fairly small pond, but it's quite\n"
	.string "useful to practice fishing in peace.$"

TestTown_Text_Woman::
# 288 "data/maps/TestTown/scripts.pory"
	.string "Blossom town is such a nice little\n"
	.string "place!\p"
	.string "I'm only visiting, but I wish I could live\n"
	.string "here.$"
