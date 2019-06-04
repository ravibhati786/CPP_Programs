#include<iostream.h>
#include<conio.h>
class student
{
 int admno;
 char sname[20];
 float eng,maths,sci,total;
 public:
 void takedata()
 { cout<<"enter admno";
   cin>>admno;
   cout<<"enter sname";
   cin>>sname;
   cout<<"enter subject marks";
   cin>>eng>>maths>>sci;

 }
  float ctotal()
  {
   total = eng+maths+sci;
       return 0;
  }

   void showdata()
   {
    cout<<"admin id is:"<<admno<<"\n"<<"student name is:"<<sname<<"\n"<<"total addition of marks:"<<total;

   }

};
void main()
{
	clrscr();
  student s;
  s.takedata();
  s.ctotal();
  s.showdata();
  getch();



}