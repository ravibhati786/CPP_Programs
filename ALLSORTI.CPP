#include<iostream.h>
#include<conio.h>
class Sorting
{
	int Arr[5];
	int size,pass,round,key;
	public:
		Sorting()
		{
			size = 5;
		}
		void GetData();
		void Display();
		void BubbleSorting();
		void SelectionSort();
		void InsertionSort();
		void MergeSorting(int*,int);
		void Merge(int*,int*,int*,int,int);
		void QuickSorting(int*,int,int);
		int  QuickPartition(int*,int,int);
		void Swap(int &,int &);
		void Operations();
};
int Sorting :: QuickPartition(int *A, int start, int end)
{
	int pivot = A[end];
	int pIndex = start;
	for(int i = start; i<end; i++)
	{
		if(A[i]<=pivot)
		{
			Swap(A[i],A[pIndex]);
			pIndex = pIndex+1;
		}
	}
	Swap(A[pIndex],A[end]);
	return pIndex;
}
void Sorting :: QuickSorting(int *A,int start,int end)
{
	if(start<end)
	{
		int pIndex = QuickPartition(A,start,end);
		QuickSorting(A,start,pIndex-1);
		QuickSorting(A,pIndex+1,end);
	}
}
void Sorting :: Merge(int *l,int *r,int *A, int lcount, int rcount)
{
	int i,j,k;
	i=j=k=0;

	while(i<lcount && j<rcount)
	{
		if(l[i]<r[j])
		{
			A[k] = l[i];
			i++;
		}
		else
		{
			A[k] = r[j];
			j++;
		}
		k++;
	}
	while(i<lcount)
	{
		A[k] = l[i];
		i++;
		k++;
	}
	while(j<rcount)
	{
		A[k] = r[j];
		j++;
		k++;
	}

}
void Sorting :: MergeSorting(int *A,int n)
{
	int i,mid, *left,*right;
	if(n<2)
	{
		return;
	}
	mid = n/2;

	left = new int[mid];
	right = new int[n-mid];

	for(i=0;i<mid;i++)
	{
		left[i] = A[i];
	}
	for(i=mid;i<n;i++)
	{
		right[i-mid] = A[i];
	}
	MergeSorting(left,mid);
	MergeSorting(right,n-mid);
	Merge(left,right,A,mid,n-mid);
	delete left;
	delete right;
}
void Sorting :: InsertionSort()
{
	int j;
	for(round=1;round<size;round++)
	{
		key = Arr[round];
		j = round-1;
		while(j>=0&& Arr[j]>key)
		{
			Arr[j+1] = Arr[j];
			j--;
		}
		Arr[j+1] = key;
	}
	cout<<"\n After Insertion Sorting =>";
	Display();
}
void Sorting :: SelectionSort()
{
	for(round=0;round<size-1;round++)
	{
		for(pass=round+1;pass<size;pass++)
		{
			if(Arr[round]>Arr[pass])
			{
				Swap(Arr[round],Arr[pass]);
			}
		}
	}
	cout<<"\nAfter Selection Sorting =>";
	Display();
}
void Sorting :: Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Sorting :: BubbleSorting()
{
	for(round=1;round<size;round++)
	{
		for(pass=0;pass<size-round;pass++)
		{
			if(Arr[pass]>Arr[pass+1])
			{
				Swap(Arr[pass],Arr[pass+1]);
			}
		}
	}
	cout<<"\n\n After Bubble Sorting :-";
	Display();
}
void Sorting :: Display()
{
	cout<<"\nYour Array is =";
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<Arr[i];
	}
}
void Sorting :: GetData()
{
	cout<<"\nEnter the Elements of Array of Size 5 =>";
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
}
void Sorting :: Operations()
{
	int ch;
	cout<<"\n-----------------------------------------";
	cout<<"\nOperations on Array Sorting  =>";
	cout<<"\nPress 1 to Insert an Element for Array:";
	cout<<"\nPress 2 Display the Array:";
	cout<<"\nPress 3 for Bubble Sorting:";
	cout<<"\nPress 4 for Selection Sorting:";
	cout<<"\nPress 5 for Insertion Sorting:";
	cout<<"\nPress 6 for Merge Sorting:";
	cout<<"\nPress 7 for Quick Sorting:";
	cout<<"\nPress 8 for Radix Sorting:";
	cout<<"\nPress 9 for Heap Sorting:";
	cout<<"\nPress 9 to Exit:";
	cout<<"\nEnter Your Choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1: GetData();
			Operations();
			break;
		case 2: Display();
			Operations();
			break;
		case 3: BubbleSorting();
			Operations();
			break;
		case 4: SelectionSort();
			Operations();
			break;
		case 5: InsertionSort();
			Operations();
			break;
		case 6: MergeSorting(Arr,size);
			Operations();
			break;
		case 7: QuickSorting(Arr,0,size-1);
			Operations();
			break;
		default: cout<<"\nWrong Choice";
				break;
		}

}
void main()
{
	clrscr();
	Sorting s;
	s.Operations();
	getch();
}