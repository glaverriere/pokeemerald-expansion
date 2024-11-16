# 1 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_OldWoman::
# 6 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
# 7 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 8 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_Skitty::
# 10 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 11 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
# 16 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end

RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere::
# 18 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "I heard Devon Corporation has been\n"
	.string "invaded by a bunch of thugs.\p"
	.string "Is this what the world has come to?$"
