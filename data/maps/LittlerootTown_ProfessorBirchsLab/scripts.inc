# 1 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 2 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE1, 1
# 3 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_AIDE2, 4
# 4 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BIRCH, 2
# 5 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_MAY, 3
# 6 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_BRENDAN, 5
# 7 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
.set LOCALID_WALLY, 6

LittlerootTown_ProfessorBirchsLab_MapScripts::
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GladehavenTown_ProfessorBirchsLab_OnTransition
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 0, GladehavenTown_ProfessorBirchsLab_OnFrame
	.2byte 0


GladehavenTown_ProfessorBirchsLab_OnTransition::
# 18 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 0
	goto_if_eq GladehavenTown_ProfessorBirchsLab_OnTransition_1
	return

GladehavenTown_ProfessorBirchsLab_OnTransition_1:
# 19 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq GladehavenTown_ProfessorBirchsLab_OnTransition_4
# 24 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_GLADEHAVEN_TOWN_BRENDAN
GladehavenTown_ProfessorBirchsLab_OnTransition_3:
# 26 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_GLADEHAVEN_TOWN_WALLY
	return

GladehavenTown_ProfessorBirchsLab_OnTransition_4:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_GLADEHAVEN_TOWN_MAY
	goto GladehavenTown_ProfessorBirchsLab_OnTransition_3


GladehavenTown_ProfessorBirchsLab_OnFrame::
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GladehavenTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message GladehavenTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special EnableNationalPokedex
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_ExplainPokedex
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_RARE_CANDIES
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_KEY_REPEL
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq GladehavenTown_ProfessorBirchsLab_OnFrame_2
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq GladehavenTown_ProfessorBirchsLab_OnFrame_3
GladehavenTown_ProfessorBirchsLab_OnFrame_1:
# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 1
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_ROUTE102_STATE, 0
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_GLADEHAVEN_TOWN_WALLY
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_GLADEHAVEN_TOWN_MAY
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_GLADEHAVEN_TOWN_BRENDAN
# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_HIDE_GLADEHAVEN_TOWN_PROFAIDE
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	return

GladehavenTown_ProfessorBirchsLab_OnFrame_2:
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls
	goto GladehavenTown_ProfessorBirchsLab_OnFrame_1

GladehavenTown_ProfessorBirchsLab_OnFrame_3:
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls
	goto GladehavenTown_ProfessorBirchsLab_OnFrame_1


# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
GladehavenTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
	step_end

GladehavenTown_ProfessorBirchsLab_EventScript_Birch::
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto ProfBirch_EventScript_RatePokedexOrRegister
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_CountlessPokemonAwaitting
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
	return


GladehavenTown_ProfessorBirchsLab_EventScript_Rival::
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_MeetUsInRoute102, MSGBOX_NPC
	return


GladehavenTown_ProfessorBirchsLab_EventScript_Wally::
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_Wally, MSGBOX_NPC
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
	return


LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
	return


LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
	return


GladehavenTown_ProfessorBirchsLab_EventScript_Aide1::
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_NPC
	return


GladehavenTown_ProfessorBirchsLab_EventScript_Aide2::
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox GladehavenTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_NPC
	return


GladehavenTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex::
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, hi, Wally and {PLAYER}!\p"
	.string "I heard you already had your first\n"
	.string "battle a couple of minutes ago. That's\l"
	.string "great!\p"
	.string "{RIVAL}'s been helping with my\n"
	.string "research for a while now.\p"
	.string "Even if {RIVAL} just had their first\n"
	.string "Pokémon, they know a lot about them.\p"
	.string "Wally, {PLAYER}, I ordered this for my\n"
	.string "research and I think you should both\l"
	.string "have it.\p"
	.string "The Pokédex will help you as trainers\n"
	.string "and will help with my ongoing research\l"
	.string "on Pokémon.$"

GladehavenTown_ProfessorBirchsLab_Text_ReceivedPokedex::
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

GladehavenTown_ProfessorBirchsLab_Text_ExplainPokedex::
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The Pokédex is a high-tech\n"
	.string "tool that automatically makes a record\l"
	.string "of any Pokémon you meet or catch.\p"
	.string "My kid, {RIVAL}, goes everywhere\n"
	.string "with it.\p"
	.string "Whenever my kid catches a rare Pokémon\n"
	.string "and records its data in the Pokédex,\l"
	.string "why, {RIVAL} looks for me while I'm\l"
	.string "out doing fieldwork, and shows me.\p"
	.string "Oh! Before I forget.\n"
	.string "Please take these items.$"

GladehavenTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese::
# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, wow, you guys!\n"
	.string "You got a Pokédex, too!\p"
	.string "That's great! Just like me!\n"
	.string "I've got something for you, too!$"

GladehavenTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls::
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: It's fun if you can get a lot of\n"
	.string "Pokémon!\p"
	.string "I'm going to look all over the place\n"
	.string "because I want different Pokémon.\p"
	.string "Wally, {PLAYER}, let's meet in route\n"
	.string "102.\p"
	.string "I'll teach you how to catch a Pokémon\n"
	.string "with a Poké ball.$"

GladehavenTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese::
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Huh!\n"
	.string "So you got a Pokédex, too.\p"
	.string "Well then, here.\n"
	.string "You should have these.$"

GladehavenTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls::
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: You know it's more fun to have\n"
	.string "a whole bunch of Pokémon.\p"
	.string "I'm going to explore all over the place\n"
	.string "to find different Pokémon.\p"
	.string "Wally, {PLAYER}, let's meet in route\n"
	.string "102.\p"
	.string "I'll teach you how to catch a Pokémon\n"
	.string "with a Poké ball.$"

GladehavenTown_ProfessorBirchsLab_Text_MeetUsInRoute102::
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Meet me and Wally in route 102.\n"
	.string "We will learn how to catch Pokémon.$"

GladehavenTown_ProfessorBirchsLab_Text_Wally::
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've all shown me nothing but\n"
	.string "generosity!\p"
	.string "I don't know how will repay any of you...\p"
	.string "I know!\n"
	.string "I'll start by filling my Pokédex as much\l"
	.string "as possible!$"

GladehavenTown_ProfessorBirchsLab_Text_CountlessPokemonAwaitting::
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Countless Pokémon await\n"
	.string "you!\p"
	.string "Argh, I'm getting the itch to get out\n"
	.string "and do fieldwork again!$"

GladehavenTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork::
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The professor isn't one for doing desk\n"
	.string "work.\p"
	.string "He's the type of person who would\n"
	.string "rather go outside and experience\l"
	.string "things than read about them here.$"

GladehavenTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch is studying the habitats\n"
	.string "and distribution of Pokémon.\p"
	.string "The Prof enjoys {RIVAL}'s help, too.\n"
	.string "There's a lot of love there.$"

LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine::
# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
	.string "The Prof must use this for research.$"

LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch::
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"

LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead::
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"
