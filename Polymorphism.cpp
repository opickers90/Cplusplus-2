#include <iostream>
using namespace std;

class Enemy{
	protected:
	int attackPower;

	public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
};

class Ninja:public Enemy{
	public:
	void attack()
	{
		cout << "Ninja!!-" << attackPower << endl;
	}
};

class Monster:public Enemy{
	public:
	void attack()
	{
		cout << "Monster!!-" << attackPower << endl;
	}
};

class Boss:public Enemy{
	public:
	void attack()
	{
		cout << "Boss!!!-" << attackPower << endl;
	}
};

int main()
{
	Ninja ninjaObj;
	Monster monsterObj;
	Boss bossObj;

	Enemy*e1 = &ninjaObj;
	Enemy*e2 = &monsterObj;
	Enemy*e0 = &bossObj;

	e1->setAttackPower(20);
	e2->setAttackPower(80);
	e0->setAttackPower(200);

	ninjaObj.attack();
	monsterObj.attack();
	bossObj.attack();
}

