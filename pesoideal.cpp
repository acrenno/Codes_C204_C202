#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calc_delta(float a, float b, float c){
	
	float delta = 0; //calcular delta
	float x=pow(b,2);
	float y=4*a*c;
	
	//calculando delta
	if(a=!0)
	delta= x-y;
	
	return delta;
		
}
int main(){
	
       float a,b,c; //valores segundo grau
      float delt;
       
       //entrando com os dados
       cin >> a >> b >> c;
	  
       delt =calc_delta( a, b, c);
	   
	   //mostrando delta
    
	   cout << "delta = " << delt;	
	

	
	return 0;
}