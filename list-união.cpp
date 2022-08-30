#include <iostream>
#include <list>

using namespace std;//Facilitar entrada e saída de dados

int main()
{
	list<int> lista1; //ponteiro para a lista 1
	list<int>::iterator p; //interador para varrer a lista 1
	list<int> lista2; //ponteiro para a lista 2
	list<int>::iterator q; //interador para varrer a lista 2
	int x; //elemento a ser inserido na lista 1
	int y; //elemento a ser inserido na lista 2
	

	//Insetindo os elementos na lista
	cin >> x;
	while (x != 0)
	{
		lista1.push_back(x);
		cin >> x;
		
		
	}
	cin >> y;
	while (y != 0)
	{
		
		lista2.push_back(y);
		cin >> y;
	}
	
	//Mostrando os valores em comum
	for(p = lista1.begin(); p != lista1.end(); p++)
	{
		for(q = lista2.begin(); q != lista2.end(); q++)
		{
			if (*p == *q)
			{
				cout << *p << " ";
			}
		}

	}

	return 0;
}
