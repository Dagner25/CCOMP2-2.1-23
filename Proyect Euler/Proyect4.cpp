/*Problema 4
Un numero palindromico se lee igual en ambos sentidos. El palindromo mas grande 
hecho del producto de dos numeros de 2 digitos es 9009 = 91 x 99.
Encuentra el palindromo mas grande formado por el producto de dos numeros de 3 digitos.*/

#include <iostream>
using namespace std;
int main() {
int x;
int a;
int b;
int f;
int k;
int d;

int z;
int y;
int e;

for(e=100;e<1000;e++)
  {for(y=100;y<1000;y++)
    {z=y*e;
     x=z/100000;
     a=(z/10000)-(x*10);
     b=(z/1000)-((x*100)+(a*10));
     f=(z/100)-((x*1000)+(a*100)+(b*10));
     k=(z/10)-((x*10000)+(a*1000)+(b*100)+(f*10));
     d=(z/1)-((x*100000)+(a*10000)+(b*1000)+(f*100)+(k*10));}
    if ((x==d)&&(a==k)&&(b==f))
      {cout<<z<<endl;}
    }

}