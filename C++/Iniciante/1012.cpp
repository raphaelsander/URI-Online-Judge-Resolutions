#include <iostream>
#include<iomanip> 
using namespace std;
 
int main(){
    double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;
	cin >> fixed >> setprecision(2);	cin >> A >> B >> C;
	
	pi = 3.14159;
	triangulo = A*C/2;
	quadrado = B*B;
	trapezio = (A+B)*C/2;
	circulo = pi*C*C;
	retangulo = A*B;
	
    cout << fixed << setprecision(3); 
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}//fim do algoritmo
