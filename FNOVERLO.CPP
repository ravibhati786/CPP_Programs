#include<iostream.h>
#include<conio.h>
class mathop
{
	public:
	int add(int x, int y)
	{
		return x+y;
	}
	int add(float f)
	{
		return f+50;
	}
	int add(int x, int y, float a, float b)
	{
		return x+y+a+b;
	}

};

void main()
{
	clrscr();
	mathop ob1;
	cout<<"First addition is="<<ob1.add(5,10)<<endl;
	cout<<"Secound addition is="<<ob1.add(150.50)<<endl;
	cout<<"Third addition is="<<ob1.add(1200,1000,25.478,500.156);
	getch();
}