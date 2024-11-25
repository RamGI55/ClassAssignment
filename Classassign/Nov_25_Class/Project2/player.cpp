#include "player.h"
#include "weapon.h"

player::player(const std::string& name, weapon* weapon)
	:name(name), weapon(weapon)
{


}

player::~player()
{
	std::cout << "�÷��̾�" << name << "���� " << std::endl; 
}

void player::attack() const
{
	std::cout << " ����" << std::end;
	if (weapon)
	{
		weapon->Use(); 

	}
} 
