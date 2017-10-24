//Programa que ve si un numero es primo o si no lo es
//Juan Manuel Badillo Serrano
//Martes 24 de Octubre del 2017

#include <iostream>
using namespace std;
int main(){
  long N=12;
  long flag=0;
  long divisor =0;
  cout<<"inserte un numero "<<endl;
  cin>>N;
  for (long i=2; i<N/2; i++)
    {
      if(N%i ==0)
	{
	  flag=1;
	  divisor=i;
	    break;
	}
    }
  if (flag==1)
    {
	cout <<"Tu numero no  es primo"<<endl;
	cout<<"Porque se divide entre "<<divisor<<endl;
    }
      else 
	cout<<"Tu numero es  primo"<<endl;
      return 0;
}
