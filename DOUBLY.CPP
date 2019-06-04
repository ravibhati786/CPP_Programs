#include<iostream.h>
#include<conio.h>
class Node
{
	public:
		int data;
		Node *prev;
		Node *next;
};
class List
{
	private:
		Node *head;
	public:
		List() { head = NULL; }
		~List();
		Node* Create_List(int);
		Node* Insert_Begin(int);
		Node* Insert_After(int,int);
		int Delete_Node(int);
		void display();
};
int List :: Delete_Node(int value)
{
	if(head == NULL)
	{
		cout<<"\nList is empty";
		return 0;
	}
	Node *temp,*ptr;
	if(head->data == value)
	{
		temp = head;
		head = head->next;
		head->prev = NULL;
		cout<<"\nElement Deleted"<<endl;
		delete temp;
		return 0 ;
	}
	ptr = head;
	while(ptr->next->next != NULL)
	{

	}




}
Node* List :: Insert_After(int value, int position)
{
	if(head == NULL)
	{
		cout<<"\nList is empty";
		return 0;
	}
	if(position<0)
	{
		cout<<"\nWrong Position";
		return 0;
	}
	int index =1;

	Node *ptr = head;
	while(ptr && index<position)
	{
		ptr = ptr->next;
	}
	if(position>0 && ptr==NULL)
	{
		cout<<"\nElement could not found";
		return NULL;
	}
	Node *newNode = new Node;
	newNode->data = value;
	newNode->prev = NULL;
	newNode->next = NULL;

	if(position==0)
	{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	else
	{
		newNode->next = ptr->next;
		ptr->next->prev = newNode;
		newNode->prev = ptr;
		ptr->next = newNode;
	}
	return newNode;

}
Node* List :: Insert_Begin(int value)
{
	if(head == NULL)
	{
		cout<<"\nFirst Create the List ";
		return 0;
	}
	Node *newNode = new Node;
	newNode->prev = NULL;
	newNode->data = value;
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
	return newNode;
}
void List :: display()
{
	if(head == NULL)
	{
		cout<<"\nList is empty";
		return;
	}
	Node *ptr = head;
	int num = 0;
	cout<<"\nYour list is = ";
	while(ptr != NULL)
	{
		cout<<"\t"<<ptr->data;
		ptr = ptr->next;
		num++;
	}
	cout<<"\n Total number of nodes are="<<num;
}
Node* List :: Create_List(int value)
{
	if(head != NULL)
	{
		cout<<"\n List is already created";
		return 0;
	}
	Node *newNode = new Node;
	newNode->data = value;
	newNode->prev = NULL;
	newNode->next = NULL;
	head = newNode;
	return newNode;
}

List :: ~List()
{
	Node *ptr = head, *nextnode;
	while(ptr!=NULL)
	{
		nextnode = ptr->next;
		//delete the ptr;
		delete ptr;
		ptr = nextnode;

	}
}
void main()
{
	clrscr();
	List L;
	L.display();
	L.Create_List(55);
	L.display();
	L.Insert_Begin(50);
	L.display();
	L.Insert_After(52,1);
	L.Insert_After(100,0);
	L.Insert_After(200,3);
	L.display();
	getch();

}