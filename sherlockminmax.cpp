#include <iostream>
#include <algorithm>
using namespace std;
int main(){

	int N;

	cin >> N;
	long long arr[N];

	for(int i=0 ;i<N;i++)
		cin >> arr[i];

	long long P,Q;
	cin >> P >> Q;

	long long max = 0;
	long long maxIndex = 0;

	for(long long i= P; i <= Q; i++){

		long long min = -1 ;
		
		for(int j=0;j< N; j++){
			long long diff;
			if(arr[j] > i){
				diff = arr[j] -i;
			}
			else
				diff = i - arr[j];


			if(diff < min ||  min == -1)
				min = diff;


		}
		if(max < min){
			max = min;
			maxIndex = i;
		}


		

	}
	
	cout << maxIndex << endl;





return 0;
}
