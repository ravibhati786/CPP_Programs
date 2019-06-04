#include<iostream.h>
#include<conio.h>
class leap
{
	private: int year;

	public: leap()
		{
			cout<<"\nEnter the Year=";
			cin>>year;
			if(year%400==0)
			cout<<year<<"\n is a Leap year";
			else if(year%100==0)
			cout<<year<<"\n is not a Leap year";
			else if(year%4==0)
			cout<<year<<"\n is a Leap year";
			else
			cout<<year<<"\n is not a Leap year";
		}
};
void main()
{
	clrscr();
	leap l;
	getch();
}




