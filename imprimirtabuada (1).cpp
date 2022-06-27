



#include <iostream> 

using namespace std; 
void imprimirTabuada(int num, int i, int inicio, int fim);//Declarando função

main()
{ 
    int num,i, inicio, fim;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t ****  Tabuada  *** ";
  cout<<"\n Informe o número de início: ";
  cin>>inicio;
  cout<<"\n Informe o número de fim: ";
  cin>>fim;
  cout<<"\n Informe um número de 1 a 10 para tabuada: ";
  cin>>num;
  imprimirTabuada(num, i, inicio, fim);//chama a função

 
 cout<<"\n\n\n\n\n"; 
}
void imprimirTabuada(int num, int i, int inicio, int fim)//implementa a função
{
	for(i=inicio;i<fim;i++)
	cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
	
}
