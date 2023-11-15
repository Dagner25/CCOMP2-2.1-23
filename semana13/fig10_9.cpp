#include<iostream>
#include<stdexcept>
#include "Array.h"
using namespace std;

int main(){
    Array integers1{7};
    Array integers2;

    cout <<"Size of Array integers1 is "<< integers1.getSize()
        << "\n Array after initialization " << integers1;
    cout << "\nSize of Array integers2 is " << integers2.getSize()
        << "\nArray afther initializatio: " <<integer2;
    cout << "\nEnter 17 integers: " << endl;
    cin >> intgers1 >> intgers2;

    cout << "\nAfther input, the Arrays contain: \n"
        << "integers1: " <<integers1;
        << "integers2: " <<integers2;
    
    cout <<"\nEvaluating: integers1 != integers2" <<endl;

    if (integers1 != integers2){
        cout << "integers1 and integers2 are not equal" << endl;
    }

    Array integers3{integers1};

    cout << "\nSize of Array integers3 is " << integers3.getSize()
        << "\nArray after initialization: " << integers3;
    cout <<"\nAssignig integers2 to integers1:" << endl;
    integers1 = integers2;
    cout << "integers1: " <<integers1 << "integers2: " << integers2;

    cout << 
}