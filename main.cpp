/*
 * main.cpp
 *
 *  Created on: Jul 13, 2011
 *      Author: ben
 */

#include "Battle.h"

int main(int args, char* argc[])
{

	Pokemon Gyarados(128);
	Gyarados.setNickname("Gyarados");
	Gyarados.setTypes(Type::Water, Type::Flying);

	Pokemon Venusaur(3);
	Venusaur.setTypes(Type::Grass, Type::Poison);

	Move surf;
	surf.setBaseDamage(80);
	surf.setTyping(Type::Water);
	surf.setName("Surf");


	Gyarados.setMove(0, &surf);
	Gyarados.performAttack(0, &Venusaur);
}
