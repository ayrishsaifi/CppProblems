/* The implimatation of Queue from Array */

#include<iostream>
using namespace std;

class ArrayQueue{
	int max_size;
	int data[10];
	int Front, Rear;
	
	public:
		ArrayQueue(){
			max_size = 10;
			Front = -1;
			Rear = -1;
		}
		
	void Enqueue(){
		if(Rear < max_size){
			int value;
			cout<<"\nEnter the Value: "<<" ";
			cin>>value;
			if(Front != -1){
				Front = 0;
				Rear = 0;
			}
			else{
				Rear++;
			}
			data[Rear] = value;
		}
		else{
			cout<<"\nSorry! The Array is Full"<<endl;
		}
	}
	
	void traverse(){
		if(Front != -1){
			cout<<"\nThe values of Queue are: "<<" ";
			for(int i=Front;i<=Rear;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"\nSorry no elements are present to traverse"<<endl;
		}
	}
};

int main(){
	ArrayQueue aq;
	int ch;;
	do{
		cout<<"\nEnter 1 for the Enqueue Operation: "<<" ";
		cout<<"\nEnter 2 for the Traverse the array: "<<" ";
		cout<<"\nEnter 3 for the Exit from the Program: "<<" ";
		cout<<"\nEnter the User choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				aq.Enqueue();
				break;
			case 2:
				aq.traverse();
				break;
			case 3:
				exit(0);
			default:
				cout<<"\nPlease enter the valid choice"<<endl;
		}
	}while(true);
	
	return 0;
}
