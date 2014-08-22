#include <iostream>
using namespace std;

int getGCD(int x,int y){
	
	while(x != y){
		if( x > y)
			x= x-y;
		else
			y = y-x;

	}

	return x;
}

int main(){

	int T;
	int N;
	
	cin >> T;

	while(T--){

		cin >> N;
		int A[N];
		int B[N+1];

		for(int i=0;i<N;i++){
			cin >> A[i];
			B[i] = A[i];
		}

		B[N] = A[N-1];

		for(int i=0;i<N;i++){

			int x;
			x = getGCD(B[i],B[i+1]);
			int k =B[i+1];
			while(x != A[i]){
				B[i+1] = B[i+1] + k;
				x = getGCD(B[i],B[i+1]);	

			}		
			

		}

		//cout << "Before array print" << endl;
		for(int j=0;j<=N;j++)
			cout << B[j] << " ";

		cout << endl;

	}


return 0;
}
