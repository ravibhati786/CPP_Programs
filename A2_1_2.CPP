#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class oddeven
{
	private: int num;
		 float num1;
	public:
		void oddevencheck()
		{
			cout<<"Enter the number=";
			cin>>num;
			num%2==0?cout<<"\nNumber is Even":cout<<"\nNumber is Odd";
		}
		void absolute()
		{
			cout<<"\nEnter the number for absolute value=";
			cin>>num1;
				cout<<"\nThe absolute value is="<<abs(num1);
		}


};
void main()
{
	clrscr();
	oddeven o;
	o.oddevencheck();
	oddeven o1;
	o1.absolute();
	getch();
}