#include <iostream>
using namespace std;


int main(){

	long int N;

	cin >> N;

	long int arr[N];

	for(long int i=0; i< N; i++){
		cin >> arr[i];

	}

	long int k=0;
	long int count =0, startIndex = 0;
	long int j = 0;
	//k = startIndex + 1;
	//count++;
	

	while(startIndex<N){
		count++;
		cout << arr[startIndex] << endl;
		if(k==startIndex){
			//count++;
			k++;
		}
		if(arr[k] >= arr[k-1] && k < N){
			//count ++;
			k++;
		}
		else{
			startIndex++;
			k= startIndex;
			//count++;
		}
	}

	cout << count << endl;



return 0;
}
