			//passing object
#include<iostream.h>
#include<conio.h>
class time
{
	int h,m;
	public:
	void passobj(int x,int y)
	{
		h = x;
		m = y;

	}
	void put()
	{
		cout<<h<<","<<m<<endl;
	}
	void sum(time t1,time t2)
	{
	     m = t1.m + t2.m;
	     h = m / 60;
	     m = m % 60;
	     h = h + t1.h + t2.h;
	}
};
void main()
{
	clrscr();
	time t1,t2,t3;
	t1.passobj(3,40);
	t2.passobj(4,30);
	t3.sum(t1,t2);
	t1.put();
	t2.put();
	t3.put();
	getch();
}