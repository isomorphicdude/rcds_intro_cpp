#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {

    // declare
    ofstream file1;

    // open file
    file1.open("sqnum.txt", ios_base::app); // appending

    file1<<"Sqaure numbers:\n"<<endl;

    int n = 10;
    // write to file
    for (int i=0; i < n; i++){
        file1 << "index: " << i << " power2: " << pow(i, 2) << endl;
    }

    //close
    file1.close();

    return 0;
}