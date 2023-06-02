#include<iostream>
using namespace std;

class Pattern{
	
	public:
		
	void descending(){
		int n;
		cout<<"\nEnter the number for the Pattern: "<<" ";
		cin>>n;
		
		for(int i=n;i>=1;i--){
			for(int j=1; j<=i;j++){
				cout<<"* ";
			}
			cout<<"\n";
		}
	}
	
	void ascending(){
		int n;
		cout<<"\nEnter the number for the Pattern: "<<" ";
		cin>>n;
		
		for (int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<"* ";
			}
			cout<<"\n";
		}
	}
	
	void FullPyramid() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }

        cout << endl;
    }
	
	}
	
	void ReversePryamid(){
		int n;
		cout<<"\nEnter the number for the Pattern: "<<" ";
		cin>>n;
		
		for(int i = n - 1 ; i >= 1; i--){
			for(int j = 1; j <= n - i; j++) {
				cout << "  ";
			}
			
			for(int k = 1; k <= 2 * i - 1; k++){
				cout<< "* ";
			}
			
			cout << endl;
		}
	}

    void DiamondPattern() {
	int n;
    cout << "Enter the number of Printing Pattern: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << "  ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "* ";
        }

        cout << endl;
    }
}

	void Triangular(){
		int n,num = 1;
		cout<<"\nEnter the number for the Pattern: "<<" ";
		cin>>n;
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				cout<<num<<" ";
				num++;
			}
			cout<<"\n";
		}
	}
	
	void HollowRectanlge(){
		int n;
		cout<<"\nEnter the number for the Row: "<<" ";
		cin>>n;
		int m;
		cout<<"\nEnter the number for the Columns: "<<" ";
		cin>>m;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if( i == 1 || i == n || j == 1 || j == m){
					cout<<"* ";
				}
				else{
					cout<<"  ";
				}
			}
			cout << endl;
		}
	}
		
};

int main(){
	Pattern p;
	int ch;
	do{
		cout<<"\nEnter 1 for the Descending Pattern: "<<" ";
		cout<<"\nEnter 2 for the Ascending Pattern: "<<" ";
		cout<<"\nEnter 3 for the Full Pryamid Pattern: "<<" ";
		cout<<"\nEnter 4 for the Reverse Pryamin Pattern: "<<" ";
		cout<<"\nEnter 5 for the Diamond Pattern: "<<" ";
		cout<<"\nEnter 6 for the Triangular Pattern: "<<" ";
		cout<<"\nEnter 7 for the Hollow Rectangle Pattern: "<<" ";
		cout<<"\nEnter 8 for the Exit from the Program: "<<" ";
		cout<<"\nEnter the User Choice: "<<" ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				p.descending();
				break;
			case 2:
				p.ascending();
				break;
			case 3:
				p.FullPyramid();
				break;
			case 4:
				p.ReversePryamid();
				break;
			case 5:
				p.DiamondPattern();
				break;
			case 6:
				p.Triangular();
				break;
			case 7:
				p.HollowRectanlge();
				break;
			case 8:
				exit(0);
			default:
				cout<<"\nSorry! Please Enter Valid Choice"<<endl;
		}
	}while(true);
	
	return 0;
}
