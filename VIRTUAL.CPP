#include<iostream.h>
#include<conio.h>
class polygon
{
	protected:
			int width, height;
	public:
		void set_values(int a, int b)
		{
			width = a;
			height = b;
		}
		area()
		{
			return 0;
		}
};
class rectangle : public polygon
{
	public:
		int area()
		{
			return width*height;
		}
};
class triangle: public polygon
{
	public:
		int area()
		{
			return width*height/2;
		}
};
int main()
{
	clrscr();
	rectangle rect;
	triangle trgl;
	polygon polg;

	polygon *poly1 = &rect;
	polygon *poly2 = &trgl;
	polygon *poly3 = &polg;

	poly1->set_values(4,5);
	poly2->set_values(6,7);
	poly3->set_values(8,9);

	cout<<poly1->area()<<"\n";
	cout<<poly2->area()<<endl;
	cout<<poly3->area()<<endl;

	getch();
	return 0;
}