// Program for Assignment Problem
#include<iostream.h>
#include<conio.h>
class AP
{
	int **prob, **sol;
	int m,n;
	public:
	AP();
	void setData();
	void findBalanced();
	void processData();
	int findMinValue(int, int);
	void display();


};
void AP :: display()
{
	cout<<"\nGiven Matrix = \n";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<prob[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\nAter Subtracting =";
	for(i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<sol[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int AP :: findMinValue(int row, int col)
{
	int min= 100;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(min>sol[i][j])
			{
			 min = sol[i][j];
			}
		}
	}
	return min;
}
void AP :: processData()
{
	for(int i=0; i<m; i++)
	{
		int min = findMinValue(m,i+1);
		for(int j=0; j<n; j++)
		{
			sol[j][i] = sol[j][i]- min;
		}
	}
	for(int j=0; j<n; j++)
	{
		int min = findMinValue(j+1,n);
		for(int i=0; i<m; i++)
			sol[i][j] = sol[i][j] - min;
	}
}

void AP :: findBalanced()
{
	if(m ==n)
	{
		cout<<"Problem is Balanced";
	}
	else
	{

	}
}
void AP :: setData()
{
	cout<<"\nPlease enter value of Matrix";
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"\nEnter the value for row["<<i<<"] col["<<j<<"]";
			cin>>prob[i][j];
			sol[i][j] = prob[i][j];
		}
	}
}

AP :: AP()
{
	cout<<"\nEnter the number of rows = ";
	cin>>m;
	cout<<"\nEnter the number of columns = ";
	cin>>n;
	prob = new int*[m];
	sol = new int*[m];
	for(int i=0; i<m; i++)
	{
		prob[i] = new int[n];
		sol[i] = new int[n];
	}
}
void main()
{
	clrscr();
	AP ob;
	ob.findBalanced();
	ob.setData();
	ob.processData();
	ob.display();

	getch();
}