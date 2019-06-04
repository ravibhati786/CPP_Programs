#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n;
	int arr[20];
	cout<<"ente number";
	cin>>n;
	cout<<"array of number";
	for(int i=0;i<=n;i++)
	{

		cin>>arr[i];
	}

	for(i=0;i<=n;i++)
	{

		cout<<(arr[i]*5)<<"\t";
	}
	     getch();
		return 0;
		}