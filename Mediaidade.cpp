#include <iostream>
using namespace std;

int main() {
	

	int n = 5;//quantidade de numeros a serem lidos
	int i;//contador
	int idade;//variavel auxiliar
	int am;
	
	//lendo as idades e identificando a maior
	maioridade=-1;
	for (i=0;i<5;i++) {
		
		cin >> idade;
		if(idade>maioridade)
			maioridade=idade;
	}
	
	//resultado
	cout << maioridade << endl;
	
	return 0;
	
	
}