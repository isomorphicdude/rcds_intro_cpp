#include <iostream>
using namespace std;

//function declarations
int function_sign(int n);
int function_abs(int n);

int main() {
    int n;

    cout << "enter an integer:" << endl;
    cin >> n;

    cout << "sign: "<<function_sign(n) <<endl;
    cout <<"abs: "<<function_abs(n)<<endl;

    return 0;
}