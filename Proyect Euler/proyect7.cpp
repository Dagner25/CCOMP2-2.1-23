/*Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
¿Cuál es el número primo 1001er?*/

#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int z;
int g;
int f;
g=0;
cin>>z;
f=0;
for(n=2;n<=z;n++)
  {b=0;
    for(x=2;x<=z;x++)
    {if(n%x==0)
      b++;}
    if(b==1)
      {//cout<<n<<endl;
        f++;
      cout<<endl<<f<<"|"<<n;}}
  
  
  
}