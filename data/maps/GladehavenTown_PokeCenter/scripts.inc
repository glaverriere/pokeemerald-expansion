GladehavenTown_PokeCenter_MapScripts::
# 2 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GladehavenTown_PokemonCenter_OnTransition
	.byte 0


GladehavenTown_PokemonCenter_OnTransition::
# 6 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
	return


GladehavenTown_PokemonCenter_EventScript_Nurse::
# 10 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	waitmessage
# 13 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	waitbuttonpress
# 14 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	release
	return


GladehavenTown_PokeCenter_EventScript_Girl::
# 18 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	msgbox GladehavenTown_PokeCenter_Text_Girl, MSGBOX_NPC
	return


GladehavenTown_PokeCenter_EventScript_PokeFan::
# 26 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	msgbox GladehavenTown_PokeCenter_Text_PokeFan, MSGBOX_NPC
	return


GladehavenTown_PokeCenter_Text_Girl::
# 21 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	.string "Not_done$"

GladehavenTown_PokeCenter_Text_PokeFan::
# 29 "data/maps/GladehavenTown_PokeCenter/scripts.pory"
	.string "Not_done$"