#pragma once
#include "player.h"
#include <iostream>

class player; // ���漱�� 
class weapon
{
private:

	std::string name; 
	player* player; 

	// �� Ŭ�� ���� ������ ��ȣ���� ������ �߻�, header�� class ����. 


public:
	weapon(const std::string& type);
	
	virtual ~weapon(); 

	void Use()const;

};

