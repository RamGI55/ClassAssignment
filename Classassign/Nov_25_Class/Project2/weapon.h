#pragma once
#include "player.h"
#include <iostream>

class player; // 전방선언 
class weapon
{
private:

	std::string name; 
	player* player; 

	// 두 클라스 끼리 참조시 상호참조 오류가 발생, header에 class 선언. 


public:
	weapon(const std::string& type);
	
	virtual ~weapon(); 

	void Use()const;

};

