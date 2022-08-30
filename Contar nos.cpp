#include <iostream>
#include <list>

using namespace std;
	
	int soma(list<int> lista){
		int soma=0;
		list<int>::iterator p;
	for(p=lista.begin();p!=lista.end();p++)
		soma=soma+*p;
	
	return soma;
	}
	
	
int main(){	
	list<int> lista;//ponteiro para a lista
	int resul;
	int x;
	
	cin>>x;
		while(x!=0){
   	     lista.push_front(x);
		 cin >> x;
	
		}
  
  	 resul=soma(lista) ;
  	 cout << resul;
	
	
	
	return 0;
}