/* Check if pair with given Sum exists in Array
   Given an array A[] of n numbers and another number x, 
   the task is to check whether or not there exist two elements in A[] whose sum is exactly x. */
   
   #include<iostream>
   using namespace std;
  
   int main(){
   	int n,x;
   	int arr[n]={};
   	cout<<"\nEnter the number for the Array: "<<" ";
   	cin>>n;
   	cout<<"\nEnter the target number: "<<" ";
   	cin>>x;
   	
   	for(int i=0;i<n;i++){
   		cin>>arr[i];
	   }
	for(int i=0;i<n-1;i++){
   		for(int j=i+1;j<n;j++){
   			if(arr[i] + arr[j] == x){
   				return 1;
		   }
		   cout<<arr[i]<<arr[j]<<endl;
	   }
   }
	
	
	return 0;
   }
