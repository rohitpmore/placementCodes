#include <iostream>
using namespace std;

int getGCD(int x, int y){
	if(x ==0)
		return y;
	if(y==0)
		return x;
	while(x!=y){

		if (x>y)
			x = x-y;
		else
			y = y -x;

	}

	return x;
}

int main(){
	int T;
	int N;
	long int x;
	long int accGCD=0;

	cin >> T;

	while(T--){
		cin >> N;
		int flag=0;
		accGCD = 0;
		while(N--){
				
			cin >> x;
			accGCD = getGCD(accGCD,x);
			
			if(accGCD == 1){
				flag = 1;
				
				
			}

		}
		
		if(flag == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		

	}
	return 0;
	}
