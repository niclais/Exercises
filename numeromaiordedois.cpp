/*

Programa que recebe 2 n�meros e mostra o maior deles

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num1,num2;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t Impress�o do maior de dois n�meros";
    cout <<"\n Informe o primeiro n�mero: ";
    cin >> num1;
    cout <<"\n Informe o segundo n�mero: ";
    cin >> num2;

	if (num1>num2)
	{
	cout<<"\n O n�mero: "<<num1<<" � maior que o n�mero: "<<num2;
	}
	else{
		if (num2>num1)
		{
			cout<<"\n O n�mero: "<<num2<<" � maior que o n�mero: "<<num1;
		}
		else 
		{
			cout<<"\n O n�mero: "<<num1<<" � igual ao n�mero: "<<num2;
		}
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
