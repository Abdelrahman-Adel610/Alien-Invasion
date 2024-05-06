#pragma once
#include <iostream>
#include <random>
#include <time.h>
#include "../Army units/ArmyUnit.h"
using namespace std;
class Monsters
{
	enum { MAX_SIZE = 1000 };
protected:
	ArmyUnit* monsters[MAX_SIZE];
	int counter;
public:
	Monsters();
	bool addUnit(ArmyUnit* mns);
	int getCount();
	ArmyUnit* pickMonster();
	ArmyUnit* peekMonster();
	void printMonsters();
	~Monsters();
};