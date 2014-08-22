#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	long int N;
	string dummy;
	int a[100]={0};

	cin >> N;
	int a_helper[N];

	for(int k=0;k<N;k++){

		cin >> a_helper[k];
		cin >> dummy;
	}
	
	sort(a_helper,a_helper+N);

	int acc=0;
	int i=0;
	int j=0;

	while(i<100){
		//cout << "Acc: " << acc << endl;		
		if(j < N ){
			while(i < a_helper[j]){
				a[i] = acc;
				i++;
			}
			acc = 1 + acc;
			j++;
		}
		else{
			a[i] = acc;	
			i++;
		}

	}

	for(int k=0; k< 100; k++){
		cout << a[k] << " ";
	}
	cout << endl;

return 0;
}

