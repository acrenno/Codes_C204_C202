#include <iostream>
#include <list>

using namespace std;//Facilitar entrada e saída de dados


int main()
{
	list<int> fila; //ponteiro para a pilha
	int x; //var aux para leitura de dados
	int i; //contador

	//Ler dados e inserir na pilha
	for(i = 0; i < 4; i++)
	{
		cin >> x;
		fila.push_back(x);
	}

	//Mostrar os elementos e ir removendo
	while(!fila.empty()) //enquanto não acabar
	{
		x = *fila.begin(); //conteúdo do primeiro nó da lista
		cout << x << " ";
		fila.pop_front();//remove o primeiro nó da lista
	}
	return 0;
}