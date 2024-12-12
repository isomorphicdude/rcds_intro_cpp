#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string line;

    ifstream file1;

    //open
    file1.open("sqnum.txt");

    // from file get the declared variable
    while(getline(file1, line)){
        cout << line << endl;
    }

    file1.close();

    return 0;
}