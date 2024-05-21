#include "Ghost.h"
using namespace std;

Ghost::Ghost()
{
	health = 45;
	maxHP = health;
}

void Ghost::Recovery()
{
	health  = maxHP;
	cout << "Ghost HP: " << health << endl;
}

void Ghost::Damage(int damage)
{
	health -= damage;

	cout << "Ghost HP :" << health << endl;

}
