#include<iostream.h>
#include<conio.h>
class a
{
	public:
	void a1()
	{
		cout<<"a class"<<endl;
	}

};
class b:virtual public a
{
	public:
	void b1()
	{
		cout<<"class b"<<endl;
	}
};
class b2: virtual public a
{
	public:
	void btwo()
	{
		cout<<"class b2"<<endl;
	}
};
class c:public b ,public b2
{
	public:
	void c1()
	{

		cout<<"class c"<<endl;
	}
};
int main()
{
	clrscr();
	class c c2;
	class c * ptr; 			//define a pointer
	ptr = &c2;                      //pointer objects
	c2.a1();
	ptr->b1();                      //callint using pointer
	c2.btwo();
	ptr->c1();
	getch();
	return 0;

}
