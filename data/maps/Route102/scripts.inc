Route102_MapScripts::
# 2 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
	.byte 0


Route102_OnTransition::
# 6 "data/maps/Route102/scripts.pory"
	compare VAR_ROUTE102_STATE, 0
	goto_if_eq Route102_OnTransition_1
	return

Route102_OnTransition_1:
# 7 "data/maps/Route102/scripts.pory"
	checkplayergender
# 8 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102_OnTransition_3
# 12 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_102_BRENDAN
	return

Route102_OnTransition_3:
# 9 "data/maps/Route102/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_102_MAY
	return


Route102_CatchingTutorial_EventScript::
# 18 "data/maps/Route102/scripts.pory"
	lockall
# 19 "data/maps/Route102/scripts.pory"
	checkplayergender
# 20 "data/maps/Route102/scripts.pory"
	delay 10
# 21 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 22 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102_CatchingTutorial_EventScript_2
# 33 "data/maps/Route102/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 34 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route102/scripts.pory"
	applymovement 6, Common_Movement_Delay48
# 36 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route102/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
# 38 "data/maps/Route102/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route102/scripts.pory"
	delay 10
Route102_CatchingTutorial_EventScript_1:
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_RivalGreetsPlayer_Text
# 43 "data/maps/Route102/scripts.pory"
	closemessage
# 44 "data/maps/Route102/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 45 "data/maps/Route102/scripts.pory"
	switch VAR_TEMP_0
# 46 "data/maps/Route102/scripts.pory"
	case 13, Route102_CatchingTutorial_EventScript_7
# 48 "data/maps/Route102/scripts.pory"
	case 14, Route102_CatchingTutorial_EventScript_8
# 50 "data/maps/Route102/scripts.pory"
	case 15, Route102_CatchingTutorial_EventScript_9
# 52 "data/maps/Route102/scripts.pory"
	case 16, Route102_CatchingTutorial_EventScript_10
# 54 "data/maps/Route102/scripts.pory"
	case 17, Route102_CatchingTutorial_EventScript_11
Route102_CatchingTutorial_EventScript_5:
# 57 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route102/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 59 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_FirstStepIs_Text
# 61 "data/maps/Route102/scripts.pory"
	closemessage
# 62 "data/maps/Route102/scripts.pory"
	special SavePlayerParty
# 63 "data/maps/Route102/scripts.pory"
	special LoadWallyZigzagoon
# 64 "data/maps/Route102/scripts.pory"
	special StartWallyTutorialBattle
# 65 "data/maps/Route102/scripts.pory"
	waitstate
# 66 "data/maps/Route102/scripts.pory"
	special LoadPlayerParty
# 67 "data/maps/Route102/scripts.pory"
	checkplayergender
# 68 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102_CatchingTutorial_EventScript_13
# 72 "data/maps/Route102/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterLeft
Route102_CatchingTutorial_EventScript_12:
# 74 "data/maps/Route102/scripts.pory"
	msgbox Route102_IDidIt_Text
# 75 "data/maps/Route102/scripts.pory"
	waitmessage
# 76 "data/maps/Route102/scripts.pory"
	checkplayergender
# 77 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102_CatchingTutorial_EventScript_17
# 81 "data/maps/Route102/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFasterUp
Route102_CatchingTutorial_EventScript_16:
# 83 "data/maps/Route102/scripts.pory"
	msgbox Route102_YoushouldToo_Text
# 84 "data/maps/Route102/scripts.pory"
	closemessage
# 85 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route102_CatchingTutorial_EventScript_21
# 89 "data/maps/Route102/scripts.pory"
	applymovement 6, Route102_RivalTakesOff
Route102_CatchingTutorial_EventScript_20:
# 91 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route102/scripts.pory"
	removeobject 5
# 93 "data/maps/Route102/scripts.pory"
	removeobject 6
# 94 "data/maps/Route102/scripts.pory"
	msgbox Route102_IllFollowRival_Text
# 95 "data/maps/Route102/scripts.pory"
	closemessage
# 96 "data/maps/Route102/scripts.pory"
	applymovement 4, Route102_WallyTakesOff
# 97 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route102/scripts.pory"
	removeobject 4
# 99 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
# 100 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_102_BRENDAN
# 101 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_102_MAY
# 102 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE_102_WALLY
# 103 "data/maps/Route102/scripts.pory"
	releaseall
	return

Route102_CatchingTutorial_EventScript_2:
# 23 "data/maps/Route102/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 24 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route102/scripts.pory"
	applymovement 5, Common_Movement_Delay48
# 26 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route102/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
# 28 "data/maps/Route102/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route102/scripts.pory"
	delay 10
	goto Route102_CatchingTutorial_EventScript_1

Route102_CatchingTutorial_EventScript_7:
# 47 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_PlayerToRival13
	goto Route102_CatchingTutorial_EventScript_5

Route102_CatchingTutorial_EventScript_8:
# 49 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_PlayerToRival14
	goto Route102_CatchingTutorial_EventScript_5

Route102_CatchingTutorial_EventScript_9:
# 51 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_PlayerToRival15
	goto Route102_CatchingTutorial_EventScript_5

Route102_CatchingTutorial_EventScript_10:
# 53 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_PlayerToRival16
	goto Route102_CatchingTutorial_EventScript_5

Route102_CatchingTutorial_EventScript_11:
# 55 "data/maps/Route102/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route102_PlayerToRival17
	goto Route102_CatchingTutorial_EventScript_5

Route102_CatchingTutorial_EventScript_13:
# 69 "data/maps/Route102/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
	goto Route102_CatchingTutorial_EventScript_12

Route102_CatchingTutorial_EventScript_17:
# 78 "data/maps/Route102/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	goto Route102_CatchingTutorial_EventScript_16

Route102_CatchingTutorial_EventScript_21:
# 86 "data/maps/Route102/scripts.pory"
	applymovement 5, Route102_RivalTakesOff
	goto Route102_CatchingTutorial_EventScript_20


# 106 "data/maps/Route102/scripts.pory"
Route102_PlayerToRival13:
# 107 "data/maps/Route102/scripts.pory"
	walk_down
# 108 "data/maps/Route102/scripts.pory"
	walk_right
# 108 "data/maps/Route102/scripts.pory"
	walk_right
# 109 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_down
	step_end

# 112 "data/maps/Route102/scripts.pory"
Route102_PlayerToRival14:
# 113 "data/maps/Route102/scripts.pory"
	walk_down
# 114 "data/maps/Route102/scripts.pory"
	walk_right
# 115 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_down
	step_end

# 118 "data/maps/Route102/scripts.pory"
Route102_PlayerToRival15:
# 119 "data/maps/Route102/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/Route102/scripts.pory"
Route102_PlayerToRival16:
# 123 "data/maps/Route102/scripts.pory"
	walk_down
# 124 "data/maps/Route102/scripts.pory"
	walk_left
# 125 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_down
	step_end

# 128 "data/maps/Route102/scripts.pory"
Route102_PlayerToRival17:
# 129 "data/maps/Route102/scripts.pory"
	walk_down
# 130 "data/maps/Route102/scripts.pory"
	walk_left
# 130 "data/maps/Route102/scripts.pory"
	walk_left
# 131 "data/maps/Route102/scripts.pory"
	walk_in_place_faster_down
	step_end

# 134 "data/maps/Route102/scripts.pory"
Route102_RivalTakesOff:
# 135 "data/maps/Route102/scripts.pory"
	walk_down
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
# 136 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/Route102/scripts.pory"
Route102_WallyTakesOff:
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
	step_end

Route102_Aston_Eventscript::
# 164 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ASTON, Route102_Aston_Intro, Route102_Aston_Defeated
# 165 "data/maps/Route102/scripts.pory"
	msgbox Route102_Aston_PostBattle
# 166 "data/maps/Route102/scripts.pory"
	closemessage
	return


Route102_Julia_Eventscript::
# 182 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_JULIA, Route102_Julia_Intro, Route102_Julia_Defeated
# 183 "data/maps/Route102/scripts.pory"
	msgbox Route102_Julia_PostBattle
# 184 "data/maps/Route102/scripts.pory"
	closemessage
	return


Route102_BerryMan_EventScript::
# 200 "data/maps/Route102/scripts.pory"
	msgbox Route102_BerryMan_Text, MSGBOX_NPC
	return


Route102_Runner_EventScript::
# 208 "data/maps/Route102/scripts.pory"
	msgbox Route102_Runner_Text, MSGBOX_NPC
	return


Route102_RivalGreetsPlayer_Text::
# 143 "data/maps/Route102/scripts.pory"
	.string "{RIVAL}: {PLAYER}! You are just in\n"
	.string "time to learn how to catch a Pokémon.\p"
	.string "I was just going to teach Wally.\l"
	.string "Come!$"

Route102_FirstStepIs_Text::
# 147 "data/maps/Route102/scripts.pory"
	.string "{RIVAL}: Ok! The first step is to\n"
	.string "find a wild Pokémon.\p"
	.string "And then...$"

Route102_IDidIt_Text::
# 151 "data/maps/Route102/scripts.pory"
	.string "Wally: I did it!\n"
	.string "I wasn't sure I could do it, but here I\l"
	.string "am!\p"
	.string "I caught a Pokémon by myself!\p"
	.string "{RIVAL}: Congrats! You did well.\p"
	.string "What will you do next?\p"
	.string "Wally: I think I'm going to go to the\n"
	.string "Pokémon trainer school in Jello City.\p"
	.string "I want to know more about Pokémon\n"
	.string "battling before I try it out for myself.\p"
	.string "{RIVAL}: Good idea! I heard there's a\n"
	.string "Pokémon gym in Jello City.\p"
	.string "I think I will try to challenge the gym\n"
	.string "leader for a badge.$"

Route102_YoushouldToo_Text::
# 155 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, you should totally do that\n"
	.string "too if you want to become a stronger\l"
	.string "trainer!\p"
	.string "See ya!$"

Route102_IllFollowRival_Text::
# 159 "data/maps/Route102/scripts.pory"
	.string "Wally: I'll follow {RIVAL} to Jello\n"
	.string "city just to be safe.\p"
	.string "Bye!$"

Route102_Aston_Intro::
# 169 "data/maps/Route102/scripts.pory"
	.string "Hey! I want to show off the Pokémon I\n"
	.string "caught earlier in the woods!$"

Route102_Aston_Defeated::
# 173 "data/maps/Route102/scripts.pory"
	.string "You didn't have to go this hard...$"

Route102_Aston_PostBattle::
# 177 "data/maps/Route102/scripts.pory"
	.string "Welp, these are the Pokémon I caught!$"

Route102_Julia_Intro::
# 187 "data/maps/Route102/scripts.pory"
	.string "What's your favorite kind of Berry? I'll\n"
	.string "tell you mine if you win this battle.$"

Route102_Julia_Defeated::
# 191 "data/maps/Route102/scripts.pory"
	.string "You win! I guess I have to tell you my\n"
	.string "favorite kind of Berry now.$"

Route102_Julia_PostBattle::
# 195 "data/maps/Route102/scripts.pory"
	.string "My favorites are Oran Berries!$"

Route102_BerryMan_Text::
# 203 "data/maps/Route102/scripts.pory"
	.string "Not_done$"

Route102_Runner_Text::
# 211 "data/maps/Route102/scripts.pory"
	.string "I'd gladly battle you, but today is\n"
	.string "training day.$"
