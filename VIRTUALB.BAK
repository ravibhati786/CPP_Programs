		//diamond problem solve

#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void dispa()
	{
		a = 10 ;
		cout<<"class a :"<<a<<endl;
	}

};
class B: virtual public A
{
	int b;
	public:
	void dispb()
	{
		b = 20 ;
		cout<<"class b :"<<b<<endl;
	}
};
class C: virtual public A
{
	int c;
	public:
	void dispc()
	{
		c = 30 ;
		cout<<"class c :"<<c<<endl;
	}
};
class D:public B,public C
{
	int d;
	public:
	void dispd()
	{
		d = 40 ;
		cout<<"class d :"<<d<<endl;
	}
};
int main()
{
	clrscr();
	D d1;
	d1.dispa();
	d1.dispb();
	d1.dispc();
	d1.dispd();
	cout<<"solved out the diamond problem";
	getch();
	return 0;
			/*ambigous error if we not create virtual
			 base class */
}
