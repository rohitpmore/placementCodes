#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long N;

	cin >> N;
	long long arr[N];

	for(long long i=0;i<N;i++)
		cin >> arr[i];

	sort(arr,arr+N);

	long long minDiff;
	minDiff = arr[1] - arr[0];

	for(long long i =0;i<(N-1);i++){
		if((arr[i+1] - arr[i]) < minDiff)
			minDiff = arr[i+1] -arr[i];

	}

	for(long long i=0; i<(N-1);i++){
		if(minDiff == (arr[i+1]-arr[i]))
			cout << arr[i] << " " << arr[i+1] << " ";
	}

	cout << endl;



return 0;
}
