/*

FUP que tenha a seguinte lista de opções:
[1] - Calcule um fatorial de um número. Ex.: 5!= 5*4*3*2*1
[2] - Imprima os 10 primeiros termos da Série de Fibonacci. Ex.: 
      1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...  
[3] - Leia um número equivalente ao mês e imprima a quantidade de 
      dias deste mês.
[4] - Leia 3 valores e imprima a soma dos 2 maiores.
[5] - Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número.
[6] - Verifique se a data informada é válida. Leia a data no formato:
      dd (dia) - mm (mês) - aaaa (ano)
[7] - FIM

*/

#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, fat, num, mes, dias=31;; 
int escolha,num1,num2,num3;
int sequencia = 0;
int penult = 0 , ult = 1;
int limite = 0;

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 
//do{
system("cls");
 cout<<"\n\t===============================  "; 
 cout<<"\n\t\a  PROGRAMA MOSTRANDO O SWITCH ";
 cout<<"\n\t===============================  "; 
 cout<<"\n\n Faça uma escolha: ";
 cout<<"\n\n [1] - Calcule um fatorial de um número.";
 cout<<"\n [2] - Imprime os 10 primeiros termos da Série de Fibonacci.";
 cout<<"\n [3] - Leia um número equivalente ao mês e imprima a quantidade de dias deste mês.";
 cout<<"\n [4] - Leia 3 valores e imprima a soma dos 2 maiores.";
 cout<<"\n [5] - Calcule e imprima o MMC (Minímo Múltiplo Comum) de um número.";
 cout<<"\n [6] - Verificando se a data informada é válida";
 cout<<"\n [7] - FIM";
 cout<<"\n\n Sua escolha? --> ";
 cin>>escolha;
 switch (escolha)
 {
  	case 1:{
               	cout<<"\n\n Calculando fatorial de um número";
                cout<<"\n\n Escolha um número: ";
                cin>>num;
                for(fat= 1; num > 1; num = num - 1)
  				{      
     				fat = fat * num;
     				cout<<"\n O resultado do cálculo fatorial é: "<<fat<<"\n";
  				}
               system("pause");
               break;
             }
	case 2:{
               	cout<<"\n\n Números de Fibonacci";
                cout << "\n Quantos numeros Fibonacci deseja?";
                cin>>limite;
                	
                for( int n = 0; n < limite; n++)
           		{
               sequencia = (penult + ult);
               cout <<"\n A sequência será: "<<sequencia;
               penult = ult;
               ult = sequencia;
            	}
               system("pause");
               break;
             }
    case 3:{
    			
               	cout<<"\n\n Quantos dias tem o mês";
                cout<<"\n\n Escolha um mês de 1 a 12: ";
                cin>>mes;
				
                if(mes>12 || mes<1)
                {
                	cout<<"Mês Inválido";
				}
				else{
				switch(mes)
				{ 
					case 2: //fevereiro
						dias -=2;
						
					case 4: case 6: case 9: case 11:
						dias--;
				}
				cout<<"O mês possui "<<dias<<" dias";
			}
               system("pause");
               break;
             } 
             
	case 4:{
               	cout<<"\n\n Lendo 3 valores e calculando os 2 maiores";
                cout<<"\n\n Escolha o primeiro número: ";
                cin>>num1;
                cout<<"\n\n Escolha o segundo número: ";
                cin>>num2;
				cout<<"\n\n Escolha o terceiro número: ";
				cin>>num3;
                
				for(fat= 1; num > 1; num = num - 1)
  				{      
     				fat = fat * num;
     				cout<<"\n O resultado do cálculo fatorial é: "<<fat<<"\n";
  				}
               system("pause");
               break;
             }
             
 default : {
               cout<<"\n  Escolha Inválida";
               system("pause");
               break;
                }                      
              }//fecha switch
//}while(
}
