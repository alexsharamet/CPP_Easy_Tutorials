#include <iostream>
#include <queue>

#include "Ideology.h"
#include "Hero.h"

int main()
{
	std::priority_queue<Hero> queue;

	queue.push(Hero("Druid", Ideology::ChaoticGood, 1));
	queue.push(Hero("Bandit", Ideology::LawfulEvil, 10));
	queue.push(Hero("Paladin", Ideology::LawfulGood, 5));
	
	while (!queue.empty())
	{
		Hero  hero(queue.top());
		queue.pop();

		std::cout << hero << std::endl;
	}

	/*Result
		Bandit  LawfulEvil  10
		Paladin  LawfulGood  5
		Druid  ChaoticGood  1
	*/
}

