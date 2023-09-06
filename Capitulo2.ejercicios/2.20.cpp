#include <iostream>
int diametro;
int area;
using namespace std;
int main(void){
    double radio, area, longitud;
    cout <<"Ingrese el numero de radio deseado"<< endl;
    cin >> radio;

    area = 3.14159*radio*radio;
    diametro = 2*radio;

    cout<<"El diametro es"<< diametro << endl;
    cout <<"El area es" << area << endl;
return 0;
}