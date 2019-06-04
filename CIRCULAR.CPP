#include<iostream.h>
#include<conio.h>
class Node
{
	public:
		int data;
		Node *next;

};
class List
{
	Node *head;

	public:
		List(){ head = NULL; }
		~List();
		Node* Insert_Node(int,int);
		void Display_List();
		int Delete_Node(int);
};
