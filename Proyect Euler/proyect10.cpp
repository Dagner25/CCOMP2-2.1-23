#include <iostream>
using namespace std;
int main() {


int n;
int x;
int b;
int z;
long long g;
int f;

cin>>z;
g=0;
for(n=2;n<=z;n++)
  {b=0;
    for(x=2;x<=z;x++)
    {if(n%x==0)
      b++;}
    if(b==1)
      {//cout<<n<<endl;
        
        g=g+n;}
    if(g<=2000000)
      {cout<<"|"<<g<<endl;}} 
        

  
  
  
}