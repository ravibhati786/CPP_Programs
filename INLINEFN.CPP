			//inline functio
#include<iostream.h>
#include<conio.h>
class a
{
	public:
	inline int add(int x,int y)
	{
		cout<<x<<y<<endl;

	}
	inline int mul(int x,int y)
	{
		cout<<x<<y<<endl;

	}

};
void main()
{
	clrscr();
	a a1,a2;
	a1.add(5,4);
	a2.mul(2,2);
	getch();

}