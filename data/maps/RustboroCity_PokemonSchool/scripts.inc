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
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_EventScript_Roxanne_Text_5
RustboroCity_PokemonSchool_EventScript_Roxanne_1:
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
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


# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Dave:
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Dave2:
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_fast_up
	step_end

# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Eva:
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Eva2:
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
	step_end

# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Wally1:
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Wally2:
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_fast_up
	step_end

# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
PokemonSchool_Player_WalksBackwards:
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock_facing_direction
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	unlock_facing_direction
	step_end

# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
PokemonSchool_RoxanneExits:
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
	step_end

RustboroCity_PokemonSchool_EventScript_SchoolKidM2::
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_SchoolKidM2, MSGBOX_NPC
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	return


# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect Pokémon in battle.$"
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned Pokémon's HP will drop\n"
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an antidote.$"
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its speed drops.\p"
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a paralyze heal.$"
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon may wake up on its own,\n"
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an awakening.$"
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces attack power, and it\n"
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a burn heal.$"
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an ice heal.$"
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold items, but they\n"
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like potion and antidote.$"
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some Pokémon moves can\n"
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a Pokémon?\p"
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused Pokémon will sometimes\n"
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A Pokémon holding a berry will heal\n"
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon can hold…\p"
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon are to be caught using\n"
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Poké balls.\p"
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six Pokémon can accompany\n"
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a trainer.\p"
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A trainer is someone who catches\n"
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon, raises them, and battles\l"
# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A trainer's mission is to defeat\n"
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong trainers who await\l"
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in Pokémon gyms.$"
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 360 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 361 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 362 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 363 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 364 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 365 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 366 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 367 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this SCHOOL?\n"
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a TRAINER, too?\p"
# 369 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 370 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a POKéMON learn the move CUT.\p"
# 371 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 372 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has CUT.$"
# 373 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 375 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 378 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 379 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 380 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
# 381 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\n"
# 382 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 383 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 384 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 386 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
# 387 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 388 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 389 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 390 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 392 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 393 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 394 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 395 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 396 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 397 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 398 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\p"
# 399 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 400 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting TRAINER like yourself.\p"
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 402 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 403 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 404 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"

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
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Ok! Come back when you're ready.$"

RustboroCity_PokemonSchool_Text_Roxanne1::
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
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
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's not fair, I went first!$"

PokemonSchool_Eva_Defeated::
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You make it seems so easy!$"

RustboroCity_PokemonSchool_Text_Wally_HopeICanDoThis::
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wally: I think I'm ready to take you on,\n"
	.string "{PLAYER}!$"

PokemonSchool_Wally_Defeated::
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I was maybe a little overconfident...$"

RustboroCity_PokemonSchool_Text_Roxanne2::
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Roxanne: Congrats! I think it means\n"
	.string "you're ready to challenge me.\p"
	.string "Come by the gym whenever and I'll give\n"
	.string "you what you want!$"

RustboroCity_PokemonSchool_Text_Wally_BeforeBattle::
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hi {PLAYER}!\p"
	.string "I'm learning all about status\n"
	.string "conditions that can affect Pokémon!$"

RustboroCity_PokemonSchool_Text_Wally_AfterBattle::
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wow! You beat all of us in a row just like\n"
	.string "that!\p"
	.string "I better go back to studying so I get\n"
	.string "better at battling.$"

RustboroCity_PokemonSchool_Text_SchoolKidM2::
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It can be overwhelming to learn about\n"
	.string "Pokémon battle, but I think I'm doing\l"
	.string "great!$"
