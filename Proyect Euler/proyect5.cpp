/*
2520 es el numero mas pequeño que se puede dividir por cada uno de los numeros del 1 al 10 sin ningun resto.
¿Cuál es el numero positivo mas pequeño que es divisible por todos los numeros del 1 al 20?*/

#include <iostream>
using namespace std;
int main() {

int x;
int c;
int f;
int j;
f=0;
for(x=1;x<=20;x++)
  {for(c=1;c<=20;c++)
    {while(x%c!=0)
      {break;
        f++;}}
    break;
  if(f==20)
      {cout<<x;}
        
        

  }
  }

