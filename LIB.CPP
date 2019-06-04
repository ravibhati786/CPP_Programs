#include<iostream.h>
#include<conio.h>
class member
{
	protected:
			int memid;
			char memname[20];
	public:
		void getData_mem()
		{
			cout<<"Enter member id and name=";
			cin>>memid>>memname;
		}
};

class ym:public member
{
	protected:
			float ym_fees,add_on_fees;
	public:
		void getData_ym()
		{
			cout<<"Enter the yearly and add on member fees";
			cin>>ym_fees>>add_on_fees;
		}
};

class mdetails:public ym
{
	public:
		void putData()
		{

			cout<<memid<<"\t"<<memname<<"\t"<<ym_fees<<"\t"<<add_on_fees;
		}
};
void main()
{
	clrscr();
	mdetails obj;
	obj.getData_mem();
	obj.getData_ym();
	obj.putData();
	getch();
}