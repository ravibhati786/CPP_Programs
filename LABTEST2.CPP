#include<iostream.h>
#include<conio.h>
class Employee
{
	protected: int emp_id;
		 char emp_name[20];
		 float salary;
	public:
		virtual void AcceptDetails();
		virtual void DisplayDetails();
};
void Employee::AcceptDetails()
{
	cout<<"Enter the id, name, salary=";
	cin>>emp_id>>emp_name>>salary;
}
void Employee::DisplayDetails()
{
	cout<<"Employee Details are=";
	cout<<emp_id<<"\t"<<emp_name<<"\t"<<salary;
}
class SalesPerson: public Employee
{
	float sales;
	float commission;
	public:
		void CalculateSalary()
		{
			salary = salary + (sales*commission);
		}
		void AcceptDetails();
		void DisplayDetails();
};
void SalesPerson::AcceptDetails()
{
	Employee::AcceptDetails();
	cout<<"Enter sales and commission=";
	cin>>sales>>commission;
}
void SalesPerson::DisplayDetails()
{
	Employee::DisplayDetails();
	cout<<"\t"<<sales<<"\t"<<commission;
}
void main()
{
	clrscr();
	SalesPerson s;
	s.AcceptDetails();
	s.CalculateSalary();
	s.DisplayDetails();
	getch();
}