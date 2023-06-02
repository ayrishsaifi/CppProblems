/* Given an integer array arr, move all 0's to the end of it while maintaining the relative order of non-zero
   elements.
   Note :- You must do this in-place without making copy of the array. */
   
   #include<iostream>
   using namespace std;
   
   // Code for the Problem
   Problem(int arr[],int n){
   	for(int i=n-1;i>=0;i--){
   		int j=0;
   		bool flag = false;
   		while(j!=i){
   			if(arr[j]== 0 && arr[j+1]!=0){
   				swap(arr[j],arr[j+1]);
   				flag = true;
			   }
			j++;
		   }
		   if(!flag) break;
		   
	   }
   }
   
   int main(){
   	int n;
   	int arr[n] = {};
   	cout<<"\nEnter the number for the Problem: "<<" ";
   	cin>>n;
   	
   	// Taking Input from User
   	for(int i=0;i<n;i++){
   		cin>>arr[i];
	   }
	
	cout<<"\nProblem Solved: "<<" ";
	
	Problem(arr,n);
	
	// Print the Solution
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	   
   }
