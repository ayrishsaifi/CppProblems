#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

class LinkedStack{
	Node *top;
	
	public:
		LinkedStack(){
			top = NULL;
		}
		
	void push(){
		Node *current = new Node;
		if(current!=NULL){
			int value;
			cout<<"\nEnter the value: "<<" ";
			cin>>value;
			current->data = value;
			current->next = top;
			top = current;
		}
		else{
			cout<<"\nThe Memory is not available:"<<endl;
		}
	}
	
	void pop(){
		if(top!=NULL){
			Node *pos = top;
			top = top->next;
			int value = pos->data;
			delete pos;
			cout<<"\nValue popped from the Stack is: "<<value<<endl;
		}
		else{
			cout<<"\nSorry! The Stack is not have any value"<<endl;
		}
	}
	
	void traverse(){
		if(top!=NULL){
			cout<<"\nValues of the Stack are: ";
			Node *pos = top;
			while(pos!=NULL)
			{
				cout<<pos->data<<endl;
				pos = pos->next;
			}
		}
		else{
			cout<<"\nNo element to traverse: "<<endl;
		}
	}
};

int main(){
	LinkedStack ls;
	int ch;
	do{
		cout<<"\nEnter 1 for the Push operation: "<<" ";
		cout<<"\nEnter 2 for the Traverse of Stack: "<<" ";
		cout<<"\nEnter 3 for the Pop Operation in Stack: "<<" ";
		cout<<"\nEnter 4 for the Exit from the Program: "<<" ";
		cout<<"\nEnter the User choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				ls.push();
				break;
			case 2:
				ls.traverse();
				break;
			case 3:
				ls.pop();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nPlease Enter the Valid Choice: "<<endl;
		}
	}while(true);
	return 0;
}
