RustboroCity_DevonCorp_1F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 0, RustboroCity_DevonCorp_1F_OnFrame
# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 1, RustboroCity_DevonCorp_1F_OnFrame
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 2, RustboroCity_DevonCorp_1F_OnFrame
	.2byte 0


RustboroCity_DevonCorp_1F_OnFrame::
# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq RustboroCity_DevonCorp_1F_OnFrame_2
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	turnobject 10, DIR_WEST
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCityDevonCorps1F_AquaGrunt_GetOutOfHere
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	warp MAP_RUSTBORO_CITY, 26, 15
RustboroCity_DevonCorp_1F_OnFrame_1:
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	releaseall
	return

RustboroCity_DevonCorp_1F_OnFrame_2:
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	turnobject 11, DIR_EAST
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCityDevonCorps1F_AquaGrunt_GetOutOfHere
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	warp MAP_RUSTBORO_CITY, 25, 15
	goto RustboroCity_DevonCorp_1F_OnFrame_1


# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "CORPORATION.\p"
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off DEVON GOODS.$"
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON CORPORATION got its start as\n"
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, DEVON developed.\p"
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON is now a manufacturer of a wide\n"
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "DEVON now markets sundries and\l"
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 150 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, DEVON has begun marketing\n"
# 151 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for POKéMON TRAINERS, including\l"
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "POKé BALLS and POKéNAV systems.”$"

# 160 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCityDevonCorps1F_MovementDown:
# 161 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
	step_end

RustboroCityDevonCorps1F_AquaGrunt_GetOutOfHere::
# 156 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey!\n"
	.string "You're not supposed to be here.\p"
	.string "Get out!$"
