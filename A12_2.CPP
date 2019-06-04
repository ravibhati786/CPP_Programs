#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class file
{
	private: char s[150];
		 ofstream fout;
		 ifstream fin;

	public: void processdata();
		void getdata();
};
void file::processdata()
{
	fout.open("Out.txt");
	strcpy(s,"Time is a great teacher but unfortunately it kills all its pupils. Berlioz");
	fout<<s;
	fout.close();
}
void file::getdata()
{
	fin.open("Out.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
}
void main()
{
	clrscr();
	file f;
	f.processdata();
	f.getdata();
	getch();

}