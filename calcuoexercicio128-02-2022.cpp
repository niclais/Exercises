/*

Calcular a idade atual da pessoa
usar o ano de nascimento e calcular com base da data deste ano

*/


#include <iostream> 
#include <iomanip> 

using namespace std; 
main()
{     
    
  //local para declar variáveis
  
  setlocale(LC_ALL, "Portuguese"); 
  
  // metros - centimetros
  
  float metros,centimetros;
  
  
  cout<<"\n\t\t Conversão de metros pra centimetros";	
  cout<<"\n Informe o valor métrico: ";
  cin>>metros;
  
  centimetros = metros * 100;
  cout<<"\n A conversão em centímetros fica:" <<centimetros;
 
  
  //quilometros - metros
  
  float quilometros,metros2;
  
  cout<<"\n\t\t Conversão de quilômetros pra metros";	
  cout<<"\n Informe o valor quilômetrico: ";
  cin>>quilometros;
  
  metros2 = quilometros * 1000;
  cout<<"\n A conversão em metros fica:" <<metros2;
  
  //horas - segundos
  
  float horas,segundos;
  
  cout<<"\n\t\t Conversão de horas pra segundos";	
  cout<<"\n Informe o valor em horas: ";
  cin>>horas;
  
  segundos = horas * 3600;
  cout<<"\n A conversão em segundos fica:" <<segundos;
 
 cout<<"\n\n\n\n\n"; 
}


