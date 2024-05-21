#include "Firebet.h"
using namespace std;

Firebet::Firebet()
{
	health = 50;
}

void Firebet::Recovery()
{
	cout << "Firebet HP : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;
	cout << "Firebet HP : " << health << endl;

	
}
