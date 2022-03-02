/*
include é usado para incluir uma biblioteca existente, sempre ter chave no inicio e fim {}

c out imprime na tela oq esta entre ele, sempre o sinal << é pra esquerda

\n é para pular linhas; \t é distancia dos lados; o \a é o barulho do windows

pode-se usar quantos c outs quiser; c in é comando de leitura

int é numero inteiro
float sao numeros decimais
(,) é pra casa de milhoes(1000, 2000, 3000), so usar ponto (.)
char é para ler letras

c out é sempre <esquerda<(imprime o q ta na tela) e c in é sempre >direita>(comando de leitura)

*/

#include <iostream> // include usado pra incluir a biblioteca

using namespace std; 
main()
{     
    
  //local para declar variáveis
  
  int num1,num2;
  int resultado;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t ****  Inserir Título  *** ";	
  cout<<"\n Informe um número: ";
  cin>>num1;
  cout<<"\n Informe um outro número ";
  cin>>num2;
  
  resultado = num1+num2;
  cout<<"\n A soma dos número informados é:" <<resultado;
  resultado = num1-num2;
  cout<<"\n A subtração dos número informados é:" <<resultado;
  resultado = num1*num2;
  cout<<"\n O produto dos número informados é:" <<resultado;
 
 cout<<"\n\n\n\n\n"; 
}
