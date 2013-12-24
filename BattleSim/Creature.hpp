#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <string>

class Creature
{
	public:
           
	// Name of the creature and the name of its class, if it has one
	// Class may be Fighter, Rogue etc
	std::string name;

	// Creature stats. Reasonable values are in parentheses
	int health;		// Current hit points (10-1000+)
	int maxHealth;	// Maximum hit points (10-1000+)
	int attack;
	int defense;

	Creature(std::string name, int health, int attack, int defense)
	{
		this->name = name;
		this->health = health;
		this->maxHealth = health;
		this->attack = attack;
		this->defense = defense;
	}
	
};

#endif /* CREATURE_HPP */
