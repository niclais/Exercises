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
   cout<<"\n\n VETOR DE N�MEROS ALEAT�RIOS \n\n\n";
   
  srand(time(NULL));  // fun��o que inicializa o gerador de n�meros rand�micos
   for(i=0; i<TAM;i++)
   { // rand()%30 --> gera um n�mero aleat�rio entre 1 e 60 (inclusive)
    vet[i] =(rand()%50)+1; //vetor recebendo um n�mero aleat�rio
   
    cout << "\n N�mero gerado: " << vet[i];
    
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
  cout<<"\n O maior n�mero informado �: "<<maior;
  cout<<"\n O menor n�mero informado �: "<<menor;
}
  
