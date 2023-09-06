#include <iostream> 

using namespace std;

int main(){
int num1;  
int num2;
cout<<"Escriba 2 numeros:";
cin>>num1; 
cin>>num2;

if(num1%2==0)
    cout<<"es par: "<<num1<<endl;
else
    cout<< "es impar: "<<num1<<endl;
if(num2%2==0)
    cout<<"es par: "<<num2<<endl;
else
    cout << "es impar: " <<num2<<endl;
    
if ((num1+num2)%2==0)
    cout << "la suma de los numeros: "<<num1<<" y "<<num2<< " es par " <<endl;
else 
    cout << "la suma de los numeros: "<<num1<<" y "<<num2<< " es impar " <<endl;
return 0;
}