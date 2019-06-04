#include<iostream.h>
#include<conio.h>
class student
{
	private:
		char stdname[20];
		int dbms,cpp,softeng,foc,peace;
		float per;

	public:
		void getdata()
		{
			cout<<"\nEnter the Student name=";
			cin>>stdname;
			cout<<"\nEnter the marks of dbms=";
			cin>>dbms;
			cout<<"\nEnter the marks of cpp=";
			cin>>cpp;
			cout<<"\nEnter the marks of softeng=";
			cin>>softeng;
			cout<<"\nEnter the marks of Foc=";
			cin>>foc;
			cout<<"\nEnter the marks of peace=";
			cin>>peace;
		}
		void processdata()
		{
			long total = dbms+cpp+softeng+foc+peace;
			per=((total*100)/500);
			cout<<"\nName\tDBMS\tCPP\tSoftEng\tFOC\tPeace\tPercentage\tResult"<<endl;
			cout<<stdname<<"\t"<<dbms<<"\t"<<cpp<<"\t"<<softeng<<"\t"<<foc<<"\t"<<peace<<"\t"<<per<<"\t\t";
			if(per>=60)
			{
				cout<<"First Division";
			}
			else if(per>=50&&per<=59)
			{
				cout<<"Second Division";
			}
			else if(per>=40&&per<=49)
			{
				cout<<"Third Division";
			}
			else
			{
				cout<<"Fail";
			}
		}

};
void main()
{
	clrscr();
	student s;
	s.getdata();
	s.processdata();
	getch();

}