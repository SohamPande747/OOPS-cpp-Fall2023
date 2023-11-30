#include <iostream>

using namespace std;

class Character
{
private:
	string character;
public:
	void getname()
	{
		cout << "Enter your gamer name: ";
		cin >> character;
	}
	virtual void move () const
	{
		cout << character << "is moving..." << endl;
	}
	virtual void attack () const 
	{
		cout << character << "is under an attack..." << endl;
	}
	virtual void heal () const
	{
		cout << character <<  "now healed..." << endl;
	}
};

class Warrior : public Character
{
public:
	void move () const override
	{
		cout << "I am moving..." << endl;
	}

	void attack () const override
	{
		cout << "You are in attack bitch..." << endl;
	}

	void heal () const override 
	{
		cout << "This will heal you..." << endl;
	}
};

class Mage : public Character
{
public:
	void move () const override
	{
		cout << "Mage is moving..." << endl;
	}

	void attack () const override
	{
		cout << "Mage is attacking..." << endl;
	}

	void heal () const override 
	{
		cout << "Mage is healed..." << endl;
	}
};

int main ()
{
	Character* play[2];

	play[0] = new Warrior;
	play[1] = new Mage;

	for (int i = 0; i < 2; i++)
	{
		play[i]->move();
		play[i]->attack();
		play[i]->heal();
		cout << endl;
	}
	for (int i = 0; i < 2; i++)
	{
		delete play[i];
	}

	return 0;
}




