#include<iostream>
#include<stdlib.h>
using namespace std;

class ArrayStack{
	int data[10];
	int max_size;
	int top;
	
	public:
	ArrayStack(){
		max_size = 10;
		top = -1;
	}	
	
	void push(){
		if(top<max_size){
			int value;
			cout<<"Enter the value: "<<" ";
			cin>>value;
			top++;
			data[top]=value;
		}
		else{
			cout<<"\nSorry! The Stack is totally full"<<endl;
		}
	}
	
	void pop(){
		if(top!=-1){
			int value = data[top];
			top--;
			cout<<"\nPopped Value is: "<<value<<endl;
		}
		else{
			cout<<"\nSorryy! The Stackk is Empty"<<endl;
		}
	}
	
	void traverse(){
		if(top!=-1){
			cout<<"\nValues of Stack are: "<<" ";
			for(int i=top;i>=0;i--){
				cout<<data[i]<<endl;
			}
		}
		else{
			cout<<"\nSorryy! The Stack is Empty"<<endl;
		}
	}
};

int main(){
	ArrayStack as;
	int ch;
	do{
		cout<<"\nEnter 1 for the Push Operation: "<<" ";
		cout<<"\nEnter 2 for the Pop Operation: "<<" ";
		cout<<"\nEnter 3 for the Traverse the Stack: "<<" ";
		cout<<"\nEnter 4 for the Exit from the Program: "<<" ";
		cout<<"\nEnter the User Choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				as.push();
				break;
			case 2:
				as.pop();
				break;
			case 3:
				as.traverse();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nSorryy! Please Enter the Right Choice"<<endl;
		}
	}while(true);
	
	return 0;
}
