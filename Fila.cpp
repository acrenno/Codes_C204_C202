#include <iostream>
#include <list>

using namespace std;//Facilitar entrada e sa�da de dados


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
	while(!fila.empty()) //enquanto n�o acabar
	{
		x = *fila.begin(); //conte�do do primeiro n� da lista
		cout << x << " ";
		fila.pop_front();//remove o primeiro n� da lista
	}
	return 0;
}