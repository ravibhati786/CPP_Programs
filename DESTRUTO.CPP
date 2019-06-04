#include<iostream.h>
#include<conio.h>
class test
{
	int no;
	public:
	test();
	~test();
	void disp();
}
	test::test()
	{
		no = 10;

	}
	test::~test()
	{
		cout<<"destructor \n";


	}
       void test::disp()
       {
		cout<<no;

       }


void main()
{
	clrscr();
	cout<<"main block \n";
	test t1;
	t1.disp();

	getch();

}