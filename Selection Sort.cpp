#include<iostream>
using namespace std;

SelectionSort(int arr[], int n){
	int min_index;
	for(int i=0;i<n-1;i++){
		min_index = i;
		for(int j=i+1;j<n-1;j++){
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		swap(arr[min_index],arr[i]);
	}
}

int main(){
	int n;
	int arr[n]={};
	cout<<"Enter the number for the Sorting: "<<" ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	SelectionSort(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
