#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int choice;
	void linearsearch();
	void binarysearch();
	cout<<"Enter the choice";
	cout<<"1 for linear search";
	cout<<"2 for binary search";
	cin>>choice;
	switch(choice)
	{
	case 1:
		linearsearch();
		break;
	case 2:
		binarysearch();
		break;
	default:
		break;

	}

	getch();
}
void linearsearch()
{
	int arr[15],n,search,pos;
	cout<<"Enter the number of element";
	cin>>n;
	cout<<"Enter the array element";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Element you want to search";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			pos = i + 1;
			break;


		}
	}
	cout<<"value found"<<" " ;
	cout<<search<<"  : at postion :"<<pos;
}
void binarysearch()
{
	int arr[15],n,item,first,mid,last,pos;
	cout<<"Enter the number of element";
	cin>>n;
	cout<<"Enter the array element";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Element you want to search";
	cin>>item;
	first = 0;
	last = n - 1;
	mid = ((first+last)/2);
	while(first<=last)
	{
		if(item<arr[mid])
		{
		      last  = mid - 1;
		}
		else if(item == arr[mid])
		{
				cout<<item<<"at position"<<mid;
				return;
		}
		else
		{
			first = mid + 1;
		}
		mid = ((first+last)/2);
	}

}