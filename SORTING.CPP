#include<iostream.h>
#include<conio.h>
class sorting
{
	private:
			int Arr[10],Min,MinIndex,N,i,j,temp;

	public:
		void initialize();
		void display();
		void operations();
		void BubbleSort();
		void SelectionSort();
};
void sorting :: initialize()
{
	cout<<"\nEnter the Number of elements you want to insert ="<<endl;
	cin>>N;
	cout<<"Enter the "<<N<<" elements =";
	for(i=0;i<N;i++)
	{
		cin>>Arr[i];
	}
}
void sorting :: display()
{
	cout<<"\nElements of your Array =";
	for(i=0;i<N;i++)
	{
		cout<<"\t"<<Arr[i];
	}
}
void sorting :: operations()
{


}
void sorting :: BubbleSort()
{
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(Arr[j]>Arr[j+1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = temp;

			}
		}
	}
	display();
}
void sorting :: SelectionSort()
{
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<=N;j++)
		{
			if(Arr[i]>Arr[j])
			{
				temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = Arr[i];
			}
		}
	}
	display();
}
void main()
{
	clrscr();
	sorting ob;
	ob.initialize();
	ob.display();
	ob.SelectionSort();
	getch();

}
