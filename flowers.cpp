#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N,K;
	int multFactor = 1;
	long long cost = 0;

	cin >> N >> K;

	long long arr[N];

	for(int i=0;i<N;i++)
		cin >> arr[i];

	sort(arr,arr+N,std::greater<int>());
	int j=0;

	for(int i=0;i<N;i++){
		cost += arr[i]*multFactor;
		j++;
		if(j==K){
			j=0;
			multFactor++;
		}

	}


	cout << cost << endl;



return 0;
}
