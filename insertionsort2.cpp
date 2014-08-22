#include <iostream>
using namespace std;


void insertionSort(int* elem, int size){

	int i,j;
	int value;

	for(i=1;i<size;i++){

		j= i-1;
		value = elem[i];

		while(j>=0 && elem[j] > value){
			elem[j+1] = elem[j];
			j--;
		}

		elem[j+1] = value;

		for(int k=0; k< size; k++){
			cout << elem[k] << " " ;
		}
		cout << endl;

	}

	//for(int k=0; k< size; k++){
	//	cout << elem[k] << " " ;
	//}
	//cout << endl;





}
int main(){
	int arraySize;
	
	cin >> arraySize;

	int elemArray[arraySize];

	for(int i=0;i<arraySize; i++){
		cin >> elemArray[i];
	}

	insertionSort(elemArray,arraySize);


return 0;
}
