#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n = 10;
    int square_num[n];

    //iterate and store values

    for (int i=0; i < n; i++){
        // cout << "index: " << i << " power2: " << pow(i, 2) << endl;
        square_num[i] = pow(i, 2);
    }


    // display
    for (int i=0; i < n; i++){
        cout << "index: " << i << " power2: " <<  square_num[i] << endl;
    }
    // int i=1;
    // while (i<n){
    //     cout << "index: " << i << ", i square: " << pow(i, 2) << endl;
    //     i++;
    // }

    return 0;
}