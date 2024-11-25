#pragma once
#include <iostream>
#include "weapon.h"

class weapon; 
class player
{
private:
	std::string name; 
	weapon* weapon; 

public: 
	player(const std::string& name, weapon* weapon);
	~player(); 

	void attack()const; 

};

