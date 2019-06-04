#include<iostream.h>
#include<conio.h>
class expense
{
	private: int quantity;
		 float price,totalexp;

	public:
		void getdata()
		{
			cout<<"Enter the quantity=";
			cin>>quantity;
			cout<<"\nEnter the price per piece=";
			cin>>price;

		}
		void processdata()
		{
			totalexp = quantity*price;
			if(totalexp>5000)
			{
				cout<<"\nTotal amount is="<<totalexp;
				totalexp = totalexp - totalexp*0.1;
				cout<<"\nAfter Discount= "<<totalexp;
			}
			else
			{
				cout<<"\nTotal amount is="<<totalexp;
			}
		}
};
void main()
{
	clrscr();
	expense e;
	e.getdata();
	e.processdata();
	getch();

}