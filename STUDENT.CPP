#include<iostream.h>
#include<conio.h>
class student
{
	int admno;
	char sname[20];
	float eng,math,science,total;
	float ctotal()
	{
		return eng+math+science;
	}

	public:

	void Takedata()
	{
		cout<<"Enter your admission number=";
		cin>>admno;
		cout<<"\nEnter your name=";
		cin>>sname;
		cout<<"\nEnter your marks of English=";
		cin>>eng;
		cout<<"\nEnter your marks of Maths=";
		cin>>math;
		cout<<"\nEnter your marks of science=";
		cin>>science;

		total = ctotal();
	}
	void showdata()
	{
		cout<<"AdmissionNo\tStudentName\tEnglish\tMaths\Science\tTotal";
		cout<<"\n"<<admno<<"\t\t"<<sname<<"\t\t"<<eng<<"\t"<<math<<"\t"<<science<<"\t"<<total;
	}

};

void main()
{
	clrscr();
	student s1;
	s1.Takedata();
	s1.showdata();
	getch();
}