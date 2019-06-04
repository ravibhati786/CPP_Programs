#include<iostream.h>
#include<conio.h>
class telbill
{
	private: int calls;
		 float bill;

	public:
		telbill()
		{
			cout<<"\n Enter the total calls=";
			cin>>calls;

			if(calls<=100)
			{
				bill = 200;
			}
			else if(calls>100 && calls<=150)
			{
				calls = calls - 100;
				bill = 200+(calls*0.60);
			}
			else if(calls>150 && calls<=200)
			{
				calls = calls -150;
				bill = 200+(50*0.60)+(calls*0.50);
			}
			else
			{
				calls = calls-200;
				bill = 200+(50*0.60)+(calls*0.50)+(calls*0.40);
			}
			cout<<"\nTotal Bill="<<bill;


		}
};
void main()
{
	clrscr();
	telbill tb;
	getch();
}