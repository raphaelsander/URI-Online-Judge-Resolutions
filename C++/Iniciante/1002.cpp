#include <iostream>
#include <iomanip> 
using namespace std;
 
int main(){ 
    double area, raio, pi;
	
	pi = 3.14159 ;
    
    cin >> raio; 
    
    area = pi * (raio * raio); 
    
    cout << fixed << setprecision(4); 
    cout << "A=" << area << endl;
    
    return 0;
}//fim do algoritmo
