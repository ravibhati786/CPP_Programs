#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int n;
	char arr[20];
	cout<<"ente number";
	cin>>n;
	cout<<"array of number";
	for(int i=0;i<=n;i++)
	{

		cin>>arr[i];
	}

	for(i=0;i<=n;i++)
	{

		cout<<" number is multi by 5"<<arr[i]*5<<endl;
	}
	     getch();
		return 0;
		}