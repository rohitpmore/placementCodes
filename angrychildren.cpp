#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	long int N,K;

	cin >> N >> K;

	long long a[N];

	for(int i=0; i<N ;i++){
		cin >> a[i];

	}

	sort(a,a+N);
	long long min= 9999999999;

	for(int i=0;i<N-K;i++){

		if(a[i+K-1]-a[i] < min)
			min= a[i+K-1] - a[i];

	}

	cout << min << endl;	
	

return 0;
}
