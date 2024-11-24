#include "Player.h"
#include <string>
#include <vector>


// =========== Constructor/Deconstructor ========== //
Player::Player()
{

}

Player::~Player()
{

}


// ==================SETTERS ================= // 
 void setmaxHP(hpType new_max_hp)
        {
            if (new_max_hp <  1)
            {   
                // no less than 1 hp, prevent overflows 
                return false; 
            }

            maxHP = new_max_hp;

            if (currentHP > maxHP) 
            {
                // same as negative HP, prevents HP overflow, once HP hits max level. 
                currentHP = maxHP; 
            
            }
            
            return true; 




        }