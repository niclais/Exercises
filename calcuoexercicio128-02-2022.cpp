/*

Calcular a idade atual da pessoa
usar o ano de nascimento e calcular com base da data deste ano

*/


#include <iostream> 
#include <iomanip> 

using namespace std; 
main()
{     
    
  //local para declar vari�veis
  
  setlocale(LC_ALL, "Portuguese"); 
  
  // metros - centimetros
  
  float metros,centimetros;
  
  
  cout<<"\n\t\t Convers�o de metros pra centimetros";	
  cout<<"\n Informe o valor m�trico: ";
  cin>>metros;
  
  centimetros = metros * 100;
  cout<<"\n A convers�o em cent�metros fica:" <<centimetros;
 
  
  //quilometros - metros
  
  float quilometros,metros2;
  
  cout<<"\n\t\t Convers�o de quil�metros pra metros";	
  cout<<"\n Informe o valor quil�metrico: ";
  cin>>quilometros;
  
  metros2 = quilometros * 1000;
  cout<<"\n A convers�o em metros fica:" <<metros2;
  
  //horas - segundos
  
  float horas,segundos;
  
  cout<<"\n\t\t Convers�o de horas pra segundos";	
  cout<<"\n Informe o valor em horas: ";
  cin>>horas;
  
  segundos = horas * 3600;
  cout<<"\n A convers�o em segundos fica:" <<segundos;
 
 cout<<"\n\n\n\n\n"; 
}


