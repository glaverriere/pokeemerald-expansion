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
	msgbox TestTown_Gym_RivalCantDecide, MSGBOX_NPC
	return


TestTown_Gym_NormanWaitsForPokemon::
# 82 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 83 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 84 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 6
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_2
# 90 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 7
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_3
TestTown_Gym_NormanWaitsForPokemon_1:
# 96 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_NormanWaitsForPokemon_2:
# 85 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadTakeYourTime
# 86 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 87 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	goto TestTown_Gym_NormanWaitsForPokemon_1

TestTown_Gym_NormanWaitsForPokemon_3:
# 91 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGoToBirch
# 92 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 93 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 94 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
	goto TestTown_Gym_NormanWaitsForPokemon_1


TestTown_Gym_Eventscript_TreeckoBall::
# 112 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 113 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 114 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_0, MSGBOX_YESNO
# 115 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TreeckoBall_2
# 127 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 128 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TreeckoBall_1:
# 130 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 131 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TreeckoBall_2:
# 116 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 117 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_1
# 119 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 120 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 121 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 122 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 123 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 124 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TreeckoBall_1


TestTown_Gym_Eventscript_TorchicBall::
# 135 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 136 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 137 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_0, MSGBOX_YESNO
# 138 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TorchicBall_2
# 150 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 151 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TorchicBall_1:
# 153 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 154 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TorchicBall_2:
# 139 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 140 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_1
# 142 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 143 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 144 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 145 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 146 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 147 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TorchicBall_1


TestTown_Gym_Eventscript_MudkipBall::
# 158 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 159 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 160 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_0, MSGBOX_YESNO
# 161 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_MudkipBall_2
# 173 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 174 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_MudkipBall_1:
# 176 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 177 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_MudkipBall_2:
# 162 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 163 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 164 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_1
# 165 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 166 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 167 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 168 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 169 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 170 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_MudkipBall_1


NicknamePartyMon::
# 182 "data/maps/TestTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 183 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 184 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 188 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 189 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
	return

NicknamePartyMon_2:
# 185 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 186 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


StarterReceived::
# 193 "data/maps/TestTown_Gym/scripts.pory"
	delay 16
# 194 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq StarterReceived_1
# 208 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq StarterReceived_2
# 223 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTreecko
# 224 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 225 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 226 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 227 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 228 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 229 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 230 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 231 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTreeckoToDad
# 232 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMudkipToDad
# 233 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 234 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_1:
# 195 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTorchic
# 196 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 197 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 198 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 199 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 200 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 201 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 202 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 203 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTorchicToDad
# 204 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTreeckoToDad
# 205 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 206 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_2:
# 209 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesMudkip
# 210 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 211 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 212 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 213 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 214 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 215 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 216 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 217 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalMudkipToDad
# 218 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTorchicToDad
# 219 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 220 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return


# 238 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTorchic:
# 239 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 240 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 240 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 241 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 242 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 245 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTorchicToDad:
# 246 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 247 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 247 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 248 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 249 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 252 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTreeckoToDad:
# 253 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 253 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 254 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 254 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 255 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 258 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesMudkip:
# 259 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 260 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalMudkipToDad:
# 264 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 264 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 265 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 266 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 269 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTorchicToDad:
# 270 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 271 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 271 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 272 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 275 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTreecko:
# 276 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 277 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 277 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 280 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTreeckoToDad:
# 281 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 281 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 282 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 283 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 286 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerMudkipToDad:
# 287 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 287 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 288 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 289 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
	step_end

TestTown_Gym_WallyEnters::
# 293 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 294 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_0
# 295 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 296 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 297 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 298 "data/maps/TestTown_Gym/scripts.pory"
	addobject 4
# 299 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 300 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyApproachesDad
# 301 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 302 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IAmWally
# 303 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
# 304 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 305 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 306 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 307 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_MayWouldLoveToTeachYou
# 308 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
# 309 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 310 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 311 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 312 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGivesWallyAPokemon
# 313 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 314 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq TestTown_Gym_WallyEnters_2
# 323 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq TestTown_Gym_WallyEnters_3
# 333 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTorchic
# 334 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 335 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 336 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 337 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 338 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 339 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTorchicBackToDad
TestTown_Gym_WallyEnters_1:
# 341 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 342 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyCantBelieveIt
# 343 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
# 344 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 345 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 346 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IllRaceYouToTheLab
# 348 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 349 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalRunsOutOfGym
# 350 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 351 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 352 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 354 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 355 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 2
# 356 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_1
# 357 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 358 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyOutOfGym
# 359 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 360 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 361 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 362 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 4
# 363 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_MAY
# 364 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 365 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
# 366 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 7
# 367 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_WallyEnters_2:
# 315 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToMudkip
# 316 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 317 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 318 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 319 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 320 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 321 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyMudkipBackToDad
	goto TestTown_Gym_WallyEnters_1

TestTown_Gym_WallyEnters_3:
# 324 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTreecko
# 325 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 326 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 327 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 328 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 329 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 330 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTreeckoBackToDad
	goto TestTown_Gym_WallyEnters_1


# 370 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyApproachesDad:
# 371 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 372 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 373 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 388 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToMudkip:
# 389 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 389 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 390 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 390 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 391 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 394 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyMudkipBackToDad:
# 395 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 395 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 396 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 396 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 397 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 400 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTreecko:
# 401 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 401 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 404 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTreeckoBackToDad:
# 405 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 405 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 406 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 409 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTorchic:
# 410 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 410 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 411 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 412 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 415 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTorchicBackToDad:
# 416 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 417 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 417 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 418 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 429 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalRunsOutOfGym:
# 430 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
# 430 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
	step_end

# 433 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyOutOfGym:
# 434 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 435 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 436 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
	step_end

TestTown_Gym_Trigger_NoStarter::
# 440 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 441 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DontLeave
# 442 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 443 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 444 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 445 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_Eventscript_TreeckoBall_Text_0:
# 114 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestTown_Gym_Eventscript_TreeckoBall_Text_1:
# 118 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Treecko!$"

TestTown_Gym_Eventscript_TorchicBall_Text_0:
# 137 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestTown_Gym_Eventscript_TorchicBall_Text_1:
# 141 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Torchic!$"

TestTown_Gym_Eventscript_MudkipBall_Text_0:
# 160 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestTown_Gym_Eventscript_MudkipBall_Text_1:
# 164 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Mudkip!$"

NicknamePartyMon_Text_0:
# 182 "data/maps/TestTown_Gym/scripts.pory"
	.string "Give it a nickname?$"

StarterReceived_Text_0:
# 198 "data/maps/TestTown_Gym/scripts.pory"
	.string "I choose this one!$"

TestTown_Gym_WallyEnters_Text_0:
# 294 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: So...$"

TestTown_Gym_WallyEnters_Text_1:
# 356 "data/maps/TestTown_Gym/scripts.pory"
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
# 99 "data/maps/TestTown_Gym/scripts.pory"
	.string "Pick first.\p"
	.string "It will be easier for me to choose if\n"
	.string "there is only two Pokémon left.$"

TestTown_Gym_DadTakeYourTime::
# 103 "data/maps/TestTown_Gym/scripts.pory"
	.string "The Poké balls are right behind me.\p"
	.string "Take your time, it's a very important\n"
	.string "decision to make.$"

TestTown_Gym_DadGoToBirch::
# 107 "data/maps/TestTown_Gym/scripts.pory"
	.string "Once you get stronger as a trainer, I'll\n"
	.string "gladly challenge you.\p"
	.string "For now, go meet your friends at\n"
	.string "Professor Birch's lab.\p"
	.string "It's north of our town.$"

TestTown_Gym_IAmWally::
# 376 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Um, hi, my name is Wally and I'm\n"
	.string "new in Hoenn.\p"
	.string "I'd like to learn how to catch a Pokémon\n"
	.string "of my own, but I don't know how.\p"
	.string "Professor Birch told me someone here\n"
	.string "could help me with that.$"

TestTown_Gym_MayWouldLoveToTeachYou::
# 380 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: Hi, Wally! I'm May and this is\n"
	.string "{PLAYER}.\p"
	.string "Professor Birch is my dad, so I've seen\n"
	.string "him catch Pokémon plenty of times.\p"
	.string "I would love to teach you how to catch\n"
	.string "one!$"

TestTown_Gym_DadGivesWallyAPokemon::
# 384 "data/maps/TestTown_Gym/scripts.pory"
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
# 421 "data/maps/TestTown_Gym/scripts.pory"
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
# 425 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: My Dad's lab is in the town north of\n"
	.string "here.\p"
	.string "I'll race both of you to it!$"

TestTown_Gym_DontLeave::
# 448 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: {PLAYER}!\p"
	.string "Don't leave without your Pokémon!$"
