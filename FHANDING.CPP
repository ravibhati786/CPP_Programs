#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>

int main()
{
 char ch;
 ofstream out;
 out.open("lokynote.txt");

 while((ch = cin.get()) !='#')
 {
  out.put(ch);
 }
 out.close();

 ifstream fin("lokynote.txt");

 fin.seekg(0,ios::end);
 int size=fin.tellg();

 for(int j=1; j<=size; j++)
  {
   fin.seekg(-j,ios::end);
    ch = fin.get();
    cout<<ch;
   }
   fin.close();
  }