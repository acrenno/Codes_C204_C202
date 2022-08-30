#include <iostream>
#include <list>

using namespace std;//Facilitar entrada e saída de dados


int main()
{
	list<int> pilha; //ponteiro para a pilha
	int x;//var aux para leitura de dados
	int i; //contador

	//Ler dados e inserir na pilha
	for(i = 0; i < 4; i++)
	{
		cin >> x;
		pilha.push_front(x);
	}

	//Mostrar os elementos e ir removendo
	while(!pilha.empty()) //enquanto não acabar
	{
		x = *pilha.begin();
		cout << x << " ";
		pilha.pop_front();
	}

	return 0;
}