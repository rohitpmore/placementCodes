#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){

	int T;
	long int M,N;
	
	cin >> T;

	while(T--){
		cin >> M;
		cin >> N;
		long long arr[N];
		//long int indexes[10000] = {-1};
		vector<int> multiIndex;
		std::vector<int> indexes[10000];

		for(long int i=0;i<N;i++){
			cin >> arr[i];
			indexes[arr[i]].push_back(i+1);
		}

		sort(arr,arr+N);

		long int i=0;
		long int j=N-1;

		while(1){


			if(arr[i] + arr[j] > M)
				j--;
			else if(arr[i] +arr[j] < M)
				i++;
			else{

				if(arr[i] == arr[j]){
					for(int k=0; k< indexes[arr[i]].size();k++)
						cout << indexes[arr[i]][k] << " ";
					cout << endl;
				}
				else{
					if(indexes[arr[i]][0] > indexes[arr[j]][0])
						cout << indexes[arr[j]][0] << " " << indexes[arr[i]][0] << endl;
					else
						cout << indexes[arr[i]][0] << " " << indexes[arr[j]][0] << endl;

				}

				break;
			}


		}

	}




return 0;
}
