TestTown_PokeCenter_MapScripts::
	.byte 0


TestTown_PokemonCenter_EventScript_Nurse::
# 6 "data/maps/TestTown_PokeCenter/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, TestTown_PokemonCenter_EventScript_Nurse_2
# 14 "data/maps/TestTown_PokeCenter/scripts.pory"
	msgbox TestTown_PokemonCenter_EventScript_Nurse_Text_0, MSGBOX_NPC
TestTown_PokemonCenter_EventScript_Nurse_1:
	end

TestTown_PokemonCenter_EventScript_Nurse_2:
# 7 "data/maps/TestTown_PokeCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 8 "data/maps/TestTown_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 9 "data/maps/TestTown_PokeCenter/scripts.pory"
	waitmessage
# 10 "data/maps/TestTown_PokeCenter/scripts.pory"
	waitbuttonpress
# 11 "data/maps/TestTown_PokeCenter/scripts.pory"
	release
	goto TestTown_PokemonCenter_EventScript_Nurse_1


TestTown_PokemonCenter_EventScript_FatMan::
# 20 "data/maps/TestTown_PokeCenter/scripts.pory"
	msgbox TestTown_PokemonCenter_Text_FatMan, MSGBOX_NPC
	return


TestTown_PokemonCenter_EventScript_Boy::
# 28 "data/maps/TestTown_PokeCenter/scripts.pory"
	msgbox TestTown_PokemonCenter_Text_Boy, MSGBOX_NPC
	return


TestTown_PokemonCenter_EventScript_Girl::
# 35 "data/maps/TestTown_PokeCenter/scripts.pory"
	msgbox TestTown_PokemonCenter_Text_Girl, MSGBOX_NPC
	return


TestTown_PokemonCenter_EventScript_Nurse_Text_0:
# 14 "data/maps/TestTown_PokeCenter/scripts.pory"
	.string "Hi! Can I help you?$"

TestTown_PokemonCenter_Text_FatMan::
# 23 "data/maps/TestTown_PokeCenter/scripts.pory"
	.string "Do you see the PC right behind me?\p"
	.string "Pokémon trainers use it to store\n"
	.string "Pokémon and items.\p"
	.string "There's one in each Pokémon center\n"
	.string "across Hoenn.\p"
	.string "Neat, isn't it?$"

TestTown_PokemonCenter_Text_Boy::
# 30 "data/maps/TestTown_PokeCenter/scripts.pory"
	.string "I love hanging out here with my\n"
	.string "girlfriend!$"

TestTown_PokemonCenter_Text_Girl::
# 37 "data/maps/TestTown_PokeCenter/scripts.pory"
	.string "It's so fun to spend time with my friend\n"
	.string "at the Pokémon center!$"
