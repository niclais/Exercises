//********************************
//**** Program by CLAWER  ****
//********************************
/*
Fase 1:
 Modifique o Programa Vetor Aleatório, para:
* Imprimir o maior e o menor número
* Usar o TAM

 

Fase 2:

 

Pesquise na Web - Método de Ordenação Bolha
e faça a ordenação do vetor gerado.
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
   cout<<"\n\n VETOR DE NÚMEROS ALEATÓRIOS \n";
    
   srand(time(NULL));  // função que inicializa o gerador de números randômicos
   
   for(i=0; i<TAM;i++)
   { // rand()%100 --> gera um número aleatório entre 1 e 100 (inclusive)
    vet[i] =(rand()%100)+1; //vetor recebendo um número aleatório
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
    //MÉTODO BOLHA CRESCENTE 
     for(i=0;i<TAM;i++)
     {
      for(j=i+1;j<TAM;j++ ) // sempre 1 elemento à frente
       {
        // se o (i > i+1)) então o i passa para frente (ordem crescente)
      if ( vet[i] > vet[j] )
      {
         aux = vet[i];
         vet[i] = vet[j];
         vet[j] = aux;
      }
    }
  } // fim da ordenação
  cout<<"\n\n VETOR ORDENADO CRESCENTE: ";
     for(i=0;i<TAM;i++)
     {
         cout<<"  "<< vet[i];
     } 
     
    //MÉTODO BOLHA DECRESCENTE 
     for(i=0;i<TAM;i++)
     {
      for(j=i+1;j<TAM;j++ ) // sempre 1 elemento à frente
       {
        // se o (i < (i+1)) então o i passa para atrás (ordem decrescente)
      if ( vet[i] < vet[j] )
      {
         aux = vet[i];
         vet[i] = vet[j];
         vet[j] = aux;
      }
    }
  } // fim da ordenação 
     cout<<"\n\n VETOR ORDENADO DECRESCENTE: ";
     for(i=0;i<TAM;i++)
     {
         cout<<"  "<< vet[i];
     }
cout<<"\n\n\=================================";
      cout<<"\n O maior número: "<<maior;
      cout<<"\n O menor número: "<<menor;
  cout<<"\n\n";
}
