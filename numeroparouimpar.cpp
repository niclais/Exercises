/*

Mostrar n�mero par ou �mpar

o % � usado para pegar a divis�o certa no resultado final

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t N�mero par ou �mpar";
    cout <<"\n Informe um n�mero ";
    cin >> num;


	if (num%2==0)
	{
	cout<<"\n O n�mero � par";
	}
	else{
	cout<<"\n O n�mero � �mpar";
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
