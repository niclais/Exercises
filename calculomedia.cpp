/*




*/


#include <iostream> 

using namespace std; 
main()
{     
    
  //local para declar variáveis
  
  float nota1,nota2,nota3,nota4;
  float soma;
  float media;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t Calcular Média";	
  cout<<"\n Informe a primeira nota: ";
  cin>>nota1;
  cout<<"\n Informe a segunda nota: ";
  cin>>nota2;
  cout<<"\n Informe a terceira nota: ";
  cin>>nota3;
  cout<<"\n Informe a quarta nota: ";
  cin>>nota4;
  
  soma = nota1+nota2+nota3+nota4;
  cout<<"\n A soma dos número informados é:" <<soma;
  media = soma/4;
  cout<<"\n A média dos números informados é:" <<media;

 
 cout<<"\n\n\n\n\n"; 
}
