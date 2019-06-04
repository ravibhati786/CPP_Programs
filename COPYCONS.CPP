#include<iostream.h>
#include<conio.h>
class point
{
	int x,y;
	public:
	point(int x1,int y1)

	{
		x = x1;
		y = y1;

	}
	point(const point &p2 , int p = 2,int a = 3,int b = 4)
	{
		x = p2.x;
		y = p2.y;


	}
	void print()
	{
		cout<<x;
		cout<<y;
	}
};

int main()
{         clrscr();
	point p1(10,50);
	point p2(p1);
	p1.print();
	p2.print();


	getch();
	return 0;

}