#include <iostream>
using namespace std;

// functions computing sign
int function_sign(int n){
    int sign;

    if (n>0){
        sign = 1;
    }else if (n==0)
    {
        sign=0;
    }else{
        sign = -1;
    }
    
    return sign;

}