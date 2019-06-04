#include<iostream.h>
#include<conio.h>
class age
{
	private: int ram,sulabh,ajay;

	public:

		age()
		{
			cout<<"Enter the age of Ram=";
			cin>>ram;
			cout<<"\nEnter the age of Sulabh=";
			cin>>sulabh;
			cout<<"\nEnter the age of Ajay=";
			cin>>ajay;
			ram<sulabh?(ram<ajay?cout<<"\nRam is young":cout<<"\nAjay is young"):(sulabh<ajay?cout<<"\nSulabh is young":cout<<"\nAjay is young");
	}
};
void main()
{
	age a;
	getch();
}