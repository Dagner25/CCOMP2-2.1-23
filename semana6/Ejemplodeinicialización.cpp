#include<iostream>

using namespace std ;

int main (){
    int arr[4];
    cout<<"Por favor ingrese 4 valores enteros: " <<endl;

    for(int i =0;i <4; i++)
        cin>>arr[i];

    cout<<  "Los valores en los arrelgos son: ";

    for(int i = 0;i <4; i++)
        cout <<" "<< arr[i];

    cout<< "J"<<endl;

    return 0;
}