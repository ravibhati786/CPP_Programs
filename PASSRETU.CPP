#include<iostream.h>
#include<conio.h>
class complex
{
	int real;
	int img;
	public:
	complex():real(0),img(0){}
	void readdata()
	{
		cout<<"enter img and real number";
		cin>>real>>img;
	}
	complex addcomplex(complex comp2)
	{
		complex temp;

		temp.real = real+comp2.real;
		temp.img = img+comp2.img;

	}
	void display()
	{
		cout<<"sum of"<<real<<"and  + "<<img;
	}
};
void main()
{
	clrscr();
	complex c1, c2 ,c3;
	c1.readdata();
	c2.readdata();
	c3 = c1.addcomplex(c2);
	c3.display();
	getch();

}