/*


*/

#include <iostream> 
#include <ctype.h> 

using namespace std; 
main()
{ 

char letra;
letra=toupper(letra);  //toupper transforma o caracter em mai�sculo

setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t Ver se � vogal, n�mero ou consoante";
 
    cout<<("\n Informe uma letra ou n�mero \n\n");
    cin>>letra;
    
    
  if
   ((letra=='A') || (letra=='E') || (letra=='I') || (letra=='O') || (letra=='U') || (letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))
   {
   cout<<("\n\n � uma vogal");
   }
	else
   {	
   	if((letra=='0') || (letra=='1') || (letra=='2') || (letra=='3') || (letra=='4') || (letra=='5') || (letra=='6') || (letra=='7') || (letra=='8') || (letra=='9'))
	{
		cout<<"\n\n � um n�mero";
	}
	else
	{
	cout<<"\n\n Erro.";
	}
    
   }
 
   
   cout<<"\n\n\n\n\n"; 
}
