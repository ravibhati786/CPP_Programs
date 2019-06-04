#include<iostream.h>
#include<conio.h>
class node
{
	public:
	int data;
	node * left;
	node * right;
	node(int value)
	{
		data = value;
		left = NULL;
		right  = NULL;
	}
};
class doubly
{
	node * head;
	public:
	doubly()
	{
		head = NULL;
	}
	node * createlist(int);
	node * insert(int);
	node * insertpos(int ,int);
	node * deletenode(int);
	void display();
};
node * doubly::createlist(int value)
{
	node * newnode = new node(value);
	head  = newnode;
	return newnode;


}
node* doubly::insert(int value)
{
	if(head == NULL)
	{
		cout<<"list is empty first create list";
		return 0;
	}
	node * newnode = new node(value);
	newnode->right = head;
	head->left = newnode;
	newnode->left = NULL;
	head = newnode;
	return newnode;

}
node * doubly ::insertpos(int value,int pos)
{
	if(head == NULL)
	{
		cout<<"list is empty first create list";
		return 0;
	}
	node * newnode= new node(value);
	node * q;
	q = head;
	for(int i=1;i<pos;i++)
	{
		q = q->right;
	}
	if(pos>0 && q== NULL)
	{
		cout<<"cant insert";
		return 0;
	}
	if(q->right==NULL)
	{
		newnode->right= NULL;
		q->right = newnode;
		newnode->left = q;
	}
	else
	{
		newnode->right = q->right;
		newnode->right->left  = newnode;
		newnode->left = q;
		q->right = newnode;
	}
	return newnode;
}
node* doubly::deletenode(int value)
{
	if(head==NULL)
	{
		cout<<"list is empty";
		return 0 ;
	}
	node * ptr; node* temp;
	while(head->data == value)
	{
		temp = head;
		head =  head->right;
		head->left = NULL;
		delete temp;
	}
	return 0;
}
void doubly::display()
{
	if(head == NULL)
	{
		cout<<"list is empty";
		return;
	}
	node *ptr;
	ptr = head;
	while(ptr!=NULL)
	{
		cout<<"  "<<ptr->data;
		ptr = ptr->right;
	}



}
void main()
{
	clrscr();
	doubly d1;
	d1.createlist(5);
	d1.insert(10);
	d1.insert(11);
	d1.insert(12);
	d1.insert(13);
	d1.insertpos(50,4);
	d1.insertpos(100,3);
	d1.deletenode(13);
	d1.display();
	getch();
}
