/*



*/


#include <iostream> 
#include <iomanip> 

using namespace std; 
main()
{     
    
  //local para declar vari�veis
  
  setlocale(LC_ALL, "Portuguese"); 
  
  // sal�rio
  
  float ganho,hrstrab,salario;
  cout << fixed << setprecision(2);
  
  
  cout<<"\n\t\t C�lculo de sal�rio";	
  cout<<"\n Informe o ganho em horas: ";
  cin>>ganho;
  
  cout<<"\n Informe o as horas trabalhadas: ";
  cin>>hrstrab;
  
  salario = ganho*hrstrab;
  cout<<"\n O sal�rio no m�s ser�:" <<salario;
 
  
  //celsius - fahrenheit
  
  float celsius,fah;
  
  cout<<"\n\t\t Convers�o de celsius pra fahrenheit";	
  cout<<"\n Informe o valor em celsius: ";
  cin>>celsius;	
  
  fah =(9*celsius+160)/5;
  cout<<"\n A convers�o em fahrenheit fica:" <<fah;
  
  //altura - peso ideal
  
  float altura,pesoid;
  
  cout<<"\n\t\t Peso ideal para altura";	
  cout<<"\n Informe a altura: ";
  cin>>altura;
  
  pesoid = (72.7*altura)-58;
  cout<<"\n O peso ideal seria: " <<pesoid;
  
  float valor1,valor2,troca;
  
  cout<<"\n\t\t Invers�o de valores:";	
  cout<<"\n Informe o primeiro valor: ";
  cin>>valor1;
  
  cout<<"\n\t\t Invers�o de valores:";	
  cout<<"\n Informe o segundo valor: ";
  cin>>valor2;
  
  troca=valor1;
  valor1=valor2;
  valor2=troca;
  
  
  cout<<"\n O primeiro valor fica: " <<valor1;
  cout<<"\n O segundo valor fica: " <<valor2;
 
 cout<<"\n\n\n\n\n"; 
}


