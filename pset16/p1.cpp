#include <iostream>

using namespace std;

class Animal 
{
public:
	virtual void makesound () const 
	{
		cout << "Generic Animal sound" << endl;
	}

	virtual void move() const
	{
		cout << "Generic Animal movement" << endl;
	}
};

class Dog:public Animal
{
public:
	void makesound () const override
	{
		cout << "Woof" << endl;
	}
	void move() const override
	{
		cout << "Dog runs" << endl;
	}
};

class Cat:public Animal 
{
public:
	void makesound () const override
	{
		cout << "Meow" << endl;
	}
	void move() const override
	{
		cout << "Cat walks" << endl;
	}
};

int main ()
{
	const int numAnimals = 3;

	Animal* animal[numAnimals];

	animal[0] = new Animal;
	animal[1] = new Dog;
	animal[2] = new Cat;

	for (int i = 0; i < numAnimals; i++)
	{
		cout << "Animal " << i+1 << ":-" << endl;
		animal[i] -> makesound();
		animal[i] ->move();
		cout << endl;
	}

	for (int i = 0; i < numAnimals; i++)
	{
		delete animal[i];
	}

	return 0;
}

