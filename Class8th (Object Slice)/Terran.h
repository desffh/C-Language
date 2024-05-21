#pragma once
#include <iostream>


class Terran
{
protected:

	int health;
	int maxHP;

public:
	Terran();

	virtual void Recovery();

	virtual void Damage(int damage);
};

