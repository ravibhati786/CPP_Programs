#include<iostream.h>
#include<conio.h>
class B;
class A
{
   int a;
   public:
   void getval(int x)
   {
	a = x;
   }
   void putval(void)
   {
	cout<<"values of a:"<<a<<endl;
   }
   friend void add(A,B);
};
class B
{
   int b;
   public:
   void getval(int x)
   {
	b = x;
   }
   void putval(void)
   {
	cout<<"values of b:"<<b<<endl;
   }
   friend void add(A,B);
};
void add(A ob1,B ob2)
{
	cout<<"addition of a and b:\t"<<ob1.a+ob2.b;
}
void main()
{
 clrscr();
 A a;
 B b;
 a.getval(4);
 b.getval(4);
 a.putval();
 b.putval();
 add(a,b);
 getch();
}