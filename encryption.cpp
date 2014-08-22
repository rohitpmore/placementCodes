#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int j,k,height,width;
	string ipString;

	cin >> ipString;

	height = floor(sqrt(ipString.length()));
	width = ceil(sqrt(ipString.length()));
	
//	cout << height << " " << width << endl;

	string arrChar[height];

	j=0;
	k=0;
	cout << ipString.length() << endl;

	for(int i=0;i<ipString.length();i++){
	
		cout << k << " " << ipString[i] << endl;
		arrChar[j] = arrChar[j] + ipString[i];
		k++;
		if(k==width){
			cout << "K:" << k << endl;
			j++;
			k=0;
		}


	}
	//for(int i=0;i < ipString.length();i++){
//		cout << i << " ";
//		cout << ipString[i] << endl;
//		arrChar[j] += ipString[i];
//		
///		k++;
//		
//		if(k==width){
//			j++;
//			k=0;
//		}
//	}

	for(int m=0;m<height;m++)
		cout << arrChar[m] << endl;

	for(int k=0;k<width;k++){
		
		for(int j=0;j< height;j++){
			if(arrChar[j].length() > k)
				cout << arrChar[j][k];
		}

		cout << " ";
	}
	cout << endl;
return 0;
}
