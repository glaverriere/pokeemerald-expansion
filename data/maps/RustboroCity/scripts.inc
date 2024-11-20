RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
	.byte 0


RustboroCity_OnTransition::
# 6 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
	return


RustboroCity_EventScript_GymGuide::
# 10 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymGuide, MSGBOX_NPC
	return


RustboroCity_EventScript_GymSign::
# 18 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	return


RustboroCity_EventScript_Route105Sign::
# 26 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Route105Sign, MSGBOX_SIGN
	return


RustboroCity_EventScript_Route103Sign::
# 34 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Route103Sign, MSGBOX_SIGN
	return


RustboroCity_EventScript_TrainerSchoolSign::
# 42 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainerSchoolSign, MSGBOX_SIGN
	return


RustboroCity_EventScript_CitySign::
# 50 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	return


RustboroCity_EventScript_BeachBoy::
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachBoy, MSGBOX_NPC
	return


RustboroCity_EventScript_BeachGirl::
# 66 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachGirl, MSGBOX_NPC
	return


RustboroCity_EventScript_BeachYoungster::
# 74 "data/maps/RustboroCity/scripts.pory"
	lock
# 75 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachYoungster
# 76 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 77 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_EventScript_BeachHiker::
# 85 "data/maps/RustboroCity/scripts.pory"
	lock
# 86 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachHiker
# 87 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_EventScript_BeachFisherman::
# 96 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachFisherman, MSGBOX_NPC
	return


RustboroCity_EventScript_BeachTriathlete::
# 104 "data/maps/RustboroCity/scripts.pory"
	lockall
# 105 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 106 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_HEART_SCALE, RustboroCity_EventScript_BeachTriathlete_2
RustboroCity_EventScript_BeachTriathlete_1:
# 111 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachTriathlete2
# 112 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 113 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return

RustboroCity_EventScript_BeachTriathlete_2:
# 107 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BeachTriathlete
# 108 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 109 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RUSTBORO_HEART_SCALE
	goto RustboroCity_EventScript_BeachTriathlete_1


RustboroCity_EventScript_Boy::
# 125 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Boy, MSGBOX_NPC
	return


RustboroCity_EventScript_Picknicker::
# 133 "data/maps/RustboroCity/scripts.pory"
	lock
# 134 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Picknicker
# 135 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 136 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_EventScript_Girl::
# 144 "data/maps/RustboroCity/scripts.pory"
	lock
# 145 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Girl
# 146 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 147 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_EventScript_DevonEmployee::
# 155 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonEmployee, MSGBOX_NPC
	return


RustboroCity_EventScript_FatMan::
# 163 "data/maps/RustboroCity/scripts.pory"
	lockall
# 164 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 165 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_RUSTBORO_HIDDEN_POWER, RustboroCity_EventScript_FatMan_2
RustboroCity_EventScript_FatMan_1:
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_FatMan2
# 171 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 172 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return

RustboroCity_EventScript_FatMan_2:
# 166 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_FatMan
# 167 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_TM10
# 168 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RUSTBORO_HIDDEN_POWER
	goto RustboroCity_EventScript_FatMan_1


RustboroCity_EventScript_Artist::
# 184 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_Artist, MSGBOX_NPC
	return


RustboroCity_Text_GymGuide::
# 13 "data/maps/RustboroCity/scripts.pory"
	.string "You're here to challenge Roxanne?\p"
	.string "Sorry, but the gym is temporarily closed\n"
	.string "because Roxanne is currently tutoring\l"
	.string "at the Pokémon school.\p"
	.string "Please come back later!$"

RustboroCity_Text_GymSign::
# 21 "data/maps/RustboroCity/scripts.pory"
	.string "Bay Habor City Pokémon gym\n"
	.string "Leader: Roxanne\p"
	.string "“The competition trembles before her!”$"

RustboroCity_Text_Route105Sign::
# 29 "data/maps/RustboroCity/scripts.pory"
	.string "{RIGHT_ARROW} Shade forest\l"
	.string "{DOWN_ARROW} Route 105$"

RustboroCity_Text_Route103Sign::
# 37 "data/maps/RustboroCity/scripts.pory"
	.string "{UP_ARROW} Route 103\l"
	.string "{LEFT_ARROW} Route 125$"

RustboroCity_Text_TrainerSchoolSign::
# 45 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School$"

RustboroCity_Text_CitySign::
# 53 "data/maps/RustboroCity/scripts.pory"
	.string "Bay Harbor City\n"
	.string "Enjoy the salty ocean breeze!$"

RustboroCity_Text_BeachBoy::
# 61 "data/maps/RustboroCity/scripts.pory"
	.string "If I get her, she'll tell me where she hid\n"
	.string "an item!$"

RustboroCity_Text_BeachGirl::
# 69 "data/maps/RustboroCity/scripts.pory"
	.string "Hihihi!\n"
	.string "He doesn't know the item I buried in the\l"
	.string "sand is so close!$"

RustboroCity_Text_BeachYoungster::
# 80 "data/maps/RustboroCity/scripts.pory"
	.string "Zigzagoon, use headbutt!$"

RustboroCity_Text_BeachHiker::
# 91 "data/maps/RustboroCity/scripts.pory"
	.string "Poochyena, use howl!$"

RustboroCity_Text_BeachFisherman::
# 99 "data/maps/RustboroCity/scripts.pory"
	.string "Fishing is so relaxing, but it's a bit\n"
	.string "less so when you reel in a Carvanha.$"

RustboroCity_Text_BeachTriathlete::
# 116 "data/maps/RustboroCity/scripts.pory"
	.string "I found this Heart Scale on the beach\n"
	.string "earlier.\n"
	.string "You can have it.$"

RustboroCity_Text_BeachTriathlete2::
# 120 "data/maps/RustboroCity/scripts.pory"
	.string "I heard Heart Scales are pretty rare.\n"
	.string "I also heard you can exchange them with\l"
	.string "someone in Hoenn.\p"
	.string "In return, he can teach Pokémon a\n"
	.string "forgotten move.$"

RustboroCity_Text_Boy::
# 128 "data/maps/RustboroCity/scripts.pory"
	.string "I gave myself the challenge to catch\n"
	.string "every Pokémon in the school backyard!\p"
	.string "I already caught a Mienfoo and a\n"
	.string "Lillipup.\p"
	.string "I just need a Lotad and a Doduo, and I'll\n"
	.string "have succeeded.$"

RustboroCity_Text_Picknicker::
# 139 "data/maps/RustboroCity/scripts.pory"
	.string "...and after that, he said he'd rather be\n"
	.string "learning about Pokémon than spend time\l"
	.string "with me.\p"
	.string "Can you believe that?$"

RustboroCity_Text_Girl::
# 150 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, the audacity this boy has!\n"
	.string "You're definitely better off without\l"
	.string "him.$"

RustboroCity_Text_DevonEmployee::
# 158 "data/maps/RustboroCity/scripts.pory"
	.string "This is crazy! Team aqua is invading the\n"
	.string "Devon Corps building.\p"
	.string "I sure am glad that I called in sick this\n"
	.string "morning.$"

RustboroCity_Text_FatMan::
# 175 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! You found me!\n"
	.string "I was hidden here waiting for someone\l"
	.string "perceptive such as yourself to find me.\p"
	.string "To congratulate you, I'm giving you this\n"
	.string "TM!$"

RustboroCity_Text_FatMan2::
# 179 "data/maps/RustboroCity/scripts.pory"
	.string "This move's type can differ from\n"
	.string "Pokémon to Pokémon.$"

RustboroCity_Text_Artist::
# 187 "data/maps/RustboroCity/scripts.pory"
	.string "Bay Harbor City's architecture is so\n"
	.string "inspiring for an artist like me.$"
