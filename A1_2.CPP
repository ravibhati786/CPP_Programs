#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
cout<<setw(15)<<setiosflags(ios::left)<<"Subject"<<setw(5)<<"Marks"<<endl
<<setw(15)<<setiosflags(ios::left)<<"Mathematics"<<setw(5)<<90<<endl
<<setw(15)<<setiosflags(ios::left)<<"Computer"<<setw(5)<<77<<endl
<<setw(15)<<setiosflags(ios::left)<<"Chemistry"<<setw(5)<<69;
getch();
}