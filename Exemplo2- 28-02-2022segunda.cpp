/*
include � usado para incluir uma biblioteca existente, sempre ter chave no inicio e fim {}

c out imprime na tela oq esta entre ele, sempre o sinal << � pra esquerda

\n � para pular linhas; \t � distancia dos lados; o \a � o barulho do windows

pode-se usar quantos c outs quiser; c in � comando de leitura

int � numero inteiro
float sao numeros decimais
(,) � pra casa de milhoes(1000, 2000, 3000), so usar ponto (.)
char � para ler letras

c out � sempre <esquerda<(imprime o q ta na tela) e c in � sempre >direita>(comando de leitura)

*/

#include <iostream> // include usado pra incluir a biblioteca

using namespace std; 
main()
{     
    
  //local para declar vari�veis
  
  int num1,num2;
  int resultado;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t ****  Inserir T�tulo  *** ";	
  cout<<"\n Informe um n�mero: ";
  cin>>num1;
  cout<<"\n Informe um outro n�mero ";
  cin>>num2;
  
  resultado = num1+num2;
  cout<<"\n A soma dos n�mero informados �:" <<resultado;
  resultado = num1-num2;
  cout<<"\n A subtra��o dos n�mero informados �:" <<resultado;
  resultado = num1*num2;
  cout<<"\n O produto dos n�mero informados �:" <<resultado;
 
 cout<<"\n\n\n\n\n"; 
}
