/*

Mostrar valor positivo ou negativo

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t Número negativo ou positivo";
    cout <<"\n Informe um número ";
    cin >> num;


	if (num<0)
	{
	cout<<"\n O número "<<num<<" é negativo";
	}
	else{
		if (num>0)
		{
			cout<<"\n O número "<<num<<" é positivo ";
		}
		else 
		{
			cout<<"\n O número é igual a zero";
		}
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
