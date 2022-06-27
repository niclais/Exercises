/*



1.Faça um Programa que peça dois números e imprima o maior deles



*/



#include <iostream>

using namespace std;
void imprimirTabuada(int num, int i, int maior, int fim);


main()

{

float num1, num2;



setlocale(LC_ALL, "Portuguese");

cout<<"\n\\t\t **** Verifique o número maior e imprima *** ";
cout<<"\n\n Digite o primeiro número:";
cin>>num1;
cout<<"\n\n Digite o segundo número";
cin>>num2;

if (num1 > num2)
{
cout<<"\n\n Este é o maior número: " <<num1;
}
  else
{

if (num2 > num1)

{

cout<<"\n\n Este é o maior número: " <<num2;

}



}

cout<<"\n\n\n\n\n";

}
