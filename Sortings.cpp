#include<iostream>
using namespace std;

class Sorting{
	
	public:
		
	// Program for the Bubble Sorting
	
	void BubbleSort(){
		int n;
		int arr[n]={};
		cout<<"\nEnter the number for the Array: "<<" ";
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		// Code for the Sorting
		for(int i=0;i<=n;i++){
			for(int j=0;j<n-1;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
				}
			}
		}
		
		//Print the Sorted Array
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	
	// Here is the Program for the Selection sorting
	
	void SelectionSort(){
		int n;
		int min_index;
		int arr[n]={};
		cout<<"\nEnter the number for the Array: "<<" ";
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		//Code for the Sorting
		for(int i=0;i<n-1;i++){
			min_index = i;
			for(int j=i+1;j<=n-1;j++){
				if(arr[j]<arr[min_index]){
					min_index = j;
				}
				swap(arr[min_index],arr[i]);
			}
		}
		
		//Print the Sorted Array
		
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" "; 
		}
	} 
};

int main(){
	Sorting s;
	int ch;
	do{
		cout<<"\nEnter 1 for the Bubble Sorting: "<<" ";
		cout<<"\nEnter 2 for the Selection Sorting: "<<" ";
		cout<<"\nEnter 3 for the Exit from the Program: "<<" ";
		cout<<"\nPlease enter the user choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				s.BubbleSort();
				break;
			case 2:
				s.SelectionSort();
				break;
			case 3:
				exit(0);
			default:
				cout<<"\nSorry! Please enter the valid choice"<<endl;
		}
	}while(true);
	
	return 0;
}
