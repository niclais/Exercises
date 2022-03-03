/* 02-03-2022 

int é acima de 100, numeros inteiros
float para numeros decimais
char é pra números de 0 a 9

fup que leia uma letra e verifique se o estado civil da pessoa:
C-casado
S-solteiro
D-divorciado
V-viuvo
O-outros

*/

#include <iostream> 

using namespace std; 
main()
{ 
    
  char letra;
    
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n\t\t Verificar estado civil";	
  cout<<"\n\n Digite uma letra:";
  cout<<"\n\n [S] para Solteiro: ";
  cout<<"\n\n [C] para Casado: ";
  cout<<"\n\n [D] para Divorciado: ";
  cout<<"\n\n [V] para Viúvo: ";
  cout<<"\n\n [O] para Outros: \n\n";
  cin>>letra;
 
  if ((letra=='s') || (letra=='S'))
 {
 	cout<<"\n\n Você é solteiro.";
 }
 else
 {
 	if((letra=='c') || (letra=='C'))
 	{
 	cout<<"\n\n Você é casado.";
	 }
	else
	{
		if((letra=='d') || (letra=='D'))
 		{
 		cout<<"\n\n Você é divorciado.";
	 	}
		else
		{
			if((letra=='v') || (letra=='V'))
 			{
 			cout<<"\n\n Você é viúvo.";
			 }
			else
			{
				if((letra=='o') || (letra=='O'))
 				{
 				cout<<"\n\n Você é outra coisa.";
	 			}
				else
				{
				cout<<"\n\n Erro de Digitação.";
				}
			}
		}
	}
 }
 
 cout<<"\n\n\n\n\n"; 
}
