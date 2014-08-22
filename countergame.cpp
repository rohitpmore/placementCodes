#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int T;
	unsigned long long N;
	int count;

	cin >> T;

	while(T--){

		cin >> N;
		//cout << N << endl;
		count = 0;

		while(N != 1){
			count ++;
			if((N & (N-1)) == 0 ){
				N = N / 2;
				
			}
			else{
				unsigned long long temp = N;
				while((temp & (temp -1)) != 0){
					temp = (temp & (temp-1));
				}


				N -= temp;

			}


		}

		//cout << N << endl;


		if(count % 2 == 0)
			cout <<"Richard" << endl;
		else
			cout << "Louise" << endl;
	}


return 0;
}
