/*

cout << fixed << setprecision(3)  //arrumar pra nao ter uma quantidade de casas decimais (3.46654)

system ("color D1");
*/


#include <iostream> 
#include <iomanip> // � pra manipula��o de entrada e saida de valores

using namespace std; 
main()
{     
    
  //local para declar vari�veis
  
  setlocale(LC_ALL, "Portuguese"); 
  
  float nota1,nota2,nota3,nota4;
  float soma;
  float media;
  
  cout << fixed << setprecision(3);  //arrumar pra nao ter (ou ter) uma quantidade de casas decimais  (3.46654)
 
  cout<<"\n\t\t Calcular M�dia";	
  cout<<"\n Informe a primeira nota: ";
  cin>>nota1;
  cout<<"\n Informe a segunda nota: ";
  cin>>nota2;
  cout<<"\n Informe a terceira nota: ";
  cin>>nota3;
  cout<<"\n Informe a quarta nota: ";
  cin>>nota4;
  
  soma = nota1+nota2+nota3+nota4;
  cout<<"\n A soma dos n�mero informados �:" <<soma;
  media = soma/4;
  cout<<"\n A m�dia dos n�meros informados �:" <<media;

 
 cout<<"\n\n\n\n\n"; 
}
