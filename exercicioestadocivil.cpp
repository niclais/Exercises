/* 02-03-2022 

int � acima de 100, numeros inteiros
float para numeros decimais
char � pra n�meros de 0 a 9

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
  cout<<"\n\n [V] para Vi�vo: ";
  cout<<"\n\n [O] para Outros: \n\n";
  cin>>letra;
 
  if ((letra=='s') || (letra=='S'))
 {
 	cout<<"\n\n Voc� � solteiro.";
 }
 else
 {
 	if((letra=='c') || (letra=='C'))
 	{
 	cout<<"\n\n Voc� � casado.";
	 }
	else
	{
		if((letra=='d') || (letra=='D'))
 		{
 		cout<<"\n\n Voc� � divorciado.";
	 	}
		else
		{
			if((letra=='v') || (letra=='V'))
 			{
 			cout<<"\n\n Voc� � vi�vo.";
			 }
			else
			{
				if((letra=='o') || (letra=='O'))
 				{
 				cout<<"\n\n Voc� � outra coisa.";
	 			}
				else
				{
				cout<<"\n\n Erro de Digita��o.";
				}
			}
		}
	}
 }
 
 cout<<"\n\n\n\n\n"; 
}
