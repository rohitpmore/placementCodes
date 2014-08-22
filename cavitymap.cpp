#include <iostream>
using namespace std;

int main(){

	int n;
	

	cin >> n;

	int myArray[n][n];

	for(int i=0;i<n;i++){
		string line;
		cin >> line;

		for(int j=0;j<n;j++){
			myArray[i][j] = line[j] - 48;	
		}		

	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 || j==0 || j==(n-1) || i==(n-1)){
				cout << myArray[i][j];
				continue;
			}

			if(myArray[i][j] > myArray[i+1][j] && myArray[i][j] > myArray[i-1][j] && myArray[i][j] > myArray[i][j+1] && myArray[i][j] > myArray[i][j-1] )
				cout << "X"; 
			else
				cout << myArray[i][j];


		}

		cout << endl;

	}



return 0;
}
