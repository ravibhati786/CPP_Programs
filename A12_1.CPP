#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class file
{
	private: ofstream fout;
		 ifstream fin;

	public: void inputdata();
		void getdata();
};
void file::inputdata()
{
	fout.open("Notes.txt");
	if(!fout)
	{
		cout<<"\nFile not found";
	}
	else
	{
		cout<<"\nFile is created";
		for(int i=1; i<=100; i++)
		{
			fout<<i<<endl;
		}
		cout<<"\nWritten to File";
		fout.close();
	}
}
void file::getdata()
{
	fin.open("Notes.txt");
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
	file f;
	f.inputdata();
	f.getdata();
	getch();
}