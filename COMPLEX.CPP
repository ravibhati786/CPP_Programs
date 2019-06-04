#include<iostream.h>
#include<conio.h>
class complex
{
	private:
		int real, imag;

	public:
		complex(int x, int y=2)
		{
			real = x;
			imag = y;
		}

		complex(complex &ob1)
		{
			this->real = ob1.real+5;
			this->imag = ob1.imag+6;
			cout<<"\nI am a copy constructor\n";

		}

		void display()
		{
			cout<<"Your real number is="<<real<<endl;
			cout<<"Your imaginary number is="<<imag<<endl;
		}
		void add(complex &o1, complex &o2)
		{
		     real = o1.real + o2.real;
		     imag = o1.imag + o2.imag;
		}
		void sub(complex &o1, complex &o2)
		{
			real = o1.real - o2.real;
			imag = o1.imag - o2.imag;
			complex temp(2,3);
		}
		~complex()
		{
			cout<<"\nI am a destructor";
		}
};
void main()
{
	clrscr();
	complex c1(5,8),*cob;
	complex c10(1);
	cob = new complex(12,13);
	c1.display();
	cob->display();
	complex c2(2,5);
	c2.display();
	complex c3(0,0);
	c3.add(c1,c2);
	c3.display();
	complex c4(0,0);
	c4.sub(c1,c2);
	c4.display();
	complex c5(c4);
	c5.display();
	delete cob;
	getch();
}