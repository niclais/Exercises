



#include <iostream> 

using namespace std; 
void imprimirTabuada(int num, int i, int inicio, int fim);//Declarando fun��o

main()
{ 
    int num,i, inicio, fim;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t ****  Tabuada  *** ";
  cout<<"\n Informe o n�mero de in�cio: ";
  cin>>inicio;
  cout<<"\n Informe o n�mero de fim: ";
  cin>>fim;
  cout<<"\n Informe um n�mero de 1 a 10 para tabuada: ";
  cin>>num;
  imprimirTabuada(num, i, inicio, fim);//chama a fun��o

 
 cout<<"\n\n\n\n\n"; 
}
void imprimirTabuada(int num, int i, int inicio, int fim)//implementa a fun��o
{
	for(i=inicio;i<fim;i++)
	cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
	
}
