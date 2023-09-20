/* Si enumeramos todos los numeros naturales a continuación 10 que son multiplos de 3 o 5, obtenemos 3,5,6 y 9
La suma de estos mútiplos es 23.
Encuentra la suma de todos los múltiplos de 3 o 5 abajo de 1000.
*/
/*Problema 1
Si enumeramos todos los n�meros naturales por debajo de 10 que son m�ltiplos de 3 o 5, 
obtenemos 3, 5, 6 y 9. La suma de estos m�ltiplos es 23.
Encuentra la suma de todos los m�ltiplos de 3 o 5 por debajo de 1000.*/

#include <iostream>

using namespace std;

int main(){
	int y = 0; 
		
	for(int i=0;i<1000;i++){
		if (i%3 == 0){
			y = y + i;
		}
		else if (i%5 == 0){
			y = y + i;
		}
	}
	cout<<"Suma de todos los multiplos de 3 o 5 por debajo de 1000: "<<y<<endl;
	return 0;
}
