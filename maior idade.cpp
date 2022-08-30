#include <iostream>
 
using namespace std;
 
int main() {

	int i;//contador
	int x;//numeros
	int quantidade = 0;//quantidade de numeros pares

	//lendo numeros 
	for (i=0;i<5;i++){
	    
		cin >> x;
	
		if(x%2==0){
		quantidade = quantidade +1;	}
		

	}

		cout << quantidade <<" valores pares" << endl ;
	    
	    
	return 0;
	
	
}