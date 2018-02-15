#include <iostream>
#include<iomanip> 
using namespace std;
 
int main(){
 	char nome[10];
    double salario, totalvendas, total;
	cin >> nome;
	cin >> fixed >> setprecision(2);
	cin >> salario;
	cin >> totalvendas;
	total = totalvendas * 0.15 + salario;
    cout << fixed << setprecision(2); 
    cout << "TOTAL = R$ " << total << endl;
    return 0;
}//fim do algoritmo
