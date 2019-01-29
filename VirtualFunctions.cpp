#include <iostream>
using namespace std;

class Enemy{
	public:
	virtual void attack()=0;
//	{
//		cout << "Enemy, ATTACK !!" << endl;
//	}
};

class Ninja:public Enemy{
	public:
	void attack()
	{
		cout << "Ninja, ATTACK !!" << endl;
	}
};

class Monster:public Enemy{
	public:
	void attack()
	{
		cout << "Monster, ATTACK !!!" << endl;
	}
};

int main()
{
	Ninja ninjaObj;
	Monster monsterObj;
//	Enemy enemyObj;

	Enemy *e1 = &ninjaObj;
	Enemy *e2 = &monsterObj;
//	Enemy *e3 = &enemyObj;

	e1->attack();
	e2->attack();
//	e3->attack();
}
