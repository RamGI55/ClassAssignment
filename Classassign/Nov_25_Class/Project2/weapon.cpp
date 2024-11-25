#include "weapon.h"
#include "player.h"

weapon::weapon(const std::string& type) :type(type), player(nullptr)
{
}

weapon::~weapon()
{
}

void weapon::Use() const
{
}
