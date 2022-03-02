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
  
  float ano1,ano2;
  float idade;
  
  
  cout<<"\n\t\t Calcular Idade";	
  cout<<"\n Informe o ano do nascimento: ";
  cin>>ano1;
  cout<<"\n Informe o ano desejado: ";
  cin>>ano2;
 
 
  idade = ano2-ano1;
  cout<<"\n A idade é:" <<idade;
  
 
 cout<<"\n\n\n\n\n"; 
}


