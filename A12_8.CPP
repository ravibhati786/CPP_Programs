#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
class fileupper
{
	private:
			ifstream fin;
			ofstream fout;
	public:
		void processdata();

};
void fileupper::processdata()
{
	fin.open("Ravi1.txt");
	fout.open("RaviUpper.txt");
	char ch;
	if(fin)
	{
		while(!fin.eof())
		{
			fin.get(ch);
			ch = toupper(ch);
			fout<<ch;
		}
		fin.close();
		fout.close();
	}
	else
	{
		cout<<"\nUnable to Open the file";
	}
}
void main()
{
	fileupper f;
	f.processdata();
	getch();
}