#include<iostream.h>
#include<conio.h>
int add(int x = 10,int y = 20, int z = 30)
{
	return(x+y+z);
}
int main()
{
	clrscr();
	cout<<add()<<endl;
	cout<<add(100)<<endl;
	cout<<add(50,50)<<endl;
	cout<<add(100,100,100)<<endl;
	getch();
	return 0;
}