#include <iostream>
#include <iomanip> 
using namespace std;
 
int main(){
    double valor1, valor2, total;
    int peca1, num1, peca2, num2;
    
	cin >> fixed >> setprecision(2);
	cin >> peca1 >> num1 >> valor1;
	cin >> peca2 >> num2 >> valor2;
	
	total = (num1*valor1)+(num2*valor2);
	
    cout << fixed << setprecision(2); 
    cout << "VALOR A PAGAR: R$ " << total << endl;
    
    return 0;
}//fim do algoritmo
