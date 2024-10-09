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
	checkplayergender
# 11 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_ASSISTANT
# 12 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
# 13 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnTransition_3
# 17 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_MAY
	return

TestTown_Gym_OnTransition_3:
# 14 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
	return


TestTown_Gym_OnFrame1::
# 23 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 24 "data/maps/TestTown_Gym/scripts.pory"
	checkplayergender
# 25 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 26 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TestTown_Gym_GoToDad
# 27 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_2
# 31 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, TestTown_Gym_GoToDad
TestTown_Gym_OnFrame1_1:
# 33 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 34 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_6
# 38 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WelcomeToMyGym_Female
TestTown_Gym_OnFrame1_5:
# 40 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 41 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_10
# 45 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, TestTown_Gym_RivalToBag
TestTown_Gym_OnFrame1_9:
# 47 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 48 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 49 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_14
# 53 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_ICantDecide_Brendan
TestTown_Gym_OnFrame1_13:
# 55 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_18
# 59 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
TestTown_Gym_OnFrame1_17:
# 61 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 63 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_PlayerYouChooseFirst
# 64 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_OnFrame1_22
# 68 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
TestTown_Gym_OnFrame1_21:
# 70 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 71 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 72 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGoAhead
# 73 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 74 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 6
# 75 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_OnFrame1_2:
# 28 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_GoToDad
	goto TestTown_Gym_OnFrame1_1

TestTown_Gym_OnFrame1_6:
# 35 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WelcomeToMyGym_Male
	goto TestTown_Gym_OnFrame1_5

TestTown_Gym_OnFrame1_10:
# 42 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalToBag
	goto TestTown_Gym_OnFrame1_9

TestTown_Gym_OnFrame1_14:
# 50 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_ICantDecide_May
	goto TestTown_Gym_OnFrame1_13

TestTown_Gym_OnFrame1_18:
# 56 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	goto TestTown_Gym_OnFrame1_17

TestTown_Gym_OnFrame1_22:
# 65 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	goto TestTown_Gym_OnFrame1_21


# 78 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_GoToDad:
# 79 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 79 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalToBag:
# 83 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 84 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 84 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 85 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 85 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 86 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 87 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 88 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 88 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 89 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 90 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 91 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 91 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
# 92 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 92 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 93 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 93 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 94 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 95 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Gym_Rival::
# 123 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_RivalCantDecide, MSGBOX_NPC
	return


TestTown_Gym_NormanWaitsForPokemon::
# 127 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 128 "data/maps/TestTown_Gym/scripts.pory"
	faceplayer
# 129 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 6
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_2
# 132 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TESTTOWN_INTRO_STATE, 7
	goto_if_eq TestTown_Gym_NormanWaitsForPokemon_3
TestTown_Gym_NormanWaitsForPokemon_1:
# 135 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 136 "data/maps/TestTown_Gym/scripts.pory"
	turnobject 1, DIR_SOUTH
# 137 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_NormanWaitsForPokemon_2:
# 130 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadTakeYourTime
	goto TestTown_Gym_NormanWaitsForPokemon_1

TestTown_Gym_NormanWaitsForPokemon_3:
# 133 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGoToBirch
	goto TestTown_Gym_NormanWaitsForPokemon_1


TestTown_Gym_Eventscript_TreeckoBall::
# 153 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 154 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 155 "data/maps/TestTown_Gym/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 156 "data/maps/TestTown_Gym/scripts.pory"
	waitmoncry
# 157 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_0, MSGBOX_YESNO
# 158 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TreeckoBall_2
# 171 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 172 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TreeckoBall_1:
# 174 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 175 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TreeckoBall_2:
# 159 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY, , , 0
# 160 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 161 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TreeckoBall_Text_1
# 162 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 163 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 164 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 165 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 166 "data/maps/TestTown_Gym/scripts.pory"
	waitfanfare
# 167 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 168 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TreeckoBall_1


TestTown_Gym_Eventscript_TorchicBall::
# 179 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 180 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 181 "data/maps/TestTown_Gym/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 182 "data/maps/TestTown_Gym/scripts.pory"
	waitmoncry
# 183 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_0, MSGBOX_YESNO
# 184 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_TorchicBall_2
# 197 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 198 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_TorchicBall_1:
# 200 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 201 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_TorchicBall_2:
# 185 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY, , , 0
# 186 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 187 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_TorchicBall_Text_1
# 188 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 189 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 190 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 191 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 192 "data/maps/TestTown_Gym/scripts.pory"
	waitfanfare
# 193 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 194 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_TorchicBall_1


TestTown_Gym_Eventscript_MudkipBall::
# 205 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 206 "data/maps/TestTown_Gym/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 207 "data/maps/TestTown_Gym/scripts.pory"
	playmoncry SPECIES_MUDKIP, CRY_MODE_NORMAL
# 208 "data/maps/TestTown_Gym/scripts.pory"
	waitmoncry
# 209 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_0, MSGBOX_YESNO
# 210 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TestTown_Gym_Eventscript_MudkipBall_2
# 223 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 224 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
TestTown_Gym_Eventscript_MudkipBall_1:
# 226 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 227 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_Eventscript_MudkipBall_2:
# 211 "data/maps/TestTown_Gym/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY, , , 0
# 212 "data/maps/TestTown_Gym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_Eventscript_MudkipBall_Text_1
# 214 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 215 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 217 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 218 "data/maps/TestTown_Gym/scripts.pory"
	waitfanfare
# 219 "data/maps/TestTown_Gym/scripts.pory"
	call NicknamePartyMon
# 220 "data/maps/TestTown_Gym/scripts.pory"
	call StarterReceived
	goto TestTown_Gym_Eventscript_MudkipBall_1


NicknamePartyMon::
# 232 "data/maps/TestTown_Gym/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 233 "data/maps/TestTown_Gym/scripts.pory"
	hidemonpic
# 234 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
# 238 "data/maps/TestTown_Gym/scripts.pory"
	waitmessage
# 239 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
	return

NicknamePartyMon_2:
# 235 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 236 "data/maps/TestTown_Gym/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


StarterReceived::
# 243 "data/maps/TestTown_Gym/scripts.pory"
	checkplayergender
# 244 "data/maps/TestTown_Gym/scripts.pory"
	delay 16
# 245 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq StarterReceived_1
# 275 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq StarterReceived_2
# 300 "data/maps/TestTown_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 301 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_15
# 305 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalChoosesTreecko
StarterReceived_14:
# 307 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 308 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 309 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 310 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 311 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 312 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 313 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 314 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_27
# 318 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalTreeckoToDad
StarterReceived_26:
# 320 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq StarterReceived_35
# 324 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMudkipToDad2
StarterReceived_34:
# 326 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_1:
# 246 "data/maps/TestTown_Gym/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 247 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_7
# 251 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalChoosesTorchic
StarterReceived_6:
# 253 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 254 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 255 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 256 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 257 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 258 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 259 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 260 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_19
# 264 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalTorchicToDad
StarterReceived_18:
# 266 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq StarterReceived_31
# 270 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTreeckoToDad2
StarterReceived_30:
# 272 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_2:
# 276 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_11
# 280 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalChoosesMudkip
StarterReceived_10:
# 282 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 283 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 284 "data/maps/TestTown_Gym/scripts.pory"
	msgbox StarterReceived_Text_0
# 285 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 286 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 287 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 288 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 289 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq StarterReceived_23
# 293 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Movement_RivalMudkipToDad
StarterReceived_22:
# 295 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTorchicToDad
# 296 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 297 "data/maps/TestTown_Gym/scripts.pory"
	call TestTown_Gym_WallyEnters
	return

StarterReceived_7:
# 248 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTorchic
	goto StarterReceived_6

StarterReceived_11:
# 277 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesMudkip
	goto StarterReceived_10

StarterReceived_15:
# 302 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalChoosesTreecko
	goto StarterReceived_14

StarterReceived_19:
# 261 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTorchicToDad
	goto StarterReceived_18

StarterReceived_23:
# 290 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalMudkipToDad
	goto StarterReceived_22

StarterReceived_27:
# 315 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Movement_RivalTreeckoToDad
	goto StarterReceived_26

StarterReceived_31:
# 267 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTreeckoToDad1
	goto StarterReceived_30

StarterReceived_35:
# 321 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMudkipToDad1
	goto StarterReceived_34


# 331 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTorchic:
# 332 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 333 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 333 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 334 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 335 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 338 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTorchicToDad:
# 339 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 340 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 340 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 341 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 342 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 345 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTreeckoToDad1:
# 346 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 346 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 347 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 347 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 348 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 351 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTreeckoToDad2:
# 352 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 353 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 353 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 353 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 354 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 354 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 355 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 358 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesMudkip:
# 359 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 360 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 360 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalMudkipToDad:
# 364 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 364 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 365 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 366 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 369 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerTorchicToDad:
# 370 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 371 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 371 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 372 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 375 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalChoosesTreecko:
# 376 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 377 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 377 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/TestTown_Gym/scripts.pory"
Movement_RivalTreeckoToDad:
# 381 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 381 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 382 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 383 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 386 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerMudkipToDad1:
# 387 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 387 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 388 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/TestTown_Gym/scripts.pory"
	delay_16
	step_end

# 392 "data/maps/TestTown_Gym/scripts.pory"
Movement_PlayerMudkipToDad2:
# 393 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 393 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 393 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 394 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 395 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

TestTown_Gym_WallyEnters::
# 399 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 400 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_0
# 401 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 402 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 403 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 404 "data/maps/TestTown_Gym/scripts.pory"
	addobject 4
# 405 "data/maps/TestTown_Gym/scripts.pory"
	delay 32
# 406 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyApproachesDad
# 407 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 408 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IAmWally
# 409 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_2
# 413 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterLeft
TestTown_Gym_WallyEnters_1:
# 415 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 416 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 417 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 418 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_6
# 422 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_BrendanWouldLoveToTeachYou
TestTown_Gym_WallyEnters_5:
# 424 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_10
# 428 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterUp
TestTown_Gym_WallyEnters_9:
# 430 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 431 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterUp
# 432 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 433 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DadGivesWallyAPokemon
# 434 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 435 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq TestTown_Gym_WallyEnters_14
# 444 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq TestTown_Gym_WallyEnters_15
# 454 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTorchic
# 455 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 457 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 7
# 458 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TORCHICBALL
# 459 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 460 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTorchicBackToDad
TestTown_Gym_WallyEnters_13:
# 462 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 463 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyCantBelieveIt
# 464 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_20
# 468 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceFasterRight
TestTown_Gym_WallyEnters_19:
# 470 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 471 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 473 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_24
# 477 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IllRaceYouToTheLab_Brendan
TestTown_Gym_WallyEnters_23:
# 479 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 480 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_28
# 484 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 3, TestTown_Gym_RivalRunsOutOfGym
TestTown_Gym_WallyEnters_27:
# 486 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 487 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceFasterDown
# 488 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 489 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 490 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 491 "data/maps/TestTown_Gym/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TestTown_Gym_WallyEnters_32
# 495 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 3
TestTown_Gym_WallyEnters_31:
# 497 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_WallyEnters_Text_1
# 498 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 499 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyOutOfGym
# 500 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 501 "data/maps/TestTown_Gym/scripts.pory"
	playse SE_EXIT
# 502 "data/maps/TestTown_Gym/scripts.pory"
	delay 10
# 503 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 4
# 504 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_MAY
# 505 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_RIVAL_MAYS_HOUSE
# 506 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_RIVAL_BRENDANS_HOUSE
# 507 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_RIVAL_BRENDAN
# 508 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_GYM_WALLY
# 509 "data/maps/TestTown_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 510 "data/maps/TestTown_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 7
# 511 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return

TestTown_Gym_WallyEnters_2:
# 410 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterLeft
	goto TestTown_Gym_WallyEnters_1

TestTown_Gym_WallyEnters_6:
# 419 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_MayWouldLoveToTeachYou
	goto TestTown_Gym_WallyEnters_5

TestTown_Gym_WallyEnters_10:
# 425 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterUp
	goto TestTown_Gym_WallyEnters_9

TestTown_Gym_WallyEnters_14:
# 436 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToMudkip
# 437 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 438 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 439 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 8
# 440 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_MUDKIPBALL
# 441 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 442 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyMudkipBackToDad
	goto TestTown_Gym_WallyEnters_13

TestTown_Gym_WallyEnters_15:
# 445 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyGoesToTreecko
# 446 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 447 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 448 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 6
# 449 "data/maps/TestTown_Gym/scripts.pory"
	setflag FLAG_HIDE_TEST_TOWN_TREECKOBALL
# 450 "data/maps/TestTown_Gym/scripts.pory"
	delay 20
# 451 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 4, TestTown_Gym_WallyTreeckoBackToDad
	goto TestTown_Gym_WallyEnters_13

TestTown_Gym_WallyEnters_20:
# 465 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceFasterRight
	goto TestTown_Gym_WallyEnters_19

TestTown_Gym_WallyEnters_24:
# 474 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_IllRaceYouToTheLab_May
	goto TestTown_Gym_WallyEnters_23

TestTown_Gym_WallyEnters_28:
# 481 "data/maps/TestTown_Gym/scripts.pory"
	applymovement 2, TestTown_Gym_RivalRunsOutOfGym
	goto TestTown_Gym_WallyEnters_27

TestTown_Gym_WallyEnters_32:
# 492 "data/maps/TestTown_Gym/scripts.pory"
	removeobject 2
	goto TestTown_Gym_WallyEnters_31


# 514 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyApproachesDad:
# 515 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 516 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 517 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 536 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToMudkip:
# 537 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 537 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 538 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 538 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 539 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 542 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyMudkipBackToDad:
# 543 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 543 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 544 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 544 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 545 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 548 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTreecko:
# 549 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 549 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
	step_end

# 552 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTreeckoBackToDad:
# 553 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 553 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 554 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 557 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyGoesToTorchic:
# 558 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 558 "data/maps/TestTown_Gym/scripts.pory"
	walk_up
# 559 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 560 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 563 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyTorchicBackToDad:
# 564 "data/maps/TestTown_Gym/scripts.pory"
	walk_left
# 565 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 565 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 566 "data/maps/TestTown_Gym/scripts.pory"
	walk_in_place_faster_up
	step_end

# 581 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_RivalRunsOutOfGym:
# 582 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
# 582 "data/maps/TestTown_Gym/scripts.pory"
	walk_faster_down
	step_end

# 585 "data/maps/TestTown_Gym/scripts.pory"
TestTown_Gym_WallyOutOfGym:
# 586 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
# 587 "data/maps/TestTown_Gym/scripts.pory"
	walk_right
# 588 "data/maps/TestTown_Gym/scripts.pory"
	walk_down
	step_end

TestTown_Gym_Trigger_NoStarter::
# 592 "data/maps/TestTown_Gym/scripts.pory"
	lockall
# 593 "data/maps/TestTown_Gym/scripts.pory"
	msgbox TestTown_Gym_DontLeave
# 594 "data/maps/TestTown_Gym/scripts.pory"
	closemessage
# 595 "data/maps/TestTown_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 596 "data/maps/TestTown_Gym/scripts.pory"
	waitmovement 0
# 597 "data/maps/TestTown_Gym/scripts.pory"
	releaseall
	return


TestTown_Gym_Eventscript_TreeckoBall_Text_0:
# 157 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Treecko?$"

TestTown_Gym_Eventscript_TreeckoBall_Text_1:
# 161 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Treecko!$"

TestTown_Gym_Eventscript_TorchicBall_Text_0:
# 183 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Torchic?$"

TestTown_Gym_Eventscript_TorchicBall_Text_1:
# 187 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Torchic!$"

TestTown_Gym_Eventscript_MudkipBall_Text_0:
# 209 "data/maps/TestTown_Gym/scripts.pory"
	.string "Do you want to choose Mudkip?$"

TestTown_Gym_Eventscript_MudkipBall_Text_1:
# 213 "data/maps/TestTown_Gym/scripts.pory"
	.string "You received Mudkip!$"

NicknamePartyMon_Text_0:
# 232 "data/maps/TestTown_Gym/scripts.pory"
	.string "Give it a nickname?$"

StarterReceived_Text_0:
# 255 "data/maps/TestTown_Gym/scripts.pory"
	.string "I choose this one!$"

TestTown_Gym_WallyEnters_Text_0:
# 400 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: So...$"

TestTown_Gym_WallyEnters_Text_1:
# 497 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Wait for me!$"

TestTown_Gym_WelcomeToMyGym_Male::
# 98 "data/maps/TestTown_Gym/scripts.pory"
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

TestTown_Gym_WelcomeToMyGym_Female::
# 102 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: Welcome to my gym.\p"
	.string "I hope you are ready, you have a very\n"
	.string "difficult decision to make.\p"
	.string "Behind me, there's three Poké balls.\p"
	.string "Each one containing a different\n"
	.string "Pokémon.\p"
	.string "You must choose your first partner for\n"
	.string "your journey.\p"
	.string "Brendan, would you do us the honor of\n"
	.string "choosing first?\p"
	.string "Brendan: Yes! Thank you so much for\n"
	.string "this opportunity, Norman!$"

TestTown_Gym_ICantDecide_May::
# 106 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: They're all so cool and unique.\p"
	.string "I really don't know which one to\n"
	.string "choose...$"

TestTown_Gym_ICantDecide_Brendan::
# 110 "data/maps/TestTown_Gym/scripts.pory"
	.string "Brendan: They're all so cool and unique.\p"
	.string "I really don't know which one to\n"
	.string "choose...$"

TestTown_Gym_PlayerYouChooseFirst::
# 114 "data/maps/TestTown_Gym/scripts.pory"
	.string "{PLAYER}! You should choose first.\p"
	.string "I can't make up my mind.$"

TestTown_Gym_DadGoAhead::
# 118 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: Alright {PLAYER}, go ahead.$"

TestTown_Gym_RivalCantDecide::
# 140 "data/maps/TestTown_Gym/scripts.pory"
	.string "Pick first.\p"
	.string "It will be easier for me to choose if\n"
	.string "there is only two Pokémon left.$"

TestTown_Gym_DadTakeYourTime::
# 144 "data/maps/TestTown_Gym/scripts.pory"
	.string "The Poké balls are right behind me.\p"
	.string "Take your time, it's a very important\n"
	.string "decision to make.$"

TestTown_Gym_DadGoToBirch::
# 148 "data/maps/TestTown_Gym/scripts.pory"
	.string "Once you get stronger as a trainer, I'll\n"
	.string "gladly challenge you.\p"
	.string "For now, go meet your friends at\n"
	.string "Professor Birch's lab.\p"
	.string "It's north of our town.$"

TestTown_Gym_IAmWally::
# 520 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Um, hi, my name is Wally and I'm\n"
	.string "new in Hoenn.\p"
	.string "I'd like to learn how to catch a Pokémon\n"
	.string "of my own, but I don't know how.\p"
	.string "Professor Birch told me someone here\n"
	.string "could help me with that.$"

TestTown_Gym_MayWouldLoveToTeachYou::
# 524 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: Hi, Wally! I'm May and this is\n"
	.string "{PLAYER}.\p"
	.string "Professor Birch is my dad, so I've seen\n"
	.string "him catch Pokémon plenty of times.\p"
	.string "I would love to teach you how to catch\n"
	.string "one!$"

TestTown_Gym_BrendanWouldLoveToTeachYou::
# 528 "data/maps/TestTown_Gym/scripts.pory"
	.string "Brendan: Hi, Wally! I'm Brendan and this\n"
	.string "is {PLAYER}.\p"
	.string "Professor Birch is my dad, so I've seen\n"
	.string "him catch Pokémon plenty of times.\p"
	.string "I would love to teach you how to catch\n"
	.string "one!$"

TestTown_Gym_DadGivesWallyAPokemon::
# 532 "data/maps/TestTown_Gym/scripts.pory"
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
# 569 "data/maps/TestTown_Gym/scripts.pory"
	.string "Wally: Thank you again-I can't believe\n"
	.string "it!\p"
	.string "Dad: You're welcome.\p"
	.string "I'm just happy I could help you.\p"
	.string "Now, your adventure begins.\p"
	.string "Go see Professor Birch, he has\n"
	.string "something to give to you.\p"
	.string "Don't forget to bring your new friend,\n"
	.string "Wally, with you!$"

TestTown_Gym_IllRaceYouToTheLab_May::
# 573 "data/maps/TestTown_Gym/scripts.pory"
	.string "May: My Dad's lab is in the town north of\n"
	.string "here.\p"
	.string "I'll race both of you to it!$"

TestTown_Gym_IllRaceYouToTheLab_Brendan::
# 577 "data/maps/TestTown_Gym/scripts.pory"
	.string "Brendan: My Dad's lab is in the town\n"
	.string "north of here.\p"
	.string "I'll race both of you to it!$"

TestTown_Gym_DontLeave::
# 600 "data/maps/TestTown_Gym/scripts.pory"
	.string "Dad: {PLAYER}!\p"
	.string "Don't leave without your Pokémon!$"
