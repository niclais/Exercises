/*

Mostrar valor positivo ou negativo

*/

#include <iostream> 



using namespace std; 
main()
{ 
  int num;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t N�mero negativo ou positivo";
    cout <<"\n Informe um n�mero ";
    cin >> num;


	if (num<0)
	{
	cout<<"\n O n�mero "<<num<<" � negativo";
	}
	else{
		if (num>0)
		{
			cout<<"\n O n�mero "<<num<<" � positivo ";
		}
		else 
		{
			cout<<"\n O n�mero � igual a zero";
		}
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
