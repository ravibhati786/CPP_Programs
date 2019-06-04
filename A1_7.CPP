#include<iostream.h>
#include<conio.h>
class swap
{
	private:
		int a,b;
	public:
		swap()
		{
			cout<<"Enter the both different numbers=";
			cin>>a>>b;
			cout<<"\nBefore Swapping A="<<a<<" and B="<<b;
			int temp;
			temp = a;
			a = b;
			b = temp;
			cout<<"\nAfter Swapping A="<<a<<" and B="<<b;
		}
};
void main()
{
	clrscr();
	swap s;

	getch();
}
