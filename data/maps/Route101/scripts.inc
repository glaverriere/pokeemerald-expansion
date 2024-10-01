Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	.byte 0


Route101_OnTransition::
# 6 "data/maps/Route101/scripts.pory"
	compare VAR_ROUTE101_STATE, 0
	goto_if_eq Route101_OnTransition_1
	return

Route101_OnTransition_1:
# 7 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_ROUTE101_WALLY
# 8 "data/maps/Route101/scripts.pory"
	checkplayergender
# 9 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_OnTransition_3
# 13 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_ROUTE101_BRENDAN
	return

Route101_OnTransition_3:
# 10 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_ROUTE101_MAY
	return


Route101_Intro_Trigger::
# 19 "data/maps/Route101/scripts.pory"
	lockall
# 20 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 22 "data/maps/Route101/scripts.pory"
	case 8, Route101_Intro_Trigger_3
# 24 "data/maps/Route101/scripts.pory"
	case 9, Route101_Intro_Trigger_4
# 26 "data/maps/Route101/scripts.pory"
	case 10, Route101_Intro_Trigger_5
# 28 "data/maps/Route101/scripts.pory"
	case 11, Route101_Intro_Trigger_6
# 30 "data/maps/Route101/scripts.pory"
	case 12, Route101_Intro_Trigger_7
Route101_Intro_Trigger_1:
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 35 "data/maps/Route101/scripts.pory"
	msgbox Route101_ItsDangerous
# 36 "data/maps/Route101/scripts.pory"
	closemessage
# 37 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_PlayerDown
# 38 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 39 "data/maps/Route101/scripts.pory"
	case 8, Route101_Intro_Trigger_10
# 41 "data/maps/Route101/scripts.pory"
	case 9, Route101_Intro_Trigger_11
# 43 "data/maps/Route101/scripts.pory"
	case 10, Route101_Intro_Trigger_12
# 45 "data/maps/Route101/scripts.pory"
	case 11, Route101_Intro_Trigger_13
# 47 "data/maps/Route101/scripts.pory"
	case 12, Route101_Intro_Trigger_14
Route101_Intro_Trigger_8:
# 50 "data/maps/Route101/scripts.pory"
	waitmovement 4
# 51 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_Intro_Trigger_3:
# 23 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4ToPlayer8
	goto Route101_Intro_Trigger_1

Route101_Intro_Trigger_4:
# 25 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4ToPlayer9
	goto Route101_Intro_Trigger_1

Route101_Intro_Trigger_5:
# 27 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4ToPlayer10
	goto Route101_Intro_Trigger_1

Route101_Intro_Trigger_6:
# 29 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4ToPlayer11
	goto Route101_Intro_Trigger_1

Route101_Intro_Trigger_7:
# 31 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4ToPlayer12
	goto Route101_Intro_Trigger_1

Route101_Intro_Trigger_10:
# 40 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4Playerto8
	goto Route101_Intro_Trigger_8

Route101_Intro_Trigger_11:
# 42 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4Playerto9
	goto Route101_Intro_Trigger_8

Route101_Intro_Trigger_12:
# 44 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4Playerto10
	goto Route101_Intro_Trigger_8

Route101_Intro_Trigger_13:
# 46 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4Playerto11
	goto Route101_Intro_Trigger_8

Route101_Intro_Trigger_14:
# 48 "data/maps/Route101/scripts.pory"
	applymovement 4, Route101_4Playerto12
	goto Route101_Intro_Trigger_8


# 54 "data/maps/Route101/scripts.pory"
Route101_4ToPlayer8:
# 55 "data/maps/Route101/scripts.pory"
	walk_right
# 56 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 59 "data/maps/Route101/scripts.pory"
Route101_4ToPlayer9:
# 60 "data/maps/Route101/scripts.pory"
	walk_right
# 60 "data/maps/Route101/scripts.pory"
	walk_right
# 61 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 64 "data/maps/Route101/scripts.pory"
Route101_4ToPlayer10:
# 65 "data/maps/Route101/scripts.pory"
	walk_right
# 65 "data/maps/Route101/scripts.pory"
	walk_right
# 65 "data/maps/Route101/scripts.pory"
	walk_right
# 66 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 69 "data/maps/Route101/scripts.pory"
Route101_4ToPlayer11:
# 70 "data/maps/Route101/scripts.pory"
	walk_right
# 70 "data/maps/Route101/scripts.pory"
	walk_right
# 70 "data/maps/Route101/scripts.pory"
	walk_right
# 70 "data/maps/Route101/scripts.pory"
	walk_right
# 71 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 74 "data/maps/Route101/scripts.pory"
Route101_4ToPlayer12:
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 75 "data/maps/Route101/scripts.pory"
	walk_right
# 76 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_down
	step_end

# 83 "data/maps/Route101/scripts.pory"
Route101_PlayerDown:
# 84 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/Route101/scripts.pory"
Route101_4Playerto8:
# 88 "data/maps/Route101/scripts.pory"
	walk_left
# 89 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_up
	step_end

# 92 "data/maps/Route101/scripts.pory"
Route101_4Playerto9:
# 93 "data/maps/Route101/scripts.pory"
	walk_left
# 93 "data/maps/Route101/scripts.pory"
	walk_left
# 94 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_up
	step_end

# 97 "data/maps/Route101/scripts.pory"
Route101_4Playerto10:
# 98 "data/maps/Route101/scripts.pory"
	walk_left
# 98 "data/maps/Route101/scripts.pory"
	walk_left
# 98 "data/maps/Route101/scripts.pory"
	walk_left
# 99 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_up
	step_end

# 102 "data/maps/Route101/scripts.pory"
Route101_4Playerto11:
# 103 "data/maps/Route101/scripts.pory"
	walk_left
# 103 "data/maps/Route101/scripts.pory"
	walk_left
# 103 "data/maps/Route101/scripts.pory"
	walk_left
# 103 "data/maps/Route101/scripts.pory"
	walk_left
# 104 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_up
	step_end

# 107 "data/maps/Route101/scripts.pory"
Route101_4Playerto12:
# 108 "data/maps/Route101/scripts.pory"
	walk_left
# 108 "data/maps/Route101/scripts.pory"
	walk_left
# 108 "data/maps/Route101/scripts.pory"
	walk_left
# 108 "data/maps/Route101/scripts.pory"
	walk_left
# 108 "data/maps/Route101/scripts.pory"
	walk_left
# 109 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_up
	step_end

Route101_DudeInGrass::
# 113 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DudeInGrass, MSGBOX_NPC
	return


Route101_RivalBattle_Trigger::
# 121 "data/maps/Route101/scripts.pory"
	lockall
# 122 "data/maps/Route101/scripts.pory"
	checkplayergender
# 123 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 124 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_2
# 162 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_BrendanVsWally
# 163 "data/maps/Route101/scripts.pory"
	closemessage
# 164 "data/maps/Route101/scripts.pory"
	delay 10
# 165 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 166 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 167 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 169 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 171 "data/maps/Route101/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 172 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 174 "data/maps/Route101/scripts.pory"
	delay 10
# 175 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 176 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_14
# 178 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_15
# 180 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_16
# 182 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_17
# 184 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_18
Route101_RivalBattle_Trigger_12:
# 187 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 189 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 190 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_24
# 192 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_25
# 194 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_26
Route101_RivalBattle_Trigger_1:
# 198 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_RivalBattle_Trigger_2:
# 125 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_MayVsWally
# 126 "data/maps/Route101/scripts.pory"
	closemessage
# 127 "data/maps/Route101/scripts.pory"
	delay 10
# 128 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 130 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 132 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/Route101/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 135 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 137 "data/maps/Route101/scripts.pory"
	delay 10
# 138 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 139 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_7
# 141 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_8
# 143 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_9
# 145 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_10
# 147 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_11
Route101_RivalBattle_Trigger_5:
# 150 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 151 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 152 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 153 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_20
# 155 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_21
# 157 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_22
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_7:
# 140 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_8:
# 142 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_9:
# 144 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_10:
# 146 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_11:
# 148 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_14:
# 177 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_12

Route101_RivalBattle_Trigger_15:
# 179 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_12

Route101_RivalBattle_Trigger_16:
# 181 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_12

Route101_RivalBattle_Trigger_17:
# 183 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_12

Route101_RivalBattle_Trigger_18:
# 185 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_12

Route101_RivalBattle_Trigger_20:
# 154 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_21:
# 156 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_22:
# 158 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_24:
# 191 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_25:
# 193 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_26:
# 195 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1


# 209 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer6:
# 210 "data/maps/Route101/scripts.pory"
	walk_down
# 210 "data/maps/Route101/scripts.pory"
	walk_down
# 211 "data/maps/Route101/scripts.pory"
	walk_left
# 211 "data/maps/Route101/scripts.pory"
	walk_left
# 211 "data/maps/Route101/scripts.pory"
	walk_left
# 211 "data/maps/Route101/scripts.pory"
	walk_left
# 212 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 215 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer7:
# 216 "data/maps/Route101/scripts.pory"
	walk_down
# 216 "data/maps/Route101/scripts.pory"
	walk_down
# 217 "data/maps/Route101/scripts.pory"
	walk_left
# 217 "data/maps/Route101/scripts.pory"
	walk_left
# 217 "data/maps/Route101/scripts.pory"
	walk_left
# 218 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 221 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer8:
# 222 "data/maps/Route101/scripts.pory"
	walk_down
# 222 "data/maps/Route101/scripts.pory"
	walk_down
# 223 "data/maps/Route101/scripts.pory"
	walk_left
# 223 "data/maps/Route101/scripts.pory"
	walk_left
# 224 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 227 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer9:
# 228 "data/maps/Route101/scripts.pory"
	walk_down
# 228 "data/maps/Route101/scripts.pory"
	walk_down
# 229 "data/maps/Route101/scripts.pory"
	walk_left
# 230 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 233 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer10:
# 234 "data/maps/Route101/scripts.pory"
	walk_down
# 234 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

Route101_ItsDangerous::
# 79 "data/maps/Route101/scripts.pory"
	.string "It's dangerous to wander in tall grass\n"
	.string "without a Pokémon.\p"
	.string "I recommend you come back with one.$"

Route101_Text_DudeInGrass::
# 116 "data/maps/Route101/scripts.pory"
	.string "Searching for Pokémon in tall grass is\n"
	.string "so fun!\p"
	.string "The other day, I even found a Pikachu!$"

Route101_Text_MayVsWally::
# 201 "data/maps/Route101/scripts.pory"
	.string "May: Wally! I challenge you to a Pokémon\n"
	.string "battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "May: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.$"

Route101_Text_BrendanVsWally::
# 205 "data/maps/Route101/scripts.pory"
	.string "Brendan: Wally! I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "Brendan: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.$"

Route101_Text_LetsBattle::
# 237 "data/maps/Route101/scripts.pory"
	.string "Alright {PLAYER}, let's battle!$"

Route101_Text_RivalDefeated::
# 241 "data/maps/Route101/scripts.pory"
	.string "Wow, {PLAYER}...\n"
	.string "You sure are good at this!$"
