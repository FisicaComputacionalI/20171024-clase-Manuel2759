//Programa que suma los anteriores numeros naturales, dependiendo de un numero natural dado
//Juan Manuel Badillo Serrano
//Martes 24 de Octubre del 2017

#include <iostream>
using namespace std;
int main()
{
  long N;
  long sum=0;
  cout<<"Dame un numero natural "<<endl;
 cin>>N;
 for (long i=1; i<N; i++)
   {
     sum=sum+i;
   }
 cout<<"La suma es "<<sum<<endl;

  return 0;
}
