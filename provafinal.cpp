#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<windows.h>


using namespace std; 
int op,i,j,igual,aux,n,num[15],sorteio[6];
void mostranum();
void ordenanum();
void sorteioo();
void ordenadorteioo();
void mostrasorteio();
void resultado();


main()
{
 inicio:
 setlocale(LC_ALL, "Portuguese"); 


 do{ //fa�a
 system ("cls");
 cout<<" \n---------------------------------------  ";
 cout<<" \n\t       SORTEIO DA MEGA SENA  ";
 cout<<" \n---------------------------------------  ";
 cout<<"\n Escolha uma op��o: ";
 cout<<"\n 1 - Escolha Aleat�ria de N�meros";
 cout<<"\n 2 - Escolha os n�meros";
 cout<<"\n 3 - Fim do programa";
 cout<<"\n Fa�a sua escolha: ";
 cin>>op;

 switch(op)
 {
 	
 	 //CASE 1
 	 
     case 1:{
     	
              	system ("cls");
				cout<<"\n Escolha Ale�toria de N�meros";
				cout<<"\n 6 n�meros - R$4,50";
				cout<<"\n 7 n�meros - R$31,50";
				cout<<"\n 8 n�meros - R$126,00";
				cout<<"\n 9 n�meros - R$378,00";
				cout<<"\n 10 n�meros - R$945,00";
				cout<<"\n 11 n�meros - R$2.079,00";
				cout<<"\n 12 n�meros - R$4.158,00";
				cout<<"\n 13 n�meros - R$7.722,00";
				cout<<"\n 14 n�meros - R$13.513,50";
				cout<<"\n 15 n�meros - R$22.522,50";
				cout<<"\n";
				
				do{ //fa�a
				cout<<"\n Digite quantos n�meros deseja comprar: ";
				cin>>n;
				cout<<"\n";
				
				if((n<6) || (n>15)){
              	cout<<"\n N�meros escolhidos inv�lidos, digite novamente";
				}			
				
				srand(time(NULL));  
  
              	for(i=0;i<n;i++){ 
              	num[i] = (rand()%60)+1; 
              	cout<<"      "<<num[i];
              	}
              	
              	cout<<"\n";
              	
                }
				
				while((n<6) || (n>15)); //enquanto
                mostranum();
                
              	getch();
              	
              	break;
              	}
              	
              	
              	
             //CASE 2 	
              	
     case 2:{ 
	          	system ("cls");
                cout<<"\n ======== Escolha dos N�meros ========";
                cout<<"\n 6 n�meros - R$4,50";
                cout<<"\n 7 n�meros - R$31,50";
                cout<<"\n 8 n�meros - R$126,00";
                cout<<"\n 9 n�meros - R$378,00";
                cout<<"\n 10 n�meros - R$945,00";
                cout<<"\n 11 n�meros - R$2.079,00";
                cout<<"\n 12 n�meros - R$4.158,00";
                cout<<"\n 13 n�meros - R$7.722,00";
                cout<<"\n 14 n�meros - R$13.513,50";
                cout<<"\n 15 n�meros - R$22.522,50";
                cout<<"\n";
                
                
                do{ //fa�a
                cout<<"\n Informe quantos n�meros voc� deseja comprar: ";
                cin>>n;
                
                if((n<6) || (n>15)){
                cout<<"\n N�meros escolhidos inv�lidos, tente novamente.";
                cout<<"\n";
                  }
				}
				
				while((n<6) || (n>15));//enquanto
                
				do{
					for(i=0,j=1;i<n;i++,j++){
              			cout<<"\n";
              		
					  	
              	do{
                	cout<<" Digite o "<<j<<" n�mero: ";
                   	cin>>num[i];
                	if(num[i]<=0 || num[i]>60){
                   		cout<<"\n Voc� digitou um n�mero inv�lido, digite novamente.\n";
                   		cout<<"\n";
                   		}
                	}while(num[i]<=0 || num[i]>60);
                	
          		} //fecha for 1
          		igual=0;
          		
           		for(i=0;i<6;i++){
           			
               		for(j=i+1;j<=5;j++){
               			
                   		if(num[i]==num[j]){
                      	igual++;
                      	
                   		}//fecha if
               		
					} //fecha for 3
          	 	
				}//fecha for 2
				
           		if(igual>0){
              	cout<<"\n Voc� digitou n�meros iguais, digite novamente"; 
				cout<<"\n"; 
				
     			  }
     			  
				}
				
				while(igual>0); //fecha o do
				
     			mostranum();
              	getch();
              	
              	break;
              	
                }
    
      //CASE 3
	
	 case 3:{				     

					 cout<<"\n Gostaria de voltar ao inicio?"
              	        	<<"\n 1 - Sim"
              	        	<<"\n 2 - N�o"
              	        	<<"\n Digite sua op��o:";
              	        	cin>>op;
              	        	
              	        	
              	        	if(op==1)
              	        	{
              	        		goto inicio;
							  }
							  else 
							  { 
							      
							     cout<<"\n Obrigada por usar o programa <3.";
							     
								 exit(2);
							     return 2;
							  }
						break;
						
						}        
				       
    default:{ 
                cout<<"\n\n Escolha Inv�lida, tente novamente.";
                getch();
                break;
                
   }    
                    
 }
 
} 

while(op!=3);


cout<<"\n\n\n";
} 	





       //FUN��ES PARA O SORTEIO



void mostranum()
{
     ordenanum();   
     cout<<"\n\n Voc� escolheu os seguintes n�meros: \n\n";
     
     for(i=0;i<n;i++){
    	cout<<"      "<<num[i];
    	}
    
    cout<<"\n\n Aperte qualquer tecla para fazer o sorteio.\n\n\n";
    getch();
    sorteioo();   
}



void ordenanum()
{
    for(i=0;i<6;i++){
    	
        for (j=i+1;j<=5;j++){
        	
            if(num[j] < num[i]){
               aux=num[i];
               num[i]=num[j];
               num[j]=aux;
            }
            
        }
			
    }
    
}



void sorteioo()
{
     int igual;
     
     srand(time(0));
     cout<<"\n\t\t             SORTEIO            \n\n";
     do{ 
           for(i=0;i<6;i++){
           	
               sorteio[i]=rand()%60+1; 
               
           	   }
           igual=0;
           for(i=0;i<6;i++){
           	
               for(j=i+1;j<=5;j++){
               	
                   if(sorteio[i]==sorteio[j]){
                      igual++;
                   	}
               } 
           }       
     }while(igual>0); 
     mostrasorteio();     
}



void ordenasorteio()
{
    for(i=0;i<6;i++){
    	
        for(j=i+1;j<=5;j++){
        	
            if(sorteio[j] < sorteio[i]){
            	
               aux=sorteio[i];
               sorteio[i]=sorteio[j];
               sorteio[j]=aux;
            }
        }
    }
}



void mostrasorteio()
{
     ordenasorteio();
     for(i=0;i<6;i++){
        cout<<"       "<<sorteio[i];
     	}
     resultado();
} 



void resultado()
{
     int iguais[6],acertos=0,k=0;
     
     for(i=0;i<6;i++){  
	  
         for(j=0;j<6;j++){
		     
             if(num[i]==sorteio[j]){
			     
                 iguais[k]=num[i];   
                 acertos++;
                 k++;
                 j=5;
             }
             
             if(num[i]<sorteio[j]){
                 j=5;
             }
        } 
     } 
     
                        if(acertos==0)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". Ta na merda hein, compra mais ai pra tentar de novo.";
						}
						if(acertos==1)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". Melhor que nada n�, n�o perdeu dinheiro.";
						}
						if(acertos==2)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". 2 � um n�mero daora; eu acho.";
						}
						if(acertos==3)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". Meio caminho andado n�.";
						}
						if(acertos==4)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". 4 � par, eu gosto de par <3.";
						}
						if(acertos==5)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". Ainda bem, imagina gastar dinheiro e n�o ganhar nada.";
						}
						if(acertos==6)
						{
							cout<<"\n Voc� acertou:"<<acertos<<". Aeeeee vai sair do Brasil!!!!!!!";
						}
     
     for(i=0;i<acertos;i++){   
         cout<<iguais[i]<<"   ";
         
     }    
} 
