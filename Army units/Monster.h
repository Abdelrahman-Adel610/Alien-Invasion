#pragma once
#include <iostream>
#include "../Army units/ArmyUnit.h"
class Monster :public ArmyUnit
{

public:
	Monster(int id, int tj, int health, int power, int capacity);
	void Attack(ArmyUnit* opponent);
};