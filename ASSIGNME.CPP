#include<iostream.h>
#include<conio.h>
class print
{
	private:
		char ch;
	public:
		print()
		{
			cout<<"Enter the character=";
			cin>>ch;
			cout<<"Ascii value of the character is ="<<int(ch);
		}

};

void main()
{
	clrscr();
	print p;
	getch();
}