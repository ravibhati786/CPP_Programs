#include<iostream.h>
#include<conio.h>
class employee
{
	private: int sal,HRA,DA;

	public:
		employee()
		{
			cout<<"\nEnter the salary of employee";
			cin>>sal;
			if(sal<1500)
			{
				HRA = sal*0.10;
				DA = sal*0.90;
				sal += HRA+DA;
				cout<<"\nHRA="<<HRA<<" DA="<<DA;
				cout<<"\nTotal salary="<<sal;
			}
			else if(sal>=1500)
			{
				HRA = 500;
				DA = sal*0.98;
				sal += HRA+DA;
				cout<<"\nHRA="<<HRA<<" DA="<<DA;
				cout<<"\nTotal salary="<<sal;
			}
		}
};
void main()
{
	employee e;

	getch();
}