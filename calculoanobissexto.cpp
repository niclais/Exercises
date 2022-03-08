/*


*/

#include <iostream> 

//cálculo ano bissexto

using namespace std; 
main()
{ 
  int ano;
    
  setlocale(LC_ALL, "Portuguese"); 
  
	cout <<"\n\n\t Cálculo de ano bissexto";
    cout <<"\n Ano: ";
    cin >> ano;

	if (ano%400==0)
	{
	cout<<"\n é um ano bissexto";
	}
	else{
		if ((ano%4==0) && (ano%100!=0))
		{
			cout<<"\n é um ano bissexto";
		}
		else
		{
			cout<<"\n não é um ano bissexto";
		}
	}
	
 
 cout<<"\n\n\n\n\n"; 
}
