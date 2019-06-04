#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n, i;
	float *p, total = 0;
	cout<<"\nEnter number of subjects=";
	cin>>n;

	p= new float[n];
	cout<<"Enter Marks=";
	for(i=0;i<n;i++)
	{
		cout<<"\nSubject "<<(i+1)<<"= ";
		cin>>p[i];
	}
	cout<<"\n Marks =";

	for(i=0;i<n;i++)
	{
		cout<<"\nSubject "<<(i+i)<<"= ";
		cout<<*(p+i);
		total=total+*(p+i);
	}
	cout<<"\nTotal ="<<total;
	delete [] p;
	getch();
	return 0;
}