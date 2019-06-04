#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class file
{
	private: ofstream out;
		 ifstream in;
		 int vcount,scount;

	public:
		void getdata();
		void processdata();
		file()
		{
		vcount = 0;
		scount = 0;
		}
};
void file::getdata()
{
	char ch;
	out.open("Ravi1.txt");
	while( (ch = cin.get())!='#')
	{
		out<<ch;
	}
	out.close();
}
void file::processdata()
{
	char ch1;
	in.open("Ravi1.txt");
	while(in)
	{
	    in.get(ch1);
	     if(ch1=='a'||ch1=='e'||ch1=='i'||
		ch1=='o'||ch1=='u')
		vcount++;
	     else if(ch1==' ')
		scount++;
	}
	cout<<vcount<<endl<<scount;
}
void main()
{
	clrscr();
	file f;
	f.getdata();
	f.processdata();
	getch();
}