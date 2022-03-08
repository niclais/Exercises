/*

Mostrar número par ou ímpar

o % é usado para pegar a divisão certa no resultado final

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t Número par ou ímpar";
    cout <<"\n Informe um número ";
    cin >> num;


	if (num%2==0)
	{
	cout<<"\n O número é par";
	}
	else{
	cout<<"\n O número é ímpar";
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
