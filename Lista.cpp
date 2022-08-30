#include <iostream>
#include <list>

using namespace std;

struct no
{
	int v; // vertice do destino da aretas
	int peso; // peso da aresta
};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux; // var aux para inserir as arestas em adj
	
	aux.v = v;
	aux.peso = p;
	
	adj[u].push_back(aux);
	
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}

void bfs(list<no> adj[], int nVertices, int s)
{
	int u; // contadora e auxiliar
	int state[100]; // estado de visitacao do vertice
	int parente[100]; // parente na arvore
	list<int> Q; // lista mostrando a fila dos vertices
	list<no>::iterator p; // iterador para varrer a lista de adjacencia
	int ver; // recebe vertice adjacente

	for(u = 0; u < nVertices; u++)
	{
		if(u != s)
		{
			state[u] = -1; // nao visitado
			parente[u] = -1; // sem parentes
		}
	}

	state[s] = 0; // visitado
	parente[s] = -1;
	Q.push_back(s);

	while(!Q.empty())
	{
		u = Q.front();
		Q.pop_front();

		cout << u << endl;

		for(p = adj[u].begin(); p != adj[u].end(); p++)
		{
			ver = p->v;
            cout << u << " " << ver << endl;

            if(state[ver] == -1)
            {
                state[ver] = 0; // visitado
                parente[ver] = u; // parente
                Q.push_back(ver);
            }
		}

        state[u] = 1; // processado
	}

}

int main()
{
	list<no> adj[10]; // lista de adjacencia
	int u, v; // vertices de origem e destino de cada aresta
	int peso; // peso da aresta
	int nVertices; // numero de vertices do grafo
	int vertOrigem; // vertice de origem
    int orientado = 0; // 1: orientado, 0: nao orientado

	cin >> nVertices >> vertOrigem;
	cin >> u >> v >> peso;

	// Inserindo arestas
	while(u != -1 && v != -1 && peso != -1)
	{
		cria_aresta(adj, u, v, peso, orientado);
		
		cin >> u >> v >> peso;
	}

	bfs(adj, nVertices, vertOrigem);

	return 0;
}
