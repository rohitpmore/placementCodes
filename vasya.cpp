#include <iostream>
using namespace std;

int main(){

	int M,N;
	int totalSocks,extraSocks,noofDays;

	cin >> N >> M;
	
	totalSocks = N;
	
	extraSocks = totalSocks/M;
	totalSocks += extraSocks;

//	noofDays = totalSocks + extraSocks;

	//cout << totalSocks/M << endl;

	while(totalSocks/M != extraSocks ){
		totalSocks += ((totalSocks/M) - extraSocks);
		extraSocks = totalSocks / M;
	
	}

	noofDays = totalSocks;

	cout << noofDays << endl;



return 0;
}
