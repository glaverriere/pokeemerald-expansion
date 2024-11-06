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
	givemon SPECIES_DRAGAPULT, 14
# 114 "data/maps/Route101/scripts.pory"
	givemon SPECIES_LAPRAS, 14
# 115 "data/maps/Route101/scripts.pory"
	givemon SPECIES_CHARIZARD, 14
# 116 "data/maps/Route101/scripts.pory"
	givemon SPECIES_GOGOAT, 14
# 117 "data/maps/Route101/scripts.pory"
	givemon SPECIES_KYOGRE, 14
# 118 "data/maps/Route101/scripts.pory"
	giveitem ITEM_QUICK_BALL, 100
# 119 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DudeInGrass, MSGBOX_NPC
	return


Route101_RivalBattle_Trigger::
# 127 "data/maps/Route101/scripts.pory"
	lockall
# 128 "data/maps/Route101/scripts.pory"
	checkplayergender
# 129 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 130 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_2
# 168 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_BrendanVsWally
# 169 "data/maps/Route101/scripts.pory"
	closemessage
# 170 "data/maps/Route101/scripts.pory"
	delay 10
# 171 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 172 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 173 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 175 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 176 "data/maps/Route101/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterDown
# 177 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 178 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 179 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 180 "data/maps/Route101/scripts.pory"
	delay 10
# 181 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 182 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_18
# 184 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_19
# 186 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_20
# 188 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_21
# 190 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_22
Route101_RivalBattle_Trigger_16:
# 193 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 195 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 196 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_44
# 198 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_45
# 200 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_46
Route101_RivalBattle_Trigger_1:
# 204 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RivalLetsGoToLab
# 205 "data/maps/Route101/scripts.pory"
	closemessage
# 206 "data/maps/Route101/scripts.pory"
	checkplayergender
# 207 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 208 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_6
# 223 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 224 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_34
# 226 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_35
# 228 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_36
# 230 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_37
# 232 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_38
Route101_RivalBattle_Trigger_5:
# 236 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterUp
# 238 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_RivalBattle_Trigger_24
# 242 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToLab
Route101_RivalBattle_Trigger_23:
# 244 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route101/scripts.pory"
	removeobject 2
# 246 "data/maps/Route101/scripts.pory"
	removeobject 3
# 247 "data/maps/Route101/scripts.pory"
	msgbox Route101_RivalBattle_Trigger_Text_0
# 248 "data/maps/Route101/scripts.pory"
	closemessage
# 249 "data/maps/Route101/scripts.pory"
	applymovement 1, Route101_RivalToLab
# 250 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route101/scripts.pory"
	removeobject 1
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_BRENDAN
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_MAY
# 254 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE101_WALLY
# 255 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 256 "data/maps/Route101/scripts.pory"
	playbgm MUS_ROUTE101, TRUE
# 257 "data/maps/Route101/scripts.pory"
	releaseall
	return

Route101_RivalBattle_Trigger_2:
# 131 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_MayVsWally
# 132 "data/maps/Route101/scripts.pory"
	closemessage
# 133 "data/maps/Route101/scripts.pory"
	delay 10
# 134 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 135 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 136 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 138 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route101/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterDown
# 140 "data/maps/Route101/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 141 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route101/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 143 "data/maps/Route101/scripts.pory"
	delay 10
# 144 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 145 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_11
# 147 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_12
# 149 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_13
# 151 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_14
# 153 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_15
Route101_RivalBattle_Trigger_9:
# 156 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_LetsBattle
# 158 "data/maps/Route101/scripts.pory"
	switch VAR_STARTER_MON
# 159 "data/maps/Route101/scripts.pory"
	case 0, Route101_RivalBattle_Trigger_40
# 161 "data/maps/Route101/scripts.pory"
	case 1, Route101_RivalBattle_Trigger_41
# 163 "data/maps/Route101/scripts.pory"
	case 2, Route101_RivalBattle_Trigger_42
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_6:
# 209 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 210 "data/maps/Route101/scripts.pory"
	case 6, Route101_RivalBattle_Trigger_28
# 212 "data/maps/Route101/scripts.pory"
	case 7, Route101_RivalBattle_Trigger_29
# 214 "data/maps/Route101/scripts.pory"
	case 8, Route101_RivalBattle_Trigger_30
# 216 "data/maps/Route101/scripts.pory"
	case 9, Route101_RivalBattle_Trigger_31
# 218 "data/maps/Route101/scripts.pory"
	case 10, Route101_RivalBattle_Trigger_32
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_11:
# 146 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_12:
# 148 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_13:
# 150 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_14:
# 152 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_15:
# 154 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_9

Route101_RivalBattle_Trigger_18:
# 183 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer6
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_19:
# 185 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer7
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_20:
# 187 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer8
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_21:
# 189 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer9
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_22:
# 191 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToPlayer10
	goto Route101_RivalBattle_Trigger_16

Route101_RivalBattle_Trigger_24:
# 239 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToLab
	goto Route101_RivalBattle_Trigger_23

Route101_RivalBattle_Trigger_28:
# 211 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally6
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_29:
# 213 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally7
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_30:
# 215 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally8
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_31:
# 217 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally9
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_32:
# 219 "data/maps/Route101/scripts.pory"
	applymovement 2, Route101_RivalToWally10
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_34:
# 225 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally6
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_35:
# 227 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally7
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_36:
# 229 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally8
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_37:
# 231 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally9
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_38:
# 233 "data/maps/Route101/scripts.pory"
	applymovement 3, Route101_RivalToWally10
	goto Route101_RivalBattle_Trigger_5

Route101_RivalBattle_Trigger_40:
# 160 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_41:
# 162 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_42:
# 164 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_44:
# 197 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TREECKO, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_45:
# 199 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_TORCHIC, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1

Route101_RivalBattle_Trigger_46:
# 201 "data/maps/Route101/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_101_MUDKIP, Route101_Text_RivalDefeated
	goto Route101_RivalBattle_Trigger_1


# 268 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer6:
# 269 "data/maps/Route101/scripts.pory"
	walk_down
# 269 "data/maps/Route101/scripts.pory"
	walk_down
# 270 "data/maps/Route101/scripts.pory"
	walk_left
# 270 "data/maps/Route101/scripts.pory"
	walk_left
# 270 "data/maps/Route101/scripts.pory"
	walk_left
# 270 "data/maps/Route101/scripts.pory"
	walk_left
# 271 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 274 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer7:
# 275 "data/maps/Route101/scripts.pory"
	walk_down
# 275 "data/maps/Route101/scripts.pory"
	walk_down
# 276 "data/maps/Route101/scripts.pory"
	walk_left
# 276 "data/maps/Route101/scripts.pory"
	walk_left
# 276 "data/maps/Route101/scripts.pory"
	walk_left
# 277 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 280 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer8:
# 281 "data/maps/Route101/scripts.pory"
	walk_down
# 281 "data/maps/Route101/scripts.pory"
	walk_down
# 282 "data/maps/Route101/scripts.pory"
	walk_left
# 282 "data/maps/Route101/scripts.pory"
	walk_left
# 283 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 286 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer9:
# 287 "data/maps/Route101/scripts.pory"
	walk_down
# 287 "data/maps/Route101/scripts.pory"
	walk_down
# 288 "data/maps/Route101/scripts.pory"
	walk_left
# 289 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_down
	step_end

# 292 "data/maps/Route101/scripts.pory"
Route101_RivalToPlayer10:
# 293 "data/maps/Route101/scripts.pory"
	walk_down
# 293 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 308 "data/maps/Route101/scripts.pory"
Route101_RivalToWally6:
# 309 "data/maps/Route101/scripts.pory"
	walk_right
# 309 "data/maps/Route101/scripts.pory"
	walk_right
# 309 "data/maps/Route101/scripts.pory"
	walk_right
# 309 "data/maps/Route101/scripts.pory"
	walk_right
# 310 "data/maps/Route101/scripts.pory"
	walk_up
# 310 "data/maps/Route101/scripts.pory"
	walk_up
# 310 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 313 "data/maps/Route101/scripts.pory"
Route101_RivalToWally7:
# 314 "data/maps/Route101/scripts.pory"
	walk_right
# 314 "data/maps/Route101/scripts.pory"
	walk_right
# 314 "data/maps/Route101/scripts.pory"
	walk_right
# 315 "data/maps/Route101/scripts.pory"
	walk_up
# 315 "data/maps/Route101/scripts.pory"
	walk_up
# 315 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 318 "data/maps/Route101/scripts.pory"
Route101_RivalToWally8:
# 319 "data/maps/Route101/scripts.pory"
	walk_right
# 319 "data/maps/Route101/scripts.pory"
	walk_right
# 320 "data/maps/Route101/scripts.pory"
	walk_up
# 320 "data/maps/Route101/scripts.pory"
	walk_up
# 320 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 323 "data/maps/Route101/scripts.pory"
Route101_RivalToWally9:
# 324 "data/maps/Route101/scripts.pory"
	walk_right
# 325 "data/maps/Route101/scripts.pory"
	walk_up
# 325 "data/maps/Route101/scripts.pory"
	walk_up
# 325 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 328 "data/maps/Route101/scripts.pory"
Route101_RivalToWally10:
# 329 "data/maps/Route101/scripts.pory"
	walk_up
# 329 "data/maps/Route101/scripts.pory"
	walk_up
# 329 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 332 "data/maps/Route101/scripts.pory"
Route101_RivalToLab:
# 333 "data/maps/Route101/scripts.pory"
	walk_up
# 333 "data/maps/Route101/scripts.pory"
	walk_up
# 333 "data/maps/Route101/scripts.pory"
	walk_up
# 333 "data/maps/Route101/scripts.pory"
	walk_up
# 333 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_GirlWalking::
# 337 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_GirlWalking, MSGBOX_NPC
	return


Route101_Ronnie_Eventscript::
# 345 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_RONNIE, Route101_Ronnie_Intro, Route101_Ronnie_Defeated
# 346 "data/maps/Route101/scripts.pory"
	msgbox Route101_Ronnie_PostBattle
# 347 "data/maps/Route101/scripts.pory"
	closemessage
	return


Route101_RivalBattle_Trigger_Text_0:
# 247 "data/maps/Route101/scripts.pory"
	.string "Wally: Wait for me!$"

Route101_ItsDangerous::
# 79 "data/maps/Route101/scripts.pory"
	.string "It's dangerous to wander in tall grass\n"
	.string "without a Pokémon.\p"
	.string "I recommend you come back with one.$"

Route101_Text_DudeInGrass::
# 122 "data/maps/Route101/scripts.pory"
	.string "Searching for Pokémon in tall grass is\n"
	.string "so fun!\p"
	.string "The other day, I even found a Pikachu!$"

Route101_Text_MayVsWally::
# 260 "data/maps/Route101/scripts.pory"
	.string "May: Wally! I challenge you to a Pokémon\n"
	.string "battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "May: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.\p"
	.string "Feel free to watch if you would like to\n"
	.string "learn.$"

Route101_Text_BrendanVsWally::
# 264 "data/maps/Route101/scripts.pory"
	.string "Brendan: Wally! I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "Wally: What? Me? A Pokémon battle?\p"
	.string "I don't know how that works.\p"
	.string "Brendan: Don't worry about it.\p"
	.string "I'll challenge {PLAYER} instead.\p"
	.string "Feel free to watch if you would like to\n"
	.string "learn.$"

Route101_Text_LetsBattle::
# 296 "data/maps/Route101/scripts.pory"
	.string "Alright {PLAYER}, let's battle!$"

Route101_Text_RivalDefeated::
# 300 "data/maps/Route101/scripts.pory"
	.string "Wow, {PLAYER}...\n"
	.string "You sure are good at this!$"

Route101_Text_RivalLetsGoToLab::
# 304 "data/maps/Route101/scripts.pory"
	.string "You're a natural!\p"
	.string "Anyways, let's go to my dad's lab.$"

Route101_Text_GirlWalking::
# 340 "data/maps/Route101/scripts.pory"
	.string "Did you know that if you keep walking in\n"
	.string "tall grass, you'll eventually stumble\l"
	.string "upon a wild Pokémon?$"

Route101_Ronnie_Intro::
# 350 "data/maps/Route101/scripts.pory"
	.string "When two trainers' eyes meet, it means\n"
	.string "they have to battle!$"

Route101_Ronnie_Defeated::
# 354 "data/maps/Route101/scripts.pory"
	.string "I lost...$"

Route101_Ronnie_PostBattle::
# 358 "data/maps/Route101/scripts.pory"
	.string "Now you know how battling works!$"
