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
	if(front == 0 && rear == size-1 || front == rear+1)
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
	else if(rear == size-1)
	{
		rear = 0;
		Que[rear] = value;
	}
	else
	{
		Que[++rear] = value;
	}
}
void Queue :: Dequeue()
{
	if(front == -1)
	{
		cout<<"\nQueue is Empty [Underflow]";
		return;
	}
	if(front == rear)
	{
		front = rear = -1;

	}
	else if(front == size -1)
	{
		front = 0;
	}
	else
	{
		front = front +1;
	}
}
void Queue:: Display()
{
	int i;
	if(front == -1)
	{
		cout<<"\nQueue is empty [Underflow]";
		return;
	}
	cout<<"\nYour queue is = ";
	if(rear<front)
	{
		for(i = front; i<size; i++)
		{
			cout<<Que[i]<<"\t";
		}
		for(i = 0; i<=rear; i++)
		{
			cout<<Que[i]<<"\t";
		}
	}
	else
	{
		for(i = front; i<=rear; i++)
		{
			cout<<Que[i]<<"\t";
		}
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
			case 1: q.Display();
				break;
			case 2: q.Enqueue();
				break;
			case 3: q.Dequeue();
				break;
			default: cout<<"\nWrong Choice";
		}
		cout<<"\nDo you want to Continue(Y) =";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}
