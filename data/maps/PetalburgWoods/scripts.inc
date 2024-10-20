PetalburgWoods_MapScripts::
	.byte 0


ShadeForest_Billy_EventScript::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_BILLY_1, ShadeForest_Billy_Intro, ShadeForest_Billy_Defeated
# 7 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Billy_PostBattle
# 8 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Shawn_EventScript::
# 24 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_SHAWN_1, ShadeForest_Shawn_Intro, ShadeForest_Shawn_Defeated
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Shawn_PostBattle
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Jimmy_EventScript::
# 42 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JIMMY, ShadeForest_Jimmy_Intro, ShadeForest_Jimmy_Defeated
# 43 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Jimmy_PostBattle
# 44 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Gabriel_EventScript::
# 60 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_GABRIEL, ShadeForest_Gabriel_Intro, ShadeForest_Gabriel_Defeated
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Gabriel_PostBattle
# 62 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Calvin_EventScript::
# 78 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, ShadeForest_Calvin_Intro, ShadeForest_Calvin_Defeated
# 79 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Calvin_PostBattle
# 80 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Tyler_EventScript::
# 96 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_TYLER, ShadeForest_Tyler_Intro, ShadeForest_Tyler_Defeated
# 97 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Tyler_PostBattle
# 98 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Kim_EventScript::
# 114 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_KIM, ShadeForest_Kim_Intro, ShadeForest_Kim_Defeated
# 115 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Kim_PostBattle
# 116 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


ShadeForest_Hiker_EventScript::
# 132 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Hiker_Text, MSGBOX_NPC
	return


ShadeForest_Boy_EventScript::
# 140 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Boy_Text, MSGBOX_NPC
	return


ShadeForest_Girl_EventScript::
# 148 "data/maps/PetalburgWoods/scripts.pory"
	msgbox ShadeForest_Girl_Text, MSGBOX_NPC
	return


ShadeForest_Billy_Intro::
# 11 "data/maps/PetalburgWoods/scripts.pory"
	.string "Catching Bug Pokémon is so cool!$"

ShadeForest_Billy_Defeated::
# 15 "data/maps/PetalburgWoods/scripts.pory"
	.string "Maybe I should train them more before\n"
	.string "battling.$"

ShadeForest_Billy_PostBattle::
# 19 "data/maps/PetalburgWoods/scripts.pory"
	.string "If only I could find Revives...$"

ShadeForest_Shawn_Intro::
# 29 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm working on building the strongest\n"
	.string "Pokémon team!$"

ShadeForest_Shawn_Defeated::
# 33 "data/maps/PetalburgWoods/scripts.pory"
	.string "This could have gone better...$"

ShadeForest_Shawn_PostBattle::
# 37 "data/maps/PetalburgWoods/scripts.pory"
	.string "I won't stop trying to make my team\n"
	.string "stronger!$"

ShadeForest_Jimmy_Intro::
# 47 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll show you the power of the Bug\n"
	.string "Pokémon!$"

ShadeForest_Jimmy_Defeated::
# 51 "data/maps/PetalburgWoods/scripts.pory"
	.string "Maybe next time...$"

ShadeForest_Jimmy_PostBattle::
# 55 "data/maps/PetalburgWoods/scripts.pory"
	.string "Some people say that Bug Pokémon are\n"
	.string "the weakest.\p"
	.string "I don't think that's true.$"

ShadeForest_Gabriel_Intro::
# 65 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Pokémon never lost me a battle. Let's\n"
	.string "go!$"

ShadeForest_Gabriel_Defeated::
# 69 "data/maps/PetalburgWoods/scripts.pory"
	.string "You just got lucky...$"

ShadeForest_Gabriel_PostBattle::
# 73 "data/maps/PetalburgWoods/scripts.pory"
	.string "Don't talk to me.$"

ShadeForest_Calvin_Intro::
# 83 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was taking a break from catching\n"
	.string "bugs, but I'll battle you!$"

ShadeForest_Calvin_Defeated::
# 87 "data/maps/PetalburgWoods/scripts.pory"
	.string "Break's over!$"

ShadeForest_Calvin_PostBattle::
# 91 "data/maps/PetalburgWoods/scripts.pory"
	.string "Running around all day in the woods will\n"
	.string "get you tired.$"

ShadeForest_Tyler_Intro::
# 101 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you want to go further into the\n"
	.string "forest, you'll have to battle me and my\l"
	.string "friend!$"

ShadeForest_Tyler_Defeated::
# 105 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wow, you got us good!$"

ShadeForest_Tyler_PostBattle::
# 109 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, it's you. You can pass.$"

ShadeForest_Kim_Intro::
# 119 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm his friend!$"

ShadeForest_Kim_Defeated::
# 123 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was fun!$"

ShadeForest_Kim_PostBattle::
# 127 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're fine, you can pass!$"

ShadeForest_Hiker_Text::
# 135 "data/maps/PetalburgWoods/scripts.pory"
	.string "Me? Move out of the way?\p"
	.string "No, I don't think so.$"

ShadeForest_Boy_Text::
# 143 "data/maps/PetalburgWoods/scripts.pory"
	.string "I heard a rumor that there is a pretty\n"
	.string "well hidden grove in Shade forest.\p"
	.string "Some say that you can find rare\n"
	.string "Pokémon there.\p"
	.string "I haven't been lucky enough to find it\n"
	.string "yet.$"

ShadeForest_Girl_Text::
# 151 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"
