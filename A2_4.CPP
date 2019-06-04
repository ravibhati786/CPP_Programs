#include<iostream.h>
#include<conio.h>
class seller
{
	private: float sellprice,costprice,total;
		int totalitem;

	public:
		void getdata()
		{
			cout<<"Enter the cost price of product=";
			cin>>costprice;
			cout<<"\nEnter the sell price of the product=";
			cin>>sellprice;
			cout<<"\nEnter the total pieces sold=";
			cin>>totalitem;
		}
		void processdata()
		{
			total = totalitem*(sellprice-costprice);
			if(total>0)
			cout<<"\nTotal profit is="<<total;
			else
			cout<<"\nTotal loss is="<<total;

		}

};
void main()
{
	clrscr();
	seller s;
	s.getdata();
	s.processdata();
	getch();
}