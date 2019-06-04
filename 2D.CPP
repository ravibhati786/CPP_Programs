#include<iostream.h>
#include<conio.h>
int main()
{       clrscr();
	int arr[3][4] = {{2,3},{4,5},{6,7}};
	int i, j;
	for(i = 0;i<3;i++)
	{
		for(j =0;j<4;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cout<<arr[i][j]<<endl;

		}
	}
	getch();
	return 0;
}