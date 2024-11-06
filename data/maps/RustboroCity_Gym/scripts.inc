RustboroCity_Gym_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_Roxanne_2
RustboroCity_Gym_EventScript_Roxanne_1:
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	return

RustboroCity_Gym_EventScript_Roxanne_2:
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	goto RustboroCity_Gym_EventScript_Roxanne_1


# 24 "data/maps/RustboroCity_Gym/scripts.pory"

# 25 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TESTTOWN_INTRO_STATE, 8
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 38 "data/maps/RustboroCity_Gym/scripts.pory"

# 39 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_BULLDOZE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 46 "data/maps/RustboroCity_Gym/scripts.pory"

# 47 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Gym/scripts.pory"

# 62 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Gym/scripts.pory"

# 75 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 86 "data/maps/RustboroCity_Gym/scripts.pory"

# 87 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 91 "data/maps/RustboroCity_Gym/scripts.pory"

# 92 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 96 "data/maps/RustboroCity_Gym/scripts.pory"

# 97 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the champion?\p"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no trainer, not me, but I can\n"
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon championship together!\p"
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a trainer to collect\n"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "gym badges, am I right?\p"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But gym leaders aren't pushovers!\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the gym leader, is a user\n"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ground-type Pokémon.\p"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ground type is very durable, but\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand water-type and\l"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "grass-type moves.\p"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the gym leader.\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"

# 119 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your trainer card.\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The earth badge you got should be\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the championship!\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"

# 131 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us gym trainers lightly!\n"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"

# 135 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"

# 138 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the\n"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ground type's terrifying power!$"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"

# 142 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"

# 146 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"

# 154 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ground Pokémon need room to\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"

# 164 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our leader.\p"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ground type at her young age.$"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"

# 169 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am Roxanne, the Bay Harbor\n"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon gym leader.\p"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a gym leader so that I might\n"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "trainer's school in battle.\p"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon league's rules state\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that trainers are to be given this\l"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a gym leader.\p"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "league earth badge.$"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"

# 190 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the earth badge\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"

# 194 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other gym leaders.\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many trainers, you should\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"

# 200 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Bay Harbor City Pokémon gym$"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"

# 203 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Bay Harbor City Pokémon gym\p"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's certified trainers:\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The earth badge enables your Pokémon\n"
	.string "to use the HM move cut outside of\l"
	.string "battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb::
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That technical machine, TM78, contains\n"
	.string "Bulldoze.\p"
	.string "It not only inflicts damage by shaking\n"
	.string "the ground, it also lowers speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used only once, so\n"
	.string "think before you use it.$"
