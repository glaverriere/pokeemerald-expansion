RustboroCity_PokemonSchool_MapScripts::
	.byte 0


RustboroCity_PokemonSchool_EventScript_Teacher::
	return


RustboroCity_PokemonSchool_EventScript_Wally::
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Wally_2
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Wally_AfterBattle, MSGBOX_NPC
RustboroCity_PokemonSchool_EventScript_Wally_1:
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	return

RustboroCity_PokemonSchool_EventScript_Wally_2:
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Wally_BeforeBattle, MSGBOX_NPC
	goto RustboroCity_PokemonSchool_EventScript_Wally_1


RustboroCity_PokemonSchool_EventScript_Roxanne::
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Roxanne1
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_0, MSGBOX_YESNO
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Roxanne_2
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_5
RustboroCity_PokemonSchool_EventScript_Roxanne_1:
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
	return

RustboroCity_PokemonSchool_EventScript_Roxanne_2:
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_1
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 7, Common_Movement_WalkInPlaceFasterDown
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_2
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 6, RustboroCity_PokemonSchool_Movement_Dave
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_DAVE, PokemonSchool_Dave_Defeated
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 6, RustboroCity_PokemonSchool_Movement_Dave2
# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_3
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 2, RustboroCity_PokemonSchool_Movement_Eva
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_EVA, PokemonSchool_Eva_Defeated
# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 2, RustboroCity_PokemonSchool_Movement_Eva2
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_4
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 7, RustboroCity_PokemonSchool_Movement_Wally1
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Wally_HopeICanDoThis
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Roxanne_6
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Roxanne_7
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_SCHOOL_TORCHIC, PokemonSchool_Wally_Defeated
RustboroCity_PokemonSchool_EventScript_Roxanne_5:
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Wally_AfterBattle
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 7, RustboroCity_PokemonSchool_Movement_Wally2
# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Roxanne2
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	playse SE_EXIT
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 10
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	removeobject 8
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_HIDE_ROXANNE_PKMNSCHOOL
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_HIDE_RUSTBOROCITY_GYMGUIDE
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	goto RustboroCity_PokemonSchool_EventScript_Roxanne_1

RustboroCity_PokemonSchool_EventScript_Roxanne_6:
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_SCHOOL_MUDKIP, PokemonSchool_Wally_Defeated
	goto RustboroCity_PokemonSchool_EventScript_Roxanne_5

RustboroCity_PokemonSchool_EventScript_Roxanne_7:
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_SCHOOL_TREECKO, PokemonSchool_Wally_Defeated
	goto RustboroCity_PokemonSchool_EventScript_Roxanne_5


# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Dave:
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Dave2:
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_fast_up
	step_end

# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Eva:
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Eva2:
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
	step_end

# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Wally1:
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Wally2:
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_fast_up
	step_end

RustboroCity_PokemonSchool_EventScript_SchoolKidM2::
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_SchoolKidM2, MSGBOX_NPC
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	return


PokemonSchool_Eventscript_Scott::
# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_SCOTT_STATE, 1
	goto_if_eq PokemonSchool_Eventscript_Scott_2
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, PokemonSchool_Eventscript_Scott_9
PokemonSchool_Eventscript_Scott_8:
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PokemonSchool_Eventscript_Scott_4
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, PokemonSchool_Eventscript_Scott_5
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottFirstTimeMet
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
PokemonSchool_Eventscript_Scott_1:
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	return

PokemonSchool_Eventscript_Scott_2:
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottNextBadge
	goto PokemonSchool_Eventscript_Scott_1

PokemonSchool_Eventscript_Scott_3:
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottAlreadyMetAfterBadge, MSGBOX_YESNO
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottGivesItem
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
	goto PokemonSchool_Eventscript_Scott_1

PokemonSchool_Eventscript_Scott_4:
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottFirstTimeMetAfterBadge, MSGBOX_YESNO
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottGivesItem
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
	goto PokemonSchool_Eventscript_Scott_1

PokemonSchool_Eventscript_Scott_5:
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox PokemonSchool_Text_ScottAlreadyMet
	goto PokemonSchool_Eventscript_Scott_1

PokemonSchool_Eventscript_Scott_9:
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PokemonSchool_Eventscript_Scott_3
	goto PokemonSchool_Eventscript_Scott_8


# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect Pokémon in battle.$"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned Pokémon's HP will drop\n"
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an antidote.$"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its speed drops.\p"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a paralyze heal.$"
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon may wake up on its own,\n"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an awakening.$"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces attack power, and it\n"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a burn heal.$"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an ice heal.$"
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold items, but they\n"
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like potion and antidote.$"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some Pokémon moves can\n"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a Pokémon?\p"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused Pokémon will sometimes\n"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon holding a berry will heal\n"
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold…\p"
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon are to be caught using\n"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Poké balls.\p"
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six Pokémon can accompany\n"
# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a trainer.\p"
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A trainer is someone who catches\n"
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon, raises them, and battles\l"
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A trainer's mission is to defeat\n"
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong trainers who await\l"
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in Pokémon gyms.$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_0:
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, are you ready?$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_1:
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Good, let's start then!$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_2:
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "First up is Dave!$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_3:
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Roxanne: Next is Eva!$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_4:
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Roxanne: And finally, Wally!$"

RustboroCity_PokemonSchool_EventScript_Roxanne_Text_5:
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ok! Come back when you're ready.$"

RustboroCity_PokemonSchool_Text_Roxanne1::
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Roxanne: Hello, my name is Roxanne and\n"
	.string "I'm this city's gym leader!\p"
	.string "I also tutor at this school when the\n"
	.string "teacher is not here.\p"
	.string "Oh? You want to challenge me?\p"
	.string "Hmm, let's see...\p"
	.string "I have an idea!\p"
	.string "If you can win three times in a row\n"
	.string "against my students without healing\l"
	.string "your Pokémon,\p"
	.string "I will let you challenge me at my gym\n"
	.string "later!$"

PokemonSchool_Dave_Defeated::
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's not fair, I went first!$"

PokemonSchool_Eva_Defeated::
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You make it seems so easy!$"

RustboroCity_PokemonSchool_Text_Wally_HopeICanDoThis::
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wally: I think I'm ready to take you on,\n"
	.string "{PLAYER}!$"

PokemonSchool_Wally_Defeated::
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I was maybe a little overconfident...$"

RustboroCity_PokemonSchool_Text_Roxanne2::
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Roxanne: Congrats! I think it means\n"
	.string "you're ready to challenge me.\p"
	.string "Come by the gym whenever and I'll give\n"
	.string "you what you want!$"

RustboroCity_PokemonSchool_Text_Wally_BeforeBattle::
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I'm learning all about status\n"
	.string "conditions that can affect Pokémon!$"

RustboroCity_PokemonSchool_Text_Wally_AfterBattle::
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wow! You beat all of us in a row just like\n"
	.string "that!\p"
	.string "I better go back to studying so I get\n"
	.string "better at battling.$"

RustboroCity_PokemonSchool_Text_SchoolKidM2::
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It can be overwhelming to learn about\n"
	.string "Pokémon battle, but I think I'm doing\l"
	.string "great!$"

PokemonSchool_Text_ScottFirstTimeMet::
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Are you a student here? No?\p"
	.string "Oh! But you're a Pokémon trainer. I can\n"
	.string "see it in your face.\p"
	.string "My name is Scott and I'm a board member\n"
	.string "of the Pokémon league.\p"
	.string "Which means I oversee all Pokémon gyms\n"
	.string "and of course the Pokémon league.\p"
	.string "Recently, I've made some changes to\n"
	.string "ensure it's not too easy to earn\l"
	.string "badges.\p"
	.string "So, some gym leaders and elite four\n"
	.string "members were promoted and some were\l"
	.string "demoted.\p"
	.string "Also, I made some of them change\n"
	.string "Pokémon type to balance things out.\p"
	.string "Anyways, it was nice meeting you!$"

PokemonSchool_Text_ScottAlreadyMet::
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Are you going to tackle the gym\n"
	.string "in this city?\p"
	.string "Roxanne is the leader and her specialty\n"
	.string "is ground-type Pokémon.\p"
	.string "If you challenge her, I'd love to have\n"
	.string "your opinion on how difficult the\l"
	.string "battle was.\p"
	.string "I'll maybe even throw you a little gift\n"
	.string "to thank you.$"

PokemonSchool_Text_ScottFirstTimeMetAfterBadge::
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Are you a student here? No?\p"
	.string "Oh! But you're a Pokémon trainer. I can\n"
	.string "see it in your face.\p"
	.string "My name is Scott and I'm a board member\n"
	.string "of the Pokémon league.\p"
	.string "Which means I oversee all Pokémon gyms\n"
	.string "and of course the Pokémon league.\p"
	.string "Recently, I've made some changes to\n"
	.string "ensure it's not too easy to earn\l"
	.string "badges.\p"
	.string "So, some gym leaders and elite four\n"
	.string "members were promoted and some were\l"
	.string "demoted.\p"
	.string "Also, I made some of them change\n"
	.string "Pokémon type to balance things out.\p"
	.string "Is that a ground badge?\p"
	.string "Good job! Was the battle with Roxanne\n"
	.string "too easy?$"

PokemonSchool_Text_ScottGivesItem::
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I see... Thank you for taking the time.\p"
	.string "The board really appreciates it.\p"
	.string "Anyways, take this as a thank you gift.$"

PokemonSchool_Text_ScottAlreadyMetAfterBadge::
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: Is that a ground badge?\p"
	.string "Good job! Was the battle with Roxanne\n"
	.string "too easy?$"

PokemonSchool_Text_ScottNextBadge::
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Scott: The next badge on your list\n"
	.string "should be in Dewford town.\p"
	.string "The gym leader, Glacia, is a grass-type\n"
	.string "Pokémon trainer.$"
