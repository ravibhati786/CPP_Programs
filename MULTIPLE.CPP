#include<iostream.h>
#include<conio.h>
class stu
{
	protected:
	int rollno;
	public:
	void get_roll(int);

};
void stu::get_roll(int x)
{
	rollno = x ;
	cout<<"roll number is "<<rollno<<endl;
}

class test:public stu
{
	protected:
	float m1 , m2;
	public:
	void get_marks(float,float);
};
void test::get_marks(float x,float y)
{
	m1 = x ;
	m2 = y ;
	cout<<"subject m1 marks"<<m1<<endl;
	cout<<"subject m2 marks"<<m2<<endl;;
}
class total:public test
{
	int total;
	public:
	void display();

};
void total::display()
{
	total = m1 + m2 ;
	cout<<"total no "<<total<<endl;
}
int main()
{
	clrscr();
	total t1;
	t1.get_roll(17);
	t1.get_marks(30.1,45.2);
	t1.display();
	getch();
	return 0;

}

