#include "player.h"
#include "weapon.h"

player::player(const std::string& name, weapon* weapon)
	:name(name), weapon(weapon)
{


}

player::~player()
{
	std::cout << "플레이어" << name << "삭제 " << std::endl; 
}

void player::attack() const
{
	std::cout << " 공격" << std::end;
	if (weapon)
	{
		weapon->Use(); 

	}
} 
