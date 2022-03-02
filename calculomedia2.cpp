/*

cout << fixed << setprecision(3)  //arrumar pra nao ter uma quantidade de casas decimais (3.46654)

system ("color D1");

verificar media e imprimir uma mensagem conforme a média do aluno
média>7 == imprimir aprovado
média<7 == imprimir reprovado

*/


#include <iostream> 
#include <iomanip> // é pra manipulação de entrada e saida de valores

using namespace std; 
main()
{     
    
  //local para declar variáveis
  
  setlocale(LC_ALL, "Portuguese"); 
  
  float nota1,nota2,nota3,nota4;
  float media;
  
  cout << fixed << setprecision(1);  //arrumar pra nao ter (ou ter) uma quantidade de casas decimais  (3.46654)
 
  cout<<"\n\t\t Calcular Média";	
  cout<<"\n Informe a primeira nota: ";
  cin>>nota1;
  cout<<"\n Informe a segunda nota: ";
  cin>>nota2;
  cout<<"\n Informe a terceira nota: ";
  cin>>nota3;
  cout<<"\n Informe a quarta nota: ";
  cin>>nota4;
  

  media = (nota1+nota2+nota3+nota4)/4;
  cout<<"\n A média dos números informados é:" <<media;

  if (media>=7)
 {
 	cout<<"\n\n Aprovado";
 }
 else
 {
 	cout<<"\n\n Reprovado";
 }
 
 
 cout<<"\n\n\n\n\n"; 
}
