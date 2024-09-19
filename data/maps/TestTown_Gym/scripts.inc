TestTown_Gym_MapScripts::
# 2 "data/maps/TestTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TestTown_Gym_OnTransition
# 3 "data/maps/TestTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TestTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TestTown_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/TestTown_Gym/scripts.pory"
	map_script_2 VAR_TESTTOWN_INTRO_STATE, 5, TestTown_Gym_OnFrame1
	.2byte 0


TestTown_Gym_OnTransition::
# 9 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 5
	goto_if_eq TestTown_Gym_OnTransition_1
	return

TestTown_Gym_OnTransition_1:
# 10 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_ASSISTANT
# 11 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 12 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
	return


TestTown_Gym_OnFrame1::
# 17 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 18 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 19 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Gym_GoToDad
# 20 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_GoToDad
# 21 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 22 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WelcomeToMyGym
# 23 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 24 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalToBag
# 25 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 26 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 27 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_ICantDecide
# 28 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 29 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 6
# 30 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


# 33 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_GoToDad:
# 34 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 34 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalToBag:
# 38 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 39 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 39 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 40 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 40 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 41 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 42 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 43 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 43 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 44 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 45 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 46 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 46 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 47 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 47 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 48 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 48 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 49 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 50 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Gym_Rival::
# 62 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 63 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 64 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_RivalCantDecide
# 65 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 66 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_NormanWaitsForPokemon::
# 70 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 71 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 72 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadTakeYourTime
# 73 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 74 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 75 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 76 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_Eventscript_TreeckoBall::
# 88 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 89 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 90 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_0, MSGBOX_YESNO
# 91 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TreeckoBall_2
# 103 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 104 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TreeckoBall_1:
# 106 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 107 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TreeckoBall_2:
# 92 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 93 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_1
# 95 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 96 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 97 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 98 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 99 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 100 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TreeckoBall_1


TestTown_Gym_Eventscript_TorchicBall::
# 111 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 112 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 113 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_0, MSGBOX_YESNO
# 114 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TorchicBall_2
# 126 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 127 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TorchicBall_1:
# 129 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 130 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TorchicBall_2:
# 115 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 116 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 117 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_1
# 118 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 119 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 120 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 121 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 122 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 123 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TorchicBall_1


TestTown_Gym_Eventscript_MudkipBall::
# 134 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 135 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 136 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_0, MSGBOX_YESNO
# 137 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_MudkipBall_2
# 149 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 150 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_MudkipBall_1:
# 152 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 153 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_MudkipBall_2:
# 138 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 139 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 140 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_1
# 141 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 142 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 143 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 144 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 145 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 146 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_MudkipBall_1


NicknamePartyMon::
# 158 "data/maps/TestTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 159 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 160 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 164 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 165 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
	return

NicknamePartyMon_2:
# 161 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 162 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


StarterReceived::
# 169 "data/maps/TestTown_Gym/scripts.pory"
	delay 16
# 170 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq StarterReceived_1
# 183 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq StarterReceived_2
# 197 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTreecko
# 198 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 199 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 200 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 201 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 202 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 203 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 204 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 205 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTreeckoToDad
# 206 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMudkipToDad
# 207 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	return

StarterReceived_1:
# 171 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTorchic
# 172 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 173 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 174 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 175 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 176 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 177 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 178 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 179 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTorchicToDad
# 180 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTreeckoToDad
# 181 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	return

StarterReceived_2:
# 184 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesMudkip
# 185 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 186 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 187 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 188 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 189 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 190 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 191 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 192 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalMudkipToDad
# 193 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTorchicToDad
# 194 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	return


# 211 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTorchic:
# 212 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 213 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 213 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 214 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 215 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 218 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTorchicToDad:
# 219 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 220 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 220 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 221 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 222 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 225 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTreeckoToDad:
# 226 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 226 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 227 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 227 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 228 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 231 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesMudkip:
# 232 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 233 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 233 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 236 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalMudkipToDad:
# 237 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 237 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 238 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 239 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 242 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTorchicToDad:
# 243 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 244 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 244 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 245 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 248 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTreecko:
# 249 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 250 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 250 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTreeckoToDad:
# 254 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 254 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 255 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 256 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 259 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerMudkipToDad:
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 261 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 262 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
	step_end

TestTown_Gym_Eventscript_TreeckoBall_Text_0:
# 90 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestTown_Gym_Eventscript_TreeckoBall_Text_1:
# 94 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Treecko!$"

TestTown_Gym_Eventscript_TorchicBall_Text_0:
# 113 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestTown_Gym_Eventscript_TorchicBall_Text_1:
# 117 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Torchic!$"

TestTown_Gym_Eventscript_MudkipBall_Text_0:
# 136 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestTown_Gym_Eventscript_MudkipBall_Text_1:
# 140 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Mudkip!$"

NicknamePartyMon_Text_0:
# 158 "data/maps/TestTown_Gym/scripts.pory"
	.string "Give it a nickname?$"

StarterReceived_Text_0:
# 174 "data/maps/TestTown_Gym/scripts.pory"
	.string "I choose this one!$"

TestTown_Gym_WelcomeToMyGym::
# 53 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: Welcome to my gym.\p"
	.string "I hope you are ready, you have a very\n"
	.string "difficult decision to make.\p"
	.string "Behind me, there's three Poké balls.\p"
	.string "Each one containing a different\n"
	.string "Pokémon.\p"
	.string "You must choose your first partner for\n"
	.string "your journey.\p"
	.string "May, would you do us the honor of\n"
	.string "choosing first?\p"
	.string "May: Yes! Thank you so much for this\n"
	.string "opportunity, Norman!$"

TestTown_Gym_ICantDecide::
# 57 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: They're all so cool and unique.\p"
	.string "I really don't know which one to\n"
	.string "choose...\p"
	.string "{PLAYER}! You should choose first.\p"
	.string "I can't make up my mind.\p"
	.string "Dad: Alright {PLAYER}, go ahead.$"

TestTown_Gym_RivalCantDecide::
# 79 "data/maps/TestTown_Gym/scripts.pory"
	.string "Pick first.\p"
	.string "It will be easier for me to choose if\n"
	.string "there is only two Pokémon left.$"

TestTown_Gym_DadTakeYourTime::
# 83 "data/maps/TestTown_Gym/scripts.pory"
	.string "The bag is right behind me.\p"
	.string "Take your time, it's a very important\n"
	.string "decision to make.$"
