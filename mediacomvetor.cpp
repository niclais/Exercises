//Mostrar quantos alunos possuem a nota maior que a média da turma
#include<iostream>

 

int const TAM=5; //constante para o Tamanho do Vetor

 

float notas[TAM]; //vetor
int i,nota_maior_media;
float acum,media;
main()
{
      using namespace std;
      setlocale(LC_ALL, "Portuguese");
      cout<<"\n Progama Notas Maiores que a Média da Turma";
      cout<<"\n Informe "<<TAM<<" notas. \n";//Pedindo as notas
      //1. Calculamos a média das notas
      for(i=0;i<TAM;i++) //Esse for funciona até o Limite de TAM 
      {
          cout<<"\n Informe a "<<i+1<<" nota: ";
          cin>>notas[i];
          acum = acum + notas[i];//acumulando as notas informadas
      }
       media = acum / TAM;
       
       //2. Calculamos a quantidade de alunos que tiveram nota maior que média
      
      for(i=0;i<TAM;i++) //Esse for funciona até o Limite de TAM 
      {
           if (notas[i]>media)
               nota_maior_media++; //conta quantos alunos tiveram nota maior que a média
      }
      cout<<"\n A média das notas informada é:  "<<media;
      cout<<"\n "<<nota_maior_media<<" alunos possuem nota maior que a Média";     
        
    cout<<"\n\n\n\n ";      
    
