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
	givemon SPECIES_DRAGAPULT, 15
# 114 "data/maps/Route101/scripts.pory"
	givemon SPECIES_ELECTIVIRE, 15
# 115 "data/maps/Route101/scripts.pory"
	givemon SPECIES_CHARIZARD, 15
# 116 "data/maps/Route101/scripts.pory"
	giveitem ITEM_QUICK_BALL, 100
# 117 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DudeInGrass, MSGBOX_NPC
	return


Route101_RivalBattle_Trigger::
# 125 "data/maps/Route101/scripts.pory"
	lockall
# 126 "data/maps/Route101/scripts.pory"
	checkplayergender
# 127 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 128 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_2
# 166 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_BrendanVsWally
# 167 "data/maps/Route101/scripts.pory"
	closemessage
# 168 "data/maps/Route101/scripts.pory"
	delay 10
# 169 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 171 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 173 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 175 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 176 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 177 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 178 "data/maps/Route101/scripts.pory"
	delay 10
# 179 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 180 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_18
# 182 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_19
# 184 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_20
# 186 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_21
# 188 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_22
Route101_RivalBattle_Trigger_16:
# 191 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 192 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 193 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 194 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_44
# 196 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_45
# 198 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_46
Route101_RivalBattle_Trigger_1:
# 202 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RivalLetsGoToLab
# 203 "data/maps/Route101/scripts.pory"
	closemessage
# 204 "data/maps/Route101/scripts.pory"
	checkplayergender
# 205 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 206 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_6
# 221 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 222 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_34
# 224 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_35
# 226 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_36
# 228 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_37
# 230 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_38
Route101_RivalBattle_Trigger_5:
# 234 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 236 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_24
# 240 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToLab
Route101_RivalBattle_Trigger_23:
# 242 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route101/scripts.pory"
	removeobject 2
# 244 "data/maps/Route101/scripts.pory"
	removeobject 3
# 245 "data/maps/Route101/scripts.pory"
	msgbox Route101_RivalBattle_Trigger_Text_0
# 246 "data/maps/Route101/scripts.pory"
	closemessage
# 247 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101_RivalToLab
# 248 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route101/scripts.pory"
	removeobject 1
# 250 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_BRENDAN
# 251 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_MAY
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_WALLY
# 253 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 254 "data/maps/Route101/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 255 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_RivalBattle_Trigger_2:
# 129 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_MayVsWally
# 130 "data/maps/Route101/scripts.pory"
	closemessage
# 131 "data/maps/Route101/scripts.pory"
	delay 10
# 132 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 133 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 134 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 136 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 138 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 139 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 141 "data/maps/Route101/scripts.pory"
	delay 10
# 142 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 143 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_11
# 145 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_12
# 147 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_13
# 149 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_14
# 151 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_15
Route101_RivalBattle_Trigger_9:
# 154 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 155 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 156 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 157 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_40
# 159 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_41
# 161 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_42
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_6:
# 207 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 208 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_28
# 210 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_29
# 212 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_30
# 214 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_31
# 216 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_32
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_11:
# 144 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_12:
# 146 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_13:
# 148 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_14:
# 150 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_15:
# 152 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_18:
# 181 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_19:
# 183 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_20:
# 185 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_21:
# 187 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_22:
# 189 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_24:
# 237 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToLab
	goto Route101_RivalBattle_Trigger_23

Route101_RivalBattle_Trigger_28:
# 209 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally6
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_29:
# 211 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally7
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_30:
# 213 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally8
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_31:
# 215 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally9
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_32:
# 217 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally10
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_34:
# 223 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally6
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_35:
# 225 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally7
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_36:
# 227 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally8
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_37:
# 229 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally9
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_38:
# 231 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally10
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_40:
# 158 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_41:
# 160 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_42:
# 162 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_44:
# 195 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_45:
# 197 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_46:
# 199 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1


# 266 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer6:
# 267 "data/maps/Route101/scripts.pory"
	walk_down
# 267 "data/maps/Route101/scripts.pory"
	walk_down
# 268 "data/maps/Route101/scripts.pory"
	walk_left
# 268 "data/maps/Route101/scripts.pory"
	walk_left
# 268 "data/maps/Route101/scripts.pory"
	walk_left
# 268 "data/maps/Route101/scripts.pory"
	walk_left
# 269 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 272 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer7:
# 273 "data/maps/Route101/scripts.pory"
	walk_down
# 273 "data/maps/Route101/scripts.pory"
	walk_down
# 274 "data/maps/Route101/scripts.pory"
	walk_left
# 274 "data/maps/Route101/scripts.pory"
	walk_left
# 274 "data/maps/Route101/scripts.pory"
	walk_left
# 275 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 278 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer8:
# 279 "data/maps/Route101/scripts.pory"
	walk_down
# 279 "data/maps/Route101/scripts.pory"
	walk_down
# 280 "data/maps/Route101/scripts.pory"
	walk_left
# 280 "data/maps/Route101/scripts.pory"
	walk_left
# 281 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 284 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer9:
# 285 "data/maps/Route101/scripts.pory"
	walk_down
# 285 "data/maps/Route101/scripts.pory"
	walk_down
# 286 "data/maps/Route101/scripts.pory"
	walk_left
# 287 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 290 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer10:
# 291 "data/maps/Route101/scripts.pory"
	walk_down
# 291 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 306 "data/maps/Route101/scripts.pory"
Route101_RivalToWally6:
# 307 "data/maps/Route101/scripts.pory"
	walk_right
# 307 "data/maps/Route101/scripts.pory"
	walk_right
# 307 "data/maps/Route101/scripts.pory"
	walk_right
# 307 "data/maps/Route101/scripts.pory"
	walk_right
# 308 "data/maps/Route101/scripts.pory"
	walk_up
# 308 "data/maps/Route101/scripts.pory"
	walk_up
# 308 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 311 "data/maps/Route101/scripts.pory"
Route101_RivalToWally7:
# 312 "data/maps/Route101/scripts.pory"
	walk_right
# 312 "data/maps/Route101/scripts.pory"
	walk_right
# 312 "data/maps/Route101/scripts.pory"
	walk_right
# 313 "data/maps/Route101/scripts.pory"
	walk_up
# 313 "data/maps/Route101/scripts.pory"
	walk_up
# 313 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 316 "data/maps/Route101/scripts.pory"
Route101_RivalToWally8:
# 317 "data/maps/Route101/scripts.pory"
	walk_right
# 317 "data/maps/Route101/scripts.pory"
	walk_right
# 318 "data/maps/Route101/scripts.pory"
	walk_up
# 318 "data/maps/Route101/scripts.pory"
	walk_up
# 318 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 321 "data/maps/Route101/scripts.pory"
Route101_RivalToWally9:
# 322 "data/maps/Route101/scripts.pory"
	walk_right
# 323 "data/maps/Route101/scripts.pory"
	walk_up
# 323 "data/maps/Route101/scripts.pory"
	walk_up
# 323 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 326 "data/maps/Route101/scripts.pory"
Route101_RivalToWally10:
# 327 "data/maps/Route101/scripts.pory"
	walk_up
# 327 "data/maps/Route101/scripts.pory"
	walk_up
# 327 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 330 "data/maps/Route101/scripts.pory"
Route101_RivalToLab:
# 331 "data/maps/Route101/scripts.pory"
	walk_up
# 331 "data/maps/Route101/scripts.pory"
	walk_up
# 331 "data/maps/Route101/scripts.pory"
	walk_up
# 331 "data/maps/Route101/scripts.pory"
	walk_up
# 331 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_GirlWalking::
# 335 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_GirlWalking, MSGBOX_NPC
	return


Route101_Ronnie_Eventscript::
# 343 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_RONNIE, Route101_Ronnie_Intro, Route101_Ronnie_Defeated
# 344 "data/maps/Route101/scripts.pory"
	msgbox Route101_Ronnie_PostBattle
# 345 "data/maps/Route101/scripts.pory"
	closemessage
	return


Route101_RivalBattle_Trigger_Text_0:
# 245 "data/maps/Route101/scripts.pory"
	.string "Wally: Wait for me!$"

Route101_ItsDangerous::
# 79 "data/maps/Route101/scripts.pory"
	.string "It's dangerous to wander in tall grass\n"
	.string "without a Pokémon.\p"
	.string "I recommend you come back with one.$"

Route101_Text_DudeInGrass::
# 120 "data/maps/Route101/scripts.pory"
	.string "Searching for Pokémon in tall grass is\n"
	.string "so fun!\p"
	.string "The other day, I even found a Pikachu!$"

Route101_Text_MayVsWally::
# 258 "data/maps/Route101/scripts.pory"
	.string "May: Wally! I challenge you to a Pokémon\n"
	.string "battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "May: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.\p"
	.string "Feel free to watch if you would like to\n"
	.string "learn.$"

Route101_Text_BrendanVsWally::
# 262 "data/maps/Route101/scripts.pory"
	.string "Brendan: Wally! I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "Brendan: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.\p"
	.string "Feel free to watch if you would like to\n"
	.string "learn.$"

Route101_Text_LetsBattle::
# 294 "data/maps/Route101/scripts.pory"
	.string "Alright {PLAYER}, let's battle!$"

Route101_Text_RivalDefeated::
# 298 "data/maps/Route101/scripts.pory"
	.string "Wow, {PLAYER}...\n"
	.string "You sure are good at this!$"

Route101_Text_RivalLetsGoToLab::
# 302 "data/maps/Route101/scripts.pory"
	.string "You're a natural!\p"
	.string "Anyways, let's go to my dad's lab.$"

Route101_Text_GirlWalking::
# 338 "data/maps/Route101/scripts.pory"
	.string "Did you know that if you keep walking in\n"
	.string "tall grass, you'll eventually stumble\l"
	.string "upon a wild Pokémon?$"

Route101_Ronnie_Intro::
# 348 "data/maps/Route101/scripts.pory"
	.string "When two trainers' eyes meet, it means\n"
	.string "they have to battle!$"

Route101_Ronnie_Defeated::
# 352 "data/maps/Route101/scripts.pory"
	.string "I lost...$"

Route101_Ronnie_PostBattle::
# 356 "data/maps/Route101/scripts.pory"
	.string "Now you know how battling works!$"
