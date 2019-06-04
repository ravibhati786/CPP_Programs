#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class random
{
	public: void processdata();
};
void random::processdata()
{
	int n;
	n=rand()&100+1;
	cout<<"\nRandom Number is="<<n;

	cout<<"\nPress 1 to continue?";
	cin>>n;
	if(n==1)
	processdata();
	else
	cout<<"\nThankYou";

}
void main()
{
	random ra;
	ra.processdata();
	getch();
}