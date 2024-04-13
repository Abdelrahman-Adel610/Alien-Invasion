#pragma once
#include "../Army units/EarthArmy.h"
#include "../Army units/AlienArmy.h"
#include "../Game/randGen.h"
#include <iostream>
#include <fstream>
using namespace std;
class GameClass
{
private:
	EarthArmy* EArmy;
	AlienArmy* AArmy;
	randGen* randGenerator;
	int crntTime;
public:
	GameClass(randGen* randGenerator);
	void incrementTime();
	int getTime()const;
	EarthArmy* getEArmy();
	AlienArmy* getAArmy();
	void initializer();
	void loadData();//needs to be edited
};
