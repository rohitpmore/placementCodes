#include <iostream>
#include <math.h>
using namespace std;

int main(){

	long int T;
	long long N;

	cin >> T;

	while(T--){
		cin >> N;

		if(static_cast<long int>(sqrt(5*N*N + 4)) * static_cast<long int>(sqrt(5*N*N + 4)) == N )
			cout << "IsFibo" << endl;
		else if(static_cast<long int>(sqrt(5*N*N + 4)) * static_cast<long int>(sqrt(5*N*N + 4)) == N )
			cout << "IsFibo" << endl;
		else
			cout << "IsNotFibo" << endl;



	}


return 0;
}
