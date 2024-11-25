#pragma once
class Unit
{
private:

	int mAtk;
	int mDef;


public:
	// SETTER/GETTER // 
	Unit(int atk = 0, int def = 0);

	int GetAtk()const { return mAtk;  }
	void SetAtk(const int atk) { mAtk = atk;  }

	int GetDef()const { return mDef; }
	void SetDef(const int def) { mDef = def; }

	// CONST/DECONST // 
	Unit();
	virtual ~Unit(); 
};

