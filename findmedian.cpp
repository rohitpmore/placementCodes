#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long N;

	cin >> N;
	long long arr[N];
	for(long int i=0 ;i<N;i++)
		cin >>arr[i];

	sort(arr,arr+N);
	if(N%2 == 0)
	cout << (arr[N/2] + arr[N/2-1])/2 << endl;
	else
	cout << arr[N/2] << endl;



return 0;
}
