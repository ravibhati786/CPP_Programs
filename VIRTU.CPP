#include<iostream.h>
#include<conio.h>

class Animal
{
	public:
		virtual void eat()
		{
			cout <<"\nI'm eating generic food.";
		}
};
class Cat: public Animal
{
	public:
		void eat()
		{
			cout<<"\nI'm eating a rat.";
		}
};
void main()
{
	clrscr();
	Animal *animal;
	Cat cat;
	animal = &cat;
	animal->eat();
	//animal->eat();
	// cat->eat();
	getch();
}