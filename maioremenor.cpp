/*



1.Fa�a um Programa que pe�a dois n�meros e imprima o maior deles



*/



#include <iostream>

using namespace std;
void imprimirTabuada(int num, int i, int maior, int fim);


main()

{

float num1, num2;



setlocale(LC_ALL, "Portuguese");

cout<<"\n\\t\t **** Verifique o n�mero maior e imprima *** ";
cout<<"\n\n Digite o primeiro n�mero:";
cin>>num1;
cout<<"\n\n Digite o segundo n�mero";
cin>>num2;

if (num1 > num2)
{
cout<<"\n\n Este � o maior n�mero: " <<num1;
}
  else
{

if (num2 > num1)

{

cout<<"\n\n Este � o maior n�mero: " <<num2;

}



}

cout<<"\n\n\n\n\n";

}
