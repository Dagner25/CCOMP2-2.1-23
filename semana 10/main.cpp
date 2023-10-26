#include<iostream>
#include"Point.h"
#include"GeometricsVector.h"

using namespace std;

int main(){
    cout<<"Main: Inicio"<<endl;
    Point p1(0, 0);
    Point p2(4, 3);
    GeometricVector vec(p1, p2);

    cout<< vec.modulo()<<endl;

    cout<<"Main: Termino" <<endl;
    return 0;

}
