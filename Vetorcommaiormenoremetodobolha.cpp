//********************************
//**** Program by CLAWER  ****
//********************************
/*
Fase 1:
 Modifique o Programa Vetor Aleat�rio, para:
* Imprimir o maior e o menor n�mero
* Usar o TAM

 

Fase 2:

 

Pesquise na Web - M�todo de Ordena��o Bolha
e fa�a a ordena��o do vetor gerado.
*/

 

#include <iostream>
#include<stdlib.h>
#include<time.h>
#define TAM 10

 

int valor, vet[TAM],i,j,aux;
int maior,menor;
using namespace std;
 main()
{
   setlocale(LC_ALL, "Portuguese");
   cout<<"\n\n VETOR DE N�MEROS ALEAT�RIOS \n";
    
   srand(time(NULL));  // fun��o que inicializa o gerador de n�meros rand�micos
   
   for(i=0; i<TAM;i++)
   { // rand()%100 --> gera um n�mero aleat�rio entre 1 e 100 (inclusive)
    vet[i] =(rand()%100)+1; //vetor recebendo um n�mero aleat�rio
   }
   for(i=0;i<TAM;i++)
      {
          if(i==0){
             maior=vet[i];
             menor=vet[i];
          }
          if(vet[i]>maior)
             maior=vet[i];
          if(vet[i]<menor)
             menor=vet[i];
      }
     cout<<"\n\n VETOR GERADO: ";
     for(i=0;i<TAM;i++)
     {
         cout<<"  "<< vet[i];
     }
    //M�TODO BOLHA CRESCENTE 
     for(i=0;i<TAM;i++)
     {
      for(j=i+1;j<TAM;j++ ) // sempre 1 elemento � frente
       {
        // se o (i > i+1)) ent�o o i passa para frente (ordem crescente)
      if ( vet[i] > vet[j] )
      {
         aux = vet[i];
         vet[i] = vet[j];
         vet[j] = aux;
      }
    }
  } // fim da ordena��o
  cout<<"\n\n VETOR ORDENADO CRESCENTE: ";
     for(i=0;i<TAM;i++)
     {
         cout<<"  "<< vet[i];
     } 
     
    //M�TODO BOLHA DECRESCENTE 
     for(i=0;i<TAM;i++)
     {
      for(j=i+1;j<TAM;j++ ) // sempre 1 elemento � frente
       {
        // se o (i < (i+1)) ent�o o i passa para atr�s (ordem decrescente)
      if ( vet[i] < vet[j] )
      {
         aux = vet[i];
         vet[i] = vet[j];
         vet[j] = aux;
      }
    }
  } // fim da ordena��o 
     cout<<"\n\n VETOR ORDENADO DECRESCENTE: ";
     for(i=0;i<TAM;i++)
     {
         cout<<"  "<< vet[i];
     }
cout<<"\n\n\=================================";
      cout<<"\n O maior n�mero: "<<maior;
      cout<<"\n O menor n�mero: "<<menor;
  cout<<"\n\n";
}
