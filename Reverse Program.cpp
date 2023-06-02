/* Find the Reverse of the Array*/

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
	int first = 0;
	int last = n-1;
	
	while(first<last){
		int temp = arr[first];
		arr[first] = arr[last];
		arr[last] = temp;
		first++;
		last--;
	}
}

int main(){
	int n;
	int arr[n] = {};
	cout<<"\nEnter the number for the Array: "<<" ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	reverse(arr,n);
	
	cout<<"\nReversed Array: "<<" ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
} 
