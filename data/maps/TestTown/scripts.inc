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
	compare VAR_TESTTOWN_INTRO_STATE, 4
	goto_if_eq TestTown_OnTransition_1
# 15 "data/maps/TestTown/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 6
	goto_if_eq TestTown_OnTransition_2
	return

TestTown_OnTransition_1:
# 11 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 12 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 13 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return

TestTown_OnTransition_2:
# 16 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 17 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 18 "data/maps/TestTown/scripts.pory"
	savebgm MUS_FOLLOW_ME
	return


TestTown_OnFrame::
# 23 "data/maps/TestTown/scripts.pory"
	lockall
# 24 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 25 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_GoesToGymWithPlayer
# 27 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerBrendan_GoesToGymWithMay
# 28 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 30 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 31 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
# 32 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 33 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 34 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 35 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 36 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 38 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 40 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
# 41 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 42 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 43 "data/maps/TestTown/scripts.pory"
	waitstate
# 44 "data/maps/TestTown/scripts.pory"
	releaseall
	return


TestTown_OnFrame2::
# 48 "data/maps/TestTown/scripts.pory"
	lockall
# 49 "data/maps/TestTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 50 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalBrendan_GoesToGymWithPlayer
# 52 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMay_GoesToGymWithBrendan
# 53 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 55 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 56 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalMay_EntersGym
# 57 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
# 58 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/TestTown/scripts.pory"
	hideobjectat 2, MAP_TEST_TOWN
# 60 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 61 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/TestTown/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 65 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
# 66 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 67 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 68 "data/maps/TestTown/scripts.pory"
	waitstate
# 69 "data/maps/TestTown/scripts.pory"
	releaseall
	return


# 72 "data/maps/TestTown/scripts.pory"
RivalMay_GoesToGymWithPlayer:
# 73 "data/maps/TestTown/scripts.pory"
	delay_8
# 74 "data/maps/TestTown/scripts.pory"
	walk_down
# 75 "data/maps/TestTown/scripts.pory"
	walk_right
# 75 "data/maps/TestTown/scripts.pory"
	walk_right
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 76 "data/maps/TestTown/scripts.pory"
	walk_down
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 77 "data/maps/TestTown/scripts.pory"
	walk_left
# 78 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 81 "data/maps/TestTown/scripts.pory"
RivalBrendan_GoesToGymWithPlayer:
# 82 "data/maps/TestTown/scripts.pory"
	delay_8
# 83 "data/maps/TestTown/scripts.pory"
	walk_down
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 84 "data/maps/TestTown/scripts.pory"
	walk_right
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 85 "data/maps/TestTown/scripts.pory"
	walk_down
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 86 "data/maps/TestTown/scripts.pory"
	walk_left
# 87 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 90 "data/maps/TestTown/scripts.pory"
PlayerBrendan_GoesToGymWithMay:
# 91 "data/maps/TestTown/scripts.pory"
	delay_8
# 92 "data/maps/TestTown/scripts.pory"
	walk_down
# 92 "data/maps/TestTown/scripts.pory"
	walk_down
# 93 "data/maps/TestTown/scripts.pory"
	walk_right
# 93 "data/maps/TestTown/scripts.pory"
	walk_right
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 94 "data/maps/TestTown/scripts.pory"
	walk_down
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
# 95 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/TestTown/scripts.pory"
PlayerMay_GoesToGymWithBrendan:
# 99 "data/maps/TestTown/scripts.pory"
	delay_8
# 100 "data/maps/TestTown/scripts.pory"
	walk_down
# 100 "data/maps/TestTown/scripts.pory"
	walk_down
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 101 "data/maps/TestTown/scripts.pory"
	walk_right
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 102 "data/maps/TestTown/scripts.pory"
	walk_down
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
# 103 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/TestTown/scripts.pory"
RivalMay_EntersGym:
# 107 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym:
# 111 "data/maps/TestTown/scripts.pory"
	walk_left
# 112 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Trigger_Gym::
# 116 "data/maps/TestTown/scripts.pory"
	lockall
# 117 "data/maps/TestTown/scripts.pory"
	checkplayergender
# 118 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Trigger_Gym_Text_0
# 119 "data/maps/TestTown/scripts.pory"
	closemessage
# 120 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_2
# 124 "data/maps/TestTown/scripts.pory"
	addobject 2
# 125 "data/maps/TestTown/scripts.pory"
	setobjectxy 2, 10, 10
TestTown_Trigger_Gym_1:
# 127 "data/maps/TestTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 128 "data/maps/TestTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 129 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_33
TestTown_Trigger_Gym_29:
# 132 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_28
TestTown_Trigger_Gym_24:
# 135 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_23
TestTown_Trigger_Gym_19:
# 138 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_18
TestTown_Trigger_Gym_14:
# 141 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq TestTown_Trigger_Gym_13
TestTown_Trigger_Gym_11:
# 145 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym3
TestTown_Trigger_Gym_5:
# 147 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_38
# 152 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_RivalBrendan_LetsGoTogether
TestTown_Trigger_Gym_37:
# 154 "data/maps/TestTown/scripts.pory"
	closemessage
# 155 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_69
TestTown_Trigger_Gym_65:
# 159 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_64
TestTown_Trigger_Gym_60:
# 163 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_59
TestTown_Trigger_Gym_55:
# 167 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_54
TestTown_Trigger_Gym_50:
# 171 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq TestTown_Trigger_Gym_49
TestTown_Trigger_Gym_47:
# 175 "data/maps/TestTown/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
TestTown_Trigger_Gym_41:
# 177 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/TestTown/scripts.pory"
	opendoor 5, 16
# 179 "data/maps/TestTown/scripts.pory"
	waitdooranim
# 180 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_74
# 184 "data/maps/TestTown/scripts.pory"
	applymovement 2, RivalMay_EntersGym
TestTown_Trigger_Gym_73:
# 186 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq TestTown_Trigger_Gym_84
TestTown_Trigger_Gym_82:
# 189 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq TestTown_Trigger_Gym_81
TestTown_Trigger_Gym_80:
# 193 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym3
TestTown_Trigger_Gym_77:
# 195 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_88
# 201 "data/maps/TestTown/scripts.pory"
	hideobjectat 2, MAP_TEST_TOWN
# 202 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDAN_TESTTOWN
TestTown_Trigger_Gym_87:
# 204 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
# 205 "data/maps/TestTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/TestTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 207 "data/maps/TestTown/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 5
# 208 "data/maps/TestTown/scripts.pory"
	warp MAP_TEST_TOWN_GYM, 5, 111
# 209 "data/maps/TestTown/scripts.pory"
	waitstate
# 210 "data/maps/TestTown/scripts.pory"
	releaseall
	return

TestTown_Trigger_Gym_2:
# 121 "data/maps/TestTown/scripts.pory"
	addobject 1
	goto TestTown_Trigger_Gym_1

TestTown_Trigger_Gym_6:
# 130 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym1
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_7:
# 133 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym1
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_8:
# 136 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym2
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_9:
# 139 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_GoesToGym2
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_10:
# 142 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_GoesToGym3
	goto TestTown_Trigger_Gym_5

TestTown_Trigger_Gym_12:
# 141 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_10
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_13:
# 141 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_12
	goto TestTown_Trigger_Gym_11

TestTown_Trigger_Gym_17:
# 138 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_9
	goto TestTown_Trigger_Gym_14

TestTown_Trigger_Gym_18:
# 138 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_17
	goto TestTown_Trigger_Gym_14

TestTown_Trigger_Gym_22:
# 135 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_8
	goto TestTown_Trigger_Gym_19

TestTown_Trigger_Gym_23:
# 135 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_22
	goto TestTown_Trigger_Gym_19

TestTown_Trigger_Gym_27:
# 132 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_7
	goto TestTown_Trigger_Gym_24

TestTown_Trigger_Gym_28:
# 132 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_27
	goto TestTown_Trigger_Gym_24

TestTown_Trigger_Gym_32:
# 129 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_6
	goto TestTown_Trigger_Gym_29

TestTown_Trigger_Gym_33:
# 129 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_32
	goto TestTown_Trigger_Gym_29

TestTown_Trigger_Gym_38:
# 149 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_RivalMay_LetsGoTogether
	goto TestTown_Trigger_Gym_37

TestTown_Trigger_Gym_42:
# 156 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 157 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym1
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_43:
# 160 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 161 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_EntersGym1
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_44:
# 164 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 165 "data/maps/TestTown/scripts.pory"
	applymovement 1, TestTown_Rival_EntersGym2
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_45:
# 168 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 169 "data/maps/TestTown/scripts.pory"
	applymovement 2, TestTown_Rival_EntersGym2
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_46:
# 172 "data/maps/TestTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
	goto TestTown_Trigger_Gym_41

TestTown_Trigger_Gym_48:
# 171 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_46
	goto TestTown_Trigger_Gym_47

TestTown_Trigger_Gym_49:
# 171 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_48
	goto TestTown_Trigger_Gym_47

TestTown_Trigger_Gym_53:
# 167 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_45
	goto TestTown_Trigger_Gym_50

TestTown_Trigger_Gym_54:
# 167 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_53
	goto TestTown_Trigger_Gym_50

TestTown_Trigger_Gym_58:
# 163 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_44
	goto TestTown_Trigger_Gym_55

TestTown_Trigger_Gym_59:
# 163 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_58
	goto TestTown_Trigger_Gym_55

TestTown_Trigger_Gym_63:
# 159 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq TestTown_Trigger_Gym_43
	goto TestTown_Trigger_Gym_60

TestTown_Trigger_Gym_64:
# 159 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_63
	goto TestTown_Trigger_Gym_60

TestTown_Trigger_Gym_68:
# 155 "data/maps/TestTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Trigger_Gym_42
	goto TestTown_Trigger_Gym_65

TestTown_Trigger_Gym_69:
# 155 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_68
	goto TestTown_Trigger_Gym_65

TestTown_Trigger_Gym_74:
# 181 "data/maps/TestTown/scripts.pory"
	applymovement 1, RivalMay_EntersGym
	goto TestTown_Trigger_Gym_73

TestTown_Trigger_Gym_78:
# 187 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApprochesGym
	goto TestTown_Trigger_Gym_77

TestTown_Trigger_Gym_79:
# 190 "data/maps/TestTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivalMay_EntersGym
	goto TestTown_Trigger_Gym_77

TestTown_Trigger_Gym_81:
# 189 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_eq TestTown_Trigger_Gym_79
	goto TestTown_Trigger_Gym_80

TestTown_Trigger_Gym_84:
# 186 "data/maps/TestTown/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq TestTown_Trigger_Gym_78
	goto TestTown_Trigger_Gym_82

TestTown_Trigger_Gym_88:
# 197 "data/maps/TestTown/scripts.pory"
	hideobjectat 1, MAP_TEST_TOWN
# 198 "data/maps/TestTown/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAY_TESTTOWN
	goto TestTown_Trigger_Gym_87


# 213 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym1:
# 214 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 216 "data/maps/TestTown/scripts.pory"
	walk_down
# 217 "data/maps/TestTown/scripts.pory"
	walk_left
# 217 "data/maps/TestTown/scripts.pory"
	walk_left
# 217 "data/maps/TestTown/scripts.pory"
	walk_left
# 217 "data/maps/TestTown/scripts.pory"
	walk_left
# 217 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 220 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym2:
# 221 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 223 "data/maps/TestTown/scripts.pory"
	walk_down
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
# 224 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 227 "data/maps/TestTown/scripts.pory"
TestTown_Rival_GoesToGym3:
# 228 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/TestTown/scripts.pory"
	walk_fast_right
# 229 "data/maps/TestTown/scripts.pory"
	walk_fast_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 230 "data/maps/TestTown/scripts.pory"
	walk_down
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
# 231 "data/maps/TestTown/scripts.pory"
	walk_left
	step_end

# 242 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym1:
# 243 "data/maps/TestTown/scripts.pory"
	walk_down
# 244 "data/maps/TestTown/scripts.pory"
	walk_left
# 244 "data/maps/TestTown/scripts.pory"
	walk_left
# 245 "data/maps/TestTown/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/TestTown/scripts.pory"
TestTown_Rival_EntersGym2:
# 249 "data/maps/TestTown/scripts.pory"
	walk_up
# 250 "data/maps/TestTown/scripts.pory"
	walk_left
# 251 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 254 "data/maps/TestTown/scripts.pory"
PlayerApprochesGym3:
# 255 "data/maps/TestTown/scripts.pory"
	walk_right
# 256 "data/maps/TestTown/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_SignPost_EventScript::
# 260 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_SignPost_Text, MSGBOX_SIGN
	return


TestTown_GymPost_EventScript::
# 268 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_GymPost_Text, MSGBOX_SIGN
	return


TestTown_Eventscript_Fisherman::
# 276 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Text_Fisherman, MSGBOX_NPC
	return


TestTown_Eventscript_Woman::
# 284 "data/maps/TestTown/scripts.pory"
	msgbox TestTown_Text_Woman, MSGBOX_NPC
	return


TestTown_Trigger_Gym_Text_0:
# 118 "data/maps/TestTown/scripts.pory"
	.string "WAIT FOR ME!$"

TestTown_RivalMay_LetsGoTogether::
# 234 "data/maps/TestTown/scripts.pory"
	.string "May: Hi {PLAYER}!\p"
	.string "Sorry if I scared you-I just wanted to\n"
	.string "get our first Pokémon together.\p"
	.string "Let's go inside!$"

TestTown_RivalBrendan_LetsGoTogether::
# 238 "data/maps/TestTown/scripts.pory"
	.string "Brendan: Hi {PLAYER}!\p"
	.string "Sorry if I scared you-I just wanted to\n"
	.string "get our first Pokémon together.\p"
	.string "Let's go inside!$"

TestTown_SignPost_Text::
# 263 "data/maps/TestTown/scripts.pory"
	.string "Blossom Town\n"
	.string "A town where you can grow.$"

TestTown_GymPost_Text::
# 271 "data/maps/TestTown/scripts.pory"
	.string "Blossom Town Pokémon gym\n"
	.string "Leader: Norman\l"
	.string "“He leaves a toxic waste behind after\l"
	.string "every battle!”$"

TestTown_Text_Fisherman::
# 279 "data/maps/TestTown/scripts.pory"
	.string "It's a fairly small pond, but it's quite\n"
	.string "useful to practice fishing in peace.$"

TestTown_Text_Woman::
# 287 "data/maps/TestTown/scripts.pory"
	.string "Blossom town is such a nice little\n"
	.string "place!\p"
	.string "I'm only visiting, but I wish I could live\n"
	.string "here.$"
