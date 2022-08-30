#include <iostream>
using namespace std;

int main() {
	

	int n = 5;//quantidade de numeros a serem lidos
	int i;//contador
	int x;//variavel auxiliar
	int soma;//soma dos numeros
	double media;// media das idades 
	
	
	//ler o numeros e calcular a soma
	soma=0;
	for(i=0;i<n;i++)
	{
		cin >> x;
		soma= soma+x;
	}
	
	//mostrar o resultado
	cout << "media=" << soma*1.0/5 << endl;
	
	
	return 0;
	
	
}