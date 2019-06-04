#include<iostream.h>
#include<conio.h>
class A
{
	private:
			int a;
	protected:
			int x;
	public:
			void setVal(int v)
			{
				x=v;
			}
};
class B: private A
{
	public:
			void printVal(void)
			{
				setVal(100);
				cout<<"Value of x:" <<x<<endl;
			}
};

int main()
{
	clrscr();
	B obj;

	obj.printVal();
	getch();
	return 0;

}
