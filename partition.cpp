#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
    vector <int> frontVector;
    vector <int> backVector;
    
    int pivot = ar[0];
    int size = ar.size();
    
    for(int i=1;i<size;i++){
        if(ar[i] < pivot)
            frontVector.push_back(ar[i]);
        else
            backVector.push_back(ar[i]);
    }
    
    for(int i=0;i<frontVector.size();i++)
        cout << frontVector[i] << " ";
    
    cout << pivot << " ";
    
    for(int i=0;i<backVector.size();i++)
        cout << backVector[i] << " ";
    
    cout << endl;
    
    
    

}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   
   return 0;
}
