# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ICE_STONE
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_METAL_COAT
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_PROTECTOR
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemartlistend
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in LAVARIDGE?\p"
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a POKéMON.\p"
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of FIRE-type\n"
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your POKéMON will dislike you for it.\l"
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"
