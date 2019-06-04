#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#define MAX 10

int main(int argc, char *argv[]) // command line argument
{
	clrscr();
	ofstream p,o;
	p.open("Prime.txt");
	o.open("Others.txt");

	int i,n,counter=0,num[MAX],j;

	for(i=0;i<argc;i++)
	{
		num[i]=atoi(argv[i+1]);
	}
	for(i=0;i<argc-1;i++)
	{
		counter=0;
		for(j=2;j<num[i];j++)
		{
			if(num[i]%j==0)
			{
				counter=1;
				break;
			}
		}
		if(counter==0)
		p<<"\n"<<num[i];
		else
		o<<"\n"<<num[i];
	}
	cout<<"Written to the file";
	getch();
	return 0;
}