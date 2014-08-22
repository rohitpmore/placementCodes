#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> myVector;

	int N;
	cin >> N;

	for(int i=0;i<N;i++){
		int temp;
		cin >> temp;
		myVector.push_back(temp);
	}

	int wantedNumber=0;


	for(int i=0; i<N; i++)
		wantedNumber = wantedNumber ^ myVector[i];

	cout << wantedNumber << endl;
		




return 0;
}
