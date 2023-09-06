#include <iostream>

using namespace std;
int main(){
    
int num1; 
int num2; 
int num3;
int num4;
int num5;
int may; 
int men;
cout<<"Coloque los cinco numeros deseados:";
cin>>num1>>num2>>num3>>num4>>num5;
 
 men=num1;
    if(num2<men)
    men=num2;
    if(num3<men)
    men=num3;
    if(num4<men)
    men=num4;
    if(num5<men)
    men=num5;
    cout<<"El menor numero de los seleccionados es: "<<men<<endl;
 
    may=num1;
    if(num2>may)
    may=num2;
    if(num3>may)
    may=num3;
    if(num4>may)
    may=num4;
    if(num5>may)
    may=num5;

    cout<<"El mayor numero de los seleccionados es: "<<may<<endl;
 
 return 0;
}