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
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 29 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 30 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 31 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_PlayerYouChooseFirst
# 32 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 33 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 34 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 35 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGoAhead
# 36 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 37 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 6
# 38 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


# 41 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_GoToDad:
# 42 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 42 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalToBag:
# 46 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 47 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 47 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 48 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 48 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 49 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 50 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 51 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 51 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 52 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 53 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 54 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 54 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 55 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 55 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 56 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 56 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 57 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 58 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Gym_Rival::
# 78 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 79 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 80 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_RivalCantDecide
# 81 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 82 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 83 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 84 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_NormanWaitsForPokemon::
# 88 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 89 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 90 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 6
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_2
# 96 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 7
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_3
TestTown_Gym_NormanWaitsForPokemon_1:
# 102 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_NormanWaitsForPokemon_2:
# 91 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadTakeYourTime
# 92 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 93 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 94 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	goto TestTown_Gym_NormanWaitsForPokemon_1

TestTown_Gym_NormanWaitsForPokemon_3:
# 97 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGoToBirch
# 98 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 99 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 100 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	goto TestTown_Gym_NormanWaitsForPokemon_1


TestTown_Gym_Eventscript_TreeckoBall::
# 118 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 119 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 120 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_0, MSGBOX_YESNO
# 121 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TreeckoBall_2
# 133 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 134 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TreeckoBall_1:
# 136 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 137 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TreeckoBall_2:
# 122 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 123 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_1
# 125 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 126 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 127 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 128 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 129 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 130 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TreeckoBall_1


TestTown_Gym_Eventscript_TorchicBall::
# 141 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 142 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 143 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_0, MSGBOX_YESNO
# 144 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TorchicBall_2
# 156 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 157 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TorchicBall_1:
# 159 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 160 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TorchicBall_2:
# 145 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 146 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_1
# 148 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 149 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 150 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 151 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 152 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 153 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TorchicBall_1


TestTown_Gym_Eventscript_MudkipBall::
# 164 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 165 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 166 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_0, MSGBOX_YESNO
# 167 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_MudkipBall_2
# 179 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 180 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_MudkipBall_1:
# 182 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 183 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_MudkipBall_2:
# 168 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 169 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_1
# 171 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 172 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 174 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 175 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 176 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_MudkipBall_1


NicknamePartyMon::
# 188 "data/maps/TestTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 189 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 190 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 194 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 195 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
	return

NicknamePartyMon_2:
# 191 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 192 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


StarterReceived::
# 199 "data/maps/TestTown_Gym/scripts.pory"
	delay 16
# 200 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq StarterReceived_1
# 214 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq StarterReceived_2
# 229 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTreecko
# 230 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 231 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 232 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 233 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 234 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 235 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 236 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 237 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTreeckoToDad
# 238 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMudkipToDad
# 239 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 240 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_1:
# 201 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTorchic
# 202 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 203 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 204 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 205 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 206 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 207 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 208 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 209 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTorchicToDad
# 210 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTreeckoToDad
# 211 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 212 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_2:
# 215 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesMudkip
# 216 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 217 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 218 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 219 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 220 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 221 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 222 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 223 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalMudkipToDad
# 224 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTorchicToDad
# 225 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 226 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return


# 244 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTorchic:
# 245 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 246 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 246 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 247 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 248 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 251 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTorchicToDad:
# 252 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 253 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 253 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 254 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 255 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 258 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTreeckoToDad:
# 259 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 259 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 261 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 264 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesMudkip:
# 265 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 266 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 266 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 269 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalMudkipToDad:
# 270 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 270 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 271 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 272 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 275 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTorchicToDad:
# 276 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 277 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 277 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 278 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 281 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTreecko:
# 282 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 283 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 283 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 286 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTreeckoToDad:
# 287 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 287 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 288 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 289 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 292 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerMudkipToDad:
# 293 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 293 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 294 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 295 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
	step_end

TestTown_Gym_WallyEnters::
# 299 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 300 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_0
# 301 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 302 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 303 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 304 "data/maps/TestTown_Gym/scripts.pory"
	addobject 4
# 305 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 306 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyApproachesDad
# 307 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 308 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IAmWally
# 309 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 310 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 311 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 312 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 313 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_MayWouldLoveToTeachYou
# 314 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 316 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 317 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 318 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGivesWallyAPokemon
# 319 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 320 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq TestTown_Gym_WallyEnters_2
# 329 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq TestTown_Gym_WallyEnters_3
# 339 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTorchic
# 340 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 342 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 343 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 344 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 345 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTorchicBackToDad
TestTown_Gym_WallyEnters_1:
# 347 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 348 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyCantBelieveIt
# 349 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 351 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 352 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IllRaceYouToTheLab
# 354 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 355 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalRunsOutOfGym
# 356 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 357 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 358 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 359 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 360 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 361 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 2
# 362 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_1
# 363 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 364 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyOutOfGym
# 365 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 366 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 367 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 368 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 4
# 369 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_MAY
# 370 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 371 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
# 372 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 7
# 373 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_WallyEnters_2:
# 321 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToMudkip
# 322 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 323 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 324 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 325 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 326 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 327 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyMudkipBackToDad
	goto TestTown_Gym_WallyEnters_1

TestTown_Gym_WallyEnters_3:
# 330 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTreecko
# 331 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 332 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 333 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 334 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 335 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 336 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTreeckoBackToDad
	goto TestTown_Gym_WallyEnters_1


# 376 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyApproachesDad:
# 377 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 378 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 379 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 394 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToMudkip:
# 395 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 395 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 396 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 396 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 397 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 400 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyMudkipBackToDad:
# 401 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 401 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 402 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 402 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 403 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 406 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTreecko:
# 407 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 407 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 410 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTreeckoBackToDad:
# 411 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 411 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 412 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 415 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTorchic:
# 416 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 416 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 417 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 418 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 421 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTorchicBackToDad:
# 422 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 423 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 423 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 424 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 435 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalRunsOutOfGym:
# 436 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
# 436 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
	step_end

# 439 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyOutOfGym:
# 440 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 441 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 442 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
	step_end

TestTown_Gym_Eventscript_TreeckoBall_Text_0:
# 120 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestTown_Gym_Eventscript_TreeckoBall_Text_1:
# 124 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Treecko!$"

TestTown_Gym_Eventscript_TorchicBall_Text_0:
# 143 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestTown_Gym_Eventscript_TorchicBall_Text_1:
# 147 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Torchic!$"

TestTown_Gym_Eventscript_MudkipBall_Text_0:
# 166 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestTown_Gym_Eventscript_MudkipBall_Text_1:
# 170 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Mudkip!$"

NicknamePartyMon_Text_0:
# 188 "data/maps/TestTown_Gym/scripts.pory"
	.string "Give it a nickname?$"

StarterReceived_Text_0:
# 204 "data/maps/TestTown_Gym/scripts.pory"
	.string "I choose this one!$"

TestTown_Gym_WallyEnters_Text_0:
# 300 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: So...$"

TestTown_Gym_WallyEnters_Text_1:
# 362 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Wait for me!$"

TestTown_Gym_WelcomeToMyGym::
# 61 "data/maps/TestTown_Gym/scripts.pory"
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
# 65 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: They're all so cool and unique.\p"
	.string "I really don't know which one to\n"
	.string "choose...$"

TestTown_Gym_PlayerYouChooseFirst::
# 69 "data/maps/TestTown_Gym/scripts.pory"
	.string "{PLAYER}! You should choose first.\p"
	.string "I can't make up my mind.$"

TestTown_Gym_DadGoAhead::
# 73 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: Alright {PLAYER}, go ahead.$"

TestTown_Gym_RivalCantDecide::
# 105 "data/maps/TestTown_Gym/scripts.pory"
	.string "Pick first.\p"
	.string "It will be easier for me to choose if\n"
	.string "there is only two Pokémon left.$"

TestTown_Gym_DadTakeYourTime::
# 109 "data/maps/TestTown_Gym/scripts.pory"
	.string "The Poké balls are right behind me.\p"
	.string "Take your time, it's a very important\n"
	.string "decision to make.$"

TestTown_Gym_DadGoToBirch::
# 113 "data/maps/TestTown_Gym/scripts.pory"
	.string "Once you get stronger as a trainer, I'll\n"
	.string "gladly challenge you.\p"
	.string "For now, go meet your friends at\n"
	.string "Professor Birch's lab.\p"
	.string "It's north of our town.$"

TestTown_Gym_IAmWally::
# 382 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Um, hi, my name is Wally and I'm\n"
	.string "new in Hoenn.\p"
	.string "I'd like to learn how to catch a Pokémon\n"
	.string "of my own, but I don't know how.\p"
	.string "Professor Birch told me someone here\n"
	.string "could help me with that.$"

TestTown_Gym_MayWouldLoveToTeachYou::
# 386 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: Hi, Wally! I'm May and this is\n"
	.string "{PLAYER}.\p"
	.string "Professor Birch is my dad, so I've seen\n"
	.string "him catch Pokémon plenty of times.\p"
	.string "I would love to teach you how to catch\n"
	.string "one!$"

TestTown_Gym_DadGivesWallyAPokemon::
# 390 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: How nice of you to offer!\p"
	.string "Listen Wally, you come just at the right\n"
	.string "moment.\p"
	.string "May and {PLAYER} just chose their\n"
	.string "first Pokémon and there's one more left\l"
	.string "behind me.\p"
	.string "Would you like to have it?\p"
	.string "Wally: Really?\p"
	.string "You would give me a Pokémon just like\n"
	.string "that?\p"
	.string "Dad: Yes, take it-It's yours!\p"
	.string "Wally: I don't know what to say...\p"
	.string "Thank you so much!\p"
	.string "It's so nice of you!$"

TestTown_Gym_WallyCantBelieveIt::
# 427 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Thank you again-I can't believe\n"
	.string "it!\p"
	.string "Dad: You're welcome.\p"
	.string "I'm just happy I could help you.\p"
	.string "Now, your adventure begins.\p"
	.string "Go see Professor Birch, he has\n"
	.string "something to give to you.\p"
	.string "Don't forget to bring your new friend,\n"
	.string "Wally, with you!$"

TestTown_Gym_IllRaceYouToTheLab::
# 431 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: My Dad's lab is in the town north of\n"
	.string "here.\p"
	.string "I'll race both of you to it!$"
