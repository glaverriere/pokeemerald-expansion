# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees::
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
	.string "Bay Harbor, my husband helped out.\p"
	.string "His Pokémon used Cut to clear the trees\n"
	.string "and make place for the buildings.\p"
	.string "He made a deal with Devon Coprs so we\n"
	.string "could keep our lovely home.$"

RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse::
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When I was younger, I used to Cut trees\n"
	.string "all the time with my Pokémon.\p"
	.string "Yes, it was my job.\n"
	.string "And I loved to do it.\p"
	.string "It was a great time to bond with my\n"
	.string "Pokémon.\p"
	.string "Thank you for listening to my little\n"
	.string "story.\p"
	.string "As a reward, I want you to have the\n"
	.string "chance to experience this special bond\l"
	.string "with your Pokémon.\p"
	.string "Here, take this Hidden Machine!\n"
	.string "Don't be shy, take it!$"

RustboroCity_CuttersHouse_Text_ExplainCut::
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That Hidden Machine, or HM for short,\n"
	.string "contains the move Cut.\p"
	.string "An HM move is one that can be used by\n"
	.string "Pokémon outside of battle.\p"
	.string "Any Pokémon that's learned Cut can\n"
	.string "chop down thin trees if the trainer has\l"
	.string "earned the earth badge.\p"
	.string "And, unlike a TM, an HM can be used more\n"
	.string "than once.$"
