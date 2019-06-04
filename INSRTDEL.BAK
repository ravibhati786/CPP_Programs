#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int choice;
	void insertdata();
	void deletedata();
	cout<<"Enter your choice"<<endl;
	cout<<"1 for insert data"<<endl;
	cout<<"2 for delete data"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		insertdata();
		break;
	case 2:
		deletedata();
		break;
	default:
		break;

	}

    getch();
}
void insertdata()
{
	int arr[15],n,loc,item;
	cout<<"Enter the N Element You want";
	cin>>n;
	cout<<"Enter the array element";
	for(int i=0;i<n;i++)
	{
	     cin>>arr[i];
	}
	cout<<"Enter the position from you want to insert"<<endl;
	cin>>loc;
	cout<<"enter the element you want to store"<<endl;
	cin>>item;
	for(i=n;i>loc;i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[loc] = item;
	n = n + 1;
	cout<<"after insert element";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void deletedata()
{
	int arr[15],n,loc,item;
	cout<<"Enter the N Element You want";
	cin>>n;
	cout<<"Enter the array element";
	for(int i=0;i<n;i++)
	{
	     cin>>arr[i];
	}
	cout<<"Enter the position from you want to delete"<<endl;
	cin>>loc;
	if(loc>n)
	{
		cout<<"out of range this position";
	}
	for(i=loc;i<n;i++)
	{
		arr[i] = arr[i+1];
	}
	n = n - 1;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}


}