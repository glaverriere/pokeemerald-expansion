# 1 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 11 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Man::
# 23 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
# 24 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
# 28 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
RustboroCity_PokemonCenter_1F_EventScript_Girl::
# 31 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
# 32 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities::
# 34 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "It's so cool how Pokémon can have\n"
	.string "different personalities!\p"
	.string "My Pokémon has a Impish nature and\n"
	.string "friend's has a Timid nature.\p"
	.string "Next time I catch a Pokémon, I'll try to\n"
	.string "find one that matches my personality.$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon::
# 38 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "Have you had the chance to challenge\n"
	.string "Roxanne, the gym leader?\p"
	.string "She's a tough one!$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor::
# 42 "data/maps/RustboroCity_PokemonCenter_1F/scripts.pory"
	.string "There's an old man that lives in a house\n"
	.string "in this city that gave me an HM!\p"
	.string "I used it on my Nuzleaf and now, he can\n"
	.string "cut small trees.$"
