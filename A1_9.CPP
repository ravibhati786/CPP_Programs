#include<iostream.h>
#include<conio.h>
class checknum
{
	private:
			int num;

	public:
			checknum()
			{
				cout<<"Enter the number=";
				cin>>num;
				(num>0)?cout<<"Postive":cout<<"Negative";

			}
};
void main()
{
	checknum n;
	getch();

}