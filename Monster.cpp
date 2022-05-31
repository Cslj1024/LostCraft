与子同说 22:28:59
#include "StdAfx.h"
#include "Monster.h"
#include "Hero.h"

Monster::Monster(void)
{
}


Monster::Monster(int optional)
{
	string names[5] = {"巴尔坦虫怪","格斯安鱼怪","泰斯鸟怪","绿头猿怪","赤龙怪 (BOSS)"};
	int levels[5] = {1,5,10,30,50};
	name = names[optional];
	level = levels[optional];
	HP = 100 * level;
	ATK = 20 * level;
}

Monster::~Monster(void)
{
}

void Monster::attack(Role &r)
{
	r.HP -= ATK;
}