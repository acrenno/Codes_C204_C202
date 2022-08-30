#include <iostream>

using namespace std;

int main(){

	 int i;//aux
	 int X;//numero
	 int fat=1;//fatorial
     int ant1;
     int ant2;
     int fib;
     int aux;
     
	 cin >> X;
	 	
	 for(i=0;i<=X;i++){
	 	
	 	if(X%2==0){{
		 
     if(i==0 || i==1)
	  fat=1;
     else
 	  fat= fat*i;	 }
   
      cout << fat << endl;}
		 
	 else(X%2!=0);{
	 	
     	if(i==0){
     		fib=0;
     	    ant1=0;}
     	    
        else if(i==1){
        	fib=1;
            ant2=1; }
            
        else {
			aux=fib;
			fib=ant1+ant2;
			ant1=aux;
			ant2=fib;

		}
		cout << fib << endl;
		}
        	
     		 
		 
	 } 	 
		 
		return 0;
}