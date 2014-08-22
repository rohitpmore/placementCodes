#include <iostream>
using namespace std;

int main(){
	int T;
	int a=3,b=5;
	int x,y;
	long int N;

	cin >> T;

	while(T--){

		cin >> N;
		x=y=0;
		
		if(N < 3){
			cout << -1 << endl;
			continue;
		}

		x= N/a;



		while(x > 0 && ((N-(x*a))%b) != 0){
			x--;
		}

		y = (N - (a*x)) /b;

		

		if((x*a + y*b ) == N){
			cout << std::string(a*x, '5') << std::string(b*y,'3') << endl;
		}
		else
			cout << -1 << endl;
			
	}

	return 0;

}
