#include <iostream>

using namespace std;

int main(){
    int x;

    cout<<"ingrese el numero de 4 digitos: "<<endl;
    cin>>x;

    int c4 = x % 10;
    int c3 = (x %100)/10;
    int c2 = (x % 1000)/100;
    int c1 = x /1000;

    cout<<c4<<" "<<c3<<" "<<c2<<" "<<c1<<endl;
    
    return 0;
}