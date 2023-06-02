#include<iostream>
using namespace std;

class Array{
	
	int l;
	int max_size;
	int data[10];
	public:
		Array(){
			l = 0;
			max_size = 10;
		}
		
	void insert_end(){
		if(l<max_size){
			int value;
			cout<<"Enter the Value: "<<" ";
			cin>>value;
			data[l]=value;
			l++;
		}
		else{
			cout<<"\nThe Array is Full!"<<endl;
		}
	}
	
	void insert_index(){
		if(l<max_size){
			int index;
			cout<<"Enter the Index for the insert: "<<" ";
			cin>>index;
			if(index>=0 && index<=l-1){
				for(int i=l-1;i>=index;i--){
					data[i+1]=data[i];
				}
				int value;
				cout<<"Enter the Value for the Instrtion: "<<" ";
				cin>>value;
				data[index]=value;
				l++;
			}
			else{
				cout<<"\nSorry! Invailed Index: "<<endl;
			}
		}
		else{
			cout<<"\nThe Choice is not Matching: "<<endl;
		}
	}
	
	void delete_end(){
		if(l>0){
			int value = data[l-1];
			l--;
			cout<<"\nDeleted element is: "<<value<<endl;
		}
		else{
			cout<<"\nOpps Sorry! The Array is Empty: "<<endl;
		}
	}
	
	void delete_index(){
		if(l>0){
			int index;
			cout<<"\nEnter the index for the delete: "<<" ";
			cin>>index;
			
			if(index>=0 && index<=l-1){
				int value = data[index];
				for(int i=index+1;i<l-1;i++){
					data[i-1]=data[i];
				}
				l--;
				cout<<"\nDeleted value from index is: "<<value<<endl;
			}
			else{
				cout<<"\nOpps! Index is not valid"<<endl;
			}
		}
		else{
			cout<<"\nSorry! The Array is totally empty"<<endl;
		}
	}
	
	void traverse(){
		if(l>0){
			for(int i=0;i<l;i++){
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
		else{
			cout<<"\nThere is no value to Traverse!"<<endl;
		}
	}
};

int main(){
	Array arr;
	int ch;
	do{
		
		cout<<"\nPress 1 for the Insertion operation in Array: "<<" ";
		cout<<"\nPress 2 for the Insertion Index Operation in Array: "<<" ";
		cout<<"\nPress 3 for the Delete at End Operaton in Array: "<<" ";
		cout<<"\nPress 4 for the Delete at Index Operaton in Array: "<<" ";
		cout<<"\nPress 5 for the Traverse Operaton in Array: "<<" ";
		cout<<"\nPress 6 for the Exit from the Program:"<<" ";
		cout<<"\nEnter the User choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				arr.insert_end();
				break;
				
			case 2:
				arr.insert_index();
				break;
				
			case 3:
				arr.delete_end();
				break;
			
			case 4:
				arr.delete_index();
				break;
				
			case 5:
				arr.traverse();
				break;
			case 6:
				exit(0);
			default:
				cout<<"\The invalid choice from user: Sorry!"<<endl;
		}
	}while(true);
	
	return 0;
}
