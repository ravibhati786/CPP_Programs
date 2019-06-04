#include<iostream.h>
#include<conio.h>
class oddeven
{
	private: int num;
	public:	oddeven()
		{
			cout<<"Enter the number=";
			cin>>num;
			num%2==0?cout<<"\nNumber is Even":cout<<"\nNumber is Odd";
		}
};
void main()
{
	clrscr();
	oddeven o;
	getch();
}