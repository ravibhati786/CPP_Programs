#include<iostream.h>
#include<conio.h>
double vals[] = {10.1,12.6,33.1,24.1,50.0};
double& setValues(int i)
{
	return vals[i];
}

void main()
{
	clrscr();
	cout<<"Value before change"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"vals["<<i<<"]=";
		cout<<vals[i]<<endl;
	}
	setValues(1) = 200.3;
	setValues(3) = 5008.55;

	cout<<"Values after change"<<endl;
	for(int j=0; j<5;j++)
	{
		cout<<"vals["<<j<<"]=";
		cout<<vals[j]<<endl;
	}

	getch();
}
