#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
	
	//Variáveis
	int x2, x1, y1, y2;
	double Distancia;
	
	//Entrada de dados
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	
	// Calculo dos dados
	Distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	//Saída de dados
	cout << fixed << setprecision(4);
	cout << Distancia << endl;
 
	return 0;
}
