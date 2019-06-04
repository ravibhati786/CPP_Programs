#include<iostream.h>
#include<conio.h>
class Queue
{
	int Que[5], front, rear,size;
	public:
		Queue()
		{
			front = -1;
			rear = -1;
			size = 5;
		}
		void Enqueue();
		void Dequeue();
		void Display();

};
void Queue::Enqueue()
{
	int value;
	if(rear == size-1)
	{
		cout<<"\nQueue is Full [Overflow]";
		return;
	}
	cout<<"\nPlease enter the element = ";
	cin>>value;
	if(front == -1)
	{
		Que[++front] = value;
		rear = front;
	}
	else
	{
		Queue[++rear] = value;
	}
}
void Queue :: Dequeue()
{
	if(front == -1)
	{
		cout<<"\nQueue is Empty [Underflow]";
		return;
	}
}
void main()
{
	clrscr();
	Queue q;
	char ch;
	do
	{
		int press;
		cout<<"\nOperations on Queue";
		cout<<"\nPress 1 Display the Queue";
		cout<<"\nPress 2 to Enqueue an element";
		cout<<"\nPress 3 to Dequeue an element";
		cout<<"\nEnter Your Choice = ";
		cin>>press;
		switch(press)
		{
			case 1: s.Display();
				break;
			case 2: s.Enqueue();
				break;
			case 3: s.Dequeue();
				break;
			default: cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to Continue(Y) =";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}
