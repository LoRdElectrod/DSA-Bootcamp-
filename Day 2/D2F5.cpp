//Linked List

#include <iostream>
class Node{
	public:
		int data;
		Node *next;
};
int main(){
	Node *head= NULL;
	Node *first = NULL;
	Node *second = NULL;
	
	head= new Node();
	first = new Node();
	second = new Node();
	
	head->data = 54;
	head->next = first;
	
	first->data = 44;
	first->next = second;
	
	second->data=33;
	second->next=Null;
	return 0;
}
