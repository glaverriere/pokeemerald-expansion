LittlerootTown_MapScripts::
# 2 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
	.byte 0


LittlerootTown_OnTransition::
# 6 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_GLADEHAVEN_TOWN
	return


GladehavenTown_EventScript_BirchsLabSign::
# 10 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_ProfBirchsLab, MSGBOX_SIGN
	return


GladehavenTown_EventScript_TownSign::
# 17 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_TownSign, MSGBOX_SIGN
	return


GladehavenTown_EventScript_Woman::
# 24 "data/maps/LittlerootTown/scripts.pory"
	msgbox GladehavenTown_Text_Woman, MSGBOX_NPC
	return


GLadehavenTown_Eventscript_ProfAide::
# 32 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 33 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 34 "data/maps/LittlerootTown/scripts.pory"
	msgbox GLadehavenTown_Text_ProfAide
# 35 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 36 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


GLadehavenTown_Eventscript_Trigger::
# 44 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 45 "data/maps/LittlerootTown/scripts.pory"
	turnobject 3, DIR_SOUTH
# 46 "data/maps/LittlerootTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 47 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 5
	goto_if_eq GLadehavenTown_Eventscript_Trigger_2
# 50 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq GLadehavenTown_Eventscript_Trigger_3
# 55 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq GLadehavenTown_Eventscript_Trigger_4
# 61 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement3_ProfAide
# 62 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
GLadehavenTown_Eventscript_Trigger_1:
# 65 "data/maps/LittlerootTown/scripts.pory"
	msgbox GLadehavenTown_Text_ProfAide
# 66 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 67 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GLadehavenTown_movement_Player
# 68 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq GLadehavenTown_Eventscript_Trigger_10
# 71 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq GLadehavenTown_Eventscript_Trigger_11
# 74 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq GLadehavenTown_Eventscript_Trigger_12
GLadehavenTown_Eventscript_Trigger_9:
# 77 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown/scripts.pory"
	turnobject 3, DIR_SOUTH
# 79 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return

GLadehavenTown_Eventscript_Trigger_2:
# 48 "data/maps/LittlerootTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GLadehavenTown_Eventscript_Trigger_1

GLadehavenTown_Eventscript_Trigger_3:
# 51 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement1_ProfAide
# 52 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/LittlerootTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GLadehavenTown_Eventscript_Trigger_1

GLadehavenTown_Eventscript_Trigger_4:
# 56 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement2_ProfAide
# 57 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/LittlerootTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto GLadehavenTown_Eventscript_Trigger_1

GLadehavenTown_Eventscript_Trigger_10:
# 69 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement4_ProfAide
	goto GLadehavenTown_Eventscript_Trigger_9

GLadehavenTown_Eventscript_Trigger_11:
# 72 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement5_ProfAide
	goto GLadehavenTown_Eventscript_Trigger_9

GLadehavenTown_Eventscript_Trigger_12:
# 75 "data/maps/LittlerootTown/scripts.pory"
	applymovement 3, GLadehavenTown_movement6_ProfAide
	goto GLadehavenTown_Eventscript_Trigger_9


# 82 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement1_ProfAide:
# 83 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement2_ProfAide:
# 87 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 87 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 90 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement3_ProfAide:
# 91 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 91 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 91 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement4_ProfAide:
# 95 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement5_ProfAide:
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 99 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 102 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement6_ProfAide:
# 103 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 103 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 103 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 106 "data/maps/LittlerootTown/scripts.pory"
GLadehavenTown_movement_Player:
# 107 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

GladehavenTown_Text_ProfBirchsLab::
# 12 "data/maps/LittlerootTown/scripts.pory"
	.string "Professor Birch's Pokémon lab.$"

GladehavenTown_Text_TownSign::
# 19 "data/maps/LittlerootTown/scripts.pory"
	.string "Gladehaven town\n"
	.string "The home of Pokémon research.$"

GladehavenTown_Text_Woman::
# 27 "data/maps/LittlerootTown/scripts.pory"
	.string "Professor Birch is really passionate\n"
	.string "about researching Pokémon!\p"
	.string "Also, I heard he is very generous with\n"
	.string "young trainers.$"

GLadehavenTown_Text_ProfAide::
# 39 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you {PLAYER}? Professor Birch\n"
	.string "wants to meet you at his lab.\p"
	.string "You should promptly go there.$"
