//********************************
//**** Program by CLAWER  ****
//********************************
#include <iostream>
#include<stdlib.h>
#include<time.h>
int valor, vet[TAM],i, maior, menor;
using namespace std;
int const TAM=5;
 main()
{
   setlocale(LC_ALL, "Portuguese");
   cout<<"\n\n VETOR DE NÚMEROS ALEATÓRIOS \n\n\n";
   
  srand(time(NULL));  // função que inicializa o gerador de números randômicos
   for(i=0; i<TAM;i++)
   { // rand()%30 --> gera um número aleatório entre 1 e 60 (inclusive)
    vet[i] =(rand()%50)+1; //vetor recebendo um número aleatório
   
    cout << "\n Número gerado: " << vet[i];
    
     if(i==0){
    	maior=vet[i];
    	menor=vet[i];
	 }
	 if(maior>vet[i]){
	 	maior=vet[i];
	 }
	 if(menor<vet[i]){
	 	menor=vet[i];
	 }
  }
  cout<<"\n O maior número informado é: "<<maior;
  cout<<"\n O menor número informado é: "<<menor;
}
  
