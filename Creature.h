
#include <iostream>
#include <string>


class Creature
{
public:
	
	int Attack();
	void UseItem();
		
private:
	int HP = 100;
	std::string name;
	int power;
};
