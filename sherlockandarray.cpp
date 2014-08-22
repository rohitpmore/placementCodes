#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<long> myVector;

	int T;
	long int N,i;

	cin >> T;

	int ans;

	while(T--){
		
			
		cin >> N;
		for(i=0;i<N;i++){
			long temp;
			cin >> temp;
			myVector.push_back(temp);
		}


		long int start,end,sumF,sumE;
		sumF=sumE=0;
		start = -1;
		end = myVector.size();
		ans = 0;
		
		while(start < end){


			if(sumF == sumE && (end - start) == 2){
				ans = 1;
				break;	
			}

			if(sumF > sumE){
				sumE += myVector[--end];
				//end--;
			}
			else{
				sumF += myVector[++start];
				//start ++;
			}
	

		}

		if(ans ==1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		myVector.clear();


	}



return 0;
}
