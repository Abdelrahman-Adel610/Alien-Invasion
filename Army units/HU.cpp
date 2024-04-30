#include "HU.h"

HU::HU(int id, int tj, int health, int power, int capacity, GameClass* game) :ArmyUnit(id, HU_, tj, health, power, capacity, game) {}

void HU::Attack(int flag)
{
	tmpList lst;
	int attackCap = cap;
	ArmyUnit* unit = nullptr;
	if (flag)
		cout << "HU " << ID << " Heals ";
	while (attackCap--) {
		if ((unit = game->getEArmy()->pickFromUML(), unit))
		{
			
			if (unit->IncHlth((pwr * hlth))) {//returns true if health is over than 20% of start health
				game->getEArmy()->AddUnit(unit);
			}
			else {
				lst.addUnit(unit);
			}
			
		}
	}
	unit = nullptr;
	if(flag)
	lst.printTmpList();
	while (lst.getCount()) {
		if (unit = lst.PickUnit(), unit) {
			int ta = unit->getTa();
			if (game->getTime() - ta > 10)
				game->AddToKilledList(unit);
			else
				game->getEArmy()->AddToUML(unit);

		}
	}
};
