#include<iostream.h>
#include<conio.h>
class base
{
 public:
	void loky()
	{
	 cout<<"base class loky"<<endl;
	}
	virtual void show()
	{
	 cout<<"base class loky show"<<endl;
	}
 };

 class derived:public base
 {
  void loky()
  {
   cout<<"derived class loky"<<endl;
  }
  void show()
  {
   cout<<"derived class loky show"<<endl;
  }
 };
 void main()
 {
  base *p;
  base b;
  derived d;
  p=&b;
  p->loky();
  p->show();
  p=&d;
  p->loky();
  p->show();
  getch();
}