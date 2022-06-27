/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

Insira Seu nome completo aqui:Nicolle Lais Vieira Benvenutti

Data: <<versão 01 ou versão_final>> :___________________________ 
(Altere a data conforme a entrega)

*/

#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
using namespace std;

void bubble_sort(int vetor[500], int n, char op);


void numXDois(int numero);

int inverteVariaveis(int var1, int var2);

float pleno(float i, float a, float b);


#define TAMANHO 18

int op, resp, i, resps;

main ()
{
setlocale(LC_ALL, "Portuguese");

cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
   cout<<"INDICADORES: \n";
   cout<<"1. Realiza operações matemáticas de acordo com os fundamentos e o contexto apresentado.\n";
   cout<<"2. Utiliza adequadamente os tipos de variáveis em algoritmos de acordo com o contexto.\n";
   cout<<"3. Utiliza operações aritméticas em programas.\n";
   cout<<"4. Utiliza os comandos de leitura e escrita em algoritmos de acordo com o contexto.\n";
   cout<<"5. Utiliza as estruturas condicionais em algoritmos de acordo com o contexto.\n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   cout<<"7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";
   
   do{
   system ("cls");
   cout<<"\n ====================================================================================";
   cout<<"\n [1] Investigação Criminal";
   cout<<"\n [2] Eleição de Síndico";
   cout<<"\n [3] Séries Matemáticas";
   cout<<"\n [4] Usar vetor";
   cout<<"\n [5] Menu de Opções - Vetor";
   cout<<"\n [6] Desenho";
   cout<<"\n [7] Números Primos";
   cout<<"\n [8] FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
  	
  	//CASE 1
  	
    case  1:{
            char resp[7];
             int conts=0;
             int i;
			 system ("color 2");
			 
             cout<<"\n Investigação Criminal";
             cout<<" \n Responda com S ou N as seguintes perguntas sobre o crime: ";
             cout<<"\n Trocou mensagens com a vítima?";
             cin>>resp[0];
             cout<<"\n Esteve no local do crime?";
             cin>>resp[1];
             cout<<"\n É parente ou reside perto da vítima?";
             cin>>resp[2];
             cout<<"\n Devia algum valor para a vítima?";
             cin>>resp[3];
             cout<<"\n Trabalha ou trabalhou com a vítima? ";
             cin>>resp[4];
             cout<<"\n Possui algum tipo de relacionamento amoroso com a vítima?";
             cin>>resp[5];
             cout<<"\n Ficou feliz pelo destino fatídico na vítima?";
             cin>>resp[6];
             cout<<"\n Possui algum tipo de arma de fogo?";
             cin>>resp[7];
             
             
             for(i=0;i<=7;i++){
				 resp[i] = toupper(resp[i]);
             		if (resp[i]=='S')
					{
             		conts=conts+1;
					}
			}
			 if(conts==4)
			 {
			 	cout<<"Suspeita";
			 }
			 else
			 if((conts>=5) && (conts<=7))
			 {
			 	cout<<"Possível Criminoso";
			  } 
			  else
			  if (conts>=8) 
			  {
			  	cout<<"Assassino";
			  }
			   else 
			  {
			  	cout<<"Inocente";
			  }
			 
			    break;
             //getch(); // espera digitar algo
			     }
       
       
       //CASE 2
       
       
    case 2:{
    		int numeleitor,i,votos,voto1,voto2,voto3,voto4,voto5,somavotos;
    		voto1 = 0;
    		voto2 = 0;
    		voto3 = 0;
    		voto4 = 0;
    		voto5 = 0;
			int vet[5] = {0,0,0,0,0};


             cout<<"\n Eleição do síndico";
             cout<<"\n O Edíficio Cordas Banbas irá realizar uma eleição do síndico.";
             cout<<"\n Digite quantos eleitores irão participar da votação:";
             cin>>numeleitor;
             for(i=1;i<=numeleitor;i++){
             	cout<<"Os cinco candidatos a síndico são: ";
             	cout<<"[1] Henry Cavill";
             	cout<<"[2] Ian Somerhalder";
                cout<<"[3] Rodrigo Hilbert";
                cout<<"[4] Chris Pratt";
             	cout<<"[5] Bradley Cooper";
             	cout<<"Digite seu Voto:";
             	cin>>votos;

             	switch(votos){
                    case 1:{
                        vet[0] +=1;
                        voto1 +=1;
                        break;
                    }
                    case 2:{
                        vet[1] +=1;
                        voto2+=1;
                        break;
                    }

                    case 3:{
                        vet[2] +=1;
                        voto3+=1;
                        break;
                    }

                    case 4:{
                        vet[3] +=1;
                        voto4+=1;
                        break;
                    }

                    case 5:{
                        vet[4] +=1;
                        voto5+=1;
                        break;
                    }
				}
             }//fim primeiro for
            
            somavotos= 0;
            
            for(int i =0; i<5; i++){
                somavotos += vet[i];
            }//fim segundo for
            
            
            if(somavotos != numeleitor){
                cout<<"ELEIÇÃO INVÁLIDA";
            }
			else{
                cout<<"ELEIÇÃO VÁLIDA";
            }
            
			char op = 'C';
			
            bubble_sort(vet, 5, op);
            
            if(vet[4] != 0){
                if(vet[4] == voto1){
                    cout<<"Henry foi o mais votado";
                }
                
				else if(vet[4] == voto2){
                    cout<<"Ian foi o mais votado";
            	}
            	
				else if(vet[4] == voto3){
                    cout<<"Rodrigo foi o mais votado";
                }
                
				else if(vet[4] == voto4){
                    cout<<"Chris foi o mais votado";
                }
                
				else if(vet[4] == voto5){
                    cout << "Bradley foi o mais votado";
                }
            }//fim do if
            
            if(vet[3] != 0){
                if(vet[3] == voto1){
                    cout<<"Henry foi o segundo mais votado";
                }
		
				else if(vet[3] == voto2){
                    cout<<"Ian foi o segundo mais votado";
                }
				
				else if(vet[3] == voto3){
                    cout<<"Rodrigo foi o segundo mais votado";
                }
				
				else if(vet[3] == voto4){
                    cout<<"Chris foi o segundo mais votado";
                }
				
				else if(vet[3] == voto5){
                    cout<<"Bradley foi o segundo mais votado";
                }

            }//fim do if

            if(vet[2] != 0){
                if(vet[2] == voto1){
                cout<<"Henry foi o terceiro mais votado";
                }
				
				else if(vet[2] == voto2){
                    cout<<"Ian foi o terceiro mais votado";
                }
				
				else if(vet[2] == voto3){
                    cout<<"Rodrigo foi o terceiro mais votado";
                }
				
				else if(vet[2] == voto4){
                    cout<<"Chris foi o terceiro mais votado";
                }
				
				else if(vet[2] == voto5){
                    cout<<"Bradley foi o terceiro mais votado";
                }
            }//fim do if


          
             break;
           }//fim case 2
           
           


           
           //CASE 3
           
           case 3:{
           	
           	//for(i=0; i<=n;i++)
           	//for(i=0; i<=n;i=i+2){
           	//s=(s+(1/i)*-1)
			//   } para calculo com + - + -
           	//i+=2, i*=8
           	//s=s+(1/i)
    		float soma,i,term,result;
    		int opterm = 3;
    	
             system ("color 3");
             cout<<"\n Qual tipo de termo gostaria de somar para obter resultado?";
             cout<<"\n [1] - 1/1\xB2 + 1/2\xB2 + 1/3\xB2 + 1/4\xB2 + 1/5\xB2...";
             cout<<"\n [2] - 1/1\xB2 + 1/3\xB2 + 1/5\xB2 + 1/7\xB2 + 1/9\xB2...";
             cout<<"\n [3] - 1/1x3 + 1/2x4 + 1/3x5 + 1/4x6 + 1/5x7...";
             cin>>opterm;
             
			 switch(opterm){
			 	
				 case 1:{
				
			 		cout<<"\n Quantos termos gostaria para somar? \n";
			 		cin>>term;
			 		
			 		for(i=0; i<=term;i++)
					 {
					 	soma+=1/(i*i);
					 	
					 }
			 			cout<<"A soma dos termos foi: "<<soma;
			 		
			 			break;
			 		
				 }//fim case 1 da quest 3
				 
				 case 2:{
				 	
				 	cout<<"\n Quantos termos gostaria para somar? \n";
			 		cin>>term;
			 	
			 		for(i=1; i<=term;i+=2){
					 	soma+= 1/(i + 2);

                    }
                    cout<<"A soma dos termos foi: "<<soma;
			 		
			 			break;
				
				 }//fim case 2 da quest 3
			 		
			 		case 3:{
				 	
				 	cout<<"\n Quantos termos gostaria para somar? \n";
			 		cin>>term;
			 		
			 		for(i=1; i<=term;i+=2){

                        soma += 1/(i *(i+2));

                    }
                    cout<<"A soma dos termos foi: "<<soma;
                    
                    
			 			break;
				
				  }//fim switch case 3 da quest 2
				  
			 }//fim switch quest 3
             
             getch(); //ou system("pause");
        
             
             break;
           }//fim case 3
           
           
           
           
           
           
           
           //CASE 4
           
           
           case 4:{
           	
				int vet[500];
                int maior =0, media=0;
                int i;
				
				
                for(i=0;i<500;i++){
                    vet[i] = (rand() %500);
                
				}
                
                //para calculo maior e a média
                for(i=0;i<500;i++){
                    if(i<500){
                    	
                    if((vet[i] > vet[i+1]) && (vet[i] > maior)){
                            maior =vet[i];
                        }
						
					else if((vet[i] < vet[i+1]) && (vet[i+1] > maior)){
                            maior = vet[i+1];
                        }
						
					else{
                            maior = maior;
                        }
                    }
                    media += vet[i];
                }//fim do for
                media /= 10;
                
                
            	//calculo menor
                int menor = maior;
                
                for(i=0;i<500;i++){
                    
					if(i <500){
                    	if((vet[i] > vet[i+1]) && (vet[i] > maior)){
                            menor = vet[i+1];
                        }
						
						else if((vet[i] < vet[i+1]) && (vet[i+1] > maior)){
                            menor = vet[i];
                        }
						
						else{
                            menor = menor;
                        }
                    }
                }



                int contmaior = 0;
                int contpar = 0;
                int contimpar = 0;
                char op;
                char ordena;
                
                for(i=0;i<500;i++){
                    if(media < vet[i]){
                        contmaior+=1;
                    }
                    
                    if(vet[i]%2 == 0){
                        contpar +=1;
                    }
					
					else if(vet[i] %2 !=0){
                        contimpar +=1;
                    }
                }
                cout<<"A média dos números é: "<<media;
                cout<<"Os números que são maiores que a média são: "<<contmaior;
                cout<<"O maior número do vetor é: "<<maior;
                cout<<"O menor número do vetor é: "<<menor;
                cout<<"O total de pares no vetor é: "<<contpar;
                cout<<"O total de ímpares ono vetor é "<<contimpar;

                cout << "Ver o vetor?";
                cin >> op;
                
                
                if(op == 'S'){
                    cout<<"Ordenar o vetor?";
                    cin >> op;
                    
                    if(op =='S'){
                        cout<<"Qual a forma de ordenação? Digite A para crescente e D para decrescente";
                        cin>>ordena;
                        
                        bubble_sort(vet, 10, ordena);
                    }
					else{
                        for(i = 0; i <10; i++){
                            cout<<vet[i];
                        }
                    }

                }
		return 0;
		
		
		break;
           	
           	
           	
			break;
		   }//fim case 4
           
           
           
           
           
           
           // CASE 5
           
           case 5:{
           	int opc, numero;
			 
             	cout<<" \n Escolha uma das opções:";
             	cout<<"\n [1] - Crie uma função void e que receba um parâmetro"
             	    <<"\n [2] - Crie uma função que retorne um int e que receba dois parâmetros"
             	    <<"\n [3] - Crie uma função que retorne um float e que receba três parâmetros"
             	    <<"\n [4] - Crie uma função ao seu critério"
             	    <<"\n [5] - Fim (Retornar ao Menu Anterior da Prova)";
             	cout<<"\n Digite sua opção:";    
             	cin>>opc;
             	
             		
				 
           	
        	getch();
			break;
		   }//fim case 5
           
		   
		   
		   
		   
		   
		              
           //CASE 6
           
           case 6:{
           	
           	cout<<"\n\n";
			cout<<"\n \xF0\xd0\xF0\xF0\xF0\xDF\xDF\xDF\xF0\xF0\xF0\xF0\xF0";
			cout<<"\n \xF0\xF0\xF0\xF0\xDF\xDF\xDF\xDF\xDF\xF0\xF0\xF0\xF0";
			cout<<"\n \xF0\xF0\xF0\xDF\xDF\xF0\xF0\xF0\xDF\xDF\xF0\xF0\xF0";
			cout<<"\n \xF0\xF0\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xDF\xF0\xF0";
	
			cout<<"\n\n";
			cout<<"\n \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB";
			cout<<"\n \xDFO\xDF\xDF\xDF\xDF\xDFO\xDF";
	
			cout<<"\n\n";
           	
           	getch();
           	
			break;
		   }//fim case 6
		   
		   
		   
		   
		   
		   
		   
		   //CASE 7
           
           case 7:{
    		 
			 int i, j, div=0, ini, fim;
			 char oppn;
             
			 system ("color 3");
			 
             cout<<"\n\n Escolha uma opção: \n";
             cout<<"\n\n [P] - Verifica se o informado é um Número Primo ou Não. \n";
             cout<<"\n\n [L] - Mostrar os números primos entre um intervalo de números. \n";
             cin>>oppn;
					
				
			switch(oppn){
				
				case 'P':{
					
				int num, i, resultado = 0;
 
				cout<<"\n Digite um número: \n";
 				cin>>num;
 
 					for (i = 2; i <= num / 2; i++) {
   					 if (num % i == 0) {
       					resultado++;
    				}
 				}
 
 					if (resultado == 0)
    					cout<<"É um número primo\n";
 					else
    					cout<<"Não é um número primo\n";
 
 				return 0;
 				break;
}
				case 'p':{
					
				int num, i, resultado = 0;
 
				cout<<"\n Digite um número: \n";
 				cin>>num;
 
 					for (i = 2; i <= num / 2; i++) {
   					 if (num % i == 0) {
       					resultado++;
    				}
 				}
 
 					if (resultado == 0)
    					cout<<"É um número primo\n";
 					else
    					cout<<"Não é um número primo\n";
 
 				return 0;
 				break;
	}//fim case p
				
					
				case 'L':{
				
				if('L' || 'l')
				{
					cout<<"Qual início dos números?";
					cin>>ini;
					cout<<"Qual o número final?";
					cin>>fim;
					
				}
					
  				for(i=ini; i<=fim; i++){
   					for(j=ini; j<=fim; j++){
  					
					if (i%j==0){
    					div++;
   							}
    					}
      					if(div>2){
					
    						cout<<"Os números primos são: "<<i;
    					}

					}
			
			}//fim case l
		
	}//fim switch case 7	
	getch();
}//fim case 7


	//CASE 8

    	case 8:{
             system ("color 8");
             cout<<"\n\n <<Quem ta sempre na merda não tem dia ruim, muito bom dia, um bom programa e até mais!! :D>>\n ";
             getch();
             break;
            	}
            
  		 default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            	}
 }// fecha o case
}
 while(op!=8);
cout<<"\n\n\n ";

}


void bubble_sort (int vetor[500], int n, char op){
   
    int k, j, aux;
    int vetAux[n];
    
    for (k = 0; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    
    switch (op){

        case 'A':

            for(int i = 0; i < n; i++){
                cout<<vetor[i];
            }
            
            break;
            
            
        case 'D':
        	
            for(int i= n-1; i >=0; i--){
                cout<<vetor[i];
            }
            
            break;
            
            
        case 'C':
            for(int i = n-1; i>=0; i--){
                for(int j=0; j<n;j++){
                    vetAux[j] = vetor[i];
                }
            }
            
            break;
    }

}
