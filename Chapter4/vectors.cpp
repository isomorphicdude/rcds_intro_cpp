#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    vector<int> vec = {1,2,3,4,5};

    for (int i=0; i<5; i++){
        cout << "array: "<<i <<" "<< arr[i] <<endl;

    }

    int n = 5;
    cout<<"ARRAY size: "<<sizeof(arr)<<endl;
    cout <<"INT size:"<<sizeof(n)<<endl;
    cout <<"length of array:"<<sizeof(arr)/sizeof(n)<<endl;

    for (int i=0; i<vec.size(); i++){
        cout << "vector: "<<i <<" "<< vec[i] <<endl;

    }

    // add element to vector
    vec.push_back(6);
    cout << "vector after appending one element:"<<endl;
    for (int i=0; i<vec.size(); i++){
        cout << "vector: "<<i <<" "<< vec[i] <<endl;

    }

    // remove element from vector
    vec.pop_back();
    cout << "vector after removing one element:"<<endl;
    for (int i=0; i<vec.size(); i++){
        cout << "vector: "<<i <<" "<< vec[i] <<endl;

    }

    return 0;

}