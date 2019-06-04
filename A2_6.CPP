#include<iostream.h>
#include<conio.h>
class triangle
{
	private: int a1,a2,a3;
	public:
		triangle()
		{
			cout<<"\nEnter the first angle=";
			cin>>a1;
			cout<<"\nEnter the first angle=";
			cin>>a2;
			cout<<"\nEnter the first angle=";
			cin>>a3;
			if(a1+a2+a3==180)
			cout<<"\nIt is a valid Triangle";
			else
			cout<<"\nIt is not a valid Triangle";

		}

};
void main()
{
	clrscr();
	triangle t;
	getch();

}