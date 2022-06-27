/*
Leia  um  vetor  de  caracteres.  
Pergunte  ao  usuário  qual  caractere  ele  deseja procurar no vetor.
 Pesquise e imprima a quantidade de vezes que o caractere desejado está no vetor.
 
 3 com do while e acumulador, informar o numero que o usuario quer com int const 100 reserva.
 
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

int const TAM=15;
using namespace std;
 main()
{
	
	int i, letra_a, posicao_A;
	char letra[10];
	
   	setlocale(LC_ALL, "Portuguese");
   	
   	
   	for(i=0; i<10; i++)
     { 	cout<<"\n\n Digite uma letra:  \n\n\n";  
   		cin>>letra[i];
   		letra[i]= toupper(letra[i]);
     
       if(letra[i]=='A')
	   {
	   	letra_A++;
	   	posicao_A=i;
	   }
	}
	
	   	cout<<"\n Existe no vetor "<<letra_A<<"letras A's";
    	cout<<"\n O A esta na posição: "<<posicao_A;<<"do vetor";
		cout<<"\n A menor idade informada é: "<<menor;
    	
   cout<<"\n\n\n";
}
