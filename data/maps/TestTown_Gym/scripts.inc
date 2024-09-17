TestTown_Gym_MapScripts::
# 2 "data/maps/TestTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_Gym_OnTransition
# 3 "data/maps/TestTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestTown_Gym/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 5, TestTown_Gym_OnFrame1
	.2byte 0


TestTown_Gym_OnTransition::
# 9 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 5
	goto_if_eq TestTown_Gym_OnTransition_1
	return

TestTown_Gym_OnTransition_1:
# 10 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_ASSISTANT
# 11 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 12 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
	return


TestTown_Gym_OnFrame1::
# 17 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 18 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 19 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Gym_GoToDad
# 20 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_GoToDad
# 21 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 22 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WelcomeToMyGym
# 23 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 24 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalToBag
# 25 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 26 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 27 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_ICantDecide
# 28 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 29 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 6
# 30 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


# 33 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_GoToDad:
# 34 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 34 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalToBag:
# 38 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 39 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 39 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 39 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 40 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_right
	step_end

TestTown_Gym_Rival::
# 52 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 53 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 54 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_RivalCantDecide
# 55 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 56 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 57 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 58 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_NormanWaitsForPokemon::
# 62 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 63 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 64 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadTakeYourTime
# 65 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 66 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_EventScript_NormansBag::
# 78 "data/maps/TestTown_Gym/scripts.pory"
	lock
# 79 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 80 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 81 "data/maps/TestTown_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 82 "data/maps/TestTown_Gym/scripts.pory"
	special ChooseStarter
# 83 "data/maps/TestTown_Gym/scripts.pory"
	waitstate
# 84 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_WelcomeToMyGym::
# 43 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: Welcome to my gym.\p"
	.string "I hope you are ready, you have a very\n"
	.string "difficult decision to make.\p"
	.string "Behind me, there's a bag with three Poké\n"
	.string "balls in it.\p"
	.string "Each one containing a different\n"
	.string "Pokémon.\p"
	.string "You must choose your first partner for\n"
	.string "your journey.\p"
	.string "May, would you do us the honor of\n"
	.string "choosing first?\p"
	.string "May: Yes! Thank you so much for this\n"
	.string "opportunity, Norman!$"

TestTown_Gym_ICantDecide::
# 47 "data/maps/TestTown_Gym/scripts.pory"
	.string "...\p"
	.string "May: They're all so cool and unique.\p"
	.string "I really don't know which one to\n"
	.string "choose...\p"
	.string "{PLAYER}! You should choose first.\p"
	.string "I can't make up my mind.\p"
	.string "Dad: Alright {PLAYER}, go ahead.$"

TestTown_Gym_RivalCantDecide::
# 69 "data/maps/TestTown_Gym/scripts.pory"
	.string "Pick first.\p"
	.string "It will be easier for me to choose if\n"
	.string "there is only two Pokémon left.$"

TestTown_Gym_DadTakeYourTime::
# 73 "data/maps/TestTown_Gym/scripts.pory"
	.string "The bag is right behind me.\p"
	.string "Take your time, it's a very important\n"
	.string "decision to make.$"
