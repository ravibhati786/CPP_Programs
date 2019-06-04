#include<iostream.h>
#include<conio.h>
class character
{
	private: char ch;
	public: void inputdata();
};
void character::inputdata()
{
	cout<<"\nEnter the character=";
	cin>>ch;
	int val= int(ch);
	if(val>=65&&val<=90)
	{
		cout<<"\n"<<ch<<" It is Capital Letter";
	}
	else if(val>=97&&val<=122)
	{
		cout<<"\n"<<ch<<" It is small letter";
	}
	else if(val>=48&&val<=57)
	{
		cout<<"\n"<<ch<<" It is a number";
	}
	else if(val>=0&&val<=47||val>=58&&val<=64||val>=91&&val<=96||val>=123&&val<=127)
	{
		cout<<"\n"<<ch<<" It is a special symbol";
	}
	cout<<"\nPress Y to continue?";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	inputdata();
	else
	cout<<"\nThank You";

}
void main()
{
	clrscr();
	character c;
	c.inputdata();
	getch();

}