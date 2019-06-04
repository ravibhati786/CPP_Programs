#include<iostream.h>
#include<conio.h>
main()
{
	clrscr();
	int arr[10],i,n,item;
	cout<<"Number of elements you want to enter"<<endl;
	cin>>n;
	cout<<"enter the element"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"the element"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<arr[i];
	}
	cout<<"\nenter the data";
	cin>>item;
	i=0;
	while(i<n)
	{
		if(arr[i]==item)
		{
			cout<<"item is:"<<arr[i]<<"is at "<<i<<" position";
			return;
		}
		i++;
	}
	if(i>=n)
	{
		cout<<"element not found";
	}
	getch();
}