#include<iostream.h>
#include<conio.h>
class batsman
{
  int bcode;
  char bname[20];
  int inning,notout,run,batavg;
  public:
  void readdata()
  {
    cout<<"bcode";
    cin>>bcode;
    cout<<"bname";
    cin>>bname;
    cout<<"enterinning notout run:";
    cin>>inning>>notout>>run;
  }
   void calcavg()
   {

     batavg = run/(inning - notout);

   }
   void displaydata()
   {
     cout<<bcode<<bname<<inning<<notout<<run<<batavg;


   }
};
void main()
{
  clrscr();
  batsman b;
  b.readdata();
  b.calcavg();
  b.displaydata();
       getch();

}