#include <iostream> // biblioteca para cout e cin

using namespace std; // cria uma área de trabalho

main() { // ponto de entrada, obrigatório
	system("chcp 65001"); // conjuto de caracteres- é - ã
	int num, num2;
	
	cout<<"Digite um número: ";
	cin>>num;
	
	cout<<"Digite outro número: ";
	cin>>num2;
	
	cout<<"\nA soma dos números é:"<<num+num2;
	
	double num;
	float num2;
	
	cout<<"Digite um número: ";
	cin>>num;
	
	cout<<"Digite outro número: ";
	cin>>num2;
	
	cout<<"\nA soma dos números é:"<<num+num2;
	
	char genero;
	cout<<"Digite M - para masculido e F - Para feminino";
	cin>>genero;
	
	cout<<"O genero é: "<< genero;
}