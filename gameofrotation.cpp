#include <iostream>
#include <vector>
using namespace std;

int main(){
	long int N;
	long long sum,elemSum;
	
	sum = 0;
	elemSum = 0;

	cin >> N;
	long int arr[N];

	for(long int i=0; i< N;i++){
		cin >> arr[i];
		sum += (i+1)*arr[i];
		elemSum += arr[i];
	}

	long long maxSum = sum;

	for(int i=0;i<N;i++){
		long long curSum = sum - elemSum + N*arr[i];
		if(curSum > maxSum)
			maxSum = curSum;

		sum = curSum;
	}

	cout << maxSum << endl;

	
return 0;
}
