#include<iostream.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int arr[50],beg=0,start,end,mid,n,item,loc;


	cout<<"number of element you want to enter"<<endl;
	cin>>n;
	cout<<"\n enter the element"<<endl;
	for(beg=0;beg<n;beg++)
	{
	cin>>arr[beg];
	}
	cout<<"\n the element is ";
	for(beg= 0;beg<n;beg++)
	{
	cout<<"\t"<<arr[beg];
	}
	cout<<"\n enter the item";
	cin>>item;
	start = 0;
	end  = n - 1;
	mid = ((start+end)/2);

	while(start<= end)
	{
		if(item<arr[mid])
		{
			end = mid - 1;
		}
		else  if(arr[mid] == item)
		{
			cout<<item<<"item at position"<<mid;
		}
		else
		{
			start = mid + 1;
		}
		 mid = ((start+end)/2);

	}

 getch();
  }

