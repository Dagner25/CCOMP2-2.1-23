#include <iostream>
using namespace std;
int main(){
    int num1; 
    int num2; 
    int num3;
    cout<<"Ingrese el primer digito: "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo digito: "<<endl;
    cin>>num2;
    cout<<"Ingrese el tercer digito: "<<endl;
    cin>>num3;
    if(num1%num2 == 0 || num2%num1 == 0){
        cout<<num3 <<" es factor de "<< num1 <<" y "<< num2<<endl;
    }
    else{
        cout<<num3 <<" no es factor de "<< num1 <<" y "<< num2<<endl;
    }
    return 0;
}