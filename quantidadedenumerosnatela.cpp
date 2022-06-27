/*



*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

#define TAM 5


using namespace std;
 main()
{
	
	int num,i;
	int qntdade,caractere;
	
   setlocale(LC_ALL, "Portuguese");
   cout<<"\n\n Um caractere e a quantidade de vezes que aparece \n\n\n";  
   cout<<"\n Digite um caractere: ";
   cin>>caractere;
   cout<<"\n Digite a quantidade de vezes que quer que apareça: ";
   cin>>qntdade;
   
   	for(i=0; i<qntdade;i++)
    { 
  		cout<<"\n"<<caractere;
 	}    

   cout<<"\n\n\n";
}







