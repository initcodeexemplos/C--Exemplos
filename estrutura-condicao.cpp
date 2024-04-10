#include <iostream>

using namespace std;

main() {
	system("chcp 65001");
	
	char genero;
	cout<<"Digite M - para masculido e F - Para feminino: ";
	cin>>genero;
	
	
	if(genero == 'M' || genero == 'm'){
		cout<<"O genero é Masculino";
	} else if(genero == 'F' || genero == 'f') {
		cout<<"O genero é Feminino";
	} else {
		cout<<"Opção inválida";
	}
	// se ele digitou M
	// escrever Masculino
	// se ele digitou F
	// escrever Feminino
}