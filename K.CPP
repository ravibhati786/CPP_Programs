#include<iostream.h>
#include<conio.h>
class media
{
 public:
 virtual void accept()=0;
 virtual void display()=0;
};
class book:public media
{
  protected:
	     int bid;
	     char name[20];
  public:
	   void accept()
	   {
	    cout<<"Enter book_id and book_name:-";
	    cin>>bid>>name;
	   }
	   void displfay()
	   {
	    cout<<"\t"<<bid<<"\t"<<name;
	   }
};
class CD:public media
{
 protected:
	   int price;
	   char title[20];
 public:
	 void accept()
	 {
	  cout<<"Enter price and title:-";
	  cin>>price>>title;
	 }
	 void display()
	 {
	  cout<<"\t"<<price<<"\t"<<title;
	 }
};
void main()
{
 clrscr();
 media *m;
 book b;
 m=&b;
 m->accept();
 cout<<"\n Book details \n";
 m->display();
 CD c;
 m=&c;
 m->accept();
 cout<<"\n CD details \n";
 m->display();
 getch();
}
