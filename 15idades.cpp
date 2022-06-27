/*
FUP que leia a idade de 15 pessoas.
 Após calcule e imprima:a. A menor idade do grupo;b. A maior maiordo grupo;
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

int const TAM=15;
using namespace std;
 main()
{
	
	int idade,i;
	int maior,menor,media,acum;
	int idades[i];
	
   	setlocale(LC_ALL, "Portuguese");
   	cout<<"\n\n Idade de 15 pessoas \n\n\n";  
   	cout<<"\n\n Informe "<<TAM<<" números.";
   	cin>>idades[i];
   	
   	for(i=0; i<TAM;i++)
     { 
     	acum=acum+idades[i];
      	cin>>idade;
       if(i==0)
	   {
	   	maior=idade;
	   	menor=idade;
	   }
	    if(maior<idade)
	   {
	   	maior=idade;
	   }
	    if(menor>idade)
	   {
	   	menor=idade;
	   }
	   media=acum/TAM;
	}
	
	   	cout<<"\n A média das idade é: "<<media;
    	cout<<"\n A maior idade iformada é: "<<maior;
		cout<<"\n A menor idade informada é: "<<menor;
    	
   cout<<"\n\n\n";
}
