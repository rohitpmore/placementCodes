#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){

	int T,N;
	long long K;

	cin >> T;

	while(T--){

	cin >> N >> K;
	long long A[N];
	long long B[N];

	for(int i=0;i<N;i++)
		cin >> A[i];

	for(int i=0;i<N;i++)
		cin >> B[i];

	sort(A,A+N);
	sort(B,B+N,std::greater<int>());

	int ans =0;

	for(int i=0;i<N;i++){

		if(A[i] + B[i] < K){
			ans = 1;
			break;
		}
	}

	if(ans == 1)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	}


return 0;
}
