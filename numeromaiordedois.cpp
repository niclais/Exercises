/*

Programa que recebe 2 números e mostra o maior deles

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num1,num2;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t Impressão do maior de dois números";
    cout <<"\n Informe o primeiro número: ";
    cin >> num1;
    cout <<"\n Informe o segundo número: ";
    cin >> num2;

	if (num1>num2)
	{
	cout<<"\n O número: "<<num1<<" é maior que o número: "<<num2;
	}
	else{
		if (num2>num1)
		{
			cout<<"\n O número: "<<num2<<" é maior que o número: "<<num1;
		}
		else 
		{
			cout<<"\n O número: "<<num1<<" é igual ao número: "<<num2;
		}
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
