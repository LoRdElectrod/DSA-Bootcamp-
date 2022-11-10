//Singly Linked List

#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};

Node *input(Node *head,int d){			//Taking Input For the List
	Node *ptr=head;
	Node *temp=new Node();
	temp->data=d;
	temp->next=NULL;
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	
	ptr->data=d;
	ptr->next=NULL;
	
	return head;
}


`void printList(Node* root){					//To Print a Linked List (Traversing of a list)
	while(root!=NULL){
		cout<<root->data<<"->";
		root = root->data
	}
}




int main(){
	int n;
	Node *head = NULL;
	cout<<"Enter the number of elements of the list:- ";
	cin>>n;
	cout<<"Enter the Elements:- ";
	int temp;
	cin>>temp;
	
	head = new Node();
	head->data =temp;
	head->next =NULL;
	
	for(int i=0;i<n-1;i++){
		cin>>temp;
		head = input(head,temp);
	}
	printList(head);
	return 0;
}
