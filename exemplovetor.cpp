//Exemplo de Vetor
#include<iostream>

int const TAM=10;
int num[TAM],i;
main()
{
      using namespace std;
      setlocale(LC_ALL, "Portuguese");
      cout<<"\n Progama Vetores";
      cout<<"\n Informe "<<TAM<<" números. \n";
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o número: ";
          cin>>num[i];
      }
     cout<<"\n Vetor Informado: ";
     
     for(i=0;i<TAM;i++)
      {
          cout<<"\n Posição "<<i+1<<" : ";
          cout<<num[i];
      }
  	}
     
