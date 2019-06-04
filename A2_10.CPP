#include<iostream.h>
#include<conio.h>
#includ	e<math.h>
class quadratic
{
	private:
		float a,b,c,d,root1,root2;

	public:
		void getdata()
		{
			cout<<"\nEnter value of a, b and c=";
			cin>>a>>b>>c;
		}

		void showdata()
		{
			d= b*b-4*a*c;
			if(d==0)
			{
				root1=(-b)/(2*a);
				root2=root1;
				cout<<"\nRoots are real & equal";
			}
			else if(d>0)
			{
				root1=-(b+sqrt(d))/(2*a);
				root2=-(b-sqrt(d))/(2*a);
				cout<<"\Roots are real & distinct";
			}
			else
			{
				root1=(-b)/(2*a);
				root2=sqrt(-d)/(2*a);
				cout<<"Roots are imaginary";
			}
			cout<<"\nRoot 1="<<root1<<"\nRoot 2="<<root2;


		}
};
void main()
{
	quadratic q;
	q.getdata();
	q.showdata();
	getch();
}