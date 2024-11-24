#ifndef PLAYER_H_
#define PLAYER_H_
#include "header.h"
#include "hitpointType.h"

class Player { 
    private: 
        hpType ShieldHP(); 
        hpType maxHP();
        hpType currentHP();
        hpType magicMP()
       
    public: 
        Player();
        ~Player(); 
        
        // Getters // 


        // Setters // 

        // True - successfully 
        void setmaxHP(hpType new_max_hp); 
       
        
;




}
#endif