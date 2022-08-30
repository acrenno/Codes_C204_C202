#include <iostream>
#include <list>

using namespace std;
	
	int contar(list<int> lista){
		int quanti=0;
		list<int>::iterator p;
	for(p=lista.begin();p!=lista.end();p++)
		quanti++;
	
	return quanti;
	}
	
	
int main(){	
	list<int> lista;//ponteiro para a lista
	list<int>::iterator p;//interator para varrer a lista
	int resul;
	int x;
	int i;
	
	
	for(i=0;i<2;i++){
	cin>>x;
		while(x!=0){
   	     lista.push_back(x);
		 cin >> x;
	
		}}
  
  	  for(i=0;i<2;i++){
  	  while(!lista.empty()) 
	{
		x = *lista.begin(); 
		cout << x << " ";
		lista.pop_front();
	}}
	return 0;
}
	
	
