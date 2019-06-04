#include<iostream.h>
#include<conio.h>
class batsman
{
	int bcode;
	char bname[20];
	int innings,notout,runs;
	float batavg;

	float calcavg()
	{
		return runs/(innings-notout);
	}

	public:

	void readdata()
	{
		cout<<"Enter the bcode of batsman=";
		cin>>bcode;
		cout<<"Enter the name of batsman=";
		cin>>bname;
		cout<<"Enter the innings of batsman=";
		cin>>innings;
		cout<<"Enter the notout of batsman=";
		cin>>notout;
		cout<<"Enter the runs of batsman=";
		cin>>runs;
		batavg = calcavg();

	}
	void displaydata()
	{
		cout<<"Bcode ="<<bcode;
		cout<<"\nName ="<<bname;
		cout<<"\nInnings ="<<innings;
		cout<<"\nNotOut ="<<notout;
		cout<<"\nRuns ="<<runs;
		cout<<"\nBatting Average = "<<batavg;
	}

};

void main()
{
	clrscr();
	batsman b1;
	b1.readdata();
	b1.displaydata();
	getch();
}