#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calc_a(int x){
	
	float a;
	
     a = (2*(pow(x,2)) + (3* x) - 1); 
	
	return a;
		
}

int calc_b(int x){
	
	float b;
	
     b=pow(x,3); 
	
	return b;
		
}

int calc_c(int y){
	
	float c;
	
   c=pow(y,3); 
	
	return c;
		
}
int main(){
	
       float x,y;
       float A,B,C;
      
       //entrando com os dados
       cin >> x >> y;
	  
       A=calc_a(x);
       B=calc_b(x);
       C=calc_c(y);
	   
	   //mostrando delta
    
	   cout << "a = " << A << endl;	
	   cout << "b = " << B << endl;	
	   cout << "c = " << C << endl;	
	

	
	return 0;
}