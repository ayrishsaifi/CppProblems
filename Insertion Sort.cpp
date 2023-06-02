// Program for the Insertion Sort
#include<iostream>
using namespace std;

InsertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int current = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>current){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
}

int main(){
	int n;
	int arr[n] = {};
	cout<<"\nEnter the number for the Sorting: "<<" ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"\Sorted Array is: "<<" ";
	
	InsertionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
